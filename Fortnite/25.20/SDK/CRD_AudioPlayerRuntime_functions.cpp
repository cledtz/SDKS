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


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.StopAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::StopAudio(class AController* Player)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "StopAudio");

	Params::UCreativeAudioComponent_StopAudio_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("CreativeAudioComponent", "SetProperties");

	Params::UCreativeAudioComponent_SetProperties_Params Parms;

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

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryUpdateAutoplayStatusOnMinigameAdd
// (Final, Native, Private)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::RetryUpdateAutoplayStatusOnMinigameAdd(class AFortMinigame* Minigame)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "RetryUpdateAutoplayStatusOnMinigameAdd");

	Params::UCreativeAudioComponent_RetryUpdateAutoplayStatusOnMinigameAdd_Params Parms;

	Parms.Minigame = Minigame;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryClientPlayAudio
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FCreativeAudioPlayerData    InstigatorData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::RetryClientPlayAudio(struct FCreativeAudioPlayerData& InstigatorData)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "RetryClientPlayAudio");

	Params::UCreativeAudioComponent_RetryClientPlayAudio_Params Parms;

	Parms.InstigatorData = InstigatorData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.ResetDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeAudioComponent::ResetDevice()
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "ResetDevice");

	Params::UCreativeAudioComponent_ResetDevice_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.PlayAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::PlayAudio(class AController* Player)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "PlayAudio");

	Params::UCreativeAudioComponent_PlayAudio_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_ServerInstigatorData
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnRep_ServerInstigatorData()
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnRep_ServerInstigatorData");

	Params::UCreativeAudioComponent_OnRep_ServerInstigatorData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_RegisteredPlayerIds
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnRep_RegisteredPlayerIds()
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnRep_RegisteredPlayerIds");

	Params::UCreativeAudioComponent_OnRep_RegisteredPlayerIds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnProxyDataChanged
// (Final, Native, Private)
// Parameters:
// class ACreativePlayerReplicationProxy*ProxyData                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnProxyDataChanged(class ACreativePlayerReplicationProxy* ProxyData)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnProxyDataChanged");

	Params::UCreativeAudioComponent_OnProxyDataChanged_Params Parms;

	Parms.ProxyData = ProxyData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerUnregistered
// (Final, Native, Private)
// Parameters:
// class AFortPlayerState*            PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnPlayerUnregistered(class AFortPlayerState* PlayerState)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnPlayerUnregistered");

	Params::UCreativeAudioComponent_OnPlayerUnregistered_Params Parms;

	Parms.PlayerState = PlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRemoved
// (Final, Native, Private)
// Parameters:
// struct FUniqueNetIdRepl            NetId                                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocalPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnPlayerRemoved(const struct FUniqueNetIdRepl& NetId, bool bIsLocalPlayer)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnPlayerRemoved");

	Params::UCreativeAudioComponent_OnPlayerRemoved_Params Parms;

	Parms.NetId = NetId;
	Parms.bIsLocalPlayer = bIsLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRegistered
// (Final, Native, Private)
// Parameters:
// class AFortPlayerState*            PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnPlayerRegistered(class AFortPlayerState* PlayerState)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnPlayerRegistered");

	Params::UCreativeAudioComponent_OnPlayerRegistered_Params Parms;

	Parms.PlayerState = PlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerAdded
// (Final, Native, Private)
// Parameters:
// struct FUniqueNetIdRepl            NetId                                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocalPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnPlayerAdded(const struct FUniqueNetIdRepl& NetId, bool bIsLocalPlayer)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnPlayerAdded");

	Params::UCreativeAudioComponent_OnPlayerAdded_Params Parms;

	Parms.NetId = NetId;
	Parms.bIsLocalPlayer = bIsLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NewMinigameState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnMinigameStateChanged");

	Params::UCreativeAudioComponent_OnMinigameStateChanged_Params Parms;

	Parms.Minigame = Minigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStarted
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnMinigameStarted()
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnMinigameStarted");

	Params::UCreativeAudioComponent_OnMinigameStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameEnded
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnMinigameEnded()
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnMinigameEnded");

	Params::UCreativeAudioComponent_OnMinigameEnded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnEnabledStateChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnEnabledStateChanged(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnEnabledStateChanged");

	Params::UCreativeAudioComponent_OnEnabledStateChanged_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAudioLoadComplete
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FSoftObjectPath             Audio                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeAudioComponent::OnAudioLoadComplete(const struct FSoftObjectPath& Audio)
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnAudioLoadComplete");

	Params::UCreativeAudioComponent_OnAudioLoadComplete_Params Parms;

	Parms.Audio = Audio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAllPlayersUnregistered
// (Final, Native, Private)
// Parameters:

void UCreativeAudioComponent::OnAllPlayersUnregistered()
{
	static auto Func = Class->GetFunction("CreativeAudioComponent", "OnAllPlayersUnregistered");

	Params::UCreativeAudioComponent_OnAllPlayersUnregistered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
