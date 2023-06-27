#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MassEntity.MassModuleSettings
class UMassModuleSettings : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MassModuleSettings");
		return Clss;
	}

};

// 0xE8 (0x110 - 0x28)
// Class MassEntity.MassEntitySettings
class UMassEntitySettings : public UMassModuleSettings
{
public:
	class FString                                DumpDependencyGraphFileName;                       // 0x28(0x10)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMassProcessingPhaseConfig            ProcessingPhasesConfig[0x6];                       // 0x38(0xC0)(Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UMassProcessor*>                ProcessorCDOs;                                     // 0xF8(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C5[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MassEntitySettings");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class MassEntity.MassEntitySubsystem
class UMassEntitySubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_40C6[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MassEntitySubsystem");
		return Clss;
	}

};

// 0x90 (0xB8 - 0x28)
// Class MassEntity.MassProcessor
class UMassProcessor : public UObject
{
public:
	int32                                        ExecutionFlags;                                    // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMassProcessingPhase              ProcessingPhase;                                   // 0x2C(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40C7[0x3];                                     // Fixing Size After Last Property..
	struct FMassProcessorExecutionOrder          ExecutionOrder;                                    // 0x30(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoRegisterWithProcessingPhases;                 // 0x58(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40C8[0x2];                                     // Fixing Size After Last Property..
	bool                                         bRequiresGameThreadExecution;                      // 0x5B(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40C9[0x5C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MassProcessor");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MassEntity.MassObserverProcessor
class UMassObserverProcessor : public UMassProcessor
{
public:
	bool                                         bAutoRegisterWithObserverRegistry;                 // 0xB8(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40CA[0x7];                                     // Fixing Size After Last Property..
	class UScriptStruct*                         ObservedType;                                      // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40CB[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MassObserverProcessor");
		return Clss;
	}

};

// 0x140 (0x168 - 0x28)
// Class MassEntity.MassObserverRegistry
class UMassObserverRegistry : public UObject
{
public:
	struct FMassEntityObserverClassesMap         FragmentObservers[0x2];                            // 0x28(0xA0)(Protected, NativeAccessSpecifierProtected)
	struct FMassEntityObserverClassesMap         TagObservers[0x2];                                 // 0xC8(0xA0)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MassObserverRegistry");
		return Clss;
	}

};

// 0x38 (0xF0 - 0xB8)
// Class MassEntity.MassCompositeProcessor
class UMassCompositeProcessor : public UMassProcessor
{
public:
	struct FMassRuntimePipeline                  ChildPipeline;                                     // 0xB8(0x10)(Edit, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  GroupName;                                         // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40CC[0x24];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MassCompositeProcessor");
		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class MassEntity.MassSettings
class UMassSettings : public UDeveloperSettings
{
public:
	TMap<class FName, class UMassModuleSettings*> ModuleSettings;                                    // 0x30(0x50)(Edit, EditFixedSize, EditConst, NoClear, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MassSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
