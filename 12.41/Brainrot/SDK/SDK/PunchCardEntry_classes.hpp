#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PunchCardEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PunchCardEntry.PunchCardEntry_C
// 0x0060 (0x02E8 - 0x0288)
class UPunchCardEntry_C final : public UAthenaPunchCardEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SocketXP;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAccoladeImageWidget_C*                 AccoladeImageWidget;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         FortLazyImage_Socketed;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EmptySocket;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FillingSocket;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SocketOutline;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SocketOutline_2;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_Placed;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_FrontendXPLabel;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bAlreadyPunched;                                   // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F82[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAccoladeItemDefinition*            Temp_Accolade;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PunchCardEntry(int32 EntryPoint);
	void OnSetMedal(const class UFortAccoladeItemDefinition* PunchedMedal);
	void EventSocketed();
	void FinishLoadingMedalIcon();
	void SetAccoladeVisuals(class UFortAccoladeItemDefinition* ItemDef);
	void NewMedalComplete();
	void OnNewMedalPlaced(const class UFortAccoladeItemDefinition* PunchedMedal, bool bPlaySocketAnim);
	void Construct();
	void OnLoaded_D1FE60014F4F3FD64C242F91B2A30C9C(class UObject* Loaded);
	void OnLoaded_5FE293294CDD1131C46B229A3E23F648(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PunchCardEntry_C">();
	}
	static class UPunchCardEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPunchCardEntry_C>();
	}
};
static_assert(alignof(UPunchCardEntry_C) == 0x000008, "Wrong alignment on UPunchCardEntry_C");
static_assert(sizeof(UPunchCardEntry_C) == 0x0002E8, "Wrong size on UPunchCardEntry_C");
static_assert(offsetof(UPunchCardEntry_C, UberGraphFrame) == 0x000288, "Member 'UPunchCardEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, SocketXP) == 0x000290, "Member 'UPunchCardEntry_C::SocketXP' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, AccoladeImageWidget) == 0x000298, "Member 'UPunchCardEntry_C::AccoladeImageWidget' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, FortLazyImage_Socketed) == 0x0002A0, "Member 'UPunchCardEntry_C::FortLazyImage_Socketed' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, Image_EmptySocket) == 0x0002A8, "Member 'UPunchCardEntry_C::Image_EmptySocket' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, Image_FillingSocket) == 0x0002B0, "Member 'UPunchCardEntry_C::Image_FillingSocket' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, Image_SocketOutline) == 0x0002B8, "Member 'UPunchCardEntry_C::Image_SocketOutline' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, Image_SocketOutline_2) == 0x0002C0, "Member 'UPunchCardEntry_C::Image_SocketOutline_2' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, Switcher_Placed) == 0x0002C8, "Member 'UPunchCardEntry_C::Switcher_Placed' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, Text_FrontendXPLabel) == 0x0002D0, "Member 'UPunchCardEntry_C::Text_FrontendXPLabel' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, bAlreadyPunched) == 0x0002D8, "Member 'UPunchCardEntry_C::bAlreadyPunched' has a wrong offset!");
static_assert(offsetof(UPunchCardEntry_C, Temp_Accolade) == 0x0002E0, "Member 'UPunchCardEntry_C::Temp_Accolade' has a wrong offset!");

}

