#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialFactionPerk_unlocked

#include "Basic.hpp"


namespace SDK::Params
{

// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.ExecuteUbergraph_SpatialFactionPerk_unlocked
// 0x00A8 (0x00A8 - 0x0000)
struct SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57B5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFactionUnlockedPerkData*               K2Node_Event_InPerk;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x0018(0x0028)(HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57B6[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked) == 0x000008, "Wrong alignment on SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked");
static_assert(sizeof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked) == 0x0000A8, "Wrong size on SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, EntryPoint) == 0x000000, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, K2Node_Event_InPerk) == 0x000008, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::K2Node_Event_InPerk' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000010, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, CallFunc_GetSmallPreviewImage_ReturnValue) == 0x000018, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::CallFunc_GetSmallPreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000040, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, Temp_object_Variable) == 0x000050, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000058, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, K2Node_DynamicCast_AsTexture_2D) == 0x000060, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, K2Node_CustomEvent_Loaded) == 0x000070, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000088, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000090, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000098, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x0000A0, "Member 'SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");

// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BPSetup
// 0x0008 (0x0008 - 0x0000)
struct SpatialFactionPerk_unlocked_C_BPSetup final
{
public:
	class UFactionUnlockedPerkData*               InPerk;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpatialFactionPerk_unlocked_C_BPSetup) == 0x000008, "Wrong alignment on SpatialFactionPerk_unlocked_C_BPSetup");
static_assert(sizeof(SpatialFactionPerk_unlocked_C_BPSetup) == 0x000008, "Wrong size on SpatialFactionPerk_unlocked_C_BPSetup");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_BPSetup, InPerk) == 0x000000, "Member 'SpatialFactionPerk_unlocked_C_BPSetup::InPerk' has a wrong offset!");

// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.OnLoaded_625B37C643E292B11217C98384656193
// 0x0008 (0x0008 - 0x0000)
struct SpatialFactionPerk_unlocked_C_OnLoaded_625B37C643E292B11217C98384656193 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpatialFactionPerk_unlocked_C_OnLoaded_625B37C643E292B11217C98384656193) == 0x000008, "Wrong alignment on SpatialFactionPerk_unlocked_C_OnLoaded_625B37C643E292B11217C98384656193");
static_assert(sizeof(SpatialFactionPerk_unlocked_C_OnLoaded_625B37C643E292B11217C98384656193) == 0x000008, "Wrong size on SpatialFactionPerk_unlocked_C_OnLoaded_625B37C643E292B11217C98384656193");
static_assert(offsetof(SpatialFactionPerk_unlocked_C_OnLoaded_625B37C643E292B11217C98384656193, Loaded) == 0x000000, "Member 'SpatialFactionPerk_unlocked_C_OnLoaded_625B37C643E292B11217C98384656193::Loaded' has a wrong offset!");

}

