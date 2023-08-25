#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver
// (None)

class UClass* UAsyncAction_RegisterGameplayMessageReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncAction_RegisterGameplayMessageReceiver");

	return Clss;
}


// AsyncAction_RegisterGameplayMessageReceiver GameplayMessages.Default__AsyncAction_RegisterGameplayMessageReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncAction_RegisterGameplayMessageReceiver* UAsyncAction_RegisterGameplayMessageReceiver::GetDefaultObj()
{
	static class UAsyncAction_RegisterGameplayMessageReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncAction_RegisterGameplayMessageReceiver*>(UAsyncAction_RegisterGameplayMessageReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.Unregister
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAsyncAction_RegisterGameplayMessageReceiver::Unregister()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_RegisterGameplayMessageReceiver", "Unregister");

	Params::UAsyncAction_RegisterGameplayMessageReceiver_Unregister_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.RegisterGameplayMessageReceiver
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScriptStruct*               PayloadType                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayMessageMatchTypeMatchType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ActorContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_RegisterGameplayMessageReceiver*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_RegisterGameplayMessageReceiver* UAsyncAction_RegisterGameplayMessageReceiver::RegisterGameplayMessageReceiver(class UObject* WorldContextObject, const struct FEventMessageTag& Channel, class UScriptStruct* PayloadType, enum class EGameplayMessageMatchType MatchType, class UActor* ActorContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_RegisterGameplayMessageReceiver", "RegisterGameplayMessageReceiver");

	Params::UAsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Channel = Channel;
	Parms.PayloadType = PayloadType;
	Parms.MatchType = MatchType;
	Parms.ActorContext = ActorContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.GetPayload
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OutPayload                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAsyncAction_RegisterGameplayMessageReceiver::GetPayload(int32& OutPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_RegisterGameplayMessageReceiver", "GetPayload");

	Params::UAsyncAction_RegisterGameplayMessageReceiver_GetPayload_Params Parms{};

	Parms.OutPayload = OutPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayMessages.GameplayMessageReplicator
// (Actor)

class UClass* UGameplayMessageReplicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayMessageReplicator");

	return Clss;
}


// GameplayMessageReplicator GameplayMessages.Default__GameplayMessageReplicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayMessageReplicator* UGameplayMessageReplicator::GetDefaultObj()
{
	static class UGameplayMessageReplicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayMessageReplicator*>(UGameplayMessageReplicator::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayMessages.GameplayMessageReplicator.Multicast_ServerMessageTriggered
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FReplicatedMessage          MessageData                                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UGameplayMessageReplicator::Multicast_ServerMessageTriggered(const struct FEventMessageTag& Channel, struct FReplicatedMessage& MessageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayMessageReplicator", "Multicast_ServerMessageTriggered");

	Params::UGameplayMessageReplicator_Multicast_ServerMessageTriggered_Params Parms{};

	Parms.Channel = Channel;
	Parms.MessageData = MessageData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayMessages.GameplayMessageRouter
// (None)

class UClass* UGameplayMessageRouter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayMessageRouter");

	return Clss;
}


// GameplayMessageRouter GameplayMessages.Default__GameplayMessageRouter
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayMessageRouter* UGameplayMessageRouter::GetDefaultObj()
{
	static class UGameplayMessageRouter* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayMessageRouter*>(UGameplayMessageRouter::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayMessages.GameplayMessageRouter.K2_BroadcastMessage
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Message                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSaveToChannel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ActorContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayMessageRouter::K2_BroadcastMessage(const struct FEventMessageTag& Channel, int32& Message, bool bSaveToChannel, class UActor* ActorContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayMessageRouter", "K2_BroadcastMessage");

	Params::UGameplayMessageRouter_K2_BroadcastMessage_Params Parms{};

	Parms.Channel = Channel;
	Parms.Message = Message;
	Parms.bSaveToChannel = bSaveToChannel;
	Parms.ActorContext = ActorContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayMessages.GameplayMessageRouter.HasValidSavedMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayMessageRouter::HasValidSavedMessage(const struct FEventMessageTag& Channel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayMessageRouter", "HasValidSavedMessage");

	Params::UGameplayMessageRouter_HasValidSavedMessage_Params Parms{};

	Parms.Channel = Channel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayMessages.GameplayMessageRouter.ClearSavedMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayMessageRouter::ClearSavedMessage(const struct FEventMessageTag& Channel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayMessageRouter", "ClearSavedMessage");

	Params::UGameplayMessageRouter_ClearSavedMessage_Params Parms{};

	Parms.Channel = Channel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayMessages.BlueprintEventMessageTagLibrary
// (None)

class UClass* UBlueprintEventMessageTagLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueprintEventMessageTagLibrary");

	return Clss;
}


// BlueprintEventMessageTagLibrary GameplayMessages.Default__BlueprintEventMessageTagLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlueprintEventMessageTagLibrary* UBlueprintEventMessageTagLibrary::GetDefaultObj()
{
	static class UBlueprintEventMessageTagLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueprintEventMessageTagLibrary*>(UBlueprintEventMessageTagLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayMessages.BlueprintEventMessageTagLibrary.GetEventMessageTagFromGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                InTag                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventMessageTag            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEventMessageTag UBlueprintEventMessageTagLibrary::GetEventMessageTagFromGameplayTag(const struct FGameplayTag& InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintEventMessageTagLibrary", "GetEventMessageTagFromGameplayTag");

	Params::UBlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag_Params Parms{};

	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


