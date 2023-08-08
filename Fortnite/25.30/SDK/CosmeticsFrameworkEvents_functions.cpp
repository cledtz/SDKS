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


// Function CosmeticsFrameworkEvents.CosmeticsEventRegistrar.RegisterOnCosmeticApplicationCompleted_BP
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCosmeticsEventHandle       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FCosmeticsEventHandle UCosmeticsEventRegistrar::RegisterOnCosmeticApplicationCompleted_BP(FDelegateProperty_& Delegate, int32 Flags)
{
	static auto Func = Class->GetFunction("CosmeticsEventRegistrar", "RegisterOnCosmeticApplicationCompleted_BP");

	Params::UCosmeticsEventRegistrar_RegisterOnCosmeticApplicationCompleted_BP_Params Parms;

	Parms.Delegate = Delegate;
	Parms.Flags = Flags;

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
