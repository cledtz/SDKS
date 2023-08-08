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

// 0x10 (0x10 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.TestCreativeDataChannelTarget
struct UCreativeDataChannelTarget_TestCreativeDataChannelTarget_Params
{
public:
	struct FCreativeDataChannelEvents            TestEvents;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.OnRep_Events
struct UCreativeDataChannelTarget_OnRep_Events_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.FireEvent
struct UCreativeDataChannelTarget_FireEvent_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.ReportServerStateStreamError
struct UCreativeDataChannelTargetRL_ReportServerStateStreamError_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UID;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_VersionByte
struct UCreativeDataChannelTargetRL_OnRep_VersionByte_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_TeamNames
struct UCreativeDataChannelTargetRL_OnRep_TeamNames_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_SeriesState
struct UCreativeDataChannelTargetRL_OnRep_SeriesState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTotal
struct UCreativeDataChannelTargetRL_OnRep_ScoreTotal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTeam
struct UCreativeDataChannelTargetRL_OnRep_ScoreTeam_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardTimeLeft
struct UCreativeDataChannelTargetRL_OnRep_ScoreboardTimeLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardBestOf
struct UCreativeDataChannelTargetRL_OnRep_ScoreboardBestOf_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerNames
struct UCreativeDataChannelTargetRL_OnRep_PlayerNames_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerCoords
struct UCreativeDataChannelTargetRL_OnRep_PlayerCoords_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoostCollected
struct UCreativeDataChannelTargetRL_OnRep_PlayerBoostCollected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoost
struct UCreativeDataChannelTargetRL_OnRep_PlayerBoost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_Overtime
struct UCreativeDataChannelTargetRL_OnRep_Overtime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStop
struct UCreativeDataChannelTargetRL_OnRep_MediaStop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStart
struct UCreativeDataChannelTargetRL_OnRep_MediaStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MatchState
struct UCreativeDataChannelTargetRL_OnRep_MatchState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_FinaleState
struct UCreativeDataChannelTargetRL_OnRep_FinaleState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_BallCoords
struct UCreativeDataChannelTargetRL_OnRep_BallCoords_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
