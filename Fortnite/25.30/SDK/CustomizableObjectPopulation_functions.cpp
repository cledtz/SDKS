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


// Function CustomizableObjectPopulation.CustomizableObjectPopulation.RegeneratePopulation
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Seed                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UCustomizableObjectInstance*>OutInstances                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NumInstancesToGenerate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectPopulation::RegeneratePopulation(int32 Seed, TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate)
{
	static auto Func = Class->GetFunction("CustomizableObjectPopulation", "RegeneratePopulation");

	Params::UCustomizableObjectPopulation_RegeneratePopulation_Params Parms;

	Parms.Seed = Seed;
	Parms.NumInstancesToGenerate = NumInstancesToGenerate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutInstances != nullptr)
		*OutInstances = Parms.OutInstances;

	return Parms.ReturnValue;

}


// Function CustomizableObjectPopulation.CustomizableObjectPopulation.GeneratePopulation
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCustomizableObjectInstance*>OutInstances                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NumInstancesToGenerate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectPopulation::GeneratePopulation(TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate)
{
	static auto Func = Class->GetFunction("CustomizableObjectPopulation", "GeneratePopulation");

	Params::UCustomizableObjectPopulation_GeneratePopulation_Params Parms;

	Parms.NumInstancesToGenerate = NumInstancesToGenerate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutInstances != nullptr)
		*OutInstances = Parms.OutInstances;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
