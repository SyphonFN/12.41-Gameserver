#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialHenchmenViewMoreButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpatialHenchmenViewMoreButton.SpatialHenchmenViewMoreButton_C
// 0x0078 (0x0BE8 - 0x0B70)
class USpatialHenchmenViewMoreButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         Accept;                                            // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ButtonTypeSwitcher;                                // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Change;                                            // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_122;                            // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        DetailsButton_ContextSwitcher;                     // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PanelBacking;                                      // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Proceed_Icon_1;                                    // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Proceed_Text;                                      // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Proceed_Text_1;                                    // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Proceed_Text_3;                                    // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsViewOnlyButton;                                  // 0x0BD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_64E1[0x7];                                     // 0x0BD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    NewVar_0;                                          // 0x0BD8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_SpatialHenchmenViewMoreButton(int32 EntryPoint);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void SetMissionStateVisuals(EMissionState MissionState);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpatialHenchmenViewMoreButton_C">();
	}
	static class USpatialHenchmenViewMoreButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatialHenchmenViewMoreButton_C>();
	}
};
static_assert(alignof(USpatialHenchmenViewMoreButton_C) == 0x000008, "Wrong alignment on USpatialHenchmenViewMoreButton_C");
static_assert(sizeof(USpatialHenchmenViewMoreButton_C) == 0x000BE8, "Wrong size on USpatialHenchmenViewMoreButton_C");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, UberGraphFrame) == 0x000B70, "Member 'USpatialHenchmenViewMoreButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, OnHover) == 0x000B78, "Member 'USpatialHenchmenViewMoreButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, Accept) == 0x000B80, "Member 'USpatialHenchmenViewMoreButton_C::Accept' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, ButtonTypeSwitcher) == 0x000B88, "Member 'USpatialHenchmenViewMoreButton_C::ButtonTypeSwitcher' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, Change) == 0x000B90, "Member 'USpatialHenchmenViewMoreButton_C::Change' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, CommonActionWidget_122) == 0x000B98, "Member 'USpatialHenchmenViewMoreButton_C::CommonActionWidget_122' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, DetailsButton_ContextSwitcher) == 0x000BA0, "Member 'USpatialHenchmenViewMoreButton_C::DetailsButton_ContextSwitcher' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, PanelBacking) == 0x000BA8, "Member 'USpatialHenchmenViewMoreButton_C::PanelBacking' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, Proceed_Icon_1) == 0x000BB0, "Member 'USpatialHenchmenViewMoreButton_C::Proceed_Icon_1' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, Proceed_Text) == 0x000BB8, "Member 'USpatialHenchmenViewMoreButton_C::Proceed_Text' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, Proceed_Text_1) == 0x000BC0, "Member 'USpatialHenchmenViewMoreButton_C::Proceed_Text_1' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, Proceed_Text_3) == 0x000BC8, "Member 'USpatialHenchmenViewMoreButton_C::Proceed_Text_3' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, IsViewOnlyButton) == 0x000BD0, "Member 'USpatialHenchmenViewMoreButton_C::IsViewOnlyButton' has a wrong offset!");
static_assert(offsetof(USpatialHenchmenViewMoreButton_C, NewVar_0) == 0x000BD8, "Member 'USpatialHenchmenViewMoreButton_C::NewVar_0' has a wrong offset!");

}
