#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioGameplay.AudioComponentGroupExtension
// (None)

class UClass* UAudioComponentGroupExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioComponentGroupExtension");

	return Clss;
}


// AudioComponentGroupExtension AudioGameplay.Default__AudioComponentGroupExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioComponentGroupExtension* UAudioComponentGroupExtension::GetDefaultObj()
{
	static class UAudioComponentGroupExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioComponentGroupExtension*>(UAudioComponentGroupExtension::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplay.AudioGameplayCondition
// (None)

class UClass* UAudioGameplayCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayCondition");

	return Clss;
}


// AudioGameplayCondition AudioGameplay.Default__AudioGameplayCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayCondition* UAudioGameplayCondition::GetDefaultObj()
{
	static class UAudioGameplayCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayCondition*>(UAudioGameplayCondition::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplay.AudioGameplayCondition.ConditionMet_Position
// (RequiredAPI, Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioGameplayCondition::ConditionMet_Position(struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayCondition", "ConditionMet_Position");

	Params::UAudioGameplayCondition_ConditionMet_Position_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioGameplay.AudioGameplayCondition.ConditionMet
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioGameplayCondition::ConditionMet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayCondition", "ConditionMet");

	Params::UAudioGameplayCondition_ConditionMet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AudioGameplay.AudioGameplayVolumeInteraction
// (None)

class UClass* UAudioGameplayVolumeInteraction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeInteraction");

	return Clss;
}


// AudioGameplayVolumeInteraction AudioGameplay.Default__AudioGameplayVolumeInteraction
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeInteraction* UAudioGameplayVolumeInteraction::GetDefaultObj()
{
	static class UAudioGameplayVolumeInteraction* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeInteraction*>(UAudioGameplayVolumeInteraction::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerExit
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAudioGameplayVolumeInteraction::OnListenerExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolumeInteraction", "OnListenerExit");

	Params::UAudioGameplayVolumeInteraction_OnListenerExit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerEnter
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAudioGameplayVolumeInteraction::OnListenerEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolumeInteraction", "OnListenerEnter");

	Params::UAudioGameplayVolumeInteraction_OnListenerEnter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplay.AudioComponentGroup
// (SceneComponent)

class UClass* UAudioComponentGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioComponentGroup");

	return Clss;
}


// AudioComponentGroup AudioGameplay.Default__AudioComponentGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioComponentGroup* UAudioComponentGroup::GetDefaultObj()
{
	static class UAudioComponentGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioComponentGroup*>(UAudioComponentGroup::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplay.AudioComponentGroup.UnsubscribeObject
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::UnsubscribeObject(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "UnsubscribeObject");

	Params::UAudioComponentGroup_UnsubscribeObject_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.SubscribeToStringParam
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::SubscribeToStringParam(class FName ParamName, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "SubscribeToStringParam");

	Params::UAudioComponentGroup_SubscribeToStringParam_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.SubscribeToEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        EventName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::SubscribeToEvent(class FName EventName, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "SubscribeToEvent");

	Params::UAudioComponentGroup_SubscribeToEvent_Params Parms{};

	Parms.EventName = EventName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.SubscribeToBool
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::SubscribeToBool(class FName ParamName, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "SubscribeToBool");

	Params::UAudioComponentGroup_SubscribeToBool_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.StopSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::StopSound(class USoundBase* Sound, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "StopSound");

	Params::UAudioComponentGroup_StopSound_Params Parms{};

	Parms.Sound = Sound;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.StaticGetOrCreateComponentGroup
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponentGroup*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioComponentGroup* UAudioComponentGroup::StaticGetOrCreateComponentGroup(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "StaticGetOrCreateComponentGroup");

	Params::UAudioComponentGroup_StaticGetOrCreateComponentGroup_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioGameplay.AudioComponentGroup.SetVolumeMultiplier
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              InVolume                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::SetVolumeMultiplier(float InVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "SetVolumeMultiplier");

	Params::UAudioComponentGroup_SetVolumeMultiplier_Params Parms{};

	Parms.InVolume = InVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.SetPitchMultiplier
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPitch                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::SetPitchMultiplier(float InPitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "SetPitchMultiplier");

	Params::UAudioComponentGroup_SetPitchMultiplier_Params Parms{};

	Parms.InPitch = InPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.SetLowPassFilter
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::SetLowPassFilter(float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "SetLowPassFilter");

	Params::UAudioComponentGroup_SetLowPassFilter_Params Parms{};

	Parms.InFrequency = InFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.RemoveExtension
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UAudioComponentGroupExtension>NewExtension                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::RemoveExtension(TScriptInterface<class UAudioComponentGroupExtension> NewExtension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "RemoveExtension");

	Params::UAudioComponentGroup_RemoveExtension_Params Parms{};

	Parms.NewExtension = NewExtension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.IsVirtualized
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioComponentGroup::IsVirtualized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "IsVirtualized");

	Params::UAudioComponentGroup_IsVirtualized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioGameplay.AudioComponentGroup.IsPlayingAny
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioComponentGroup::IsPlayingAny()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "IsPlayingAny");

	Params::UAudioComponentGroup_IsPlayingAny_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioGameplay.AudioComponentGroup.GetStringParamValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParamName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAudioComponentGroup::GetStringParamValue(class FName ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "GetStringParamValue");

	Params::UAudioComponentGroup_GetStringParamValue_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioGameplay.AudioComponentGroup.GetFloatParamValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParamName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioComponentGroup::GetFloatParamValue(class FName ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "GetFloatParamValue");

	Params::UAudioComponentGroup_GetFloatParamValue_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioGameplay.AudioComponentGroup.GetBoolParamValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParamName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioComponentGroup::GetBoolParamValue(class FName ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "GetBoolParamValue");

	Params::UAudioComponentGroup_GetBoolParamValue_Params Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioGameplay.AudioComponentGroup.EnableVirtualization
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UAudioComponentGroup::EnableVirtualization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "EnableVirtualization");

	Params::UAudioComponentGroup_EnableVirtualization_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.DisableVirtualization
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UAudioComponentGroup::DisableVirtualization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "DisableVirtualization");

	Params::UAudioComponentGroup_DisableVirtualization_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.BroadcastStopAll
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UAudioComponentGroup::BroadcastStopAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "BroadcastStopAll");

	Params::UAudioComponentGroup_BroadcastStopAll_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.BroadcastKill
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UAudioComponentGroup::BroadcastKill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "BroadcastKill");

	Params::UAudioComponentGroup_BroadcastKill_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.BroadcastEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        EventName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::BroadcastEvent(class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "BroadcastEvent");

	Params::UAudioComponentGroup_BroadcastEvent_Params Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.AddExternalComponent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*             ComponentToAdd                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::AddExternalComponent(class UAudioComponent* ComponentToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "AddExternalComponent");

	Params::UAudioComponentGroup_AddExternalComponent_Params Parms{};

	Parms.ComponentToAdd = ComponentToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioComponentGroup.AddExtension
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UAudioComponentGroupExtension>NewExtension                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentGroup::AddExtension(TScriptInterface<class UAudioComponentGroupExtension> NewExtension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentGroup", "AddExtension");

	Params::UAudioComponentGroup_AddExtension_Params Parms{};

	Parms.NewExtension = NewExtension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplay.AudioGameplayComponent
// (None)

class UClass* UAudioGameplayComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayComponent");

	return Clss;
}


// AudioGameplayComponent AudioGameplay.Default__AudioGameplayComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayComponent* UAudioGameplayComponent::GetDefaultObj()
{
	static class UAudioGameplayComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayComponent*>(UAudioGameplayComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplay.AudioRequirementPreset
// (None)

class UClass* UAudioRequirementPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioRequirementPreset");

	return Clss;
}


// AudioRequirementPreset AudioGameplay.Default__AudioRequirementPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioRequirementPreset* UAudioRequirementPreset::GetDefaultObj()
{
	static class UAudioRequirementPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioRequirementPreset*>(UAudioRequirementPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplay.AudioParameterComponent
// (None)

class UClass* UAudioParameterComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioParameterComponent");

	return Clss;
}


// AudioParameterComponent AudioGameplay.Default__AudioParameterComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioParameterComponent* UAudioParameterComponent::GetDefaultObj()
{
	static class UAudioParameterComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioParameterComponent*>(UAudioParameterComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplay.AudioParameterComponent.GetParameters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FAudioParameter>     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FAudioParameter> UAudioParameterComponent::GetParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterComponent", "GetParameters");

	Params::UAudioParameterComponent_GetParameters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


