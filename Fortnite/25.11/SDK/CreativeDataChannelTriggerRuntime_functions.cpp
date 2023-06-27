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


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.TestCreativeDataChannelTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FCreativeDataChannelEvents  TestEvents                                                       (Parm, NativeAccessSpecifierPublic)

void ACreativeDataChannelTarget::TestCreativeDataChannelTarget(const struct FCreativeDataChannelEvents& TestEvents)
{
	static auto Func = Class->GetFunction("CreativeDataChannelTarget", "TestCreativeDataChannelTarget");

	Params::ACreativeDataChannelTarget_TestCreativeDataChannelTarget_Params Parms;

	Parms.TestEvents = TestEvents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.OnRep_Events
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTarget::OnRep_Events()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTarget", "OnRep_Events");

	Params::ACreativeDataChannelTarget_OnRep_Events_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.FireEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACreativeDataChannelTarget::FireEvent(class FName EventName)
{
	static auto Func = Class->GetFunction("CreativeDataChannelTarget", "FireEvent");

	Params::ACreativeDataChannelTarget_FireEvent_Params Parms;

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.ReportServerStateStreamError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UID                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACreativeDataChannelTargetRL::ReportServerStateStreamError(const class FString& Error, const class FString& UID, const class FString& URL)
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "ReportServerStateStreamError");

	Params::ACreativeDataChannelTargetRL_ReportServerStateStreamError_Params Parms;

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

void ACreativeDataChannelTargetRL::OnRep_VersionByte()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_VersionByte");

	Params::ACreativeDataChannelTargetRL_OnRep_VersionByte_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_TeamNames
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_TeamNames()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_TeamNames");

	Params::ACreativeDataChannelTargetRL_OnRep_TeamNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_SeriesState
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_SeriesState()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_SeriesState");

	Params::ACreativeDataChannelTargetRL_OnRep_SeriesState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTotal
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_ScoreTotal()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreTotal");

	Params::ACreativeDataChannelTargetRL_OnRep_ScoreTotal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTeam
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_ScoreTeam()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreTeam");

	Params::ACreativeDataChannelTargetRL_OnRep_ScoreTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardTimeLeft
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_ScoreboardTimeLeft()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreboardTimeLeft");

	Params::ACreativeDataChannelTargetRL_OnRep_ScoreboardTimeLeft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardBestOf
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_ScoreboardBestOf()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_ScoreboardBestOf");

	Params::ACreativeDataChannelTargetRL_OnRep_ScoreboardBestOf_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerNames
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_PlayerNames()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerNames");

	Params::ACreativeDataChannelTargetRL_OnRep_PlayerNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerCoords
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_PlayerCoords()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerCoords");

	Params::ACreativeDataChannelTargetRL_OnRep_PlayerCoords_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoostCollected
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_PlayerBoostCollected()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerBoostCollected");

	Params::ACreativeDataChannelTargetRL_OnRep_PlayerBoostCollected_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoost
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_PlayerBoost()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_PlayerBoost");

	Params::ACreativeDataChannelTargetRL_OnRep_PlayerBoost_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_Overtime
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_Overtime()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_Overtime");

	Params::ACreativeDataChannelTargetRL_OnRep_Overtime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStop
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_MediaStop()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_MediaStop");

	Params::ACreativeDataChannelTargetRL_OnRep_MediaStop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStart
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_MediaStart()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_MediaStart");

	Params::ACreativeDataChannelTargetRL_OnRep_MediaStart_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MatchState
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_MatchState()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_MatchState");

	Params::ACreativeDataChannelTargetRL_OnRep_MatchState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_FinaleState
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_FinaleState()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_FinaleState");

	Params::ACreativeDataChannelTargetRL_OnRep_FinaleState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_BallCoords
// (Final, Native, Public)
// Parameters:

void ACreativeDataChannelTargetRL::OnRep_BallCoords()
{
	static auto Func = Class->GetFunction("CreativeDataChannelTargetRL", "OnRep_BallCoords");

	Params::ACreativeDataChannelTargetRL_OnRep_BallCoords_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
