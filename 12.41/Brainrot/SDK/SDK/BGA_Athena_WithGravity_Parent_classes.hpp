#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_WithGravity_Parent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C
// 0x0130 (0x08B8 - 0x0788)
class ABGA_Athena_WithGravity_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*         FortWaterInteraction;                              // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ResumeGravSimOnBegin;                              // 0x07A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bResumeSimulation;                                 // 0x07A9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_3CD7[0x2];                                     // 0x07AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             NullHit;                                           // 0x07AC(0x008C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                GravImpact_Loc;                                    // 0x0838(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GravHitNormal;                                     // 0x0844(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GravMaxSlope;                                      // 0x0850(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckForBounce;                                    // 0x0854(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD8[0x3];                                     // 0x0855(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ForcedBounceExtraZ;                                // 0x0858(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ForcedBounceCurrentCount;                          // 0x085C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForcedBounceMult;                                  // 0x0860(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CD9[0x4];                                     // 0x0864(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         GravFoundBuildingOnDied;                           // 0x0868(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          RepCollision;                                      // 0x0878(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_3CDA[0x7];                                     // 0x0879(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                AdditionalBounceObject;                            // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ForcedBounceMaxCount;                              // 0x0888(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceBounce;                                       // 0x088C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CountNonForceBounces;                              // 0x088D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CDB[0x2];                                     // 0x088E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BounceExtraZ;                                      // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BounceMult;                                        // 0x0894(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldAttach;                                      // 0x0898(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CDC[0x7];                                     // 0x0899(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ActorsToNotAttachTo;                               // 0x08A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          DontAttachToOthersOfThisClass;                     // 0x08B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugText;                                         // 0x08B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldNotReattach;                                 // 0x08B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BlockStoppingSim;                                  // 0x08B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AllowReattachmentToActors;                         // 0x08B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BGA_Athena_WithGravity_Parent(int32 EntryPoint);
	void SlidingDoorOpened();
	void AttachedWasDestroyed();
	void SpawnFXSounds();
	void PlayHitFX();
	void Impulse(float DelayBeforeImpulse, float DelayBeforeCollision, const struct FVector& ImpulseOrigin, const struct FVector& ImpulseAmount, bool SetCollisionAfterImpulse);
	void ReceiveBeginPlay();
	void BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void StopSim(const struct FHitResult& Hit);
	void BaseDestroyed(class AActor* DestroyedActor);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void HandleBinding(class AActor* Actor, class UPrimitiveComponent* HitComp);
	void OnRep_bResumeSimulation();
	void ForceBounceBGA();
	void OnRep_RepCollision();
	void CheckForSameClassToBounce(class AActor* Hit, bool* HitSameClass);
	void BounceBGA();
	void AttachToBindedActor(class UPrimitiveComponent* AttachComp);
	void RestartSimulation();
	void OnAttach(class AActor* AttachedActor);
	void Init(const struct FVector& Param_GravHitNormal);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_WithGravity_Parent_C">();
	}
	static class ABGA_Athena_WithGravity_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_WithGravity_Parent_C>();
	}
};
static_assert(alignof(ABGA_Athena_WithGravity_Parent_C) == 0x000008, "Wrong alignment on ABGA_Athena_WithGravity_Parent_C");
static_assert(sizeof(ABGA_Athena_WithGravity_Parent_C) == 0x0008B8, "Wrong size on ABGA_Athena_WithGravity_Parent_C");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, UberGraphFrame) == 0x000788, "Member 'ABGA_Athena_WithGravity_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, FortWaterInteraction) == 0x000790, "Member 'ABGA_Athena_WithGravity_Parent_C::FortWaterInteraction' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, StaticMesh) == 0x000798, "Member 'ABGA_Athena_WithGravity_Parent_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ProjectileMovement) == 0x0007A0, "Member 'ABGA_Athena_WithGravity_Parent_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ResumeGravSimOnBegin) == 0x0007A8, "Member 'ABGA_Athena_WithGravity_Parent_C::ResumeGravSimOnBegin' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, bResumeSimulation) == 0x0007A9, "Member 'ABGA_Athena_WithGravity_Parent_C::bResumeSimulation' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, NullHit) == 0x0007AC, "Member 'ABGA_Athena_WithGravity_Parent_C::NullHit' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, GravImpact_Loc) == 0x000838, "Member 'ABGA_Athena_WithGravity_Parent_C::GravImpact_Loc' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, GravHitNormal) == 0x000844, "Member 'ABGA_Athena_WithGravity_Parent_C::GravHitNormal' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, GravMaxSlope) == 0x000850, "Member 'ABGA_Athena_WithGravity_Parent_C::GravMaxSlope' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, CheckForBounce) == 0x000854, "Member 'ABGA_Athena_WithGravity_Parent_C::CheckForBounce' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ForcedBounceExtraZ) == 0x000858, "Member 'ABGA_Athena_WithGravity_Parent_C::ForcedBounceExtraZ' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ForcedBounceCurrentCount) == 0x00085C, "Member 'ABGA_Athena_WithGravity_Parent_C::ForcedBounceCurrentCount' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ForcedBounceMult) == 0x000860, "Member 'ABGA_Athena_WithGravity_Parent_C::ForcedBounceMult' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, GravFoundBuildingOnDied) == 0x000868, "Member 'ABGA_Athena_WithGravity_Parent_C::GravFoundBuildingOnDied' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, RepCollision) == 0x000878, "Member 'ABGA_Athena_WithGravity_Parent_C::RepCollision' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, AdditionalBounceObject) == 0x000880, "Member 'ABGA_Athena_WithGravity_Parent_C::AdditionalBounceObject' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ForcedBounceMaxCount) == 0x000888, "Member 'ABGA_Athena_WithGravity_Parent_C::ForcedBounceMaxCount' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ForceBounce) == 0x00088C, "Member 'ABGA_Athena_WithGravity_Parent_C::ForceBounce' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, CountNonForceBounces) == 0x00088D, "Member 'ABGA_Athena_WithGravity_Parent_C::CountNonForceBounces' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, BounceExtraZ) == 0x000890, "Member 'ABGA_Athena_WithGravity_Parent_C::BounceExtraZ' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, BounceMult) == 0x000894, "Member 'ABGA_Athena_WithGravity_Parent_C::BounceMult' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ShouldAttach) == 0x000898, "Member 'ABGA_Athena_WithGravity_Parent_C::ShouldAttach' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ActorsToNotAttachTo) == 0x0008A0, "Member 'ABGA_Athena_WithGravity_Parent_C::ActorsToNotAttachTo' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, DontAttachToOthersOfThisClass) == 0x0008B0, "Member 'ABGA_Athena_WithGravity_Parent_C::DontAttachToOthersOfThisClass' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, DebugText) == 0x0008B1, "Member 'ABGA_Athena_WithGravity_Parent_C::DebugText' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, ShouldNotReattach) == 0x0008B2, "Member 'ABGA_Athena_WithGravity_Parent_C::ShouldNotReattach' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, BlockStoppingSim) == 0x0008B3, "Member 'ABGA_Athena_WithGravity_Parent_C::BlockStoppingSim' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_WithGravity_Parent_C, AllowReattachmentToActors) == 0x0008B4, "Member 'ABGA_Athena_WithGravity_Parent_C::AllowReattachmentToActors' has a wrong offset!");

}
