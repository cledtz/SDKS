#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function StateTreeModule.StateTreeNodeBlueprintBase.SendEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FStateTreeEvent             Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UStateTreeNodeBlueprintBase::SendEvent(struct FStateTreeEvent& Event)
{
	static auto Func = Class->GetFunction("StateTreeNodeBlueprintBase", "SendEvent");

	Params::UStateTreeNodeBlueprintBase_SendEvent_Params Parms;

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StateTreeModule.StateTreeNodeBlueprintBase.RequestTransition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FStateTreeStateLink         TargetState                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EStateTreeTransitionPriorityPriority                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeNodeBlueprintBase::RequestTransition(struct FStateTreeStateLink& TargetState, enum class EStateTreeTransitionPriority Priority)
{
	static auto Func = Class->GetFunction("StateTreeNodeBlueprintBase", "RequestTransition");

	Params::UStateTreeNodeBlueprintBase_RequestTransition_Params Parms;

	Parms.TargetState = TargetState;
	Parms.Priority = Priority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StateTreeModule.StateTreeConditionBlueprintBase.ReceiveTestCondition
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStateTreeConditionBlueprintBase::ReceiveTestCondition()
{
	static auto Func = Class->GetFunction("StateTreeConditionBlueprintBase", "ReceiveTestCondition");

	Params::UStateTreeConditionBlueprintBase_ReceiveTestCondition_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStop
// (Event, Public, BlueprintEvent)
// Parameters:

void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStop()
{
	static auto Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTreeStop");

	Params::UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStart
// (Event, Public, BlueprintEvent)
// Parameters:

void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStart()
{
	static auto Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTreeStart");

	Params::UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeEvaluatorBlueprintBase::ReceiveTick(float DeltaTime)
{
	static auto Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTick");

	Params::UStateTreeEvaluatorBlueprintBase_ReceiveTick_Params Parms;

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EStateTreeRunStatus     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveTick(float DeltaTime)
{
	static auto Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveTick");

	Params::UStateTreeTaskBlueprintBase_ReceiveTick_Params Parms;

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EStateTreeRunStatus     CompletionStatus                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStateTreeActiveStates      CompletedActiveStates                                            (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)

void UStateTreeTaskBlueprintBase::ReceiveStateCompleted(enum class EStateTreeRunStatus CompletionStatus, const struct FStateTreeActiveStates& CompletedActiveStates)
{
	static auto Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveStateCompleted");

	Params::UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Params Parms;

	Parms.CompletionStatus = CompletionStatus;
	Parms.CompletedActiveStates = CompletedActiveStates;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStateTreeTransitionResult  TRANSITION                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UStateTreeTaskBlueprintBase::ReceiveExitState(struct FStateTreeTransitionResult& TRANSITION)
{
	static auto Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveExitState");

	Params::UStateTreeTaskBlueprintBase_ReceiveExitState_Params Parms;

	Parms.TRANSITION = TRANSITION;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStateTreeTransitionResult  TRANSITION                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EStateTreeRunStatus     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveEnterState(struct FStateTreeTransitionResult& TRANSITION)
{
	static auto Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveEnterState");

	Params::UStateTreeTaskBlueprintBase_ReceiveEnterState_Params Parms;

	Parms.TRANSITION = TRANSITION;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
