#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InterchangePipelines.InterchangeGenericCommonMeshesProperties
// (None)

class UClass* UInterchangeGenericCommonMeshesProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeGenericCommonMeshesProperties");

	return Clss;
}


// InterchangeGenericCommonMeshesProperties InterchangePipelines.Default__InterchangeGenericCommonMeshesProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeGenericCommonMeshesProperties* UInterchangeGenericCommonMeshesProperties::GetDefaultObj()
{
	static class UInterchangeGenericCommonMeshesProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeGenericCommonMeshesProperties*>(UInterchangeGenericCommonMeshesProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
// (None)

class UClass* UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties");

	return Clss;
}


// InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties InterchangePipelines.Default__InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties* UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::GetDefaultObj()
{
	static class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*>(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.GLTFPipelineSettings
// (None)

class UClass* UGLTFPipelineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GLTFPipelineSettings");

	return Clss;
}


// GLTFPipelineSettings InterchangePipelines.Default__GLTFPipelineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGLTFPipelineSettings* UGLTFPipelineSettings::GetDefaultObj()
{
	static class UGLTFPipelineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGLTFPipelineSettings*>(UGLTFPipelineSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangeGLTFPipeline
// (None)

class UClass* UInterchangeGLTFPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeGLTFPipeline");

	return Clss;
}


// InterchangeGLTFPipeline InterchangePipelines.Default__InterchangeGLTFPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeGLTFPipeline* UInterchangeGLTFPipeline::GetDefaultObj()
{
	static class UInterchangeGLTFPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeGLTFPipeline*>(UInterchangeGLTFPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.MaterialXPipelineSettings
// (None)

class UClass* UMaterialXPipelineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialXPipelineSettings");

	return Clss;
}


// MaterialXPipelineSettings InterchangePipelines.Default__MaterialXPipelineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialXPipelineSettings* UMaterialXPipelineSettings::GetDefaultObj()
{
	static class UMaterialXPipelineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialXPipelineSettings*>(UMaterialXPipelineSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangeMaterialXPipeline
// (None)

class UClass* UInterchangeMaterialXPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMaterialXPipeline");

	return Clss;
}


// InterchangeMaterialXPipeline InterchangePipelines.Default__InterchangeMaterialXPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMaterialXPipeline* UInterchangeMaterialXPipeline::GetDefaultObj()
{
	static class UInterchangeMaterialXPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMaterialXPipeline*>(UInterchangeMaterialXPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangeGenericAnimationPipeline
// (None)

class UClass* UInterchangeGenericAnimationPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeGenericAnimationPipeline");

	return Clss;
}


// InterchangeGenericAnimationPipeline InterchangePipelines.Default__InterchangeGenericAnimationPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeGenericAnimationPipeline* UInterchangeGenericAnimationPipeline::GetDefaultObj()
{
	static class UInterchangeGenericAnimationPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeGenericAnimationPipeline*>(UInterchangeGenericAnimationPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangeGenericAssetsPipeline
// (None)

class UClass* UInterchangeGenericAssetsPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeGenericAssetsPipeline");

	return Clss;
}


// InterchangeGenericAssetsPipeline InterchangePipelines.Default__InterchangeGenericAssetsPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeGenericAssetsPipeline* UInterchangeGenericAssetsPipeline::GetDefaultObj()
{
	static class UInterchangeGenericAssetsPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeGenericAssetsPipeline*>(UInterchangeGenericAssetsPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangeGenericMaterialPipeline
// (None)

class UClass* UInterchangeGenericMaterialPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeGenericMaterialPipeline");

	return Clss;
}


// InterchangeGenericMaterialPipeline InterchangePipelines.Default__InterchangeGenericMaterialPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeGenericMaterialPipeline* UInterchangeGenericMaterialPipeline::GetDefaultObj()
{
	static class UInterchangeGenericMaterialPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeGenericMaterialPipeline*>(UInterchangeGenericMaterialPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangeGenericMeshPipeline
// (None)

class UClass* UInterchangeGenericMeshPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeGenericMeshPipeline");

	return Clss;
}


// InterchangeGenericMeshPipeline InterchangePipelines.Default__InterchangeGenericMeshPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeGenericMeshPipeline* UInterchangeGenericMeshPipeline::GetDefaultObj()
{
	static class UInterchangeGenericMeshPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeGenericMeshPipeline*>(UInterchangeGenericMeshPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangeGenericLevelPipeline
// (None)

class UClass* UInterchangeGenericLevelPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeGenericLevelPipeline");

	return Clss;
}


// InterchangeGenericLevelPipeline InterchangePipelines.Default__InterchangeGenericLevelPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeGenericLevelPipeline* UInterchangeGenericLevelPipeline::GetDefaultObj()
{
	static class UInterchangeGenericLevelPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeGenericLevelPipeline*>(UInterchangeGenericLevelPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangeGenericTexturePipeline
// (None)

class UClass* UInterchangeGenericTexturePipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeGenericTexturePipeline");

	return Clss;
}


// InterchangeGenericTexturePipeline InterchangePipelines.Default__InterchangeGenericTexturePipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeGenericTexturePipeline* UInterchangeGenericTexturePipeline::GetDefaultObj()
{
	static class UInterchangeGenericTexturePipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeGenericTexturePipeline*>(UInterchangeGenericTexturePipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangePipelines.InterchangePipelineMeshesUtilities
// (None)

class UClass* UInterchangePipelineMeshesUtilities::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePipelineMeshesUtilities");

	return Clss;
}


// InterchangePipelineMeshesUtilities InterchangePipelines.Default__InterchangePipelineMeshesUtilities
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePipelineMeshesUtilities* UInterchangePipelineMeshesUtilities::GetDefaultObj()
{
	static class UInterchangePipelineMeshesUtilities* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePipelineMeshesUtilities*>(UInterchangePipelineMeshesUtilities::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInterchangePipelineMeshesUtilitiesContextContext                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UInterchangePipelineMeshesUtilities::SetContext(struct FInterchangePipelineMeshesUtilitiesContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "SetContext");

	Params::UInterchangePipelineMeshesUtilities_SetContext_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshInstanceUid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      MeshInstanceUid                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePipelineMeshesUtilities::IsValidMeshInstanceUid(const class FString& MeshInstanceUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "IsValidMeshInstanceUid");

	Params::UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Params Parms{};

	Parms.MeshInstanceUid = MeshInstanceUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshGeometryUid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      MeshGeometryUid                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePipelineMeshesUtilities::IsValidMeshGeometryUid(const class FString& MeshGeometryUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "IsValidMeshGeometryUid");

	Params::UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Params Parms{};

	Parms.MeshGeometryUid = MeshGeometryUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceSkeletonRootUid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      MeshInstanceUid                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangePipelineMeshesUtilities::GetMeshInstanceSkeletonRootUid(const class FString& MeshInstanceUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetMeshInstanceSkeletonRootUid");

	Params::UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Params Parms{};

	Parms.MeshInstanceUid = MeshInstanceUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceByUid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      MeshInstanceUid                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInterchangeMeshInstance    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FInterchangeMeshInstance UInterchangePipelineMeshesUtilities::GetMeshInstanceByUid(const class FString& MeshInstanceUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetMeshInstanceByUid");

	Params::UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Params Parms{};

	Parms.MeshInstanceUid = MeshInstanceUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometrySkeletonRootUid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      MeshGeometryUid                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangePipelineMeshesUtilities::GetMeshGeometrySkeletonRootUid(const class FString& MeshGeometryUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetMeshGeometrySkeletonRootUid");

	Params::UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Params Parms{};

	Parms.MeshGeometryUid = MeshGeometryUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometryByUid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      MeshGeometryUid                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInterchangeMeshGeometry    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FInterchangeMeshGeometry UInterchangePipelineMeshesUtilities::GetMeshGeometryByUid(const class FString& MeshGeometryUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetMeshGeometryByUid");

	Params::UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Params Parms{};

	Parms.MeshGeometryUid = MeshGeometryUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              MeshInstanceUids                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangePipelineMeshesUtilities::GetAllStaticMeshInstance(TArray<class FString>* MeshInstanceUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetAllStaticMeshInstance");

	Params::UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshInstanceUids != nullptr)
		*MeshInstanceUids = Parms.MeshInstanceUids;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshGeometry
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              MeshGeometryUids                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangePipelineMeshesUtilities::GetAllStaticMeshGeometry(TArray<class FString>* MeshGeometryUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetAllStaticMeshGeometry");

	Params::UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshGeometryUids != nullptr)
		*MeshGeometryUids = Parms.MeshGeometryUids;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              MeshInstanceUids                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangePipelineMeshesUtilities::GetAllSkinnedMeshInstance(TArray<class FString>* MeshInstanceUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetAllSkinnedMeshInstance");

	Params::UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshInstanceUids != nullptr)
		*MeshInstanceUids = Parms.MeshInstanceUids;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshGeometry
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              MeshGeometryUids                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangePipelineMeshesUtilities::GetAllSkinnedMeshGeometry(TArray<class FString>* MeshGeometryUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetAllSkinnedMeshGeometry");

	Params::UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshGeometryUids != nullptr)
		*MeshGeometryUids = Parms.MeshGeometryUids;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUidsUsingMeshGeometryUid
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      MeshGeometryUid                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              MeshInstanceUids                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangePipelineMeshesUtilities::GetAllMeshInstanceUidsUsingMeshGeometryUid(const class FString& MeshGeometryUid, TArray<class FString>* MeshInstanceUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetAllMeshInstanceUidsUsingMeshGeometryUid");

	Params::UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Params Parms{};

	Parms.MeshGeometryUid = MeshGeometryUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshInstanceUids != nullptr)
		*MeshInstanceUids = Parms.MeshInstanceUids;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              MeshInstanceUids                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangePipelineMeshesUtilities::GetAllMeshInstanceUids(TArray<class FString>* MeshInstanceUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetAllMeshInstanceUids");

	Params::UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshInstanceUids != nullptr)
		*MeshInstanceUids = Parms.MeshInstanceUids;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometryNotInstanced
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              MeshGeometryUids                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangePipelineMeshesUtilities::GetAllMeshGeometryNotInstanced(TArray<class FString>* MeshGeometryUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetAllMeshGeometryNotInstanced");

	Params::UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshGeometryUids != nullptr)
		*MeshGeometryUids = Parms.MeshGeometryUids;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometry
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              MeshGeometryUids                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangePipelineMeshesUtilities::GetAllMeshGeometry(TArray<class FString>* MeshGeometryUids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "GetAllMeshGeometry");

	Params::UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshGeometryUids != nullptr)
		*MeshGeometryUids = Parms.MeshGeometryUids;

}


// Function InterchangePipelines.InterchangePipelineMeshesUtilities.CreateInterchangePipelineMeshesUtilities
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangePipelineMeshesUtilities*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInterchangePipelineMeshesUtilities* UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities(class UInterchangeBaseNodeContainer* BaseNodeContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineMeshesUtilities", "CreateInterchangePipelineMeshesUtilities");

	Params::UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


