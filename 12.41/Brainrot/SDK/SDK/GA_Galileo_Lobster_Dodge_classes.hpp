#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Galileo_Lobster_Dodge

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Galileo_Lobster_Dodge.GA_Galileo_Lobster_Dodge_C
// 0x00C0 (0x0AF0 - 0x0A30)
class UGA_Galileo_Lobster_Dodge_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ACharacter*                             PlayerCharacter;                                   // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            MovementStrengthCurve;                             // 0x0A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            DodgeEffectHandle;                                 // 0x0A48(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         DodgeStrength;                                     // 0x0A50(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DodgeDuration;                                     // 0x0A70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DodgeVelocityClamp;                                // 0x0A90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_DodgeNorth;                                     // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DodgeSouth;                                     // 0x0AB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DodgeEast;                                      // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DodgeWest;                                      // 0x0AC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           M_DodgeNorth;                                      // 0x0AD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           M_DodgeSouth;                                      // 0x0AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           M_DodgeEast;                                       // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           M_DodgeWest;                                       // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Galileo_Lobster_Dodge(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Added_F353C9544720980739529CBB2776F7E1();
	void OnCompleted_B50D26204DCDE54864E4E4BE01DD0702();
	void OnBlendOut_B50D26204DCDE54864E4E4BE01DD0702();
	void OnInterrupted_B50D26204DCDE54864E4E4BE01DD0702();
	void OnCancelled_B50D26204DCDE54864E4E4BE01DD0702();
	void OnFinish_3701CDDB4ABF86025C059291A706D4B9();
	void SelectDodgeMontage(struct FVector* Direction, class UAnimMontage** DodgeMontage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Galileo_Lobster_Dodge_C">();
	}
	static class UGA_Galileo_Lobster_Dodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Galileo_Lobster_Dodge_C>();
	}
};
static_assert(alignof(UGA_Galileo_Lobster_Dodge_C) == 0x000008, "Wrong alignment on UGA_Galileo_Lobster_Dodge_C");
static_assert(sizeof(UGA_Galileo_Lobster_Dodge_C) == 0x000AF0, "Wrong size on UGA_Galileo_Lobster_Dodge_C");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Galileo_Lobster_Dodge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, PlayerCharacter) == 0x000A38, "Member 'UGA_Galileo_Lobster_Dodge_C::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, MovementStrengthCurve) == 0x000A40, "Member 'UGA_Galileo_Lobster_Dodge_C::MovementStrengthCurve' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, DodgeEffectHandle) == 0x000A48, "Member 'UGA_Galileo_Lobster_Dodge_C::DodgeEffectHandle' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, DodgeStrength) == 0x000A50, "Member 'UGA_Galileo_Lobster_Dodge_C::DodgeStrength' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, DodgeDuration) == 0x000A70, "Member 'UGA_Galileo_Lobster_Dodge_C::DodgeDuration' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, DodgeVelocityClamp) == 0x000A90, "Member 'UGA_Galileo_Lobster_Dodge_C::DodgeVelocityClamp' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, GE_DodgeNorth) == 0x000AB0, "Member 'UGA_Galileo_Lobster_Dodge_C::GE_DodgeNorth' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, GE_DodgeSouth) == 0x000AB8, "Member 'UGA_Galileo_Lobster_Dodge_C::GE_DodgeSouth' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, GE_DodgeEast) == 0x000AC0, "Member 'UGA_Galileo_Lobster_Dodge_C::GE_DodgeEast' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, GE_DodgeWest) == 0x000AC8, "Member 'UGA_Galileo_Lobster_Dodge_C::GE_DodgeWest' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, M_DodgeNorth) == 0x000AD0, "Member 'UGA_Galileo_Lobster_Dodge_C::M_DodgeNorth' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, M_DodgeSouth) == 0x000AD8, "Member 'UGA_Galileo_Lobster_Dodge_C::M_DodgeSouth' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, M_DodgeEast) == 0x000AE0, "Member 'UGA_Galileo_Lobster_Dodge_C::M_DodgeEast' has a wrong offset!");
static_assert(offsetof(UGA_Galileo_Lobster_Dodge_C, M_DodgeWest) == 0x000AE8, "Member 'UGA_Galileo_Lobster_Dodge_C::M_DodgeWest' has a wrong offset!");

}
