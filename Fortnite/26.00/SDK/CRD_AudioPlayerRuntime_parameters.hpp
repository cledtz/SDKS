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

// 0x8 (0x8 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.StopAudio
struct UCreativeAudioComponent_StopAudio_Params
{
public:
	class UController*                           Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.SetProperties
struct UCreativeAudioComponent_SetProperties_Params
{
public:
	TSoftObjectPtr<class USoundBase>             Audio;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlaybackSpeed;                                     // 0x24(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewFadeInDuration;                                 // 0x28(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewFadeOutDuration;                                // 0x2C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVolumeAttenuation;                          // 0x30(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSpatialization;                             // 0x31(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF5[0x2];                                     // Fixing Size After Last Property 
	float                                        StereoSpread;                                      // 0x34(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttenuationDistanceModel         DistanceModel;                                     // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF7[0x3];                                     // Fixing Size After Last Property 
	float                                        AttenuationMinDistance;                            // 0x3C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationFalloffDistance;                        // 0x40(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewSyncPlayerAudio;                               // 0x44(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewRestartAudioOnPlay;                            // 0x45(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF9[0x2];                                     // Fixing Size After Last Property 
	int32                                        NewCanBeHeardBy;                                   // 0x48(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewPlayLocation;                                   // 0x4C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewAutoplayOptions;                                // 0x50(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EFA[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryUpdateAutoplayStatusOnMinigameAdd
struct UCreativeAudioComponent_RetryUpdateAutoplayStatusOnMinigameAdd_Params
{
public:
	class UFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryClientPlayAudio
struct UCreativeAudioComponent_RetryClientPlayAudio_Params
{
public:
	struct FCreativeAudioPlayerData              InstigatorData;                                    // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.ResetDevice
struct UCreativeAudioComponent_ResetDevice_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.PlayAudio
struct UCreativeAudioComponent_PlayAudio_Params
{
public:
	class UController*                           Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_ServerInstigatorData
struct UCreativeAudioComponent_OnRep_ServerInstigatorData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_RegisteredPlayerIds
struct UCreativeAudioComponent_OnRep_RegisteredPlayerIds_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnProxyDataChanged
struct UCreativeAudioComponent_OnProxyDataChanged_Params
{
public:
	class UCreativePlayerReplicationProxy*       ProxyData;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerUnregistered
struct UCreativeAudioComponent_OnPlayerUnregistered_Params
{
public:
	class UFortPlayerState*                      PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRemoved
struct UCreativeAudioComponent_OnPlayerRemoved_Params
{
public:
	struct FUniqueNetIdRepl                      NetId;                                             // 0x0(0x30)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocalPlayer;                                    // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0E[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRegistered
struct UCreativeAudioComponent_OnPlayerRegistered_Params
{
public:
	class UFortPlayerState*                      PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerAdded
struct UCreativeAudioComponent_OnPlayerAdded_Params
{
public:
	struct FUniqueNetIdRepl                      NetId;                                             // 0x0(0x30)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocalPlayer;                                    // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F15[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStateChanged
struct UCreativeAudioComponent_OnMinigameStateChanged_Params
{
public:
	class UFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                NewMinigameState;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F21[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStarted
struct UCreativeAudioComponent_OnMinigameStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameEnded
struct UCreativeAudioComponent_OnMinigameEnded_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnEnabledStateChanged
struct UCreativeAudioComponent_OnEnabledStateChanged_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAudioLoadComplete
struct UCreativeAudioComponent_OnAudioLoadComplete_Params
{
public:
	struct FSoftObjectPath                       Audio;                                             // 0x0(0x18)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAllPlayersUnregistered
struct UCreativeAudioComponent_OnAllPlayersUnregistered_Params
{
public:
};

}
}


