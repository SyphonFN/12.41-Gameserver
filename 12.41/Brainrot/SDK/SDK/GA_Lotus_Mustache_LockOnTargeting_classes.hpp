#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Lotus_Mustache_LockOnTargeting

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Lotus_Mustache_LockOnTargeting.GA_Lotus_Mustache_LockOnTargeting_C
// 0x01C0 (0x0BF0 - 0x0A30)
class UGA_Lotus_Mustache_LockOnTargeting_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                  PlayerPawn;                                        // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LowGravRemoveDelay;                                // 0x0A40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Float;                                             // 0x0A44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VelocityResetThreshold;                            // 0x0A48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DC8[0x4];                                     // 0x0A4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0A50(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                         PotentialTargets;                                  // 0x0A78(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         TargetPriorityFloat;                               // 0x0A88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DC9[0x4];                                     // 0x0A8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 PotentialTarget;                                   // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0A98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainer           EffectContainer;                                   // 0x0AA0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         DistanceInfluenceMultiple;                         // 0x0B58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DCA[0x4];                                     // 0x0B5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         LockOnRange;                                       // 0x0B60(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         LockOnRectSize;                                    // 0x0B80(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Tick;                                              // 0x0BA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DCB[0x4];                                     // 0x0BA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAttribute                     Attribute;                                         // 0x0BA8(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AB_Ranged_Lotus_Mustache_C*             Weapon;                                            // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DotCheckValue;                                     // 0x0BE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Lotus_Mustache_LockOnTargeting(int32 EntryPoint);
	void LockOnTickNew(class AActor* Target_Pawn);
	void LookForHomingTarget();
	void LockOnTickOld();
	void K2_ActivateAbility();
	void Removed_58908BB54D428427AF9ABCB9028B681F();
	void Added_0D35071B4FEDC4CD0463C99574134FAB();
	void OnCompleted_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void OnBlendOut_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void OnInterrupted_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void OnNotifyBegin_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void OnNotifyEnd_9AB91A59481723B332308EBEA7FC15AD(class FName NotifyName);
	void OnChange_B230F5A34FBD93E78E242A8524699628();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Lotus_Mustache_LockOnTargeting_C">();
	}
	static class UGA_Lotus_Mustache_LockOnTargeting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Lotus_Mustache_LockOnTargeting_C>();
	}
};
static_assert(alignof(UGA_Lotus_Mustache_LockOnTargeting_C) == 0x000008, "Wrong alignment on UGA_Lotus_Mustache_LockOnTargeting_C");
static_assert(sizeof(UGA_Lotus_Mustache_LockOnTargeting_C) == 0x000BF0, "Wrong size on UGA_Lotus_Mustache_LockOnTargeting_C");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, PlayerPawn) == 0x000A38, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, LowGravRemoveDelay) == 0x000A40, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::LowGravRemoveDelay' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, Float) == 0x000A44, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::Float' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, VelocityResetThreshold) == 0x000A48, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::VelocityResetThreshold' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, TargetData) == 0x000A50, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::TargetData' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, PotentialTargets) == 0x000A78, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::PotentialTargets' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, TargetPriorityFloat) == 0x000A88, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::TargetPriorityFloat' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, PotentialTarget) == 0x000A90, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::PotentialTarget' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, Target) == 0x000A98, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::Target' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, EffectContainer) == 0x000AA0, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::EffectContainer' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, DistanceInfluenceMultiple) == 0x000B58, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::DistanceInfluenceMultiple' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, LockOnRange) == 0x000B60, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::LockOnRange' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, LockOnRectSize) == 0x000B80, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::LockOnRectSize' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, Tick) == 0x000BA0, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::Tick' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, Attribute) == 0x000BA8, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::Attribute' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, Weapon) == 0x000BE0, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::Weapon' has a wrong offset!");
static_assert(offsetof(UGA_Lotus_Mustache_LockOnTargeting_C, DotCheckValue) == 0x000BE8, "Member 'UGA_Lotus_Mustache_LockOnTargeting_C::DotCheckValue' has a wrong offset!");

}

