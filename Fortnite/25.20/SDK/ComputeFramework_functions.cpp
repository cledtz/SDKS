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


// Function ComputeFramework.ComputeGraphComponent.QueueExecute
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComputeGraphComponent::QueueExecute()
{
	static auto Func = Class->GetFunction("ComputeGraphComponent", "QueueExecute");

	Params::UComputeGraphComponent_QueueExecute_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ComputeFramework.ComputeGraphComponent.DestroyDataProviders
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComputeGraphComponent::DestroyDataProviders()
{
	static auto Func = Class->GetFunction("ComputeGraphComponent", "DestroyDataProviders");

	Params::UComputeGraphComponent_DestroyDataProviders_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ComputeFramework.ComputeGraphComponent.CreateDataProviders
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InBindingIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InBindingObject                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComputeGraphComponent::CreateDataProviders(int32 InBindingIndex, class UObject* InBindingObject)
{
	static auto Func = Class->GetFunction("ComputeGraphComponent", "CreateDataProviders");

	Params::UComputeGraphComponent_CreateDataProviders_Params Parms;

	Parms.InBindingIndex = InBindingIndex;
	Parms.InBindingObject = InBindingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
