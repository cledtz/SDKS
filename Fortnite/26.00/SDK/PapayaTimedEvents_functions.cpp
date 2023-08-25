#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PapayaTimedEvents.PapayaTimedEvents
// (Actor)

class UClass* UPapayaTimedEvents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PapayaTimedEvents");

	return Clss;
}


// PapayaTimedEvents PapayaTimedEvents.Default__PapayaTimedEvents
// (Public, ClassDefaultObject, ArchetypeObject)

class UPapayaTimedEvents* UPapayaTimedEvents::GetDefaultObj()
{
	static class UPapayaTimedEvents* Default = nullptr;

	if (!Default)
		Default = static_cast<UPapayaTimedEvents*>(UPapayaTimedEvents::StaticClass()->DefaultObject);

	return Default;
}


// Function PapayaTimedEvents.PapayaTimedEvents.ShutdownTimedEvents_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPapayaTimedEvents::ShutdownTimedEvents_Native()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PapayaTimedEvents", "ShutdownTimedEvents_Native");

	Params::UPapayaTimedEvents_ShutdownTimedEvents_Native_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PapayaTimedEvents.PapayaTimedEvents.SetupTimedEvents_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ScreenName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPapayaTimedEvents::SetupTimedEvents_Native(const class FString& ScreenName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PapayaTimedEvents", "SetupTimedEvents_Native");

	Params::UPapayaTimedEvents_SetupTimedEvents_Native_Params Parms{};

	Parms.ScreenName = ScreenName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PapayaTimedEvents.PapayaTimedEvents.ResetTimedEvents_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPapayaTimedEvents::ResetTimedEvents_Native()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PapayaTimedEvents", "ResetTimedEvents_Native");

	Params::UPapayaTimedEvents_ResetTimedEvents_Native_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PapayaTimedEvents.PapayaTimedEvents.OnRep_TimedEventsArray
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FMediaTimeEventArray        PreviousValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPapayaTimedEvents::OnRep_TimedEventsArray(struct FMediaTimeEventArray& PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PapayaTimedEvents", "OnRep_TimedEventsArray");

	Params::UPapayaTimedEvents_OnRep_TimedEventsArray_Params Parms{};

	Parms.PreviousValue = PreviousValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PapayaTimedEvents.PapayaTimedEvents.OnRep_ScreenName
// (Final, Native, Private)
// Parameters:
// class FString                      PreviousValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPapayaTimedEvents::OnRep_ScreenName(const class FString& PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PapayaTimedEvents", "OnRep_ScreenName");

	Params::UPapayaTimedEvents_OnRep_ScreenName_Params Parms{};

	Parms.PreviousValue = PreviousValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PapayaTimedEvents.PapayaTimedEvents.AddTimedEvent_Native
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventParam                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPapayaTimedEvents::AddTimedEvent_Native(const class FString& EventName, int64 Time, const class FString& EventParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PapayaTimedEvents", "AddTimedEvent_Native");

	Params::UPapayaTimedEvents_AddTimedEvent_Native_Params Parms{};

	Parms.EventName = EventName;
	Parms.Time = Time;
	Parms.EventParam = EventParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PapayaTimedEvents.PapayaTimedEventsResponderComponent
// (None)

class UClass* UPapayaTimedEventsResponderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PapayaTimedEventsResponderComponent");

	return Clss;
}


// PapayaTimedEventsResponderComponent PapayaTimedEvents.Default__PapayaTimedEventsResponderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPapayaTimedEventsResponderComponent* UPapayaTimedEventsResponderComponent::GetDefaultObj()
{
	static class UPapayaTimedEventsResponderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPapayaTimedEventsResponderComponent*>(UPapayaTimedEventsResponderComponent::StaticClass()->DefaultObject);

	return Default;
}

}


