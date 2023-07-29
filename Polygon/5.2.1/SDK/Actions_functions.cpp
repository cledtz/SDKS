#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Actions.Action.Succeeded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAction::Succeeded()
{
	static auto Func = Class->GetFunction("Action", "Succeeded");

	Params::UAction_Succeeded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.Succeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAction::Succeed()
{
	static auto Func = Class->GetFunction("Action", "Succeed");

	Params::UAction_Succeed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Actions.Action.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAction::ReceiveTick(float DeltaTime)
{
	static auto Func = Class->GetFunction("Action", "ReceiveTick");

	Params::UAction_ReceiveTick_Params Parms;

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Actions.Action.ReceiveFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EActionState            Reason                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAction::ReceiveFinished(enum class EActionState Reason)
{
	static auto Func = Class->GetFunction("Action", "ReceiveFinished");

	Params::UAction_ReceiveFinished_Params Parms;

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Actions.Action.ReceiveCanActivate
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAction::ReceiveCanActivate()
{
	static auto Func = Class->GetFunction("Action", "ReceiveCanActivate");

	Params::UAction_ReceiveCanActivate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.ReceiveActivate
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAction::ReceiveActivate()
{
	static auto Func = Class->GetFunction("Action", "ReceiveActivate");

	Params::UAction_ReceiveActivate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Actions.Action.IsRunning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAction::IsRunning()
{
	static auto Func = Class->GetFunction("Action", "IsRunning");

	Params::UAction_IsRunning_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.GetTickRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAction::GetTickRate()
{
	static auto Func = Class->GetFunction("Action", "GetTickRate");

	Params::UAction_GetTickRate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EActionState            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EActionState UAction::GetState()
{
	static auto Func = Class->GetFunction("Action", "GetState");

	Params::UAction_GetState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.GetParentAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAction*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAction* UAction::GetParentAction()
{
	static auto Func = Class->GetFunction("Action", "GetParentAction");

	Params::UAction_GetParentAction_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAction::GetParent()
{
	static auto Func = Class->GetFunction("Action", "GetParent");

	Params::UAction_GetParent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.GetOwnerComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActorComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActorComponent* UAction::GetOwnerComponent()
{
	static auto Func = Class->GetFunction("Action", "GetOwnerComponent");

	Params::UAction_GetOwnerComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.GetOwnerActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UAction::GetOwnerActor()
{
	static auto Func = Class->GetFunction("Action", "GetOwnerActor");

	Params::UAction_GetOwnerActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.GetOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAction::GetOwner()
{
	static auto Func = Class->GetFunction("Action", "GetOwner");

	Params::UAction_GetOwner_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.Failed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAction::Failed()
{
	static auto Func = Class->GetFunction("Action", "Failed");

	Params::UAction_Failed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.Action.Fail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Error                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAction::Fail(class FName Error)
{
	static auto Func = Class->GetFunction("Action", "Fail");

	Params::UAction_Fail_Params Parms;

	Parms.Error = Error;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Actions.Action.Activate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAction::Activate()
{
	static auto Func = Class->GetFunction("Action", "Activate");

	Params::UAction_Activate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Actions.ActionLibrary.CreateAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Owner                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAction>         Type                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoActivate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAction*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAction* UActionLibrary::CreateAction(class UObject* Owner, TSubclassOf<class UAction> Type, bool bAutoActivate)
{
	static auto Func = Class->GetFunction("ActionLibrary", "CreateAction");

	Params::UActionLibrary_CreateAction_Params Parms;

	Parms.Owner = Owner;
	Parms.Type = Type;
	Parms.bAutoActivate = bAutoActivate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Actions.ActionsSubsystem.CancelAllByOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActionsSubsystem::CancelAllByOwner(class UObject* Object)
{
	static auto Func = Class->GetFunction("ActionsSubsystem", "CancelAllByOwner");

	Params::UActionsSubsystem_CancelAllByOwner_Params Parms;

	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Actions.ActionsSubsystem.CancelAllByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      ActionClass                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UAction*>             IgnoreActions                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UActionsSubsystem::CancelAllByClass(class UClass* ActionClass, const TArray<class UAction*>& IgnoreActions)
{
	static auto Func = Class->GetFunction("ActionsSubsystem", "CancelAllByClass");

	Params::UActionsSubsystem_CancelAllByClass_Params Parms;

	Parms.ActionClass = ActionClass;
	Parms.IgnoreActions = IgnoreActions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Actions.BTT_RunAction.OnRunActionFinished
// (Final, Native, Public)
// Parameters:
// enum class EActionState            Reason                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTT_RunAction::OnRunActionFinished(enum class EActionState Reason)
{
	static auto Func = Class->GetFunction("BTT_RunAction", "OnRunActionFinished");

	Params::UBTT_RunAction_OnRunActionFinished_Params Parms;

	Parms.Reason = Reason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
