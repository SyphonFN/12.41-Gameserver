#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaRotator

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C
// 0x0058 (0x0C20 - 0x0BC8)
class UAthenaRotator_C final : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      ButtonLeft;                                        // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonRight;                                       // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MainBorder;                                        // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Left_Triggering_Input_Action;                      // 0x0BE8(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                    Right_Triggering_Input_Action;                     // 0x0BF8(0x0010)(Edit, BlueprintVisible, NoDestructor)
	class UClass*                                 TextStyle;                                         // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowGamepadButtonOnlyWhenFocused;                  // 0x0C10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OneDirectionalModeActive;                          // 0x0C11(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E17[0x6];                                     // 0x0C12(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Cached_Button_Style;                               // 0x0C18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaRotator(int32 EntryPoint);
	void BP_OnClicked();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ChangeDirection(bool bDirection);
	void ConfigureForOneDirectionMode(bool UseOneDirectionalMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaRotator_C">();
	}
	static class UAthenaRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaRotator_C>();
	}
};
static_assert(alignof(UAthenaRotator_C) == 0x000008, "Wrong alignment on UAthenaRotator_C");
static_assert(sizeof(UAthenaRotator_C) == 0x000C20, "Wrong size on UAthenaRotator_C");
static_assert(offsetof(UAthenaRotator_C, UberGraphFrame) == 0x000BC8, "Member 'UAthenaRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, ButtonLeft) == 0x000BD0, "Member 'UAthenaRotator_C::ButtonLeft' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, ButtonRight) == 0x000BD8, "Member 'UAthenaRotator_C::ButtonRight' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, MainBorder) == 0x000BE0, "Member 'UAthenaRotator_C::MainBorder' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, Left_Triggering_Input_Action) == 0x000BE8, "Member 'UAthenaRotator_C::Left_Triggering_Input_Action' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, Right_Triggering_Input_Action) == 0x000BF8, "Member 'UAthenaRotator_C::Right_Triggering_Input_Action' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, TextStyle) == 0x000C08, "Member 'UAthenaRotator_C::TextStyle' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, ShowGamepadButtonOnlyWhenFocused) == 0x000C10, "Member 'UAthenaRotator_C::ShowGamepadButtonOnlyWhenFocused' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, OneDirectionalModeActive) == 0x000C11, "Member 'UAthenaRotator_C::OneDirectionalModeActive' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, Cached_Button_Style) == 0x000C18, "Member 'UAthenaRotator_C::Cached_Button_Style' has a wrong offset!");

}
