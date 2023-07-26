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


// Function SoundLibrary.SoundLibraryContext.Play
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryPlayResult     OutResults                                                       (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryContext::Play(class USoundBase* Sound, class AActor* Owner, struct FSoundLibraryPlayResult& OutResults)
{
	static auto Func = Class->GetFunction("SoundLibraryContext", "Play");

	Params::USoundLibraryContext_Play_Params Parms;

	Parms.Sound = Sound;
	Parms.Owner = Owner;
	Parms.OutResults = OutResults;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryContext.OnRemovedFromActor
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryContext::OnRemovedFromActor(class AActor* InActor)
{
	static auto Func = Class->GetFunction("SoundLibraryContext", "OnRemovedFromActor");

	Params::USoundLibraryContext_OnRemovedFromActor_Params Parms;

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibraryContext.OnAddedToActor
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryContext::OnAddedToActor(class AActor* InActor)
{
	static auto Func = Class->GetFunction("SoundLibraryContext", "OnAddedToActor");

	Params::USoundLibraryContext_OnAddedToActor_Params Parms;

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibraryContext.GatherActorTargets
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryContext::GatherActorTargets(TArray<class AActor*>& OutActors)
{
	static auto Func = Class->GetFunction("SoundLibraryContext", "GatherActorTargets");

	Params::USoundLibraryContext_GatherActorTargets_Params Parms;

	Parms.OutActors = OutActors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryContext.CreateEventName
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                OutEventName                                                     (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryContext::CreateEventName(struct FGameplayTag& OutEventName)
{
	static auto Func = Class->GetFunction("SoundLibraryContext", "CreateEventName");

	Params::USoundLibraryContext_CreateEventName_Params Parms;

	Parms.OutEventName = OutEventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryAnimContext.ConfigureContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      OwningActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           InAnimation                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryAnimContextSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USoundLibraryAnimContext::ConfigureContext(class AActor* OwningActor, class UAnimSequenceBase* InAnimation, struct FSoundLibraryAnimContextSettings& InSettings)
{
	static auto Func = Class->GetFunction("SoundLibraryAnimContext", "ConfigureContext");

	Params::USoundLibraryAnimContext_ConfigureContext_Params Parms;

	Parms.OwningActor = OwningActor;
	Parms.InAnimation = InAnimation;
	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrary.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPriority                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrary::SetPriority(int32 InPriority)
{
	static auto Func = Class->GetFunction("SoundLibrary", "SetPriority");

	Params::USoundLibrary_SetPriority_Params Parms;

	Parms.InPriority = InPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrary.SetChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InTag                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrary::SetChannel(const struct FGameplayTag& InTag)
{
	static auto Func = Class->GetFunction("SoundLibrary", "SetChannel");

	Params::USoundLibrary_SetChannel_Params Parms;

	Parms.InTag = InTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrary.FindSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                InTag                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundBase* USoundLibrary::FindSound(const struct FGameplayTag& InTag)
{
	static auto Func = Class->GetFunction("SoundLibrary", "FindSound");

	Params::USoundLibrary_FindSound_Params Parms;

	Parms.InTag = InTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibrary.AddSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InTag                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  InSound                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrary::AddSound(const struct FGameplayTag& InTag, class USoundBase* InSound)
{
	static auto Func = Class->GetFunction("SoundLibrary", "AddSound");

	Params::USoundLibrary_AddSound_Params Parms;

	Parms.InTag = InTag;
	Parms.InSound = InSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibraryComponent.StopEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InEventName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryComponent::StopEvent(const struct FGameplayTag& InEventName)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "StopEvent");

	Params::USoundLibraryComponent_StopEvent_Params Parms;

	Parms.InEventName = InEventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryComponent.RemoveLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundLibrary*               InLibrary                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryComponent::RemoveLibrary(class USoundLibrary* InLibrary)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "RemoveLibrary");

	Params::USoundLibraryComponent_RemoveLibrary_Params Parms;

	Parms.InLibrary = InLibrary;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibraryComponent.RemoveLibraries
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USoundLibrary*>       InLibraries                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundLibraryComponent::RemoveLibraries(TArray<class USoundLibrary*>* InLibraries)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "RemoveLibraries");

	Params::USoundLibraryComponent_RemoveLibraries_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InLibraries != nullptr)
		*InLibraries = Parms.InLibraries;

}


// Function SoundLibrary.SoundLibraryComponent.PlayEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InEventName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryPlayResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FSoundLibraryPlayResult USoundLibraryComponent::PlayEvent(const struct FGameplayTag& InEventName)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "PlayEvent");

	Params::USoundLibraryComponent_PlayEvent_Params Parms;

	Parms.InEventName = InEventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryComponent.OnSoundStoppedBP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InEventName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*             InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHandledInBlueprint                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryComponent::OnSoundStoppedBP(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, bool* bHandledInBlueprint)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "OnSoundStoppedBP");

	Params::USoundLibraryComponent_OnSoundStoppedBP_Params Parms;

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (bHandledInBlueprint != nullptr)
		*bHandledInBlueprint = Parms.bHandledInBlueprint;

}


// Function SoundLibrary.SoundLibraryComponent.OnSoundStopped
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InEventName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*             InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopped                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryComponent::OnSoundStopped(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, bool* bStopped)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "OnSoundStopped");

	Params::USoundLibraryComponent_OnSoundStopped_Params Parms;

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bStopped != nullptr)
		*bStopped = Parms.bStopped;

}


// Function SoundLibrary.SoundLibraryComponent.OnSoundPlayedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InEventName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*             InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryComponent::OnSoundPlayedBP(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "OnSoundPlayedBP");

	Params::USoundLibraryComponent_OnSoundPlayedBP_Params Parms;

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoundLibrary.SoundLibraryComponent.OnSoundPlayed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InEventName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*             InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryComponent::OnSoundPlayed(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "OnSoundPlayed");

	Params::USoundLibraryComponent_OnSoundPlayed_Params Parms;

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibraryComponent.IsEventActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                InEventName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryComponent::IsEventActive(const struct FGameplayTag& InEventName)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "IsEventActive");

	Params::USoundLibraryComponent_IsEventActive_Params Parms;

	Parms.InEventName = InEventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryComponent.GetContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundLibraryContext*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundLibraryContext* USoundLibraryComponent::GetContext()
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "GetContext");

	Params::USoundLibraryComponent_GetContext_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryComponent.AddLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundLibrary*               InLibrary                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryComponent::AddLibrary(class USoundLibrary* InLibrary)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "AddLibrary");

	Params::USoundLibraryComponent_AddLibrary_Params Parms;

	Parms.InLibrary = InLibrary;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibraryComponent.AddLibraries
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USoundLibrary*>       InLibraries                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundLibraryComponent::AddLibraries(TArray<class USoundLibrary*>* InLibraries)
{
	static auto Func = Class->GetFunction("SoundLibraryComponent", "AddLibraries");

	Params::USoundLibraryComponent_AddLibraries_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InLibraries != nullptr)
		*InLibraries = Parms.InLibraries;

}


