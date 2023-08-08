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

// 0x8 (0x8 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.UseTimeFromMediaPlayer
struct UElectraDataChannelPlayer_UseTimeFromMediaPlayer_Params
{
public:
	class UMediaPlayer*                          InMediaPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer
struct UElectraDataChannelPlayer_PlayFromStateStreamServer_Params
{
public:
	class FString                                InStatePlaylistURL;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer
struct UElectraDataChannelPlayer_PlayFromMediaPlayer_Params
{
public:
	class UMediaPlayer*                          InMediaPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile
struct UElectraDataChannelPlayer_PlayFromFile_Params
{
public:
	class FString                                InFilename;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback
struct UElectraDataChannelPlayer_EndPlayback_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.UseTimeFromMediaPlayer
struct UElectraDataChannelRecorder_UseTimeFromMediaPlayer_Params
{
public:
	class UMediaPlayer*                          InMediaPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording
struct UElectraDataChannelRecorder_StartRecording_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile
struct UElectraDataChannelRecorder_RecordToFile_Params
{
public:
	class FString                                InFilename;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording
struct UElectraDataChannelRecorder_EndRecording_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelTarget.SetTargetAlias
struct UElectraDataChannelTarget_SetTargetAlias_Params
{
public:
	class FString                                InAlias;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias
struct UElectraDataChannelTarget_GetTargetAlias_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
