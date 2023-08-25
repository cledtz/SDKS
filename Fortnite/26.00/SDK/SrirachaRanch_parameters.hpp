#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive
struct UStreamingRadioPlayerComponent_ToggleRadioActive_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
struct UStreamingRadioPlayerComponent_StopRadioWithFadeout_Params
{
public:
	int32                                        Milliseconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadio
struct UStreamingRadioPlayerComponent_StopRadio_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
struct UStreamingRadioPlayerComponent_StopIfNoDriver_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
struct UStreamingRadioPlayerComponent_StartRadio_Params
{
public:
	int32                                        IdxToPlay;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFallbackOverride;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_325B[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
struct UStreamingRadioPlayerComponent_SoundMixUpdateWeaponState_Params
{
public:
	class UFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
struct UStreamingRadioPlayerComponent_SoundMixUpdateTargetingState_Params
{
public:
	bool                                         bNewIsTargeting;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
struct UStreamingRadioPlayerComponent_SetInteriorVolume_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
struct UStreamingRadioPlayerComponent_SetExteriorVolume_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.SetActivationRadius
struct UStreamingRadioPlayerComponent_SetActivationRadius_Params
{
public:
	float                                        InRadius;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerStopRadio
struct UStreamingRadioPlayerComponent_ServerStopRadio_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSetDisabledForCurrentPlayerState
struct UStreamingRadioPlayerComponent_ServerSetDisabledForCurrentPlayerState_Params
{
public:
	bool                                         bInDisableForCurrentPlayerState;                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveFadeOutTime
struct UStreamingRadioPlayerComponent_ServerSaveFadeOutTime_Params
{
public:
	float                                        InFadeOutSeconds;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSavedSource
struct UStreamingRadioPlayerComponent_ServerSavedSource_Params
{
public:
	struct FAthenaRadioStation                   InSource;                                          // 0x0(0x58)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveAutoStart
struct UStreamingRadioPlayerComponent_ServerSaveAutoStart_Params
{
public:
	bool                                         bInAutoStart;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerPlayIndex
struct UStreamingRadioPlayerComponent_ServerPlayIndex_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStreamingRadioSourceState        InState;                                           // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_327F[0x3];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex
struct UStreamingRadioPlayerComponent_PlayPrevIndex_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex
struct UStreamingRadioPlayerComponent_PlayNextIndex_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex
struct UStreamingRadioPlayerComponent_PlayDefaultIndex_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData
struct UStreamingRadioPlayerComponent_OnRep_RadioSourceData_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
struct UStreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged_Params
{
public:
	bool                                         bPiPPlayerBlocking;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
struct UStreamingRadioPlayerComponent_OnPawnExitVehicle_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3296[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
struct UStreamingRadioPlayerComponent_OnPawnExitSeat_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_329B[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
struct UStreamingRadioPlayerComponent_OnPawnEnterVehicle_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_329F[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
struct UStreamingRadioPlayerComponent_OnPawnEnterSeat_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A0[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
struct UStreamingRadioPlayerComponent_OnOwningVehicleDied_Params
{
public:
	class UFortAthenaVehicle*                    DeadVehicle;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InTags;                                            // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UController*                           EventInstigator;                                   // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered
struct UStreamingRadioPlayerComponent_OnOwnerUnpowered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled
struct UStreamingRadioPlayerComponent_OnOwnerReFueled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel
struct UStreamingRadioPlayerComponent_OnOwnerOutOfFuel_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded
struct UStreamingRadioPlayerComponent_OnOwnerExploded_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerDisabledChanged
struct UStreamingRadioPlayerComponent_OnOwnerDisabledChanged_Params
{
public:
	bool                                         bDisabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnVehicleOwnerChanged
struct UStreamingRadioPlayerComponent_NativeOnVehicleOwnerChanged_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                NewOwner;                                          // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                PrevOwner;                                         // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
struct UStreamingRadioPlayerComponent_NativeOnPawnExitVehicle_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32BD[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
struct UStreamingRadioPlayerComponent_NativeOnPawnExitSeat_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C0[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
struct UStreamingRadioPlayerComponent_NativeOnPawnEnterVehicle_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C5[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
struct UStreamingRadioPlayerComponent_NativeOnPawnEnterSeat_Params
{
public:
	TScriptInterface<class UFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32CA[0x4];                                     // Fixing Size Of Struct
};

// 0x90 (0x90 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MetadataChanged
struct UStreamingRadioPlayerComponent_MetadataChanged_Params
{
public:
	struct FFortMediaInBandMetadata              MetaData;                                          // 0x0(0x90)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaTerminalError
struct UStreamingRadioPlayerComponent_MediaTerminalError_Params
{
public:
	enum class EBaseMediaTerminalErrorReason     Reason;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaResumed
struct UStreamingRadioPlayerComponent_MediaResumed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaOnSuccess
struct UStreamingRadioPlayerComponent_MediaOnSuccess_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaEnded
struct UStreamingRadioPlayerComponent_MediaEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaClosed
struct UStreamingRadioPlayerComponent_MediaClosed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaClose
struct UStreamingRadioPlayerComponent_MediaClose_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
struct UStreamingRadioPlayerComponent_IsPlayingLiveFeed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
struct UStreamingRadioPlayerComponent_IsExternalSeat_Params
{
public:
	int32                                        SeatIdx;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D6[0x3];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.HandleLicensedAudioTreatmentChanged
struct UStreamingRadioPlayerComponent_HandleLicensedAudioTreatmentChanged_Params
{
public:
	enum class EUCPTypes                         UCPType;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
struct UStreamingRadioPlayerComponent_GetOptionAt_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DE[0x4];                                     // Fixing Size After Last Property 
	struct FAthenaRadioStation                   ReturnValue;                                       // 0x8(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.GetMediaMetadata
struct UStreamingRadioPlayerComponent_GetMediaMetadata_Params
{
public:
	struct FFortMediaInBandMetadata              ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.GetBaseStreamingVideo
struct UStreamingRadioPlayerComponent_GetBaseStreamingVideo_Params
{
public:
	class UFortBaseStreamingVideo*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


