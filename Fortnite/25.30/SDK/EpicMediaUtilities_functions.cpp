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


// Function EpicMediaUtilities.EpicMediaServerTime.ServerRequestServerTime
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// double                             RequestUtcTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicMediaServerTime::ServerRequestServerTime(double RequestUtcTime)
{
	static auto Func = Class->GetFunction("EpicMediaServerTime", "ServerRequestServerTime");

	Params::UEpicMediaServerTime_ServerRequestServerTime_Params Parms;

	Parms.RequestUtcTime = RequestUtcTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaUtilities.EpicMediaServerTime.GetTimeUtc
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   OutDateTime                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicMediaServerTime::GetTimeUtc(struct FDateTime& OutDateTime)
{
	static auto Func = Class->GetFunction("EpicMediaServerTime", "GetTimeUtc");

	Params::UEpicMediaServerTime_GetTimeUtc_Params Parms;

	Parms.OutDateTime = OutDateTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EpicMediaUtilities.EpicMediaServerTime.ClientReportServerTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// double                             RequestUtcTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ServerUtcTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicMediaServerTime::ClientReportServerTime(double RequestUtcTime, double ServerUtcTime)
{
	static auto Func = Class->GetFunction("EpicMediaServerTime", "ClientReportServerTime");

	Params::UEpicMediaServerTime_ClientReportServerTime_Params Parms;

	Parms.RequestUtcTime = RequestUtcTime;
	Parms.ServerUtcTime = ServerUtcTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
