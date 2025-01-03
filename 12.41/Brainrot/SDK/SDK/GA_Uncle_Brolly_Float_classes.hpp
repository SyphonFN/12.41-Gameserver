#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Uncle_Brolly_Float

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Uncle_Brolly_Float.GA_Uncle_Brolly_Float_C
// 0x0148 (0x0B78 - 0x0A30)
class UGA_Uncle_Brolly_Float_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_FloatTag;                                       // 0x0A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            H_FloatTag;                                        // 0x0A48(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            H_FallingTag;                                      // 0x0A50(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         BaseFloatDuration;                                 // 0x0A58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FloatResourceDepleted;                             // 0x0A5C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C2A[0x3];                                     // 0x0A5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FallingImpulse;                                    // 0x0A60(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_FloatFallingStart;                              // 0x0A6C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         FloatStartTime;                                    // 0x0A74(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      LineTraceObjectTypes;                              // 0x0A78(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AB_Uncle_Brolly_Block_Collision_C*      BP_UncleBlockingActor;                             // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FallingBoostTaskName;                              // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         MinFloatTime;                                      // 0x0A98(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FloatVerticalImpulse;                              // 0x0AB8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FloatDuration;                                     // 0x0AD8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FloatGravityScalar;                                // 0x0AF8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FloatingMaxAcceleration;                           // 0x0B18(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FloatingLateralFriction;                           // 0x0B38(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FloatingMaxLateralSpeed;                           // 0x0B58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Uncle_Brolly_Float(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void CheckShouldEndFloat();
	void FloatFailSafeCheck();
	void FloatLimitReached();
	void OnFinish_EC33BF3745BE036EAB506C96FBB4324A();
	void Removed_CDAC2EF140EDC60B1BF4319F62ACAA74();
	void EventReceived_849C01504C1370D90F7729BC44FF1CA7(const struct FGameplayEventData& Payload);
	void EventReceived_A105E94C42D41462EB50A6A3FE424122(const struct FGameplayEventData& Payload);
	void InitAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Uncle_Brolly_Float_C">();
	}
	static class UGA_Uncle_Brolly_Float_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Uncle_Brolly_Float_C>();
	}
};
static_assert(alignof(UGA_Uncle_Brolly_Float_C) == 0x000008, "Wrong alignment on UGA_Uncle_Brolly_Float_C");
static_assert(sizeof(UGA_Uncle_Brolly_Float_C) == 0x000B78, "Wrong size on UGA_Uncle_Brolly_Float_C");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Uncle_Brolly_Float_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, PlayerPawn) == 0x000A38, "Member 'UGA_Uncle_Brolly_Float_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, GE_FloatTag) == 0x000A40, "Member 'UGA_Uncle_Brolly_Float_C::GE_FloatTag' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, H_FloatTag) == 0x000A48, "Member 'UGA_Uncle_Brolly_Float_C::H_FloatTag' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, H_FallingTag) == 0x000A50, "Member 'UGA_Uncle_Brolly_Float_C::H_FallingTag' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, BaseFloatDuration) == 0x000A58, "Member 'UGA_Uncle_Brolly_Float_C::BaseFloatDuration' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FloatResourceDepleted) == 0x000A5C, "Member 'UGA_Uncle_Brolly_Float_C::FloatResourceDepleted' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FallingImpulse) == 0x000A60, "Member 'UGA_Uncle_Brolly_Float_C::FallingImpulse' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, GC_FloatFallingStart) == 0x000A6C, "Member 'UGA_Uncle_Brolly_Float_C::GC_FloatFallingStart' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FloatStartTime) == 0x000A74, "Member 'UGA_Uncle_Brolly_Float_C::FloatStartTime' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, LineTraceObjectTypes) == 0x000A78, "Member 'UGA_Uncle_Brolly_Float_C::LineTraceObjectTypes' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, BP_UncleBlockingActor) == 0x000A88, "Member 'UGA_Uncle_Brolly_Float_C::BP_UncleBlockingActor' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FallingBoostTaskName) == 0x000A90, "Member 'UGA_Uncle_Brolly_Float_C::FallingBoostTaskName' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, MinFloatTime) == 0x000A98, "Member 'UGA_Uncle_Brolly_Float_C::MinFloatTime' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FloatVerticalImpulse) == 0x000AB8, "Member 'UGA_Uncle_Brolly_Float_C::FloatVerticalImpulse' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FloatDuration) == 0x000AD8, "Member 'UGA_Uncle_Brolly_Float_C::FloatDuration' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FloatGravityScalar) == 0x000AF8, "Member 'UGA_Uncle_Brolly_Float_C::FloatGravityScalar' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FloatingMaxAcceleration) == 0x000B18, "Member 'UGA_Uncle_Brolly_Float_C::FloatingMaxAcceleration' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FloatingLateralFriction) == 0x000B38, "Member 'UGA_Uncle_Brolly_Float_C::FloatingLateralFriction' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Float_C, FloatingMaxLateralSpeed) == 0x000B58, "Member 'UGA_Uncle_Brolly_Float_C::FloatingMaxLateralSpeed' has a wrong offset!");

}

