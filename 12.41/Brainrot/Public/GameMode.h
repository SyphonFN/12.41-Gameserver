#pragma once
#include "../../framework.h"

class GameMode {
private:
	GameMode() = default;
public:
	static inline bool (*ReadyToStartMatchOG)(AFortGameModeAthena* GameMode);

	static bool ReadyToStartMatch(AFortGameModeAthena* GameMode);
	static APawn* SpawnDefaultPawnFor(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot);
};