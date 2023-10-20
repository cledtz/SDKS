#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x180 - 0x28)
// Class RigVM.RigVMHost
class URigVMHost : public UObject
{
public:
	uint8                                        Pad_145C[0x8];                                     // Fixing Size After Last Property 
	struct FRigVMRuntimeSettings                 VMRuntimeSettings;                                 // 0x30(0x18)(NativeAccessSpecifierPublic)
	uint8                                        Pad_145D[0x10];                                    // Fixing Size After Last Property 
	class URigVM*                                VM;                                                // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRigVMDrawContainer                   DrawContainer;                                     // 0x60(0x18)(NativeAccessSpecifierPublic)
	uint8                                        Pad_145E[0x18];                                    // Fixing Size After Last Property 
	TArray<class FName>                          EventQueue;                                        // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_145F[0x90];                                    // Fixing Size After Last Property 
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x130(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1460[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URigVMHost* GetDefaultObj();

	bool SupportsEvent(class FName& InEventName);
	bool SetVariableFromString(class FName& InVariableName, const class FString& InValue);
	void SetFramesPerSecond(float InFramesPerSecond);
	void SetDeltaTime(float InDeltaTime);
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
	void RequestRunOnceEvent(class FName& InEventName, int32 InEventIndex);
	void RequestInit();
	bool RemoveRunOnceEvent(class FName& InEventName);
	class URigVM* GetVM();
	class FName GetVariableType(class FName& InVariableName);
	class FString GetVariableAsString(class FName& InVariableName);
	TArray<class FName> GetSupportedEvents();
	TArray<class FName> GetScriptAccessibleVariables();
	float GetDeltaTime();
	float GetCurrentFramesPerSecond();
	float GetAbsoluteTime();
	TArray<class URigVMHost*> FindRigVMHosts(class UObject* Outer, TSubclassOf<class URigVMHost> OptionalClass);
	bool ExecuteEvent(class FName& InEventName);
	bool Execute(class FName& InEventName);
	bool CanExecute();
};

// 0x30 (0x3A0 - 0x370)
// Class RigVM.RigVMBlueprintGeneratedClass
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	uint8                                        Pad_1467[0x8];                                     // Fixing Size After Last Property 
	struct FRigVMGraphFunctionStore              GraphFunctionStore;                                // 0x378(0x20)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1468[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URigVMBlueprintGeneratedClass* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class RigVM.RigVMUserWorkflowOptions
class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                               Subject;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRigVMUserWorkflow                    Workflow;                                          // 0x30(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_146F[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URigVMUserWorkflowOptions* GetDefaultObj();

	bool RequiresDialog();
	void ReportWarning(const class FString& InMessage);
	void ReportInfo(const class FString& InMessage);
	void ReportError(const class FString& InMessage);
	bool IsValid();
};

// 0x0 (0x28 - 0x28)
// Class RigVM.RigVMGraphFunctionHost
class URigVMGraphFunctionHost : public UInterface
{
public:

	static class UClass* StaticClass();
	static class URigVMGraphFunctionHost* GetDefaultObj();

};

// 0x3C8 (0x3F0 - 0x28)
// Class RigVM.RigVM
class URigVM : public UObject
{
public:
	class URigVMMemoryStorage*                   WorkMemoryStorageObject;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                   LiteralMemoryStorageObject;                        // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                   DebugMemoryStorageObject;                          // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1517[0x20];                                    // Fixing Size After Last Property 
	struct FRigVMByteCode                        ByteCodeStorage;                                   // 0x60(0x90)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1518[0x8];                                     // Fixing Size After Last Property 
	struct FRigVMInstructionArray                Instructions;                                      // 0xF8(0x10)(Transient, NativeAccessSpecifierPrivate)
	struct FRigVMExtendedExecuteContext          Context;                                           // 0x108(0x108)(Transient, Protected, NativeAccessSpecifierProtected)
	uint32                                       NumExecutions;                                     // 0x210(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1519[0x4];                                     // Fixing Size After Last Property 
	TArray<class FName>                          FunctionNamesStorage;                              // 0x218(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_151A[0x38];                                    // Fixing Size After Last Property 
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x260(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x270(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_151B[0xE8];                                    // Fixing Size After Last Property 
	class URigVM*                                DeferredVMToCopy;                                  // 0x3A8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_151D[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URigVM* GetDefaultObj();

	void SetParameterValueVector2D(class FName& InParameterName, struct FVector2D& InValue, int32 InArrayIndex);
	void SetParameterValueVector(class FName& InParameterName, struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(class FName& InParameterName, struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueString(class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(class FName& InParameterName, struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueName(class FName& InParameterName, class FName& InValue, int32 InArrayIndex);
	void SetParameterValueInt(class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueFloat(class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueDouble(class FName& InParameterName, double InValue, int32 InArrayIndex);
	void SetParameterValueBool(class FName& InParameterName, bool InValue, int32 InArrayIndex);
	struct FRigVMStatistics GetStatistics();
	class FString GetRigVMFunctionName(int32 InFunctionIndex);
	struct FVector2D GetParameterValueVector2D(class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(class FName& InParameterName, int32 InArrayIndex);
	double GetParameterValueDouble(class FName& InParameterName, int32 InArrayIndex);
	bool GetParameterValueBool(class FName& InParameterName, int32 InArrayIndex);
	bool Execute(class FName& InEntryName);
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, class FName& InMethodName);
};

// 0x40 (0x260 - 0x220)
// Class RigVM.RigVMMemoryStorageGeneratorClass
class URigVMMemoryStorageGeneratorClass : public UClass
{
public:
	uint8                                        Pad_1525[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URigVMMemoryStorageGeneratorClass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RigVM.RigVMMemoryStorage
class URigVMMemoryStorage : public UObject
{
public:

	static class UClass* StaticClass();
	static class URigVMMemoryStorage* GetDefaultObj();

};

// 0x28 (0x418 - 0x3F0)
// Class RigVM.RigVMNativized
class URigVMNativized : public URigVM
{
public:
	uint8                                        Pad_1529[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URigVMNativized* GetDefaultObj();

};

}


