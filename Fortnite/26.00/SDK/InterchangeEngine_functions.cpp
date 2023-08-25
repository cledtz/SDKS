#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InterchangeEngine.InterchangeBlueprintPipelineBase
// (Blueprint)

class UClass* UInterchangeBlueprintPipelineBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeBlueprintPipelineBase");

	return Clss;
}


// InterchangeBlueprintPipelineBase InterchangeEngine.Default__InterchangeBlueprintPipelineBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeBlueprintPipelineBase* UInterchangeBlueprintPipelineBase::GetDefaultObj()
{
	static class UInterchangeBlueprintPipelineBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeBlueprintPipelineBase*>(UInterchangeBlueprintPipelineBase::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeEngine.InterchangeFilePickerBase
// (None)

class UClass* UInterchangeFilePickerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeFilePickerBase");

	return Clss;
}


// InterchangeFilePickerBase InterchangeEngine.Default__InterchangeFilePickerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeFilePickerBase* UInterchangeFilePickerBase::GetDefaultObj()
{
	static class UInterchangeFilePickerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeFilePickerBase*>(UInterchangeFilePickerBase::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorType
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInterchangeTranslatorTypeTranslatorType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInterchangeFilePickerParametersParameters                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// TArray<class FString>              OutFilenames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFilePickerBase::ScriptedFilePickerForTranslatorType(enum class EInterchangeTranslatorType TranslatorType, struct FInterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFilePickerBase", "ScriptedFilePickerForTranslatorType");

	Params::UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Params Parms{};

	Parms.TranslatorType = TranslatorType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Parameters != nullptr)
		*Parameters = Parms.Parameters;

	if (OutFilenames != nullptr)
		*OutFilenames = Parms.OutFilenames;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorAssetType
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInterchangeTranslatorAssetTypeTranslatorAssetType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInterchangeFilePickerParametersParameters                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// TArray<class FString>              OutFilenames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFilePickerBase::ScriptedFilePickerForTranslatorAssetType(enum class EInterchangeTranslatorAssetType TranslatorAssetType, struct FInterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFilePickerBase", "ScriptedFilePickerForTranslatorAssetType");

	Params::UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Params Parms{};

	Parms.TranslatorAssetType = TranslatorAssetType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Parameters != nullptr)
		*Parameters = Parms.Parameters;

	if (OutFilenames != nullptr)
		*OutFilenames = Parms.OutFilenames;

	return Parms.ReturnValue;

}


// Class InterchangeEngine.InterchangePipelineConfigurationBase
// (None)

class UClass* UInterchangePipelineConfigurationBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePipelineConfigurationBase");

	return Clss;
}


// InterchangePipelineConfigurationBase InterchangeEngine.Default__InterchangePipelineConfigurationBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePipelineConfigurationBase* UInterchangePipelineConfigurationBase::GetDefaultObj()
{
	static class UInterchangePipelineConfigurationBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePipelineConfigurationBase*>(UInterchangePipelineConfigurationBase::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowScenePipelineConfigurationDialog
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInterchangeStackInfo>PipelineStacks                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UInterchangePipelineBase*>OutPipelines                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UInterchangeSourceData*      SourceData                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInterchangePipelineConfigurationDialogResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowScenePipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineConfigurationBase", "ScriptedShowScenePipelineConfigurationDialog");

	Params::UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Params Parms{};

	Parms.SourceData = SourceData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PipelineStacks != nullptr)
		*PipelineStacks = Parms.PipelineStacks;

	if (OutPipelines != nullptr)
		*OutPipelines = Parms.OutPipelines;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowReimportPipelineConfigurationDialog
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInterchangeStackInfo>PipelineStacks                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UInterchangePipelineBase*>OutPipelines                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UInterchangeSourceData*      SourceData                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInterchangePipelineConfigurationDialogResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowReimportPipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineConfigurationBase", "ScriptedShowReimportPipelineConfigurationDialog");

	Params::UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Params Parms{};

	Parms.SourceData = SourceData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PipelineStacks != nullptr)
		*PipelineStacks = Parms.PipelineStacks;

	if (OutPipelines != nullptr)
		*OutPipelines = Parms.OutPipelines;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowPipelineConfigurationDialog
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInterchangeStackInfo>PipelineStacks                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UInterchangePipelineBase*>OutPipelines                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UInterchangeSourceData*      SourceData                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInterchangePipelineConfigurationDialogResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowPipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineConfigurationBase", "ScriptedShowPipelineConfigurationDialog");

	Params::UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Params Parms{};

	Parms.SourceData = SourceData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PipelineStacks != nullptr)
		*PipelineStacks = Parms.PipelineStacks;

	if (OutPipelines != nullptr)
		*OutPipelines = Parms.OutPipelines;

	return Parms.ReturnValue;

}


// Class InterchangeEngine.InterchangeProjectSettings
// (None)

class UClass* UInterchangeProjectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeProjectSettings");

	return Clss;
}


