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
// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
struct UAnnounce_EventCine_C_OnClientAnnouncementStop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
struct UAnnounce_EventCine_C_OnPlayerSkippedCutscene_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
struct UAnnounce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
struct UAnnounce_EventCine_C_HandleAllowSkip_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState
struct UAnnounce_EventCine_C_OnEnteredCinematicState_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
struct UAnnounce_EventCine_C_ExecuteUbergraph_Announce_EventCine_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3150[0x3];                                     // Fixing Size After Last Property 
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x18(0x18)(ConstParm, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3153[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x34(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	class UFortMediaInfo*                        CallFunc_SpawnObject_ReturnValue;                  // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


