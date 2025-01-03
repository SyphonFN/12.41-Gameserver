#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemOnPawnPreview

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting
// 0x0018 (0x0018 - 0x0000)
struct ItemOnPawnPreview_C_SwitchErebusLighting final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58BE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USpotLightComponent*>            L_lights;                                          // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)
};
static_assert(alignof(ItemOnPawnPreview_C_SwitchErebusLighting) == 0x000008, "Wrong alignment on ItemOnPawnPreview_C_SwitchErebusLighting");
static_assert(sizeof(ItemOnPawnPreview_C_SwitchErebusLighting) == 0x000018, "Wrong size on ItemOnPawnPreview_C_SwitchErebusLighting");
static_assert(offsetof(ItemOnPawnPreview_C_SwitchErebusLighting, Visibility) == 0x000000, "Member 'ItemOnPawnPreview_C_SwitchErebusLighting::Visibility' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_SwitchErebusLighting, L_lights) == 0x000008, "Member 'ItemOnPawnPreview_C_SwitchErebusLighting::L_lights' has a wrong offset!");

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled
// 0x0002 (0x0002 - 0x0000)
struct ItemOnPawnPreview_C_SetFloorEnabled final
{
public:
	bool                                          Show_Floor;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemOnPawnPreview_C_SetFloorEnabled) == 0x000001, "Wrong alignment on ItemOnPawnPreview_C_SetFloorEnabled");
static_assert(sizeof(ItemOnPawnPreview_C_SetFloorEnabled) == 0x000002, "Wrong size on ItemOnPawnPreview_C_SetFloorEnabled");
static_assert(offsetof(ItemOnPawnPreview_C_SetFloorEnabled, Show_Floor) == 0x000000, "Member 'ItemOnPawnPreview_C_SetFloorEnabled::Show_Floor' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_SetFloorEnabled, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'ItemOnPawnPreview_C_SetFloorEnabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl
// 0x0018 (0x0018 - 0x0000)
struct ItemOnPawnPreview_C_LightControl final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsErebus_ReturnValue;                     // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58BF[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShadowQuality_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemOnPawnPreview_C_LightControl) == 0x000008, "Wrong alignment on ItemOnPawnPreview_C_LightControl");
static_assert(sizeof(ItemOnPawnPreview_C_LightControl) == 0x000018, "Wrong size on ItemOnPawnPreview_C_LightControl");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, Active) == 0x000000, "Member 'ItemOnPawnPreview_C_LightControl::Active' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_IsMobileGame_ReturnValue) == 0x000001, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_IsErebus_ReturnValue) == 0x000002, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_GetShadowQuality_ReturnValue) == 0x000010, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue) == 0x000015, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue_1) == 0x000016, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting
// 0x0001 (0x0001 - 0x0000)
struct ItemOnPawnPreview_C_SwitchPCLighting final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemOnPawnPreview_C_SwitchPCLighting) == 0x000001, "Wrong alignment on ItemOnPawnPreview_C_SwitchPCLighting");
static_assert(sizeof(ItemOnPawnPreview_C_SwitchPCLighting) == 0x000001, "Wrong size on ItemOnPawnPreview_C_SwitchPCLighting");
static_assert(offsetof(ItemOnPawnPreview_C_SwitchPCLighting, Visibility) == 0x000000, "Member 'ItemOnPawnPreview_C_SwitchPCLighting::Visibility' has a wrong offset!");

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting
// 0x0001 (0x0001 - 0x0000)
struct ItemOnPawnPreview_C_SwitchMobileLighting final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemOnPawnPreview_C_SwitchMobileLighting) == 0x000001, "Wrong alignment on ItemOnPawnPreview_C_SwitchMobileLighting");
static_assert(sizeof(ItemOnPawnPreview_C_SwitchMobileLighting) == 0x000001, "Wrong size on ItemOnPawnPreview_C_SwitchMobileLighting");
static_assert(offsetof(ItemOnPawnPreview_C_SwitchMobileLighting, NewParam) == 0x000000, "Member 'ItemOnPawnPreview_C_SwitchMobileLighting::NewParam' has a wrong offset!");

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial
// 0x0008 (0x0008 - 0x0000)
struct ItemOnPawnPreview_C_OnSetFloorMaterial final
{
public:
	class UMaterialInterface*                     InMaterialInstance;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemOnPawnPreview_C_OnSetFloorMaterial) == 0x000008, "Wrong alignment on ItemOnPawnPreview_C_OnSetFloorMaterial");
static_assert(sizeof(ItemOnPawnPreview_C_OnSetFloorMaterial) == 0x000008, "Wrong size on ItemOnPawnPreview_C_OnSetFloorMaterial");
static_assert(offsetof(ItemOnPawnPreview_C_OnSetFloorMaterial, InMaterialInstance) == 0x000000, "Member 'ItemOnPawnPreview_C_OnSetFloorMaterial::InMaterialInstance' has a wrong offset!");

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview
// 0x0058 (0x0058 - 0x0000)
struct ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58C0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShadowQuality_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58C1[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPawnLocation_ReturnValue;              // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C2[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Event_InMaterialInstance;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsErebus_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview) == 0x000008, "Wrong alignment on ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview");
static_assert(sizeof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview) == 0x000058, "Wrong size on ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, EntryPoint) == 0x000000, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GetShadowQuality_ReturnValue) == 0x000010, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_BooleanOR_ReturnValue) == 0x000015, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GetPawnLocation_ReturnValue) == 0x000018, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GetPawnLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000028, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000030, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_Event_InMaterialInstance) == 0x000038, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_Event_InMaterialInstance' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_IsErebus_ReturnValue) == 0x000050, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_IsErebus_ReturnValue' has a wrong offset!");

}

