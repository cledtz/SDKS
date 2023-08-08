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


// Function NearestNeighborModel.NearestNeighborNetworkLayer.AddParameter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      Values                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Shape                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborNetworkLayer::AddParameter(TArray<float>& Values, TArray<int32>& Shape)
{
	static auto Func = Class->GetFunction("NearestNeighborNetworkLayer", "AddParameter");

	Params::UNearestNeighborNetworkLayer_AddParameter_Params Parms;

	Parms.Values = Values;
	Parms.Shape = Shape;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NearestNeighborModel.NearestNeighborOptimizedNetwork.Empty
// (Native, Public, BlueprintCallable)
// Parameters:

void UNearestNeighborOptimizedNetwork::Empty()
{
	static auto Func = Class->GetFunction("NearestNeighborOptimizedNetwork", "Empty");

	Params::UNearestNeighborOptimizedNetwork_Empty_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NearestNeighborModel.NearestNeighborOptimizedNetwork.AddLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LayerType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNearestNeighborNetworkLayer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNearestNeighborNetworkLayer* UNearestNeighborOptimizedNetwork::AddLayer(int32 LayerType)
{
	static auto Func = Class->GetFunction("NearestNeighborOptimizedNetwork", "AddLayer");

	Params::UNearestNeighborOptimizedNetwork_AddLayer_Params Parms;

	Parms.LayerType = LayerType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.LoadOptimizedNetwork
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      OnnxPath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNearestNeighborOptimizedNetworkLoader::LoadOptimizedNetwork(const class FString& OnnxPath)
{
	static auto Func = Class->GetFunction("NearestNeighborOptimizedNetworkLoader", "LoadOptimizedNetwork");

	Params::UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Params Parms;

	Parms.OnnxPath = OnnxPath;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.GetOptimizedNetwork
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNearestNeighborOptimizedNetwork*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNearestNeighborOptimizedNetwork* UNearestNeighborOptimizedNetworkLoader::GetOptimizedNetwork()
{
	static auto Func = Class->GetFunction("NearestNeighborOptimizedNetworkLoader", "GetOptimizedNetwork");

	Params::UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.VertexMean
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::VertexMean(int32 PartId)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "VertexMean");

	Params::UNearestNeighborModel_VertexMean_Params Parms;

	Parms.PartId = PartId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.SetVertexMean
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      VertexMean                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetVertexMean(int32 PartId, TArray<float>& VertexMean)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "SetVertexMean");

	Params::UNearestNeighborModel_SetVertexMean_Params Parms;

	Parms.PartId = PartId;
	Parms.VertexMean = VertexMean;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NearestNeighborModel.NearestNeighborModel.SetPCABasis
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      PCABasis                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetPCABasis(int32 PartId, TArray<float>& PCABasis)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "SetPCABasis");

	Params::UNearestNeighborModel_SetPCABasis_Params Parms;

	Parms.PartId = PartId;
	Parms.PCABasis = PCABasis;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NearestNeighborModel.NearestNeighborModel.SetNumNeighbors
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumNeighbors                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetNumNeighbors(int32 PartId, int32 InNumNeighbors)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "SetNumNeighbors");

	Params::UNearestNeighborModel_SetNumNeighbors_Params Parms;

	Parms.PartId = PartId;
	Parms.InNumNeighbors = InNumNeighbors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NearestNeighborModel.NearestNeighborModel.SetNeighborOffsets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      NeighborOffsets                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetNeighborOffsets(int32 PartId, TArray<float>& NeighborOffsets)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "SetNeighborOffsets");

	Params::UNearestNeighborModel_SetNeighborOffsets_Params Parms;

	Parms.PartId = PartId;
	Parms.NeighborOffsets = NeighborOffsets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NearestNeighborModel.NearestNeighborModel.SetNeighborCoeffs
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      NeighborCoeffs                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetNeighborCoeffs(int32 PartId, TArray<float>& NeighborCoeffs)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "SetNeighborCoeffs");

	Params::UNearestNeighborModel_SetNeighborCoeffs_Params Parms;

	Parms.PartId = PartId;
	Parms.NeighborCoeffs = NeighborCoeffs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NearestNeighborModel.NearestNeighborModel.PCABasis
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::PCABasis(int32 PartId)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "PCABasis");

	Params::UNearestNeighborModel_PCABasis_Params Parms;

	Parms.PartId = PartId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.NeighborOffsets
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::NeighborOffsets(int32 PartId)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "NeighborOffsets");

	Params::UNearestNeighborModel_NeighborOffsets_Params Parms;

	Parms.PartId = PartId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.NeighborCoeffs
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::NeighborCoeffs(int32 PartId)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "NeighborCoeffs");

	Params::UNearestNeighborModel_NeighborCoeffs_Params Parms;

	Parms.PartId = PartId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetPCACoeffStart
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetPCACoeffStart(int32 PartId)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "GetPCACoeffStart");

	Params::UNearestNeighborModel_GetPCACoeffStart_Params Parms;

	Parms.PartId = PartId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetPCACoeffNum
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetPCACoeffNum(int32 PartId)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "GetPCACoeffNum");

	Params::UNearestNeighborModel_GetPCACoeffNum_Params Parms;

	Parms.PartId = PartId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetPartNumVerts
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetPartNumVerts(int32 PartId)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "GetPartNumVerts");

	Params::UNearestNeighborModel_GetPartNumVerts_Params Parms;

	Parms.PartId = PartId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetNumParts
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetNumParts()
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "GetNumParts");

	Params::UNearestNeighborModel_GetNumParts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetNumNeighbors
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetNumNeighbors(int32 PartId)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "GetNumNeighbors");

	Params::UNearestNeighborModel_GetNumNeighbors_Params Parms;

	Parms.PartId = PartId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.ClipInputs
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                      Input                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::ClipInputs(TArray<float>& Input)
{
	static auto Func = Class->GetFunction("NearestNeighborModel", "ClipInputs");

	Params::UNearestNeighborModel_ClipInputs_Params Parms;

	Parms.Input = Input;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModelInstance.Eval
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      InputData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModelInstance::Eval(TArray<float>& InputData)
{
	static auto Func = Class->GetFunction("NearestNeighborModelInstance", "Eval");

	Params::UNearestNeighborModelInstance_Eval_Params Parms;

	Parms.InputData = InputData;

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
