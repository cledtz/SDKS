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


// Function MLDeformerFramework.MLDeformerComponent.UpdateSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMLDeformerComponent::UpdateSkeletalMeshComponent()
{
	static auto Func = Class->GetFunction("MLDeformerComponent", "UpdateSkeletalMeshComponent");

	Params::UMLDeformerComponent_UpdateSkeletalMeshComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MLDeformerFramework.MLDeformerComponent.SetWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NormalizedWeightValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMLDeformerComponent::SetWeight(float NormalizedWeightValue)
{
	static auto Func = Class->GetFunction("MLDeformerComponent", "SetWeight");

	Params::UMLDeformerComponent_SetWeight_Params Parms;

	Parms.NormalizedWeightValue = NormalizedWeightValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MLDeformerFramework.MLDeformerComponent.SetQualityLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InQualityLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMLDeformerComponent::SetQualityLevel(int32 InQualityLevel)
{
	static auto Func = Class->GetFunction("MLDeformerComponent", "SetQualityLevel");

	Params::UMLDeformerComponent_SetQualityLevel_Params Parms;

	Parms.InQualityLevel = InQualityLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MLDeformerFramework.MLDeformerComponent.SetDeformerAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMLDeformerAsset*            InDeformerAsset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMLDeformerComponent::SetDeformerAsset(class UMLDeformerAsset* InDeformerAsset)
{
	static auto Func = Class->GetFunction("MLDeformerComponent", "SetDeformerAsset");

	Params::UMLDeformerComponent_SetDeformerAsset_Params Parms;

	Parms.InDeformerAsset = InDeformerAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MLDeformerFramework.MLDeformerComponent.GetWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMLDeformerComponent::GetWeight()
{
	static auto Func = Class->GetFunction("MLDeformerComponent", "GetWeight");

	Params::UMLDeformerComponent_GetWeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MLDeformerFramework.MLDeformerComponent.GetSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UMLDeformerComponent::GetSkeletalMeshComponent()
{
	static auto Func = Class->GetFunction("MLDeformerComponent", "GetSkeletalMeshComponent");

	Params::UMLDeformerComponent_GetSkeletalMeshComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MLDeformerFramework.MLDeformerComponent.GetQualityLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMLDeformerComponent::GetQualityLevel()
{
	static auto Func = Class->GetFunction("MLDeformerComponent", "GetQualityLevel");

	Params::UMLDeformerComponent_GetQualityLevel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MLDeformerFramework.MLDeformerComponent.GetDeformerAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMLDeformerAsset*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMLDeformerAsset* UMLDeformerComponent::GetDeformerAsset()
{
	static auto Func = Class->GetFunction("MLDeformerComponent", "GetDeformerAsset");

	Params::UMLDeformerComponent_GetDeformerAsset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MLDeformerFramework.MLDeformerComponent.FindSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMLDeformerAsset*            Asset                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UMLDeformerComponent::FindSkeletalMeshComponent(class UMLDeformerAsset* Asset)
{
	static auto Func = Class->GetFunction("MLDeformerComponent", "FindSkeletalMeshComponent");

	Params::UMLDeformerComponent_FindSkeletalMeshComponent_Params Parms;

	Parms.Asset = Asset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsMaxWeights
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      MaxWeights                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMLDeformerMorphModel::SetMorphTargetsMaxWeights(TArray<float>& MaxWeights)
{
	static auto Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetsMaxWeights");

	Params::UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Params Parms;

	Parms.MaxWeights = MaxWeights;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsErrorOrder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      MorphTargetOrder                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      ErrorValues                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMLDeformerMorphModel::SetMorphTargetsErrorOrder(TArray<int32>& MorphTargetOrder, TArray<float>& ErrorValues)
{
	static auto Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetsErrorOrder");

	Params::UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Params Parms;

	Parms.MorphTargetOrder = MorphTargetOrder;
	Parms.ErrorValues = ErrorValues;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltas
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector3f>           Deltas                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMLDeformerMorphModel::SetMorphTargetDeltas(TArray<struct FVector3f>& Deltas)
{
	static auto Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetDeltas");

	Params::UMLDeformerMorphModel_SetMorphTargetDeltas_Params Parms;

	Parms.Deltas = Deltas;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltaFloats
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      Deltas                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMLDeformerMorphModel::SetMorphTargetDeltaFloats(TArray<float>& Deltas)
{
	static auto Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetDeltaFloats");

	Params::UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Params Parms;

	Parms.Deltas = Deltas;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
