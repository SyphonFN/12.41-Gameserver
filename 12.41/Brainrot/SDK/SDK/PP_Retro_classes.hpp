#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PP_Retro

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PP_Retro.PP_Retro_C
// 0x0020 (0x0238 - 0x0218)
class APP_Retro_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess_High;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PP_Retro(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PP_Retro_C">();
	}
	static class APP_Retro_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APP_Retro_C>();
	}
};
static_assert(alignof(APP_Retro_C) == 0x000008, "Wrong alignment on APP_Retro_C");
static_assert(sizeof(APP_Retro_C) == 0x000238, "Wrong size on APP_Retro_C");
static_assert(offsetof(APP_Retro_C, UberGraphFrame) == 0x000218, "Member 'APP_Retro_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APP_Retro_C, PostProcess_High) == 0x000220, "Member 'APP_Retro_C::PostProcess_High' has a wrong offset!");
static_assert(offsetof(APP_Retro_C, Box) == 0x000228, "Member 'APP_Retro_C::Box' has a wrong offset!");
static_assert(offsetof(APP_Retro_C, DefaultSceneRoot) == 0x000230, "Member 'APP_Retro_C::DefaultSceneRoot' has a wrong offset!");

}
