#include "../Public/PlayerController.h"
#include "../Public/Utilities.h"
#include "../Public/GameplayAbilities.h"
#include "../Public/FortInventory.h"
#include "../Public/GameMode.h"
#include "../Public/Vehicles.h"

void InitPlayer(AFortPlayerControllerAthena* PlayerController) {
	AFortPlayerStateAthena* PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
	AFortPlayerPawnAthena* PlayerPawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);
	UFortPlaylistAthena* Playlist = GetPlaylist();
	UFortAbilitySystemComponent* AbilitySystemComponent = PlayerPawn->AbilitySystemComponent;
	UFortAbilitySet* AbilitySet = StaticFindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");

	if (!PlayerState || !PlayerPawn || !Playlist || !AbilitySystemComponent || !AbilitySet)
		return;

	UFortKismetLibrary::UpdatePlayerCustomCharacterPartsVisualization(PlayerState);

	PlayerController->XPComponent->bRegisteredWithQuestManager = true;
	PlayerState->SeasonLevelUIDisplay = PlayerController->XPComponent->CurrentLevel;
	PlayerController->XPComponent->OnRep_bRegisteredWithQuestManager();
	PlayerState->OnRep_SeasonLevelUIDisplay();

	bool bHasStarterItems = false;
	for (auto& ItemEntry : PlayerController->WorldInventory->Inventory.ReplicatedEntries) {
		if (ItemEntry.ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass())) {
			bHasStarterItems = true;
			std::cout << std::format("{} already has starter items", PlayerState->GetPlayerName().ToString()) << std::endl;
			break;
		}
	}

	if (!bHasStarterItems) {
        FortInventory::GiveItem(PlayerController, PlayerController->CosmeticLoadoutPC.Pickaxe->WeaponDefinition, 1, 0, false, false);
		for (FItemAndCount& Item : GetGameMode()->StartingItems) {
            if (Item.Item->IsA(UFortResourceItemDefinition::StaticClass())) continue;
            FortInventory::GiveItem(PlayerController, Item.Item, Item.Count, 0, false, false);
		}
	}

	if (!AbilitySet) { std::cout << "Failed to find AbilitySet" << std::endl; return; }

	for (auto& Ability : AbilitySet->GameplayAbilities) {

		if (!Ability.Get()) { std::cout << "Ability is null" << std::endl; continue; }
		Abilities::GiveAbility((AFortPlayerPawnAthena*)PlayerController->MyFortPawn, (UGameplayAbility*)Ability.Get()->DefaultObject);
	}

	for (auto& GrantedGameplayEffect : AbilitySet->GrantedGameplayEffects) {
		AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(GrantedGameplayEffect.GameplayEffect.Get(), GrantedGameplayEffect.Level, FGameplayEffectContextHandle());
	}

    PlayerController::GiveModifiers(PlayerController, Playlist);

    PlayerController->DiscoverabilityComponent->DiscoverAllPois();
    PlayerController->DiscoverabilityComponent->DiscoverAllAreas();
    PlayerController->DiscoverabilityComponent->DiscoverAllLandmarks();
}

void PlayerController::ServerAcknowledgePossession(AFortPlayerControllerAthena* PlayerController, APawn* P) {
	PlayerController->AcknowledgedPawn = P;

	InitPlayer(PlayerController);
}

void PlayerController::ServerAttemptAircraftJump(UFortControllerComponent_Aircraft* ControllerComponent, FRotator& ClientRotation)
{
	AFortPlayerControllerAthena* PlayerController = Cast<AFortPlayerControllerAthena>(ControllerComponent->GetOwner());
	AFortGameModeAthena* GameMode = GetGameMode();

	if (!PlayerController || !GameMode)
		return;

	{
		AActor* StartSpot = GameMode->FindPlayerStart(PlayerController, FString()); 

		if (!StartSpot)
			return;

		FRotator SpawnRotation = ClientRotation; 

	    if (GameMode->GetDefaultPawnClassForController(PlayerController) != nullptr) {
			APawn* NewPawn = GameMode->SpawnDefaultPawnFor(PlayerController, StartSpot);
			if (NewPawn) {
				PlayerController->Pawn = NewPawn;
			}
		}

		if (!PlayerController->K2_GetPawn()) {
			std::cout << "No Pawn" << std::endl;
		}
		else {
			GameMode->InitStartSpot(StartSpot, PlayerController); 

			PlayerController->Possess(PlayerController->K2_GetPawn());

			PlayerController->ClientSetRotation(SpawnRotation, true);
			FRotator NewControllerRot = SpawnRotation;
			NewControllerRot.Roll = 0.f;
			PlayerController->SetControlRotation(NewControllerRot);

			GameMode->K2_OnRestartPlayer(PlayerController); 

			((AFortPlayerPawnAthena*)PlayerController->K2_GetPawn())->BeginSkydiving(true);
		}
	}
}

