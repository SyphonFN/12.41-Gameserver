#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsModeItemDetailsHostPanel

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatsModeItemDetailsHostPanel.StatsModeItemDetailsHostPanel_C
// 0x0028 (0x0368 - 0x0340)
class UStatsModeItemDetailsHostPanel_C final : public UFortItemManagementItemDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAttributesDetailWidget_C*          ItemAttributesDetailWidget;                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MarkedForMulchingBackgroundImage;                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeImage*                    MarkedForMulchingIndicatorImage;                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StatsModeItemDetailsHostPanel(int32 EntryPoint);
	void HandleHasItemMarkedForMulchingChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatsModeItemDetailsHostPanel_C">();
	}
	static class UStatsModeItemDetailsHostPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatsModeItemDetailsHostPanel_C>();
	}
};
static_assert(alignof(UStatsModeItemDetailsHostPanel_C) == 0x000008, "Wrong alignment on UStatsModeItemDetailsHostPanel_C");
static_assert(sizeof(UStatsModeItemDetailsHostPanel_C) == 0x000368, "Wrong size on UStatsModeItemDetailsHostPanel_C");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, UberGraphFrame) == 0x000340, "Member 'UStatsModeItemDetailsHostPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, HeaderWidget) == 0x000348, "Member 'UStatsModeItemDetailsHostPanel_C::HeaderWidget' has a wrong offset!");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, ItemAttributesDetailWidget) == 0x000350, "Member 'UStatsModeItemDetailsHostPanel_C::ItemAttributesDetailWidget' has a wrong offset!");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, MarkedForMulchingBackgroundImage) == 0x000358, "Member 'UStatsModeItemDetailsHostPanel_C::MarkedForMulchingBackgroundImage' has a wrong offset!");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, MarkedForMulchingIndicatorImage) == 0x000360, "Member 'UStatsModeItemDetailsHostPanel_C::MarkedForMulchingIndicatorImage' has a wrong offset!");

}

