#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeRewardEntry

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChallengeRewardEntry.ChallengeRewardEntry_C
// 0x0000 (0x0240 - 0x0240)
class UChallengeRewardEntry_C final : public UAthenaChallengeRewardDisplayEntry
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeRewardEntry_C">();
	}
	static class UChallengeRewardEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeRewardEntry_C>();
	}
};
static_assert(alignof(UChallengeRewardEntry_C) == 0x000008, "Wrong alignment on UChallengeRewardEntry_C");
static_assert(sizeof(UChallengeRewardEntry_C) == 0x000240, "Wrong size on UChallengeRewardEntry_C");

}
