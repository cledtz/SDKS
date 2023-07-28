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


// Function GameplayStateMachine.GameplayState.UpdateStateEventServer
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::UpdateStateEventServer(float DeltaTime)
{
	static auto Func = Class->GetFunction("GameplayState", "UpdateStateEventServer");

	Params::UGameplayState_UpdateStateEventServer_Params Parms;

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.UpdateStateEventClient
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::UpdateStateEventClient(float DeltaTime)
{
	static auto Func = Class->GetFunction("GameplayState", "UpdateStateEventClient");

	Params::UGameplayState_UpdateStateEventClient_Params Parms;

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.UpdateStateEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::UpdateStateEvent(float DeltaTime)
{
	static auto Func = Class->GetFunction("GameplayState", "UpdateStateEvent");

	Params::UGameplayState_UpdateStateEvent_Params Parms;

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.RemoveStateRuntimeTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                RemovedTag                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::RemoveStateRuntimeTag(struct FGameplayTag& RemovedTag)
{
	static auto Func = Class->GetFunction("GameplayState", "RemoveStateRuntimeTag");

	Params::UGameplayState_RemoveStateRuntimeTag_Params Parms;

	Parms.RemovedTag = RemovedTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayStateMachine.GameplayState.MarkStateToEvaluateTransitions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameplayState::MarkStateToEvaluateTransitions()
{
	static auto Func = Class->GetFunction("GameplayState", "MarkStateToEvaluateTransitions");

	Params::UGameplayState_MarkStateToEvaluateTransitions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayStateMachine.GameplayState.InitializeStateEventServer
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                PrevStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::InitializeStateEventServer(struct FGameplayTag& PrevStateId)
{
	static auto Func = Class->GetFunction("GameplayState", "InitializeStateEventServer");

	Params::UGameplayState_InitializeStateEventServer_Params Parms;

	Parms.PrevStateId = PrevStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.InitializeStateEventClient
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                PrevStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::InitializeStateEventClient(struct FGameplayTag& PrevStateId)
{
	static auto Func = Class->GetFunction("GameplayState", "InitializeStateEventClient");

	Params::UGameplayState_InitializeStateEventClient_Params Parms;

	Parms.PrevStateId = PrevStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.InitializeStateEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                PrevStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::InitializeStateEvent(struct FGameplayTag& PrevStateId)
{
	static auto Func = Class->GetFunction("GameplayState", "InitializeStateEvent");

	Params::UGameplayState_InitializeStateEvent_Params Parms;

	Parms.PrevStateId = PrevStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.HasStateRuntimeTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                QueryTag                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayState::HasStateRuntimeTag(struct FGameplayTag& QueryTag)
{
	static auto Func = Class->GetFunction("GameplayState", "HasStateRuntimeTag");

	Params::UGameplayState_HasStateRuntimeTag_Params Parms;

	Parms.QueryTag = QueryTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayState.HasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayState::HasAuthority()
{
	static auto Func = Class->GetFunction("GameplayState", "HasAuthority");

	Params::UGameplayState_HasAuthority_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayState.GetStateRuntimeTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayState::GetStateRuntimeTags()
{
	static auto Func = Class->GetFunction("GameplayState", "GetStateRuntimeTags");

	Params::UGameplayState_GetStateRuntimeTags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayState.GetStateId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UGameplayState::GetStateId()
{
	static auto Func = Class->GetFunction("GameplayState", "GetStateId");

	Params::UGameplayState_GetStateId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayState.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UGameplayState::GetOwningActor()
{
	static auto Func = Class->GetFunction("GameplayState", "GetOwningActor");

	Params::UGameplayState_GetOwningActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayState.GetGameplayStateMachine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameplayStateMachine*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayStateMachine* UGameplayState::GetGameplayStateMachine()
{
	static auto Func = Class->GetFunction("GameplayState", "GetGameplayStateMachine");

	Params::UGameplayState_GetGameplayStateMachine_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayState.EndStateEventServer
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NextStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::EndStateEventServer(struct FGameplayTag& NextStateId)
{
	static auto Func = Class->GetFunction("GameplayState", "EndStateEventServer");

	Params::UGameplayState_EndStateEventServer_Params Parms;

	Parms.NextStateId = NextStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.EndStateEventClient
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NextStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::EndStateEventClient(struct FGameplayTag& NextStateId)
{
	static auto Func = Class->GetFunction("GameplayState", "EndStateEventClient");

	Params::UGameplayState_EndStateEventClient_Params Parms;

	Parms.NextStateId = NextStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.EndStateEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NextStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::EndStateEvent(struct FGameplayTag& NextStateId)
{
	static auto Func = Class->GetFunction("GameplayState", "EndStateEvent");

	Params::UGameplayState_EndStateEvent_Params Parms;

	Parms.NextStateId = NextStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.BeginStateEventServer
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                PrevStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::BeginStateEventServer(struct FGameplayTag& PrevStateId)
{
	static auto Func = Class->GetFunction("GameplayState", "BeginStateEventServer");

	Params::UGameplayState_BeginStateEventServer_Params Parms;

	Parms.PrevStateId = PrevStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.BeginStateEventClient
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                PrevStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::BeginStateEventClient(struct FGameplayTag& PrevStateId)
{
	static auto Func = Class->GetFunction("GameplayState", "BeginStateEventClient");

	Params::UGameplayState_BeginStateEventClient_Params Parms;

	Parms.PrevStateId = PrevStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.BeginStateEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                PrevStateId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::BeginStateEvent(struct FGameplayTag& PrevStateId)
{
	static auto Func = Class->GetFunction("GameplayState", "BeginStateEvent");

	Params::UGameplayState_BeginStateEvent_Params Parms;

	Parms.PrevStateId = PrevStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayStateMachine.GameplayState.AddStateRuntimeTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                AddedTag                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayState::AddStateRuntimeTag(struct FGameplayTag& AddedTag)
{
	static auto Func = Class->GetFunction("GameplayState", "AddStateRuntimeTag");

	Params::UGameplayState_AddStateRuntimeTag_Params Parms;

	Parms.AddedTag = AddedTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayStateMachine.GameplayStateMachine.SetState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InStateId                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InBeginStateDelay                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayStateMachine::SetState(struct FGameplayTag& InStateId, float InBeginStateDelay)
{
	static auto Func = Class->GetFunction("GameplayStateMachine", "SetState");

	Params::UGameplayStateMachine_SetState_Params Parms;

	Parms.InStateId = InStateId;
	Parms.InBeginStateDelay = InBeginStateDelay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData
// (Final, Native, Private)
// Parameters:

void UGameplayStateMachine::OnRep_ActiveGameplayStateData()
{
	static auto Func = Class->GetFunction("GameplayStateMachine", "OnRep_ActiveGameplayStateData");

	Params::UGameplayStateMachine_OnRep_ActiveGameplayStateData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayStateMachine.GameplayStateMachine.GetStateMachineId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UGameplayStateMachine::GetStateMachineId()
{
	static auto Func = Class->GetFunction("GameplayStateMachine", "GetStateMachineId");

	Params::UGameplayStateMachine_GetStateMachineId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameplayState*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayState* UGameplayStateMachine::GetActiveStateObject()
{
	static auto Func = Class->GetFunction("GameplayStateMachine", "GetActiveStateObject");

	Params::UGameplayStateMachine_GetActiveStateObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UGameplayStateMachine::GetActiveStateId()
{
	static auto Func = Class->GetFunction("GameplayStateMachine", "GetActiveStateId");

	Params::UGameplayStateMachine_GetActiveStateId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UGameplayStateMachine::EvaluateStateTransition()
{
	static auto Func = Class->GetFunction("GameplayStateMachine", "EvaluateStateTransition");

	Params::UGameplayStateMachine_EvaluateStateTransition_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
