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

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.UpdateStateEventServer
struct UGameplayState_UpdateStateEventServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.UpdateStateEventClient
struct UGameplayState_UpdateStateEventClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.UpdateStateEvent
struct UGameplayState_UpdateStateEvent_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.RemoveStateRuntimeTag
struct UGameplayState_RemoveStateRuntimeTag_Params
{
public:
	struct FGameplayTag                          RemovedTag;                                        // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayStateMachine.GameplayState.MarkStateToEvaluateTransitions
struct UGameplayState_MarkStateToEvaluateTransitions_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.InitializeStateEventServer
struct UGameplayState_InitializeStateEventServer_Params
{
public:
	struct FGameplayTag                          PrevStateId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.InitializeStateEventClient
struct UGameplayState_InitializeStateEventClient_Params
{
public:
	struct FGameplayTag                          PrevStateId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.InitializeStateEvent
struct UGameplayState_InitializeStateEvent_Params
{
public:
	struct FGameplayTag                          PrevStateId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayStateMachine.GameplayState.HasStateRuntimeTag
struct UGameplayState_HasStateRuntimeTag_Params
{
public:
	struct FGameplayTag                          QueryTag;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7983[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function GameplayStateMachine.GameplayState.HasAuthority
struct UGameplayState_HasAuthority_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayStateMachine.GameplayState.GetStateRuntimeTags
struct UGameplayState_GetStateRuntimeTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.GetStateId
struct UGameplayState_GetStateId_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayStateMachine.GameplayState.GetOwningActor
struct UGameplayState_GetOwningActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayStateMachine.GameplayState.GetGameplayStateMachine
struct UGameplayState_GetGameplayStateMachine_Params
{
public:
	class UGameplayStateMachine*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.EndStateEventServer
struct UGameplayState_EndStateEventServer_Params
{
public:
	struct FGameplayTag                          NextStateId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.EndStateEventClient
struct UGameplayState_EndStateEventClient_Params
{
public:
	struct FGameplayTag                          NextStateId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.EndStateEvent
struct UGameplayState_EndStateEvent_Params
{
public:
	struct FGameplayTag                          NextStateId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.BeginStateEventServer
struct UGameplayState_BeginStateEventServer_Params
{
public:
	struct FGameplayTag                          PrevStateId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.BeginStateEventClient
struct UGameplayState_BeginStateEventClient_Params
{
public:
	struct FGameplayTag                          PrevStateId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.BeginStateEvent
struct UGameplayState_BeginStateEvent_Params
{
public:
	struct FGameplayTag                          PrevStateId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayState.AddStateRuntimeTag
struct UGameplayState_AddStateRuntimeTag_Params
{
public:
	struct FGameplayTag                          AddedTag;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayStateMachine.GameplayStateMachine.SetState
struct UGameplayStateMachine_SetState_Params
{
public:
	struct FGameplayTag                          InStateId;                                         // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBeginStateDelay;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData
struct UGameplayStateMachine_OnRep_ActiveGameplayStateData_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayStateMachine.GetStateMachineId
struct UGameplayStateMachine_GetStateMachineId_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateObject
struct UGameplayStateMachine_GetActiveStateObject_Params
{
public:
	class UGameplayState*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateId
struct UGameplayStateMachine_GetActiveStateId_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition
struct UGameplayStateMachine_EvaluateStateTransition_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
