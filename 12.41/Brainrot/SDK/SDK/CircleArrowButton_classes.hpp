#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CircleArrowButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CircleArrowButton.CircleArrowButton_C
// 0x0070 (0x0BE0 - 0x0B70)
class UCircleArrowButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Click;                                             // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Shadow;                                      // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_ButtonContainer;                           // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Flip;                                              // 0x0BA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55B8[0x3];                                     // 0x0BA1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ArrowColor;                                        // 0x0BA4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           ShadowColor;                                       // 0x0BB4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x0BC4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55B9[0x3];                                     // 0x0BC5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EdgeSoftness;                                      // 0x0BC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoverColor;                                        // 0x0BCC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UseShadow;                                         // 0x0BDC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CircleArrowButton(int32 EntryPoint);
	void BP_OnClicked();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void PreConstruct(bool IsDesignTime);
	void UpdateArrowColor(const struct FLinearColor& Color, const struct FLinearColor& Param_HoverColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CircleArrowButton_C">();
	}
	static class UCircleArrowButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCircleArrowButton_C>();
	}
};
static_assert(alignof(UCircleArrowButton_C) == 0x000008, "Wrong alignment on UCircleArrowButton_C");
static_assert(sizeof(UCircleArrowButton_C) == 0x000BE0, "Wrong size on UCircleArrowButton_C");
static_assert(offsetof(UCircleArrowButton_C, UberGraphFrame) == 0x000B70, "Member 'UCircleArrowButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Click) == 0x000B78, "Member 'UCircleArrowButton_C::Click' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Hover) == 0x000B80, "Member 'UCircleArrowButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Image_Arrow) == 0x000B88, "Member 'UCircleArrowButton_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Image_Shadow) == 0x000B90, "Member 'UCircleArrowButton_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Overlay_ButtonContainer) == 0x000B98, "Member 'UCircleArrowButton_C::Overlay_ButtonContainer' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Flip) == 0x000BA0, "Member 'UCircleArrowButton_C::Flip' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, ArrowColor) == 0x000BA4, "Member 'UCircleArrowButton_C::ArrowColor' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, ShadowColor) == 0x000BB4, "Member 'UCircleArrowButton_C::ShadowColor' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, NewVar_0) == 0x000BC4, "Member 'UCircleArrowButton_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, EdgeSoftness) == 0x000BC8, "Member 'UCircleArrowButton_C::EdgeSoftness' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, HoverColor) == 0x000BCC, "Member 'UCircleArrowButton_C::HoverColor' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, UseShadow) == 0x000BDC, "Member 'UCircleArrowButton_C::UseShadow' has a wrong offset!");

}
