#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vault_Door

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Vault_Door.Vault_Door_C.ExecuteUbergraph_Vault_Door
// 0x0188 (0x0188 - 0x0000)
struct Vault_Door_C_ExecuteUbergraph_Vault_Door final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56D9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56DA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0054(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_VLerp_ReturnValue_1;                      // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue_1;                      // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult; // 0x00F8(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Vault_Door_C_ExecuteUbergraph_Vault_Door) == 0x000008, "Wrong alignment on Vault_Door_C_ExecuteUbergraph_Vault_Door");
static_assert(sizeof(Vault_Door_C_ExecuteUbergraph_Vault_Door) == 0x000188, "Wrong size on Vault_Door_C_ExecuteUbergraph_Vault_Door");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, EntryPoint) == 0x000000, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::EntryPoint' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_VLerp_ReturnValue) == 0x000008, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, Temp_bool_IsClosed_Variable) == 0x000014, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_BreakRotator_Roll) == 0x000018, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_BreakRotator_Pitch) == 0x00001C, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_BreakRotator_Yaw) == 0x000020, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000024, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000030, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_MakeRotator_ReturnValue) == 0x000034, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000040, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_RLerp_ReturnValue) == 0x000048, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000054, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_VLerp_ReturnValue_1) == 0x0000E0, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_RLerp_ReturnValue_1) == 0x0000EC, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_RLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ExecuteUbergraph_Vault_Door, CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult) == 0x0000F8, "Member 'Vault_Door_C_ExecuteUbergraph_Vault_Door::CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult' has a wrong offset!");

// Function Vault_Door.Vault_Door_C.OnRep_HasBeenOpening
// 0x0008 (0x0008 - 0x0000)
struct Vault_Door_C_OnRep_HasBeenOpening final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Vault_Door_C_OnRep_HasBeenOpening) == 0x000008, "Wrong alignment on Vault_Door_C_OnRep_HasBeenOpening");
static_assert(sizeof(Vault_Door_C_OnRep_HasBeenOpening) == 0x000008, "Wrong size on Vault_Door_C_OnRep_HasBeenOpening");
static_assert(offsetof(Vault_Door_C_OnRep_HasBeenOpening, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'Vault_Door_C_OnRep_HasBeenOpening::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function Vault_Door.Vault_Door_C.ShouldDie
// 0x0020 (0x0020 - 0x0000)
struct Vault_Door_C_ShouldDie final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56DB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            EventInstigator;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Vault_Door_C_ShouldDie) == 0x000008, "Wrong alignment on Vault_Door_C_ShouldDie");
static_assert(sizeof(Vault_Door_C_ShouldDie) == 0x000020, "Wrong size on Vault_Door_C_ShouldDie");
static_assert(offsetof(Vault_Door_C_ShouldDie, Damage) == 0x000000, "Member 'Vault_Door_C_ShouldDie::Damage' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ShouldDie, EventInstigator) == 0x000008, "Member 'Vault_Door_C_ShouldDie::EventInstigator' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ShouldDie, DamageCauser) == 0x000010, "Member 'Vault_Door_C_ShouldDie::DamageCauser' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_ShouldDie, ReturnValue) == 0x000018, "Member 'Vault_Door_C_ShouldDie::ReturnValue' has a wrong offset!");

// Function Vault_Door.Vault_Door_C.BlueprintCanInteract
// 0x0010 (0x0010 - 0x0000)
struct Vault_Door_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInteractionBeingAttempted                    InteractionBeingAttempted;                         // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETInteractionType                             InteractionType;                                   // 0x0009(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x000A(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Vault_Door_C_BlueprintCanInteract) == 0x000008, "Wrong alignment on Vault_Door_C_BlueprintCanInteract");
static_assert(sizeof(Vault_Door_C_BlueprintCanInteract) == 0x000010, "Wrong size on Vault_Door_C_BlueprintCanInteract");
static_assert(offsetof(Vault_Door_C_BlueprintCanInteract, InteractingPawn) == 0x000000, "Member 'Vault_Door_C_BlueprintCanInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_BlueprintCanInteract, InteractionBeingAttempted) == 0x000008, "Member 'Vault_Door_C_BlueprintCanInteract::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_BlueprintCanInteract, InteractionType) == 0x000009, "Member 'Vault_Door_C_BlueprintCanInteract::InteractionType' has a wrong offset!");
static_assert(offsetof(Vault_Door_C_BlueprintCanInteract, ReturnValue) == 0x00000A, "Member 'Vault_Door_C_BlueprintCanInteract::ReturnValue' has a wrong offset!");

}
