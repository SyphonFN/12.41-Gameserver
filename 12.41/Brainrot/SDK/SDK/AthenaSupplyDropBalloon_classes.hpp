#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSupplyDropBalloon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C
// 0x0040 (0x0B78 - 0x0B38)
class AAthenaSupplyDropBalloon_C final : public AFortAthenaSupplyDropBalloon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortHealthBarComponent*                FortHealthBar;                                     // 0x0B40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CrateDestroyed;                                    // 0x0B48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F56[0x7];                                     // 0x0B49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBalloonDestroyed;                                // 0x0B50(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                             BalloonPopSound;                                   // 0x0B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        BalloonPopFX;                                      // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DamageReduction;                                // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBalloonDestroyed__DelegateSignature();
	void ExecuteUbergraph_AthenaSupplyDropBalloon(int32 EntryPoint);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSupplyDropBalloon_C">();
	}
	static class AAthenaSupplyDropBalloon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaSupplyDropBalloon_C>();
	}
};
static_assert(alignof(AAthenaSupplyDropBalloon_C) == 0x000008, "Wrong alignment on AAthenaSupplyDropBalloon_C");
static_assert(sizeof(AAthenaSupplyDropBalloon_C) == 0x000B78, "Wrong size on AAthenaSupplyDropBalloon_C");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, UberGraphFrame) == 0x000B38, "Member 'AAthenaSupplyDropBalloon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, FortHealthBar) == 0x000B40, "Member 'AAthenaSupplyDropBalloon_C::FortHealthBar' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, CrateDestroyed) == 0x000B48, "Member 'AAthenaSupplyDropBalloon_C::CrateDestroyed' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, OnBalloonDestroyed) == 0x000B50, "Member 'AAthenaSupplyDropBalloon_C::OnBalloonDestroyed' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, BalloonPopSound) == 0x000B60, "Member 'AAthenaSupplyDropBalloon_C::BalloonPopSound' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, BalloonPopFX) == 0x000B68, "Member 'AAthenaSupplyDropBalloon_C::BalloonPopFX' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, GE_DamageReduction) == 0x000B70, "Member 'AAthenaSupplyDropBalloon_C::GE_DamageReduction' has a wrong offset!");

}

