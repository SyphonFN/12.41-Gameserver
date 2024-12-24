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

void FortInventory::RemoveItem(AFortPlayerController* PlayerController, FGuid Guid, int Count) {
	if (!PlayerController || !PlayerController->WorldInventory) return;

	auto& Inventory = PlayerController->WorldInventory->Inventory;
	auto& ReplicatedEntries = Inventory.ReplicatedEntries;

	bool ItemRemoved = false;

	for (int32 i = 0; i < ReplicatedEntries.Num(); ++i) {
		auto& Entry = ReplicatedEntries[i];

		if (Entry.ItemGuid == Guid) {
			Entry.Count = (Entry.Count > Count) ? (Entry.Count - Count) : 0;

			Inventory.MarkItemDirty(Entry);
			PlayerController->WorldInventory->HandleInventoryLocalUpdate();

			if (Entry.Count == 0) {
				ReplicatedEntries.Remove(i);
				ItemRemoved = true;
			}
			else {
				for (auto& OtherEntry : ReplicatedEntries) {
					OtherEntry.LoadedAmmo = Entry.LoadedAmmo;
				}
			}
			break;
		}
	}

	if (ItemRemoved) {
		for (int32 i = 0; i < Inventory.ItemInstances.Num(); ++i) {
			if (Inventory.ItemInstances[i]->GetItemGuid() == Guid) {
				Inventory.ItemInstances.Remove(i);
				break;
			}
		}

		Inventory.MarkArrayDirty();
	}

	PlayerController->WorldInventory->bRequiresLocalUpdate = true;
	PlayerController->WorldInventory->HandleInventoryLocalUpdate();
}

void FortInventory::RemoveAllDroppableItems(AFortPlayerControllerAthena* PlayerController) {
	if (!PlayerController)
		return;

	for (size_t i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++) {
		if (PlayerController->WorldInventory->Inventory.ItemInstances[i]->CanBeDropped()) {
			PlayerController->WorldInventory->Inventory.ItemInstances.Remove(i);
			PlayerController->WorldInventory->Inventory.ReplicatedEntries.Remove(i);
			PlayerController->WorldInventory->Inventory.MarkArrayDirty();
		}
	}
}
