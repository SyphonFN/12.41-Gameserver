#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Car_Rat

#include "Basic.hpp"

#include "Car_DEFAULT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Car_Rat.Car_Rat_C
// 0x0000 (0x0D90 - 0x0D90)
class ACar_Rat_C final : public ACar_DEFAULT_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Car_Rat_C">();
	}
	static class ACar_Rat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACar_Rat_C>();
	}
};
static_assert(alignof(ACar_Rat_C) == 0x000008, "Wrong alignment on ACar_Rat_C");
static_assert(sizeof(ACar_Rat_C) == 0x000D90, "Wrong size on ACar_Rat_C");

}

