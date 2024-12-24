#pragma once
#include "../../framework.h"

class PlayerState {
private:
	PlayerState() = default;
public:
	static inline void (*ServerSetInAircraftOG)(AFortPlayerState*, bool);

	static void ServerSetInAircraft(AFortPlayerState* PlayerState, bool bNewInAircraft);
};