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


// Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.Unregister
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAsyncAction_RegisterGameplayMessageReceiver::Unregister()
{
	static auto Func = Class->GetFunction("AsyncAction_RegisterGameplayMessageReceiver", "Unregister");

	Params::UAsyncAction_RegisterGameplayMessageReceiver_Unregister_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AsyncAction_RegisterGameplayMessageReceiver", "RegisterGameplayMessageReceiver");

	Params::UAsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Channel = Channel;
	Parms.PayloadType = PayloadType;
	Parms.MatchType = MatchType;
	Parms.ActorContext = ActorContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.GetPayload
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OutPayload                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAsyncAction_RegisterGameplayMessageReceiver::GetPayload(int32& OutPayload)
{
	static auto Func = Class->GetFunction("AsyncAction_RegisterGameplayMessageReceiver", "GetPayload");

	Params::UAsyncAction_RegisterGameplayMessageReceiver_GetPayload_Params Parms;

	Parms.OutPayload = OutPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayMessages.GameplayMessageReplicator.Multicast_ServerMessageTriggered
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FReplicatedMessage          MessageData                                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UGameplayMessageReplicator::Multicast_ServerMessageTriggered(const struct FEventMessageTag& Channel, struct FReplicatedMessage& MessageData)
{
	static auto Func = Class->GetFunction("GameplayMessageReplicator", "Multicast_ServerMessageTriggered");

	Params::UGameplayMessageReplicator_Multicast_ServerMessageTriggered_Params Parms;

	Parms.Channel = Channel;
	Parms.MessageData = MessageData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("GameplayMessageRouter", "K2_BroadcastMessage");

	Params::UGameplayMessageRouter_K2_BroadcastMessage_Params Parms;

	Parms.Channel = Channel;
	Parms.Message = Message;
	Parms.bSaveToChannel = bSaveToChannel;
	Parms.ActorContext = ActorContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayMessages.GameplayMessageRouter.HasValidSavedMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayMessageRouter::HasValidSavedMessage(const struct FEventMessageTag& Channel)
{
	static auto Func = Class->GetFunction("GameplayMessageRouter", "HasValidSavedMessage");

	Params::UGameplayMessageRouter_HasValidSavedMessage_Params Parms;

	Parms.Channel = Channel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayMessages.GameplayMessageRouter.ClearSavedMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayMessageRouter::ClearSavedMessage(const struct FEventMessageTag& Channel)
{
	static auto Func = Class->GetFunction("GameplayMessageRouter", "ClearSavedMessage");

	Params::UGameplayMessageRouter_ClearSavedMessage_Params Parms;

	Parms.Channel = Channel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayMessages.BlueprintEventMessageTagLibrary.GetEventMessageTagFromGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                InTag                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventMessageTag            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEventMessageTag UBlueprintEventMessageTagLibrary::GetEventMessageTagFromGameplayTag(const struct FGameplayTag& InTag)
{
	static auto Func = Class->GetFunction("BlueprintEventMessageTagLibrary", "GetEventMessageTagFromGameplayTag");

	Params::UBlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag_Params Parms;

	Parms.InTag = InTag;

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
