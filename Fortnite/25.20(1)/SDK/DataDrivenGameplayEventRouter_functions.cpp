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


// Function DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary.BroadcastEvent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEventDescriptor    EventDescriptor                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     EventContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      EventRouterScope                                                 (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      RouterContextActor                                               (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayEventDescriptorLibrary::BroadcastEvent(struct FGameplayEventDescriptor& EventDescriptor, class UObject* EventContext, int32& Event, class UClass* EventRouterScope, class UActor* RouterContextActor)
{
	static auto Func = Class->GetFunction("GameplayEventDescriptorLibrary", "BroadcastEvent");

	Params::UGameplayEventDescriptorLibrary_BroadcastEvent_Params Parms;

	Parms.EventDescriptor = EventDescriptor;
	Parms.EventContext = EventContext;
	Parms.Event = Event;
	Parms.EventRouterScope = EventRouterScope;
	Parms.RouterContextActor = RouterContextActor;

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
