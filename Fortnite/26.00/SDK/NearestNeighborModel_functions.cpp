#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NearestNeighborModel.NearestNeighborModelVizSettings
// (None)

class UClass* UNearestNeighborModelVizSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborModelVizSettings");

	return Clss;
}


// NearestNeighborModelVizSettings NearestNeighborModel.Default__NearestNeighborModelVizSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborModelVizSettings* UNearestNeighborModelVizSettings::GetDefaultObj()
{
	static class UNearestNeighborModelVizSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborModelVizSettings*>(UNearestNeighborModelVizSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class NearestNeighborModel.NearestNeighborNetworkLayer
// (None)

class UClass* UNearestNeighborNetworkLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborNetworkLayer");

	return Clss;
}


// NearestNeighborNetworkLayer NearestNeighborModel.Default__NearestNeighborNetworkLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborNetworkLayer* UNearestNeighborNetworkLayer::GetDefaultObj()
{
	static class UNearestNeighborNetworkLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborNetworkLayer*>(UNearestNeighborNetworkLayer::StaticClass()->DefaultObject);

	return Default;
}


// Function NearestNeighborModel.NearestNeighborNetworkLayer.AddParameter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      Values                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Shape                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborNetworkLayer::AddParameter(TArray<float>& Values, TArray<int32>& Shape)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborNetworkLayer", "AddParameter");

	Params::UNearestNeighborNetworkLayer_AddParameter_Params Parms{};

	Parms.Values = Values;
	Parms.Shape = Shape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NearestNeighborModel.NearestNeighborNetworkLayer_Gemm_Prelu
// (None)

class UClass* UNearestNeighborNetworkLayer_Gemm_Prelu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborNetworkLayer_Gemm_Prelu");

	return Clss;
}


// NearestNeighborNetworkLayer_Gemm_Prelu NearestNeighborModel.Default__NearestNeighborNetworkLayer_Gemm_Prelu
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborNetworkLayer_Gemm_Prelu* UNearestNeighborNetworkLayer_Gemm_Prelu::GetDefaultObj()
{
	static class UNearestNeighborNetworkLayer_Gemm_Prelu* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborNetworkLayer_Gemm_Prelu*>(UNearestNeighborNetworkLayer_Gemm_Prelu::StaticClass()->DefaultObject);

	return Default;
}


// Class NearestNeighborModel.NearestNeighborNetworkLayer_Gemm
// (None)

class UClass* UNearestNeighborNetworkLayer_Gemm::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborNetworkLayer_Gemm");

	return Clss;
}


// NearestNeighborNetworkLayer_Gemm NearestNeighborModel.Default__NearestNeighborNetworkLayer_Gemm
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborNetworkLayer_Gemm* UNearestNeighborNetworkLayer_Gemm::GetDefaultObj()
{
	static class UNearestNeighborNetworkLayer_Gemm* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborNetworkLayer_Gemm*>(UNearestNeighborNetworkLayer_Gemm::StaticClass()->DefaultObject);

	return Default;
}


// Class NearestNeighborModel.NearestNeighborOptimizedNetwork
// (None)

class UClass* UNearestNeighborOptimizedNetwork::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborOptimizedNetwork");

	return Clss;
}


// NearestNeighborOptimizedNetwork NearestNeighborModel.Default__NearestNeighborOptimizedNetwork
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborOptimizedNetwork* UNearestNeighborOptimizedNetwork::GetDefaultObj()
{
	static class UNearestNeighborOptimizedNetwork* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborOptimizedNetwork*>(UNearestNeighborOptimizedNetwork::StaticClass()->DefaultObject);

	return Default;
}


// Function NearestNeighborModel.NearestNeighborOptimizedNetwork.Empty
// (Native, Public, BlueprintCallable)
// Parameters:

void UNearestNeighborOptimizedNetwork::Empty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborOptimizedNetwork", "Empty");

	Params::UNearestNeighborOptimizedNetwork_Empty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NearestNeighborModel.NearestNeighborOptimizedNetwork.AddLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LayerType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNearestNeighborNetworkLayer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNearestNeighborNetworkLayer* UNearestNeighborOptimizedNetwork::AddLayer(int32 LayerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborOptimizedNetwork", "AddLayer");

	Params::UNearestNeighborOptimizedNetwork_AddLayer_Params Parms{};

	Parms.LayerType = LayerType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NearestNeighborModel.NearestNeighborOptimizedNetworkInstance
// (None)

class UClass* UNearestNeighborOptimizedNetworkInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborOptimizedNetworkInstance");

	return Clss;
}


