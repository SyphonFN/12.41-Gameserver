#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LogCabin_Wall_Door_Center

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LogCabin_Wall_Door_Center.LogCabin_Wall_Door_Center_C
// 0x0000 (0x0CF8 - 0x0CF8)
class ALogCabin_Wall_Door_Center_C final : public AParent_BuildingWall_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LogCabin_Wall_Door_Center_C">();
	}
	static class ALogCabin_Wall_Door_Center_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALogCabin_Wall_Door_Center_C>();
	}
};
static_assert(alignof(ALogCabin_Wall_Door_Center_C) == 0x000008, "Wrong alignment on ALogCabin_Wall_Door_Center_C");
static_assert(sizeof(ALogCabin_Wall_Door_Center_C) == 0x000CF8, "Wrong size on ALogCabin_Wall_Door_Center_C");

}
