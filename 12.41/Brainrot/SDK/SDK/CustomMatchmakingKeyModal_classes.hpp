#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomMatchmakingKeyModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C
// 0x0040 (0x0490 - 0x0450)
class UCustomMatchmakingKeyModal_C final : public UFortCustomMatchmakingKeyModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      AcceptButton;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CloseButton;                                       // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton_120;                                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    EditTextActionWidget;                              // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainIcon;                                          // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CustomMatchmakingKeyModal(int32 EntryPoint);
	void BndEvt__CloseButton_120_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CustomMatchmakingKeyModal_C">();
	}
	static class UCustomMatchmakingKeyModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomMatchmakingKeyModal_C>();
	}
};
static_assert(alignof(UCustomMatchmakingKeyModal_C) == 0x000008, "Wrong alignment on UCustomMatchmakingKeyModal_C");
static_assert(sizeof(UCustomMatchmakingKeyModal_C) == 0x000490, "Wrong size on UCustomMatchmakingKeyModal_C");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, UberGraphFrame) == 0x000450, "Member 'UCustomMatchmakingKeyModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, AcceptButton) == 0x000458, "Member 'UCustomMatchmakingKeyModal_C::AcceptButton' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, CloseButton) == 0x000460, "Member 'UCustomMatchmakingKeyModal_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, CloseButton_120) == 0x000468, "Member 'UCustomMatchmakingKeyModal_C::CloseButton_120' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, EditTextActionWidget) == 0x000470, "Member 'UCustomMatchmakingKeyModal_C::EditTextActionWidget' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, Lightbox) == 0x000478, "Member 'UCustomMatchmakingKeyModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, MainIcon) == 0x000480, "Member 'UCustomMatchmakingKeyModal_C::MainIcon' has a wrong offset!");
static_assert(offsetof(UCustomMatchmakingKeyModal_C, Title) == 0x000488, "Member 'UCustomMatchmakingKeyModal_C::Title' has a wrong offset!");

}
