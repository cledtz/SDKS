#pragma once

// Dumper.

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

// 0x0 (0x0 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.UpdateStreamUrlArguments
struct UEpicStreamMediaSource_UpdateStreamUrlArguments_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.UpdatePlayerOptions
struct UEpicStreamMediaSource_UpdatePlayerOptions_Params
{
public:
	struct FMediaPlayerOptions                   PlayerOptions;                                     // 0x0(0x30)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMediaPlayerOptions                   ReturnValue;                                       // 0x30(0x30)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.ShouldStreamBePlaying
struct UEpicStreamMediaSource_ShouldStreamBePlaying_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CullRadius;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4176[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.ShouldProtectPlayerFromContent
struct UEpicStreamMediaSource_ShouldProtectPlayerFromContent_Params
{
public:
	enum class EUCPTypes                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.SetUrl
struct UEpicStreamMediaSource_SetUrl_Params
{
public:
	class FString                                InURL;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.SetSyncTimes
struct UEpicStreamMediaSource_SetSyncTimes_Params
{
public:
	struct FDateTime                             InNowTime;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             InStartTime;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DynamicStart;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4177[0x3];                                     // Fixing Size After Last Property..
	float                                        InOffset_s;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDelay_s;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4178[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.SetPlaybackStartTime
struct UEpicStreamMediaSource_SetPlaybackStartTime_Params
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.SetLocalizedOverlaysV2
struct UEpicStreamMediaSource_SetLocalizedOverlaysV2_Params
{
public:
	class UEpicMediaDownloadLocalizedOverlays*   InOverlays;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.RequestVideoUrl
struct UEpicStreamMediaSource_RequestVideoUrl_Params
{
public:
	class APlayerController*                     FortPC;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.ReinstateSharing
struct UEpicStreamMediaSource_ReinstateSharing_Params
{
public:
};

// 0x298 (0x298 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.MetadataResultHandler
struct UEpicStreamMediaSource_MetadataResultHandler_Params
{
public:
	struct FEpicMediaMetadataExt                 MetaData;                                          // 0x0(0x290)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x290(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4179[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.IsScreenRecordingInProgress
struct UEpicStreamMediaSource_IsScreenRecordingInProgress_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.HasLocalFilePlayback
struct UEpicStreamMediaSource_HasLocalFilePlayback_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.DisableSharing
struct UEpicStreamMediaSource_DisableSharing_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.ClearSyncTimes
struct UEpicStreamMediaSource_ClearSyncTimes_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function EpicStreamMediaSource.EpicStreamMediaSource.CancelVideoUrlRequest
struct UEpicStreamMediaSource_CancelVideoUrlRequest_Params
{
public:
	bool                                         bInCancelled;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
