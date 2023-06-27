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


// Function CommonConversationRuntime.ConversationNode.GetDebugParticipantColor
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ParticipantID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UConversationNode::GetDebugParticipantColor(const struct FGameplayTag& ParticipantID)
{
	static auto Func = Class->GetFunction("ConversationNode", "GetDebugParticipantColor");

	Params::UConversationNode_GetDebugParticipantColor_Params Parms;

	Parms.ParticipantID = ParticipantID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationChoiceNode.FillChoice
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FClientConversationOptionEntryChoiceEntry                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UConversationChoiceNode::FillChoice(struct FConversationContext& Context, struct FClientConversationOptionEntry* ChoiceEntry)
{
	static auto Func = Class->GetFunction("ConversationChoiceNode", "FillChoice");

	Params::UConversationChoiceNode_FillChoice_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ChoiceEntry != nullptr)
		*ChoiceEntry = Parms.ChoiceEntry;

}


// Function CommonConversationRuntime.ConversationContextHelpers.ReturnToLastClientChoice
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::ReturnToLastClientChoice(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "ReturnToLastClientChoice");

	Params::UConversationContextHelpers_ReturnToLastClientChoice_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.ReturnToCurrentClientChoice
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::ReturnToCurrentClientChoice(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "ReturnToCurrentClientChoice");

	Params::UConversationContextHelpers_ReturnToCurrentClientChoice_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.ReturnToConversationStart
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::ReturnToConversationStart(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "ReturnToConversationStart");

	Params::UConversationContextHelpers_ReturnToConversationStart_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.PauseConversationAndSendClientChoices
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FClientConversationMessage  Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::PauseConversationAndSendClientChoices(struct FConversationContext& Context, struct FClientConversationMessage& Message)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "PauseConversationAndSendClientChoices");

	Params::UConversationContextHelpers_PauseConversationAndSendClientChoices_Params Parms;

	Parms.Context = Context;
	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.MakeConversationParticipant
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      ParticipantActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ParticipantTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationContextHelpers::MakeConversationParticipant(struct FConversationContext& Context, class AActor* ParticipantActor, const struct FGameplayTag& ParticipantTag)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "MakeConversationParticipant");

	Params::UConversationContextHelpers_MakeConversationParticipant_Params Parms;

	Parms.Context = Context;
	Parms.ParticipantActor = ParticipantActor;
	Parms.ParticipantTag = ParticipantTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationNodeHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FConversationNodeHandle UConversationContextHelpers::GetCurrentConversationNodeHandle(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "GetCurrentConversationNodeHandle");

	Params::UConversationContextHelpers_GetCurrentConversationNodeHandle_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipantActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTag                ParticipantTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UConversationContextHelpers::GetConversationParticipantActor(struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "GetConversationParticipantActor");

	Params::UConversationContextHelpers_GetConversationParticipantActor_Params Parms;

	Parms.Context = Context;
	Parms.ParticipantTag = ParticipantTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipant
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTag                ParticipantTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConversationParticipantComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationParticipantComponent* UConversationContextHelpers::GetConversationParticipant(struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "GetConversationParticipant");

	Params::UConversationContextHelpers_GetConversationParticipant_Params Parms;

	Parms.Context = Context;
	Parms.ParticipantTag = ParticipantTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.GetConversationInstance
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UConversationInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationInstance* UConversationContextHelpers::GetConversationInstance(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "GetConversationInstance");

	Params::UConversationContextHelpers_GetConversationInstance_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.FindConversationComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConversationParticipantComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationParticipantComponent* UConversationContextHelpers::FindConversationComponent(class AActor* Actor)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "FindConversationComponent");

	Params::UConversationContextHelpers_FindConversationComponent_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.CanConversationContinue
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationTaskResult     ConversationTasResult                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConversationContextHelpers::CanConversationContinue(struct FConversationTaskResult& ConversationTasResult)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "CanConversationContinue");

	Params::UConversationContextHelpers_CanConversationContinue_Params Parms;

	Parms.ConversationTasResult = ConversationTasResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.AdvanceConversationWithChoice
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FAdvanceConversationRequest Choice                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::AdvanceConversationWithChoice(struct FConversationContext& Context, struct FAdvanceConversationRequest& Choice)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "AdvanceConversationWithChoice");

	Params::UConversationContextHelpers_AdvanceConversationWithChoice_Params Parms;

	Parms.Context = Context;
	Parms.Choice = Choice;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.AdvanceConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::AdvanceConversation(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "AdvanceConversation");

	Params::UConversationContextHelpers_AdvanceConversation_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.AbortConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::AbortConversation(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationContextHelpers", "AbortConversation");

	Params::UConversationContextHelpers_AbortConversation_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationLibrary.StartConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ConversationEntryTag                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InstigatorTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                TargetTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UConversationInstance>ConversationInstanceClass                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConversationInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationInstance* UConversationLibrary::StartConversation(const struct FGameplayTag& ConversationEntryTag, class AActor* Instigator, const struct FGameplayTag& InstigatorTag, class AActor* Target, const struct FGameplayTag& TargetTag, TSubclassOf<class UConversationInstance> ConversationInstanceClass)
{
	static auto Func = Class->GetFunction("ConversationLibrary", "StartConversation");

	Params::UConversationLibrary_StartConversation_Params Parms;

	Parms.ConversationEntryTag = ConversationEntryTag;
	Parms.Instigator = Instigator;
	Parms.InstigatorTag = InstigatorTag;
	Parms.Target = Target;
	Parms.TargetTag = TargetTag;
	Parms.ConversationInstanceClass = ConversationInstanceClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationTaskNode.IsRequirementSatisfied
// (BlueprintAuthorityOnly, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EConversationRequirementResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EConversationRequirementResult UConversationTaskNode::IsRequirementSatisfied(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationTaskNode", "IsRequirementSatisfied");

	Params::UConversationTaskNode_IsRequirementSatisfied_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationTaskNode.GetNodeBodyColor
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                BodyColor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConversationTaskNode::GetNodeBodyColor(struct FLinearColor* BodyColor)
{
	static auto Func = Class->GetFunction("ConversationTaskNode", "GetNodeBodyColor");

	Params::UConversationTaskNode_GetNodeBodyColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (BodyColor != nullptr)
		*BodyColor = Parms.BodyColor;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationTaskNode.GatherStaticExtraData
// (BlueprintAuthorityOnly, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FConversationNodeParameterPair>InOutExtraData                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UConversationTaskNode::GatherStaticExtraData(struct FConversationContext& Context, TArray<struct FConversationNodeParameterPair>* InOutExtraData)
{
	static auto Func = Class->GetFunction("ConversationTaskNode", "GatherStaticExtraData");

	Params::UConversationTaskNode_GatherStaticExtraData_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutExtraData != nullptr)
		*InOutExtraData = Parms.InOutExtraData;

}


// Function CommonConversationRuntime.ConversationTaskNode.ExecuteTaskNode
// (BlueprintAuthorityOnly, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationTaskNode::ExecuteTaskNode(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationTaskNode", "ExecuteTaskNode");

	Params::UConversationTaskNode_ExecuteTaskNode_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationTaskNode.ExecuteClientEffects
// (BlueprintCosmetic, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UConversationTaskNode::ExecuteClientEffects(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationTaskNode", "ExecuteClientEffects");

	Params::UConversationTaskNode_ExecuteClientEffects_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ServerAdvanceConversation
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FAdvanceConversationRequest InChoicePicked                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ServerAdvanceConversation(struct FAdvanceConversationRequest& InChoicePicked)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "ServerAdvanceConversation");

	Params::UConversationParticipantComponent_ServerAdvanceConversation_Params Parms;

	Parms.InChoicePicked = InChoicePicked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAdvanceConversationRequest InChoicePicked                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::RequestServerAdvanceConversation(struct FAdvanceConversationRequest& InChoicePicked)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "RequestServerAdvanceConversation");

	Params::UConversationParticipantComponent_RequestServerAdvanceConversation_Params Parms;

	Parms.InChoicePicked = InChoicePicked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.OnRep_ConversationsActive
