#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RMT_Offer_EntryRow

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RMT_Offer_EntryRow.RMT_Offer_EntryRow_C
// 0x0040 (0x0270 - 0x0230)
class URMT_Offer_EntryRow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                   CommonRichTextBlock_96;                            // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_27;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Linear_color;                                      // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0258(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_RMT_Offer_EntryRow(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RMT_Offer_EntryRow_C">();
	}
	static class URMT_Offer_EntryRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URMT_Offer_EntryRow_C>();
	}
};
static_assert(alignof(URMT_Offer_EntryRow_C) == 0x000008, "Wrong alignment on URMT_Offer_EntryRow_C");
static_assert(sizeof(URMT_Offer_EntryRow_C) == 0x000270, "Wrong size on URMT_Offer_EntryRow_C");
static_assert(offsetof(URMT_Offer_EntryRow_C, UberGraphFrame) == 0x000230, "Member 'URMT_Offer_EntryRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URMT_Offer_EntryRow_C, CommonRichTextBlock_96) == 0x000238, "Member 'URMT_Offer_EntryRow_C::CommonRichTextBlock_96' has a wrong offset!");
static_assert(offsetof(URMT_Offer_EntryRow_C, Image_27) == 0x000240, "Member 'URMT_Offer_EntryRow_C::Image_27' has a wrong offset!");
static_assert(offsetof(URMT_Offer_EntryRow_C, Linear_color) == 0x000248, "Member 'URMT_Offer_EntryRow_C::Linear_color' has a wrong offset!");
static_assert(offsetof(URMT_Offer_EntryRow_C, Text) == 0x000258, "Member 'URMT_Offer_EntryRow_C::Text' has a wrong offset!");

}
