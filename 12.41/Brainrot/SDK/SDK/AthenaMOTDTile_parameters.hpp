#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMOTDTile

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaMOTDTile.AthenaMOTDTile_C.OnHoveredChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct AthenaMOTDTile_C_OnHoveredChanged__DelegateSignature final
{
public:
	bool                                          NewIsHovered;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaMOTDTile_C_OnHoveredChanged__DelegateSignature) == 0x000001, "Wrong alignment on AthenaMOTDTile_C_OnHoveredChanged__DelegateSignature");
static_assert(sizeof(AthenaMOTDTile_C_OnHoveredChanged__DelegateSignature) == 0x000001, "Wrong size on AthenaMOTDTile_C_OnHoveredChanged__DelegateSignature");
static_assert(offsetof(AthenaMOTDTile_C_OnHoveredChanged__DelegateSignature, NewIsHovered) == 0x000000, "Member 'AthenaMOTDTile_C_OnHoveredChanged__DelegateSignature::NewIsHovered' has a wrong offset!");

// Function AthenaMOTDTile.AthenaMOTDTile_C.ExecuteUbergraph_AthenaMOTDTile
// 0x0138 (0x0138 - 0x0000)
struct AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7091[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B0(0x0070)(ConstParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile) == 0x000008, "Wrong alignment on AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile");
static_assert(sizeof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile) == 0x000138, "Wrong size on AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, EntryPoint) == 0x000000, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, Temp_bool_Variable) == 0x000004, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, Temp_byte_Variable) == 0x000005, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, Temp_byte_Variable_1) == 0x000006, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Event_MyGeometry) == 0x000008, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Event_MouseEvent) == 0x0000B0, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000120, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, CallFunc_PlayAnimationForward_ReturnValue) == 0x000128, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Event_IsDesignTime) == 0x000130, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Select_Default) == 0x000131, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Select_Default' has a wrong offset!");

// Function AthenaMOTDTile.AthenaMOTDTile_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaMOTDTile_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaMOTDTile_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaMOTDTile_C_PreConstruct");
static_assert(sizeof(AthenaMOTDTile_C_PreConstruct) == 0x000001, "Wrong size on AthenaMOTDTile_C_PreConstruct");
static_assert(offsetof(AthenaMOTDTile_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaMOTDTile_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AthenaMOTDTile.AthenaMOTDTile_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct AthenaMOTDTile_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AthenaMOTDTile_C_OnMouseLeave) == 0x000008, "Wrong alignment on AthenaMOTDTile_C_OnMouseLeave");
static_assert(sizeof(AthenaMOTDTile_C_OnMouseLeave) == 0x000070, "Wrong size on AthenaMOTDTile_C_OnMouseLeave");
static_assert(offsetof(AthenaMOTDTile_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'AthenaMOTDTile_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function AthenaMOTDTile.AthenaMOTDTile_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct AthenaMOTDTile_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AthenaMOTDTile_C_OnMouseEnter) == 0x000008, "Wrong alignment on AthenaMOTDTile_C_OnMouseEnter");
static_assert(sizeof(AthenaMOTDTile_C_OnMouseEnter) == 0x0000A8, "Wrong size on AthenaMOTDTile_C_OnMouseEnter");
static_assert(offsetof(AthenaMOTDTile_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'AthenaMOTDTile_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'AthenaMOTDTile_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function AthenaMOTDTile.AthenaMOTDTile_C.ShowImageOnly
// 0x0004 (0x0004 - 0x0000)
struct AthenaMOTDTile_C_ShowImageOnly final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaMOTDTile_C_ShowImageOnly) == 0x000001, "Wrong alignment on AthenaMOTDTile_C_ShowImageOnly");
static_assert(sizeof(AthenaMOTDTile_C_ShowImageOnly) == 0x000004, "Wrong size on AthenaMOTDTile_C_ShowImageOnly");
static_assert(offsetof(AthenaMOTDTile_C_ShowImageOnly, Temp_bool_Variable) == 0x000000, "Member 'AthenaMOTDTile_C_ShowImageOnly::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ShowImageOnly, Temp_byte_Variable) == 0x000001, "Member 'AthenaMOTDTile_C_ShowImageOnly::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ShowImageOnly, Temp_byte_Variable_1) == 0x000002, "Member 'AthenaMOTDTile_C_ShowImageOnly::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ShowImageOnly, K2Node_Select_Default) == 0x000003, "Member 'AthenaMOTDTile_C_ShowImageOnly::K2Node_Select_Default' has a wrong offset!");

// Function AthenaMOTDTile.AthenaMOTDTile_C.UpdateDisplay
// 0x0004 (0x0004 - 0x0000)
struct AthenaMOTDTile_C_UpdateDisplay final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaMOTDTile_C_UpdateDisplay) == 0x000001, "Wrong alignment on AthenaMOTDTile_C_UpdateDisplay");
static_assert(sizeof(AthenaMOTDTile_C_UpdateDisplay) == 0x000004, "Wrong size on AthenaMOTDTile_C_UpdateDisplay");
static_assert(offsetof(AthenaMOTDTile_C_UpdateDisplay, Temp_bool_Variable) == 0x000000, "Member 'AthenaMOTDTile_C_UpdateDisplay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_UpdateDisplay, Temp_byte_Variable) == 0x000001, "Member 'AthenaMOTDTile_C_UpdateDisplay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_UpdateDisplay, Temp_byte_Variable_1) == 0x000002, "Member 'AthenaMOTDTile_C_UpdateDisplay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_UpdateDisplay, K2Node_Select_Default) == 0x000003, "Member 'AthenaMOTDTile_C_UpdateDisplay::K2Node_Select_Default' has a wrong offset!");

}
