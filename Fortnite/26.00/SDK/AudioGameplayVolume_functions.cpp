#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioGameplayVolume.AudioGameplayVolumeMutator
// (None)

class UClass* UAudioGameplayVolumeMutator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeMutator");

	return Clss;
}


// AudioGameplayVolumeMutator AudioGameplayVolume.Default__AudioGameplayVolumeMutator
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeMutator* UAudioGameplayVolumeMutator::GetDefaultObj()
{
	static class UAudioGameplayVolumeMutator* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeMutator*>(UAudioGameplayVolumeMutator::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.AudioGameplayVolumeMutator.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPriority                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioGameplayVolumeMutator::SetPriority(int32 InPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolumeMutator", "SetPriority");

	Params::UAudioGameplayVolumeMutator_SetPriority_Params Parms{};

	Parms.InPriority = InPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.AttenuationVolumeComponent
// (None)

class UClass* UAttenuationVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttenuationVolumeComponent");

	return Clss;
}


// AttenuationVolumeComponent AudioGameplayVolume.Default__AttenuationVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAttenuationVolumeComponent* UAttenuationVolumeComponent::GetDefaultObj()
{
	static class UAttenuationVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttenuationVolumeComponent*>(UAttenuationVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttenuationVolumeComponent::SetInteriorVolume(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttenuationVolumeComponent", "SetInteriorVolume");

	Params::UAttenuationVolumeComponent_SetInteriorVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttenuationVolumeComponent::SetExteriorVolume(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttenuationVolumeComponent", "SetExteriorVolume");

	Params::UAttenuationVolumeComponent_SetExteriorVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.AudioGameplayVolume
// (Actor)

class UClass* UAudioGameplayVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolume");

	return Clss;
}


// AudioGameplayVolume AudioGameplayVolume.Default__AudioGameplayVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolume* UAudioGameplayVolume::GetDefaultObj()
{
	static class UAudioGameplayVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolume*>(UAudioGameplayVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.AudioGameplayVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioGameplayVolume::SetEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolume", "SetEnabled");

	Params::UAudioGameplayVolume_SetEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled
// (Native, Protected)
// Parameters:

void UAudioGameplayVolume::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolume", "OnRep_bEnabled");

	Params::UAudioGameplayVolume_OnRep_bEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplayVolume.AudioGameplayVolume.OnListenerExit
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UAudioGameplayVolume::OnListenerExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolume", "OnListenerExit");

	Params::UAudioGameplayVolume_OnListenerExit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplayVolume.AudioGameplayVolume.OnListenerEnter
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UAudioGameplayVolume::OnListenerEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolume", "OnListenerEnter");

	Params::UAudioGameplayVolume_OnListenerEnter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.AudioGameplayVolumeComponent
// (None)

class UClass* UAudioGameplayVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeComponent");

	return Clss;
}


// AudioGameplayVolumeComponent AudioGameplayVolume.Default__AudioGameplayVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeComponent* UAudioGameplayVolumeComponent::GetDefaultObj()
{
	static class UAudioGameplayVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeComponent*>(UAudioGameplayVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.AudioGameplayVolumeComponentBase
// (None)

class UClass* UAudioGameplayVolumeComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeComponentBase");

	return Clss;
}


// AudioGameplayVolumeComponentBase AudioGameplayVolume.Default__AudioGameplayVolumeComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeComponentBase* UAudioGameplayVolumeComponentBase::GetDefaultObj()
{
	static class UAudioGameplayVolumeComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeComponentBase*>(UAudioGameplayVolumeComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.AudioGameplayVolumeProxy
// (None)

class UClass* UAudioGameplayVolumeProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeProxy");

	return Clss;
}


// AudioGameplayVolumeProxy AudioGameplayVolume.Default__AudioGameplayVolumeProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeProxy* UAudioGameplayVolumeProxy::GetDefaultObj()
{
	static class UAudioGameplayVolumeProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeProxy*>(UAudioGameplayVolumeProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.AGVPrimitiveComponentProxy
// (None)

class UClass* UAGVPrimitiveComponentProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGVPrimitiveComponentProxy");

	return Clss;
}


// AGVPrimitiveComponentProxy AudioGameplayVolume.Default__AGVPrimitiveComponentProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGVPrimitiveComponentProxy* UAGVPrimitiveComponentProxy::GetDefaultObj()
{
	static class UAGVPrimitiveComponentProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGVPrimitiveComponentProxy*>(UAGVPrimitiveComponentProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.AGVConditionProxy
// (None)

class UClass* UAGVConditionProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AGVConditionProxy");

	return Clss;
}


// AGVConditionProxy AudioGameplayVolume.Default__AGVConditionProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAGVConditionProxy* UAGVConditionProxy::GetDefaultObj()
{
	static class UAGVConditionProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAGVConditionProxy*>(UAGVConditionProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.AudioGameplayVolumeSubsystem
// (None)

class UClass* UAudioGameplayVolumeSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeSubsystem");

	return Clss;
}


// AudioGameplayVolumeSubsystem AudioGameplayVolume.Default__AudioGameplayVolumeSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayVolumeSubsystem* UAudioGameplayVolumeSubsystem::GetDefaultObj()
{
	static class UAudioGameplayVolumeSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayVolumeSubsystem*>(UAudioGameplayVolumeSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplayVolume.FilterVolumeComponent
// (None)

class UClass* UFilterVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FilterVolumeComponent");

	return Clss;
}


// FilterVolumeComponent AudioGameplayVolume.Default__FilterVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFilterVolumeComponent* UFilterVolumeComponent::GetDefaultObj()
{
	static class UFilterVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFilterVolumeComponent*>(UFilterVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFilterVolumeComponent::SetInteriorLPF(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FilterVolumeComponent", "SetInteriorLPF");

	Params::UFilterVolumeComponent_SetInteriorLPF_Params Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFilterVolumeComponent::SetExteriorLPF(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FilterVolumeComponent", "SetExteriorLPF");

	Params::UFilterVolumeComponent_SetExteriorLPF_Params Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.ReverbVolumeComponent
// (None)

class UClass* UReverbVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReverbVolumeComponent");

	return Clss;
}


// ReverbVolumeComponent AudioGameplayVolume.Default__ReverbVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UReverbVolumeComponent* UReverbVolumeComponent::GetDefaultObj()
{
	static class UReverbVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UReverbVolumeComponent*>(UReverbVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.ReverbVolumeComponent.SetReverbSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReverbSettings             NewReverbSettings                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UReverbVolumeComponent::SetReverbSettings(struct FReverbSettings& NewReverbSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReverbVolumeComponent", "SetReverbSettings");

	Params::UReverbVolumeComponent_SetReverbSettings_Params Parms{};

	Parms.NewReverbSettings = NewReverbSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.SubmixOverrideVolumeComponent
// (None)

class UClass* USubmixOverrideVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixOverrideVolumeComponent");

	return Clss;
}


// SubmixOverrideVolumeComponent AudioGameplayVolume.Default__SubmixOverrideVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixOverrideVolumeComponent* USubmixOverrideVolumeComponent::GetDefaultObj()
{
	static class USubmixOverrideVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixOverrideVolumeComponent*>(USubmixOverrideVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.SubmixOverrideVolumeComponent.SetSubmixOverrideSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioVolumeSubmixOverrideSettings>NewSubmixOverrideSettings                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixOverrideVolumeComponent::SetSubmixOverrideSettings(TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixOverrideVolumeComponent", "SetSubmixOverrideSettings");

	Params::USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Params Parms{};

	Parms.NewSubmixOverrideSettings = NewSubmixOverrideSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioGameplayVolume.SubmixSendVolumeComponent
// (None)

class UClass* USubmixSendVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixSendVolumeComponent");

	return Clss;
}


// SubmixSendVolumeComponent AudioGameplayVolume.Default__SubmixSendVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixSendVolumeComponent* USubmixSendVolumeComponent::GetDefaultObj()
{
	static class USubmixSendVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixSendVolumeComponent*>(USubmixSendVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioVolumeSubmixSendSettings>NewSubmixSendSettings                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixSendVolumeComponent::SetSubmixSendSettings(TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixSendVolumeComponent", "SetSubmixSendSettings");

	Params::USubmixSendVolumeComponent_SetSubmixSendSettings_Params Parms{};

	Parms.NewSubmixSendSettings = NewSubmixSendSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


