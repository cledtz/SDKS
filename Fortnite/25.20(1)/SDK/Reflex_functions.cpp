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


// Function Reflex.ReflexBlueprintLibrary.SetReflexMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EReflexMode             Mode                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReflexBlueprintLibrary::SetReflexMode(enum class EReflexMode Mode)
{
	static auto Func = Class->GetFunction("ReflexBlueprintLibrary", "SetReflexMode");

	Params::UReflexBlueprintLibrary_SetReflexMode_Params Parms;

	Parms.Mode = Mode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReflexBlueprintLibrary::SetFlashIndicatorEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("ReflexBlueprintLibrary", "SetFlashIndicatorEnabled");

	Params::UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UReflexBlueprintLibrary::GetRenderLatencyInMs()
{
	static auto Func = Class->GetFunction("ReflexBlueprintLibrary", "GetRenderLatencyInMs");

	Params::UReflexBlueprintLibrary_GetRenderLatencyInMs_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetReflexMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EReflexMode             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EReflexMode UReflexBlueprintLibrary::GetReflexMode()
{
	static auto Func = Class->GetFunction("ReflexBlueprintLibrary", "GetReflexMode");

	Params::UReflexBlueprintLibrary_GetReflexMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReflexBlueprintLibrary::GetReflexAvailable()
{
	static auto Func = Class->GetFunction("ReflexBlueprintLibrary", "GetReflexAvailable");

	Params::UReflexBlueprintLibrary_GetReflexAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UReflexBlueprintLibrary::GetGameToRenderLatencyInMs()
{
	static auto Func = Class->GetFunction("ReflexBlueprintLibrary", "GetGameToRenderLatencyInMs");

	Params::UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UReflexBlueprintLibrary::GetGameLatencyInMs()
{
	static auto Func = Class->GetFunction("ReflexBlueprintLibrary", "GetGameLatencyInMs");

	Params::UReflexBlueprintLibrary_GetGameLatencyInMs_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReflexBlueprintLibrary::GetFlashIndicatorEnabled()
{
	static auto Func = Class->GetFunction("ReflexBlueprintLibrary", "GetFlashIndicatorEnabled");

	Params::UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Params Parms;


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
