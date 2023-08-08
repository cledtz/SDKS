#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Stop
struct UEpicBaseStreamingVideo_Stop_Params
{
public:
	bool                                         bRelease;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopPlayer;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Start
struct UEpicBaseStreamingVideo_Start_Params
{
public:
	class FString                                InVUID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaTexture*                         InVideoTexture;                                    // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.SetVideoSize
struct UEpicBaseStreamingVideo_SetVideoSize_Params
{
public:
	int32                                        Width;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSyncTimes
struct UEpicBaseStreamingVideo_SetSyncTimes_Params
{
public:
	struct FDateTime                             InNowTime;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             InStartTime;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DynamicStart;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F7[0x3];                                     // Fixing Size After Last Property
	float                                        InOffset_s;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDelay_s;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F8[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSoundSubmixes
struct UEpicBaseStreamingVideo_SetSoundSubmixes_Params
{
public:
	class UMediaSoundComponent*                  InSoundComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                      InDefault;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                      InLicensed;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.SetOpenTimeout
struct UEpicBaseStreamingVideo_SetOpenTimeout_Params
{
public:
	double                                       InTimeoutTime;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.RetryOnError
struct UEpicBaseStreamingVideo_RetryOnError_Params
{
public:
	bool                                         bFromPlayer;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Release
struct UEpicBaseStreamingVideo_Release_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Open
struct UEpicBaseStreamingVideo_Open_Params
{
public:
	struct FMediaPlayerOptions                   InMediaOptions;                                    // 0x0(0x30)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2903[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.OnSuccessfulURL
struct UEpicBaseStreamingVideo_OnSuccessfulURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.OnFailedURL
struct UEpicBaseStreamingVideo_OnFailedURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Init
struct UEpicBaseStreamingVideo_Init_Params
{
public:
	class UMediaTexture*                         InVideoTexture;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          InMediaPlayer;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEpicStreamMediaSource*                InMediaSource;                                     // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InCDNFailover;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290C[0x6];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaResumed
struct UEpicBaseStreamingVideo_HandleMediaResumed_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpenedFailed
struct UEpicBaseStreamingVideo_HandleMediaOpenedFailed_Params
{
public:
	class FString                                FailedUrl;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpened
struct UEpicBaseStreamingVideo_HandleMediaOpened_Params
{
public:
	class FString                                OpenedUrl;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaEndReached
struct UEpicBaseStreamingVideo_HandleMediaEndReached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaClosed
struct UEpicBaseStreamingVideo_HandleMediaClosed_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleLicensedAudioTreatmentChanged
struct UEpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged_Params
{
public:
	enum class EUCPTypes                         UCPType;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.GetSoundComponent
struct UEpicBaseStreamingVideo_GetSoundComponent_Params
{
public:
	class UMediaSoundComponent*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaSource
struct UEpicBaseStreamingVideo_GetMediaSource_Params
{
public:
	class UEpicStreamMediaSource*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayerOptions
struct UEpicBaseStreamingVideo_GetMediaPlayerOptions_Params
{
public:
	struct FMediaPlayerOptions                   ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayer
struct UEpicBaseStreamingVideo_GetMediaPlayer_Params
{
public:
	class UMediaPlayer*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.ClearSyncTimes
struct UEpicBaseStreamingVideo_ClearSyncTimes_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
