#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BundleProgressDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BundleProgressDisplay.BundleProgressDisplay_C
// 0x0020 (0x0260 - 0x0240)
class UBundleProgressDisplay_C final : public UAthenaChallengeProgressBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               ProgressBarSize;                                   // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxTextScale;                                 // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsLargeDisplay;                                    // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BundleProgressDisplay(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BundleProgressDisplay_C">();
	}
	static class UBundleProgressDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBundleProgressDisplay_C>();
	}
};
static_assert(alignof(UBundleProgressDisplay_C) == 0x000008, "Wrong alignment on UBundleProgressDisplay_C");
static_assert(sizeof(UBundleProgressDisplay_C) == 0x000260, "Wrong size on UBundleProgressDisplay_C");
static_assert(offsetof(UBundleProgressDisplay_C, UberGraphFrame) == 0x000240, "Member 'UBundleProgressDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBundleProgressDisplay_C, ProgressBarSize) == 0x000248, "Member 'UBundleProgressDisplay_C::ProgressBarSize' has a wrong offset!");
static_assert(offsetof(UBundleProgressDisplay_C, ScaleBoxTextScale) == 0x000250, "Member 'UBundleProgressDisplay_C::ScaleBoxTextScale' has a wrong offset!");
static_assert(offsetof(UBundleProgressDisplay_C, IsLargeDisplay) == 0x000258, "Member 'UBundleProgressDisplay_C::IsLargeDisplay' has a wrong offset!");

}
