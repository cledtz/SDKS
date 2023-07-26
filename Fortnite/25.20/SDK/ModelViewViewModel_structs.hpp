#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMVVMExecutionMode : uint8
{
	Immediate                      = 0,
	Delayed                        = 1,
	Tick                           = 2,
	DelayedWhenSharedElseImmediate = 3,
	EMVVMExecutionMode_MAX         = 4,
};

enum class EMVVMBindingMode : uint8
{
	OneTimeToDestination           = 0,
	OneWayToDestination            = 1,
	TwoWay                         = 2,
	OneTimeToSource                = 3,
	OneWayToSource                 = 4,
	EMVVMBindingMode_MAX           = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMBindingName
struct FMVVMBindingName
{
public:
	class FName                                  BindingName;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMAvailableBinding
struct FMVVMAvailableBinding
{
public:
	struct FMVVMBindingName                      BindingName;                                       // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsReadable;                                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsWritable;                                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasNotify;                                        // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F7E[0x1];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMEventField
struct FMVVMEventField
{
public:
	uint8                                        Pad_3F7F[0x1];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewModelContext
struct FMVVMViewModelContext
{
public:
	TSubclassOf<class UMVVMViewModelBase>        ContextClass;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ContextName;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F80[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewModelContextInstance
struct FMVVMViewModelContextInstance
{
public:
	struct FMVVMViewModelContext                 Context;                                           // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	class UMVVMViewModelBase*                    Instance;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMVCompiledFields
struct FMVVMVCompiledFields
{
public:
	class UStruct*                               ClassOrScriptStruct;                               // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        LibraryStartIndex;                                 // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        NumberOfProperties;                                // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        NumberOfFunctions;                                 // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        NumberOfFieldIds;                                  // 0xE(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMVCompiledFieldPath
struct FMVVMVCompiledFieldPath
{
public:
	int16                                        StartIndex;                                        // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        Num;                                               // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMVCompiledFieldId
struct FMVVMVCompiledFieldId
{
public:
	int16                                        FieldIdIndex;                                      // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
struct FMVVMCompiledLoadedPropertyOrFunctionIndex
{
public:
	int16                                        Index;                                             // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsObjectProperty : 1;                             // Mask: 0x1, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsScriptStructProperty : 1;                       // Mask: 0x2, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsProperty : 1;                                   // Mask: 0x4, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F81[0x1];                                     // Fixing Size Of Struct..
};

// 0xE (0xE - 0x0)
// ScriptStruct ModelViewViewModel.MVVMVCompiledBinding
struct FMVVMVCompiledBinding
{
public:
	struct FMVVMVCompiledFieldPath               SourceFieldPath;                                   // 0x0(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledFieldPath               DestinationFieldPath;                              // 0x4(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledFieldPath               ConversionFunctionFieldPath;                       // 0x8(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Flags;                                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F82[0x1];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMCompiledBindingLibrary
struct FMVVMCompiledBindingLibrary
{
public:
	uint8                                        Pad_3F83[0x10];                                    // Fixing Size After Last Property..
	TArray<class UFunction*>                     LoadedFunctions;                                   // 0x10(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F84[0x10];                                    // Fixing Size After Last Property..
	TArray<struct FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMVCompiledFields>          CompiledFields;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FName>                          CompiledFieldNames;                                // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewModelCollection
struct FMVVMViewModelCollection
{
public:
	TArray<struct FMVVMViewModelContextInstance> ViewModelInstances;                                // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F85[0x18];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewSource
struct FMVVMViewSource
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceName;                                        // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RegisteredCount;                                   // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreatedSource;                                    // 0x10(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetManually;                                      // 0x11(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignedToUserWidgetProperty;                     // 0x12(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F86[0x5];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewClass_SourceCreator
struct FMVVMViewClass_SourceCreator
{
public:
	TSubclassOf<class UObject>                   ExpectedSourceType;                                // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMVVMViewModelContextResolver*         Resolver;                                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMVVMViewModelContext                 GlobalViewModelInstance;                           // 0x10(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledFieldPath               FieldPath;                                         // 0x20(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  PropertyName;                                      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ParentSourceName;                                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flags;                                             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F87[0x3];                                     // Fixing Size Of Struct..
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewClass_CompiledBinding
struct FMVVMViewClass_CompiledBinding
{
public:
	struct FMVVMVCompiledFieldId                 FieldId;                                           // 0x0(0x2)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F88[0x2];                                     // Fixing Size After Last Property..
	class FName                                  SourcePropertyName;                                // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledBinding                 Binding;                                           // 0x8(0xE)(NoDestructor, NativeAccessSpecifierPrivate)
	enum class EMVVMExecutionMode                ExecutionMode;                                     // 0x16(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int8                                         EvaluateSourceCreatorIndex;                        // 0x17(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flags;                                             // 0x18(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F89[0x3];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
