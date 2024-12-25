#pragma once
#include "../../framework.h"

class Vehicles {
private:
	Vehicles() = default;
public:
	inline static void (*ServerAttemptExitVehicleOG)(AFortPlayerController* PlayerController);
	inline static void (*ServerRequestSeatChangeOG)(AFortPlayerController* PlayerController, int32 TargetSeatIndex);

	static void SpawnVehicles();
	static void ServerMove(AFortPhysicsPawn* PhysicsPawn, FReplicatedPhysicsPawnState InState);
	static void GiveVehicleWeapon(AFortPlayerControllerAthena* PlayerController, AFortAthenaVehicle* Vehicle);
	static void ServerAttemptExitVehicle(AFortPlayerControllerZone* PlayerController);
	static void ServerRequestSeatChange(AFortPlayerControllerZone* PlayerController, int32 TargetSeatIndex);
};