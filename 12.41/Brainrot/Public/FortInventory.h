 #pragma once
#include "../../framework.h"

class FortInventory {
private:
	FortInventory() = default;
public:
	static FFortItemEntry* FindItemEntry(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition);
	static FFortItemEntry* FindItemEntry(AFortPlayerController* PlayerController, FGuid* Guid);
	static void GiveItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefintion, int Count = 1, int LoadedAmmo = 0, bool bStack = false, bool bShowToast = true);
	static void RemoveItem(AFortPlayerController* PlayerController, FGuid Guid, int Count);
	static void RemoveAllDroppableItems(AFortPlayerControllerAthena* PlayerController);
};