#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MLDeformerFramework.MLDeformerAsset
// (None)

class UClass* UMLDeformerAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerAsset");

	return Clss;
}


// MLDeformerAsset MLDeformerFramework.Default__MLDeformerAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerAsset* UMLDeformerAsset::GetDefaultObj()
{
	static class UMLDeformerAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerAsset*>(UMLDeformerAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerVizSettings
// (None)

class UClass* UMLDeformerVizSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerVizSettings");

	return Clss;
}


// MLDeformerVizSettings MLDeformerFramework.Default__MLDeformerVizSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerVizSettings* UMLDeformerVizSettings::GetDefaultObj()
{
	static class UMLDeformerVizSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerVizSettings*>(UMLDeformerVizSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerGeomCacheVizSettings
// (None)

class UClass* UMLDeformerGeomCacheVizSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerGeomCacheVizSettings");

	return Clss;
}


// MLDeformerGeomCacheVizSettings MLDeformerFramework.Default__MLDeformerGeomCacheVizSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerGeomCacheVizSettings* UMLDeformerGeomCacheVizSettings::GetDefaultObj()
{
	static class UMLDeformerGeomCacheVizSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerGeomCacheVizSettings*>(UMLDeformerGeomCacheVizSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerMorphModelVizSettings
// (None)

class UClass* UMLDeformerMorphModelVizSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerMorphModelVizSettings");

	return Clss;
}


// MLDeformerMorphModelVizSettings MLDeformerFramework.Default__MLDeformerMorphModelVizSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerMorphModelVizSettings* UMLDeformerMorphModelVizSettings::GetDefaultObj()
{
	static class UMLDeformerMorphModelVizSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerMorphModelVizSettings*>(UMLDeformerMorphModelVizSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerComponent
// (None)

class UClass* UMLDeformerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerComponent");

	return Clss;
}


// MLDeformerComponent MLDeformerFramework.Default__MLDeformerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerComponent* UMLDeformerComponent::GetDefaultObj()
{
	static class UMLDeformerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerComponent*>(UMLDeformerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MLDeformerFramework.MLDeformerComponent.UpdateSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMLDeformerComponent::UpdateSkeletalMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerComponent", "UpdateSkeletalMeshComponent");

	Params::UMLDeformerComponent_UpdateSkeletalMeshComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MLDeformerFramework.MLDeformerComponent.SetWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NormalizedWeightValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMLDeformerComponent::SetWeight(float NormalizedWeightValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerComponent", "SetWeight");

	Params::UMLDeformerComponent_SetWeight_Params Parms{};

	Parms.NormalizedWeightValue = NormalizedWeightValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MLDeformerFramework.MLDeformerComponent.SetQualityLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InQualityLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMLDeformerComponent::SetQualityLevel(int32 InQualityLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerComponent", "SetQualityLevel");

	Params::UMLDeformerComponent_SetQualityLevel_Params Parms{};

	Parms.InQualityLevel = InQualityLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MLDeformerFramework.MLDeformerComponent.SetDeformerAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMLDeformerAsset*            InDeformerAsset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMLDeformerComponent::SetDeformerAsset(class UMLDeformerAsset* InDeformerAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerComponent", "SetDeformerAsset");

	Params::UMLDeformerComponent_SetDeformerAsset_Params Parms{};

	Parms.InDeformerAsset = InDeformerAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MLDeformerFramework.MLDeformerComponent.GetWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMLDeformerComponent::GetWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerComponent", "GetWeight");

	Params::UMLDeformerComponent_GetWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MLDeformerFramework.MLDeformerComponent.GetSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UMLDeformerComponent::GetSkeletalMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerComponent", "GetSkeletalMeshComponent");

	Params::UMLDeformerComponent_GetSkeletalMeshComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MLDeformerFramework.MLDeformerComponent.GetQualityLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMLDeformerComponent::GetQualityLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerComponent", "GetQualityLevel");

	Params::UMLDeformerComponent_GetQualityLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MLDeformerFramework.MLDeformerComponent.GetDeformerAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMLDeformerAsset*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMLDeformerAsset* UMLDeformerComponent::GetDeformerAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerComponent", "GetDeformerAsset");

	Params::UMLDeformerComponent_GetDeformerAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MLDeformerFramework.MLDeformerComponent.FindSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMLDeformerAsset*            Asset                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UMLDeformerComponent::FindSkeletalMeshComponent(class UMLDeformerAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerComponent", "FindSkeletalMeshComponent");

	Params::UMLDeformerComponent_FindSkeletalMeshComponent_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MLDeformerFramework.MLDeformerComponentSource
// (None)

class UClass* UMLDeformerComponentSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerComponentSource");

	return Clss;
}


// MLDeformerComponentSource MLDeformerFramework.Default__MLDeformerComponentSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerComponentSource* UMLDeformerComponentSource::GetDefaultObj()
{
	static class UMLDeformerComponentSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerComponentSource*>(UMLDeformerComponentSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerModel
// (None)

class UClass* UMLDeformerModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerModel");

	return Clss;
}


// MLDeformerModel MLDeformerFramework.Default__MLDeformerModel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerModel* UMLDeformerModel::GetDefaultObj()
{
	static class UMLDeformerModel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerModel*>(UMLDeformerModel::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerGeomCacheModel
// (None)

class UClass* UMLDeformerGeomCacheModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerGeomCacheModel");

	return Clss;
}


// MLDeformerGeomCacheModel MLDeformerFramework.Default__MLDeformerGeomCacheModel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerGeomCacheModel* UMLDeformerGeomCacheModel::GetDefaultObj()
{
	static class UMLDeformerGeomCacheModel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerGeomCacheModel*>(UMLDeformerGeomCacheModel::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerGraphDebugDataInterface
// (None)

class UClass* UMLDeformerGraphDebugDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerGraphDebugDataInterface");

	return Clss;
}


// MLDeformerGraphDebugDataInterface MLDeformerFramework.Default__MLDeformerGraphDebugDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerGraphDebugDataInterface* UMLDeformerGraphDebugDataInterface::GetDefaultObj()
{
	static class UMLDeformerGraphDebugDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerGraphDebugDataInterface*>(UMLDeformerGraphDebugDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerGraphDebugDataProvider
// (None)

class UClass* UMLDeformerGraphDebugDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerGraphDebugDataProvider");

	return Clss;
}


// MLDeformerGraphDebugDataProvider MLDeformerFramework.Default__MLDeformerGraphDebugDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerGraphDebugDataProvider* UMLDeformerGraphDebugDataProvider::GetDefaultObj()
{
	static class UMLDeformerGraphDebugDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerGraphDebugDataProvider*>(UMLDeformerGraphDebugDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerInputInfo
// (None)

class UClass* UMLDeformerInputInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerInputInfo");

	return Clss;
}


// MLDeformerInputInfo MLDeformerFramework.Default__MLDeformerInputInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerInputInfo* UMLDeformerInputInfo::GetDefaultObj()
{
	static class UMLDeformerInputInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerInputInfo*>(UMLDeformerInputInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerModelInstance
// (None)

class UClass* UMLDeformerModelInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerModelInstance");

	return Clss;
}


// MLDeformerModelInstance MLDeformerFramework.Default__MLDeformerModelInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerModelInstance* UMLDeformerModelInstance::GetDefaultObj()
{
	static class UMLDeformerModelInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerModelInstance*>(UMLDeformerModelInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerMorphModel
// (None)

class UClass* UMLDeformerMorphModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerMorphModel");

	return Clss;
}


// MLDeformerMorphModel MLDeformerFramework.Default__MLDeformerMorphModel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerMorphModel* UMLDeformerMorphModel::GetDefaultObj()
{
	static class UMLDeformerMorphModel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerMorphModel*>(UMLDeformerMorphModel::StaticClass()->DefaultObject);

	return Default;
}


// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsMaxWeights
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      MaxWeights                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMLDeformerMorphModel::SetMorphTargetsMaxWeights(TArray<float>& MaxWeights)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetsMaxWeights");

	Params::UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Params Parms{};

	Parms.MaxWeights = MaxWeights;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsErrorOrder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      MorphTargetOrder                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      ErrorValues                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMLDeformerMorphModel::SetMorphTargetsErrorOrder(TArray<int32>& MorphTargetOrder, TArray<float>& ErrorValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetsErrorOrder");

	Params::UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Params Parms{};

	Parms.MorphTargetOrder = MorphTargetOrder;
	Parms.ErrorValues = ErrorValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltas
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector3f>           Deltas                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMLDeformerMorphModel::SetMorphTargetDeltas(TArray<struct FVector3f>& Deltas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetDeltas");

	Params::UMLDeformerMorphModel_SetMorphTargetDeltas_Params Parms{};

	Parms.Deltas = Deltas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltaFloats
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      Deltas                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMLDeformerMorphModel::SetMorphTargetDeltaFloats(TArray<float>& Deltas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetDeltaFloats");

	Params::UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Params Parms{};

	Parms.Deltas = Deltas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MLDeformerFramework.MLDeformerMorphModelInputInfo
// (None)

class UClass* UMLDeformerMorphModelInputInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerMorphModelInputInfo");

	return Clss;
}


// MLDeformerMorphModelInputInfo MLDeformerFramework.Default__MLDeformerMorphModelInputInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerMorphModelInputInfo* UMLDeformerMorphModelInputInfo::GetDefaultObj()
{
	static class UMLDeformerMorphModelInputInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerMorphModelInputInfo*>(UMLDeformerMorphModelInputInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerFramework.MLDeformerMorphModelInstance
// (None)

class UClass* UMLDeformerMorphModelInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerMorphModelInstance");

	return Clss;
}


// MLDeformerMorphModelInstance MLDeformerFramework.Default__MLDeformerMorphModelInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerMorphModelInstance* UMLDeformerMorphModelInstance::GetDefaultObj()
{
	static class UMLDeformerMorphModelInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerMorphModelInstance*>(UMLDeformerMorphModelInstance::StaticClass()->DefaultObject);

	return Default;
}

}