// NearestNeighborOptimizedNetworkInstance NearestNeighborModel.Default__NearestNeighborOptimizedNetworkInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborOptimizedNetworkInstance* UNearestNeighborOptimizedNetworkInstance::GetDefaultObj()
{
	static class UNearestNeighborOptimizedNetworkInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborOptimizedNetworkInstance*>(UNearestNeighborOptimizedNetworkInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class NearestNeighborModel.NearestNeighborOptimizedNetworkLoader
// (None)

class UClass* UNearestNeighborOptimizedNetworkLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborOptimizedNetworkLoader");

	return Clss;
}


// NearestNeighborOptimizedNetworkLoader NearestNeighborModel.Default__NearestNeighborOptimizedNetworkLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborOptimizedNetworkLoader* UNearestNeighborOptimizedNetworkLoader::GetDefaultObj()
{
	static class UNearestNeighborOptimizedNetworkLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborOptimizedNetworkLoader*>(UNearestNeighborOptimizedNetworkLoader::StaticClass()->DefaultObject);

	return Default;
}


// Function NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.LoadOptimizedNetwork
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      OnnxPath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNearestNeighborOptimizedNetworkLoader::LoadOptimizedNetwork(const class FString& OnnxPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborOptimizedNetworkLoader", "LoadOptimizedNetwork");

	Params::UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborOptimizedNetworkLoader", "GetOptimizedNetwork");

	Params::UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NearestNeighborModel.NearestNeighborModel
// (None)

class UClass* UNearestNeighborModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborModel");

	return Clss;
}


// NearestNeighborModel NearestNeighborModel.Default__NearestNeighborModel
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborModel* UNearestNeighborModel::GetDefaultObj()
{
	static class UNearestNeighborModel* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborModel*>(UNearestNeighborModel::StaticClass()->DefaultObject);

	return Default;
}


// Function NearestNeighborModel.NearestNeighborModel.VertexMean
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::VertexMean(int32 PartId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "VertexMean");

	Params::UNearestNeighborModel_VertexMean_Params Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.SetVertexMean
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      VertexMean                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetVertexMean(int32 PartId, TArray<float>& VertexMean)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "SetVertexMean");

	Params::UNearestNeighborModel_SetVertexMean_Params Parms{};

	Parms.PartId = PartId;
	Parms.VertexMean = VertexMean;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NearestNeighborModel.NearestNeighborModel.SetPCABasis
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      PCABasis                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetPCABasis(int32 PartId, TArray<float>& PCABasis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "SetPCABasis");

	Params::UNearestNeighborModel_SetPCABasis_Params Parms{};

	Parms.PartId = PartId;
	Parms.PCABasis = PCABasis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NearestNeighborModel.NearestNeighborModel.SetNumNeighbors
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumNeighbors                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetNumNeighbors(int32 PartId, int32 InNumNeighbors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "SetNumNeighbors");

	Params::UNearestNeighborModel_SetNumNeighbors_Params Parms{};

	Parms.PartId = PartId;
	Parms.InNumNeighbors = InNumNeighbors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NearestNeighborModel.NearestNeighborModel.SetNeighborOffsets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      NeighborOffsets                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetNeighborOffsets(int32 PartId, TArray<float>& NeighborOffsets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "SetNeighborOffsets");

	Params::UNearestNeighborModel_SetNeighborOffsets_Params Parms{};

	Parms.PartId = PartId;
	Parms.NeighborOffsets = NeighborOffsets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NearestNeighborModel.NearestNeighborModel.SetNeighborCoeffs
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      NeighborCoeffs                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNearestNeighborModel::SetNeighborCoeffs(int32 PartId, TArray<float>& NeighborCoeffs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "SetNeighborCoeffs");

	Params::UNearestNeighborModel_SetNeighborCoeffs_Params Parms{};

	Parms.PartId = PartId;
	Parms.NeighborCoeffs = NeighborCoeffs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NearestNeighborModel.NearestNeighborModel.PCABasis
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::PCABasis(int32 PartId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "PCABasis");

	Params::UNearestNeighborModel_PCABasis_Params Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.NeighborOffsets
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::NeighborOffsets(int32 PartId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "NeighborOffsets");

	Params::UNearestNeighborModel_NeighborOffsets_Params Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.NeighborCoeffs
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::NeighborCoeffs(int32 PartId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "NeighborCoeffs");

	Params::UNearestNeighborModel_NeighborCoeffs_Params Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetPCACoeffStart
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetPCACoeffStart(int32 PartId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "GetPCACoeffStart");

	Params::UNearestNeighborModel_GetPCACoeffStart_Params Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetPCACoeffNum
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetPCACoeffNum(int32 PartId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "GetPCACoeffNum");

	Params::UNearestNeighborModel_GetPCACoeffNum_Params Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetPartNumVerts
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetPartNumVerts(int32 PartId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "GetPartNumVerts");

	Params::UNearestNeighborModel_GetPartNumVerts_Params Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetNumParts
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetNumParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "GetNumParts");

	Params::UNearestNeighborModel_GetNumParts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.GetNumNeighbors
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PartId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNearestNeighborModel::GetNumNeighbors(int32 PartId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "GetNumNeighbors");

	Params::UNearestNeighborModel_GetNumNeighbors_Params Parms{};

	Parms.PartId = PartId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NearestNeighborModel.NearestNeighborModel.ClipInputs
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                      Input                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModel::ClipInputs(TArray<float>& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModel", "ClipInputs");

	Params::UNearestNeighborModel_ClipInputs_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NearestNeighborModel.NearestNeighborModelInputInfo
// (None)

class UClass* UNearestNeighborModelInputInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborModelInputInfo");

	return Clss;
}


