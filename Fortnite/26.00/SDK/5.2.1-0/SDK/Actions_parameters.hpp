#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function Actions.Action.Succeeded
struct UAction_Succeeded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Actions.Action.Succeed
struct UAction_Succeed_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Actions.Action.ReceiveTick
struct UAction_ReceiveTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Actions.Action.ReceiveFinished
struct UAction_ReceiveFinished_Params
{
public:
	enum class EActionState                      Reason;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Actions.Action.ReceiveCanActivate
struct UAction_ReceiveCanActivate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Actions.Action.ReceiveActivate
struct UAction_ReceiveActivate_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Actions.Action.IsRunning
struct UAction_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Actions.Action.GetTickRate
struct UAction_GetTickRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Actions.Action.GetState
struct UAction_GetState_Params
{
public:
	enum class EActionState                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Actions.Action.GetParentAction
struct UAction_GetParentAction_Params
{
public:
	class UAction*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Actions.Action.GetParent
struct UAction_GetParent_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Actions.Action.GetOwnerComponent
struct UAction_GetOwnerComponent_Params
{
public:
	class UActorComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Actions.Action.GetOwnerActor
struct UAction_GetOwnerActor_Params
{
public:
	class UActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Actions.Action.GetOwner
struct UAction_GetOwner_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Actions.Action.Failed
struct UAction_Failed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Actions.Action.Fail
struct UAction_Fail_Params
{
public:
	class FName                                  Error;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Actions.Action.Activate
struct UAction_Activate_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function Actions.ActionLibrary.CreateAction
struct UActionLibrary_CreateAction_Params
{
public:
	class UObject*                               Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAction>                   Type;                                              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoActivate;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F9[0x7];                                     // Fixing Size After Last Property 
	class UAction*                               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Actions.ActionsSubsystem.CancelAllByOwner
struct UActionsSubsystem_CancelAllByOwner_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Actions.ActionsSubsystem.CancelAllByClass
struct UActionsSubsystem_CancelAllByClass_Params
{
public:
	class UClass*                                ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAction*>                       IgnoreActions;                                     // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Actions.BTT_RunAction.OnRunActionFinished
struct UBTT_RunAction_OnRunActionFinished_Params
{
public:
	enum class EActionState                      Reason;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


