#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpyBase_FishTank

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SpyBase_FishTank.BP_SpyBase_FishTank_C.ExecuteUbergraph_BP_SpyBase_FishTank
// 0x0020 (0x0020 - 0x0000)
struct BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5556[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasCompletedQuest_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasCompletedQuest_ReturnValue_1;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasCompletedQuest_ReturnValue_2;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank) == 0x000008, "Wrong alignment on BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank");
static_assert(sizeof(BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank) == 0x000020, "Wrong size on BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank");
static_assert(offsetof(BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank, EntryPoint) == 0x000000, "Member 'BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000008, "Member 'BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank, CallFunc_GetQuestManager_ReturnValue) == 0x000010, "Member 'BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank, CallFunc_HasCompletedQuest_ReturnValue) == 0x000018, "Member 'BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank::CallFunc_HasCompletedQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank, CallFunc_HasCompletedQuest_ReturnValue_1) == 0x000019, "Member 'BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank::CallFunc_HasCompletedQuest_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank, CallFunc_HasCompletedQuest_ReturnValue_2) == 0x00001A, "Member 'BP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank::CallFunc_HasCompletedQuest_ReturnValue_2' has a wrong offset!");

}
