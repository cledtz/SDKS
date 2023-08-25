#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonConversationRuntime.ConversationNode
// (None)

class UClass* UConversationNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationNode");

	return Clss;
}


// ConversationNode CommonConversationRuntime.Default__ConversationNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationNode* UConversationNode::GetDefaultObj()
{
	static class UConversationNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationNode*>(UConversationNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonConversationRuntime.ConversationNode.GetDebugParticipantColor
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ParticipantID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UConversationNode::GetDebugParticipantColor(const struct FGameplayTag& ParticipantID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationNode", "GetDebugParticipantColor");

	Params::UConversationNode_GetDebugParticipantColor_Params Parms{};

	Parms.ParticipantID = ParticipantID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonConversationRuntime.ConversationSubNode
// (None)

class UClass* UConversationSubNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationSubNode");

	return Clss;
}


// ConversationSubNode CommonConversationRuntime.Default__ConversationSubNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationSubNode* UConversationSubNode::GetDefaultObj()
{
	static class UConversationSubNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationSubNode*>(UConversationSubNode::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonConversationRuntime.ConversationChoiceNode
// (None)

class UClass* UConversationChoiceNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationChoiceNode");

	return Clss;
}


// ConversationChoiceNode CommonConversationRuntime.Default__ConversationChoiceNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationChoiceNode* UConversationChoiceNode::GetDefaultObj()
{
	static class UConversationChoiceNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationChoiceNode*>(UConversationChoiceNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonConversationRuntime.ConversationChoiceNode.FillChoice
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FClientConversationOptionEntryChoiceEntry                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UConversationChoiceNode::FillChoice(struct FConversationContext& Context, struct FClientConversationOptionEntry* ChoiceEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationChoiceNode", "FillChoice");

	Params::UConversationChoiceNode_FillChoice_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ChoiceEntry != nullptr)
		*ChoiceEntry = Parms.ChoiceEntry;

}


// Class CommonConversationRuntime.ConversationContextHelpers
// (None)

class UClass* UConversationContextHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationContextHelpers");

	return Clss;
}


// ConversationContextHelpers CommonConversationRuntime.Default__ConversationContextHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationContextHelpers* UConversationContextHelpers::GetDefaultObj()
{
	static class UConversationContextHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationContextHelpers*>(UConversationContextHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonConversationRuntime.ConversationContextHelpers.ReturnToLastClientChoice
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::ReturnToLastClientChoice(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "ReturnToLastClientChoice");

	Params::UConversationContextHelpers_ReturnToLastClientChoice_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.ReturnToCurrentClientChoice
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::ReturnToCurrentClientChoice(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "ReturnToCurrentClientChoice");

	Params::UConversationContextHelpers_ReturnToCurrentClientChoice_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.ReturnToConversationStart
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::ReturnToConversationStart(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "ReturnToConversationStart");

	Params::UConversationContextHelpers_ReturnToConversationStart_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "PauseConversationAndSendClientChoices");

	Params::UConversationContextHelpers_PauseConversationAndSendClientChoices_Params Parms{};

	Parms.Context = Context;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.MakeConversationParticipant
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UActor*                      ParticipantActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ParticipantTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationContextHelpers::MakeConversationParticipant(struct FConversationContext& Context, class UActor* ParticipantActor, const struct FGameplayTag& ParticipantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "MakeConversationParticipant");

	Params::UConversationContextHelpers_MakeConversationParticipant_Params Parms{};

	Parms.Context = Context;
	Parms.ParticipantActor = ParticipantActor;
	Parms.ParticipantTag = ParticipantTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationNodeHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FConversationNodeHandle UConversationContextHelpers::GetCurrentConversationNodeHandle(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "GetCurrentConversationNodeHandle");

	Params::UConversationContextHelpers_GetCurrentConversationNodeHandle_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipantActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTag                ParticipantTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UConversationContextHelpers::GetConversationParticipantActor(struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "GetConversationParticipantActor");

	Params::UConversationContextHelpers_GetConversationParticipantActor_Params Parms{};

	Parms.Context = Context;
	Parms.ParticipantTag = ParticipantTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "GetConversationParticipant");

	Params::UConversationContextHelpers_GetConversationParticipant_Params Parms{};

	Parms.Context = Context;
	Parms.ParticipantTag = ParticipantTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.GetConversationInstance
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UConversationInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationInstance* UConversationContextHelpers::GetConversationInstance(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "GetConversationInstance");

	Params::UConversationContextHelpers_GetConversationInstance_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.FindConversationComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConversationParticipantComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationParticipantComponent* UConversationContextHelpers::FindConversationComponent(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "FindConversationComponent");

	Params::UConversationContextHelpers_FindConversationComponent_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.CanConversationContinue
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationTaskResult     ConversationTasResult                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConversationContextHelpers::CanConversationContinue(struct FConversationTaskResult& ConversationTasResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "CanConversationContinue");

	Params::UConversationContextHelpers_CanConversationContinue_Params Parms{};

	Parms.ConversationTasResult = ConversationTasResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "AdvanceConversationWithChoice");

	Params::UConversationContextHelpers_AdvanceConversationWithChoice_Params Parms{};

	Parms.Context = Context;
	Parms.Choice = Choice;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.AdvanceConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::AdvanceConversation(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "AdvanceConversation");

	Params::UConversationContextHelpers_AdvanceConversation_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationContextHelpers.AbortConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationTaskResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FConversationTaskResult UConversationContextHelpers::AbortConversation(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationContextHelpers", "AbortConversation");

	Params::UConversationContextHelpers_AbortConversation_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonConversationRuntime.ConversationDatabase
// (None)

class UClass* UConversationDatabase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationDatabase");

	return Clss;
}


// ConversationDatabase CommonConversationRuntime.Default__ConversationDatabase
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationDatabase* UConversationDatabase::GetDefaultObj()
{
	static class UConversationDatabase* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationDatabase*>(UConversationDatabase::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonConversationRuntime.ConversationNodeWithLinks
// (None)

class UClass* UConversationNodeWithLinks::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationNodeWithLinks");

	return Clss;
}


// ConversationNodeWithLinks CommonConversationRuntime.Default__ConversationNodeWithLinks
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationNodeWithLinks* UConversationNodeWithLinks::GetDefaultObj()
{
	static class UConversationNodeWithLinks* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationNodeWithLinks*>(UConversationNodeWithLinks::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonConversationRuntime.ConversationEntryPointNode
// (None)

class UClass* UConversationEntryPointNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationEntryPointNode");

	return Clss;
}


// ConversationEntryPointNode CommonConversationRuntime.Default__ConversationEntryPointNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationEntryPointNode* UConversationEntryPointNode::GetDefaultObj()
{
	static class UConversationEntryPointNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationEntryPointNode*>(UConversationEntryPointNode::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonConversationRuntime.ConversationInstance
// (None)

class UClass* UConversationInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationInstance");

	return Clss;
}


// ConversationInstance CommonConversationRuntime.Default__ConversationInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationInstance* UConversationInstance::GetDefaultObj()
{
	static class UConversationInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationInstance*>(UConversationInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonConversationRuntime.ConversationLibrary
// (None)

class UClass* UConversationLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationLibrary");

	return Clss;
}


// ConversationLibrary CommonConversationRuntime.Default__ConversationLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationLibrary* UConversationLibrary::GetDefaultObj()
{
	static class UConversationLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationLibrary*>(UConversationLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonConversationRuntime.ConversationLibrary.StartConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ConversationEntryTag                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InstigatorTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                TargetTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UConversationInstance>ConversationInstanceClass                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConversationInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConversationInstance* UConversationLibrary::StartConversation(const struct FGameplayTag& ConversationEntryTag, class UActor* Instigator, const struct FGameplayTag& InstigatorTag, class UActor* Target, const struct FGameplayTag& TargetTag, TSubclassOf<class UConversationInstance> ConversationInstanceClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationLibrary", "StartConversation");

	Params::UConversationLibrary_StartConversation_Params Parms{};

	Parms.ConversationEntryTag = ConversationEntryTag;
	Parms.Instigator = Instigator;
	Parms.InstigatorTag = InstigatorTag;
	Parms.Target = Target;
	Parms.TargetTag = TargetTag;
	Parms.ConversationInstanceClass = ConversationInstanceClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonConversationRuntime.ConversationTaskNode
// (None)

class UClass* UConversationTaskNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationTaskNode");

	return Clss;
}


// ConversationTaskNode CommonConversationRuntime.Default__ConversationTaskNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationTaskNode* UConversationTaskNode::GetDefaultObj()
{
	static class UConversationTaskNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationTaskNode*>(UConversationTaskNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonConversationRuntime.ConversationTaskNode.IsRequirementSatisfied
// (BlueprintAuthorityOnly, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EConversationRequirementResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EConversationRequirementResult UConversationTaskNode::IsRequirementSatisfied(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationTaskNode", "IsRequirementSatisfied");

	Params::UConversationTaskNode_IsRequirementSatisfied_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationTaskNode.GetNodeBodyColor
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                BodyColor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConversationTaskNode::GetNodeBodyColor(struct FLinearColor* BodyColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationTaskNode", "GetNodeBodyColor");

	Params::UConversationTaskNode_GetNodeBodyColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationTaskNode", "GatherStaticExtraData");

	Params::UConversationTaskNode_GatherStaticExtraData_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationTaskNode", "ExecuteTaskNode");

	Params::UConversationTaskNode_ExecuteTaskNode_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationTaskNode.ExecuteClientEffects
// (BlueprintCosmetic, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UConversationTaskNode::ExecuteClientEffects(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationTaskNode", "ExecuteClientEffects");

	Params::UConversationTaskNode_ExecuteClientEffects_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonConversationRuntime.ConversationLinkNode
// (None)

class UClass* UConversationLinkNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationLinkNode");

	return Clss;
}


// ConversationLinkNode CommonConversationRuntime.Default__ConversationLinkNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationLinkNode* UConversationLinkNode::GetDefaultObj()
{
	static class UConversationLinkNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationLinkNode*>(UConversationLinkNode::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonConversationRuntime.ConversationParticipantComponent
// (None)

class UClass* UConversationParticipantComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationParticipantComponent");

	return Clss;
}


// ConversationParticipantComponent CommonConversationRuntime.Default__ConversationParticipantComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationParticipantComponent* UConversationParticipantComponent::GetDefaultObj()
{
	static class UConversationParticipantComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationParticipantComponent*>(UConversationParticipantComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonConversationRuntime.ConversationParticipantComponent.ServerAdvanceConversation
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FAdvanceConversationRequest InChoicePicked                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ServerAdvanceConversation(struct FAdvanceConversationRequest& InChoicePicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ServerAdvanceConversation");

	Params::UConversationParticipantComponent_ServerAdvanceConversation_Params Parms{};

	Parms.InChoicePicked = InChoicePicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAdvanceConversationRequest InChoicePicked                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::RequestServerAdvanceConversation(struct FAdvanceConversationRequest& InChoicePicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "RequestServerAdvanceConversation");

	Params::UConversationParticipantComponent_RequestServerAdvanceConversation_Params Parms{};

	Parms.InChoicePicked = InChoicePicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.OnRep_ConversationsActive
// (Final, Native, Protected)
// Parameters:
// int32                              OldConversationsActive                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::OnRep_ConversationsActive(int32 OldConversationsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "OnRep_ConversationsActive");

	Params::UConversationParticipantComponent_OnRep_ConversationsActive_Params Parms{};

	Parms.OldConversationsActive = OldConversationsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.IsInActiveConversation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConversationParticipantComponent::IsInActiveConversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "IsInActiveConversation");

	Params::UConversationParticipantComponent_IsInActiveConversation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.GetParticipantDisplayName
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UConversationParticipantComponent::GetParticipantDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "GetParticipantDisplayName");

	Params::UConversationParticipantComponent_GetParticipantDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.GetParticipantActor
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ParticipantTag                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UConversationParticipantComponent::GetParticipantActor(struct FGameplayTag& ParticipantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "GetParticipantActor");

	Params::UConversationParticipantComponent_GetParticipantActor_Params Parms{};

	Parms.ParticipantTag = ParticipantTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateParticipants
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationParticipants   InParticipants                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientUpdateParticipants(struct FConversationParticipants& InParticipants)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateParticipants");

	Params::UConversationParticipantComponent_ClientUpdateParticipants_Params Parms{};

	Parms.InParticipants = InParticipants;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversationTaskChoiceData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationNodeHandle     Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FClientConversationOptionEntryOptionEntry                                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientUpdateConversationTaskChoiceData(const struct FConversationNodeHandle& Handle, struct FClientConversationOptionEntry& OptionEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversationTaskChoiceData");

	Params::UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Params Parms{};

	Parms.Handle = Handle;
	Parms.OptionEntry = OptionEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversations
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int32                              InConversationsActive                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientUpdateConversations(int32 InConversationsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversations");

	Params::UConversationParticipantComponent_ClientUpdateConversations_Params Parms{};

	Parms.InConversationsActive = InConversationsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversation
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FClientConversationMessagePayloadMessage                                                          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientUpdateConversation(struct FClientConversationMessagePayload& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversation");

	Params::UConversationParticipantComponent_ClientUpdateConversation_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientStartConversation
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationParticipants   InParticipants                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientStartConversation(struct FConversationParticipants& InParticipants)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientStartConversation");

	Params::UConversationParticipantComponent_ClientStartConversation_Params Parms{};

	Parms.InParticipants = InParticipants;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientExitConversation
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationParticipants   InParticipants                                                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientExitConversation(struct FConversationParticipants& InParticipants)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientExitConversation");

	Params::UConversationParticipantComponent_ClientExitConversation_Params Parms{};

	Parms.InParticipants = InParticipants;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FConversationNodeHandle     Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UConversationParticipantComponent::ClientExecuteTaskAndSideEffects(const struct FConversationNodeHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientExecuteTaskAndSideEffects");

	Params::UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonConversationRuntime.ConversationRegistry
// (None)

class UClass* UConversationRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationRegistry");

	return Clss;
}


// ConversationRegistry CommonConversationRuntime.Default__ConversationRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationRegistry* UConversationRegistry::GetDefaultObj()
{
	static class UConversationRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationRegistry*>(UConversationRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonConversationRuntime.ConversationRequirementNode
// (None)

class UClass* UConversationRequirementNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationRequirementNode");

	return Clss;
}


// ConversationRequirementNode CommonConversationRuntime.Default__ConversationRequirementNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationRequirementNode* UConversationRequirementNode::GetDefaultObj()
{
	static class UConversationRequirementNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationRequirementNode*>(UConversationRequirementNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonConversationRuntime.ConversationRequirementNode.IsRequirementSatisfied
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EConversationRequirementResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EConversationRequirementResult UConversationRequirementNode::IsRequirementSatisfied(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationRequirementNode", "IsRequirementSatisfied");

	Params::UConversationRequirementNode_IsRequirementSatisfied_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonConversationRuntime.ConversationSettings
// (None)

class UClass* UConversationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationSettings");

	return Clss;
}


// ConversationSettings CommonConversationRuntime.Default__ConversationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationSettings* UConversationSettings::GetDefaultObj()
{
	static class UConversationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationSettings*>(UConversationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonConversationRuntime.ConversationSideEffectNode
// (None)

class UClass* UConversationSideEffectNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConversationSideEffectNode");

	return Clss;
}


// ConversationSideEffectNode CommonConversationRuntime.Default__ConversationSideEffectNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UConversationSideEffectNode* UConversationSideEffectNode::GetDefaultObj()
{
	static class UConversationSideEffectNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UConversationSideEffectNode*>(UConversationSideEffectNode::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonConversationRuntime.ConversationSideEffectNode.ServerCauseSideEffect
// (BlueprintAuthorityOnly, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UConversationSideEffectNode::ServerCauseSideEffect(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationSideEffectNode", "ServerCauseSideEffect");

	Params::UConversationSideEffectNode_ServerCauseSideEffect_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonConversationRuntime.ConversationSideEffectNode.ClientCauseSideEffect
// (BlueprintCosmetic, Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConversationContext        Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UConversationSideEffectNode::ClientCauseSideEffect(struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConversationSideEffectNode", "ClientCauseSideEffect");

	Params::UConversationSideEffectNode_ClientCauseSideEffect_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


