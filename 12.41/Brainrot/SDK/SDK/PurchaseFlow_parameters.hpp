#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchaseFlow

#include "Basic.hpp"

#include "PurchaseFlow_structs.hpp"


namespace SDK::Params
{

// Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
// 0x0020 (0x0020 - 0x0000)
struct PurchaseFlowJSBridge_GetDefaultExternalBrowserID final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PurchaseFlowJSBridge_GetDefaultExternalBrowserID) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_GetDefaultExternalBrowserID");
static_assert(sizeof(PurchaseFlowJSBridge_GetDefaultExternalBrowserID) == 0x000020, "Wrong size on PurchaseFlowJSBridge_GetDefaultExternalBrowserID");
static_assert(offsetof(PurchaseFlowJSBridge_GetDefaultExternalBrowserID, URL) == 0x000000, "Member 'PurchaseFlowJSBridge_GetDefaultExternalBrowserID::URL' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_GetDefaultExternalBrowserID, ReturnValue) == 0x000010, "Member 'PurchaseFlowJSBridge_GetDefaultExternalBrowserID::ReturnValue' has a wrong offset!");

// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
// 0x0020 (0x0020 - 0x0000)
struct PurchaseFlowJSBridge_GetExternalBrowserName final
{
public:
	class FString                                 BrowserId;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PurchaseFlowJSBridge_GetExternalBrowserName) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_GetExternalBrowserName");
static_assert(sizeof(PurchaseFlowJSBridge_GetExternalBrowserName) == 0x000020, "Wrong size on PurchaseFlowJSBridge_GetExternalBrowserName");
static_assert(offsetof(PurchaseFlowJSBridge_GetExternalBrowserName, BrowserId) == 0x000000, "Member 'PurchaseFlowJSBridge_GetExternalBrowserName::BrowserId' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_GetExternalBrowserName, ReturnValue) == 0x000010, "Member 'PurchaseFlowJSBridge_GetExternalBrowserName::ReturnValue' has a wrong offset!");

// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
// 0x0020 (0x0020 - 0x0000)
struct PurchaseFlowJSBridge_GetExternalBrowserPath final
{
public:
	class FString                                 BrowserId;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PurchaseFlowJSBridge_GetExternalBrowserPath) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_GetExternalBrowserPath");
static_assert(sizeof(PurchaseFlowJSBridge_GetExternalBrowserPath) == 0x000020, "Wrong size on PurchaseFlowJSBridge_GetExternalBrowserPath");
static_assert(offsetof(PurchaseFlowJSBridge_GetExternalBrowserPath, BrowserId) == 0x000000, "Member 'PurchaseFlowJSBridge_GetExternalBrowserPath::BrowserId' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_GetExternalBrowserPath, ReturnValue) == 0x000010, "Member 'PurchaseFlowJSBridge_GetExternalBrowserPath::ReturnValue' has a wrong offset!");

// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
// 0x0018 (0x0018 - 0x0000)
struct PurchaseFlowJSBridge_LaunchExternalBrowserUrl final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4262[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PurchaseFlowJSBridge_LaunchExternalBrowserUrl) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_LaunchExternalBrowserUrl");
static_assert(sizeof(PurchaseFlowJSBridge_LaunchExternalBrowserUrl) == 0x000018, "Wrong size on PurchaseFlowJSBridge_LaunchExternalBrowserUrl");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchExternalBrowserUrl, URL) == 0x000000, "Member 'PurchaseFlowJSBridge_LaunchExternalBrowserUrl::URL' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchExternalBrowserUrl, ReturnValue) == 0x000010, "Member 'PurchaseFlowJSBridge_LaunchExternalBrowserUrl::ReturnValue' has a wrong offset!");

// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
// 0x0028 (0x0028 - 0x0000)
struct PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl final
{
public:
	class FString                                 AllowedBrowserID;                                  // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 URL;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4263[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl");
static_assert(sizeof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl) == 0x000028, "Wrong size on PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl, AllowedBrowserID) == 0x000000, "Member 'PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl::AllowedBrowserID' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl, URL) == 0x000010, "Member 'PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl::URL' has a wrong offset!");
static_assert(offsetof(PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl, ReturnValue) == 0x000020, "Member 'PurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl::ReturnValue' has a wrong offset!");

// Function PurchaseFlow.PurchaseFlowJSBridge.Receipt
// 0x0030 (0x0030 - 0x0000)
struct PurchaseFlowJSBridge_Receipt final
{
public:
	struct FPurchaseFlowReceiptParam              Param_Receipt;                                     // 0x0000(0x0030)(Parm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PurchaseFlowJSBridge_Receipt) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_Receipt");
static_assert(sizeof(PurchaseFlowJSBridge_Receipt) == 0x000030, "Wrong size on PurchaseFlowJSBridge_Receipt");
static_assert(offsetof(PurchaseFlowJSBridge_Receipt, Param_Receipt) == 0x000000, "Member 'PurchaseFlowJSBridge_Receipt::Param_Receipt' has a wrong offset!");

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// 0x0010 (0x0010 - 0x0000)
struct PurchaseFlowJSBridge_RequestClose final
{
public:
	class FString                                 CloseInfo;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PurchaseFlowJSBridge_RequestClose) == 0x000008, "Wrong alignment on PurchaseFlowJSBridge_RequestClose");
static_assert(sizeof(PurchaseFlowJSBridge_RequestClose) == 0x000010, "Wrong size on PurchaseFlowJSBridge_RequestClose");
static_assert(offsetof(PurchaseFlowJSBridge_RequestClose, CloseInfo) == 0x000000, "Member 'PurchaseFlowJSBridge_RequestClose::CloseInfo' has a wrong offset!");

}