// Function SoundLibrary.SoundLibrarySimpleContext.ConfigureContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      OwningActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibrarySimpleContextSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void USoundLibrarySimpleContext::ConfigureContext(class AActor* OwningActor, struct FSoundLibrarySimpleContextSettings& InSettings)
{
	static auto Func = Class->GetFunction("SoundLibrarySimpleContext", "ConfigureContext");

	Params::USoundLibrarySimpleContext_ConfigureContext_Params Parms;

	Parms.OwningActor = OwningActor;
	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundLibrary*               Library                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::RemoveLibrary(class AActor* Actor, class USoundLibrary* Library)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibrary");

	Params::USoundLibrarySubsystem_RemoveLibrary_Params Parms;

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrariesFromCollections
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       CollectionTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::RemoveLibrariesFromCollections(class AActor* Actor, struct FGameplayTagContainer& CollectionTags)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibrariesFromCollections");

	Params::USoundLibrarySubsystem_RemoveLibrariesFromCollections_Params Parms;

	Parms.Actor = Actor;
	Parms.CollectionTags = CollectionTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibraries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USoundLibrary*>       Libraries                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::RemoveLibraries(class AActor* Actor, const TArray<class USoundLibrary*>& Libraries)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibraries");

	Params::USoundLibrarySubsystem_RemoveLibraries_Params Parms;

	Parms.Actor = Actor;
	Parms.Libraries = Libraries;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundLibraryContext>ContextClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibrarySubsystem::RemoveContext(class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveContext");

	Params::USoundLibrarySubsystem_RemoveContext_Params Parms;

	Parms.Actor = Actor;
	Parms.ContextClass = ContextClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibrarySubsystem.PlaySoundSimple
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      OwningActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibrarySimpleContextSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FSoundLibraryPlayResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FSoundLibraryPlayResult USoundLibrarySubsystem::PlaySoundSimple(class AActor* OwningActor, struct FSoundLibrarySimpleContextSettings& InSettings)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "PlaySoundSimple");

	Params::USoundLibrarySubsystem_PlaySoundSimple_Params Parms;

	Parms.OwningActor = OwningActor;
	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibrarySubsystem.PlaySound
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USoundLibraryContext*        Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryPlayResult     OutResults                                                       (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::PlaySound(class USoundLibraryContext* Context, struct FSoundLibraryPlayResult* OutResults)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "PlaySound");

	Params::USoundLibrarySubsystem_PlaySound_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutResults != nullptr)
		*OutResults = Parms.OutResults;

}


