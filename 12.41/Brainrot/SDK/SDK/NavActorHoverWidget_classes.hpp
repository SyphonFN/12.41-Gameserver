#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavActorHoverWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NavActorHoverWidget.NavActorHoverWidget_C
// 0x0008 (0x0238 - 0x0230)
class UNavActorHoverWidget_C final : public UUserWidget
{
public:
	class UImage*                                 Image_19;                                          // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavActorHoverWidget_C">();
	}
	static class UNavActorHoverWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavActorHoverWidget_C>();
	}
};
static_assert(alignof(UNavActorHoverWidget_C) == 0x000008, "Wrong alignment on UNavActorHoverWidget_C");
static_assert(sizeof(UNavActorHoverWidget_C) == 0x000238, "Wrong size on UNavActorHoverWidget_C");
static_assert(offsetof(UNavActorHoverWidget_C, Image_19) == 0x000230, "Member 'UNavActorHoverWidget_C::Image_19' has a wrong offset!");

}

