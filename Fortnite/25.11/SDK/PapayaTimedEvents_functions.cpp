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


// Function PapayaTimedEvents.PapayaTimedEvents.ShutdownTimedEvents_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void APapayaTimedEvents::ShutdownTimedEvents_Native()
{
	static auto Func = Class->GetFunction("PapayaTimedEvents", "ShutdownTimedEvents_Native");

	Params::APapayaTimedEvents_ShutdownTimedEvents_Native_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PapayaTimedEvents.PapayaTimedEvents.SetupTimedEvents_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ScreenName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APapayaTimedEvents::SetupTimedEvents_Native(const class FString& ScreenName)
{
	static auto Func = Class->GetFunction("PapayaTimedEvents", "SetupTimedEvents_Native");

	Params::APapayaTimedEvents_SetupTimedEvents_Native_Params Parms;

	Parms.ScreenName = ScreenName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PapayaTimedEvents.PapayaTimedEvents.ResetTimedEvents_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void APapayaTimedEvents::ResetTimedEvents_Native()
{
	static auto Func = Class->GetFunction("PapayaTimedEvents", "ResetTimedEvents_Native");

	Params::APapayaTimedEvents_ResetTimedEvents_Native_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PapayaTimedEvents.PapayaTimedEvents.OnRep_TimedEventsArray
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FMediaTimeEventArray        PreviousValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void APapayaTimedEvents::OnRep_TimedEventsArray(struct FMediaTimeEventArray& PreviousValue)
{
	static auto Func = Class->GetFunction("PapayaTimedEvents", "OnRep_TimedEventsArray");

	Params::APapayaTimedEvents_OnRep_TimedEventsArray_Params Parms;

	Parms.PreviousValue = PreviousValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PapayaTimedEvents.PapayaTimedEvents.OnRep_ScreenName
// (Final, Native, Private)
// Parameters:
// class FString                      PreviousValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APapayaTimedEvents::OnRep_ScreenName(const class FString& PreviousValue)
{
	static auto Func = Class->GetFunction("PapayaTimedEvents", "OnRep_ScreenName");

	Params::APapayaTimedEvents_OnRep_ScreenName_Params Parms;

	Parms.PreviousValue = PreviousValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PapayaTimedEvents.PapayaTimedEvents.AddTimedEvent_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventParam                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APapayaTimedEvents::AddTimedEvent_Native(const class FString& EventName, int64 Time, const class FString& EventParam)
{
	static auto Func = Class->GetFunction("PapayaTimedEvents", "AddTimedEvent_Native");

	Params::APapayaTimedEvents_AddTimedEvent_Native_Params Parms;

	Parms.EventName = EventName;
	Parms.Time = Time;
	Parms.EventParam = EventParam;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
