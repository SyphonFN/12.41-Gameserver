#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmartObjectsModule

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "SmartObjectsModule_structs.hpp"


namespace SDK
{

// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USmartObjectBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool K2_AddLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags);
	static bool K2_RemoveLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags);
	static bool K2_SetSmartObjectEnabled(class AActor* SmartObject, const bool bEnabled);
	static bool K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectBlueprintFunctionLibrary">();
	}
	static class USmartObjectBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(USmartObjectBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on USmartObjectBlueprintFunctionLibrary");
static_assert(sizeof(USmartObjectBlueprintFunctionLibrary) == 0x000028, "Wrong size on USmartObjectBlueprintFunctionLibrary");

// Class SmartObjectsModule.AITask_UseSmartObject
// 0x0040 (0x00B0 - 0x0070)
class UAITask_UseSmartObject final : public UAITask
{
public:
	class USmartObjectComponent*                  SOComponent;                                       // 0x0070(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_             OnFinished;                                        // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAITask_MoveTo*                         MoveToTask;                                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_449C[0x20];                                    // 0x0090(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAITask_UseSmartObject* UseSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AITask_UseSmartObject">();
	}
	static class UAITask_UseSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_UseSmartObject>();
	}
};
static_assert(alignof(UAITask_UseSmartObject) == 0x000008, "Wrong alignment on UAITask_UseSmartObject");
static_assert(sizeof(UAITask_UseSmartObject) == 0x0000B0, "Wrong size on UAITask_UseSmartObject");
static_assert(offsetof(UAITask_UseSmartObject, SOComponent) == 0x000070, "Member 'UAITask_UseSmartObject::SOComponent' has a wrong offset!");
static_assert(offsetof(UAITask_UseSmartObject, OnFinished) == 0x000078, "Member 'UAITask_UseSmartObject::OnFinished' has a wrong offset!");
static_assert(offsetof(UAITask_UseSmartObject, MoveToTask) == 0x000088, "Member 'UAITask_UseSmartObject::MoveToTask' has a wrong offset!");

// Class SmartObjectsModule.BTTask_FindAndUseSmartObject
// 0x0050 (0x00C0 - 0x0070)
class UBTTask_FindAndUseSmartObject final : public UBTTaskNode
{
public:
	struct FGameplayTagQuery                      ActivityRequirements;                              // 0x0070(0x0048)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                         Radius;                                            // 0x00B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_449E[0x4];                                     // 0x00BC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_FindAndUseSmartObject">();
	}
	static class UBTTask_FindAndUseSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_FindAndUseSmartObject>();
	}
};
static_assert(alignof(UBTTask_FindAndUseSmartObject) == 0x000008, "Wrong alignment on UBTTask_FindAndUseSmartObject");
static_assert(sizeof(UBTTask_FindAndUseSmartObject) == 0x0000C0, "Wrong size on UBTTask_FindAndUseSmartObject");
static_assert(offsetof(UBTTask_FindAndUseSmartObject, ActivityRequirements) == 0x000070, "Member 'UBTTask_FindAndUseSmartObject::ActivityRequirements' has a wrong offset!");
static_assert(offsetof(UBTTask_FindAndUseSmartObject, Radius) == 0x0000B8, "Member 'UBTTask_FindAndUseSmartObject::Radius' has a wrong offset!");

// Class SmartObjectsModule.BTTask_UseSmartObject
// 0x0000 (0x0098 - 0x0098)
class UBTTask_UseSmartObject final : public UBTTask_BlackboardBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_UseSmartObject">();
	}
	static class UBTTask_UseSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_UseSmartObject>();
	}
};
static_assert(alignof(UBTTask_UseSmartObject) == 0x000008, "Wrong alignment on UBTTask_UseSmartObject");
static_assert(sizeof(UBTTask_UseSmartObject) == 0x000098, "Wrong size on UBTTask_UseSmartObject");

// Class SmartObjectsModule.GenericSmartObject
// 0x0020 (0x0238 - 0x0218)
class AGenericSmartObject final : public AActor
{
public:
	uint8                                         Pad_449F[0x8];                                     // 0x0218(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USmartObjectComponent*                  SOComponent;                                       // 0x0220(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                         ReferenceActors;                                   // 0x0228(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenericSmartObject">();
	}
	static class AGenericSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGenericSmartObject>();
	}
};
static_assert(alignof(AGenericSmartObject) == 0x000008, "Wrong alignment on AGenericSmartObject");
static_assert(sizeof(AGenericSmartObject) == 0x000238, "Wrong size on AGenericSmartObject");
static_assert(offsetof(AGenericSmartObject, SOComponent) == 0x000220, "Member 'AGenericSmartObject::SOComponent' has a wrong offset!");
static_assert(offsetof(AGenericSmartObject, ReferenceActors) == 0x000228, "Member 'AGenericSmartObject::ReferenceActors' has a wrong offset!");

// Class SmartObjectsModule.RichSmartObjectInterface
// 0x0000 (0x0028 - 0x0028)
class IRichSmartObjectInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RichSmartObjectInterface">();
	}
	static class IRichSmartObjectInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IRichSmartObjectInterface>();
	}
};
static_assert(alignof(IRichSmartObjectInterface) == 0x000008, "Wrong alignment on IRichSmartObjectInterface");
static_assert(sizeof(IRichSmartObjectInterface) == 0x000028, "Wrong size on IRichSmartObjectInterface");

