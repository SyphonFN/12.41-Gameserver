#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_InteractionPoint

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_InteractionPoint.HUD_InteractionPoint_C
// 0x00A8 (0x02D8 - 0x0230)
class UHUD_InteractionPoint_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntroScale;                                        // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          Border_ArrowClampContainer;                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DetailArrow;                                 // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DetailIcon;                                  // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DetailIcon_2;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DistantIcon;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Ping;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Container;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_InteractionIndication;                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_Detail;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_DistantPreview;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_TextorIcon;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_DetailLine1;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_DetailLine2;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DetailText;                                        // 0x02B8(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             DetailIcon;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HUD_InteractionPoint(int32 EntryPoint);
	void EventShowDetail(bool ShowDetail);
	void EventClamp(bool IsClamped, const struct FVector2D& Position);
	void SetDetailIcon(const struct FSlateBrush& Icon, bool ShowWithText, bool HideArrow);
	void SetDistantIcon(const struct FSlateBrush& Icon, bool Default, bool HideArrow);
	void EventSetText(const class FText& Param_DetailText);
	void EventOutro();
	void Construct();
	void EventIntro();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_InteractionPoint_C">();
	}
	static class UHUD_InteractionPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_InteractionPoint_C>();
	}
};
static_assert(alignof(UHUD_InteractionPoint_C) == 0x000008, "Wrong alignment on UHUD_InteractionPoint_C");
static_assert(sizeof(UHUD_InteractionPoint_C) == 0x0002D8, "Wrong size on UHUD_InteractionPoint_C");
static_assert(offsetof(UHUD_InteractionPoint_C, UberGraphFrame) == 0x000230, "Member 'UHUD_InteractionPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, IntroScale) == 0x000238, "Member 'UHUD_InteractionPoint_C::IntroScale' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Border_ArrowClampContainer) == 0x000240, "Member 'UHUD_InteractionPoint_C::Border_ArrowClampContainer' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Image) == 0x000248, "Member 'UHUD_InteractionPoint_C::Image' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Image_Arrow) == 0x000250, "Member 'UHUD_InteractionPoint_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Image_DetailArrow) == 0x000258, "Member 'UHUD_InteractionPoint_C::Image_DetailArrow' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Image_DetailIcon) == 0x000260, "Member 'UHUD_InteractionPoint_C::Image_DetailIcon' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Image_DetailIcon_2) == 0x000268, "Member 'UHUD_InteractionPoint_C::Image_DetailIcon_2' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Image_DistantIcon) == 0x000270, "Member 'UHUD_InteractionPoint_C::Image_DistantIcon' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Image_Ping) == 0x000278, "Member 'UHUD_InteractionPoint_C::Image_Ping' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, ScaleBox_Container) == 0x000280, "Member 'UHUD_InteractionPoint_C::ScaleBox_Container' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, ScaleBox_InteractionIndication) == 0x000288, "Member 'UHUD_InteractionPoint_C::ScaleBox_InteractionIndication' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Switcher_Detail) == 0x000290, "Member 'UHUD_InteractionPoint_C::Switcher_Detail' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Switcher_DistantPreview) == 0x000298, "Member 'UHUD_InteractionPoint_C::Switcher_DistantPreview' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Switcher_TextorIcon) == 0x0002A0, "Member 'UHUD_InteractionPoint_C::Switcher_TextorIcon' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Text_DetailLine1) == 0x0002A8, "Member 'UHUD_InteractionPoint_C::Text_DetailLine1' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, Text_DetailLine2) == 0x0002B0, "Member 'UHUD_InteractionPoint_C::Text_DetailLine2' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, DetailText) == 0x0002B8, "Member 'UHUD_InteractionPoint_C::DetailText' has a wrong offset!");
static_assert(offsetof(UHUD_InteractionPoint_C, DetailIcon) == 0x0002D0, "Member 'UHUD_InteractionPoint_C::DetailIcon' has a wrong offset!");

}
