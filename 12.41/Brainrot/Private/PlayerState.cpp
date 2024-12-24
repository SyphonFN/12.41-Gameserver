#include "../Public/PlayerState.h"
#include "../Public/Utilities.h"
#include "../Public/FortInventory.h"

void PlayerState::ServerSetInAircraft(AFortPlayerState* PlayerState, bool bNewInAircraft) {
	if (!PlayerState)
		return;

	auto PlayerController = Cast<AFortPlayerControllerAthena>(PlayerState->GetOwner());
	if (!PlayerController)
		return;

	FortInventory::RemoveAllDroppableItems(PlayerController);

	return ServerSetInAircraftOG(PlayerState, bNewInAircraft);
}