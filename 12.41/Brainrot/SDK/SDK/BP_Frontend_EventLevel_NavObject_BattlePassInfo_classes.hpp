#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Frontend_EventLevel_NavObject_BattlePassInfo

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C
// 0x0048 (0x0510 - 0x04C8)
class ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C final : public AFortNavigationActor_BattlePassInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                       XpValues;                                          // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   XpBar;                                             // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RightMonitor;                                      // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LeftMonitor;                                       // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               XpBarMid;                                          // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BPRewardsMid;                                      // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_LeftMonitor;                                   // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DeubgPurchased;                                    // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassInfo(int32 EntryPoint);
	void OnInitializeForPlayer();
	void UpdateVisuals();
	void OnUpdateWidgetVisibility(class AFortPlayerController* PlayerController, bool bEnabled);
	void InitForBattlePassInfo(int32 CurrentLevel, int32 CurrentXp, int32 XpToLevel, const class UFortItemDefinition* NextReward);
	void ReceiveBeginPlay();
	void OnLoaded_5B4B515147509217750E62A2CDE15CEF(class UObject* Loaded);
	void UserConstructionScript();
	void SetBattlePassVisuals(bool Purchased);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Frontend_EventLevel_NavObject_BattlePassInfo_C">();
	}
	static class ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C>();
	}
};
static_assert(alignof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C) == 0x000008, "Wrong alignment on ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C");
static_assert(sizeof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C) == 0x000510, "Wrong size on ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C, UberGraphFrame) == 0x0004C8, "Member 'ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C, XpValues) == 0x0004D0, "Member 'ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::XpValues' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C, XpBar) == 0x0004D8, "Member 'ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::XpBar' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C, RightMonitor) == 0x0004E0, "Member 'ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::RightMonitor' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C, LeftMonitor) == 0x0004E8, "Member 'ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::LeftMonitor' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C, XpBarMid) == 0x0004F0, "Member 'ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::XpBarMid' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C, BPRewardsMid) == 0x0004F8, "Member 'ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::BPRewardsMid' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C, MID_LeftMonitor) == 0x000500, "Member 'ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::MID_LeftMonitor' has a wrong offset!");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C, DeubgPurchased) == 0x000508, "Member 'ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C::DeubgPurchased' has a wrong offset!");

}

