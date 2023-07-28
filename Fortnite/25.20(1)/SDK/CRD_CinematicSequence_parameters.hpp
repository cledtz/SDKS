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
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
struct UCinematicSequenceDeviceBase_Stop_Params
{
public:
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

// 0x8 (0x8 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
struct UCinematicSequenceDeviceBase_GetSequencePlayer_Params
{
public:
	class UMovieSceneSequencePlayer*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
