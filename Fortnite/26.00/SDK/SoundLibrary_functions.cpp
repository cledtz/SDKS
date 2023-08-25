#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SoundLibrary.SoundLibraryContext
// (None)

class UClass* USoundLibraryContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryContext");

	return Clss;
}


// SoundLibraryContext SoundLibrary.Default__SoundLibraryContext
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryContext* USoundLibraryContext::GetDefaultObj()
{
	static class USoundLibraryContext* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryContext*>(USoundLibraryContext::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SoundLibraryContext.Play
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSoundLibraryContextEventInputInEventData                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UAudioComponent*>     OutComponents                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryContext::Play(struct FSoundLibraryContextEventInput& InEventData, TArray<class UAudioComponent*>* OutComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryContext", "Play");

	Params::USoundLibraryContext_Play_Params Parms{};

	Parms.InEventData = InEventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutComponents != nullptr)
		*OutComponents = Parms.OutComponents;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryContext.OnRemovedFromActor
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryContext::OnRemovedFromActor(class UActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryContext", "OnRemovedFromActor");

	Params::USoundLibraryContext_OnRemovedFromActor_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibraryContext.OnAddedToActor
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryContext::OnAddedToActor(class UActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryContext", "OnAddedToActor");

	Params::USoundLibraryContext_OnAddedToActor_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibraryContext.GatherActorTargets
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class UActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryContext::GatherActorTargets(TArray<class UActor*>& OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryContext", "GatherActorTargets");

	Params::USoundLibraryContext_GatherActorTargets_Params Parms{};

	Parms.OutActors = OutActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryContext.CreateEventName
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                OutEventName                                                     (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryContext::CreateEventName(struct FGameplayTag& OutEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryContext", "CreateEventName");

	Params::USoundLibraryContext_CreateEventName_Params Parms{};

	Parms.OutEventName = OutEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SoundLibrary.SoundLibraryAnimContext
// (None)

class UClass* USoundLibraryAnimContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryAnimContext");

	return Clss;
}


// SoundLibraryAnimContext SoundLibrary.Default__SoundLibraryAnimContext
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryAnimContext* USoundLibraryAnimContext::GetDefaultObj()
{
	static class USoundLibraryAnimContext* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryAnimContext*>(USoundLibraryAnimContext::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SoundLibraryAnimContext.ConfigureContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      OwningActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           InAnimation                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryAnimContextSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USoundLibraryAnimContext::ConfigureContext(class UActor* OwningActor, class UAnimSequenceBase* InAnimation, struct FSoundLibraryAnimContextSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryAnimContext", "ConfigureContext");

	Params::USoundLibraryAnimContext_ConfigureContext_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.InAnimation = InAnimation;
	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SoundLibrary.SoundLibraryAnimNotifyHelper
// (None)

class UClass* USoundLibraryAnimNotifyHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryAnimNotifyHelper");

	return Clss;
}


// SoundLibraryAnimNotifyHelper SoundLibrary.Default__SoundLibraryAnimNotifyHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryAnimNotifyHelper* USoundLibraryAnimNotifyHelper::GetDefaultObj()
{
	static class USoundLibraryAnimNotifyHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryAnimNotifyHelper*>(USoundLibraryAnimNotifyHelper::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.AnimNotify_SoundLibrary
// (None)

class UClass* UAnimNotify_SoundLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_SoundLibrary");

	return Clss;
}


// AnimNotify_SoundLibrary SoundLibrary.Default__AnimNotify_SoundLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_SoundLibrary* UAnimNotify_SoundLibrary::GetDefaultObj()
{
	static class UAnimNotify_SoundLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_SoundLibrary*>(UAnimNotify_SoundLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.AnimNotifyState_SoundLibrary
// (None)

class UClass* UAnimNotifyState_SoundLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_SoundLibrary");

	return Clss;
}


// AnimNotifyState_SoundLibrary SoundLibrary.Default__AnimNotifyState_SoundLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_SoundLibrary* UAnimNotifyState_SoundLibrary::GetDefaultObj()
{
	static class UAnimNotifyState_SoundLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_SoundLibrary*>(UAnimNotifyState_SoundLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.GameFeatureAction_AddSoundLibraryCollection
// (None)

class UClass* UGameFeatureAction_AddSoundLibraryCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_AddSoundLibraryCollection");

	return Clss;
}


// GameFeatureAction_AddSoundLibraryCollection SoundLibrary.Default__GameFeatureAction_AddSoundLibraryCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_AddSoundLibraryCollection* UGameFeatureAction_AddSoundLibraryCollection::GetDefaultObj()
{
	static class UGameFeatureAction_AddSoundLibraryCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_AddSoundLibraryCollection*>(UGameFeatureAction_AddSoundLibraryCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.SoundLibrary
// (None)

class UClass* USoundLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibrary");

	return Clss;
}


// SoundLibrary SoundLibrary.Default__SoundLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibrary* USoundLibrary::GetDefaultObj()
{
	static class USoundLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibrary*>(USoundLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SoundLibrary.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPriority                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrary::SetPriority(int32 InPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrary", "SetPriority");

	Params::USoundLibrary_SetPriority_Params Parms{};

	Parms.InPriority = InPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrary.SetChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InTag                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrary::SetChannel(const struct FGameplayTag& InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrary", "SetChannel");

	Params::USoundLibrary_SetChannel_Params Parms{};

	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrary.FindSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                InTag                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundBase* USoundLibrary::FindSound(const struct FGameplayTag& InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrary", "FindSound");

	Params::USoundLibrary_FindSound_Params Parms{};

	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibrary.AddSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InTag                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  InSound                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrary::AddSound(const struct FGameplayTag& InTag, class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrary", "AddSound");

	Params::USoundLibrary_AddSound_Params Parms{};

	Parms.InTag = InTag;
	Parms.InSound = InSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SoundLibrary.SoundLibraryComponent
// (None)

class UClass* USoundLibraryComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryComponent");

	return Clss;
}


// SoundLibraryComponent SoundLibrary.Default__SoundLibraryComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryComponent* USoundLibraryComponent::GetDefaultObj()
{
	static class USoundLibraryComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryComponent*>(USoundLibraryComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SoundLibraryComponent.StopEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InEventName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryComponent::StopEvent(const struct FGameplayTag& InEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "StopEvent");

	Params::USoundLibraryComponent_StopEvent_Params Parms{};

	Parms.InEventName = InEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryComponent.RemoveLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundLibrary*               InLibrary                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryComponent::RemoveLibrary(class USoundLibrary* InLibrary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "RemoveLibrary");

	Params::USoundLibraryComponent_RemoveLibrary_Params Parms{};

	Parms.InLibrary = InLibrary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibraryComponent.RemoveLibraries
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USoundLibrary*>       InLibraries                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundLibraryComponent::RemoveLibraries(TArray<class USoundLibrary*>* InLibraries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "RemoveLibraries");

	Params::USoundLibraryComponent_RemoveLibraries_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "PlayEvent");

	Params::USoundLibraryComponent_PlayEvent_Params Parms{};

	Parms.InEventName = InEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "OnSoundStoppedBP");

	Params::USoundLibraryComponent_OnSoundStoppedBP_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "OnSoundStopped");

	Params::USoundLibraryComponent_OnSoundStopped_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "OnSoundPlayedBP");

	Params::USoundLibraryComponent_OnSoundPlayedBP_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "OnSoundPlayed");

	Params::USoundLibraryComponent_OnSoundPlayed_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibraryComponent.IsEventActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                InEventName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibraryComponent::IsEventActive(const struct FGameplayTag& InEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "IsEventActive");

	Params::USoundLibraryComponent_IsEventActive_Params Parms{};

	Parms.InEventName = InEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryComponent.GetContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundLibraryContext*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundLibraryContext* USoundLibraryComponent::GetContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "GetContext");

	Params::USoundLibraryComponent_GetContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibraryComponent.AddLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundLibrary*               InLibrary                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibraryComponent::AddLibrary(class USoundLibrary* InLibrary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "AddLibrary");

	Params::USoundLibraryComponent_AddLibrary_Params Parms{};

	Parms.InLibrary = InLibrary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibraryComponent.AddLibraries
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USoundLibrary*>       InLibraries                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundLibraryComponent::AddLibraries(TArray<class USoundLibrary*>* InLibraries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryComponent", "AddLibraries");

	Params::USoundLibraryComponent_AddLibraries_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLibraries != nullptr)
		*InLibraries = Parms.InLibraries;

}


// Class SoundLibrary.SoundLibraryProviderInterface
// (None)

class UClass* USoundLibraryProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryProviderInterface");

	return Clss;
}


// SoundLibraryProviderInterface SoundLibrary.Default__SoundLibraryProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryProviderInterface* USoundLibraryProviderInterface::GetDefaultObj()
{
	static class USoundLibraryProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryProviderInterface*>(USoundLibraryProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.SoundLibraryCollection
// (None)

class UClass* USoundLibraryCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryCollection");

	return Clss;
}


// SoundLibraryCollection SoundLibrary.Default__SoundLibraryCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryCollection* USoundLibraryCollection::GetDefaultObj()
{
	static class USoundLibraryCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryCollection*>(USoundLibraryCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.SoundLibrarySettings
// (None)

class UClass* USoundLibrarySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibrarySettings");

	return Clss;
}


// SoundLibrarySettings SoundLibrary.Default__SoundLibrarySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibrarySettings* USoundLibrarySettings::GetDefaultObj()
{
	static class USoundLibrarySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibrarySettings*>(USoundLibrarySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundLibrary.SoundLibrarySimpleContext
// (None)

class UClass* USoundLibrarySimpleContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibrarySimpleContext");

	return Clss;
}


// SoundLibrarySimpleContext SoundLibrary.Default__SoundLibrarySimpleContext
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibrarySimpleContext* USoundLibrarySimpleContext::GetDefaultObj()
{
	static class USoundLibrarySimpleContext* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibrarySimpleContext*>(USoundLibrarySimpleContext::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SoundLibrarySimpleContext.ConfigureContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      OwningActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibrarySimpleContextSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void USoundLibrarySimpleContext::ConfigureContext(class UActor* OwningActor, struct FSoundLibrarySimpleContextSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySimpleContext", "ConfigureContext");

	Params::USoundLibrarySimpleContext_ConfigureContext_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SoundLibrary.SoundLibrarySubsystem
// (None)

class UClass* USoundLibrarySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibrarySubsystem");

	return Clss;
}


// SoundLibrarySubsystem SoundLibrary.Default__SoundLibrarySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibrarySubsystem* USoundLibrarySubsystem::GetDefaultObj()
{
	static class USoundLibrarySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibrarySubsystem*>(USoundLibrarySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundLibrary*               Library                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::RemoveLibrary(class UActor* Actor, class USoundLibrary* Library)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibrary");

	Params::USoundLibrarySubsystem_RemoveLibrary_Params Parms{};

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrariesFromCollections
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       CollectionTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::RemoveLibrariesFromCollections(class UActor* Actor, struct FGameplayTagContainer& CollectionTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibrariesFromCollections");

	Params::USoundLibrarySubsystem_RemoveLibrariesFromCollections_Params Parms{};

	Parms.Actor = Actor;
	Parms.CollectionTags = CollectionTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibraries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USoundLibrary*>       Libraries                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::RemoveLibraries(class UActor* Actor, const TArray<class USoundLibrary*>& Libraries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveLibraries");

	Params::USoundLibrarySubsystem_RemoveLibraries_Params Parms{};

	Parms.Actor = Actor;
	Parms.Libraries = Libraries;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.RemoveContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundLibraryContext>ContextClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundLibrarySubsystem::RemoveContext(class UActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "RemoveContext");

	Params::USoundLibrarySubsystem_RemoveContext_Params Parms{};

	Parms.Actor = Actor;
	Parms.ContextClass = ContextClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibrarySubsystem.PlaySoundSimple
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      OwningActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibrarySimpleContextSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FSoundLibraryPlayResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FSoundLibraryPlayResult USoundLibrarySubsystem::PlaySoundSimple(class UActor* OwningActor, struct FSoundLibrarySimpleContextSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "PlaySoundSimple");

	Params::USoundLibrarySubsystem_PlaySoundSimple_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibrarySubsystem.PlaySound
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USoundLibraryContext*        Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryPlayResult     OutResults                                                       (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::PlaySound(class USoundLibraryContext* Context, struct FSoundLibraryPlayResult* OutResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "PlaySound");

	Params::USoundLibrarySubsystem_PlaySound_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResults != nullptr)
		*OutResults = Parms.OutResults;

}


// Function SoundLibrary.SoundLibrarySubsystem.GetContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundLibraryContext>ContextClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundLibraryContext*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundLibraryContext* USoundLibrarySubsystem::GetContext(class UActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "GetContext");

	Params::USoundLibrarySubsystem_GetContext_Params Parms{};

	Parms.Actor = Actor;
	Parms.ContextClass = ContextClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::EnableEventsForActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "EnableEventsForActor");

	Params::USoundLibrarySubsystem_EnableEventsForActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::DisableEventsForActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "DisableEventsForActor");

	Params::USoundLibrarySubsystem_DisableEventsForActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundLibrary*               Library                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::AddLibrary(class UActor* Actor, class USoundLibrary* Library)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibrary");

	Params::USoundLibrarySubsystem_AddLibrary_Params Parms{};

	Parms.Actor = Actor;
	Parms.Library = Library;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddLibrariesFromCollections
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       CollectionTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::AddLibrariesFromCollections(class UActor* Actor, struct FGameplayTagContainer& CollectionTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibrariesFromCollections");

	Params::USoundLibrarySubsystem_AddLibrariesFromCollections_Params Parms{};

	Parms.Actor = Actor;
	Parms.CollectionTags = CollectionTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddLibraries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USoundLibrary*>       Libraries                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundLibrarySubsystem::AddLibraries(class UActor* Actor, const TArray<class USoundLibrary*>& Libraries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "AddLibraries");

	Params::USoundLibrarySubsystem_AddLibraries_Params Parms{};

	Parms.Actor = Actor;
	Parms.Libraries = Libraries;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SoundLibrary.SoundLibrarySubsystem.AddContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundLibraryContext>ContextClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundLibraryContext*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundLibraryContext* USoundLibrarySubsystem::AddContext(class UActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibrarySubsystem", "AddContext");

	Params::USoundLibrarySubsystem_AddContext_Params Parms{};

	Parms.Actor = Actor;
	Parms.ContextClass = ContextClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SoundLibrary.SoundLibraryTagHelperFunctions
// (None)

class UClass* USoundLibraryTagHelperFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundLibraryTagHelperFunctions");

	return Clss;
}


// SoundLibraryTagHelperFunctions SoundLibrary.Default__SoundLibraryTagHelperFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundLibraryTagHelperFunctions* USoundLibraryTagHelperFunctions::GetDefaultObj()
{
	static class USoundLibraryTagHelperFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundLibraryTagHelperFunctions*>(USoundLibraryTagHelperFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundLibrary.SoundLibraryTagHelperFunctions.MakeSoundLibraryTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundLibraryTag            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSoundLibraryTag USoundLibraryTagHelperFunctions::MakeSoundLibraryTag(struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundLibraryTagHelperFunctions", "MakeSoundLibraryTag");

	Params::USoundLibraryTagHelperFunctions_MakeSoundLibraryTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


