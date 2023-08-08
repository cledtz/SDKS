#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.TestCreativeDataChannelTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FCreativeDataChannelEvents  TestEvents                                                       (Parm, NativeAccessSpecifierPublic)

void UCreativeDataChannelTarget::TestCreativeDataChannelTarget(const struct FCreativeDataChannelEvents& TestEvents)
{
	static auto Func = Class->GetFunction("CreativeDataChannelTarget", "TestCreativeDataChannelTarget");

	Params::UCreativeDataChannelTarget_TestCreativeDataChannelTarget_Params Parms;

	Parms.TestEvents = TestEvents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.OnRep_Events
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTarget::OnRep_Events()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTarget", "OnRep_Events");

	Params::UCreativeDataChannelTarget_OnRep_Events_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.FireEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeDataChannelTarget::FireEvent(class FName EventName)
{
	static auto Func = Class->GetFunction("CreativeDataChannelTarget", "FireEvent");

	Params::UCreativeDataChannelTarget_FireEvent_Params Parms;

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.ReportServerStateStreamError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UID                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeDataChannelTargetRL::ReportServerStateStreamError(const class FString& Error, const class FString& UID, const class FString& URL)
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "ReportServerStateStreamError");

	Params::UCreativeDataChannelTargetRL_ReportServerStateStreamError_Params Parms;

	Parms.Error = Error;
	Parms.UID = UID;
	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_VersionByte
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_VersionByte()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_VersionByte");

	Params::UCreativeDataChannelTargetRL_OnRep_VersionByte_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_TeamNames
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_TeamNames()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_TeamNames");

	Params::UCreativeDataChannelTargetRL_OnRep_TeamNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_SeriesState
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_SeriesState()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_SeriesState");

	Params::UCreativeDataChannelTargetRL_OnRep_SeriesState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTotal
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_ScoreTotal()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreTotal");

	Params::UCreativeDataChannelTargetRL_OnRep_ScoreTotal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTeam
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_ScoreTeam()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreTeam");

	Params::UCreativeDataChannelTargetRL_OnRep_ScoreTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardTimeLeft
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_ScoreboardTimeLeft()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreboardTimeLeft");

	Params::UCreativeDataChannelTargetRL_OnRep_ScoreboardTimeLeft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardBestOf
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_ScoreboardBestOf()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreboardBestOf");

	Params::UCreativeDataChannelTargetRL_OnRep_ScoreboardBestOf_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerNames
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_PlayerNames()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerNames");

	Params::UCreativeDataChannelTargetRL_OnRep_PlayerNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerCoords
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_PlayerCoords()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerCoords");

	Params::UCreativeDataChannelTargetRL_OnRep_PlayerCoords_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoostCollected
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_PlayerBoostCollected()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerBoostCollected");

	Params::UCreativeDataChannelTargetRL_OnRep_PlayerBoostCollected_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoost
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_PlayerBoost()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerBoost");

	Params::UCreativeDataChannelTargetRL_OnRep_PlayerBoost_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_Overtime
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_Overtime()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_Overtime");

	Params::UCreativeDataChannelTargetRL_OnRep_Overtime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStop
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_MediaStop()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_MediaStop");

	Params::UCreativeDataChannelTargetRL_OnRep_MediaStop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStart
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_MediaStart()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_MediaStart");

	Params::UCreativeDataChannelTargetRL_OnRep_MediaStart_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MatchState
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_MatchState()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_MatchState");

	Params::UCreativeDataChannelTargetRL_OnRep_MatchState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_FinaleState
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_FinaleState()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_FinaleState");

	Params::UCreativeDataChannelTargetRL_OnRep_FinaleState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_BallCoords
// (Final, Native, Public)
// Parameters:

void UCreativeDataChannelTargetRL::OnRep_BallCoords()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_BallCoords");

	Params::UCreativeDataChannelTargetRL_OnRep_BallCoords_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
