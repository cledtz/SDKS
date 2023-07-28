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


// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Sharpness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDLSSLibrary::SetDLSSSharpness(float Sharpness)
{
	static auto Func = Class->GetFunction("DLSSLibrary", "SetDLSSSharpness");

	Params::UDLSSLibrary_SetDLSSSharpness_Params Parms;

	Parms.Sharpness = Sharpness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUDLSSMode              DLSSMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDLSSLibrary::SetDLSSMode(class UObject* WorldContextObject, enum class EUDLSSMode DLSSMode)
{
	static auto Func = Class->GetFunction("DLSSLibrary", "SetDLSSMode");

	Params::UDLSSLibrary_SetDLSSMode_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.DLSSMode = DLSSMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSSupport           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EUDLSSSupport UDLSSLibrary::QueryDLSSSupport()
{
	static auto Func = Class->GetFunction("DLSSLibrary", "QueryDLSSSupport");

	Params::UDLSSLibrary_QueryDLSSSupport_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDLSSLibrary::IsDLSSSupported()
{
	static auto Func = Class->GetFunction("DLSSLibrary", "IsDLSSSupported");

	Params::UDLSSLibrary_IsDLSSSupported_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              DLSSMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDLSSLibrary::IsDLSSModeSupported(enum class EUDLSSMode DLSSMode)
{
	static auto Func = Class->GetFunction("DLSSLibrary", "IsDLSSModeSupported");

	Params::UDLSSLibrary_IsDLSSModeSupported_Params Parms;

	Parms.DLSSMode = DLSSMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDLSSLibrary::IsDLSSEnabled()
{
	static auto Func = Class->GetFunction("DLSSLibrary", "IsDLSSEnabled");

	Params::UDLSSLibrary_IsDLSSEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDLSSLibrary::IsDLAAEnabled()
{
	static auto Func = Class->GetFunction("DLSSLibrary", "IsDLAAEnabled");

	Params::UDLSSLibrary_IsDLAAEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUDLSSMode>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<enum class EUDLSSMode> UDLSSLibrary::GetSupportedDLSSModes()
{
	static auto Func = Class->GetFunction("DLSSLibrary", "GetSupportedDLSSModes");

	Params::UDLSSLibrary_GetSupportedDLSSModes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDLSSLibrary::GetDLSSSharpness()
{
	static auto Func = Class->GetFunction("DLSSLibrary", "GetDLSSSharpness");

	Params::UDLSSLibrary_GetDLSSSharpness_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              MinScreenPercentage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxScreenPercentage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDLSSLibrary::GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
{
	static auto Func = Class->GetFunction("DLSSLibrary", "GetDLSSScreenPercentageRange");

	Params::UDLSSLibrary_GetDLSSScreenPercentageRange_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = Parms.MinScreenPercentage;

	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = Parms.MaxScreenPercentage;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              DLSSMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenResolution                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSupported                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OptimalScreenPercentage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsFixedScreenPercentage                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinScreenPercentage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxScreenPercentage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OptimalSharpness                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDLSSLibrary::GetDLSSModeInformation(enum class EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness)
{
	static auto Func = Class->GetFunction("DLSSLibrary", "GetDLSSModeInformation");

	Params::UDLSSLibrary_GetDLSSModeInformation_Params Parms;

	Parms.DLSSMode = DLSSMode;
	Parms.ScreenResolution = ScreenResolution;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bIsSupported != nullptr)
		*bIsSupported = Parms.bIsSupported;

	if (OptimalScreenPercentage != nullptr)
		*OptimalScreenPercentage = Parms.OptimalScreenPercentage;

	if (bIsFixedScreenPercentage != nullptr)
		*bIsFixedScreenPercentage = Parms.bIsFixedScreenPercentage;

	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = Parms.MinScreenPercentage;

	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = Parms.MaxScreenPercentage;

	if (OptimalSharpness != nullptr)
		*OptimalSharpness = Parms.OptimalSharpness;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EUDLSSMode UDLSSLibrary::GetDLSSMode()
{
	static auto Func = Class->GetFunction("DLSSLibrary", "GetDLSSMode");

	Params::UDLSSLibrary_GetDLSSMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinDriverVersionMajor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinDriverVersionMinor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor)
{
	static auto Func = Class->GetFunction("DLSSLibrary", "GetDLSSMinimumDriverVersion");

	Params::UDLSSLibrary_GetDLSSMinimumDriverVersion_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (MinDriverVersionMajor != nullptr)
		*MinDriverVersionMajor = Parms.MinDriverVersionMajor;

	if (MinDriverVersionMinor != nullptr)
		*MinDriverVersionMinor = Parms.MinDriverVersionMinor;

}


// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EUDLSSMode UDLSSLibrary::GetDefaultDLSSMode()
{
	static auto Func = Class->GetFunction("DLSSLibrary", "GetDefaultDLSSMode");

	Params::UDLSSLibrary_GetDefaultDLSSMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLSS
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDLSSLibrary::EnableDLSS(bool bEnabled)
{
	static auto Func = Class->GetFunction("DLSSLibrary", "EnableDLSS");

	Params::UDLSSLibrary_EnableDLSS_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDLSSLibrary::EnableDLAA(bool bEnabled)
{
	static auto Func = Class->GetFunction("DLSSLibrary", "EnableDLAA");

	Params::UDLSSLibrary_EnableDLAA_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
