#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Uncle_Brolly_Charging

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C
// 0x0110 (0x0B40 - 0x0A30)
class UGA_Uncle_Brolly_Charging_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           H_ChargeTimer;                                     // 0x0A40(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ChargingGC;                                     // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChargeInterval;                                    // 0x0A50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChargeTime;                                        // 0x0A54(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          DashSent;                                          // 0x0A58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FA[0x3];                                     // 0x0A59(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            H_LoopingFX;                                       // 0x0A5C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45FB[0x4];                                     // 0x0A64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         ChargeTimeTier1Min;                                // 0x0A68(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ChargeTimeTier1Max;                                // 0x0A88(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ChargeTimeTier2Min;                                // 0x0AA8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ChargeTimeTier3Min;                                // 0x0AC8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle            H_GETier1Charge;                                   // 0x0AE8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            H_GETier2Charge;                                   // 0x0AF0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            H_GETier3Charge;                                   // 0x0AF8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 BlockingCollisionActor;                            // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Tier1;                                          // 0x0B08(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Tier2;                                          // 0x0B10(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Tier3;                                          // 0x0B18(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         MaxChargTime;                                      // 0x0B20(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Uncle_Brolly_Charging(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void SendDashEvent();
	void Charge();
	void Added_FACBA42F41E6BBCEF934D58174081694();
	void Added_699882F2491BAED188914E8EA8E570A8();
	void Added_01B21BB5462B54DFD9A574B9AD2FC460();
	void Added_2FCD6D3B4DB08DDC6BD200AE160EC520();
	void Added_48528F3D4F89B7CD1F02D5B11711EE71();
	void OnVelocityChage_F94183CE4754FCC5407FF88439C83C5D();
	void Added_629BDAC94E184D6EB36977904544A44A();
	void EventReceived_B0D835B84C86D6528F32F9A0C977480E(const struct FGameplayEventData& Payload);
	void OnSync_4EB9328C4C254350FD94F8A758B1AD9D();
	void EventReceived_07757B0D4CE517541CA873888A048F9F(const struct FGameplayEventData& Payload);
	void InitAbility();
	void OnRep_ChargeTime();
	void ManageChargeTags();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Uncle_Brolly_Charging_C">();
	}
	static class UGA_Uncle_Brolly_Charging_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Uncle_Brolly_Charging_C>();
	}
};
static_assert(alignof(UGA_Uncle_Brolly_Charging_C) == 0x000008, "Wrong alignment on UGA_Uncle_Brolly_Charging_C");
static_assert(sizeof(UGA_Uncle_Brolly_Charging_C) == 0x000B40, "Wrong size on UGA_Uncle_Brolly_Charging_C");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Uncle_Brolly_Charging_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, PlayerPawn) == 0x000A38, "Member 'UGA_Uncle_Brolly_Charging_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, H_ChargeTimer) == 0x000A40, "Member 'UGA_Uncle_Brolly_Charging_C::H_ChargeTimer' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, GE_ChargingGC) == 0x000A48, "Member 'UGA_Uncle_Brolly_Charging_C::GE_ChargingGC' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, ChargeInterval) == 0x000A50, "Member 'UGA_Uncle_Brolly_Charging_C::ChargeInterval' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, ChargeTime) == 0x000A54, "Member 'UGA_Uncle_Brolly_Charging_C::ChargeTime' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, DashSent) == 0x000A58, "Member 'UGA_Uncle_Brolly_Charging_C::DashSent' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, H_LoopingFX) == 0x000A5C, "Member 'UGA_Uncle_Brolly_Charging_C::H_LoopingFX' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, ChargeTimeTier1Min) == 0x000A68, "Member 'UGA_Uncle_Brolly_Charging_C::ChargeTimeTier1Min' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, ChargeTimeTier1Max) == 0x000A88, "Member 'UGA_Uncle_Brolly_Charging_C::ChargeTimeTier1Max' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, ChargeTimeTier2Min) == 0x000AA8, "Member 'UGA_Uncle_Brolly_Charging_C::ChargeTimeTier2Min' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, ChargeTimeTier3Min) == 0x000AC8, "Member 'UGA_Uncle_Brolly_Charging_C::ChargeTimeTier3Min' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, H_GETier1Charge) == 0x000AE8, "Member 'UGA_Uncle_Brolly_Charging_C::H_GETier1Charge' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, H_GETier2Charge) == 0x000AF0, "Member 'UGA_Uncle_Brolly_Charging_C::H_GETier2Charge' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, H_GETier3Charge) == 0x000AF8, "Member 'UGA_Uncle_Brolly_Charging_C::H_GETier3Charge' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, BlockingCollisionActor) == 0x000B00, "Member 'UGA_Uncle_Brolly_Charging_C::BlockingCollisionActor' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, GC_Tier1) == 0x000B08, "Member 'UGA_Uncle_Brolly_Charging_C::GC_Tier1' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, GC_Tier2) == 0x000B10, "Member 'UGA_Uncle_Brolly_Charging_C::GC_Tier2' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, GC_Tier3) == 0x000B18, "Member 'UGA_Uncle_Brolly_Charging_C::GC_Tier3' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Charging_C, MaxChargTime) == 0x000B20, "Member 'UGA_Uncle_Brolly_Charging_C::MaxChargTime' has a wrong offset!");

}
