#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_SilkyBingo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Athena_Prop_BurstReaction_Exploding_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C
// 0x0038 (0x0DB8 - 0x0D80)
class AAthena_Prop_SilkyBingo_C final : public AAthena_Prop_BurstReaction_Exploding_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Athena_Prop_SilkyBingo_C;           // 0x0D80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Explosion_Radius;                                  // 0x0D88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delay_before_applying_effect;                      // 0x0D8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Death_Decal_Size;                                  // 0x0D90(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          Random_Stream;                                     // 0x0D9C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	float                                         Distance_for_Camera_Lens;                          // 0x0DA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Object_Types;                                      // 0x0DA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Athena_Prop_SilkyBingo(int32 EntryPoint);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	bool Distance_Check_for_Camera_Lens_Effect(class AActor* Param_Instigator);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_SilkyBingo_C">();
	}
	static class AAthena_Prop_SilkyBingo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_SilkyBingo_C>();
	}
};
static_assert(alignof(AAthena_Prop_SilkyBingo_C) == 0x000008, "Wrong alignment on AAthena_Prop_SilkyBingo_C");
static_assert(sizeof(AAthena_Prop_SilkyBingo_C) == 0x000DB8, "Wrong size on AAthena_Prop_SilkyBingo_C");
static_assert(offsetof(AAthena_Prop_SilkyBingo_C, UberGraphFrame_Athena_Prop_SilkyBingo_C) == 0x000D80, "Member 'AAthena_Prop_SilkyBingo_C::UberGraphFrame_Athena_Prop_SilkyBingo_C' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SilkyBingo_C, Explosion_Radius) == 0x000D88, "Member 'AAthena_Prop_SilkyBingo_C::Explosion_Radius' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SilkyBingo_C, Delay_before_applying_effect) == 0x000D8C, "Member 'AAthena_Prop_SilkyBingo_C::Delay_before_applying_effect' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SilkyBingo_C, Death_Decal_Size) == 0x000D90, "Member 'AAthena_Prop_SilkyBingo_C::Death_Decal_Size' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SilkyBingo_C, Random_Stream) == 0x000D9C, "Member 'AAthena_Prop_SilkyBingo_C::Random_Stream' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SilkyBingo_C, Distance_for_Camera_Lens) == 0x000DA4, "Member 'AAthena_Prop_SilkyBingo_C::Distance_for_Camera_Lens' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_SilkyBingo_C, Object_Types) == 0x000DA8, "Member 'AAthena_Prop_SilkyBingo_C::Object_Types' has a wrong offset!");

}

