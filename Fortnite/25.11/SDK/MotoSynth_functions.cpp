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


// Function MotoSynth.SynthComponentMoto.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotoSynthRuntimeSettings   InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USynthComponentMoto::SetSettings(struct FMotoSynthRuntimeSettings& InSettings)
{
	static auto Func = Class->GetFunction("SynthComponentMoto", "SetSettings");

	Params::USynthComponentMoto_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotoSynth.SynthComponentMoto.SetRPM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRPM                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InTimeSec                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
{
	static auto Func = Class->GetFunction("SynthComponentMoto", "SetRPM");

	Params::USynthComponentMoto_SetRPM_Params Parms;

	Parms.InRPM = InRPM;
	Parms.InTimeSec = InTimeSec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotoSynth.SynthComponentMoto.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponentMoto::IsEnabled()
{
	static auto Func = Class->GetFunction("SynthComponentMoto", "IsEnabled");

	Params::USynthComponentMoto_IsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MotoSynth.SynthComponentMoto.GetRPMRange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutMinRPM                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutMaxRPM                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMoto::GetRPMRange(float* OutMinRPM, float* OutMaxRPM)
{
	static auto Func = Class->GetFunction("SynthComponentMoto", "GetRPMRange");

	Params::USynthComponentMoto_GetRPMRange_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMinRPM != nullptr)
		*OutMinRPM = Parms.OutMinRPM;

	if (OutMaxRPM != nullptr)
		*OutMaxRPM = Parms.OutMaxRPM;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
