#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameFeatureStatus

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GameFeatureStatus.GameFeatureStatus_C
// 0x0060 (0x0378 - 0x0318)
class UGameFeatureStatus_C final : public UAthenaGameFeatureStatus
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Downloading_Error;                                 // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Downloading;                                       // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_ErrorIcon;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Pause;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_ProgressOrError;                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Progress;                                          // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Error;                                             // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Paused;                                            // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GameFeatureStatus(int32 EntryPoint);
	void OnStatusChanged(EAthenaGameFeatureStatus NewStatus);
	void HandleStatusChanged(EAthenaGameFeatureStatus CurrentStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GameFeatureStatus_C">();
	}
	static class UGameFeatureStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureStatus_C>();
	}
};
static_assert(alignof(UGameFeatureStatus_C) == 0x000008, "Wrong alignment on UGameFeatureStatus_C");
static_assert(sizeof(UGameFeatureStatus_C) == 0x000378, "Wrong size on UGameFeatureStatus_C");
static_assert(offsetof(UGameFeatureStatus_C, UberGraphFrame) == 0x000318, "Member 'UGameFeatureStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Downloading_Error) == 0x000320, "Member 'UGameFeatureStatus_C::Downloading_Error' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Downloading) == 0x000328, "Member 'UGameFeatureStatus_C::Downloading' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Image_ErrorIcon) == 0x000330, "Member 'UGameFeatureStatus_C::Image_ErrorIcon' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Image_Pause) == 0x000338, "Member 'UGameFeatureStatus_C::Image_Pause' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Switcher_ProgressOrError) == 0x000340, "Member 'UGameFeatureStatus_C::Switcher_ProgressOrError' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Progress) == 0x000348, "Member 'UGameFeatureStatus_C::Progress' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Error) == 0x000358, "Member 'UGameFeatureStatus_C::Error' has a wrong offset!");
static_assert(offsetof(UGameFeatureStatus_C, Paused) == 0x000368, "Member 'UGameFeatureStatus_C::Paused' has a wrong offset!");

}
