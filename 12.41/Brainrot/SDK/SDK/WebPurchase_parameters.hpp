#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WebPurchase

#include "Basic.hpp"


namespace SDK::Params
{

// Function WebPurchase.WebPurchase_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct WebPurchase_C_HandleBack final
{
public:
	bool                                          bPassThrough;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WebPurchase_C_HandleBack) == 0x000008, "Wrong alignment on WebPurchase_C_HandleBack");
static_assert(sizeof(WebPurchase_C_HandleBack) == 0x000010, "Wrong size on WebPurchase_C_HandleBack");
static_assert(offsetof(WebPurchase_C_HandleBack, bPassThrough) == 0x000000, "Member 'WebPurchase_C_HandleBack::bPassThrough' has a wrong offset!");
static_assert(offsetof(WebPurchase_C_HandleBack, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'WebPurchase_C_HandleBack::CallFunc_GetContext_ReturnValue' has a wrong offset!");

// Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
// 0x0018 (0x0018 - 0x0000)
struct WebPurchase_C_ExecuteUbergraph_WebPurchase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasInputActionHandler_ReturnValue;        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WebPurchase_C_ExecuteUbergraph_WebPurchase) == 0x000004, "Wrong alignment on WebPurchase_C_ExecuteUbergraph_WebPurchase");
static_assert(sizeof(WebPurchase_C_ExecuteUbergraph_WebPurchase) == 0x000018, "Wrong size on WebPurchase_C_ExecuteUbergraph_WebPurchase");
static_assert(offsetof(WebPurchase_C_ExecuteUbergraph_WebPurchase, EntryPoint) == 0x000000, "Member 'WebPurchase_C_ExecuteUbergraph_WebPurchase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WebPurchase_C_ExecuteUbergraph_WebPurchase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WebPurchase_C_ExecuteUbergraph_WebPurchase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WebPurchase_C_ExecuteUbergraph_WebPurchase, CallFunc_HasInputActionHandler_ReturnValue) == 0x000014, "Member 'WebPurchase_C_ExecuteUbergraph_WebPurchase::CallFunc_HasInputActionHandler_ReturnValue' has a wrong offset!");

}
