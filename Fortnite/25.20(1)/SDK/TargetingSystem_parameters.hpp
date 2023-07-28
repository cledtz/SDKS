#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function TargetingSystem.AbilityTask_PerformTargeting.PerformTargetingRequest
struct UAbilityTask_PerformTargeting_PerformTargetingRequest_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingPreset*                      InTargetingPreset;                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowAsync;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F28[0x7];                                     // Fixing Size After Last Property..
	class UAbilityTask_PerformTargeting*         ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function TargetingSystem.AbilityTask_PerformTargeting.PerformFilteringRequest
struct UAbilityTask_PerformTargeting_PerformFilteringRequest_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingPreset*                      TargetingPreset;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActor*>                        InTargets;                                         // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllowAsync;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F29[0x7];                                     // Fixing Size After Last Property..
	class UAbilityTask_PerformTargeting*         ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest
struct UAsyncAction_PerformTargeting_PerformTargetingRequest_Params
{
public:
	class UActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingPreset*                      TargetingPreset;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsyncTargeting;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F2B[0x7];                                     // Fixing Size After Last Property..
	class UAsyncAction_PerformTargeting*         ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest
struct UAsyncAction_PerformTargeting_PerformFilteringRequest_Params
{
public:
	class UActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingPreset*                      TargetingPreset;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsyncTargeting;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F2C[0x7];                                     // Fixing Size After Last Property..
	TArray<class UActor*>                        InTargets;                                         // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAsyncAction_PerformTargeting*         ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TargetingSystem.AsyncAction_PerformTargeting.GetTargetingHandle
struct UAsyncAction_PerformTargeting_GetTargetingHandle_Params
{
public:
	struct FTargetingRequestHandle               ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset
struct UTargetingSelectionTask_AOE_GetSourceOffset_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F2E[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation
struct UTargetingSelectionTask_AOE_GetSourceLocation_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F2F[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength
struct UTargetingSelectionTask_Trace_GetTraceLength_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection
struct UTargetingSelectionTask_Trace_GetTraceDirection_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F33[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius
struct UTargetingSelectionTask_Trace_GetSweptTraceRadius_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset
struct UTargetingSelectionTask_Trace_GetSourceOffset_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F34[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation
struct UTargetingSelectionTask_Trace_GetSourceLocation_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F35[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore
struct UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F36[0x4];                                     // Fixing Size After Last Property..
	TArray<class UActor*>                        OutAdditionalActorsToIgnore;                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest
struct UTargetingSubsystem_StartAsyncTargetingRequest_Params
{
public:
	class UTargetingPreset*                      TargetingPreset;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetingSourceContext               InSourceContext;                                   // 0x8(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CompletionDynamicDelegate;                         // 0x40(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetingRequestHandle               ReturnValue;                                       // 0x4C(0x4)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TargetingSystem.TargetingSubsystem.RemoveAsyncTargetingRequestWithHandle
struct UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TargetingSystem.TargetingSubsystem.OverrideCollisionQueryTaskData
struct UTargetingSubsystem_OverrideCollisionQueryTaskData_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3A[0x4];                                     // Fixing Size After Last Property..
	struct FCollisionQueryTaskData               CollisionQueryDataOverride;                        // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function TargetingSystem.TargetingSubsystem.GetTargetingSourceContext
struct UTargetingSubsystem_GetTargetingSourceContext_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3B[0x4];                                     // Fixing Size After Last Property..
	struct FTargetingSourceContext               ReturnValue;                                       // 0x8(0x38)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TargetingSystem.TargetingSubsystem.GetTargetingResultsActors
struct UTargetingSubsystem_GetTargetingResultsActors_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3C[0x4];                                     // Fixing Size After Last Property..
	TArray<class UActor*>                        Targets;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TargetingSystem.TargetingSubsystem.GetTargetingResults
struct UTargetingSubsystem_GetTargetingResults_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3D[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FHitResult>                    OutTargets;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest
struct UTargetingSubsystem_ExecuteTargetingRequest_Params
{
public:
	class UTargetingPreset*                      TargetingPreset;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetingSourceContext               InSourceContext;                                   // 0x8(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CompletionDynamicDelegate;                         // 0x40(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3E[0x4];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
