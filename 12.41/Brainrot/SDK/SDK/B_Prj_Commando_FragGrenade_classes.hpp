#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Commando_FragGrenade

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// 0x02F8 (0x0B60 - 0x0868)
class AB_Prj_Commando_FragGrenade_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0868(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Fuse_Particle;                                     // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrenadeFuse_AudioComponent;                        // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Effect_Distance;                                   // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_Explosion;                                       // 0x0898(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_DistantSound;                                  // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_CloseSound;                                    // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExplosionRadius;                                   // 0x08B0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         NumberOfBouncesTillExplode;                        // 0x08B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentNumberOfBounces;                            // 0x08B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_501F[0x4];                                     // 0x08BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Cue_GrenadeFuseSound;                              // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BouncePawnAgainstPawnGravityScale;                 // 0x08C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5020[0x4];                                     // 0x08CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UForceFeedbackEffect*                   ExplosionForceFeedbackNear;                        // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ExplosionForceFeedbackFar;                         // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxClusterGrenades;                                // 0x08E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_ClusterExplosion;                               // 0x08E4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasCluster;                                       // 0x08EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5021[0x3];                                     // 0x08ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Prj_Cluster;                                       // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       ClusterContainerSpec;                              // 0x08F8(0x00B8)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bHasKeepOut;                                       // 0x09B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5022[0x7];                                     // 0x09B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       KeepOutContainerSpec;                              // 0x09B8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 AOE_KeepOut;                                       // 0x0A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasClusterTactical;                               // 0x0A78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5023[0x7];                                     // 0x0A79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       Cluster_Tactical_Container_Spec;                   // 0x0A80(0x00B8)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGameplayTagContainer                  TC_ActorTagsThatShouldExplodeOnOverlap;            // 0x0B38(0x0020)(Edit, BlueprintVisible)
	struct FGameplayTag                           T_Event_GrenadeExploded;                           // 0x0B58(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32 EntryPoint);
	void SendExplodedEvent();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void CheckKeepOutAndCluster();
	void ReceiveDestroyed();
	void TriggerDoExplsoion();
	void Unbind_Destroy_Grenade();
	void Force_On_Exploded_Effects();
	void Bind_Destroy_Grenade();
	void On_Destroy_Grenade(class AActor* DestroyedActor);
	void OnBounce(const struct FHitResult& Hit);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void Stop_Rotation();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void OnRep_StoredHit();
	float CalcGrenadeSpeed(float Angle);
	void SpawnClusters();
	void SpawnKeepOut();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Commando_FragGrenade_C">();
	}
	static class AB_Prj_Commando_FragGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Commando_FragGrenade_C>();
	}
};
static_assert(alignof(AB_Prj_Commando_FragGrenade_C) == 0x000008, "Wrong alignment on AB_Prj_Commando_FragGrenade_C");
static_assert(sizeof(AB_Prj_Commando_FragGrenade_C) == 0x000B60, "Wrong size on AB_Prj_Commando_FragGrenade_C");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, UberGraphFrame) == 0x000868, "Member 'AB_Prj_Commando_FragGrenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, RotatingMovement) == 0x000870, "Member 'AB_Prj_Commando_FragGrenade_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Fuse_Particle) == 0x000878, "Member 'AB_Prj_Commando_FragGrenade_C::Fuse_Particle' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Mesh) == 0x000880, "Member 'AB_Prj_Commando_FragGrenade_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, GrenadeFuse_AudioComponent) == 0x000888, "Member 'AB_Prj_Commando_FragGrenade_C::GrenadeFuse_AudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Effect_Distance) == 0x000890, "Member 'AB_Prj_Commando_FragGrenade_C::Effect_Distance' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, P_Explosion) == 0x000898, "Member 'AB_Prj_Commando_FragGrenade_C::P_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cue_DistantSound) == 0x0008A0, "Member 'AB_Prj_Commando_FragGrenade_C::Cue_DistantSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cue_CloseSound) == 0x0008A8, "Member 'AB_Prj_Commando_FragGrenade_C::Cue_CloseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ExplosionRadius) == 0x0008B0, "Member 'AB_Prj_Commando_FragGrenade_C::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, NumberOfBouncesTillExplode) == 0x0008B4, "Member 'AB_Prj_Commando_FragGrenade_C::NumberOfBouncesTillExplode' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, CurrentNumberOfBounces) == 0x0008B8, "Member 'AB_Prj_Commando_FragGrenade_C::CurrentNumberOfBounces' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cue_GrenadeFuseSound) == 0x0008C0, "Member 'AB_Prj_Commando_FragGrenade_C::Cue_GrenadeFuseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, BouncePawnAgainstPawnGravityScale) == 0x0008C8, "Member 'AB_Prj_Commando_FragGrenade_C::BouncePawnAgainstPawnGravityScale' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ExplosionForceFeedbackNear) == 0x0008D0, "Member 'AB_Prj_Commando_FragGrenade_C::ExplosionForceFeedbackNear' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ExplosionForceFeedbackFar) == 0x0008D8, "Member 'AB_Prj_Commando_FragGrenade_C::ExplosionForceFeedbackFar' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, MaxClusterGrenades) == 0x0008E0, "Member 'AB_Prj_Commando_FragGrenade_C::MaxClusterGrenades' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, EC_ClusterExplosion) == 0x0008E4, "Member 'AB_Prj_Commando_FragGrenade_C::EC_ClusterExplosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, bHasCluster) == 0x0008EC, "Member 'AB_Prj_Commando_FragGrenade_C::bHasCluster' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Prj_Cluster) == 0x0008F0, "Member 'AB_Prj_Commando_FragGrenade_C::Prj_Cluster' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ClusterContainerSpec) == 0x0008F8, "Member 'AB_Prj_Commando_FragGrenade_C::ClusterContainerSpec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, bHasKeepOut) == 0x0009B0, "Member 'AB_Prj_Commando_FragGrenade_C::bHasKeepOut' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, KeepOutContainerSpec) == 0x0009B8, "Member 'AB_Prj_Commando_FragGrenade_C::KeepOutContainerSpec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, AOE_KeepOut) == 0x000A70, "Member 'AB_Prj_Commando_FragGrenade_C::AOE_KeepOut' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, bHasClusterTactical) == 0x000A78, "Member 'AB_Prj_Commando_FragGrenade_C::bHasClusterTactical' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cluster_Tactical_Container_Spec) == 0x000A80, "Member 'AB_Prj_Commando_FragGrenade_C::Cluster_Tactical_Container_Spec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, TC_ActorTagsThatShouldExplodeOnOverlap) == 0x000B38, "Member 'AB_Prj_Commando_FragGrenade_C::TC_ActorTagsThatShouldExplodeOnOverlap' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, T_Event_GrenadeExploded) == 0x000B58, "Member 'AB_Prj_Commando_FragGrenade_C::T_Event_GrenadeExploded' has a wrong offset!");

}
