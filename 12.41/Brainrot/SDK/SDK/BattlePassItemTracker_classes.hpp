#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassItemTracker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattlePassItemTracker.BattlePassItemTracker_C
// 0x0030 (0x0298 - 0x0268)
class UBattlePassItemTracker_C final : public UAthenaBattlePassItemTracker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InitialState;                                      // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SetNumberVisible;                                  // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       IntroAnim;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Increase;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSecondary;                                       // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BattlePassItemTracker(int32 EntryPoint);
	void OnInterpStarted();
	void OnInterpEnded(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
	void HandleIntro();
	void HandleIncrease();
	void HandleNumberVisible();
	void HandleInitialState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassItemTracker_C">();
	}
	static class UBattlePassItemTracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassItemTracker_C>();
	}
};
static_assert(alignof(UBattlePassItemTracker_C) == 0x000008, "Wrong alignment on UBattlePassItemTracker_C");
static_assert(sizeof(UBattlePassItemTracker_C) == 0x000298, "Wrong size on UBattlePassItemTracker_C");
static_assert(offsetof(UBattlePassItemTracker_C, UberGraphFrame) == 0x000268, "Member 'UBattlePassItemTracker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassItemTracker_C, InitialState) == 0x000270, "Member 'UBattlePassItemTracker_C::InitialState' has a wrong offset!");
static_assert(offsetof(UBattlePassItemTracker_C, SetNumberVisible) == 0x000278, "Member 'UBattlePassItemTracker_C::SetNumberVisible' has a wrong offset!");
static_assert(offsetof(UBattlePassItemTracker_C, IntroAnim) == 0x000280, "Member 'UBattlePassItemTracker_C::IntroAnim' has a wrong offset!");
static_assert(offsetof(UBattlePassItemTracker_C, Increase) == 0x000288, "Member 'UBattlePassItemTracker_C::Increase' has a wrong offset!");
static_assert(offsetof(UBattlePassItemTracker_C, IsSecondary) == 0x000290, "Member 'UBattlePassItemTracker_C::IsSecondary' has a wrong offset!");

}
