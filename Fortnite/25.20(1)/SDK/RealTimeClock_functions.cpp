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


// Function RealTimeClock.RealTimeClockBlueprintLibrary.AddTimeToDate
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   DateTime                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   Timespan                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime URealTimeClockBlueprintLibrary::AddTimeToDate(struct FDateTime& DateTime, struct FTimespan& Timespan)
{
	static auto Func = Class->GetFunction("RealTimeClockBlueprintLibrary", "AddTimeToDate");

	Params::URealTimeClockBlueprintLibrary_AddTimeToDate_Params Parms;

	Parms.DateTime = DateTime;
	Parms.Timespan = Timespan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
