#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RealTimeClock.RealTimeClockBlueprintLibrary
// (None)

class UClass* URealTimeClockBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RealTimeClockBlueprintLibrary");

	return Clss;
}


// RealTimeClockBlueprintLibrary RealTimeClock.Default__RealTimeClockBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URealTimeClockBlueprintLibrary* URealTimeClockBlueprintLibrary::GetDefaultObj()
{
	static class URealTimeClockBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URealTimeClockBlueprintLibrary*>(URealTimeClockBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RealTimeClock.RealTimeClockBlueprintLibrary.AddTimeToDate
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   DateTime                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   Timespan                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime URealTimeClockBlueprintLibrary::AddTimeToDate(struct FDateTime& DateTime, struct FTimespan& Timespan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealTimeClockBlueprintLibrary", "AddTimeToDate");

	Params::URealTimeClockBlueprintLibrary_AddTimeToDate_Params Parms{};

	Parms.DateTime = DateTime;
	Parms.Timespan = Timespan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


