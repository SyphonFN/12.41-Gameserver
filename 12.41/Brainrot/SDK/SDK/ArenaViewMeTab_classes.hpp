#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArenaViewMeTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ArenaViewMeTab.ArenaViewMeTab_C
// 0x0008 (0x02E8 - 0x02E0)
class UArenaViewMeTab_C final : public UFortArenaPersonalViewTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ArenaViewMeTab(int32 EntryPoint);
	void Colorize(const struct FFortTournamentDisplayInfo& ColorInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArenaViewMeTab_C">();
	}
	static class UArenaViewMeTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArenaViewMeTab_C>();
	}
};
static_assert(alignof(UArenaViewMeTab_C) == 0x000008, "Wrong alignment on UArenaViewMeTab_C");
static_assert(sizeof(UArenaViewMeTab_C) == 0x0002E8, "Wrong size on UArenaViewMeTab_C");
static_assert(offsetof(UArenaViewMeTab_C, UberGraphFrame) == 0x0002E0, "Member 'UArenaViewMeTab_C::UberGraphFrame' has a wrong offset!");

}

