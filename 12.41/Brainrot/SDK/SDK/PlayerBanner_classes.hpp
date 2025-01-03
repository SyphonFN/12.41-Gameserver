#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerBanner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerBanner.PlayerBanner_C
// 0x0080 (0x0310 - 0x0290)
class UPlayerBanner_C final : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BannerImage;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                       LoadGuard;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SurroundImage;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                       SurroundLoadGuard;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bUseLargeTexture;                                  // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5858[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       OwnerNetId;                                        // 0x02C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   CurrentBannerColorId;                              // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldUseIconRepresentation;                      // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5859[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CurrentBannerIconId;                               // 0x02F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SurroundEnabled;                                   // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_585A[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceConstant*>      BannerSurroundMats;                                // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PlayerBanner(int32 EntryPoint);
	void Destruct();
	void Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success);
	void SetBannerIconId(class FName InBannerIconId);
	void SetBannerColorId(class FName InBannerColorId);
	void SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId);
	void GetBannerMID(class UMaterialInstanceDynamic** BannerMID);
	void OnBannerIconLoaded(class UObject* LoadedObject);
	void ClearBannerState();
	void EnableSurround();
	void OnSurroundIconLoaded(class UObject* LoadedObject);
	void RefreshSurround(int32 Level);
	void ToggleBannerMask(bool Enable);
	void SetBannerIconAndColor(class FName IconId, class FName ColorId);
	void SetBannerIconAndColorFromProfile();
	void SetupSurround();
	void UnbindDelegates();
	void ShouldShowAthenaBanner(bool* ShowAthenaBanner);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerBanner_C">();
	}
	static class UPlayerBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerBanner_C>();
	}
};
static_assert(alignof(UPlayerBanner_C) == 0x000008, "Wrong alignment on UPlayerBanner_C");
static_assert(sizeof(UPlayerBanner_C) == 0x000310, "Wrong size on UPlayerBanner_C");
static_assert(offsetof(UPlayerBanner_C, UberGraphFrame) == 0x000290, "Member 'UPlayerBanner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, BannerImage) == 0x000298, "Member 'UPlayerBanner_C::BannerImage' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, LoadGuard) == 0x0002A0, "Member 'UPlayerBanner_C::LoadGuard' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, SurroundImage) == 0x0002A8, "Member 'UPlayerBanner_C::SurroundImage' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, SurroundLoadGuard) == 0x0002B0, "Member 'UPlayerBanner_C::SurroundLoadGuard' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, bUseLargeTexture) == 0x0002B8, "Member 'UPlayerBanner_C::bUseLargeTexture' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, OwnerNetId) == 0x0002C0, "Member 'UPlayerBanner_C::OwnerNetId' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, CurrentBannerColorId) == 0x0002E8, "Member 'UPlayerBanner_C::CurrentBannerColorId' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, bShouldUseIconRepresentation) == 0x0002F0, "Member 'UPlayerBanner_C::bShouldUseIconRepresentation' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, CurrentBannerIconId) == 0x0002F4, "Member 'UPlayerBanner_C::CurrentBannerIconId' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, SurroundEnabled) == 0x0002FC, "Member 'UPlayerBanner_C::SurroundEnabled' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, BannerSurroundMats) == 0x000300, "Member 'UPlayerBanner_C::BannerSurroundMats' has a wrong offset!");

}

