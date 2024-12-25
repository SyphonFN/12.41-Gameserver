#include "../Public/BuildingContainer.h"
#include "../Public/FortInventory.h"
#include "../Public/Utilities.h"
#include "../Public/Vehicles.h"

void BuildingContainer::ServerAttemptInteract(UFortControllerComponent_Interaction* ControllerComp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestId) {

	ServerAttemptInteractOG(ControllerComp, ReceivingActor, InteractComponent, InteractType, OptionalObjectData, InteractionBeingAttempted, RequestId);

	if (!ControllerComp || !ReceivingActor)
		return ServerAttemptInteractOG(ControllerComp, ReceivingActor, InteractComponent, InteractType, OptionalObjectData, InteractionBeingAttempted, RequestId);

	AFortPlayerControllerAthena* PlayerController = Cast<AFortPlayerControllerAthena>(ControllerComp->GetOwner());
	if (!PlayerController) {
		return ServerAttemptInteractOG(ControllerComp, ReceivingActor, InteractComponent, InteractType, OptionalObjectData, InteractionBeingAttempted, RequestId);
	}

	if (auto Vehicle = Cast<AFortAthenaVehicle>(ReceivingActor)) {
		Vehicles::GiveVehicleWeapon(PlayerController, Vehicle);
	}
}