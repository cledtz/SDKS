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

enum class ENiagaraMipMapGenerationType : uint8
{
	Unfiltered                     = 0,
	Linear                         = 1,
	Blur1                          = 2,
	Blur2                          = 3,
	Blur3                          = 4,
	Blur4                          = 5,
	ENiagaraMipMapGenerationType_MAX = 6,
};

enum class ENiagaraGpuDispatchType : uint8
{
	OneD                           = 0,
	TwoD                           = 1,
	ThreeD                         = 2,
	Custom                         = 3,
	ENiagaraGpuDispatchType_MAX    = 4,
};

enum class ENiagaraDirectDispatchElementType : uint8
{
	NumThreads                     = 0,
	NumThreadsNoClipping           = 1,
	NumGroups                      = 2,
	ENiagaraDirectDispatchElementType_MAX = 3,
};

enum class ENiagaraSimStageExecuteBehavior : uint8
{
	Always                         = 0,
	OnSimulationReset              = 1,
	NotOnSimulationReset           = 2,
	ENiagaraSimStageExecuteBehavior_MAX = 3,
};

enum class EFNiagaraCompileEventSeverity : uint8
{
	Log                            = 0,
	Display                        = 1,
	Warning                        = 2,
	Error                          = 3,
	FNiagaraCompileEventSeverity_MAX = 4,
};

enum class EFNiagaraCompileEventSource : uint8
{
	Unset                          = 0,
	ScriptDependency               = 1,
	FNiagaraCompileEventSource_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct NiagaraShader.SimulationStageMetaData
struct FSimulationStageMetaData
{
public:
	class FName                                  SimulationStageName;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EnabledBinding;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementCountXBinding;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementCountYBinding;                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementCountZBinding;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraIterationSource           IterationSourceType;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238B[0x3];                                     // Fixing Size After Last Property..
	class FName                                  IterationDataInterface;                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IterationDirectBinding;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSimStageExecuteBehavior   ExecuteBehavior;                                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238C[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bWritesParticles : 1;                              // Mask: 0x1, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPartialParticleUpdate : 1;                        // Mask: 0x2, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bParticleIterationStateEnabled : 1;                // Mask: 0x4, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGpuIndirectDispatch : 1;                          // Mask: 0x8, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F3 : 4;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_238D[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ParticleIterationStateBinding;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238E[0x4];                                     // Fixing Size After Last Property..
	struct FIntPoint                             ParticleIterationStateRange;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OutputDestinations;                                // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          InputDataInterfaces;                               // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumIterations;                                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NumIterationsBinding;                              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuDispatchType           GpuDispatchType;                                   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDirectDispatchElementType GpuDirectDispatchElementType;                      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238F[0x2];                                     // Fixing Size After Last Property..
	struct FIntVector                            GpuDispatchNumThreads;                             // 0x64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NiagaraShader.NiagaraCompileEvent
struct FNiagaraCompileEvent
{
public:
	enum class EFNiagaraCompileEventSeverity     Severity;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2390[0x7];                                     // Fixing Size After Last Property..
	class FString                                Message;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShortDescription;                                  // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 NodeGUID;                                          // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PinGuid;                                           // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         StackGuids;                                        // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFNiagaraCompileEventSource       Source;                                            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2391[0x7];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
struct FNiagaraDataInterfaceGeneratedFunction
{
public:
	uint8                                        Pad_2392[0x28];                                    // Fixing Size After Last Property..
	TArray<struct FNiagaraVariableCommonReference> VariadicInputs;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableCommonReference> VariadicOutputs;                                   // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
struct FNiagaraDataInterfaceGPUParamInfo
{
public:
	class FString                                DataInterfaceHLSLSymbol;                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIClassName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ShaderParametersOffset;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2393[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NiagaraShader.NiagaraShaderScriptExternalConstant
struct FNiagaraShaderScriptExternalConstant
{
public:
	class FName                                  Type;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2394[0x4];                                     // Fixing Size After Last Property..
	class FString                                Name;                                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NiagaraShader.NiagaraShaderScriptParametersMetadata
struct FNiagaraShaderScriptParametersMetadata
{
public:
	TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        LooseMetadataNames;                                // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bExternalConstantsInterpolated;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2395[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants;                                 // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2396[0x20];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
