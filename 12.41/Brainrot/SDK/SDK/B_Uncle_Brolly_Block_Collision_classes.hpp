#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Uncle_Brolly_Block_Collision

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Uncle_Brolly_Block_Collision.B_Uncle_Brolly_Block_Collision_C
// 0x01F8 (0x0980 - 0x0788)
class AB_Uncle_Brolly_Block_Collision_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        SCMinusHitLoc3;                                    // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SCMinusHitLoc2;                                    // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SCMinusHitLoc1;                                    // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box2;                                              // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box1;                                              // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot1;                                 // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_HitLoc1_T1_Op_D1585E60469979FE7FF5BD932C629D38; // 0x07C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_HitLoc1_T1_D1585E60469979FE7FF5BD932C629D38;    // 0x07CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_HitLoc1__Direction_D1585E60469979FE7FF5BD932C629D38; // 0x07D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BE8[0x7];                                     // 0x07D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TLMinusHitLoc1;                                    // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         StartingHealth;                                    // 0x07E8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         PoiseRegenCooldown;                                // 0x0808(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ImpulseMultiplier;                                 // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentPoise;                                      // 0x082C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         ImpulseZ;                                          // 0x0830(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ImpulseXY;                                         // 0x0850(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          OwnerDied;                                         // 0x0870(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BlockBreak;                                        // 0x0871(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUp;                                               // 0x0872(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Bright;                                            // 0x0873(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BE9[0x4];                                     // 0x0874(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_Heal;                                           // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_BlockBreak;                                     // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DamageResist;                                   // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_BlockBreakDamageCauser;                         // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           RepairTimerHandle;                                 // 0x0898(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_DeflectGeneric;                                 // 0x08A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_DeflectUncle;                                   // 0x08A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  T_BlockBreakDuration;                              // 0x08B0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           T_BlockedDamageEvent;                              // 0x08D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CollisionEnabled;                                  // 0x08D8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BEA[0x4];                                     // 0x08DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_UncleBrolly_C*                       BP_UncleWeapon;                                    // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           KineticFX_BaseColor;                               // 0x08E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           KineticFX_Tier1;                                   // 0x08F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           KineticFX_Tier2;                                   // 0x0908(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           KineticFX_Max;                                     // 0x0918(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           HitReactionMontage;                                // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MontageSection;                                    // 0x0930(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BEB[0x4];                                     // 0x0934(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           MontageSections;                                   // 0x0938(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                HitLoc1;                                           // 0x0948(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PoiseVisualLevel;                                  // 0x0954(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentPoiseVisualLevel;                           // 0x0958(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLoc2;                                           // 0x095C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLoc3;                                           // 0x0968(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_DeflectDamageCauser;                            // 0x0974(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Uncle_Brolly_Block_Collision(int32 EntryPoint);
	void Update_Audio_Poise_Level();
	void PickMontageSection();
	void OnBuildingHealthChanged_Event();
	void OnPlayerStartDBNO_Event_0();
	void RemovalChecks(class AFortPlayerPawn* Param_PlayerPawn);
	void CustomEvent_0(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void StartHealingTimer();
	void ApplyHeal();
	void ReceiveBeginPlay();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void GameplayCue_Damage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void TLMinusHitLoc1__UpdateFunc();
	void TLMinusHitLoc1__FinishedFunc();
	void ExecuteBlockGameplayCue(float Damage, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext, class AActor* Param_Instigator, const struct FHitResult& HitResult, bool* WasGalileoBun);
	void OnRep_CollisionEnabled();
	void SendBlockedDamageEvent(float Damage, class AActor* DamageCauser);
	void BlockedUncleImpulse(const struct FHitResult& HitInfo, class ACharacter* Param_Instigator);
	void ToggleProtoFX(bool Visible);
	void SetDamageThresholdVisuals();
	void PlayHitReactMontage();
	void OnRep_MontageSection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Uncle_Brolly_Block_Collision_C">();
	}
	static class AB_Uncle_Brolly_Block_Collision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Uncle_Brolly_Block_Collision_C>();
	}
};
static_assert(alignof(AB_Uncle_Brolly_Block_Collision_C) == 0x000008, "Wrong alignment on AB_Uncle_Brolly_Block_Collision_C");
static_assert(sizeof(AB_Uncle_Brolly_Block_Collision_C) == 0x000980, "Wrong size on AB_Uncle_Brolly_Block_Collision_C");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, UberGraphFrame) == 0x000788, "Member 'AB_Uncle_Brolly_Block_Collision_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, SCMinusHitLoc3) == 0x000790, "Member 'AB_Uncle_Brolly_Block_Collision_C::SCMinusHitLoc3' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, SCMinusHitLoc2) == 0x000798, "Member 'AB_Uncle_Brolly_Block_Collision_C::SCMinusHitLoc2' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, SCMinusHitLoc1) == 0x0007A0, "Member 'AB_Uncle_Brolly_Block_Collision_C::SCMinusHitLoc1' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, Box2) == 0x0007A8, "Member 'AB_Uncle_Brolly_Block_Collision_C::Box2' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, Box1) == 0x0007B0, "Member 'AB_Uncle_Brolly_Block_Collision_C::Box1' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, Box) == 0x0007B8, "Member 'AB_Uncle_Brolly_Block_Collision_C::Box' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, DefaultSceneRoot1) == 0x0007C0, "Member 'AB_Uncle_Brolly_Block_Collision_C::DefaultSceneRoot1' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, TL_HitLoc1_T1_Op_D1585E60469979FE7FF5BD932C629D38) == 0x0007C8, "Member 'AB_Uncle_Brolly_Block_Collision_C::TL_HitLoc1_T1_Op_D1585E60469979FE7FF5BD932C629D38' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, TL_HitLoc1_T1_D1585E60469979FE7FF5BD932C629D38) == 0x0007CC, "Member 'AB_Uncle_Brolly_Block_Collision_C::TL_HitLoc1_T1_D1585E60469979FE7FF5BD932C629D38' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, TL_HitLoc1__Direction_D1585E60469979FE7FF5BD932C629D38) == 0x0007D0, "Member 'AB_Uncle_Brolly_Block_Collision_C::TL_HitLoc1__Direction_D1585E60469979FE7FF5BD932C629D38' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, TLMinusHitLoc1) == 0x0007D8, "Member 'AB_Uncle_Brolly_Block_Collision_C::TLMinusHitLoc1' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, PlayerPawn) == 0x0007E0, "Member 'AB_Uncle_Brolly_Block_Collision_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, StartingHealth) == 0x0007E8, "Member 'AB_Uncle_Brolly_Block_Collision_C::StartingHealth' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, PoiseRegenCooldown) == 0x000808, "Member 'AB_Uncle_Brolly_Block_Collision_C::PoiseRegenCooldown' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, ImpulseMultiplier) == 0x000828, "Member 'AB_Uncle_Brolly_Block_Collision_C::ImpulseMultiplier' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, CurrentPoise) == 0x00082C, "Member 'AB_Uncle_Brolly_Block_Collision_C::CurrentPoise' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, ImpulseZ) == 0x000830, "Member 'AB_Uncle_Brolly_Block_Collision_C::ImpulseZ' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, ImpulseXY) == 0x000850, "Member 'AB_Uncle_Brolly_Block_Collision_C::ImpulseXY' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, OwnerDied) == 0x000870, "Member 'AB_Uncle_Brolly_Block_Collision_C::OwnerDied' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, BlockBreak) == 0x000871, "Member 'AB_Uncle_Brolly_Block_Collision_C::BlockBreak' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, bUp) == 0x000872, "Member 'AB_Uncle_Brolly_Block_Collision_C::bUp' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, Bright) == 0x000873, "Member 'AB_Uncle_Brolly_Block_Collision_C::Bright' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, GE_Heal) == 0x000878, "Member 'AB_Uncle_Brolly_Block_Collision_C::GE_Heal' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, GE_BlockBreak) == 0x000880, "Member 'AB_Uncle_Brolly_Block_Collision_C::GE_BlockBreak' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, GE_DamageResist) == 0x000888, "Member 'AB_Uncle_Brolly_Block_Collision_C::GE_DamageResist' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, GE_BlockBreakDamageCauser) == 0x000890, "Member 'AB_Uncle_Brolly_Block_Collision_C::GE_BlockBreakDamageCauser' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, RepairTimerHandle) == 0x000898, "Member 'AB_Uncle_Brolly_Block_Collision_C::RepairTimerHandle' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, GC_DeflectGeneric) == 0x0008A0, "Member 'AB_Uncle_Brolly_Block_Collision_C::GC_DeflectGeneric' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, GC_DeflectUncle) == 0x0008A8, "Member 'AB_Uncle_Brolly_Block_Collision_C::GC_DeflectUncle' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, T_BlockBreakDuration) == 0x0008B0, "Member 'AB_Uncle_Brolly_Block_Collision_C::T_BlockBreakDuration' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, T_BlockedDamageEvent) == 0x0008D0, "Member 'AB_Uncle_Brolly_Block_Collision_C::T_BlockedDamageEvent' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, CollisionEnabled) == 0x0008D8, "Member 'AB_Uncle_Brolly_Block_Collision_C::CollisionEnabled' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, BP_UncleWeapon) == 0x0008E0, "Member 'AB_Uncle_Brolly_Block_Collision_C::BP_UncleWeapon' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, KineticFX_BaseColor) == 0x0008E8, "Member 'AB_Uncle_Brolly_Block_Collision_C::KineticFX_BaseColor' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, KineticFX_Tier1) == 0x0008F8, "Member 'AB_Uncle_Brolly_Block_Collision_C::KineticFX_Tier1' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, KineticFX_Tier2) == 0x000908, "Member 'AB_Uncle_Brolly_Block_Collision_C::KineticFX_Tier2' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, KineticFX_Max) == 0x000918, "Member 'AB_Uncle_Brolly_Block_Collision_C::KineticFX_Max' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, HitReactionMontage) == 0x000928, "Member 'AB_Uncle_Brolly_Block_Collision_C::HitReactionMontage' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, MontageSection) == 0x000930, "Member 'AB_Uncle_Brolly_Block_Collision_C::MontageSection' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, MontageSections) == 0x000938, "Member 'AB_Uncle_Brolly_Block_Collision_C::MontageSections' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, HitLoc1) == 0x000948, "Member 'AB_Uncle_Brolly_Block_Collision_C::HitLoc1' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, PoiseVisualLevel) == 0x000954, "Member 'AB_Uncle_Brolly_Block_Collision_C::PoiseVisualLevel' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, CurrentPoiseVisualLevel) == 0x000958, "Member 'AB_Uncle_Brolly_Block_Collision_C::CurrentPoiseVisualLevel' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, HitLoc2) == 0x00095C, "Member 'AB_Uncle_Brolly_Block_Collision_C::HitLoc2' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, HitLoc3) == 0x000968, "Member 'AB_Uncle_Brolly_Block_Collision_C::HitLoc3' has a wrong offset!");
static_assert(offsetof(AB_Uncle_Brolly_Block_Collision_C, GC_DeflectDamageCauser) == 0x000974, "Member 'AB_Uncle_Brolly_Block_Collision_C::GC_DeflectDamageCauser' has a wrong offset!");

}
