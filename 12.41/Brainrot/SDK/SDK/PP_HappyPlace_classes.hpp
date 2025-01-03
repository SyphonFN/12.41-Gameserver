#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PP_HappyPlace

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PP_HappyPlace.PP_HappyPlace_C
// 0x0018 (0x0230 - 0x0218)
class APP_HappyPlace_C final : public AActor
{
public:
	class UPostProcessComponent*                  PostProcess;                                       // 0x0218(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PP_HappyPlace_C">();
	}
	static class APP_HappyPlace_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APP_HappyPlace_C>();
	}
};
static_assert(alignof(APP_HappyPlace_C) == 0x000008, "Wrong alignment on APP_HappyPlace_C");
static_assert(sizeof(APP_HappyPlace_C) == 0x000230, "Wrong size on APP_HappyPlace_C");
static_assert(offsetof(APP_HappyPlace_C, PostProcess) == 0x000218, "Member 'APP_HappyPlace_C::PostProcess' has a wrong offset!");
static_assert(offsetof(APP_HappyPlace_C, Box) == 0x000220, "Member 'APP_HappyPlace_C::Box' has a wrong offset!");
static_assert(offsetof(APP_HappyPlace_C, DefaultSceneRoot) == 0x000228, "Member 'APP_HappyPlace_C::DefaultSceneRoot' has a wrong offset!");

}