void PlayerController::ServerExecuteInventoryItem(AFortPlayerControllerAthena* PlayerController, FGuid& ItemGuid) {

	if (!PlayerController ||  !PlayerController->MyFortPawn ||PlayerController->IsInAircraft()) return;

	UFortWeaponItemDefinition* ItemDefinition = nullptr;	

	for (auto ItemEntry : PlayerController->WorldInventory->Inventory.ReplicatedEntries) {
		if (ItemEntry.ItemGuid == ItemGuid) {

			if (ItemEntry.ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass())) {
				ItemDefinition = Cast<UFortWeaponItemDefinition>(ItemEntry.ItemDefinition);
				break;
			}
			else if (ItemEntry.ItemDefinition->IsA(UFortDecoItemDefinition::StaticClass())) {
				return;
			}
			else {
				return;
			}
		}
	}
	if (ItemDefinition != nullptr)
	   PlayerController->MyFortPawn->EquipWeaponDefinition(ItemDefinition, ItemGuid);
}

void PlayerController::ServerCreateBuildingActor(AFortPlayerControllerAthena* PlayerController, FCreateBuildingActorData& CreateBuildingData) {
    if (!PlayerController || PlayerController->IsInAircraft())
        return;

    CantBuild = decltype(CantBuild)(InSDKUtils::GetImageBase() + 0x1E57790);

    auto BuildingClass = PlayerController->BroadcastRemoteClientInfo->RemoteBuildableClass.Get();
    if (!BuildingClass) { std::cout << "BuildingClass is null" << std::endl; return; }

    TArray<ABuildingSMActor*> ExistingBuildings;
    char BuildRestrictionFlag;
    if (CantBuild(GetWorld(), BuildingClass, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, CreateBuildingData.bMirrored, &ExistingBuildings, &BuildRestrictionFlag)) { return; }

    auto NewBuilding = SpawnActor<ABuildingSMActor>(CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, BuildingClass);
    if (!NewBuilding) { std::cout << "Failed to spawn NewBuilding" << std::endl; return; }

    NewBuilding->bPlayerPlaced = true;
    auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
    NewBuilding->TeamIndex = PlayerState->TeamIndex;
    NewBuilding->Team = static_cast<EFortTeam>(PlayerState->TeamIndex);
    NewBuilding->OnRep_Team();
    NewBuilding->InitializeKismetSpawnedBuildingActor(NewBuilding, PlayerController, true);

    for (auto& Building : ExistingBuildings) {
        Building->K2_DestroyActor();
    }
    ExistingBuildings.Free();

    auto ItemDefinition = UFortKismetLibrary::K2_GetResourceItemDefinition(NewBuilding->ResourceType);
    FortInventory::RemoveItem(PlayerController, FortInventory::FindItemEntry(PlayerController, ItemDefinition)->ItemGuid, 10);
}

void PlayerController::ServerBeginEditingBuildingActor(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToEdit) {
    if (!PlayerController || !BuildingActorToEdit || !PlayerController->MyFortPawn)
        return;

    auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
    if (!PlayerState) { std::cout << "PlayerState is null" << std::endl; return; }

    auto EditToolItemDefinition = StaticFindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");
    if (!EditToolItemDefinition) { std::cout << "Failed to find EditToolItemDefinition" << std::endl; return; }

    auto CurrentWeapon = PlayerController->MyFortPawn->CurrentWeapon;
    if (CurrentWeapon->WeaponData != EditToolItemDefinition) {
        if (auto ItemEntry = FortInventory::FindItemEntry(PlayerController, EditToolItemDefinition)) {
            PlayerController->ServerExecuteInventoryItem(ItemEntry->ItemGuid);
        }
    }

    auto EditTool = static_cast<AFortWeap_EditingTool*>(PlayerController->MyFortPawn->CurrentWeapon);
    if (!EditTool) { std::cout << "EditTool is null" << std::endl; return; }

    EditTool->EditActor = BuildingActorToEdit;
    EditTool->OnRep_EditActor();
    BuildingActorToEdit->EditingPlayer = PlayerState;
    BuildingActorToEdit->OnRep_EditingPlayer();
}

