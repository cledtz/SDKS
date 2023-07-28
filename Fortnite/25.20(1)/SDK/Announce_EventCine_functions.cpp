#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UAnnounce_EventCine_C::OnClientAnnouncementStop()
{
	static auto Func = Class->GetFunction("Announce_EventCine_C", "OnClientAnnouncementStop");

	Params::UAnnounce_EventCine_C_OnClientAnnouncementStop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAnnounce_EventCine_C::OnPlayerSkippedCutscene()
{
	static auto Func = Class->GetFunction("Announce_EventCine_C", "OnPlayerSkippedCutscene");

	Params::UAnnounce_EventCine_C_OnPlayerSkippedCutscene_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAnnounce_EventCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Announce_EventCine_C", "HandleClientEvent_CinematicFinishedPlaying");

	Params::UAnnounce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnnounce_EventCine_C::HandleAllowSkip()
{
	static auto Func = Class->GetFunction("Announce_EventCine_C", "HandleAllowSkip");

	Params::UAnnounce_EventCine_C_HandleAllowSkip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAnnounce_EventCine_C::OnEnteredCinematicState()
{
	static auto Func = Class->GetFunction("Announce_EventCine_C", "OnEnteredCinematicState");

	Params::UAnnounce_EventCine_C_OnEnteredCinematicState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UFortMediaInfo*              CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAnnounce_EventCine_C::ExecuteUbergraph_Announce_EventCine(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortMediaInfo* CallFunc_SpawnObject_ReturnValue)
{
	static auto Func = Class->GetFunction("Announce_EventCine_C", "ExecuteUbergraph_Announce_EventCine");

	Params::UAnnounce_EventCine_C_ExecuteUbergraph_Announce_EventCine_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
