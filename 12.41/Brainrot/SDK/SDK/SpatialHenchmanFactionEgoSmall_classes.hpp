#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialHenchmanFactionEgoSmall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpatialHenchmanFactionEgoSmall.SpatialHenchmanFactionEgoSmall_C
// 0x0078 (0x0BE8 - 0x0B70)
class USpatialHenchmanFactionEgoSmall_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnActivate;                                        // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0B88(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BGFill;                                            // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_122;                            // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FactionLogo_C;                                     // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FactionLogo_R;                                     // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftLine;                                          // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightLine;                                         // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               StatusandBarsOvr;                                  // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter;                                        // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_C;                                      // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_R;                                      // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SpatialHenchmanFactionEgoSmall(int32 EntryPoint);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpatialHenchmanFactionEgoSmall_C">();
	}
	static class USpatialHenchmanFactionEgoSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatialHenchmanFactionEgoSmall_C>();
	}
};
static_assert(alignof(USpatialHenchmanFactionEgoSmall_C) == 0x000008, "Wrong alignment on USpatialHenchmanFactionEgoSmall_C");
static_assert(sizeof(USpatialHenchmanFactionEgoSmall_C) == 0x000BE8, "Wrong size on USpatialHenchmanFactionEgoSmall_C");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, UberGraphFrame) == 0x000B70, "Member 'USpatialHenchmanFactionEgoSmall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, OnActivate) == 0x000B78, "Member 'USpatialHenchmanFactionEgoSmall_C::OnActivate' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, OnHover) == 0x000B80, "Member 'USpatialHenchmanFactionEgoSmall_C::OnHover' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, Intro) == 0x000B88, "Member 'USpatialHenchmanFactionEgoSmall_C::Intro' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, BGFill) == 0x000B90, "Member 'USpatialHenchmanFactionEgoSmall_C::BGFill' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, CommonActionWidget_122) == 0x000B98, "Member 'USpatialHenchmanFactionEgoSmall_C::CommonActionWidget_122' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, FactionLogo_C) == 0x000BA0, "Member 'USpatialHenchmanFactionEgoSmall_C::FactionLogo_C' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, FactionLogo_R) == 0x000BA8, "Member 'USpatialHenchmanFactionEgoSmall_C::FactionLogo_R' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, Glow) == 0x000BB0, "Member 'USpatialHenchmanFactionEgoSmall_C::Glow' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, LeftLine) == 0x000BB8, "Member 'USpatialHenchmanFactionEgoSmall_C::LeftLine' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, RightLine) == 0x000BC0, "Member 'USpatialHenchmanFactionEgoSmall_C::RightLine' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, StatusandBarsOvr) == 0x000BC8, "Member 'USpatialHenchmanFactionEgoSmall_C::StatusandBarsOvr' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, Text_Alter) == 0x000BD0, "Member 'USpatialHenchmanFactionEgoSmall_C::Text_Alter' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, Text_Alter_C) == 0x000BD8, "Member 'USpatialHenchmanFactionEgoSmall_C::Text_Alter_C' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionEgoSmall_C, Text_Alter_R) == 0x000BE0, "Member 'USpatialHenchmanFactionEgoSmall_C::Text_Alter_R' has a wrong offset!");

}