void PlayerController::ServerEditBuildingActor(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToEdit, TSubclassOf<ABuildingSMActor> NewBuildingClass, uint8 RotationIterations, bool bMirrored) {
    if (!BuildingActorToEdit || !NewBuildingClass.Get() || BuildingActorToEdit->bDestroyed || BuildingActorToEdit->EditingPlayer != Cast<AFortPlayerStateAthena>(PlayerController->PlayerState))
        return;

    BuildingSMActorReplaceBuilding = decltype(BuildingSMActorReplaceBuilding)(InSDKUtils::GetImageBase() + 0x1B951B0);

    BuildingActorToEdit->EditingPlayer = nullptr;

    if (auto NewBuilding = BuildingSMActorReplaceBuilding(BuildingActorToEdit, 1, NewBuildingClass.Get(), BuildingActorToEdit->CurrentBuildingLevel, RotationIterations, bMirrored, PlayerController)) {
        NewBuilding->bPlayerPlaced = true;
        NewBuilding->SetTeam(Cast<AFortPlayerStateAthena>(PlayerController->PlayerState)->TeamIndex);
        NewBuilding->OnRep_Team();
    }
}

void PlayerController::ServerEndEditingBuildingActor(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToStopEditing) {
    if (!PlayerController || !BuildingActorToStopEditing || BuildingActorToStopEditing->EditingPlayer != Cast<AFortPlayerStateAthena>(PlayerController->PlayerState) || !PlayerController->MyFortPawn)
        return;

    BuildingActorToStopEditing->SetNetDormancy(ENetDormancy::DORM_DormantAll);
    BuildingActorToStopEditing->EditingPlayer = nullptr;

    auto EditTool = static_cast<AFortWeap_EditingTool*>(PlayerController->MyFortPawn->CurrentWeapon);
    if (!EditTool) { std::cout << "No EditTool" << std::endl; return; }

    EditTool->EditActor = nullptr;
    EditTool->OnRep_EditActor();
}

void PlayerController::ServerCheat(AFortPlayerControllerAthena* PlayerController, FString& Msg) {
	std::string Command = Msg.ToString();

	if (Command == "startevent") {
        auto BP_Jerky_Loader_C = StaticFindObject<UClass>("/CycloneJerky/Gameplay/BP_Jerky_Loader.BP_Jerky_Loader_C");

        TArray<AActor*> BP_Jerky_Loader_Cs;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), BP_Jerky_Loader_C, &BP_Jerky_Loader_Cs);

        for (auto Jerky_Loader : BP_Jerky_Loader_Cs) {
            UFunction* Func = UObject::FindObject<UObject>("BP_Jerky_Loader_C JerkyLoaderLevel.JerkyLoaderLevel.PersistentLevel.BP_Jerky_Loader_2")->Class->GetFunction("BP_Jerky_Loader_C", "startevent");
            float Params = 0.f;
            Jerky_Loader->ProcessEvent(Func, &Params);
        }
	}
}

void PlayerController::ServerReadyToStartMatch(AFortPlayerControllerAthena* PlayerController) {

	if (!PlayerController)
		return;

	AFortPlayerStateAthena* PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
	AFortGameStateAthena* GameState = GetGameState();

	if (!PlayerState || !GameState)
		return;

	FGameMemberInfo MemberInfo{ -1, -1, -1 };
	MemberInfo.SquadId = PlayerState->SquadId;
	MemberInfo.MemberUniqueId = PlayerState->UniqueId;
	MemberInfo.TeamIndex = PlayerState->TeamIndex;

	GameState->GameMemberInfoArray.Members.Add(MemberInfo);
	GameState->GameMemberInfoArray.MarkArrayDirty();

	return ServerReadyToStartMatchOG(PlayerController);
}

