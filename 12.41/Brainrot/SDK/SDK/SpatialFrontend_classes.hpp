#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialFrontend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpatialFrontend.SpatialFrontend_C
// 0x0068 (0x03A8 - 0x0340)
class USpatialFrontend_C final : public UAthenaSpatialFrontend
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPS12ElevatorPanel_C*                  BPS12ElevatorPanel;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDonutChallengeScreen_C*                DonutChallengeScreen;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialBattlePass_C*                   SpatialBattlePass;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialBattlePassExplore_C*            SpatialBattlePassExplore;                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialCustomizationMain_C*            SpatialCustomizationMain;                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialCustomizationRoomScreen_C*      SpatialCustomizationRoom;                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialDailyScreen_C*                  SpatialDailyScreen;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialDonutScreen_C*                  SpatialDonutScreen;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialFactionScreen_C*                SpatialFactionScreen;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialHenchmanFactionSelection_C*     SpatialHenchmanFactionSelection;                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialMainRoomScreen_C*               SpatialMainRoomScreen;                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialMapScreen_C*                    SpatialMapScreen;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SpatialFrontend(int32 EntryPoint);
	void BP_OnDeactivated();
	void OnEventLevelTransitionBegin(const struct FGameplayTag& TargetCamera, const class AFortEventLevelNavigationActor* TargetNavActor);
	void OnEventLevelTransitionComplete(const struct FGameplayTag& ActiveCamera);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpatialFrontend_C">();
	}
	static class USpatialFrontend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatialFrontend_C>();
	}
};
static_assert(alignof(USpatialFrontend_C) == 0x000008, "Wrong alignment on USpatialFrontend_C");
static_assert(sizeof(USpatialFrontend_C) == 0x0003A8, "Wrong size on USpatialFrontend_C");
static_assert(offsetof(USpatialFrontend_C, UberGraphFrame) == 0x000340, "Member 'USpatialFrontend_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, BPS12ElevatorPanel) == 0x000348, "Member 'USpatialFrontend_C::BPS12ElevatorPanel' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, DonutChallengeScreen) == 0x000350, "Member 'USpatialFrontend_C::DonutChallengeScreen' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialBattlePass) == 0x000358, "Member 'USpatialFrontend_C::SpatialBattlePass' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialBattlePassExplore) == 0x000360, "Member 'USpatialFrontend_C::SpatialBattlePassExplore' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialCustomizationMain) == 0x000368, "Member 'USpatialFrontend_C::SpatialCustomizationMain' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialCustomizationRoom) == 0x000370, "Member 'USpatialFrontend_C::SpatialCustomizationRoom' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialDailyScreen) == 0x000378, "Member 'USpatialFrontend_C::SpatialDailyScreen' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialDonutScreen) == 0x000380, "Member 'USpatialFrontend_C::SpatialDonutScreen' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialFactionScreen) == 0x000388, "Member 'USpatialFrontend_C::SpatialFactionScreen' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialHenchmanFactionSelection) == 0x000390, "Member 'USpatialFrontend_C::SpatialHenchmanFactionSelection' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialMainRoomScreen) == 0x000398, "Member 'USpatialFrontend_C::SpatialMainRoomScreen' has a wrong offset!");
static_assert(offsetof(USpatialFrontend_C, SpatialMapScreen) == 0x0003A0, "Member 'USpatialFrontend_C::SpatialMapScreen' has a wrong offset!");

}
