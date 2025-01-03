#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CameraLens_Lava_Bouncing

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C
// 0x0030 (0x0300 - 0x02D0)
class AB_CameraLens_Lava_Bouncing_C final : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Camera_Lava_Bouncing;                            // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 VelocityActor;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetRot;                                         // 0x02E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_CameraLens_Lava_Bouncing(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CameraLens_Lava_Bouncing_C">();
	}
	static class AB_CameraLens_Lava_Bouncing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CameraLens_Lava_Bouncing_C>();
	}
};
static_assert(alignof(AB_CameraLens_Lava_Bouncing_C) == 0x000010, "Wrong alignment on AB_CameraLens_Lava_Bouncing_C");
static_assert(sizeof(AB_CameraLens_Lava_Bouncing_C) == 0x000300, "Wrong size on AB_CameraLens_Lava_Bouncing_C");
static_assert(offsetof(AB_CameraLens_Lava_Bouncing_C, UberGraphFrame) == 0x0002D0, "Member 'AB_CameraLens_Lava_Bouncing_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_CameraLens_Lava_Bouncing_C, P_Camera_Lava_Bouncing) == 0x0002D8, "Member 'AB_CameraLens_Lava_Bouncing_C::P_Camera_Lava_Bouncing' has a wrong offset!");
static_assert(offsetof(AB_CameraLens_Lava_Bouncing_C, VelocityActor) == 0x0002E0, "Member 'AB_CameraLens_Lava_Bouncing_C::VelocityActor' has a wrong offset!");
static_assert(offsetof(AB_CameraLens_Lava_Bouncing_C, TargetRot) == 0x0002E8, "Member 'AB_CameraLens_Lava_Bouncing_C::TargetRot' has a wrong offset!");

}

