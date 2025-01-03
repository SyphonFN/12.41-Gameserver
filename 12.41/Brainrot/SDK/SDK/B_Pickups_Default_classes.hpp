#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Pickups_Default

#include "Basic.hpp"

#include "B_Pickups_Parent_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
// 0x0028 (0x04B8 - 0x0490)
class AB_Pickups_Default_C final : public AB_Pickups_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Pickups_Default_C;                // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sm_rare_pickup;                                    // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Background;                                        // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     ParticleSystem;                                    // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Pickups_Default(int32 EntryPoint);
	void HideBackgroundAndSpotlight();
	void OnPickedUp();
	void OnTossed();
	void UserConstructionScript();
	void Setup_Light();
	void Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid);
	void Randomize_Mesh_Rotation_for_BR();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Pickups_Default_C">();
	}
	static class AB_Pickups_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Pickups_Default_C>();
	}
};
static_assert(alignof(AB_Pickups_Default_C) == 0x000008, "Wrong alignment on AB_Pickups_Default_C");
static_assert(sizeof(AB_Pickups_Default_C) == 0x0004B8, "Wrong size on AB_Pickups_Default_C");
static_assert(offsetof(AB_Pickups_Default_C, UberGraphFrame_B_Pickups_Default_C) == 0x000490, "Member 'AB_Pickups_Default_C::UberGraphFrame_B_Pickups_Default_C' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Default_C, Sm_rare_pickup) == 0x000498, "Member 'AB_Pickups_Default_C::Sm_rare_pickup' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Default_C, SpotLight) == 0x0004A0, "Member 'AB_Pickups_Default_C::SpotLight' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Default_C, Background) == 0x0004A8, "Member 'AB_Pickups_Default_C::Background' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Default_C, ParticleSystem) == 0x0004B0, "Member 'AB_Pickups_Default_C::ParticleSystem' has a wrong offset!");

}