// Function SoundLibrary.SoundLibrarySubsystem.GetContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundLibraryContext>ContextClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundLibraryContext*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundLibraryContext* USoundLibrarySubsystem::GetContext(class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "GetContext");

	Params::USoundLibrarySubsystem_GetContext_Params Parms;

	Parms.Actor = Actor;
	Parms.ContextClass = ContextClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::EnableEventsForActor(class AActor* Actor)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "EnableEventsForActor");

	Params::USoundLibrarySubsystem_EnableEventsForActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::DisableEventsForActor(class AActor* Actor)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "DisableEventsForActor");

	Params::USoundLibrarySubsystem_DisableEventsForActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundLibrary*               Library                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::AddLibrary(class AActor* Actor, class USoundLibrary* Library)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibrary");

	Params::USoundLibrarySubsystem_AddLibrary_Params Parms;

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddLibrariesFromCollections
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       CollectionTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::AddLibrariesFromCollections(class AActor* Actor, struct FGameplayTagContainer& CollectionTags)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibrariesFromCollections");

	Params::USoundLibrarySubsystem_AddLibrariesFromCollections_Params Parms;

	Parms.Actor = Actor;
	Parms.CollectionTags = CollectionTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddLibraries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USoundLibrary*>       Libraries                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::AddLibraries(class AActor* Actor, const TArray<class USoundLibrary*>& Libraries)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibraries");

	Params::USoundLibrarySubsystem_AddLibraries_Params Parms;

	Parms.Actor = Actor;
	Parms.Libraries = Libraries;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundLibraryContext>ContextClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundLibraryContext*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundLibraryContext* USoundLibrarySubsystem::AddContext(class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass)
{
	static auto Func = Class->GetFunction("SoundLibrarySubsystem", "AddContext");

	Params::USoundLibrarySubsystem_AddContext_Params Parms;

	Parms.Actor = Actor;
	Parms.ContextClass = ContextClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryTagHelperFunctions.MakeSoundLibraryTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryTag            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSoundLibraryTag USoundLibraryTagHelperFunctions::MakeSoundLibraryTag(struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("SoundLibraryTagHelperFunctions", "MakeSoundLibraryTag");

	Params::USoundLibraryTagHelperFunctions_MakeSoundLibraryTag_Params Parms;

	Parms.Tag = Tag;

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
