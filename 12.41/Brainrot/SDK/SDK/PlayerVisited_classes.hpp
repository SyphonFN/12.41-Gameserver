#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerVisited

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerVisited.PlayerVisited_C
// 0x0028 (0x0320 - 0x02F8)
class UPlayerVisited_C final : public UAthenaVisitedAreaDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BriefShow;                                         // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_landmarkorPOI;                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MainBox;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MainLocationText;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerVisited(int32 EntryPoint);
	void OnStompedByOtherWidget();
	void OnStompFailed();
	void Brief_Show_Finished();
	void OnNewVisited(const class FText& LocalizedLocationName, bool bIsNamedLocation);
	void Construct();
	void EndOfShow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerVisited_C">();
	}
	static class UPlayerVisited_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerVisited_C>();
	}
};
static_assert(alignof(UPlayerVisited_C) == 0x000008, "Wrong alignment on UPlayerVisited_C");
static_assert(sizeof(UPlayerVisited_C) == 0x000320, "Wrong size on UPlayerVisited_C");
static_assert(offsetof(UPlayerVisited_C, UberGraphFrame) == 0x0002F8, "Member 'UPlayerVisited_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, BriefShow) == 0x000300, "Member 'UPlayerVisited_C::BriefShow' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, CommonWidgetSwitcher_landmarkorPOI) == 0x000308, "Member 'UPlayerVisited_C::CommonWidgetSwitcher_landmarkorPOI' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, MainBox) == 0x000310, "Member 'UPlayerVisited_C::MainBox' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, MainLocationText) == 0x000318, "Member 'UPlayerVisited_C::MainLocationText' has a wrong offset!");

}

