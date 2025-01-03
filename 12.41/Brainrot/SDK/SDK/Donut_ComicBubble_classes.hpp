#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Donut_ComicBubble

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Donut_ComicBubble.Donut_ComicBubble_C
// 0x0058 (0x0288 - 0x0230)
class UDonut_ComicBubble_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Close;                                             // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Open;                                              // 0x0240(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_ComicBubble;                                // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_Dialogue;                                 // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              TailRendTrans;                                     // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DialogueTime;                                      // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC3[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DialogueText;                                      // 0x0268(0x0018)(Edit, BlueprintVisible)
	bool                                          bUseAlternateImage;                                // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUseDownArrow;                                     // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bWhiteBubble;                                      // 0x0282(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DownArrowSelection;                                // 0x0283(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Donut_ComicBubble(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void StartDialogueSequence();
	void OnDialogueFinished();
	void DialogueTimeOut();
	void Construct();
	void IntroFinished();
	void SetNewDialogue(const class FText& NewText, float DisplayTime);
	void StartExistingDialogue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Donut_ComicBubble_C">();
	}
	static class UDonut_ComicBubble_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDonut_ComicBubble_C>();
	}
};
static_assert(alignof(UDonut_ComicBubble_C) == 0x000008, "Wrong alignment on UDonut_ComicBubble_C");
static_assert(sizeof(UDonut_ComicBubble_C) == 0x000288, "Wrong size on UDonut_ComicBubble_C");
static_assert(offsetof(UDonut_ComicBubble_C, UberGraphFrame) == 0x000230, "Member 'UDonut_ComicBubble_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, Close) == 0x000238, "Member 'UDonut_ComicBubble_C::Close' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, Open) == 0x000240, "Member 'UDonut_ComicBubble_C::Open' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, Border_ComicBubble) == 0x000248, "Member 'UDonut_ComicBubble_C::Border_ComicBubble' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, RichText_Dialogue) == 0x000250, "Member 'UDonut_ComicBubble_C::RichText_Dialogue' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, TailRendTrans) == 0x000258, "Member 'UDonut_ComicBubble_C::TailRendTrans' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, DialogueTime) == 0x000260, "Member 'UDonut_ComicBubble_C::DialogueTime' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, DialogueText) == 0x000268, "Member 'UDonut_ComicBubble_C::DialogueText' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, bUseAlternateImage) == 0x000280, "Member 'UDonut_ComicBubble_C::bUseAlternateImage' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, bUseDownArrow) == 0x000281, "Member 'UDonut_ComicBubble_C::bUseDownArrow' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, bWhiteBubble) == 0x000282, "Member 'UDonut_ComicBubble_C::bWhiteBubble' has a wrong offset!");
static_assert(offsetof(UDonut_ComicBubble_C, DownArrowSelection) == 0x000283, "Member 'UDonut_ComicBubble_C::DownArrowSelection' has a wrong offset!");

}

