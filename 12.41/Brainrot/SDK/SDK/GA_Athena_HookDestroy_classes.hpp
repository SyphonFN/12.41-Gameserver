#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HookDestroy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "ToyAngleSelectorInfo_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C
// 0x0080 (0x0AB0 - 0x0A30)
class UGA_Athena_HookDestroy_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            SwitchLockGE;                                      // 0x0A40(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Hit_;                                              // 0x0A48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC3[0x3];                                     // 0x0A49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CleanedAngle;                                      // 0x0A4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FToyAngleSelectorInfo>          LaunchAngleVariations;                             // 0x0A50(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                           TravelMontage;                                     // 0x0A60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0A68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC4[0x7];                                     // 0x0A69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Hookgun_Athena_C*                    WeaponActor;                                       // 0x0A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ChangeEquipmentTag;                                // 0x0A78(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           RopeActiveTag;                                     // 0x0A98(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                                NullMontage;                                       // 0x0AA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBadgerGrape_;                                    // 0x0AA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC5[0x3];                                     // 0x0AA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BadgerGrapeDelayFailsafe;                          // 0x0AAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_HookDestroy(int32 EntryPoint);
	void ResetDoOnce();
	void K2_ActivateAbility();
	void OnSync_A7AA33494F9F686A79A026809EAEF410();
	void EventReceived_1B71851D49048B6433DA75B0D6007B6E(const struct FGameplayEventData& Payload);
	void OnCompleted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnBlendOut_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnInterrupted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void EventReceived_3FEADD91456C78D266936684DE918289(const struct FGameplayEventData& Payload);
	void OnCompleted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void EventReceived_056D82C6464BB95E4DA717BEB307DB74(const struct FGameplayEventData& Payload);
	void OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnRep_AmmoReserves();
	void PickGrappleMontage(float PitchAngle, class FName* SectionName);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnRep_BadgerGrapeDelayFailsafe();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HookDestroy_C">();
	}
	static class UGA_Athena_HookDestroy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HookDestroy_C>();
	}
};
static_assert(alignof(UGA_Athena_HookDestroy_C) == 0x000008, "Wrong alignment on UGA_Athena_HookDestroy_C");
static_assert(sizeof(UGA_Athena_HookDestroy_C) == 0x000AB0, "Wrong size on UGA_Athena_HookDestroy_C");
static_assert(offsetof(UGA_Athena_HookDestroy_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Athena_HookDestroy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, PlayerPawn) == 0x000A38, "Member 'UGA_Athena_HookDestroy_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, SwitchLockGE) == 0x000A40, "Member 'UGA_Athena_HookDestroy_C::SwitchLockGE' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, Hit_) == 0x000A48, "Member 'UGA_Athena_HookDestroy_C::Hit_' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, CleanedAngle) == 0x000A4C, "Member 'UGA_Athena_HookDestroy_C::CleanedAngle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, LaunchAngleVariations) == 0x000A50, "Member 'UGA_Athena_HookDestroy_C::LaunchAngleVariations' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, TravelMontage) == 0x000A60, "Member 'UGA_Athena_HookDestroy_C::TravelMontage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, Debug) == 0x000A68, "Member 'UGA_Athena_HookDestroy_C::Debug' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, WeaponActor) == 0x000A70, "Member 'UGA_Athena_HookDestroy_C::WeaponActor' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, ChangeEquipmentTag) == 0x000A78, "Member 'UGA_Athena_HookDestroy_C::ChangeEquipmentTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, RopeActiveTag) == 0x000A98, "Member 'UGA_Athena_HookDestroy_C::RopeActiveTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, NullMontage) == 0x000AA0, "Member 'UGA_Athena_HookDestroy_C::NullMontage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, IsBadgerGrape_) == 0x000AA8, "Member 'UGA_Athena_HookDestroy_C::IsBadgerGrape_' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HookDestroy_C, BadgerGrapeDelayFailsafe) == 0x000AAC, "Member 'UGA_Athena_HookDestroy_C::BadgerGrapeDelayFailsafe' has a wrong offset!");

}
