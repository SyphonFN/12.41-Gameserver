#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hydrant01

#include "Basic.hpp"

#include "FireHydrant__2_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Hydrant01.Hydrant01_C
// 0x0030 (0x0C20 - 0x0BF0)
class AHydrant01_C : public AFireHydrant__2_C
{
public:
	bool                                          Can_Jump_0;                                        // 0x0BF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_581A[0x7];                                     // 0x0BF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Hydrant_Mesh;                                      // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Hydrant_Broken_Mesh;                               // 0x0C00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WaterEffectOffset;                                 // 0x0C08(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_581B[0x4];                                     // 0x0C14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UForceFeedbackEffect*                   LaunchForceFeedback_0;                             // 0x0C18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void Handle_Exploded_State();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Hydrant01_C">();
	}
	static class AHydrant01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHydrant01_C>();
	}
};
static_assert(alignof(AHydrant01_C) == 0x000008, "Wrong alignment on AHydrant01_C");
static_assert(sizeof(AHydrant01_C) == 0x000C20, "Wrong size on AHydrant01_C");
static_assert(offsetof(AHydrant01_C, Can_Jump_0) == 0x000BF0, "Member 'AHydrant01_C::Can_Jump_0' has a wrong offset!");
static_assert(offsetof(AHydrant01_C, Hydrant_Mesh) == 0x000BF8, "Member 'AHydrant01_C::Hydrant_Mesh' has a wrong offset!");
static_assert(offsetof(AHydrant01_C, Hydrant_Broken_Mesh) == 0x000C00, "Member 'AHydrant01_C::Hydrant_Broken_Mesh' has a wrong offset!");
static_assert(offsetof(AHydrant01_C, WaterEffectOffset) == 0x000C08, "Member 'AHydrant01_C::WaterEffectOffset' has a wrong offset!");
static_assert(offsetof(AHydrant01_C, LaunchForceFeedback_0) == 0x000C18, "Member 'AHydrant01_C::LaunchForceFeedback_0' has a wrong offset!");

}
