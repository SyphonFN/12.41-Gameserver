#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scoreboard_Silver

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Scoreboard_Silver.Scoreboard_Silver_C
// 0x0018 (0x0248 - 0x0230)
class UScoreboard_Silver_C final : public UUserWidget
{
public:
	class UImage*                                 Image_47;                                          // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_96;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_167;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Scoreboard_Silver_C">();
	}
	static class UScoreboard_Silver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreboard_Silver_C>();
	}
};
static_assert(alignof(UScoreboard_Silver_C) == 0x000008, "Wrong alignment on UScoreboard_Silver_C");
static_assert(sizeof(UScoreboard_Silver_C) == 0x000248, "Wrong size on UScoreboard_Silver_C");
static_assert(offsetof(UScoreboard_Silver_C, Image_47) == 0x000230, "Member 'UScoreboard_Silver_C::Image_47' has a wrong offset!");
static_assert(offsetof(UScoreboard_Silver_C, Image_96) == 0x000238, "Member 'UScoreboard_Silver_C::Image_96' has a wrong offset!");
static_assert(offsetof(UScoreboard_Silver_C, Image_167) == 0x000240, "Member 'UScoreboard_Silver_C::Image_167' has a wrong offset!");

}

