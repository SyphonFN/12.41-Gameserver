#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialDailyScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpatialDailyScreen.SpatialDailyScreen_C
// 0x0010 (0x03A0 - 0x0390)
class USpatialDailyScreen_C final : public USpatialDailyChallengesWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                              SafeZone_2;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SpatialDailyScreen(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpatialDailyScreen_C">();
	}
	static class USpatialDailyScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatialDailyScreen_C>();
	}
};
static_assert(alignof(USpatialDailyScreen_C) == 0x000008, "Wrong alignment on USpatialDailyScreen_C");
static_assert(sizeof(USpatialDailyScreen_C) == 0x0003A0, "Wrong size on USpatialDailyScreen_C");
static_assert(offsetof(USpatialDailyScreen_C, UberGraphFrame) == 0x000390, "Member 'USpatialDailyScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpatialDailyScreen_C, SafeZone_2) == 0x000398, "Member 'USpatialDailyScreen_C::SafeZone_2' has a wrong offset!");

}
