#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_AppleSun_

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Prj_Athena_BGASpawner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C
// 0x0020 (0x0900 - 0x08E0)
class AB_Prj_Athena_AppleSun__C final : public AB_Prj_Athena_BGASpawner_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Prj_Athena_AppleSun__C;           // 0x08E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_AppleSun_Projectile_Trail;                       // 0x08E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Apple_Sun;                                         // 0x08F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x08F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_AppleSun_(int32 EntryPoint);
	void OnStop(const struct FHitResult& Hit);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_AppleSun__C">();
	}
	static class AB_Prj_Athena_AppleSun__C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_AppleSun__C>();
	}
};
static_assert(alignof(AB_Prj_Athena_AppleSun__C) == 0x000008, "Wrong alignment on AB_Prj_Athena_AppleSun__C");
static_assert(sizeof(AB_Prj_Athena_AppleSun__C) == 0x000900, "Wrong size on AB_Prj_Athena_AppleSun__C");
static_assert(offsetof(AB_Prj_Athena_AppleSun__C, UberGraphFrame_B_Prj_Athena_AppleSun__C) == 0x0008E0, "Member 'AB_Prj_Athena_AppleSun__C::UberGraphFrame_B_Prj_Athena_AppleSun__C' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_AppleSun__C, P_AppleSun_Projectile_Trail) == 0x0008E8, "Member 'AB_Prj_Athena_AppleSun__C::P_AppleSun_Projectile_Trail' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_AppleSun__C, Apple_Sun) == 0x0008F0, "Member 'AB_Prj_Athena_AppleSun__C::Apple_Sun' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_AppleSun__C, RotatingMovement) == 0x0008F8, "Member 'AB_Prj_Athena_AppleSun__C::RotatingMovement' has a wrong offset!");

}
