#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConstructorMannequin_Male

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ConstructorMannequin_Male.ConstructorMannequin_Male_C
// 0x0000 (0x0458 - 0x0458)
class AConstructorMannequin_Male_C final : public AFortPlayerMannequin
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConstructorMannequin_Male_C">();
	}
	static class AConstructorMannequin_Male_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AConstructorMannequin_Male_C>();
	}
};
static_assert(alignof(AConstructorMannequin_Male_C) == 0x000008, "Wrong alignment on AConstructorMannequin_Male_C");
static_assert(sizeof(AConstructorMannequin_Male_C) == 0x000458, "Wrong size on AConstructorMannequin_Male_C");

}