// InterchangeProjectSettings InterchangeEngine.Default__InterchangeProjectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeProjectSettings* UInterchangeProjectSettings::GetDefaultObj()
{
	static class UInterchangeProjectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeProjectSettings*>(UInterchangeProjectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeEngine.InterchangePythonPipelineBase
// (None)

class UClass* UInterchangePythonPipelineBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePythonPipelineBase");

	return Clss;
}


// InterchangePythonPipelineBase InterchangeEngine.Default__InterchangePythonPipelineBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePythonPipelineBase* UInterchangePythonPipelineBase::GetDefaultObj()
{
	static class UInterchangePythonPipelineBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePythonPipelineBase*>(UInterchangePythonPipelineBase::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeEngine.InterchangePythonPipelineAsset
// (None)

class UClass* UInterchangePythonPipelineAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePythonPipelineAsset");

	return Clss;
}


// InterchangePythonPipelineAsset InterchangeEngine.Default__InterchangePythonPipelineAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePythonPipelineAsset* UInterchangePythonPipelineAsset::GetDefaultObj()
{
	static class UInterchangePythonPipelineAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePythonPipelineAsset*>(UInterchangePythonPipelineAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeEngine.InterchangeSceneImportAsset
// (None)

class UClass* UInterchangeSceneImportAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSceneImportAsset");

	return Clss;
}


// InterchangeSceneImportAsset InterchangeEngine.Default__InterchangeSceneImportAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSceneImportAsset* UInterchangeSceneImportAsset::GetDefaultObj()
{
	static class UInterchangeSceneImportAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSceneImportAsset*>(UInterchangeSceneImportAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeEngine.InterchangeAssetImportData
// (None)

class UClass* UInterchangeAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeAssetImportData");

	return Clss;
}


// InterchangeAssetImportData InterchangeEngine.Default__InterchangeAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeAssetImportData* UInterchangeAssetImportData::GetDefaultObj()
{
	static class UInterchangeAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeAssetImportData*>(UInterchangeAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeEngine.InterchangeAssetImportData.SetPipelines
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>             InPipelines                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInterchangeAssetImportData::SetPipelines(TArray<class UObject*>& InPipelines)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "SetPipelines");

	Params::UInterchangeAssetImportData_SetPipelines_Params Parms{};

	Parms.InPipelines = InPipelines;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeEngine.InterchangeAssetImportData.SetNodeContainer
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UInterchangeBaseNodeContainer*InNodeContainer                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeAssetImportData::SetNodeContainer(class UInterchangeBaseNodeContainer* InNodeContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "SetNodeContainer");

	Params::UInterchangeAssetImportData_SetNodeContainer_Params Parms{};

	Parms.InNodeContainer = InNodeContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeAssetImportData::ScriptGetFirstFilename()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "ScriptGetFirstFilename");

	Params::UInterchangeAssetImportData_ScriptGetFirstFilename_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UInterchangeAssetImportData::ScriptExtractFilenames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "ScriptExtractFilenames");

	Params::UInterchangeAssetImportData_ScriptExtractFilenames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UInterchangeAssetImportData::ScriptExtractDisplayLabels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "ScriptExtractDisplayLabels");

	Params::UInterchangeAssetImportData_ScriptExtractDisplayLabels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeAssetImportData.GetStoredNode
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InNodeUniqueId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeBaseNode*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInterchangeBaseNode* UInterchangeAssetImportData::GetStoredNode(const class FString& InNodeUniqueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "GetStoredNode");

	Params::UInterchangeAssetImportData_GetStoredNode_Params Parms{};

	Parms.InNodeUniqueId = InNodeUniqueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeAssetImportData.GetStoredFactoryNode
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InNodeUniqueId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeFactoryBaseNode* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInterchangeFactoryBaseNode* UInterchangeAssetImportData::GetStoredFactoryNode(const class FString& InNodeUniqueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "GetStoredFactoryNode");

	Params::UInterchangeAssetImportData_GetStoredFactoryNode_Params Parms{};

	Parms.InNodeUniqueId = InNodeUniqueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeAssetImportData.GetPipelines
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UInterchangeAssetImportData::GetPipelines()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "GetPipelines");

	Params::UInterchangeAssetImportData_GetPipelines_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeAssetImportData.GetNumberOfPipelines
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeAssetImportData::GetNumberOfPipelines()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "GetNumberOfPipelines");

	Params::UInterchangeAssetImportData_GetNumberOfPipelines_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeAssetImportData.GetNodeContainer
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInterchangeBaseNodeContainer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInterchangeBaseNodeContainer* UInterchangeAssetImportData::GetNodeContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeAssetImportData", "GetNodeContainer");

	Params::UInterchangeAssetImportData_GetNodeContainer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeEngine.InterchangePipelineStackOverride
// (None)

class UClass* UInterchangePipelineStackOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePipelineStackOverride");

	return Clss;
}


