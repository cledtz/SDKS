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


// Function REVRuntime.REVComponent.UpdateSimSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UREVComponent::UpdateSimSettings()
{
	static auto Func = Class->GetFunction("REVComponent", "UpdateSimSettings");

	Params::UREVComponent_UpdateSimSettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function REVRuntime.REVComponent.UpdateParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPitch                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRPM                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InThrottle                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InVelocity                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InGear                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInEnableShifting                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UREVComponent::UpdateParameters(float InPitch, float InRPM, float InThrottle, float InVelocity, int32 InGear, bool bInEnableShifting)
{
	static auto Func = Class->GetFunction("REVComponent", "UpdateParameters");

	Params::UREVComponent_UpdateParameters_Params Parms;

	Parms.InPitch = InPitch;
	Parms.InRPM = InRPM;
	Parms.InThrottle = InThrottle;
	Parms.InVelocity = InVelocity;
	Parms.InGear = InGear;
	Parms.bInEnableShifting = bInEnableShifting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function REVRuntime.REVComponent.SetSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URevSettings*                InSettings                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UREVComponent::SetSettings(class URevSettings* InSettings)
{
	static auto Func = Class->GetFunction("REVComponent", "SetSettings");

	Params::UREVComponent_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function REVRuntime.REVComponent.SetRevModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UREVModel*                   InModel                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UREVComponent::SetRevModel(class UREVModel* InModel)
{
	static auto Func = Class->GetFunction("REVComponent", "SetRevModel");

	Params::UREVComponent_SetRevModel_Params Parms;

	Parms.InModel = InModel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function REVRuntime.RevSettings.UpdateSettings
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void URevSettings::UpdateSettings()
{
	static auto Func = Class->GetFunction("RevSettings", "UpdateSettings");

	Params::URevSettings_UpdateSettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
