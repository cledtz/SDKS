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

// 0x8 (0x8 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.UseTimeFromMediaPlayer
struct AElectraDataChannelPlayer_UseTimeFromMediaPlayer_Params
{
public:
	class UMediaPlayer*                          InMediaPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer
struct AElectraDataChannelPlayer_PlayFromStateStreamServer_Params
{
public:
	class FString                                InStatePlaylistURL;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer
struct AElectraDataChannelPlayer_PlayFromMediaPlayer_Params
{
public:
	class UMediaPlayer*                          InMediaPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile
struct AElectraDataChannelPlayer_PlayFromFile_Params
{
public:
	class FString                                InFilename;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback
struct AElectraDataChannelPlayer_EndPlayback_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.UseTimeFromMediaPlayer
struct AElectraDataChannelRecorder_UseTimeFromMediaPlayer_Params
{
public:
	class UMediaPlayer*                          InMediaPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording
struct AElectraDataChannelRecorder_StartRecording_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile
struct AElectraDataChannelRecorder_RecordToFile_Params
{
public:
	class FString                                InFilename;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording
struct AElectraDataChannelRecorder_EndRecording_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelTarget.SetTargetAlias
struct AElectraDataChannelTarget_SetTargetAlias_Params
{
public:
	class FString                                InAlias;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias
struct AElectraDataChannelTarget_GetTargetAlias_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
