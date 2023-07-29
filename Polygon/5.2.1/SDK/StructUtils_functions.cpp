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


// Function StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStructUtilsFunctionLibrary::SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, int32& Value)
{
	static auto Func = Class->GetFunction("StructUtilsFunctionLibrary", "SetInstancedStructValue");

	Params::UStructUtilsFunctionLibrary_SetInstancedStructValue_Params Parms;

	Parms.InstancedStruct = InstancedStruct;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StructUtils.StructUtilsFunctionLibrary.Reset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UScriptStruct*               StructType                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStructUtilsFunctionLibrary::Reset(struct FInstancedStruct& InstancedStruct, class UScriptStruct* StructType)
{
	static auto Func = Class->GetFunction("StructUtilsFunctionLibrary", "Reset");

	Params::UStructUtilsFunctionLibrary_Reset_Params Parms;

	Parms.InstancedStruct = InstancedStruct;
	Parms.StructType = StructType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct            B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStructUtilsFunctionLibrary::NotEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B)
{
	static auto Func = Class->GetFunction("StructUtilsFunctionLibrary", "NotEqual_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInstancedStruct UStructUtilsFunctionLibrary::MakeInstancedStruct(int32& Value)
{
	static auto Func = Class->GetFunction("StructUtilsFunctionLibrary", "MakeInstancedStruct");

	Params::UStructUtilsFunctionLibrary_MakeInstancedStruct_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStructUtilsFunctionLibrary::IsValid_InstancedStruct(struct FInstancedStruct& InstancedStruct)
{
	static auto Func = Class->GetFunction("StructUtilsFunctionLibrary", "IsValid_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Params Parms;

	Parms.InstancedStruct = InstancedStruct;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EStructUtilsResult      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EStructUtilsResult UStructUtilsFunctionLibrary::IsInstancedStructValid(struct FInstancedStruct& InstancedStruct)
{
	static auto Func = Class->GetFunction("StructUtilsFunctionLibrary", "IsInstancedStructValid");

	Params::UStructUtilsFunctionLibrary_IsInstancedStructValid_Params Parms;

	Parms.InstancedStruct = InstancedStruct;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EStructUtilsResult      ExecResult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStructUtilsFunctionLibrary::GetInstancedStructValue(enum class EStructUtilsResult* ExecResult, struct FInstancedStruct& InstancedStruct, int32* Value)
{
	static auto Func = Class->GetFunction("StructUtilsFunctionLibrary", "GetInstancedStructValue");

	Params::UStructUtilsFunctionLibrary_GetInstancedStructValue_Params Parms;

	Parms.InstancedStruct = InstancedStruct;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ExecResult != nullptr)
		*ExecResult = Parms.ExecResult;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct            B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStructUtilsFunctionLibrary::EqualEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B)
{
	static auto Func = Class->GetFunction("StructUtilsFunctionLibrary", "EqualEqual_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Params Parms;

	Parms.A = A;
	Parms.B = B;

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
