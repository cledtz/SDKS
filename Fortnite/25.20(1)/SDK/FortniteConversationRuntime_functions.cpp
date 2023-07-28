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


// Function FortniteConversationRuntime.FortConversationContextCondition.DoesContextPass
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationContextCondition::DoesContextPass(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("FortConversationContextCondition", "DoesContextPass");

	Params::UFortConversationContextCondition_DoesContextPass_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteConversationRuntime.FortConversationContextConditionHelpers.GetMessageForContext
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortConversationNodeConditionalMessagesMessages                                                         (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FText                        OutText                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationContextConditionHelpers::GetMessageForContext(struct FFortConversationNodeConditionalMessages& Messages, struct FConversationContext& Context, class FText* OutText)
{
	static auto Func = Class->GetFunction("FortConversationContextConditionHelpers", "GetMessageForContext");

	Params::UFortConversationContextConditionHelpers_GetMessageForContext_Params Parms;

	Parms.Messages = Messages;
	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}


// Function FortniteConversationRuntime.FortConversationParamLibrary.ExtractConversationParameterValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FConversationNodeParameterPair>ConversationParameters                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      DesiredParameterName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ParameterValueOut                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationParamLibrary::ExtractConversationParameterValue(TArray<struct FConversationNodeParameterPair>& ConversationParameters, const class FString& DesiredParameterName, class FString* ParameterValueOut)
{
	static auto Func = Class->GetFunction("FortConversationParamLibrary", "ExtractConversationParameterValue");

	Params::UFortConversationParamLibrary_ExtractConversationParameterValue_Params Parms;

	Parms.ConversationParameters = ConversationParameters;
	Parms.DesiredParameterName = DesiredParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ParameterValueOut != nullptr)
		*ParameterValueOut = Parms.ParameterValueOut;

	return Parms.ReturnValue;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversationWithParticipant
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UFortNonPlayerConversationParticipantComponent*Participant                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::RequestServerAbortConversationWithParticipant(class UFortNonPlayerConversationParticipantComponent* Participant)
{
	static auto Func = Class->GetFunction("FortPlayerConversationComponent", "RequestServerAbortConversationWithParticipant");

	Params::UFortPlayerConversationComponent_RequestServerAbortConversationWithParticipant_Params Parms;

	Parms.Participant = Participant;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversation
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UFortPlayerConversationComponent::RequestServerAbortConversation()
{
	static auto Func = Class->GetFunction("FortPlayerConversationComponent", "RequestServerAbortConversation");

	Params::UFortPlayerConversationComponent_RequestServerAbortConversation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("FortPlayerConversationComponent", "HandleWeaponEquipped");

	Params::UFortPlayerConversationComponent_HandleWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleViewTargetChanged
// (Final, Native, Private)
// Parameters:

void UFortPlayerConversationComponent::HandleViewTargetChanged()
{
	static auto Func = Class->GetFunction("FortPlayerConversationComponent", "HandleViewTargetChanged");

	Params::UFortPlayerConversationComponent_HandleViewTargetChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleFollowedPlayerChanged
// (Final, Native, Private)
// Parameters:
// class UFortPlayerControllerSpectating*SpectatingPC                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerState*            FollowedPlayerState                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::HandleFollowedPlayerChanged(class UFortPlayerControllerSpectating* SpectatingPC, class UFortPlayerState* FollowedPlayerState)
{
	static auto Func = Class->GetFunction("FortPlayerConversationComponent", "HandleFollowedPlayerChanged");

	Params::UFortPlayerConversationComponent_HandleFollowedPlayerChanged_Params Parms;

	Parms.SpectatingPC = SpectatingPC;
	Parms.FollowedPlayerState = FollowedPlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleDBNOChanged
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDBNO                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::HandleDBNOChanged(class UFortPawn* Pawn, bool bIsDBNO)
{
	static auto Func = Class->GetFunction("FortPlayerConversationComponent", "HandleDBNOChanged");

	Params::UFortPlayerConversationComponent_HandleDBNOChanged_Params Parms;

	Parms.Pawn = Pawn;
	Parms.bIsDBNO = bIsDBNO;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorOpenUI
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UFortPlayerConversationComponent::ClientSpectatorOpenUI()
{
	static auto Func = Class->GetFunction("FortPlayerConversationComponent", "ClientSpectatorOpenUI");

	Params::UFortPlayerConversationComponent_ClientSpectatorOpenUI_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorCloseUI
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UFortPlayerConversationComponent::ClientSpectatorCloseUI()
{
	static auto Func = Class->GetFunction("FortPlayerConversationComponent", "ClientSpectatorCloseUI");

	Params::UFortPlayerConversationComponent_ClientSpectatorCloseUI_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientReceiveConversationGiftUINotification
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FGiftUINotificationInfo     ConversationGiftUINotification                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::ClientReceiveConversationGiftUINotification(struct FGiftUINotificationInfo& ConversationGiftUINotification)
{
	static auto Func = Class->GetFunction("FortPlayerConversationComponent", "ClientReceiveConversationGiftUINotification");

	Params::UFortPlayerConversationComponent_ClientReceiveConversationGiftUINotification_Params Parms;

	Parms.ConversationGiftUINotification = ConversationGiftUINotification;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
