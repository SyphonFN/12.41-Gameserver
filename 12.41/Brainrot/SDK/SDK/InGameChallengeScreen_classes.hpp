#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InGameChallengeScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InGameChallengeScreen.InGameChallengeScreen_C
// 0x0020 (0x0438 - 0x0418)
class UInGameChallengeScreen_C final : public UFortInGameChallengeScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                ButtonMobileCloseArea;                             // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton;                                       // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InGameChallengeScreen(int32 EntryPoint);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonMobileCloseBackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void HandleBack(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InGameChallengeScreen_C">();
	}
	static class UInGameChallengeScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInGameChallengeScreen_C>();
	}
};
static_assert(alignof(UInGameChallengeScreen_C) == 0x000008, "Wrong alignment on UInGameChallengeScreen_C");
static_assert(sizeof(UInGameChallengeScreen_C) == 0x000438, "Wrong size on UInGameChallengeScreen_C");
static_assert(offsetof(UInGameChallengeScreen_C, UberGraphFrame) == 0x000418, "Member 'UInGameChallengeScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInGameChallengeScreen_C, ButtonMobileCloseArea) == 0x000420, "Member 'UInGameChallengeScreen_C::ButtonMobileCloseArea' has a wrong offset!");
static_assert(offsetof(UInGameChallengeScreen_C, CloseButton) == 0x000428, "Member 'UInGameChallengeScreen_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UInGameChallengeScreen_C, SafeZone_0) == 0x000430, "Member 'UInGameChallengeScreen_C::SafeZone_0' has a wrong offset!");

}
