#include "../Public/BuildingContainer.h"
#include "../Public/FortInventory.h"

void BuildingContainer::ServerAttemptInteract(UFortControllerComponent_Interaction* ControllerComp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestId) {

	if (!ControllerComp || !ReceivingActor || !InteractComponent)
		return ServerAttemptInteractOG(ControllerComp, ReceivingActor, InteractComponent, InteractType, OptionalObjectData, InteractionBeingAttempted, RequestId);

	std::cout << std::format("ServerAttemptInteract: {}", ReceivingActor->GetName()) << std::endl;

	return ServerAttemptInteractOG(ControllerComp, ReceivingActor, InteractComponent, InteractType, OptionalObjectData, InteractionBeingAttempted, RequestId);
}