// (Final, Native, Protected)
// Parameters:
// int32                              OldConversationsActive                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::OnRep_ConversationsActive(int32 OldConversationsActive)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "OnRep_ConversationsActive");

	Params::UConversationParticipantComponent_OnRep_ConversationsActive_Params Parms;

	Parms.OldConversationsActive = OldConversationsActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.IsInActiveConversation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConversationParticipantComponent::IsInActiveConversation()
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "IsInActiveConversation");

	Params::UConversationParticipantComponent_IsInActiveConversation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.GetParticipantDisplayName
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UConversationParticipantComponent::GetParticipantDisplayName()
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "GetParticipantDisplayName");

	Params::UConversationParticipantComponent_GetParticipantDisplayName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.GetParticipantActor
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ParticipantTag                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UConversationParticipantComponent::GetParticipantActor(struct FGameplayTag& ParticipantTag)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "GetParticipantActor");

	Params::UConversationParticipantComponent_GetParticipantActor_Params Parms;

	Parms.ParticipantTag = ParticipantTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateParticipants
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationParticipants   InParticipants                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientUpdateParticipants(struct FConversationParticipants& InParticipants)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateParticipants");

	Params::UConversationParticipantComponent_ClientUpdateParticipants_Params Parms;

	Parms.InParticipants = InParticipants;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversationTaskChoiceData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationNodeHandle     Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FClientConversationOptionEntryOptionEntry                                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientUpdateConversationTaskChoiceData(const struct FConversationNodeHandle& Handle, struct FClientConversationOptionEntry& OptionEntry)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversationTaskChoiceData");

	Params::UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Params Parms;

	Parms.Handle = Handle;
	Parms.OptionEntry = OptionEntry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversations
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int32                              InConversationsActive                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientUpdateConversations(int32 InConversationsActive)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversations");

	Params::UConversationParticipantComponent_ClientUpdateConversations_Params Parms;

	Parms.InConversationsActive = InConversationsActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversation
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FClientConversationMessagePayloadMessage                                                          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientUpdateConversation(struct FClientConversationMessagePayload& Message)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversation");

	Params::UConversationParticipantComponent_ClientUpdateConversation_Params Parms;

	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientStartConversation
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationParticipants   InParticipants                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientStartConversation(struct FConversationParticipants& InParticipants)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "ClientStartConversation");

	Params::UConversationParticipantComponent_ClientStartConversation_Params Parms;

	Parms.InParticipants = InParticipants;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientExitConversation
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationParticipants   InParticipants                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientExitConversation(struct FConversationParticipants& InParticipants)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "ClientExitConversation");

	Params::UConversationParticipantComponent_ClientExitConversation_Params Parms;

	Parms.InParticipants = InParticipants;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationNodeHandle     Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientExecuteTaskAndSideEffects(const struct FConversationNodeHandle& Handle)
{
	static auto Func = Class->GetFunction("ConversationParticipantComponent", "ClientExecuteTaskAndSideEffects");

	Params::UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationRequirementNode.IsRequirementSatisfied
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EConversationRequirementResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EConversationRequirementResult UConversationRequirementNode::IsRequirementSatisfied(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationRequirementNode", "IsRequirementSatisfied");

	Params::UConversationRequirementNode_IsRequirementSatisfied_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationSideEffectNode.ServerCauseSideEffect
// (BlueprintAuthorityOnly, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UConversationSideEffectNode::ServerCauseSideEffect(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationSideEffectNode", "ServerCauseSideEffect");

	Params::UConversationSideEffectNode_ServerCauseSideEffect_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonConversationRuntime.ConversationSideEffectNode.ClientCauseSideEffect
// (BlueprintCosmetic, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UConversationSideEffectNode::ClientCauseSideEffect(struct FConversationContext& Context)
{
	static auto Func = Class->GetFunction("ConversationSideEffectNode", "ClientCauseSideEffect");

	Params::UConversationSideEffectNode_ClientCauseSideEffect_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
