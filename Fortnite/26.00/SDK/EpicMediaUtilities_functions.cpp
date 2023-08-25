#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EpicMediaUtilities.EpicMediaServerTime
// (Actor)

class UClass* UEpicMediaServerTime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicMediaServerTime");

	return Clss;
}


// EpicMediaServerTime EpicMediaUtilities.Default__EpicMediaServerTime
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicMediaServerTime* UEpicMediaServerTime::GetDefaultObj()
{
	static class UEpicMediaServerTime* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicMediaServerTime*>(UEpicMediaServerTime::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicMediaUtilities.EpicMediaServerTime.ServerRequestServerTime
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// double                             RequestUtcTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicMediaServerTime::ServerRequestServerTime(double RequestUtcTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicMediaServerTime", "ServerRequestServerTime");

	Params::UEpicMediaServerTime_ServerRequestServerTime_Params Parms{};

	Parms.RequestUtcTime = RequestUtcTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicMediaUtilities.EpicMediaServerTime.GetTimeUtc
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   OutDateTime                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicMediaServerTime::GetTimeUtc(struct FDateTime& OutDateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicMediaServerTime", "GetTimeUtc");

	Params::UEpicMediaServerTime_GetTimeUtc_Params Parms{};

	Parms.OutDateTime = OutDateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicMediaUtilities.EpicMediaServerTime.ClientReportServerTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// double                             RequestUtcTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ServerUtcTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicMediaServerTime::ClientReportServerTime(double RequestUtcTime, double ServerUtcTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicMediaServerTime", "ClientReportServerTime");

	Params::UEpicMediaServerTime_ClientReportServerTime_Params Parms{};

	Parms.RequestUtcTime = RequestUtcTime;
	Parms.ServerUtcTime = ServerUtcTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


