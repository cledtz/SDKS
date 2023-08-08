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


// Function PropertyPath.PropertyPathTestObject.SetStructRef
// (Final, Native, Public)
// Parameters:
// struct FPropertyPathTestStruct     InStruct                                                         (Parm, NativeAccessSpecifierPublic)

void UPropertyPathTestObject::SetStructRef(const struct FPropertyPathTestStruct& InStruct)
{
	static auto Func = Class->GetFunction("PropertyPathTestObject", "SetStructRef");

	Params::UPropertyPathTestObject_SetStructRef_Params Parms;

	Parms.InStruct = InStruct;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PropertyPath.PropertyPathTestObject.SetStructConstRef
// (Final, Native, Public)
// Parameters:
// struct FPropertyPathTestStruct     InStruct                                                         (Parm, NativeAccessSpecifierPublic)

void UPropertyPathTestObject::SetStructConstRef(const struct FPropertyPathTestStruct& InStruct)
{
	static auto Func = Class->GetFunction("PropertyPathTestObject", "SetStructConstRef");

	Params::UPropertyPathTestObject_SetStructConstRef_Params Parms;

	Parms.InStruct = InStruct;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PropertyPath.PropertyPathTestObject.SetStruct
// (Final, Native, Public)
// Parameters:
// struct FPropertyPathTestStruct     InStruct                                                         (Parm, NativeAccessSpecifierPublic)

void UPropertyPathTestObject::SetStruct(const struct FPropertyPathTestStruct& InStruct)
{
	static auto Func = Class->GetFunction("PropertyPathTestObject", "SetStruct");

	Params::UPropertyPathTestObject_SetStruct_Params Parms;

	Parms.InStruct = InStruct;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PropertyPath.PropertyPathTestObject.SetFloat
// (Final, Native, Public)
// Parameters:
// float                              InFloat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropertyPathTestObject::SetFloat(float InFloat)
{
	static auto Func = Class->GetFunction("PropertyPathTestObject", "SetFloat");

	Params::UPropertyPathTestObject_SetFloat_Params Parms;

	Parms.InFloat = InFloat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PropertyPath.PropertyPathTestObject.GetStructRef
// (Final, Native, Public, Const)
// Parameters:
// struct FPropertyPathTestStruct     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FPropertyPathTestStruct UPropertyPathTestObject::GetStructRef()
{
	static auto Func = Class->GetFunction("PropertyPathTestObject", "GetStructRef");

	Params::UPropertyPathTestObject_GetStructRef_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.GetStructConstRef
// (Final, Native, Public, Const)
// Parameters:
// struct FPropertyPathTestStruct     ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FPropertyPathTestStruct UPropertyPathTestObject::GetStructConstRef()
{
	static auto Func = Class->GetFunction("PropertyPathTestObject", "GetStructConstRef");

	Params::UPropertyPathTestObject_GetStructConstRef_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.GetStruct
// (Final, Native, Public, Const)
// Parameters:
// struct FPropertyPathTestStruct     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FPropertyPathTestStruct UPropertyPathTestObject::GetStruct()
{
	static auto Func = Class->GetFunction("PropertyPathTestObject", "GetStruct");

	Params::UPropertyPathTestObject_GetStruct_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PropertyPath.PropertyPathTestObject.GetFloat
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPropertyPathTestObject::GetFloat()
{
	static auto Func = Class->GetFunction("PropertyPathTestObject", "GetFloat");

	Params::UPropertyPathTestObject_GetFloat_Params Parms;


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
