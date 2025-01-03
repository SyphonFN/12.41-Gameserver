#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigVM

#include "Basic.hpp"

#include "RigVM_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class RigVM.RigVM
// 0x01D0 (0x01F8 - 0x0028)
class URigVM final : public UObject
{
public:
	struct FRigVMMemoryContainer                  WorkMemory;                                        // 0x0028(0x0098)(NativeAccessSpecifierPublic)
	struct FRigVMMemoryContainer                  LiteralMemory;                                     // 0x00C0(0x0098)(NativeAccessSpecifierPublic)
	struct FRigVMByteCode                         ByteCode;                                          // 0x0158(0x0010)(NativeAccessSpecifierPublic)
	struct FRigVMInstructionArray                 Instructions;                                      // 0x0168(0x0010)(Transient, NativeAccessSpecifierPrivate)
	TArray<class FString>                         FunctionNames;                                     // 0x0178(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4882[0x10];                                    // 0x0188(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigVMParameter>                Parameters;                                        // 0x0198(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                      ParametersNameMap;                                 // 0x01A8(0x0050)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
	bool Execute();
	bool GetParameterValueBool(const class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(const class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(const class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(const class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(const class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(const class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int32 InArrayIndex);
	void SetParameterValueBool(const class FName& InParameterName, bool InValue, int32 InArrayIndex);
	void SetParameterValueFloat(const class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueInt(const class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32 InArrayIndex);

	int32 GetParameterArraySize(const class FName& InParameterName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVM">();
	}
	static class URigVM* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVM>();
	}
};
static_assert(alignof(URigVM) == 0x000008, "Wrong alignment on URigVM");
static_assert(sizeof(URigVM) == 0x0001F8, "Wrong size on URigVM");
static_assert(offsetof(URigVM, WorkMemory) == 0x000028, "Member 'URigVM::WorkMemory' has a wrong offset!");
static_assert(offsetof(URigVM, LiteralMemory) == 0x0000C0, "Member 'URigVM::LiteralMemory' has a wrong offset!");
static_assert(offsetof(URigVM, ByteCode) == 0x000158, "Member 'URigVM::ByteCode' has a wrong offset!");
static_assert(offsetof(URigVM, Instructions) == 0x000168, "Member 'URigVM::Instructions' has a wrong offset!");
static_assert(offsetof(URigVM, FunctionNames) == 0x000178, "Member 'URigVM::FunctionNames' has a wrong offset!");
static_assert(offsetof(URigVM, Parameters) == 0x000198, "Member 'URigVM::Parameters' has a wrong offset!");
static_assert(offsetof(URigVM, ParametersNameMap) == 0x0001A8, "Member 'URigVM::ParametersNameMap' has a wrong offset!");

}