// NearestNeighborModelInputInfo NearestNeighborModel.Default__NearestNeighborModelInputInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborModelInputInfo* UNearestNeighborModelInputInfo::GetDefaultObj()
{
	static class UNearestNeighborModelInputInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborModelInputInfo*>(UNearestNeighborModelInputInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class NearestNeighborModel.NearestNeighborModelInstance
// (None)

class UClass* UNearestNeighborModelInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NearestNeighborModelInstance");

	return Clss;
}


// NearestNeighborModelInstance NearestNeighborModel.Default__NearestNeighborModelInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UNearestNeighborModelInstance* UNearestNeighborModelInstance::GetDefaultObj()
{
	static class UNearestNeighborModelInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UNearestNeighborModelInstance*>(UNearestNeighborModelInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function NearestNeighborModel.NearestNeighborModelInstance.Eval
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      InputData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UNearestNeighborModelInstance::Eval(TArray<float>& InputData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NearestNeighborModelInstance", "Eval");

	Params::UNearestNeighborModelInstance_Eval_Params Parms{};

	Parms.InputData = InputData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NearestNeighborModel.OptimusSkeletonWithQuatsDataInterface
// (None)

class UClass* UOptimusSkeletonWithQuatsDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkeletonWithQuatsDataInterface");

	return Clss;
}


// OptimusSkeletonWithQuatsDataInterface NearestNeighborModel.Default__OptimusSkeletonWithQuatsDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkeletonWithQuatsDataInterface* UOptimusSkeletonWithQuatsDataInterface::GetDefaultObj()
{
	static class UOptimusSkeletonWithQuatsDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkeletonWithQuatsDataInterface*>(UOptimusSkeletonWithQuatsDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class NearestNeighborModel.OptimusSkeletonWithQuatsDataProvider
// (None)

class UClass* UOptimusSkeletonWithQuatsDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkeletonWithQuatsDataProvider");

	return Clss;
}


// OptimusSkeletonWithQuatsDataProvider NearestNeighborModel.Default__OptimusSkeletonWithQuatsDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkeletonWithQuatsDataProvider* UOptimusSkeletonWithQuatsDataProvider::GetDefaultObj()
{
	static class UOptimusSkeletonWithQuatsDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkeletonWithQuatsDataProvider*>(UOptimusSkeletonWithQuatsDataProvider::StaticClass()->DefaultObject);

	return Default;
}

}


