#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialQuestProgress

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpatialQuestProgress.SpatialQuestProgress_C
// 0x0018 (0x0290 - 0x0278)
class USpatialQuestProgress_C final : public UAthenaQuestProgression
{
public:
	class UBorder*                                Border_Challenge;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   CommonRichTextBlock_54;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_107;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpatialQuestProgress_C">();
	}
	static class USpatialQuestProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatialQuestProgress_C>();
	}
};
static_assert(alignof(USpatialQuestProgress_C) == 0x000008, "Wrong alignment on USpatialQuestProgress_C");
static_assert(sizeof(USpatialQuestProgress_C) == 0x000290, "Wrong size on USpatialQuestProgress_C");
static_assert(offsetof(USpatialQuestProgress_C, Border_Challenge) == 0x000278, "Member 'USpatialQuestProgress_C::Border_Challenge' has a wrong offset!");
static_assert(offsetof(USpatialQuestProgress_C, CommonRichTextBlock_54) == 0x000280, "Member 'USpatialQuestProgress_C::CommonRichTextBlock_54' has a wrong offset!");
static_assert(offsetof(USpatialQuestProgress_C, Image_107) == 0x000288, "Member 'USpatialQuestProgress_C::Image_107' has a wrong offset!");

}
