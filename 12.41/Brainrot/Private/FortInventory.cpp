#include "../Public/FortInventory.h"
#include "../Public/Utilities.h"

void FortInventory::GiveItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefintion, int Count, int LoadedAmmo, bool bStack, bool bShowToast) {
	auto Item = Cast<UFortWorldItem>(ItemDefintion->CreateTemporaryItemInstanceBP(Count, 1));
	if (!bStack) {
		Item->OwnerInventory = PlayerController->WorldInventory;
		Item->SetOwningControllerForTemporaryItem(PlayerController);

		Item->ItemEntry.LoadedAmmo = LoadedAmmo;
		Item->ItemEntry.Count = Count;
		Item->ItemEntry.ItemDefinition = ItemDefintion;

		if (bShowToast) {
			FFortItemEntryStateValue StateValue{};
			StateValue.IntValue = 1;
			StateValue.StateType = EFortItemEntryState::ShouldShowItemToast;
			Item->ItemEntry.StateValues.Add(StateValue);
		}

		PlayerController->WorldInventory->Inventory.ItemInstances.Add(Item);
		PlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(Item->ItemEntry);
		PlayerController->WorldInventory->Inventory.MarkItemDirty(Item->ItemEntry);
		PlayerController->WorldInventory->HandleInventoryLocalUpdate();
	}
	else {
		bool bFound = false;

		for (auto& ItemEntry : PlayerController->WorldInventory->Inventory.ReplicatedEntries) {
			if (ItemEntry.ItemDefinition == ItemDefintion) {
				bFound = true;

				ItemEntry.Count += Count;

				if (bShowToast) {
					FFortItemEntryStateValue StateValue{};
					StateValue.IntValue = 1;
					StateValue.StateType = EFortItemEntryState::ShouldShowItemToast;
					Item->ItemEntry.StateValues.Add(StateValue);
				}

				for (int i = 0; i < PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
					PlayerController->WorldInventory->Inventory.ReplicatedEntries[i].LoadedAmmo = ItemEntry.LoadedAmmo;
					PlayerController->WorldInventory->Inventory.ReplicatedEntries[i].Count = ItemEntry.Count;
					break;
				}

				PlayerController->WorldInventory->Inventory.MarkItemDirty(ItemEntry);
				PlayerController->WorldInventory->HandleInventoryLocalUpdate();
			}
		}

		if (!bFound) {
			GiveItem(PlayerController, ItemDefintion, Count, LoadedAmmo, false, bShowToast);
		}
	}
}

FFortItemEntry* FortInventory::FindItemEntry(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition) {
	for (auto& ItemEntry : PlayerController->WorldInventory->Inventory.ReplicatedEntries) {
		if (ItemEntry.ItemDefinition == ItemDefinition) {
			return &ItemEntry;
		}
	}

	return nullptr;
}

FFortItemEntry* FortInventory::FindItemEntry(AFortPlayerController* PlayerController, FGuid* Guid) {
	for (auto& ItemEntry : PlayerController->WorldInventory->Inventory.ReplicatedEntries) {
		if (ItemEntry.ItemGuid == *Guid) {
			return &ItemEntry;
		}
	}

	return nullptr;
}

void FortInventory::RemoveItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition, int Count) {
	if (!PlayerController || !PlayerController->WorldInventory || !ItemDefinition) { return; }

	auto& InventoryEntries = PlayerController->WorldInventory->Inventory.ReplicatedEntries;

	for (int i = 0; i < InventoryEntries.Num(); i++) {
		if (InventoryEntries[i].ItemDefinition == ItemDefinition) {
			if (InventoryEntries[i].Count >= Count) {
				InventoryEntries[i].Count -= Count;

				if (InventoryEntries[i].Count <= 0) {
					InventoryEntries.Remove(i);
				}

				for (int i = 0; i < PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
					PlayerController->WorldInventory->Inventory.ReplicatedEntries[i].LoadedAmmo = InventoryEntries[i].LoadedAmmo;
					PlayerController->WorldInventory->Inventory.ReplicatedEntries[i].Count = InventoryEntries[i].Count;
					break;
				}

				PlayerController->WorldInventory->Inventory.MarkItemDirty(InventoryEntries[i]);
				PlayerController->WorldInventory->HandleInventoryLocalUpdate();
			}
			else {
				std::cout << "Not enough items to remove." << std::endl;
			}
			return; 
		}
	}
}