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


// Function SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::ToggleRadioActive()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "ToggleRadioActive");

	Params::UStreamingRadioPlayerComponent_ToggleRadioActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Milliseconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::StopRadioWithFadeout(int32 Milliseconds)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "StopRadioWithFadeout");

	Params::UStreamingRadioPlayerComponent_StopRadioWithFadeout_Params Parms;

	Parms.Milliseconds = Milliseconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadio
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::StopRadio()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "StopRadio");

	Params::UStreamingRadioPlayerComponent_StopRadio_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::StopIfNoDriver(FInterfaceProperty_& Vehicle)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "StopIfNoDriver");

	Params::UStreamingRadioPlayerComponent_StopIfNoDriver_Params Parms;

	Parms.Vehicle = Vehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              IdxToPlay                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFallbackOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::StartRadio(int32 IdxToPlay, bool bFallbackOverride)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "StartRadio");

	Params::UStreamingRadioPlayerComponent_StartRadio_Params Parms;

	Parms.IdxToPlay = IdxToPlay;
	Parms.bFallbackOverride = bFallbackOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::SoundMixUpdateWeaponState(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "SoundMixUpdateWeaponState");

	Params::UStreamingRadioPlayerComponent_SoundMixUpdateWeaponState_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
// (Final, Native, Private)
// Parameters:
// bool                               bNewIsTargeting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::SoundMixUpdateTargetingState(bool bNewIsTargeting)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "SoundMixUpdateTargetingState");

	Params::UStreamingRadioPlayerComponent_SoundMixUpdateTargetingState_Params Parms;

	Parms.bNewIsTargeting = bNewIsTargeting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::SetInteriorVolume(FInterfaceProperty_& Vehicle)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "SetInteriorVolume");

	Params::UStreamingRadioPlayerComponent_SetInteriorVolume_Params Parms;

	Parms.Vehicle = Vehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::SetExteriorVolume(FInterfaceProperty_& Vehicle)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "SetExteriorVolume");

	Params::UStreamingRadioPlayerComponent_SetExteriorVolume_Params Parms;

	Parms.Vehicle = Vehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SetActivationRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::SetActivationRadius(float InRadius)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "SetActivationRadius");

	Params::UStreamingRadioPlayerComponent_SetActivationRadius_Params Parms;

	Parms.InRadius = InRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerStopRadio
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UStreamingRadioPlayerComponent::ServerStopRadio()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerStopRadio");

	Params::UStreamingRadioPlayerComponent_ServerStopRadio_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSetDisabledForCurrentPlayerState
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// bool                               bInDisableForCurrentPlayerState                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::ServerSetDisabledForCurrentPlayerState(bool bInDisableForCurrentPlayerState)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerSetDisabledForCurrentPlayerState");

	Params::UStreamingRadioPlayerComponent_ServerSetDisabledForCurrentPlayerState_Params Parms;

	Parms.bInDisableForCurrentPlayerState = bInDisableForCurrentPlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveFadeOutTime
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// float                              InFadeOutSeconds                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::ServerSaveFadeOutTime(float InFadeOutSeconds)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerSaveFadeOutTime");

	Params::UStreamingRadioPlayerComponent_ServerSaveFadeOutTime_Params Parms;

	Parms.InFadeOutSeconds = InFadeOutSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSavedSource
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// struct FAthenaRadioStation         InSource                                                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::ServerSavedSource(struct FAthenaRadioStation& InSource)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerSavedSource");

	Params::UStreamingRadioPlayerComponent_ServerSavedSource_Params Parms;

	Parms.InSource = InSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveAutoStart
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// bool                               bInAutoStart                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::ServerSaveAutoStart(bool bInAutoStart)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerSaveAutoStart");

	Params::UStreamingRadioPlayerComponent_ServerSaveAutoStart_Params Parms;

	Parms.bInAutoStart = bInAutoStart;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerPlayIndex
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// int32                              InIndex                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EStreamingRadioSourceStateInState                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::ServerPlayIndex(int32 InIndex, enum class EStreamingRadioSourceState InState)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "ServerPlayIndex");

	Params::UStreamingRadioPlayerComponent_ServerPlayIndex_Params Parms;

	Parms.InIndex = InIndex;
	Parms.InState = InState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::PlayPrevIndex()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "PlayPrevIndex");

	Params::UStreamingRadioPlayerComponent_PlayPrevIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::PlayNextIndex()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "PlayNextIndex");

	Params::UStreamingRadioPlayerComponent_PlayNextIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UStreamingRadioPlayerComponent::PlayDefaultIndex()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "PlayDefaultIndex");

	Params::UStreamingRadioPlayerComponent_PlayDefaultIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL
