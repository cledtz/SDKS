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
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
struct UCinematicSequenceDeviceBase_Stop_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.SetSequence
struct UCinematicSequenceDeviceBase_SetSequence_Params
{
public:
	class ULevelSequence*                        Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlayRate
struct UCinematicSequenceDeviceBase_SetPlayRate_Params
{
public:
	float                                        PlayRate;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackTime
struct UCinematicSequenceDeviceBase_SetPlaybackTime_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackFrame
struct UCinematicSequenceDeviceBase_SetPlaybackFrame_Params
{
public:
	int32                                        Frame;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
struct UCinematicSequenceDeviceBase_Play_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
struct UCinematicSequenceDeviceBase_Pause_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
struct UCinematicSequenceDeviceBase_HandleSequencePlayerCreated_Params
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GoToEndAndStop
struct UCinematicSequenceDeviceBase_GoToEndAndStop_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
struct UCinematicSequenceDeviceBase_GetSequencePlayer_Params
{
public:
	class UMovieSceneSequencePlayer*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlayRate
struct UCinematicSequenceDeviceBase_GetPlayRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackTime
struct UCinematicSequenceDeviceBase_GetPlaybackTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackFrame
struct UCinematicSequenceDeviceBase_GetPlaybackFrame_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


