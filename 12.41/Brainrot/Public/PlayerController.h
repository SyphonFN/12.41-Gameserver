#pragma once
#include "../../framework.h"

class PlayerController {
private:
	PlayerController() = default;
public:
	static inline void (*ServerCreateBuildingActorOG)(AFortPlayerControllerAthena* PlayerController, FCreateBuildingActorData& CreateBuildingData);
	static inline void (*ServerReadyToStartMatchOG)(AFortPlayerControllerAthena* PlayerController);
	static inline ABuildingSMActor* (*BuildingSMActorReplaceBuilding)(ABuildingSMActor*, __int64, UClass*, int, int, uint8, AFortPlayerController*);
	static inline int64(*CantBuild)(UObject*, UObject*, FVector, FRotator, char, TArray<ABuildingSMActor*>*, char*);
	static inline void (*OnDamageServerOG)(ABuildingSMActor*, float, FGameplayTagContainer&, FVector&, FHitResult&, AFortPlayerControllerAthena*, AActor*, FGameplayEffectContextHandle&);
	static inline AActor* (*SpawnToyInstanceOG)(AFortPlayerControllerAthena*, TSubclassOf<AActor>, FTransform&);

	static void ServerAcknowledgePossession(AFortPlayerControllerAthena* PlayerController, APawn* P);
	static void ServerAttemptAircraftJump(UFortControllerComponent_Aircraft* ControllerComponent, FRotator& ClientRotation);
	static void ServerExecuteInventoryItem(AFortPlayerControllerAthena* PlayerController, FGuid& ItemGuid);
	static void ServerCreateBuildingActor(AFortPlayerControllerAthena* PlayerController, FCreateBuildingActorData& CreateBuildingData);
	static void ServerBeginEditingBuildingActor(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToEdit);
	static void ServerEditBuildingActor(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToEdit, TSubclassOf<ABuildingSMActor> NewBuildingClass, uint8 RotationIterations, bool bMirrored);
	static void ServerEndEditingBuildingActor(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToStopEditing);
	static void ServerCheat(AFortPlayerControllerAthena* PlayerController, FString& Msg);
	static void ServerReadyToStartMatch(AFortPlayerControllerAthena* PlayerController);
	static void OnDamageServer(ABuildingSMActor* ABuildingActor, float Damage, FGameplayTagContainer& DamageTags, FVector& Momentum, FHitResult& HitInfo, AFortPlayerControllerAthena* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle& EffectContext);
	static void GetPlayerViewPoint(AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator& Rotation);
	static void ServerPlayEmoteItem(AFortPlayerControllerAthena* PlayerController, UFortMontageItemDefinitionBase* EmoteAsset, float EmoteRandomNumber);
	static void GiveModifiers(AFortPlayerControllerAthena* PlayerController, UFortPlaylistAthena* Playlist);
};