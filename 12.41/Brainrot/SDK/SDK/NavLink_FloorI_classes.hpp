#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavLink_FloorI

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NavLink_FloorI.NavLink_FloorI_C
// 0x0000 (0x0080 - 0x0080)
class UNavLink_FloorI_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_FloorI_C">();
	}
	static class UNavLink_FloorI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_FloorI_C>();
	}
};
static_assert(alignof(UNavLink_FloorI_C) == 0x000008, "Wrong alignment on UNavLink_FloorI_C");
static_assert(sizeof(UNavLink_FloorI_C) == 0x000080, "Wrong size on UNavLink_FloorI_C");

}
