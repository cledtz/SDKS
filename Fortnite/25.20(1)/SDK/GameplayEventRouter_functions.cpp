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


// Function GameplayEventRouter.AsyncAction_StartListeningToEvent.StopListeningToEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAsyncAction_StartListeningToEvent::StopListeningToEvent()
{
	static auto Func = Class->GetFunction("AsyncAction_StartListeningToEvent", "StopListeningToEvent");

	Params::UAsyncAction_StartListeningToEvent_StopListeningToEvent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayEventRouterComponent*Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScriptStruct*               EventType                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEventBubblingRule      EventBubblingRule                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_StartListeningToEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_StartListeningToEvent* UAsyncAction_StartListeningToEvent::StartListeningToEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, enum class EEventBubblingRule EventBubblingRule)
{
	static auto Func = Class->GetFunction("AsyncAction_StartListeningToEvent", "StartListeningToEvent");

	Params::UAsyncAction_StartListeningToEvent_StartListeningToEvent_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Target = Target;
	Parms.EventType = EventType;
	Parms.Context = Context;
	Parms.EventBubblingRule = EventBubblingRule;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayEventRouter.AsyncAction_StartListeningToEvent.GetPayload
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OutPayload                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAsyncAction_StartListeningToEvent::GetPayload(int32& OutPayload)
{
	static auto Func = Class->GetFunction("AsyncAction_StartListeningToEvent", "GetPayload");

	Params::UAsyncAction_StartListeningToEvent_GetPayload_Params Parms;

	Parms.OutPayload = OutPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StopListeningToStatefulEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAsyncAction_StartListeningToStatefulEvent::StopListeningToStatefulEvent()
{
	static auto Func = Class->GetFunction("AsyncAction_StartListeningToStatefulEvent", "StopListeningToStatefulEvent");

	Params::UAsyncAction_StartListeningToStatefulEvent_StopListeningToStatefulEvent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayEventRouterComponent*Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScriptStruct*               EventType                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEventBubblingRule      EventBubblingRule                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_StartListeningToStatefulEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_StartListeningToStatefulEvent* UAsyncAction_StartListeningToStatefulEvent::StartListeningToStatefulEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, enum class EEventBubblingRule EventBubblingRule)
{
	static auto Func = Class->GetFunction("AsyncAction_StartListeningToStatefulEvent", "StartListeningToStatefulEvent");

	Params::UAsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Target = Target;
	Parms.EventType = EventType;
	Parms.Context = Context;
	Parms.EventBubblingRule = EventBubblingRule;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.GetPayload
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OutPayload                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAsyncAction_StartListeningToStatefulEvent::GetPayload(int32& OutPayload)
{
	static auto Func = Class->GetFunction("AsyncAction_StartListeningToStatefulEvent", "GetPayload");

	Params::UAsyncAction_StartListeningToStatefulEvent_GetPayload_Params Parms;

	Parms.OutPayload = OutPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayEventRouter.GameplayEventRouterComponent.StopListeningToEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEventListenerHandleHandleToRemove                                                   (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayEventRouterComponent::StopListeningToEvent(struct FGameplayEventListenerHandle& HandleToRemove)
{
	static auto Func = Class->GetFunction("GameplayEventRouterComponent", "StopListeningToEvent");

	Params::UGameplayEventRouterComponent_StopListeningToEvent_Params Parms;

	Parms.HandleToRemove = HandleToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastStatefulEvent
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              EventData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     EventContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayEventRouterComponent::K2_BroadcastStatefulEvent(int32& EventData, class UObject* EventContext)
{
	static auto Func = Class->GetFunction("GameplayEventRouterComponent", "K2_BroadcastStatefulEvent");

	Params::UGameplayEventRouterComponent_K2_BroadcastStatefulEvent_Params Parms;

	Parms.EventData = EventData;
	Parms.EventContext = EventContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastEvent
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              EventData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     EventContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayEventRouterComponent::K2_BroadcastEvent(int32& EventData, class UObject* EventContext)
{
	static auto Func = Class->GetFunction("GameplayEventRouterComponent", "K2_BroadcastEvent");

	Params::UGameplayEventRouterComponent_K2_BroadcastEvent_Params Parms;

	Parms.EventData = EventData;
	Parms.EventContext = EventContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayEventRouter.GameplayEventRouterComponent.HasValidEventState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UScriptStruct*               EventType                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayEventRouterComponent::HasValidEventState(class UScriptStruct* EventType, class UObject* Context)
{
	static auto Func = Class->GetFunction("GameplayEventRouterComponent", "HasValidEventState");

	Params::UGameplayEventRouterComponent_HasValidEventState_Params Parms;

	Parms.EventType = EventType;
	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayEventRouter.GameplayEventRouterComponent.ClearEventStateByContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UScriptStruct*               EventType                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayEventRouterComponent::ClearEventStateByContext(class UScriptStruct* EventType, class UObject* Context)
{
	static auto Func = Class->GetFunction("GameplayEventRouterComponent", "ClearEventStateByContext");

	Params::UGameplayEventRouterComponent_ClearEventStateByContext_Params Parms;

	Parms.EventType = EventType;
	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayEventRouter.GameplayEventRouterComponent.ClearEventState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UScriptStruct*               EventType                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayEventRouterComponent::ClearEventState(class UScriptStruct* EventType)
{
	static auto Func = Class->GetFunction("GameplayEventRouterComponent", "ClearEventState");

	Params::UGameplayEventRouterComponent_ClearEventState_Params Parms;

	Parms.EventType = EventType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayEventRouter.GameplayEventRouterOwnerInterface.GetEventRouterClass
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class UGameplayEventRouterComponent>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UGameplayEventRouterComponent> UGameplayEventRouterOwnerInterface::GetEventRouterClass()
{
	static auto Func = Class->GetFunction("GameplayEventRouterOwnerInterface", "GetEventRouterClass");

	Params::UGameplayEventRouterOwnerInterface_GetEventRouterClass_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayEventRouter.GameplayEventRouterSubsytem.GetGlobalEventRouter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayEventRouterComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayEventRouterComponent* UGameplayEventRouterSubsytem::GetGlobalEventRouter(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("GameplayEventRouterSubsytem", "GetGlobalEventRouter");

	Params::UGameplayEventRouterSubsytem_GetGlobalEventRouter_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayEventRouter.GameplayEventRouterSubsytem.GetEventRouter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                      Scope                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ContextActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayEventRouterComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayEventRouterComponent* UGameplayEventRouterSubsytem::GetEventRouter(class UClass* Scope, class UActor* ContextActor)
{
	static auto Func = Class->GetFunction("GameplayEventRouterSubsytem", "GetEventRouter");

	Params::UGameplayEventRouterSubsytem_GetEventRouter_Params Parms;

	Parms.Scope = Scope;
	Parms.ContextActor = ContextActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
