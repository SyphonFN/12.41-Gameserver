#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hook_Camera_LensEffect

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Hook_Camera_LensEffect.BP_Hook_Camera_LensEffect_C
// 0x0000 (0x02D0 - 0x02D0)
class ABP_Hook_Camera_LensEffect_C final : public AEmitterCameraLensEffectBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Hook_Camera_LensEffect_C">();
	}
	static class ABP_Hook_Camera_LensEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Hook_Camera_LensEffect_C>();
	}
};
static_assert(alignof(ABP_Hook_Camera_LensEffect_C) == 0x000010, "Wrong alignment on ABP_Hook_Camera_LensEffect_C");
static_assert(sizeof(ABP_Hook_Camera_LensEffect_C) == 0x0002D0, "Wrong size on ABP_Hook_Camera_LensEffect_C");

}
