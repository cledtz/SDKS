#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRD_AudioPlayerRuntime.CreativeAudioComponent
// (None)

class UClass* UCreativeAudioComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeAudioComponent");

	return Clss;
}


// CreativeAudioComponent CRD_AudioPlayerRuntime.Default__CreativeAudioComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeAudioComponent* UCreativeAudioComponent::GetDefaultObj()
{
	static class UCreativeAudioComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeAudioComponent*>(UCreativeAudioComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.StopAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UController*                 Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::StopAudio(class UController* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "StopAudio");

	Params::UCreativeAudioComponent_StopAudio_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.SetProperties
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class USoundBase>   Audio                                                            (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewFadeInDuration                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewFadeOutDuration                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnableVolumeAttenuation                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnableSpatialization                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StereoSpread                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttenuationDistanceModelDistanceModel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AttenuationMinDistance                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AttenuationFalloffDistance                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewSyncPlayerAudio                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewRestartAudioOnPlay                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCanBeHeardBy                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewPlayLocation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewAutoplayOptions                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::SetProperties(TSoftObjectPtr<class USoundBase>& Audio, float Volume, float PlaybackSpeed, float NewFadeInDuration, float NewFadeOutDuration, bool bEnableVolumeAttenuation, bool bEnableSpatialization, float StereoSpread, enum class EAttenuationDistanceModel DistanceModel, float AttenuationMinDistance, float AttenuationFalloffDistance, bool bNewSyncPlayerAudio, bool bNewRestartAudioOnPlay, int32 NewCanBeHeardBy, int32 NewPlayLocation, int32 NewAutoplayOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "SetProperties");

	Params::UCreativeAudioComponent_SetProperties_Params Parms{};

	Parms.Audio = Audio;
	Parms.Volume = Volume;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.NewFadeInDuration = NewFadeInDuration;
	Parms.NewFadeOutDuration = NewFadeOutDuration;
	Parms.bEnableVolumeAttenuation = bEnableVolumeAttenuation;
	Parms.bEnableSpatialization = bEnableSpatialization;
	Parms.StereoSpread = StereoSpread;
	Parms.DistanceModel = DistanceModel;
	Parms.AttenuationMinDistance = AttenuationMinDistance;
	Parms.AttenuationFalloffDistance = AttenuationFalloffDistance;
	Parms.bNewSyncPlayerAudio = bNewSyncPlayerAudio;
	Parms.bNewRestartAudioOnPlay = bNewRestartAudioOnPlay;
	Parms.NewCanBeHeardBy = NewCanBeHeardBy;
	Parms.NewPlayLocation = NewPlayLocation;
	Parms.NewAutoplayOptions = NewAutoplayOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryUpdateAutoplayStatusOnMinigameAdd
// (Final, Native, Private)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::RetryUpdateAutoplayStatusOnMinigameAdd(class UFortMinigame* Minigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "RetryUpdateAutoplayStatusOnMinigameAdd");

	Params::UCreativeAudioComponent_RetryUpdateAutoplayStatusOnMinigameAdd_Params Parms{};

	Parms.Minigame = Minigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryClientPlayAudio
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FCreativeAudioPlayerData    InstigatorData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::RetryClientPlayAudio(struct FCreativeAudioPlayerData& InstigatorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "RetryClientPlayAudio");

	Params::UCreativeAudioComponent_RetryClientPlayAudio_Params Parms{};

	Parms.InstigatorData = InstigatorData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.ResetDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeAudioComponent::ResetDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "ResetDevice");

	Params::UCreativeAudioComponent_ResetDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.PlayAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UController*                 Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::PlayAudio(class UController* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "PlayAudio");

	Params::UCreativeAudioComponent_PlayAudio_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_ServerInstigatorData
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnRep_ServerInstigatorData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnRep_ServerInstigatorData");

	Params::UCreativeAudioComponent_OnRep_ServerInstigatorData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_RegisteredPlayerIds
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnRep_RegisteredPlayerIds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnRep_RegisteredPlayerIds");

	Params::UCreativeAudioComponent_OnRep_RegisteredPlayerIds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnProxyDataChanged
// (Final, Native, Private)
// Parameters:
// class UCreativePlayerReplicationProxy*ProxyData                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnProxyDataChanged(class UCreativePlayerReplicationProxy* ProxyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnProxyDataChanged");

	Params::UCreativeAudioComponent_OnProxyDataChanged_Params Parms{};

	Parms.ProxyData = ProxyData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerUnregistered
// (Final, Native, Private)
// Parameters:
// class UFortPlayerState*            PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnPlayerUnregistered(class UFortPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnPlayerUnregistered");

	Params::UCreativeAudioComponent_OnPlayerUnregistered_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRemoved
// (Final, Native, Private)
// Parameters:
// struct FUniqueNetIdRepl            NetId                                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocalPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnPlayerRemoved(const struct FUniqueNetIdRepl& NetId, bool bIsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnPlayerRemoved");

	Params::UCreativeAudioComponent_OnPlayerRemoved_Params Parms{};

	Parms.NetId = NetId;
	Parms.bIsLocalPlayer = bIsLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRegistered
// (Final, Native, Private)
// Parameters:
// class UFortPlayerState*            PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnPlayerRegistered(class UFortPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnPlayerRegistered");

	Params::UCreativeAudioComponent_OnPlayerRegistered_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerAdded
// (Final, Native, Private)
// Parameters:
// struct FUniqueNetIdRepl            NetId                                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocalPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnPlayerAdded(const struct FUniqueNetIdRepl& NetId, bool bIsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnPlayerAdded");

	Params::UCreativeAudioComponent_OnPlayerAdded_Params Parms{};

	Parms.NetId = NetId;
	Parms.bIsLocalPlayer = bIsLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStateChanged
// (Final, Native, Private)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NewMinigameState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnMinigameStateChanged");

	Params::UCreativeAudioComponent_OnMinigameStateChanged_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStarted
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnMinigameStarted");

	Params::UCreativeAudioComponent_OnMinigameStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameEnded
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnMinigameEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnMinigameEnded");

	Params::UCreativeAudioComponent_OnMinigameEnded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnEnabledStateChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnEnabledStateChanged(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnEnabledStateChanged");

	Params::UCreativeAudioComponent_OnEnabledStateChanged_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAudioLoadComplete
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FSoftObjectPath             Audio                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnAudioLoadComplete(const struct FSoftObjectPath& Audio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnAudioLoadComplete");

	Params::UCreativeAudioComponent_OnAudioLoadComplete_Params Parms{};

	Parms.Audio = Audio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAllPlayersUnregistered
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnAllPlayersUnregistered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeAudioComponent", "OnAllPlayersUnregistered");

	Params::UCreativeAudioComponent_OnAllPlayersUnregistered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CRD_AudioPlayerRuntime.CreativeAudioPlayerReplicationProxy
// (Actor)

class UClass* UCreativeAudioPlayerReplicationProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeAudioPlayerReplicationProxy");

	return Clss;
}


// CreativeAudioPlayerReplicationProxy CRD_AudioPlayerRuntime.Default__CreativeAudioPlayerReplicationProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeAudioPlayerReplicationProxy* UCreativeAudioPlayerReplicationProxy::GetDefaultObj()
{
	static class UCreativeAudioPlayerReplicationProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeAudioPlayerReplicationProxy*>(UCreativeAudioPlayerReplicationProxy::StaticClass()->DefaultObject);

	return Default;
}

}


