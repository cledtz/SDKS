#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortniteConversationRuntime.FortConversationMarkerInterface
// (None)

class UClass* UFortConversationMarkerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationMarkerInterface");

	return Clss;
}


// FortConversationMarkerInterface FortniteConversationRuntime.Default__FortConversationMarkerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationMarkerInterface* UFortConversationMarkerInterface::GetDefaultObj()
{
	static class UFortConversationMarkerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationMarkerInterface*>(UFortConversationMarkerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationRuntime.FortConversationParticipantComponent
// (None)

class UClass* UFortConversationParticipantComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationParticipantComponent");

	return Clss;
}


// FortConversationParticipantComponent FortniteConversationRuntime.Default__FortConversationParticipantComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationParticipantComponent* UFortConversationParticipantComponent::GetDefaultObj()
{
	static class UFortConversationParticipantComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationParticipantComponent*>(UFortConversationParticipantComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationRuntime.FortConversationContextCondition
// (None)

class UClass* UFortConversationContextCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationContextCondition");

	return Clss;
}


// FortConversationContextCondition FortniteConversationRuntime.Default__FortConversationContextCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationContextCondition* UFortConversationContextCondition::GetDefaultObj()
{
	static class UFortConversationContextCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationContextCondition*>(UFortConversationContextCondition::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationRuntime.FortConversationContextCondition.DoesContextPass
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationContextCondition::DoesContextPass(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationContextCondition", "DoesContextPass");

	Params::UFortConversationContextCondition_DoesContextPass_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
// (None)

class UClass* UFortConversationContextCondition_ParticipantHasCID::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationContextCondition_ParticipantHasCID");

	return Clss;
}


// FortConversationContextCondition_ParticipantHasCID FortniteConversationRuntime.Default__FortConversationContextCondition_ParticipantHasCID
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationContextCondition_ParticipantHasCID* UFortConversationContextCondition_ParticipantHasCID::GetDefaultObj()
{
	static class UFortConversationContextCondition_ParticipantHasCID* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationContextCondition_ParticipantHasCID*>(UFortConversationContextCondition_ParticipantHasCID::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
// (None)

class UClass* UFortConversationContextCondition_ParticipantHasMetaTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationContextCondition_ParticipantHasMetaTag");

	return Clss;
}


// FortConversationContextCondition_ParticipantHasMetaTag FortniteConversationRuntime.Default__FortConversationContextCondition_ParticipantHasMetaTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationContextCondition_ParticipantHasMetaTag* UFortConversationContextCondition_ParticipantHasMetaTag::GetDefaultObj()
{
	static class UFortConversationContextCondition_ParticipantHasMetaTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationContextCondition_ParticipantHasMetaTag*>(UFortConversationContextCondition_ParticipantHasMetaTag::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
// (None)

class UClass* UFortConversationContextCondition_ParticipantHasOwnedTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationContextCondition_ParticipantHasOwnedTag");

	return Clss;
}


// FortConversationContextCondition_ParticipantHasOwnedTag FortniteConversationRuntime.Default__FortConversationContextCondition_ParticipantHasOwnedTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationContextCondition_ParticipantHasOwnedTag* UFortConversationContextCondition_ParticipantHasOwnedTag::GetDefaultObj()
{
	static class UFortConversationContextCondition_ParticipantHasOwnedTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationContextCondition_ParticipantHasOwnedTag*>(UFortConversationContextCondition_ParticipantHasOwnedTag::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
// (None)

class UClass* UFortConversationContextCondition_ParticipantControllerMeetsRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationContextCondition_ParticipantControllerMeetsRequirement");

	return Clss;
}


// FortConversationContextCondition_ParticipantControllerMeetsRequirement FortniteConversationRuntime.Default__FortConversationContextCondition_ParticipantControllerMeetsRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationContextCondition_ParticipantControllerMeetsRequirement* UFortConversationContextCondition_ParticipantControllerMeetsRequirement::GetDefaultObj()
{
	static class UFortConversationContextCondition_ParticipantControllerMeetsRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationContextCondition_ParticipantControllerMeetsRequirement*>(UFortConversationContextCondition_ParticipantControllerMeetsRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationRuntime.FortConversationContextConditionHelpers
// (None)

class UClass* UFortConversationContextConditionHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationContextConditionHelpers");

	return Clss;
}


// FortConversationContextConditionHelpers FortniteConversationRuntime.Default__FortConversationContextConditionHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationContextConditionHelpers* UFortConversationContextConditionHelpers::GetDefaultObj()
{
	static class UFortConversationContextConditionHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationContextConditionHelpers*>(UFortConversationContextConditionHelpers::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationContextConditionHelpers", "GetMessageForContext");

	Params::UFortConversationContextConditionHelpers_GetMessageForContext_Params Parms{};

	Parms.Messages = Messages;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}


// Class FortniteConversationRuntime.FortConversationParamLibrary
// (None)

class UClass* UFortConversationParamLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationParamLibrary");

	return Clss;
}


// FortConversationParamLibrary FortniteConversationRuntime.Default__FortConversationParamLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationParamLibrary* UFortConversationParamLibrary::GetDefaultObj()
{
	static class UFortConversationParamLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationParamLibrary*>(UFortConversationParamLibrary::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationParamLibrary", "ExtractConversationParameterValue");

	Params::UFortConversationParamLibrary_ExtractConversationParameterValue_Params Parms{};

	Parms.ConversationParameters = ConversationParameters;
	Parms.DesiredParameterName = DesiredParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ParameterValueOut != nullptr)
		*ParameterValueOut = Parms.ParameterValueOut;

	return Parms.ReturnValue;

}


// Class FortniteConversationRuntime.FortniteConversationGlobals
// (None)

class UClass* UFortniteConversationGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortniteConversationGlobals");

	return Clss;
}


// FortniteConversationGlobals FortniteConversationRuntime.Default__FortniteConversationGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortniteConversationGlobals* UFortniteConversationGlobals::GetDefaultObj()
{
	static class UFortniteConversationGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortniteConversationGlobals*>(UFortniteConversationGlobals::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationRuntime.FortPlayerConversationComponent
// (None)

class UClass* UFortPlayerConversationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerConversationComponent");

	return Clss;
}


// FortPlayerConversationComponent FortniteConversationRuntime.Default__FortPlayerConversationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerConversationComponent* UFortPlayerConversationComponent::GetDefaultObj()
{
	static class UFortPlayerConversationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerConversationComponent*>(UFortPlayerConversationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversationWithParticipant
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UFortNonPlayerConversationParticipantComponent*Participant                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::RequestServerAbortConversationWithParticipant(class UFortNonPlayerConversationParticipantComponent* Participant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationComponent", "RequestServerAbortConversationWithParticipant");

	Params::UFortPlayerConversationComponent_RequestServerAbortConversationWithParticipant_Params Parms{};

	Parms.Participant = Participant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversation
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UFortPlayerConversationComponent::RequestServerAbortConversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationComponent", "RequestServerAbortConversation");

	Params::UFortPlayerConversationComponent_RequestServerAbortConversation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationComponent", "HandleWeaponEquipped");

	Params::UFortPlayerConversationComponent_HandleWeaponEquipped_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleViewTargetChanged
// (Final, Native, Private)
// Parameters:

void UFortPlayerConversationComponent::HandleViewTargetChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationComponent", "HandleViewTargetChanged");

	Params::UFortPlayerConversationComponent_HandleViewTargetChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleFollowedPlayerChanged
// (Final, Native, Private)
// Parameters:
// class UFortPlayerControllerSpectating*SpectatingPC                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerState*            FollowedPlayerState                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::HandleFollowedPlayerChanged(class UFortPlayerControllerSpectating* SpectatingPC, class UFortPlayerState* FollowedPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationComponent", "HandleFollowedPlayerChanged");

	Params::UFortPlayerConversationComponent_HandleFollowedPlayerChanged_Params Parms{};

	Parms.SpectatingPC = SpectatingPC;
	Parms.FollowedPlayerState = FollowedPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleDBNOChanged
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDBNO                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::HandleDBNOChanged(class UFortPawn* Pawn, bool bIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationComponent", "HandleDBNOChanged");

	Params::UFortPlayerConversationComponent_HandleDBNOChanged_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.bIsDBNO = bIsDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorOpenUI
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UFortPlayerConversationComponent::ClientSpectatorOpenUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationComponent", "ClientSpectatorOpenUI");

	Params::UFortPlayerConversationComponent_ClientSpectatorOpenUI_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorCloseUI
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UFortPlayerConversationComponent::ClientSpectatorCloseUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationComponent", "ClientSpectatorCloseUI");

	Params::UFortPlayerConversationComponent_ClientSpectatorCloseUI_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientReceiveConversationGiftUINotification
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FGiftUINotificationInfo     ConversationGiftUINotification                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::ClientReceiveConversationGiftUINotification(struct FGiftUINotificationInfo& ConversationGiftUINotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationComponent", "ClientReceiveConversationGiftUINotification");

	Params::UFortPlayerConversationComponent_ClientReceiveConversationGiftUINotification_Params Parms{};

	Parms.ConversationGiftUINotification = ConversationGiftUINotification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


