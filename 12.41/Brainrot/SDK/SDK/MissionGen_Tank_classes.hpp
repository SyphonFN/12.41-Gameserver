#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionGen_Tank

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionGen_Tank.MissionGen_Tank_C
// 0x0000 (0x06C0 - 0x06C0)
class UMissionGen_Tank_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Tank_C">();
	}
	static class UMissionGen_Tank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Tank_C>();
	}
};
static_assert(alignof(UMissionGen_Tank_C) == 0x000008, "Wrong alignment on UMissionGen_Tank_C");
static_assert(sizeof(UMissionGen_Tank_C) == 0x0006C0, "Wrong size on UMissionGen_Tank_C");

}
