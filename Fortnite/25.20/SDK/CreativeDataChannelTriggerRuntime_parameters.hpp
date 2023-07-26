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

// 0x10 (0x10 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.TestCreativeDataChannelTarget
struct ACreativeDataChannelTarget_TestCreativeDataChannelTarget_Params
{
public:
	struct FCreativeDataChannelEvents            TestEvents;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.OnRep_Events
struct ACreativeDataChannelTarget_OnRep_Events_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.FireEvent
struct ACreativeDataChannelTarget_FireEvent_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.ReportServerStateStreamError
struct ACreativeDataChannelTargetRL_ReportServerStateStreamError_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UID;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_VersionByte
struct ACreativeDataChannelTargetRL_OnRep_VersionByte_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_TeamNames
struct ACreativeDataChannelTargetRL_OnRep_TeamNames_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_SeriesState
struct ACreativeDataChannelTargetRL_OnRep_SeriesState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTotal
struct ACreativeDataChannelTargetRL_OnRep_ScoreTotal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTeam
struct ACreativeDataChannelTargetRL_OnRep_ScoreTeam_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardTimeLeft
struct ACreativeDataChannelTargetRL_OnRep_ScoreboardTimeLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardBestOf
struct ACreativeDataChannelTargetRL_OnRep_ScoreboardBestOf_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerNames
struct ACreativeDataChannelTargetRL_OnRep_PlayerNames_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerCoords
struct ACreativeDataChannelTargetRL_OnRep_PlayerCoords_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoostCollected
struct ACreativeDataChannelTargetRL_OnRep_PlayerBoostCollected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoost
struct ACreativeDataChannelTargetRL_OnRep_PlayerBoost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_Overtime
struct ACreativeDataChannelTargetRL_OnRep_Overtime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStop
struct ACreativeDataChannelTargetRL_OnRep_MediaStop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStart
struct ACreativeDataChannelTargetRL_OnRep_MediaStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MatchState
struct ACreativeDataChannelTargetRL_OnRep_MatchState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_FinaleState
struct ACreativeDataChannelTargetRL_OnRep_FinaleState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_BallCoords
struct ACreativeDataChannelTargetRL_OnRep_BallCoords_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
