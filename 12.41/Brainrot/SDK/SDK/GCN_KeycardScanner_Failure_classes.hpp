#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_KeycardScanner_Failure

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_KeycardScanner_Failure.GCN_KeycardScanner_Failure_C
// 0x0000 (0x01B0 - 0x01B0)
class UGCN_KeycardScanner_Failure_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_KeycardScanner_Failure_C">();
	}
	static class UGCN_KeycardScanner_Failure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_KeycardScanner_Failure_C>();
	}
};
static_assert(alignof(UGCN_KeycardScanner_Failure_C) == 0x000008, "Wrong alignment on UGCN_KeycardScanner_Failure_C");
static_assert(sizeof(UGCN_KeycardScanner_Failure_C) == 0x0001B0, "Wrong size on UGCN_KeycardScanner_Failure_C");

}
