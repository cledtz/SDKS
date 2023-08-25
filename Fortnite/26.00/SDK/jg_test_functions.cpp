#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class jg_test.jg_testBPLibrary
// (None)

class UClass* UJg_testBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("jg_testBPLibrary");

	return Clss;
}


// jg_testBPLibrary jg_test.Default__jg_testBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UJg_testBPLibrary* UJg_testBPLibrary::GetDefaultObj()
{
	static class UJg_testBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UJg_testBPLibrary*>(UJg_testBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function jg_test.jg_testBPLibrary.jg_testSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Param                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UJg_testBPLibrary::Jg_testSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("jg_testBPLibrary", "jg_testSampleFunction");

	Params::UJg_testBPLibrary_Jg_testSampleFunction_Params Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


