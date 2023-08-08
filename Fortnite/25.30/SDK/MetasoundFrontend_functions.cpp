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


// Function MetasoundFrontend.MetasoundParameterPack.SetTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyIfExists                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESetParamResult UMetasoundParameterPack::SetTrigger(class FName ParameterName, bool OnlyIfExists)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "SetTrigger");

	Params::UMetasoundParameterPack_SetTrigger_Params Parms;

	Parms.ParameterName = ParameterName;
	Parms.OnlyIfExists = OnlyIfExists;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyIfExists                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESetParamResult UMetasoundParameterPack::SetString(class FName ParameterName, const class FString& InValue, bool OnlyIfExists)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "SetString");

	Params::UMetasoundParameterPack_SetString_Params Parms;

	Parms.ParameterName = ParameterName;
	Parms.InValue = InValue;
	Parms.OnlyIfExists = OnlyIfExists;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyIfExists                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESetParamResult UMetasoundParameterPack::SetInt(class FName ParameterName, int32 InValue, bool OnlyIfExists)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "SetInt");

	Params::UMetasoundParameterPack_SetInt_Params Parms;

	Parms.ParameterName = ParameterName;
	Parms.InValue = InValue;
	Parms.OnlyIfExists = OnlyIfExists;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyIfExists                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESetParamResult UMetasoundParameterPack::SetFloat(class FName ParameterName, float InValue, bool OnlyIfExists)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "SetFloat");

	Params::UMetasoundParameterPack_SetFloat_Params Parms;

	Parms.ParameterName = ParameterName;
	Parms.InValue = InValue;
	Parms.OnlyIfExists = OnlyIfExists;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyIfExists                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESetParamResult UMetasoundParameterPack::SetBool(class FName ParameterName, bool InValue, bool OnlyIfExists)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "SetBool");

	Params::UMetasoundParameterPack_SetBool_Params Parms;

	Parms.ParameterName = ParameterName;
	Parms.InValue = InValue;
	Parms.OnlyIfExists = OnlyIfExists;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMetasoundParameterPack*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMetasoundParameterPack* UMetasoundParameterPack::MakeMetasoundParameterPack()
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "MakeMetasoundParameterPack");

	Params::UMetasoundParameterPack_MakeMetasoundParameterPack_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundParameterPack::HasTrigger(class FName ParameterName)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "HasTrigger");

	Params::UMetasoundParameterPack_HasTrigger_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundParameterPack::HasString(class FName ParameterName)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "HasString");

	Params::UMetasoundParameterPack_HasString_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundParameterPack::HasInt(class FName ParameterName)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "HasInt");

	Params::UMetasoundParameterPack_HasInt_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundParameterPack::HasFloat(class FName ParameterName)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "HasFloat");

	Params::UMetasoundParameterPack_HasFloat_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundParameterPack::HasBool(class FName ParameterName)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "HasBool");

	Params::UMetasoundParameterPack_HasBool_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundParameterPack::GetTrigger(class FName ParameterName, enum class ESetParamResult* Result)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "GetTrigger");

	Params::UMetasoundParameterPack_GetTrigger_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMetasoundParameterPack::GetString(class FName ParameterName, enum class ESetParamResult* Result)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "GetString");

	Params::UMetasoundParameterPack_GetString_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetInt
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMetasoundParameterPack::GetInt(class FName ParameterName, enum class ESetParamResult* Result)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "GetInt");

	Params::UMetasoundParameterPack_GetInt_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMetasoundParameterPack::GetFloat(class FName ParameterName, enum class ESetParamResult* Result)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "GetFloat");

	Params::UMetasoundParameterPack_GetFloat_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetBool
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ParameterName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESetParamResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundParameterPack::GetBool(class FName ParameterName, enum class ESetParamResult* Result)
{
	static auto Func = Class->GetFunction("MetasoundParameterPack", "GetBool");

	Params::UMetasoundParameterPack_GetBool_Params Parms;

	Parms.ParameterName = ParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
