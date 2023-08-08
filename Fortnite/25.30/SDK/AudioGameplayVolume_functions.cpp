#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AudioGameplayVolume.AudioGameplayVolumeMutator.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPriority                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioGameplayVolumeMutator::SetPriority(int32 InPriority)
{
	static auto Func = Class->GetFunction("AudioGameplayVolumeMutator", "SetPriority");

	Params::UAudioGameplayVolumeMutator_SetPriority_Params Parms;

	Parms.InPriority = InPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttenuationVolumeComponent::SetInteriorVolume(float Volume, float InterpolateTime)
{
	static auto Func = Class->GetFunction("AttenuationVolumeComponent", "SetInteriorVolume");

	Params::UAttenuationVolumeComponent_SetInteriorVolume_Params Parms;

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttenuationVolumeComponent::SetExteriorVolume(float Volume, float InterpolateTime)
{
	static auto Func = Class->GetFunction("AttenuationVolumeComponent", "SetExteriorVolume");

	Params::UAttenuationVolumeComponent_SetExteriorVolume_Params Parms;

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.AudioGameplayVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioGameplayVolume::SetEnabled(bool bEnable)
{
	static auto Func = Class->GetFunction("AudioGameplayVolume", "SetEnabled");

	Params::UAudioGameplayVolume_SetEnabled_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled
// (Native, Protected)
// Parameters:

void UAudioGameplayVolume::OnRep_bEnabled()
{
	static auto Func = Class->GetFunction("AudioGameplayVolume", "OnRep_bEnabled");

	Params::UAudioGameplayVolume_OnRep_bEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.AudioGameplayVolume.OnListenerExit
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UAudioGameplayVolume::OnListenerExit()
{
	static auto Func = Class->GetFunction("AudioGameplayVolume", "OnListenerExit");

	Params::UAudioGameplayVolume_OnListenerExit_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.AudioGameplayVolume.OnListenerEnter
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UAudioGameplayVolume::OnListenerEnter()
{
	static auto Func = Class->GetFunction("AudioGameplayVolume", "OnListenerEnter");

	Params::UAudioGameplayVolume_OnListenerEnter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFilterVolumeComponent::SetInteriorLPF(float Volume, float InterpolateTime)
{
	static auto Func = Class->GetFunction("FilterVolumeComponent", "SetInteriorLPF");

	Params::UFilterVolumeComponent_SetInteriorLPF_Params Parms;

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpolateTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFilterVolumeComponent::SetExteriorLPF(float Volume, float InterpolateTime)
{
	static auto Func = Class->GetFunction("FilterVolumeComponent", "SetExteriorLPF");

	Params::UFilterVolumeComponent_SetExteriorLPF_Params Parms;

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.ReverbVolumeComponent.SetReverbSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReverbSettings             NewReverbSettings                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UReverbVolumeComponent::SetReverbSettings(struct FReverbSettings& NewReverbSettings)
{
	static auto Func = Class->GetFunction("ReverbVolumeComponent", "SetReverbSettings");

	Params::UReverbVolumeComponent_SetReverbSettings_Params Parms;

	Parms.NewReverbSettings = NewReverbSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.SubmixOverrideVolumeComponent.SetSubmixOverrideSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioVolumeSubmixOverrideSettings>NewSubmixOverrideSettings                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixOverrideVolumeComponent::SetSubmixOverrideSettings(TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings)
{
	static auto Func = Class->GetFunction("SubmixOverrideVolumeComponent", "SetSubmixOverrideSettings");

	Params::USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Params Parms;

	Parms.NewSubmixOverrideSettings = NewSubmixOverrideSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioVolumeSubmixSendSettings>NewSubmixSendSettings                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixSendVolumeComponent::SetSubmixSendSettings(TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings)
{
	static auto Func = Class->GetFunction("SubmixSendVolumeComponent", "SetSubmixSendSettings");

	Params::USubmixSendVolumeComponent_SetSubmixSendSettings_Params Parms;

	Parms.NewSubmixSendSettings = NewSubmixSendSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
