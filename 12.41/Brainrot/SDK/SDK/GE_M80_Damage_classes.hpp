#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_M80_Damage

#include "Basic.hpp"

#include "GET_DirectBallisticDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_M80_Damage.GE_M80_Damage_C
// 0x0000 (0x07B8 - 0x07B8)
class UGE_M80_Damage_C final : public UGET_DirectBallisticDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_M80_Damage_C">();
	}
	static class UGE_M80_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_M80_Damage_C>();
	}
};
static_assert(alignof(UGE_M80_Damage_C) == 0x000008, "Wrong alignment on UGE_M80_Damage_C");
static_assert(sizeof(UGE_M80_Damage_C) == 0x0007B8, "Wrong size on UGE_M80_Damage_C");

}
