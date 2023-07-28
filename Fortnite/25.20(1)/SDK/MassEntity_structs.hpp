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

enum class EMassCommandOperationType : uint8
{
	None                           = 0,
	Create                         = 1,
	Add                            = 2,
	Remove                         = 3,
	ChangeComposition              = 4,
	Set                            = 5,
	Destroy                        = 6,
	MAX                            = 7,
};

enum class EMassObservedOperation : uint8
{
	Add                            = 0,
	Remove                         = 1,
	MAX                            = 2,
};

enum class EProcessorExecutionFlags : uint8
{
	None                           = 0,
	Standalone                     = 1,
	Server                         = 2,
	Client                         = 4,
	Editor                         = 8,
	AllNetModes                    = 7,
	All                            = 15,
	EProcessorExecutionFlags_MAX   = 16,
};

enum class EMassProcessingPhase : uint8
{
	PrePhysics                     = 0,
	StartPhysics                   = 1,
	DuringPhysics                  = 2,
	EndPhysics                     = 3,
	PostPhysics                    = 4,
	FrameEnd                       = 5,
	MAX                            = 6,
};

enum class EMassFragmentAccess : uint8
{
	None                           = 0,
	ReadOnly                       = 1,
	ReadWrite                      = 2,
	MAX                            = 3,
};

enum class EMassFragmentPresence : uint8
{
	All                            = 0,
	Any                            = 1,
	None                           = 2,
	Optional                       = 3,
	MAX                            = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x1E8 - 0x0)
// ScriptStruct MassEntity.MassFragmentRequirements
struct FMassFragmentRequirements
{
public:
	uint8                                        Pad_463A[0x1E8];                                   // Fixing Size Of Struct..
};

// 0xB8 (0x2A0 - 0x1E8)
// ScriptStruct MassEntity.MassEntityQuery
struct FMassEntityQuery : public FMassFragmentRequirements
{
public:
	uint8                                        Pad_463B[0xB8];                                    // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// ScriptStruct MassEntity.MassFragment
struct FMassFragment
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MassEntity.MassTag
struct FMassTag
{
public:
	uint8                                        Pad_463C[0x1];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MassEntity.MassChunkFragment
struct FMassChunkFragment
{
public:
	uint8                                        Pad_463D[0x1];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// ScriptStruct MassEntity.MassSharedFragment
struct FMassSharedFragment
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MassEntity.MassEntityHandle
struct FMassEntityHandle
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SerialNumber;                                      // 0x4(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MassEntity.MassEntityView
struct FMassEntityView
{
public:
	uint8                                        Pad_463E[0x20];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MassEntity.MassRuntimePipeline
struct FMassRuntimePipeline
{
public:
	TArray<class UMassProcessor*>                Processors;                                        // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MassEntity.MassObserversMap
struct FMassObserversMap
{
public:
	TMap<class UScriptStruct*, struct FMassRuntimePipeline> Container;                                         // 0x0(0x50)(NativeAccessSpecifierPrivate)
};

// 0x1C8 (0x1C8 - 0x0)
// ScriptStruct MassEntity.MassObserverManager
struct FMassObserverManager
{
public:
	uint8                                        Pad_463F[0x80];                                    // Fixing Size After Last Property..
	struct FMassObserversMap                     FragmentObservers[0x2];                            // 0x80(0xA0)(Protected, NativeAccessSpecifierProtected)
	struct FMassObserversMap                     TagObservers[0x2];                                 // 0x120(0xA0)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4640[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MassEntity.MassProcessorClassCollection
struct FMassProcessorClassCollection
{
public:
	TArray<TSubclassOf<class UMassProcessor>>    ClassCollection;                                   // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MassEntity.MassEntityObserverClassesMap
struct FMassEntityObserverClassesMap
{
public:
	TMap<class UScriptStruct*, struct FMassProcessorClassCollection> Container;                                         // 0x0(0x50)(NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MassEntity.MassProcessingPhaseConfig
struct FMassProcessingPhaseConfig
{
public:
	class FName                                  PhaseName;                                         // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4641[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UMassCompositeProcessor>   PhaseGroupClass;                                   // 0x8(0x8)(Edit, ZeroConstructor, Config, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMassProcessor*>                ProcessorCDOs;                                     // 0x10(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MassEntity.ProcessorAuxDataBase
struct FProcessorAuxDataBase
{
public:
	uint8                                        Pad_4642[0x1];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MassEntity.MassProcessingContext
struct FMassProcessingContext
{
public:
	uint8                                        Pad_4643[0x10];                                    // Fixing Size After Last Property..
	float                                        DeltaSeconds;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4644[0x4];                                     // Fixing Size After Last Property..
	struct FInstancedStruct                      AuxData;                                           // 0x18(0x10)(NativeAccessSpecifierPublic)
	bool                                         bFlushCommandBuffer;                               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4645[0x17];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MassEntity.MassProcessorExecutionOrder
struct FMassProcessorExecutionOrder
{
public:
	class FName                                  ExecuteInGroup;                                    // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4646[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          ExecuteBefore;                                     // 0x8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          ExecuteAfter;                                      // 0x18(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct MassEntity.MassSubsystemRequirements
struct FMassSubsystemRequirements
{
public:
	uint8                                        Pad_4647[0x48];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
