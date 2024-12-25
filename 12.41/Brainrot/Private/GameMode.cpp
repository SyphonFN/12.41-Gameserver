#include "../Public/GameMode.h"
#include "../Public/Utilities.h"
#include "../Public/NetDriver.h"
#include "../Public/Vehicles.h"

bool GameMode::ReadyToStartMatch(AFortGameModeAthena* GameMode) {

    auto GameState = (AFortGameStateAthena*)GameMode->GameState;
    auto World = GetWorld();

	static bool bShowFoundations = false;
    if (!bShowFoundations) {
        for (auto& BuildingFoundation : GetAllActorsOfClass<ABuildingFoundation>()) {

            if (BuildingFoundation->GetName().contains("Jerky") || BuildingFoundation->GetName().contains("LF_Athena_POI_19x19_2")) {
                std::cout << std::format("Showing foundation: {}", BuildingFoundation->GetName()) << std::endl;
                ShowFoundation(BuildingFoundation);
            }
        }
        GetAllActorsOfClass<ABuildingFoundation>().Free();
        bShowFoundations = true;
    }

    if (!GameState || !GameState->MapInfo)
        return false;

    static bool bPlaylist = false;
    if (!bPlaylist) {
        UFortPlaylistAthena* Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");

        if (!Playlist)
            return false;

        FPlaylistPropertyArray PlaylistPropertyArray;
        PlaylistPropertyArray.BasePlaylist = Playlist;
        PlaylistPropertyArray.OverridePlaylist = Playlist;
        PlaylistPropertyArray.ArrayReplicationKey++;
        PlaylistPropertyArray.PlaylistReplicationKey++;
        PlaylistPropertyArray.BasePlaylist->AISettings = Playlist->AISettings;
        PlaylistPropertyArray.MarkArrayDirty();

        GameState->CurrentPlaylistInfo = PlaylistPropertyArray;
        GameState->CurrentPlaylistId = Playlist->PlaylistId;
        GameState->AirCraftBehavior = Playlist->AirCraftBehavior;

        GameState->OnRep_CurrentPlaylistInfo();
        GameState->OnRep_CurrentPlaylistId();

        GameMode->CurrentPlaylistId = Playlist->PlaylistId;
        GameMode->CurrentPlaylistName = Playlist->PlaylistName;
        GameMode->WarmupRequiredPlayerCount = 1;

        for (auto& AdditionalLevel : GetPlaylist()->AdditionalLevels) {
            std::cout << std::format("Loading level: {}", AdditionalLevel.ObjectID.AssetPathName.ToString()) << std::endl;
            ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(GetWorld(), AdditionalLevel, {}, {}, nullptr, FString());
            GameState->AdditionalPlaylistLevelsStreamed.Add(FAdditionalLevelStreamed{ AdditionalLevel.ObjectID.AssetPathName, false });
        }
        for (auto& AdditionalLevel : GetPlaylist()->AdditionalLevelsServerOnly) {
            std::cout << std::format("Loading server level: {}", AdditionalLevel.ObjectID.AssetPathName.ToString()) << std::endl;
            ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(GetWorld(), AdditionalLevel, {}, {}, nullptr, FString());
            GameState->AdditionalPlaylistLevelsStreamed.Add(FAdditionalLevelStreamed{ AdditionalLevel.ObjectID.AssetPathName, true });
        }

        GameState->OnRep_AdditionalPlaylistLevelsStreamed();
        GameState->OnFinishedStreamingAdditionalPlaylistLevel();

        for (auto& VendingMachine : GetAllActorsOfClass<ABuildingItemCollectorActor>()) {
            if (VendingMachine->GetName().contains("B_Athena_Wumba")) continue;
            VendingMachine->K2_DestroyActor();
        }
        GetAllActorsOfClass<ABuildingItemCollectorActor>().Free();

        bPlaylist = true;
    }

    static bool bListen = false;
    if (!bListen) {
        bListen = true;

        World->NetDriver = NetDriver::CreateNetDriver(UFortEngine::GetEngine(), GetWorld(), Sigma(L"GameNetDriver"));
        World->NetDriver->NetDriverName = Sigma(L"GameNetDriver");
        World->NetDriver->World = World;

        FString Error;
        FURL LocalURL = FURL();
        LocalURL.Port = 7777;

        NetDriver::InitListen(World->NetDriver, World, LocalURL, false, Error);
        NetDriver::SetWorld(World->NetDriver, World);

        for (auto& Collection : World->LevelCollections)
        {
            Collection.NetDriver = World->NetDriver;
        }

        if ((World->NetDriver->MaxInternetClientRate < World->NetDriver->MaxClientRate) && (World->NetDriver->MaxInternetClientRate > 2500))
        {
            World->NetDriver->MaxClientRate = World->NetDriver->MaxInternetClientRate;
        }

        GameMode->bWorldIsReady = true;

		Vehicles::SpawnVehicles();

        std::cout << "Listening!" << std::endl;
    }

    return GameMode->AlivePlayers.Num() > 0;
}

APawn* GameMode::SpawnDefaultPawnFor(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot) {
	auto NewPawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, StartSpot->GetTransform());

	if (NewPawn)
		return NewPawn;

	return nullptr;
}  