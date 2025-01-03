#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadMemberTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadMemberTile.SquadMemberTile_C
// 0x0078 (0x0C50 - 0x0BD8)
class USquadMemberTile_C final : public UAthenaSquadMemberDetailedEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BD8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnIntro;                                           // 0x0BE0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnLocalUserDefined;                                // 0x0BE8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnSelected;                                        // 0x0BF0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SetRibbonRotation;                                 // 0x0BF8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleEmpty;                                        // 0x0C00(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleNotReady;                                     // 0x0C08(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleReady;                                        // 0x0C10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleSitOut;                                       // 0x0C18(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHovered;                                         // 0x0C20(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                EntryBorder;                                       // 0x0C28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LoadingThrobberBacking;                            // 0x0C30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LocalUserIcon;                                     // 0x0C38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SquadOverlay;                                      // 0x0C40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SquadRibbon;                                       // 0x0C48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SquadMemberTile(int32 EntryPoint);
	void OnMemberIsInFrontendChanged(bool bIsInFrontend);
	void BP_OnTeamMemberEstablished(bool bHasValidMember);
	void BP_OnDeselected();
	void BP_OnSelected();
	void OnMemberGameReadinessChanged(EGameReadiness ReadyStatus);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnSquadAssigned();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7(class UObject* Loaded);
	void SetNotReadyVisuals();
	void SetReadyVisuals();
	void SetSitOutVisuals();
	void SetEmptyVisuals();
	void SetVisuals(EGameReadiness Member_Readiness, bool Is_In_Frontend);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadMemberTile_C">();
	}
	static class USquadMemberTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadMemberTile_C>();
	}
};
static_assert(alignof(USquadMemberTile_C) == 0x000008, "Wrong alignment on USquadMemberTile_C");
static_assert(sizeof(USquadMemberTile_C) == 0x000C50, "Wrong size on USquadMemberTile_C");
static_assert(offsetof(USquadMemberTile_C, UberGraphFrame) == 0x000BD8, "Member 'USquadMemberTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, OnIntro) == 0x000BE0, "Member 'USquadMemberTile_C::OnIntro' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, OnLocalUserDefined) == 0x000BE8, "Member 'USquadMemberTile_C::OnLocalUserDefined' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, OnSelected) == 0x000BF0, "Member 'USquadMemberTile_C::OnSelected' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, SetRibbonRotation) == 0x000BF8, "Member 'USquadMemberTile_C::SetRibbonRotation' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, StyleEmpty) == 0x000C00, "Member 'USquadMemberTile_C::StyleEmpty' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, StyleNotReady) == 0x000C08, "Member 'USquadMemberTile_C::StyleNotReady' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, StyleReady) == 0x000C10, "Member 'USquadMemberTile_C::StyleReady' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, StyleSitOut) == 0x000C18, "Member 'USquadMemberTile_C::StyleSitOut' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, OnHovered) == 0x000C20, "Member 'USquadMemberTile_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, EntryBorder) == 0x000C28, "Member 'USquadMemberTile_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, LoadingThrobberBacking) == 0x000C30, "Member 'USquadMemberTile_C::LoadingThrobberBacking' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, LocalUserIcon) == 0x000C38, "Member 'USquadMemberTile_C::LocalUserIcon' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, SquadOverlay) == 0x000C40, "Member 'USquadMemberTile_C::SquadOverlay' has a wrong offset!");
static_assert(offsetof(USquadMemberTile_C, SquadRibbon) == 0x000C48, "Member 'USquadMemberTile_C::SquadRibbon' has a wrong offset!");

}

