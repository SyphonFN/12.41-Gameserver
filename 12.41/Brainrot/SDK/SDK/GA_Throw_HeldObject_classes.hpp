#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Throw_HeldObject

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Throw_HeldObject.GA_Throw_HeldObject_C
// 0x01C0 (0x0BF0 - 0x0A30)
class UGA_Throw_HeldObject_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbilityKeyPressed;                                 // 0x0A40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InThrowWindup;                                     // 0x0A41(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6510[0x2];                                     // 0x0A42(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AdditionalThrowAngle;                              // 0x0A44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxTossPitch;                                      // 0x0A48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrenadeTargetingOriginOffset;                      // 0x0A4C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrenadeTargetingOriginOffset_Crouched;             // 0x0A58(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6511[0x4];                                     // 0x0A64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortProjectileBase*                    SpawnedProjectile;                                 // 0x0A68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Proj_ThrownProjectile;                             // 0x0A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       ExplosionEffectContainerSpec;                      // 0x0A78(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ProjectileSpeed;                                   // 0x0B30(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ProjectileGravityScale;                            // 0x0B50(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TrajectoryUpdateInterval;                          // 0x0B70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_DefaultExplosion;                               // 0x0B74(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6512[0x4];                                     // 0x0B7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CookMonage;                                        // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ThrowMontage;                                      // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_OnThrow;                                        // 0x0B90(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*             TrajectoryIndicator;                               // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorClass;                          // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    DummyProjectile;                                   // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyMaxSpeed;                                     // 0x0BB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyGravity;                                      // 0x0BB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyExtent;                                       // 0x0BB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyTimeStep;                                     // 0x0BBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_InWindup;                                       // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            Handle_GE_InWindup;                                // 0x0BC8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnedOnEquip;                                    // 0x0BD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6513[0x7];                                     // 0x0BD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_HeldObject_Parent_C*                 HeldObject;                                        // 0x0BD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*             ProjectileTrajectorySocketed;                      // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorSocketedClass;                  // 0x0BE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Throw_HeldObject(int32 EntryPoint);
	void OnAbilityInputReleased();
	void K2_ActivateAbility();
	void UpdateTrajectory();
	void CleanupTrajectoryIndicatorOnUnequip();
	void InitTrajectoryVariables();
	void ThrowProjectile();
	void K2_OnEndAbility(bool bWasCancelled);
	void AttemptSpawnThrownProjectile();
	void OnFinish_5115EDCE4339523BE389D09CA4A2AECC();
	void Triggered_9DD11B80484829AF1E8DC5ACFC965E7A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_9DD11B80484829AF1E8DC5ACFC965E7A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_9DD11B80484829AF1E8DC5ACFC965E7A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void PrethrowSetup();
	void SpawnThrownProjectile(class UClass* Param_ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& Param_ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float Param_ProjectileGravityScale, class AFortProjectileBase** Param_SpawnedProjectile);
	void OnHeldObjectThrown(class AFortProjectileBase* Param_SpawnedProjectile);
	void OnHeldObjectSetup();
	void SetupDummyProjectile();
	void UpdateTrajectorySpline();
	void PostThrowCleanup();
	void CleanupTrajectory();
	void SetupDummyProjectileSocketed();
	void HitValidSocket(const struct FHitResult& HitResult, bool* CanSocket);
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);

	void GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation) const;
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn) const;
	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor() const;
	bool ShouldOnlyShowTrajectoryOnUse() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Throw_HeldObject_C">();
	}
	static class UGA_Throw_HeldObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Throw_HeldObject_C>();
	}
};
static_assert(alignof(UGA_Throw_HeldObject_C) == 0x000008, "Wrong alignment on UGA_Throw_HeldObject_C");
static_assert(sizeof(UGA_Throw_HeldObject_C) == 0x000BF0, "Wrong size on UGA_Throw_HeldObject_C");
static_assert(offsetof(UGA_Throw_HeldObject_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Throw_HeldObject_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, PlayerPawn) == 0x000A38, "Member 'UGA_Throw_HeldObject_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, AbilityKeyPressed) == 0x000A40, "Member 'UGA_Throw_HeldObject_C::AbilityKeyPressed' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, InThrowWindup) == 0x000A41, "Member 'UGA_Throw_HeldObject_C::InThrowWindup' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, AdditionalThrowAngle) == 0x000A44, "Member 'UGA_Throw_HeldObject_C::AdditionalThrowAngle' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, MaxTossPitch) == 0x000A48, "Member 'UGA_Throw_HeldObject_C::MaxTossPitch' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, GrenadeTargetingOriginOffset) == 0x000A4C, "Member 'UGA_Throw_HeldObject_C::GrenadeTargetingOriginOffset' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, GrenadeTargetingOriginOffset_Crouched) == 0x000A58, "Member 'UGA_Throw_HeldObject_C::GrenadeTargetingOriginOffset_Crouched' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, SpawnedProjectile) == 0x000A68, "Member 'UGA_Throw_HeldObject_C::SpawnedProjectile' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, Proj_ThrownProjectile) == 0x000A70, "Member 'UGA_Throw_HeldObject_C::Proj_ThrownProjectile' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, ExplosionEffectContainerSpec) == 0x000A78, "Member 'UGA_Throw_HeldObject_C::ExplosionEffectContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, ProjectileSpeed) == 0x000B30, "Member 'UGA_Throw_HeldObject_C::ProjectileSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, ProjectileGravityScale) == 0x000B50, "Member 'UGA_Throw_HeldObject_C::ProjectileGravityScale' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, TrajectoryUpdateInterval) == 0x000B70, "Member 'UGA_Throw_HeldObject_C::TrajectoryUpdateInterval' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, EC_DefaultExplosion) == 0x000B74, "Member 'UGA_Throw_HeldObject_C::EC_DefaultExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, CookMonage) == 0x000B80, "Member 'UGA_Throw_HeldObject_C::CookMonage' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, ThrowMontage) == 0x000B88, "Member 'UGA_Throw_HeldObject_C::ThrowMontage' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, GC_OnThrow) == 0x000B90, "Member 'UGA_Throw_HeldObject_C::GC_OnThrow' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, TrajectoryIndicator) == 0x000B98, "Member 'UGA_Throw_HeldObject_C::TrajectoryIndicator' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, TrajectoryIndicatorClass) == 0x000BA0, "Member 'UGA_Throw_HeldObject_C::TrajectoryIndicatorClass' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, DummyProjectile) == 0x000BA8, "Member 'UGA_Throw_HeldObject_C::DummyProjectile' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, DummyMaxSpeed) == 0x000BB0, "Member 'UGA_Throw_HeldObject_C::DummyMaxSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, DummyGravity) == 0x000BB4, "Member 'UGA_Throw_HeldObject_C::DummyGravity' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, DummyExtent) == 0x000BB8, "Member 'UGA_Throw_HeldObject_C::DummyExtent' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, DummyTimeStep) == 0x000BBC, "Member 'UGA_Throw_HeldObject_C::DummyTimeStep' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, GE_InWindup) == 0x000BC0, "Member 'UGA_Throw_HeldObject_C::GE_InWindup' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, Handle_GE_InWindup) == 0x000BC8, "Member 'UGA_Throw_HeldObject_C::Handle_GE_InWindup' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, SpawnedOnEquip) == 0x000BD0, "Member 'UGA_Throw_HeldObject_C::SpawnedOnEquip' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, HeldObject) == 0x000BD8, "Member 'UGA_Throw_HeldObject_C::HeldObject' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, ProjectileTrajectorySocketed) == 0x000BE0, "Member 'UGA_Throw_HeldObject_C::ProjectileTrajectorySocketed' has a wrong offset!");
static_assert(offsetof(UGA_Throw_HeldObject_C, TrajectoryIndicatorSocketedClass) == 0x000BE8, "Member 'UGA_Throw_HeldObject_C::TrajectoryIndicatorSocketedClass' has a wrong offset!");

}