void PlayerController::OnDamageServer(ABuildingSMActor* ABuildingActor, float Damage, FGameplayTagContainer& DamageTags, FVector& Momentum, FHitResult& HitInfo, AFortPlayerControllerAthena* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle& EffectContext) {
    if (!ABuildingActor || !InstigatedBy || !DamageCauser)
        return OnDamageServerOG(ABuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

    if (!InstigatedBy->IsA(AFortPlayerControllerAthena::StaticClass()) ||
        !DamageCauser->IsA(AFortWeapon::StaticClass()) ||
        !((AFortWeapon*)DamageCauser)->WeaponData->IsA(UFortWeaponMeleeItemDefinition::StaticClass()) ||
        ABuildingActor->bPlayerPlaced) {
        return OnDamageServerOG(ABuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
    }

    UFortResourceItemDefinition* ResourceItemDefinition = UFortKismetLibrary::K2_GetResourceItemDefinition(ABuildingActor->ResourceType);
    if (!ResourceItemDefinition)
        return OnDamageServerOG(ABuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

    float Average = 0.0f;
    UFortKismetLibrary::EvaluateCurveTableRow(ABuildingActor->BuildingResourceAmountOverride, 0.f, &Average, FString());
    float ResourceAmount = round(Average / (ABuildingActor->GetMaxHealth() / Damage));
    if (ResourceAmount <= 0)
        return OnDamageServerOG(ABuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

    InstigatedBy->ClientReportDamagedResourceBuilding(ABuildingActor, ABuildingActor->ResourceType, ResourceAmount, false, Damage == 100.f);
    FortInventory::GiveItem(InstigatedBy, ResourceItemDefinition, ResourceAmount, 0, true, false);

    return OnDamageServerOG(ABuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}

void PlayerController::GetPlayerViewPoint(AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator& Rotation) {
    if (!PlayerController)
        return;

    if (PlayerController->StateName.ComparisonIndex == Sigma(L"Spectating").ComparisonIndex) {
        Location = PlayerController->LastSpectatorSyncLocation;
		Rotation = PlayerController->LastSpectatorSyncRotation;
    }
    else if (PlayerController->GetViewTarget()) {
        Location = PlayerController->GetViewTarget()->K2_GetActorLocation();
        Rotation = PlayerController->GetControlRotation();
    }
}

void PlayerController::ServerPlayEmoteItem(AFortPlayerControllerAthena* PlayerController, UFortMontageItemDefinitionBase* EmoteAsset, float EmoteRandomNumber) {
    if (!PlayerController || !EmoteAsset)
        return;

    UClass* DanceAbility = StaticLoadObject<UClass>("/Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C");
    UClass* SprayAbility = StaticLoadObject<UClass>("/Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C");

    if (!DanceAbility || !SprayAbility)
        return;

    auto EmoteDef = (UAthenaDanceItemDefinition*)EmoteAsset;
    if (!EmoteDef)
        return;

    PlayerController->MyFortPawn->bMovingEmote = EmoteDef->bMovingEmote;
    PlayerController->MyFortPawn->EmoteWalkSpeed = EmoteDef->WalkForwardSpeed;
    PlayerController->MyFortPawn->bMovingEmoteForwardOnly = EmoteDef->bMoveForwardOnly;
    PlayerController->MyFortPawn->EmoteWalkSpeed = EmoteDef->WalkForwardSpeed;

    FGameplayAbilitySpec Spec{};
    UGameplayAbility* Ability = nullptr;

    if (EmoteAsset->IsA(UAthenaSprayItemDefinition::StaticClass()))
    {
        Ability = (UGameplayAbility*)SprayAbility->DefaultObject;
    }
    else if (EmoteAsset->IsA(UAthenaToyItemDefinition::StaticClass())) {
        std::cout << "Ill add later" << std::endl;
    }

    if (Ability == nullptr) {
		Ability = (UGameplayAbility*)DanceAbility->DefaultObject;
    }

    Abilities::SpecConstructor(&Spec, Ability, 1, -1, EmoteDef);
    Abilities::GiveAbilityAndActivateOnce(((AFortPlayerStateAthena*)PlayerController->PlayerState)->AbilitySystemComponent, &Spec.Handle, Spec);
}

void PlayerController::GiveModifiers(AFortPlayerControllerAthena* PlayerController, UFortPlaylistAthena* Playlist) {
    for (auto& Modifier : Playlist->ModifierList) {

        for (auto& PersistentAbilitySet : Modifier->PersistentAbilitySets) {

            if (Modifier->PersistentAbilitySets.Num() == 0) { std::cout << "No PersistentAbilitySets in Modifier" << std::endl; continue; }

            if (PersistentAbilitySet.DeliveryRequirements.bApplyToPlayerPawns) {
                for (auto& AbilitySet : PersistentAbilitySet.AbilitySets) {

                    if (AbilitySet.ObjectID.AssetPathName.GetRawString() == "None") continue;

                    UFortAbilitySet* AbilitySetClass = StaticLoadObject<UFortAbilitySet>(AbilitySet.ObjectID.AssetPathName.GetRawString());
                    if (!AbilitySetClass) { std::cout << "Failed to load AbilitySetClass" << std::endl; continue; }

                    for (auto& Ability : AbilitySetClass->GameplayAbilities) {

                        if (!Ability.Get()) { std::cout << "GameplayAbility is null, skipping" << std::endl; continue; }

                        auto DefaultAbility = Ability.Get()->DefaultObject;
                        if (!DefaultAbility) { std::cout << "DefaultObject for Ability is null" << std::endl; continue; }

                        std::cout << "Giving ability: " << DefaultAbility->GetName() << std::endl;
                        Abilities::GiveAbility((AFortPlayerPawnAthena*)PlayerController->MyFortPawn, (UGameplayAbility*)DefaultAbility);
                    }

                    for (auto& GrantedGameplayEffect : AbilitySetClass->GrantedGameplayEffects) {
                        if (!GrantedGameplayEffect.GameplayEffect.Get()) { std::cout << "GrantedGameplayEffect is null" << std::endl; continue; }

                        std::cout << "Giving effect: " << GrantedGameplayEffect.GameplayEffect.Get()->GetName() << std::endl;

                        auto AbilitySystemComponent = PlayerController->MyFortPawn->AbilitySystemComponent;
                        if (!AbilitySystemComponent) { std::cout << "AbilitySystemComponent is null" << std::endl; continue; }

                        AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(GrantedGameplayEffect.GameplayEffect.Get(), GrantedGameplayEffect.Level, FGameplayEffectContextHandle());
                    }
                }
            }

            if (PersistentAbilitySet.DeliveryRequirements.bApplyToBuildingActors) {
                for (auto& AbilitySet : PersistentAbilitySet.AbilitySets) {
                    break;
                }
            }
        }

        for (auto& PersistentGameplayEffect : Modifier->PersistentGameplayEffects) {
            if (Modifier->PersistentGameplayEffects.Num() == 0) {
                continue;
            }

            if (PersistentGameplayEffect.DeliveryRequirements.bApplyToPlayerPawns) {
                for (auto& GameplayEffect : PersistentGameplayEffect.GameplayEffects) {
                    if (GameplayEffect.GameplayEffect.ObjectID.AssetPathName.GetRawString() == "None") continue;

                    std::cout << "Giving effect: " << GameplayEffect.GameplayEffect.ObjectID.AssetPathName.GetRawString() << std::endl;

                    UClass* GameplayEffectClass = StaticLoadObject<UClass>(GameplayEffect.GameplayEffect.ObjectID.AssetPathName.GetRawString());
                    if (!GameplayEffectClass) { std::cout << "Failed to load GameplayEffectClass" << std::endl; continue; }

                    auto AbilitySystemComponent = PlayerController->MyFortPawn->AbilitySystemComponent;
                    if (!AbilitySystemComponent) { std::cout << "AbilitySystemComponent is null" << std::endl; continue; }

                    AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(GameplayEffectClass, GameplayEffect.Level, FGameplayEffectContextHandle());
                }
            }

            if (PersistentGameplayEffect.DeliveryRequirements.bApplyToBuildingActors) {
                for (auto& GameplayEffect : PersistentGameplayEffect.GameplayEffects) {
                    std::cout << std::format("Building actor GameplayEffect: {}", GameplayEffect.GameplayEffect.Get()->GetName()) << std::endl;
                }
            }
        }
    }
}