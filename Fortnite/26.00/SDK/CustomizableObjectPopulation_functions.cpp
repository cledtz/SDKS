#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CustomizableObjectPopulation.CustomizableObjectPopulation
// (None)

class UClass* UCustomizableObjectPopulation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableObjectPopulation");

	return Clss;
}


// CustomizableObjectPopulation CustomizableObjectPopulation.Default__CustomizableObjectPopulation
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableObjectPopulation* UCustomizableObjectPopulation::GetDefaultObj()
{
	static class UCustomizableObjectPopulation* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableObjectPopulation*>(UCustomizableObjectPopulation::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomizableObjectPopulation.CustomizableObjectPopulation.RegeneratePopulation
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Seed                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UCustomizableObjectInstance*>OutInstances                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              NumInstancesToGenerate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectPopulation::RegeneratePopulation(int32 Seed, TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectPopulation", "RegeneratePopulation");

	Params::UCustomizableObjectPopulation_RegeneratePopulation_Params Parms{};

	Parms.Seed = Seed;
	Parms.NumInstancesToGenerate = NumInstancesToGenerate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomizableObjectPopulation", "GeneratePopulation");

	Params::UCustomizableObjectPopulation_GeneratePopulation_Params Parms{};

	Parms.NumInstancesToGenerate = NumInstancesToGenerate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutInstances != nullptr)
		*OutInstances = Parms.OutInstances;

	return Parms.ReturnValue;

}


// Class CustomizableObjectPopulation.CustomizableObjectPopulationClass
// (None)

class UClass* UCustomizableObjectPopulationClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableObjectPopulationClass");

	return Clss;
}


// CustomizableObjectPopulationClass CustomizableObjectPopulation.Default__CustomizableObjectPopulationClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableObjectPopulationClass* UCustomizableObjectPopulationClass::GetDefaultObj()
{
	static class UCustomizableObjectPopulationClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableObjectPopulationClass*>(UCustomizableObjectPopulationClass::StaticClass()->DefaultObject);

	return Default;
}


// Class CustomizableObjectPopulation.CustomizableObjectPopulationGenerator
// (None)

class UClass* UCustomizableObjectPopulationGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizableObjectPopulationGenerator");

	return Clss;
}


// CustomizableObjectPopulationGenerator CustomizableObjectPopulation.Default__CustomizableObjectPopulationGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomizableObjectPopulationGenerator* UCustomizableObjectPopulationGenerator::GetDefaultObj()
{
	static class UCustomizableObjectPopulationGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizableObjectPopulationGenerator*>(UCustomizableObjectPopulationGenerator::StaticClass()->DefaultObject);

	return Default;
}

}


