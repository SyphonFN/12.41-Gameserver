#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Uncle_Charge_Tier2

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Uncle_Charge_Tier2.GCN_Uncle_Charge_Tier2_C
// 0x0000 (0x01B0 - 0x01B0)
class UGCN_Uncle_Charge_Tier2_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Uncle_Charge_Tier2_C">();
	}
	static class UGCN_Uncle_Charge_Tier2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Uncle_Charge_Tier2_C>();
	}
};
static_assert(alignof(UGCN_Uncle_Charge_Tier2_C) == 0x000008, "Wrong alignment on UGCN_Uncle_Charge_Tier2_C");
static_assert(sizeof(UGCN_Uncle_Charge_Tier2_C) == 0x0001B0, "Wrong size on UGCN_Uncle_Charge_Tier2_C");

}