// (Final, Native, Protected)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnSuccessfulURL(const class FString& URL)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnSuccessfulURL");

	Params::UStreamingRadioPlayerComponent_OnSuccessfulURL_Params Parms;

	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnRep_RadioSourceData()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnRep_RadioSourceData");

	Params::UStreamingRadioPlayerComponent_OnRep_RadioSourceData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bPiPPlayerBlocking                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPiPPlayerBlockedChanged");

	Params::UStreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged_Params Parms;

	Parms.bPiPPlayerBlocking = bPiPPlayerBlocking;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPawnExitVehicle(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnExitVehicle");

	Params::UStreamingRadioPlayerComponent_OnPawnExitVehicle_Params Parms;

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPawnExitSeat(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnExitSeat");

	Params::UStreamingRadioPlayerComponent_OnPawnExitSeat_Params Parms;

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPawnEnterVehicle(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnEnterVehicle");

	Params::UStreamingRadioPlayerComponent_OnPawnEnterVehicle_Params Parms;

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnPawnEnterSeat(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnPawnEnterSeat");

	Params::UStreamingRadioPlayerComponent_OnPawnEnterSeat_Params Parms;

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UFortAthenaVehicle*          DeadVehicle                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       InTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UController*                 EventInstigator                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnOwningVehicleDied(class UFortAthenaVehicle* DeadVehicle, struct FGameplayTagContainer& InTags, class UController* EventInstigator, class UActor* DamageCauser)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwningVehicleDied");

	Params::UStreamingRadioPlayerComponent_OnOwningVehicleDied_Params Parms;

	Parms.DeadVehicle = DeadVehicle;
	Parms.InTags = InTags;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnOwnerUnpowered()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerUnpowered");

	Params::UStreamingRadioPlayerComponent_OnOwnerUnpowered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnOwnerReFueled()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerReFueled");

	Params::UStreamingRadioPlayerComponent_OnOwnerReFueled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnOwnerOutOfFuel()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerOutOfFuel");

	Params::UStreamingRadioPlayerComponent_OnOwnerOutOfFuel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::OnOwnerExploded()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerExploded");

	Params::UStreamingRadioPlayerComponent_OnOwnerExploded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerDisabledChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bDisabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnOwnerDisabledChanged(bool bDisabled)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnOwnerDisabledChanged");

	Params::UStreamingRadioPlayerComponent_OnOwnerDisabledChanged_Params Parms;

	Parms.bDisabled = bDisabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnLicensedAudioSettingChanged
// (Final, Native, Protected)
// Parameters:
// class UFortClientSettingsRecord*   Settings                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnLicensedAudioSettingChanged(class UFortClientSettingsRecord* Settings)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnLicensedAudioSettingChanged");

	Params::UStreamingRadioPlayerComponent_OnLicensedAudioSettingChanged_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL
// (Final, Native, Protected)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::OnFailedURL(const class FString& URL)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "OnFailedURL");

	Params::UStreamingRadioPlayerComponent_OnFailedURL_Params Parms;

	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnVehicleOwnerChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      NewOwner                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      PrevOwner                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::NativeOnVehicleOwnerChanged(FInterfaceProperty_& Vehicle, class UActor* NewOwner, class UActor* PrevOwner)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnVehicleOwnerChanged");

	Params::UStreamingRadioPlayerComponent_NativeOnVehicleOwnerChanged_Params Parms;

	Parms.Vehicle = Vehicle;
	Parms.NewOwner = NewOwner;
	Parms.PrevOwner = PrevOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::NativeOnPawnExitVehicle(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnExitVehicle");

	Params::UStreamingRadioPlayerComponent_NativeOnPawnExitVehicle_Params Parms;

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::NativeOnPawnExitSeat(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnExitSeat");

	Params::UStreamingRadioPlayerComponent_NativeOnPawnExitSeat_Params Parms;

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::NativeOnPawnEnterVehicle(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnEnterVehicle");

	Params::UStreamingRadioPlayerComponent_NativeOnPawnEnterVehicle_Params Parms;

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                Vehicle                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SeatIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::NativeOnPawnEnterSeat(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "NativeOnPawnEnterSeat");

	Params::UStreamingRadioPlayerComponent_NativeOnPawnEnterSeat_Params Parms;

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaReady
// (Final, Native, Protected)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::MediaReady(const class FString& String)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaReady");

	Params::UStreamingRadioPlayerComponent_MediaReady_Params Parms;

	Parms.String = String;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaPlayed
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::MediaPlayed()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaPlayed");

	Params::UStreamingRadioPlayerComponent_MediaPlayed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaLoad
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::MediaLoad()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaLoad");

	Params::UStreamingRadioPlayerComponent_MediaLoad_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFinishedOrClosed
// (Final, Native, Protected)
// Parameters:

void UStreamingRadioPlayerComponent::MediaFinishedOrClosed()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaFinishedOrClosed");

	Params::UStreamingRadioPlayerComponent_MediaFinishedOrClosed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen
// (Final, Native, Protected)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::MediaFailedToOpen(const class FString& String)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaFailedToOpen");

	Params::UStreamingRadioPlayerComponent_MediaFailedToOpen_Params Parms;

	Parms.String = String;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose
// (Final, Native, Protected)
// Parameters:
// bool                               bReallyExplicit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent::MediaExplicitClose(bool bReallyExplicit)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "MediaExplicitClose");

	Params::UStreamingRadioPlayerComponent_MediaExplicitClose_Params Parms;

	Parms.bReallyExplicit = bReallyExplicit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStreamingRadioPlayerComponent::IsPlayingLiveFeed()
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "IsPlayingLiveFeed");

	Params::UStreamingRadioPlayerComponent_IsPlayingLiveFeed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SeatIdx                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStreamingRadioPlayerComponent::IsExternalSeat(int32 SeatIdx)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "IsExternalSeat");

	Params::UStreamingRadioPlayerComponent_IsExternalSeat_Params Parms;

	Parms.SeatIdx = SeatIdx;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Idx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAthenaRadioStation         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAthenaRadioStation UStreamingRadioPlayerComponent::GetOptionAt(int32 Idx)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent", "GetOptionAt");

	Params::UStreamingRadioPlayerComponent_GetOptionAt_Params Parms;

	Parms.Idx = Idx;

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
