#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_Lock_Parent

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Enum_Athena_Lock_structs.hpp"
#include "Engine_structs.hpp"
#include "Enum_MANG_Security_ID_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C
// 0x0140 (0x08C8 - 0x0788)
class ABGA_Athena_Lock_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Lock;                                              // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortLinkToActorComponent*              FortLinkToActor;                                   // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InteractionCollision;                              // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABuildingActor*                         AttachedLockActor;                                 // 0x07B0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CanFirstInteract;                                  // 0x07B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanSecondInteract;                                 // 0x07B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanInteractWhileUnlocked;                          // 0x07BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6231[0x5];                                     // 0x07BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FirstInteractText;                                 // 0x07C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SecondInteractText;                                // 0x07D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         FirstInteractTime;                                 // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SecondInteractTime;                                // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetLockOnFirstInteract;                            // 0x07F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SetLockOnSecondInteract;                           // 0x07F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6232[0x6];                                     // 0x07FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              LastInteractingPawn;                               // 0x0800(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanMultipleInteract;                               // 0x0808(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	Enum_Athena_Lock                              LockState;                                         // 0x0809(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          EverInteractSetLock;                               // 0x080A(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_6233[0x1];                                     // 0x080B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Event_Locked;                                      // 0x080C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_Unlocked;                                    // 0x0814(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DoLockCheckFirstInteract;                          // 0x081C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DoLockCheckSecondInteract;                         // 0x081D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ApplyEffectOnFailCheck;                            // 0x081E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6234[0x1];                                     // 0x081F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_FailedCheck;                                    // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxInteractAngle;                                  // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6235[0x4];                                     // 0x082C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_RelockDelay;                                   // 0x0830(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AutoRelock;                                        // 0x0850(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6236[0x7];                                     // 0x0851(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_SelfInteractEnabled;                           // 0x0858(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_DoNotLockActor;                                // 0x0878(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnUnlockedDispatcher;                              // 0x0898(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnLockedDispatcher;                                // 0x08A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          AutoAttachToParentActors;                          // 0x08B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AutoCloseDoorOnLock;                               // 0x08B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AutoDoorOnUnlock;                                  // 0x08BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AutoOpenContainersOnUnlock;                        // 0x08BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SetsAllowInteractOnUnlock;                         // 0x08BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	Enum_MANG_Security_ID                         Lock_ID;                                           // 0x08BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6237[0x2];                                     // 0x08BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 BlankLinkedActor;                                  // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnUnlockedDispatcher__DelegateSignature();
	void OnLockedDispatcher__DelegateSignature();
	void ExecuteUbergraph_BGA_Athena_Lock_Parent(int32 EntryPoint);
	void ParentActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void NotEnabled();
	void UnlockOpenDoor();
	void LockCloseDoor();
	void OpenContainers();
	void ReceiveBeginPlay();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void TimedRelock();
	void SetLock(Enum_Athena_Lock Param_LockState);
	void ApplyFailCheckEffect();
	void HideAndKill();
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature();
	void OnUnLocked();
	void OnLocked();
	void OnFirstInteract(class AFortPawn* InteractingPawn);
	void OnSecondInteract(class AFortPawn* InteractingPawn);
	void OnReady_19560710434050E125B3ADA0163CD609(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_LockState();
	void OnRep_EverInteractSetLock();
	void LockCheck(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, bool* CheckPassed);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);

	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_Lock_Parent_C">();
	}
	static class ABGA_Athena_Lock_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_Lock_Parent_C>();
	}
};
static_assert(alignof(ABGA_Athena_Lock_Parent_C) == 0x000008, "Wrong alignment on ABGA_Athena_Lock_Parent_C");
static_assert(sizeof(ABGA_Athena_Lock_Parent_C) == 0x0008C8, "Wrong size on ABGA_Athena_Lock_Parent_C");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, UberGraphFrame) == 0x000788, "Member 'ABGA_Athena_Lock_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, Lock) == 0x000790, "Member 'ABGA_Athena_Lock_Parent_C::Lock' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, DefaultSceneRoot) == 0x000798, "Member 'ABGA_Athena_Lock_Parent_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, FortLinkToActor) == 0x0007A0, "Member 'ABGA_Athena_Lock_Parent_C::FortLinkToActor' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, InteractionCollision) == 0x0007A8, "Member 'ABGA_Athena_Lock_Parent_C::InteractionCollision' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, AttachedLockActor) == 0x0007B0, "Member 'ABGA_Athena_Lock_Parent_C::AttachedLockActor' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, CanFirstInteract) == 0x0007B8, "Member 'ABGA_Athena_Lock_Parent_C::CanFirstInteract' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, CanSecondInteract) == 0x0007B9, "Member 'ABGA_Athena_Lock_Parent_C::CanSecondInteract' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, CanInteractWhileUnlocked) == 0x0007BA, "Member 'ABGA_Athena_Lock_Parent_C::CanInteractWhileUnlocked' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, FirstInteractText) == 0x0007C0, "Member 'ABGA_Athena_Lock_Parent_C::FirstInteractText' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, SecondInteractText) == 0x0007D8, "Member 'ABGA_Athena_Lock_Parent_C::SecondInteractText' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, FirstInteractTime) == 0x0007F0, "Member 'ABGA_Athena_Lock_Parent_C::FirstInteractTime' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, SecondInteractTime) == 0x0007F4, "Member 'ABGA_Athena_Lock_Parent_C::SecondInteractTime' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, SetLockOnFirstInteract) == 0x0007F8, "Member 'ABGA_Athena_Lock_Parent_C::SetLockOnFirstInteract' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, SetLockOnSecondInteract) == 0x0007F9, "Member 'ABGA_Athena_Lock_Parent_C::SetLockOnSecondInteract' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, LastInteractingPawn) == 0x000800, "Member 'ABGA_Athena_Lock_Parent_C::LastInteractingPawn' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, CanMultipleInteract) == 0x000808, "Member 'ABGA_Athena_Lock_Parent_C::CanMultipleInteract' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, LockState) == 0x000809, "Member 'ABGA_Athena_Lock_Parent_C::LockState' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, EverInteractSetLock) == 0x00080A, "Member 'ABGA_Athena_Lock_Parent_C::EverInteractSetLock' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, Event_Locked) == 0x00080C, "Member 'ABGA_Athena_Lock_Parent_C::Event_Locked' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, Event_Unlocked) == 0x000814, "Member 'ABGA_Athena_Lock_Parent_C::Event_Unlocked' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, DoLockCheckFirstInteract) == 0x00081C, "Member 'ABGA_Athena_Lock_Parent_C::DoLockCheckFirstInteract' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, DoLockCheckSecondInteract) == 0x00081D, "Member 'ABGA_Athena_Lock_Parent_C::DoLockCheckSecondInteract' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, ApplyEffectOnFailCheck) == 0x00081E, "Member 'ABGA_Athena_Lock_Parent_C::ApplyEffectOnFailCheck' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, GE_FailedCheck) == 0x000820, "Member 'ABGA_Athena_Lock_Parent_C::GE_FailedCheck' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, MaxInteractAngle) == 0x000828, "Member 'ABGA_Athena_Lock_Parent_C::MaxInteractAngle' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, Row_RelockDelay) == 0x000830, "Member 'ABGA_Athena_Lock_Parent_C::Row_RelockDelay' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, AutoRelock) == 0x000850, "Member 'ABGA_Athena_Lock_Parent_C::AutoRelock' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, Row_SelfInteractEnabled) == 0x000858, "Member 'ABGA_Athena_Lock_Parent_C::Row_SelfInteractEnabled' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, Row_DoNotLockActor) == 0x000878, "Member 'ABGA_Athena_Lock_Parent_C::Row_DoNotLockActor' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, OnUnlockedDispatcher) == 0x000898, "Member 'ABGA_Athena_Lock_Parent_C::OnUnlockedDispatcher' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, OnLockedDispatcher) == 0x0008A8, "Member 'ABGA_Athena_Lock_Parent_C::OnLockedDispatcher' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, AutoAttachToParentActors) == 0x0008B8, "Member 'ABGA_Athena_Lock_Parent_C::AutoAttachToParentActors' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, AutoCloseDoorOnLock) == 0x0008B9, "Member 'ABGA_Athena_Lock_Parent_C::AutoCloseDoorOnLock' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, AutoDoorOnUnlock) == 0x0008BA, "Member 'ABGA_Athena_Lock_Parent_C::AutoDoorOnUnlock' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, AutoOpenContainersOnUnlock) == 0x0008BB, "Member 'ABGA_Athena_Lock_Parent_C::AutoOpenContainersOnUnlock' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, SetsAllowInteractOnUnlock) == 0x0008BC, "Member 'ABGA_Athena_Lock_Parent_C::SetsAllowInteractOnUnlock' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, Lock_ID) == 0x0008BD, "Member 'ABGA_Athena_Lock_Parent_C::Lock_ID' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Lock_Parent_C, BlankLinkedActor) == 0x0008C0, "Member 'ABGA_Athena_Lock_Parent_C::BlankLinkedActor' has a wrong offset!");

}
