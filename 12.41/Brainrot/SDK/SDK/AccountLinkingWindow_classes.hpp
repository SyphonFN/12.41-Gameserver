#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AccountLinkingWindow

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AccountLinkingWindow.AccountLinkingWindow_C
// 0x0000 (0x0510 - 0x0510)
class UAccountLinkingWindow_C final : public UFortAccountLinkingWindow
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AccountLinkingWindow_C">();
	}
	static class UAccountLinkingWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAccountLinkingWindow_C>();
	}
};
static_assert(alignof(UAccountLinkingWindow_C) == 0x000008, "Wrong alignment on UAccountLinkingWindow_C");
static_assert(sizeof(UAccountLinkingWindow_C) == 0x000510, "Wrong size on UAccountLinkingWindow_C");

}
