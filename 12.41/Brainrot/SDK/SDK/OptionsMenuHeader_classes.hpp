#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsMenuHeader.OptionsMenuHeader_C
// 0x0088 (0x0310 - 0x0288)
class UOptionsMenuHeader_C final : public UFortOptionsMenuSetting
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxContainer;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                SpacerBottom;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextHeader;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Tab_Tooltip_Text;                                  // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         FontMobile;                                        // 0x02B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         FontSizeMobile;                                    // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OptionsMenuHeader(int32 EntryPoint);
	void BP_OnEntryReleased();
	void CenterOnWidget();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Construct();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Center_On_Widget();
	void UpdateSize();
	void HandlePawnSet();
	void SetFontSize(class UCommonTextBlock* Text, int32 DefaultSize, int32 MobileSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsMenuHeader_C">();
	}
	static class UOptionsMenuHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsMenuHeader_C>();
	}
};
static_assert(alignof(UOptionsMenuHeader_C) == 0x000008, "Wrong alignment on UOptionsMenuHeader_C");
static_assert(sizeof(UOptionsMenuHeader_C) == 0x000310, "Wrong size on UOptionsMenuHeader_C");
static_assert(offsetof(UOptionsMenuHeader_C, UberGraphFrame) == 0x000288, "Member 'UOptionsMenuHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHeader_C, Image_0) == 0x000290, "Member 'UOptionsMenuHeader_C::Image_0' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHeader_C, SizeBoxContainer) == 0x000298, "Member 'UOptionsMenuHeader_C::SizeBoxContainer' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHeader_C, SpacerBottom) == 0x0002A0, "Member 'UOptionsMenuHeader_C::SpacerBottom' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHeader_C, TextHeader) == 0x0002A8, "Member 'UOptionsMenuHeader_C::TextHeader' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHeader_C, Tab_Tooltip_Text) == 0x0002B0, "Member 'UOptionsMenuHeader_C::Tab_Tooltip_Text' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHeader_C, FontMobile) == 0x0002B8, "Member 'UOptionsMenuHeader_C::FontMobile' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHeader_C, FontSizeMobile) == 0x000308, "Member 'UOptionsMenuHeader_C::FontSizeMobile' has a wrong offset!");

}
