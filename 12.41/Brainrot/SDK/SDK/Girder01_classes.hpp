#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Girder01

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Girder01.Girder01_C
// 0x0000 (0x0CF8 - 0x0CF8)
class AGirder01_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Girder01_C">();
	}
	static class AGirder01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGirder01_C>();
	}
};
static_assert(alignof(AGirder01_C) == 0x000008, "Wrong alignment on AGirder01_C");
static_assert(sizeof(AGirder01_C) == 0x000CF8, "Wrong size on AGirder01_C");

}

