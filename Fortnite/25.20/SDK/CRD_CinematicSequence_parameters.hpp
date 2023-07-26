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
struct ACinematicSequenceDeviceBase_Stop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
struct ACinematicSequenceDeviceBase_Play_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
struct ACinematicSequenceDeviceBase_Pause_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
struct ACinematicSequenceDeviceBase_HandleSequencePlayerCreated_Params
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
struct ACinematicSequenceDeviceBase_GetSequencePlayer_Params
{
public:
	class UMovieSceneSequencePlayer*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
