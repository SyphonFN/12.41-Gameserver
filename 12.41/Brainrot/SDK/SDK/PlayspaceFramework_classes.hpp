#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayspaceFramework

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "PlayspaceFramework_structs.hpp"
#include "ModularGameplay_classes.hpp"


namespace SDK
{

// Class PlayspaceFramework.GameplayVolume
// 0x0070 (0x0288 - 0x0218)
class AGameplayVolume : public AActor
{
public:
	TSoftClassPtr<class UClass>                   PlayspaceClassTemplate;                            // 0x0218(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class APlayspace>                 PlayspaceClass;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                  VolumeTags;                                        // 0x0248(0x0020)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4237[0x20];                                    // 0x0268(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayVolume">();
	}
	static class AGameplayVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameplayVolume>();
	}
};
static_assert(alignof(AGameplayVolume) == 0x000008, "Wrong alignment on AGameplayVolume");
static_assert(sizeof(AGameplayVolume) == 0x000288, "Wrong size on AGameplayVolume");
static_assert(offsetof(AGameplayVolume, PlayspaceClassTemplate) == 0x000218, "Member 'AGameplayVolume::PlayspaceClassTemplate' has a wrong offset!");
static_assert(offsetof(AGameplayVolume, PlayspaceClass) == 0x000240, "Member 'AGameplayVolume::PlayspaceClass' has a wrong offset!");
static_assert(offsetof(AGameplayVolume, VolumeTags) == 0x000248, "Member 'AGameplayVolume::VolumeTags' has a wrong offset!");

// Class PlayspaceFramework.Playspace
// 0x01A0 (0x03B8 - 0x0218)
class APlayspace : public AInfo
{
public:
	struct FGameplayTagContainer                  GameplayTags;                                      // 0x0218(0x0020)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                           RequestedPlayspaceParentTag;                       // 0x0238(0x0008)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class APlayspaceLogic>            PlayspaceLogicClass;                               // 0x0240(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class APlayspace>>         ChildPlayspaceClasses;                             // 0x0248(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FPlayspaceUserList                     PlayspaceUsers;                                    // 0x0258(0x0128)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	class APlayspaceLogic*                        PlayspaceLogic;                                    // 0x0380(0x0008)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class APlayspace*>                     ChildPlayspaces;                                   // 0x0388(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FUniqueNetIdRepl>               PendingUsers;                                      // 0x0398(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UPlayspaceManagerComponent*             PlayspaceManagerCached;                            // 0x03A8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4238[0x8];                                     // 0x03B0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_PlayspaceLogic();
	void OnRep_PlayspaceUsers();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Playspace">();
	}
	static class APlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayspace>();
	}
};
static_assert(alignof(APlayspace) == 0x000008, "Wrong alignment on APlayspace");
static_assert(sizeof(APlayspace) == 0x0003B8, "Wrong size on APlayspace");
static_assert(offsetof(APlayspace, GameplayTags) == 0x000218, "Member 'APlayspace::GameplayTags' has a wrong offset!");
static_assert(offsetof(APlayspace, RequestedPlayspaceParentTag) == 0x000238, "Member 'APlayspace::RequestedPlayspaceParentTag' has a wrong offset!");
static_assert(offsetof(APlayspace, PlayspaceLogicClass) == 0x000240, "Member 'APlayspace::PlayspaceLogicClass' has a wrong offset!");
static_assert(offsetof(APlayspace, ChildPlayspaceClasses) == 0x000248, "Member 'APlayspace::ChildPlayspaceClasses' has a wrong offset!");
static_assert(offsetof(APlayspace, PlayspaceUsers) == 0x000258, "Member 'APlayspace::PlayspaceUsers' has a wrong offset!");
static_assert(offsetof(APlayspace, PlayspaceLogic) == 0x000380, "Member 'APlayspace::PlayspaceLogic' has a wrong offset!");
static_assert(offsetof(APlayspace, ChildPlayspaces) == 0x000388, "Member 'APlayspace::ChildPlayspaces' has a wrong offset!");
static_assert(offsetof(APlayspace, PendingUsers) == 0x000398, "Member 'APlayspace::PendingUsers' has a wrong offset!");
static_assert(offsetof(APlayspace, PlayspaceManagerCached) == 0x0003A8, "Member 'APlayspace::PlayspaceManagerCached' has a wrong offset!");

// Class PlayspaceFramework.PlayspaceGameState
// 0x0018 (0x02A0 - 0x0288)
class APlayspaceGameState : public AGameState
{
public:
	class UPlayspaceManagerComponent*             PlayspaceManagerComponentCached;                   // 0x0288(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class APlayspace>                 RootPlayspaceClass;                                // 0x0290(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bUsePlayspaceSystem;                               // 0x0298(0x0001)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4239[0x7];                                     // 0x0299(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceGameState">();
	}
	static class APlayspaceGameState* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayspaceGameState>();
	}
};
static_assert(alignof(APlayspaceGameState) == 0x000008, "Wrong alignment on APlayspaceGameState");
static_assert(sizeof(APlayspaceGameState) == 0x0002A0, "Wrong size on APlayspaceGameState");
static_assert(offsetof(APlayspaceGameState, PlayspaceManagerComponentCached) == 0x000288, "Member 'APlayspaceGameState::PlayspaceManagerComponentCached' has a wrong offset!");
static_assert(offsetof(APlayspaceGameState, RootPlayspaceClass) == 0x000290, "Member 'APlayspaceGameState::RootPlayspaceClass' has a wrong offset!");
static_assert(offsetof(APlayspaceGameState, bUsePlayspaceSystem) == 0x000298, "Member 'APlayspaceGameState::bUsePlayspaceSystem' has a wrong offset!");

// Class PlayspaceFramework.PlayspaceLogic
// 0x0008 (0x0220 - 0x0218)
class APlayspaceLogic : public AActor
{
public:
	class APlayspace*                             Playspace;                                         // 0x0218(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceLogic">();
	}
	static class APlayspaceLogic* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayspaceLogic>();
	}
};
static_assert(alignof(APlayspaceLogic) == 0x000008, "Wrong alignment on APlayspaceLogic");
static_assert(sizeof(APlayspaceLogic) == 0x000220, "Wrong size on APlayspaceLogic");
static_assert(offsetof(APlayspaceLogic, Playspace) == 0x000218, "Member 'APlayspaceLogic::Playspace' has a wrong offset!");

// Class PlayspaceFramework.PlayspaceManagerComponent
// 0x0008 (0x00B8 - 0x00B0)
class UPlayspaceManagerComponent final : public UGameStateComponent
{
public:
	class APlayspace*                             RootPlayspace;                                     // 0x00B0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceManagerComponent">();
	}
	static class UPlayspaceManagerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceManagerComponent>();
	}
};
static_assert(alignof(UPlayspaceManagerComponent) == 0x000008, "Wrong alignment on UPlayspaceManagerComponent");
static_assert(sizeof(UPlayspaceManagerComponent) == 0x0000B8, "Wrong size on UPlayspaceManagerComponent");
static_assert(offsetof(UPlayspaceManagerComponent, RootPlayspace) == 0x0000B0, "Member 'UPlayspaceManagerComponent::RootPlayspace' has a wrong offset!");

}