// Class SmartObjectsModule.SmartObjectComponent
// 0x0060 (0x0110 - 0x00B0)
class USmartObjectComponent final : public UActorComponent
{
public:
	uint8                                         Pad_44A0[0x8];                                     // 0x00B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class USmartObjectConfig>      Config;                                            // 0x00B8(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectID                         RegisteredID;                                      // 0x00E0(0x0004)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                        ExecutionPriorityOverride;                         // 0x00E4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IGameplayTagAssetInterface> GameplayTagAssetInterfaceImplementation;           // 0x00E8(0x0010)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         bRichSmartObjectOwner : 1;                         // 0x00F8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bRichSmartObjectComponent : 1;                     // 0x00F8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_44A1[0x17];                                    // 0x00F9(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectComponent">();
	}
	static class USmartObjectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectComponent>();
	}
};
static_assert(alignof(USmartObjectComponent) == 0x000008, "Wrong alignment on USmartObjectComponent");
static_assert(sizeof(USmartObjectComponent) == 0x000110, "Wrong size on USmartObjectComponent");
static_assert(offsetof(USmartObjectComponent, Config) == 0x0000B8, "Member 'USmartObjectComponent::Config' has a wrong offset!");
static_assert(offsetof(USmartObjectComponent, RegisteredID) == 0x0000E0, "Member 'USmartObjectComponent::RegisteredID' has a wrong offset!");
static_assert(offsetof(USmartObjectComponent, ExecutionPriorityOverride) == 0x0000E4, "Member 'USmartObjectComponent::ExecutionPriorityOverride' has a wrong offset!");
static_assert(offsetof(USmartObjectComponent, GameplayTagAssetInterfaceImplementation) == 0x0000E8, "Member 'USmartObjectComponent::GameplayTagAssetInterfaceImplementation' has a wrong offset!");

// Class SmartObjectsModule.SmartObjectConfig
// 0x0038 (0x0068 - 0x0030)
class USmartObjectConfig final : public UDataAsset
{
public:
	TArray<struct FSmartObjectUseConfig>          Uses;                                              // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                  DescriptionTags;                                   // 0x0040(0x0020)(Protected, NativeAccessSpecifierProtected)
	uint32                                        MaxConcurrentUsers;                                // 0x0060(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_44A2[0x4];                                     // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectConfig">();
	}
	static class USmartObjectConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectConfig>();
	}
};
static_assert(alignof(USmartObjectConfig) == 0x000008, "Wrong alignment on USmartObjectConfig");
static_assert(sizeof(USmartObjectConfig) == 0x000068, "Wrong size on USmartObjectConfig");
static_assert(offsetof(USmartObjectConfig, Uses) == 0x000030, "Member 'USmartObjectConfig::Uses' has a wrong offset!");
static_assert(offsetof(USmartObjectConfig, DescriptionTags) == 0x000040, "Member 'USmartObjectConfig::DescriptionTags' has a wrong offset!");
static_assert(offsetof(USmartObjectConfig, MaxConcurrentUsers) == 0x000060, "Member 'USmartObjectConfig::MaxConcurrentUsers' has a wrong offset!");

// Class SmartObjectsModule.SmartObjectManager
// 0x0528 (0x0550 - 0x0028)
class alignas(0x10) USmartObjectManager final : public UObject
{
public:
	TMap<struct FSmartObjectID, struct FSmartObjectRuntime> RuntimeSmartObjects;                               // 0x0028(0x0050)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_44A3[0x4C8];                                   // 0x0078(0x04C8)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         BitPad_77 : 1;                                     // 0x0540(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bCreateIfMissing : 1;                              // 0x0540(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, Config, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_44A4[0x3];                                     // 0x0541(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DefaultUnusedSmartObjectLifespan;                  // 0x0544(0x0004)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_44A5[0x8];                                     // 0x0548(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectManager">();
	}
	static class USmartObjectManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectManager>();
	}
};
static_assert(alignof(USmartObjectManager) == 0x000010, "Wrong alignment on USmartObjectManager");
static_assert(sizeof(USmartObjectManager) == 0x000550, "Wrong size on USmartObjectManager");
static_assert(offsetof(USmartObjectManager, RuntimeSmartObjects) == 0x000028, "Member 'USmartObjectManager::RuntimeSmartObjects' has a wrong offset!");
static_assert(offsetof(USmartObjectManager, DefaultUnusedSmartObjectLifespan) == 0x000544, "Member 'USmartObjectManager::DefaultUnusedSmartObjectLifespan' has a wrong offset!");

// Class SmartObjectsModule.SmartObjectRenderingComponent
// 0x0000 (0x03F0 - 0x03F0)
class USmartObjectRenderingComponent final : public UPrimitiveComponent
{
public:
	ESOReferenceDrawingMode                       ReferenceDrawingMode;                              // 0x03E8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_44A6[0x7];                                     // 0x03E9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectRenderingComponent">();
	}
	static class USmartObjectRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectRenderingComponent>();
	}
};
static_assert(alignof(USmartObjectRenderingComponent) == 0x000010, "Wrong alignment on USmartObjectRenderingComponent");
static_assert(sizeof(USmartObjectRenderingComponent) == 0x0003F0, "Wrong size on USmartObjectRenderingComponent");
static_assert(offsetof(USmartObjectRenderingComponent, ReferenceDrawingMode) == 0x0003E8, "Member 'USmartObjectRenderingComponent::ReferenceDrawingMode' has a wrong offset!");

}
