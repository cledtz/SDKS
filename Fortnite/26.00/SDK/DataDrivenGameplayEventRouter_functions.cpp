#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
// (None)

class UClass* UGameplayEventLegacyBroadcast::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayEventLegacyBroadcast");

	return Clss;
}


// GameplayEventLegacyBroadcast DataDrivenGameplayEventRouter.Default__GameplayEventLegacyBroadcast
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayEventLegacyBroadcast* UGameplayEventLegacyBroadcast::GetDefaultObj()
{
	static class UGameplayEventLegacyBroadcast* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayEventLegacyBroadcast*>(UGameplayEventLegacyBroadcast::StaticClass()->DefaultObject);

	return Default;
}


// Class DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
// (None)

class UClass* UGameplayEventDescriptorLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayEventDescriptorLibrary");

	return Clss;
}


// GameplayEventDescriptorLibrary DataDrivenGameplayEventRouter.Default__GameplayEventDescriptorLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayEventDescriptorLibrary* UGameplayEventDescriptorLibrary::GetDefaultObj()
{
	static class UGameplayEventDescriptorLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayEventDescriptorLibrary*>(UGameplayEventDescriptorLibrary::StaticClass()->DefaultObject);

	return Default;
}


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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayEventDescriptorLibrary", "BroadcastEvent");

	Params::UGameplayEventDescriptorLibrary_BroadcastEvent_Params Parms{};

	Parms.EventDescriptor = EventDescriptor;
	Parms.EventContext = EventContext;
	Parms.Event = Event;
	Parms.EventRouterScope = EventRouterScope;
	Parms.RouterContextActor = RouterContextActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


