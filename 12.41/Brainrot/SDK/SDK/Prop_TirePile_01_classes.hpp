#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_TirePile_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prop_TirePile_01.Prop_TirePile_01_C
// 0x0058 (0x0BF8 - 0x0BA0)
class AProp_TirePile_01_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Jump_Collision;                                    // 0x0BA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Ceiling;                                           // 0x0BB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AD5[0x3];                                     // 0x0BB1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BounceHeight;                                      // 0x0BB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         JumpHeight;                                        // 0x0BB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinalBounceJumpHeight;                             // 0x0BBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   LaunchForceFeedback;                               // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        OverlapPawn;                                       // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  OverlapController;                                 // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_PlayerLaunched;                                 // 0x0BD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TireSound;                                         // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaJackalVehicle*               OverlapVehicle;                                    // 0x0BE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoCeilingBounceHeight;                             // 0x0BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Final_Bounce_X_Vector;                             // 0x0BF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Prop_TirePile_01(int32 EntryPoint);
	void MakeWobbleEffect(const struct FVector& Center);
	void CustomEvent();
	void Reset_Bounce_Sound();
	void BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CeilingCheck(bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prop_TirePile_01_C">();
	}
	static class AProp_TirePile_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_TirePile_01_C>();
	}
};
static_assert(alignof(AProp_TirePile_01_C) == 0x000008, "Wrong alignment on AProp_TirePile_01_C");
static_assert(sizeof(AProp_TirePile_01_C) == 0x000BF8, "Wrong size on AProp_TirePile_01_C");
static_assert(offsetof(AProp_TirePile_01_C, UberGraphFrame) == 0x000BA0, "Member 'AProp_TirePile_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, Jump_Collision) == 0x000BA8, "Member 'AProp_TirePile_01_C::Jump_Collision' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, Ceiling) == 0x000BB0, "Member 'AProp_TirePile_01_C::Ceiling' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, BounceHeight) == 0x000BB4, "Member 'AProp_TirePile_01_C::BounceHeight' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, JumpHeight) == 0x000BB8, "Member 'AProp_TirePile_01_C::JumpHeight' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, FinalBounceJumpHeight) == 0x000BBC, "Member 'AProp_TirePile_01_C::FinalBounceJumpHeight' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, LaunchForceFeedback) == 0x000BC0, "Member 'AProp_TirePile_01_C::LaunchForceFeedback' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, OverlapPawn) == 0x000BC8, "Member 'AProp_TirePile_01_C::OverlapPawn' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, OverlapController) == 0x000BD0, "Member 'AProp_TirePile_01_C::OverlapController' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, GE_PlayerLaunched) == 0x000BD8, "Member 'AProp_TirePile_01_C::GE_PlayerLaunched' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, TireSound) == 0x000BE0, "Member 'AProp_TirePile_01_C::TireSound' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, OverlapVehicle) == 0x000BE8, "Member 'AProp_TirePile_01_C::OverlapVehicle' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, NoCeilingBounceHeight) == 0x000BF0, "Member 'AProp_TirePile_01_C::NoCeilingBounceHeight' has a wrong offset!");
static_assert(offsetof(AProp_TirePile_01_C, Final_Bounce_X_Vector) == 0x000BF4, "Member 'AProp_TirePile_01_C::Final_Bounce_X_Vector' has a wrong offset!");

}

