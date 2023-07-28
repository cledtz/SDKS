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


// Function jg_test.jg_testBPLibrary.jg_testSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Param                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UJg_testBPLibrary::Jg_testSampleFunction(float Param)
{
	static auto Func = Class->GetFunction("jg_testBPLibrary", "jg_testSampleFunction");

	Params::UJg_testBPLibrary_Jg_testSampleFunction_Params Parms;

	Parms.Param = Param;

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