// InterchangePipelineStackOverride InterchangeEngine.Default__InterchangePipelineStackOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePipelineStackOverride* UInterchangePipelineStackOverride::GetDefaultObj()
{
	static class UInterchangePipelineStackOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePipelineStackOverride*>(UInterchangePipelineStackOverride::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeEngine.InterchangePipelineStackOverride.AddPythonPipeline
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UInterchangePythonPipelineBase*PipelineBase                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangePipelineStackOverride::AddPythonPipeline(class UInterchangePythonPipelineBase* PipelineBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineStackOverride", "AddPythonPipeline");

	Params::UInterchangePipelineStackOverride_AddPythonPipeline_Params Parms{};

	Parms.PipelineBase = PipelineBase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeEngine.InterchangePipelineStackOverride.AddPipeline
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UInterchangePipelineBase*    PipelineBase                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangePipelineStackOverride::AddPipeline(class UInterchangePipelineBase* PipelineBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineStackOverride", "AddPipeline");

	Params::UInterchangePipelineStackOverride_AddPipeline_Params Parms{};

	Parms.PipelineBase = PipelineBase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeEngine.InterchangePipelineStackOverride.AddBlueprintPipeline
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UInterchangeBlueprintPipelineBase*PipelineBase                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangePipelineStackOverride::AddBlueprintPipeline(class UInterchangeBlueprintPipelineBase* PipelineBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineStackOverride", "AddBlueprintPipeline");

	Params::UInterchangePipelineStackOverride_AddBlueprintPipeline_Params Parms{};

	Parms.PipelineBase = PipelineBase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class InterchangeEngine.InterchangeManager
// (None)

class UClass* UInterchangeManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeManager");

	return Clss;
}


// InterchangeManager InterchangeEngine.Default__InterchangeManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeManager* UInterchangeManager::GetDefaultObj()
{
	static class UInterchangeManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeManager*>(UInterchangeManager::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeEngine.InterchangeManager.ImportScene
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ContentPath                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeSourceData*      SourceData                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImportAssetParameters      ImportAssetParameters                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeManager::ImportScene(const class FString& ContentPath, class UInterchangeSourceData* SourceData, struct FImportAssetParameters& ImportAssetParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeManager", "ImportScene");

	Params::UInterchangeManager_ImportScene_Params Parms{};

	Parms.ContentPath = ContentPath;
	Parms.SourceData = SourceData;
	Parms.ImportAssetParameters = ImportAssetParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeManager.ImportAsset
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ContentPath                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeSourceData*      SourceData                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImportAssetParameters      ImportAssetParameters                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeManager::ImportAsset(const class FString& ContentPath, class UInterchangeSourceData* SourceData, struct FImportAssetParameters& ImportAssetParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeManager", "ImportAsset");

	Params::UInterchangeManager_ImportAsset_Params Parms{};

	Parms.ContentPath = ContentPath;
	Parms.SourceData = SourceData;
	Parms.ImportAssetParameters = ImportAssetParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ClassToMake                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeManager::GetRegisteredFactoryClass(class UClass* ClassToMake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeManager", "GetRegisteredFactoryClass");

	Params::UInterchangeManager_GetRegisteredFactoryClass_Params Parms{};

	Parms.ClassToMake = ClassToMake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInterchangeManager*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInterchangeManager* UInterchangeManager::GetInterchangeManagerScripted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeManager", "GetInterchangeManagerScripted");

	Params::UInterchangeManager_GetInterchangeManagerScripted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeManager.ExportScene
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAutomated                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeManager::ExportScene(class UObject* World, bool bIsAutomated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeManager", "ExportScene");

	Params::UInterchangeManager_ExportScene_Params Parms{};

	Parms.World = World;
	Parms.bIsAutomated = bIsAutomated;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeManager.ExportAsset
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Asset                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAutomated                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeManager::ExportAsset(class UObject* Asset, bool bIsAutomated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeManager", "ExportAsset");

	Params::UInterchangeManager_ExportAsset_Params Parms{};

	Parms.Asset = Asset;
	Parms.bIsAutomated = bIsAutomated;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeEngine.InterchangeManager.CreateSourceData
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeSourceData*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInterchangeSourceData* UInterchangeManager::CreateSourceData(const class FString& InFilename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeManager", "CreateSourceData");

	Params::UInterchangeManager_CreateSourceData_Params Parms{};

	Parms.InFilename = InFilename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeEngine.InterchangeMeshUtilities
// (None)

class UClass* UInterchangeMeshUtilities::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeMeshUtilities");

	return Clss;
}


// InterchangeMeshUtilities InterchangeEngine.Default__InterchangeMeshUtilities
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeMeshUtilities* UInterchangeMeshUtilities::GetDefaultObj()
{
	static class UInterchangeMeshUtilities* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeMeshUtilities*>(UInterchangeMeshUtilities::StaticClass()->DefaultObject);

	return Default;
}

}


