#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_InteractUse

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C
// 0x0008 (0x0A38 - 0x0A30)
class UGA_DefaultPlayer_InteractUse_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_DefaultPlayer_InteractUse(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_A513E1E044E129CC612DF5A23589BC9C();
	void OnBlendOut_A513E1E044E129CC612DF5A23589BC9C();
	void OnInterrupted_A513E1E044E129CC612DF5A23589BC9C();
	void OnCancelled_A513E1E044E129CC612DF5A23589BC9C();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_InteractUse_C">();
	}
	static class UGA_DefaultPlayer_InteractUse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_InteractUse_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_InteractUse_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_InteractUse_C");
static_assert(sizeof(UGA_DefaultPlayer_InteractUse_C) == 0x000A38, "Wrong size on UGA_DefaultPlayer_InteractUse_C");
static_assert(offsetof(UGA_DefaultPlayer_InteractUse_C, UberGraphFrame) == 0x000A30, "Member 'UGA_DefaultPlayer_InteractUse_C::UberGraphFrame' has a wrong offset!");

}
