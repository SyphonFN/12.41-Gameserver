#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChallengePageRotator

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaChallengePageRotator.AthenaChallengePageRotator_C
// 0x0028 (0x0C58 - 0x0C30)
class UAthenaChallengePageRotator_C final : public UAthenaChallengePageRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0C38(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0C40(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Background;                                        // 0x0C48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GradientBackground;                                // 0x0C50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaChallengePageRotator(int32 EntryPoint);
	void SetInputBindingVisiblity(ESlateVisibility InVisibility);
	void SetVisibilityMinusPostAnim();
	void OnNumPagesSet(int32 NumPages);
	void BP_OnOptionSelected(int32 Param_Index);
	void BP_OnOptionsPopulated(int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengePageRotator_C">();
	}
	static class UAthenaChallengePageRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengePageRotator_C>();
	}
};
static_assert(alignof(UAthenaChallengePageRotator_C) == 0x000008, "Wrong alignment on UAthenaChallengePageRotator_C");
static_assert(sizeof(UAthenaChallengePageRotator_C) == 0x000C58, "Wrong size on UAthenaChallengePageRotator_C");
static_assert(offsetof(UAthenaChallengePageRotator_C, UberGraphFrame) == 0x000C30, "Member 'UAthenaChallengePageRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageRotator_C, Outro) == 0x000C38, "Member 'UAthenaChallengePageRotator_C::Outro' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageRotator_C, Intro) == 0x000C40, "Member 'UAthenaChallengePageRotator_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageRotator_C, Background) == 0x000C48, "Member 'UAthenaChallengePageRotator_C::Background' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageRotator_C, GradientBackground) == 0x000C50, "Member 'UAthenaChallengePageRotator_C::GradientBackground' has a wrong offset!");

}

