#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMicStack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TeamMicStack.TeamMicStack_C
// 0x0028 (0x02C0 - 0x0298)
class UTeamMicStack_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           _Vertical_Box__Team_Members;                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderFrame;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCinematicMinusTeamMics_C*>      TeamMembers;                                       // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_TeamMicStack(int32 EntryPoint);
	void HandlePartyLeft();
	void Construct();
	void HandleTeamMemberRemoved(int32 Member_Index);
	void HandleTeamMemberChanged(const struct FFortTeamMemberInfo& Member_Info);
	void AppendTeamMember(struct FFortTeamMemberInfo& TeamMemberInfo);
	void ClearContents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMicStack_C">();
	}
	static class UTeamMicStack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMicStack_C>();
	}
};
static_assert(alignof(UTeamMicStack_C) == 0x000008, "Wrong alignment on UTeamMicStack_C");
static_assert(sizeof(UTeamMicStack_C) == 0x0002C0, "Wrong size on UTeamMicStack_C");
static_assert(offsetof(UTeamMicStack_C, UberGraphFrame) == 0x000298, "Member 'UTeamMicStack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMicStack_C, _Vertical_Box__Team_Members) == 0x0002A0, "Member 'UTeamMicStack_C::_Vertical_Box__Team_Members' has a wrong offset!");
static_assert(offsetof(UTeamMicStack_C, BorderFrame) == 0x0002A8, "Member 'UTeamMicStack_C::BorderFrame' has a wrong offset!");
static_assert(offsetof(UTeamMicStack_C, TeamMembers) == 0x0002B0, "Member 'UTeamMicStack_C::TeamMembers' has a wrong offset!");

}

