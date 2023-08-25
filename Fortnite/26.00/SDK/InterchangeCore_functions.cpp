#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InterchangeCore.InterchangeFactoryBase
// (None)

class UClass* UInterchangeFactoryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeFactoryBase");

	return Clss;
}


// InterchangeFactoryBase InterchangeCore.Default__InterchangeFactoryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeFactoryBase* UInterchangeFactoryBase::GetDefaultObj()
{
	static class UInterchangeFactoryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeFactoryBase*>(UInterchangeFactoryBase::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeCore.InterchangeFactoryBase.GetFactoryClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UInterchangeFactoryBase::GetFactoryClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBase", "GetFactoryClass");

	Params::UInterchangeFactoryBase_GetFactoryClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeCore.InterchangeSourceData
// (None)

class UClass* UInterchangeSourceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSourceData");

	return Clss;
}


// InterchangeSourceData InterchangeCore.Default__InterchangeSourceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSourceData* UInterchangeSourceData::GetDefaultObj()
{
	static class UInterchangeSourceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSourceData*>(UInterchangeSourceData::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeCore.InterchangeSourceData.SetFilename
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceData::SetFilename(const class FString& InFilename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceData", "SetFilename");

	Params::UInterchangeSourceData_SetFilename_Params Parms{};

	Parms.InFilename = InFilename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceData.GetFilename
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeSourceData::GetFilename()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceData", "GetFilename");

	Params::UInterchangeSourceData_GetFilename_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeCore.InterchangeWriterBase
// (None)

class UClass* UInterchangeWriterBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeWriterBase");

	return Clss;
}


// InterchangeWriterBase InterchangeCore.Default__InterchangeWriterBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeWriterBase* UInterchangeWriterBase::GetDefaultObj()
{
	static class UInterchangeWriterBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeWriterBase*>(UInterchangeWriterBase::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangePipelineBase
// (None)

class UClass* UInterchangePipelineBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangePipelineBase");

	return Clss;
}


// InterchangePipelineBase InterchangeCore.Default__InterchangePipelineBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangePipelineBase* UInterchangePipelineBase::GetDefaultObj()
{
	static class UInterchangePipelineBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangePipelineBase*>(UInterchangePipelineBase::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeCore.InterchangePipelineBase.ScriptedSetReimportSourceIndex
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ReimportObjectClass                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SourceFileIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangePipelineBase::ScriptedSetReimportSourceIndex(class UClass* ReimportObjectClass, int32 SourceFileIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineBase", "ScriptedSetReimportSourceIndex");

	Params::UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Params Parms{};

	Parms.ReimportObjectClass = ReimportObjectClass;
	Parms.SourceFileIndex = SourceFileIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePreImportPipeline
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UInterchangeSourceData*>SourceDatas                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInterchangePipelineBase::ScriptedExecutePreImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<class UInterchangeSourceData*>& SourceDatas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineBase", "ScriptedExecutePreImportPipeline");

	Params::UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.SourceDatas = SourceDatas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePostImportPipeline
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FactoryNodeKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     CreatedAsset                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAReimport                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangePipelineBase::ScriptedExecutePostImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, const class FString& FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineBase", "ScriptedExecutePostImportPipeline");

	Params::UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.FactoryNodeKey = FactoryNodeKey;
	Parms.CreatedAsset = CreatedAsset;
	Parms.bIsAReimport = bIsAReimport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePostFactoryPipeline
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FactoryNodeKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     CreatedAsset                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAReimport                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, const class FString& FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineBase", "ScriptedExecutePostFactoryPipeline");

	Params::UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.FactoryNodeKey = FactoryNodeKey;
	Parms.CreatedAsset = CreatedAsset;
	Parms.bIsAReimport = bIsAReimport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePipeline
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UInterchangeSourceData*>SourceDatas                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInterchangePipelineBase::ScriptedExecutePipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<class UInterchangeSourceData*>& SourceDatas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineBase", "ScriptedExecutePipeline");

	Params::UInterchangePipelineBase_ScriptedExecutePipeline_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;
	Parms.SourceDatas = SourceDatas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangePipelineBase.ScriptedExecuteExportPipeline
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInterchangeBaseNodeContainer*BaseNodeContainer                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangePipelineBase::ScriptedExecuteExportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineBase", "ScriptedExecuteExportPipeline");

	Params::UInterchangePipelineBase_ScriptedExecuteExportPipeline_Params Parms{};

	Parms.BaseNodeContainer = BaseNodeContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangePipelineBase.ScriptedCanExecuteOnAnyThread
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInterchangePipelineTaskPipelineTask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePipelineBase::ScriptedCanExecuteOnAnyThread(enum class EInterchangePipelineTask PipelineTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineBase", "ScriptedCanExecuteOnAnyThread");

	Params::UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Params Parms{};

	Parms.PipelineTask = PipelineTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangePipelineBase.FindOrAddPropertyStates
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PropertyPath                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInterchangePipelinePropertyStatesReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInterchangePipelinePropertyStates UInterchangePipelineBase::FindOrAddPropertyStates(class FName PropertyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineBase", "FindOrAddPropertyStates");

	Params::UInterchangePipelineBase_FindOrAddPropertyStates_Params Parms{};

	Parms.PropertyPath = PropertyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangePipelineBase.DoesPropertyStatesExist
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyPath                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangePipelineBase::DoesPropertyStatesExist(class FName PropertyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangePipelineBase", "DoesPropertyStatesExist");

	Params::UInterchangePipelineBase_DoesPropertyStatesExist_Params Parms{};

	Parms.PropertyPath = PropertyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeCore.InterchangeResult
// (None)

class UClass* UInterchangeResult::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResult");

	return Clss;
}


// InterchangeResult InterchangeCore.Default__InterchangeResult
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResult* UInterchangeResult::GetDefaultObj()
{
	static class UInterchangeResult* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResult*>(UInterchangeResult::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeResultSuccess
// (None)

class UClass* UInterchangeResultSuccess::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultSuccess");

	return Clss;
}


// InterchangeResultSuccess InterchangeCore.Default__InterchangeResultSuccess
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultSuccess* UInterchangeResultSuccess::GetDefaultObj()
{
	static class UInterchangeResultSuccess* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultSuccess*>(UInterchangeResultSuccess::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeResultWarning
// (None)

class UClass* UInterchangeResultWarning::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultWarning");

	return Clss;
}


// InterchangeResultWarning InterchangeCore.Default__InterchangeResultWarning
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultWarning* UInterchangeResultWarning::GetDefaultObj()
{
	static class UInterchangeResultWarning* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultWarning*>(UInterchangeResultWarning::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeResultError
// (None)

class UClass* UInterchangeResultError::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultError");

	return Clss;
}


// InterchangeResultError InterchangeCore.Default__InterchangeResultError
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultError* UInterchangeResultError::GetDefaultObj()
{
	static class UInterchangeResultError* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultError*>(UInterchangeResultError::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeResultWarning_Generic
// (None)

class UClass* UInterchangeResultWarning_Generic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultWarning_Generic");

	return Clss;
}


// InterchangeResultWarning_Generic InterchangeCore.Default__InterchangeResultWarning_Generic
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultWarning_Generic* UInterchangeResultWarning_Generic::GetDefaultObj()
{
	static class UInterchangeResultWarning_Generic* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultWarning_Generic*>(UInterchangeResultWarning_Generic::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeResultError_Generic
// (None)

class UClass* UInterchangeResultError_Generic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultError_Generic");

	return Clss;
}


// InterchangeResultError_Generic InterchangeCore.Default__InterchangeResultError_Generic
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultError_Generic* UInterchangeResultError_Generic::GetDefaultObj()
{
	static class UInterchangeResultError_Generic* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultError_Generic*>(UInterchangeResultError_Generic::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeResultError_ReimportFail
// (None)

class UClass* UInterchangeResultError_ReimportFail::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultError_ReimportFail");

	return Clss;
}


// InterchangeResultError_ReimportFail InterchangeCore.Default__InterchangeResultError_ReimportFail
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultError_ReimportFail* UInterchangeResultError_ReimportFail::GetDefaultObj()
{
	static class UInterchangeResultError_ReimportFail* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultError_ReimportFail*>(UInterchangeResultError_ReimportFail::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeResultDisplay_Generic
// (None)

class UClass* UInterchangeResultDisplay_Generic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultDisplay_Generic");

	return Clss;
}


// InterchangeResultDisplay_Generic InterchangeCore.Default__InterchangeResultDisplay_Generic
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultDisplay_Generic* UInterchangeResultDisplay_Generic::GetDefaultObj()
{
	static class UInterchangeResultDisplay_Generic* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultDisplay_Generic*>(UInterchangeResultDisplay_Generic::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeResultsContainer
// (None)

class UClass* UInterchangeResultsContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeResultsContainer");

	return Clss;
}


// InterchangeResultsContainer InterchangeCore.Default__InterchangeResultsContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeResultsContainer* UInterchangeResultsContainer::GetDefaultObj()
{
	static class UInterchangeResultsContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeResultsContainer*>(UInterchangeResultsContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeTranslatorBase
// (None)

class UClass* UInterchangeTranslatorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTranslatorBase");

	return Clss;
}


// InterchangeTranslatorBase InterchangeCore.Default__InterchangeTranslatorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTranslatorBase* UInterchangeTranslatorBase::GetDefaultObj()
{
	static class UInterchangeTranslatorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTranslatorBase*>(UInterchangeTranslatorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class InterchangeCore.InterchangeBaseNode
// (None)

class UClass* UInterchangeBaseNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeBaseNode");

	return Clss;
}


// InterchangeBaseNode InterchangeCore.Default__InterchangeBaseNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeBaseNode* UInterchangeBaseNode::GetDefaultObj()
{
	static class UInterchangeBaseNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeBaseNode*>(UInterchangeBaseNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeCore.InterchangeBaseNode.SetParentUid
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ParentUid                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::SetParentUid(const class FString& ParentUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "SetParentUid");

	Params::UInterchangeBaseNode_SetParentUid_Params Parms{};

	Parms.ParentUid = ParentUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.SetEnabled
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::SetEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "SetEnabled");

	Params::UInterchangeBaseNode_SetEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.SetDisplayLabel
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DisplayName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::SetDisplayLabel(const class FString& DisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "SetDisplayLabel");

	Params::UInterchangeBaseNode_SetDisplayLabel_Params Parms{};

	Parms.DisplayName = DisplayName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.SetAssetName
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::SetAssetName(const class FString& AssetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "SetAssetName");

	Params::UInterchangeBaseNode_SetAssetName_Params Parms{};

	Parms.AssetName = AssetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.RemoveTargetNodeUid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AssetUid                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::RemoveTargetNodeUid(const class FString& AssetUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "RemoveTargetNodeUid");

	Params::UInterchangeBaseNode_RemoveTargetNodeUid_Params Parms{};

	Parms.AssetUid = AssetUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.RemoveAttribute
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::RemoveAttribute(const class FString& NodeAttributeKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "RemoveAttribute");

	Params::UInterchangeBaseNode_RemoveAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.IsEnabled
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "IsEnabled");

	Params::UInterchangeBaseNode_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.InitializeNode
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayLabel                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInterchangeNodeContainerTypeNodeContainerType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeBaseNode::InitializeNode(const class FString& UniqueID, const class FString& DisplayLabel, enum class EInterchangeNodeContainerType NodeContainerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "InitializeNode");

	Params::UInterchangeBaseNode_InitializeNode_Params Parms{};

	Parms.UniqueID = UniqueID;
	Parms.DisplayLabel = DisplayLabel;
	Parms.NodeContainerType = NodeContainerType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangeBaseNode.GetVector2Attribute
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2f                   OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::GetVector2Attribute(const class FString& NodeAttributeKey, struct FVector2f* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetVector2Attribute");

	Params::UInterchangeBaseNode_GetVector2Attribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetUniqueID
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeBaseNode::GetUniqueID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetUniqueID");

	Params::UInterchangeBaseNode_GetUniqueID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetTargetNodeUids
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutTargetAssets                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeBaseNode::GetTargetNodeUids(TArray<class FString>* OutTargetAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetTargetNodeUids");

	Params::UInterchangeBaseNode_GetTargetNodeUids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTargetAssets != nullptr)
		*OutTargetAssets = Parms.OutTargetAssets;

}


// Function InterchangeCore.InterchangeBaseNode.GetTargetNodeCount
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeBaseNode::GetTargetNodeCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetTargetNodeCount");

	Params::UInterchangeBaseNode_GetTargetNodeCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetStringAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutValue                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::GetStringAttribute(const class FString& NodeAttributeKey, class FString* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetStringAttribute");

	Params::UInterchangeBaseNode_GetStringAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetParentUid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeBaseNode::GetParentUid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetParentUid");

	Params::UInterchangeBaseNode_GetParentUid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetNodeContainerType
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EInterchangeNodeContainerTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EInterchangeNodeContainerType UInterchangeBaseNode::GetNodeContainerType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetNodeContainerType");

	Params::UInterchangeBaseNode_GetNodeContainerType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetLinearColorAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::GetLinearColorAttribute(const class FString& NodeAttributeKey, struct FLinearColor* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetLinearColorAttribute");

	Params::UInterchangeBaseNode_GetLinearColorAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetInt32Attribute
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::GetInt32Attribute(const class FString& NodeAttributeKey, int32* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetInt32Attribute");

	Params::UInterchangeBaseNode_GetInt32Attribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetGuidAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::GetGuidAttribute(const class FString& NodeAttributeKey, struct FGuid* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetGuidAttribute");

	Params::UInterchangeBaseNode_GetGuidAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetFloatAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::GetFloatAttribute(const class FString& NodeAttributeKey, float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetFloatAttribute");

	Params::UInterchangeBaseNode_GetFloatAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetDoubleAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::GetDoubleAttribute(const class FString& NodeAttributeKey, double* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetDoubleAttribute");

	Params::UInterchangeBaseNode_GetDoubleAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetDisplayLabel
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeBaseNode::GetDisplayLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetDisplayLabel");

	Params::UInterchangeBaseNode_GetDisplayLabel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetBooleanAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::GetBooleanAttribute(const class FString& NodeAttributeKey, bool* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetBooleanAttribute");

	Params::UInterchangeBaseNode_GetBooleanAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.GetAssetName
// (RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeBaseNode::GetAssetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "GetAssetName");

	Params::UInterchangeBaseNode_GetAssetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.AddVector2Attribute
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2f                   Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::AddVector2Attribute(const class FString& NodeAttributeKey, struct FVector2f& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "AddVector2Attribute");

	Params::UInterchangeBaseNode_AddVector2Attribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.AddTargetNodeUid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AssetUid                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::AddTargetNodeUid(const class FString& AssetUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "AddTargetNodeUid");

	Params::UInterchangeBaseNode_AddTargetNodeUid_Params Parms{};

	Parms.AssetUid = AssetUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.AddStringAttribute
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::AddStringAttribute(const class FString& NodeAttributeKey, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "AddStringAttribute");

	Params::UInterchangeBaseNode_AddStringAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.AddLinearColorAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::AddLinearColorAttribute(const class FString& NodeAttributeKey, struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "AddLinearColorAttribute");

	Params::UInterchangeBaseNode_AddLinearColorAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.AddInt32Attribute
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::AddInt32Attribute(const class FString& NodeAttributeKey, int32& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "AddInt32Attribute");

	Params::UInterchangeBaseNode_AddInt32Attribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.AddGuidAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::AddGuidAttribute(const class FString& NodeAttributeKey, struct FGuid& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "AddGuidAttribute");

	Params::UInterchangeBaseNode_AddGuidAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.AddFloatAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::AddFloatAttribute(const class FString& NodeAttributeKey, float& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "AddFloatAttribute");

	Params::UInterchangeBaseNode_AddFloatAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.AddDoubleAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::AddDoubleAttribute(const class FString& NodeAttributeKey, double& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "AddDoubleAttribute");

	Params::UInterchangeBaseNode_AddDoubleAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNode.AddBooleanAttribute
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      NodeAttributeKey                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNode::AddBooleanAttribute(const class FString& NodeAttributeKey, bool& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNode", "AddBooleanAttribute");

	Params::UInterchangeBaseNode_AddBooleanAttribute_Params Parms{};

	Parms.NodeAttributeKey = NodeAttributeKey;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeCore.InterchangeBaseNodeContainer
// (None)

class UClass* UInterchangeBaseNodeContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeBaseNodeContainer");

	return Clss;
}


// InterchangeBaseNodeContainer InterchangeCore.Default__InterchangeBaseNodeContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeBaseNodeContainer* UInterchangeBaseNodeContainer::GetDefaultObj()
{
	static class UInterchangeBaseNodeContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeBaseNodeContainer*>(UInterchangeBaseNodeContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeCore.InterchangeBaseNodeContainer.SetNodeParentUid
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NodeUniqueID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewParentNodeUid                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNodeContainer::SetNodeParentUid(const class FString& NodeUniqueID, const class FString& NewParentNodeUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "SetNodeParentUid");

	Params::UInterchangeBaseNodeContainer_SetNodeParentUid_Params Parms{};

	Parms.NodeUniqueID = NodeUniqueID;
	Parms.NewParentNodeUid = NewParentNodeUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.SaveToFile
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeBaseNodeContainer::SaveToFile(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "SaveToFile");

	Params::UInterchangeBaseNodeContainer_SaveToFile_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.ResetChildrenCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInterchangeBaseNodeContainer::ResetChildrenCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "ResetChildrenCache");

	Params::UInterchangeBaseNodeContainer_ResetChildrenCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.ReplaceNode
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NodeUniqueID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeFactoryBaseNode* NewNode                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeBaseNodeContainer::ReplaceNode(const class FString& NodeUniqueID, class UInterchangeFactoryBaseNode* NewNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "ReplaceNode");

	Params::UInterchangeBaseNodeContainer_ReplaceNode_Params Parms{};

	Parms.NodeUniqueID = NodeUniqueID;
	Parms.NewNode = NewNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.LoadFromFile
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeBaseNodeContainer::LoadFromFile(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "LoadFromFile");

	Params::UInterchangeBaseNodeContainer_LoadFromFile_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.IsNodeUidValid
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeUniqueID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeBaseNodeContainer::IsNodeUidValid(const class FString& NodeUniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "IsNodeUidValid");

	Params::UInterchangeBaseNodeContainer_IsNodeUidValid_Params Parms{};

	Parms.NodeUniqueID = NodeUniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.GetRoots
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              RootNodes                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeBaseNodeContainer::GetRoots(TArray<class FString>* RootNodes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "GetRoots");

	Params::UInterchangeBaseNodeContainer_GetRoots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RootNodes != nullptr)
		*RootNodes = Parms.RootNodes;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodes
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ClassNode                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutNodes                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeBaseNodeContainer::GetNodes(class UClass* ClassNode, TArray<class FString>* OutNodes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "GetNodes");

	Params::UInterchangeBaseNodeContainer_GetNodes_Params Parms{};

	Parms.ClassNode = ClassNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutNodes != nullptr)
		*OutNodes = Parms.OutNodes;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenUids
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeUniqueID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UInterchangeBaseNodeContainer::GetNodeChildrenUids(const class FString& NodeUniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "GetNodeChildrenUids");

	Params::UInterchangeBaseNodeContainer_GetNodeChildrenUids_Params Parms{};

	Parms.NodeUniqueID = NodeUniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenCount
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeUniqueID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeBaseNodeContainer::GetNodeChildrenCount(const class FString& NodeUniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "GetNodeChildrenCount");

	Params::UInterchangeBaseNodeContainer_GetNodeChildrenCount_Params Parms{};

	Parms.NodeUniqueID = NodeUniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildren
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NodeUniqueID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ChildIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeBaseNode*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInterchangeBaseNode* UInterchangeBaseNodeContainer::GetNodeChildren(const class FString& NodeUniqueID, int32 ChildIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "GetNodeChildren");

	Params::UInterchangeBaseNodeContainer_GetNodeChildren_Params Parms{};

	Parms.NodeUniqueID = NodeUniqueID;
	Parms.ChildIndex = ChildIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.GetNode
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeUniqueID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeBaseNode*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInterchangeBaseNode* UInterchangeBaseNodeContainer::GetNode(const class FString& NodeUniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "GetNode");

	Params::UInterchangeBaseNodeContainer_GetNode_Params Parms{};

	Parms.NodeUniqueID = NodeUniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.GetFactoryNode
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      NodeUniqueID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeFactoryBaseNode* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInterchangeFactoryBaseNode* UInterchangeBaseNodeContainer::GetFactoryNode(const class FString& NodeUniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "GetFactoryNode");

	Params::UInterchangeBaseNodeContainer_GetFactoryNode_Params Parms{};

	Parms.NodeUniqueID = NodeUniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.ComputeChildrenCache
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UInterchangeBaseNodeContainer::ComputeChildrenCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "ComputeChildrenCache");

	Params::UInterchangeBaseNodeContainer_ComputeChildrenCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangeBaseNodeContainer.AddNode
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        Node                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInterchangeBaseNodeContainer::AddNode(class UInterchangeBaseNode* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeBaseNodeContainer", "AddNode");

	Params::UInterchangeBaseNodeContainer_AddNode_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeCore.InterchangeFactoryBaseNode
// (None)

class UClass* UInterchangeFactoryBaseNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeFactoryBaseNode");

	return Clss;
}


// InterchangeFactoryBaseNode InterchangeCore.Default__InterchangeFactoryBaseNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeFactoryBaseNode* UInterchangeFactoryBaseNode::GetDefaultObj()
{
	static class UInterchangeFactoryBaseNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeFactoryBaseNode*>(UInterchangeFactoryBaseNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeCore.InterchangeFactoryBaseNode.UnsetSkipNodeImport
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::UnsetSkipNodeImport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "UnsetSkipNodeImport");

	Params::UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.UnsetForceNodeReimport
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::UnsetForceNodeReimport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "UnsetForceNodeReimport");

	Params::UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.ShouldSkipNodeImport
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::ShouldSkipNodeImport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "ShouldSkipNodeImport");

	Params::UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.ShouldForceNodeReimport
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::ShouldForceNodeReimport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "ShouldForceNodeReimport");

	Params::UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.SetSkipNodeImport
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::SetSkipNodeImport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "SetSkipNodeImport");

	Params::UInterchangeFactoryBaseNode_SetSkipNodeImport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.SetReimportStrategyFlags
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EReimportStrategyFlags  ReimportStrategyFlags                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::SetReimportStrategyFlags(enum class EReimportStrategyFlags& ReimportStrategyFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "SetReimportStrategyFlags");

	Params::UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Params Parms{};

	Parms.ReimportStrategyFlags = ReimportStrategyFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.SetForceNodeReimport
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::SetForceNodeReimport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "SetForceNodeReimport");

	Params::UInterchangeFactoryBaseNode_SetForceNodeReimport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.SetCustomSubPath
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::SetCustomSubPath(const class FString& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "SetCustomSubPath");

	Params::UInterchangeFactoryBaseNode_SetCustomSubPath_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.SetCustomReferenceObject
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::SetCustomReferenceObject(struct FSoftObjectPath& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "SetCustomReferenceObject");

	Params::UInterchangeFactoryBaseNode_SetCustomReferenceObject_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.RemoveFactoryDependencyUid
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::RemoveFactoryDependencyUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "RemoveFactoryDependencyUid");

	Params::UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.GetReimportStrategyFlags
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EReimportStrategyFlags  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EReimportStrategyFlags UInterchangeFactoryBaseNode::GetReimportStrategyFlags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "GetReimportStrategyFlags");

	Params::UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependency
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutDependency                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeFactoryBaseNode::GetFactoryDependency(int32 Index, class FString* OutDependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "GetFactoryDependency");

	Params::UInterchangeFactoryBaseNode_GetFactoryDependency_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependency != nullptr)
		*OutDependency = Parms.OutDependency;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependenciesCount
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInterchangeFactoryBaseNode::GetFactoryDependenciesCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "GetFactoryDependenciesCount");

	Params::UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependencies
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutDependencies                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeFactoryBaseNode::GetFactoryDependencies(TArray<class FString>* OutDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "GetFactoryDependencies");

	Params::UInterchangeFactoryBaseNode_GetFactoryDependencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDependencies != nullptr)
		*OutDependencies = Parms.OutDependencies;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.GetCustomSubPath
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::GetCustomSubPath(class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "GetCustomSubPath");

	Params::UInterchangeFactoryBaseNode_GetCustomSubPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.GetCustomReferenceObject
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSoftObjectPath             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::GetCustomReferenceObject(struct FSoftObjectPath* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "GetCustomReferenceObject");

	Params::UInterchangeFactoryBaseNode_GetCustomReferenceObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeFactoryBaseNode.AddFactoryDependencyUid
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      DependencyUid                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeFactoryBaseNode::AddFactoryDependencyUid(const class FString& DependencyUid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeFactoryBaseNode", "AddFactoryDependencyUid");

	Params::UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Params Parms{};

	Parms.DependencyUid = DependencyUid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InterchangeCore.InterchangeSourceNode
// (None)

class UClass* UInterchangeSourceNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeSourceNode");

	return Clss;
}


// InterchangeSourceNode InterchangeCore.Default__InterchangeSourceNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeSourceNode* UInterchangeSourceNode::GetDefaultObj()
{
	static class UInterchangeSourceNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeSourceNode*>(UInterchangeSourceNode::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineStart
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::SetCustomSourceTimelineStart(double& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "SetCustomSourceTimelineStart");

	Params::UInterchangeSourceNode_SetCustomSourceTimelineStart_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineEnd
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::SetCustomSourceTimelineEnd(double& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "SetCustomSourceTimelineEnd");

	Params::UInterchangeSourceNode_SetCustomSourceTimelineEnd_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateNumerator
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::SetCustomSourceFrameRateNumerator(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "SetCustomSourceFrameRateNumerator");

	Params::UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateDenominator
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::SetCustomSourceFrameRateDenominator(int32& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "SetCustomSourceFrameRateDenominator");

	Params::UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.SetCustomImportUnusedMaterial
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::SetCustomImportUnusedMaterial(bool& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "SetCustomImportUnusedMaterial");

	Params::UInterchangeSourceNode_SetCustomImportUnusedMaterial_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeStart
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::SetCustomAnimatedTimeStart(double& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "SetCustomAnimatedTimeStart");

	Params::UInterchangeSourceNode_SetCustomAnimatedTimeStart_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeEnd
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::SetCustomAnimatedTimeEnd(double& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "SetCustomAnimatedTimeEnd");

	Params::UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Params Parms{};

	Parms.AttributeValue = AttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.InitializeSourceNode
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayLabel                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeSourceNode::InitializeSourceNode(const class FString& UniqueID, const class FString& DisplayLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "InitializeSourceNode");

	Params::UInterchangeSourceNode_InitializeSourceNode_Params Parms{};

	Parms.UniqueID = UniqueID;
	Parms.DisplayLabel = DisplayLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineStart
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::GetCustomSourceTimelineStart(double* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "GetCustomSourceTimelineStart");

	Params::UInterchangeSourceNode_GetCustomSourceTimelineStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineEnd
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::GetCustomSourceTimelineEnd(double* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "GetCustomSourceTimelineEnd");

	Params::UInterchangeSourceNode_GetCustomSourceTimelineEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateNumerator
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::GetCustomSourceFrameRateNumerator(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "GetCustomSourceFrameRateNumerator");

	Params::UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateDenominator
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::GetCustomSourceFrameRateDenominator(int32* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "GetCustomSourceFrameRateDenominator");

	Params::UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.GetCustomImportUnusedMaterial
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::GetCustomImportUnusedMaterial(bool* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "GetCustomImportUnusedMaterial");

	Params::UInterchangeSourceNode_GetCustomImportUnusedMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeStart
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::GetCustomAnimatedTimeStart(double* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "GetCustomAnimatedTimeStart");

	Params::UInterchangeSourceNode_GetCustomAnimatedTimeStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeEnd
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             AttributeValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeSourceNode::GetCustomAnimatedTimeEnd(double* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeSourceNode", "GetCustomAnimatedTimeEnd");

	Params::UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = Parms.AttributeValue;

	return Parms.ReturnValue;

}


// Class InterchangeCore.InterchangeUserDefinedAttributesAPI
// (None)

class UClass* UInterchangeUserDefinedAttributesAPI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeUserDefinedAttributesAPI");

	return Clss;
}


// InterchangeUserDefinedAttributesAPI InterchangeCore.Default__InterchangeUserDefinedAttributesAPI
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeUserDefinedAttributesAPI* UInterchangeUserDefinedAttributesAPI::GetDefaultObj()
{
	static class UInterchangeUserDefinedAttributesAPI* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeUserDefinedAttributesAPI*>(UInterchangeUserDefinedAttributesAPI::StaticClass()->DefaultObject);

	return Default;
}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.RemoveUserDefinedAttribute
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::RemoveUserDefinedAttribute(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "RemoveUserDefinedAttribute");

	Params::UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttributeInfos
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInterchangeUserDefinedAttributeInfo>UserDefinedAttributeInfos                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttributeInfos(class UInterchangeBaseNode* InterchangeNode, TArray<struct FInterchangeUserDefinedAttributeInfo>* UserDefinedAttributeInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "GetUserDefinedAttributeInfos");

	Params::UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UserDefinedAttributeInfos != nullptr)
		*UserDefinedAttributeInfos = Parms.UserDefinedAttributeInfos;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Int32
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutPayloadKey                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, int32* OutValue, class FString* OutPayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "GetUserDefinedAttribute_Int32");

	Params::UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	if (OutPayloadKey != nullptr)
		*OutPayloadKey = Parms.OutPayloadKey;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_FString
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutValue                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutPayloadKey                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, class FString* OutValue, class FString* OutPayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "GetUserDefinedAttribute_FString");

	Params::UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	if (OutPayloadKey != nullptr)
		*OutPayloadKey = Parms.OutPayloadKey;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Float
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutPayloadKey                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, float* OutValue, class FString* OutPayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "GetUserDefinedAttribute_Float");

	Params::UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	if (OutPayloadKey != nullptr)
		*OutPayloadKey = Parms.OutPayloadKey;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Double
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutPayloadKey                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, double* OutValue, class FString* OutPayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "GetUserDefinedAttribute_Double");

	Params::UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	if (OutPayloadKey != nullptr)
		*OutPayloadKey = Parms.OutPayloadKey;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Boolean
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutPayloadKey                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, bool* OutValue, class FString* OutPayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "GetUserDefinedAttribute_Boolean");

	Params::UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	if (OutPayloadKey != nullptr)
		*OutPayloadKey = Parms.OutPayloadKey;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.DuplicateAllUserDefinedAttribute
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeSourceNode                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInterchangeBaseNode*        InterchangeDestinationNode                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddSourceNodeName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute(class UInterchangeBaseNode* InterchangeSourceNode, class UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "DuplicateAllUserDefinedAttribute");

	Params::UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Params Parms{};

	Parms.InterchangeSourceNode = InterchangeSourceNode;
	Parms.InterchangeDestinationNode = InterchangeDestinationNode;
	Parms.bAddSourceNodeName = bAddSourceNodeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Int32
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PayloadKey                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, int32& Value, const class FString& PayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "CreateUserDefinedAttribute_Int32");

	Params::UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;
	Parms.Value = Value;
	Parms.PayloadKey = PayloadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_FString
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PayloadKey                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, const class FString& Value, const class FString& PayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "CreateUserDefinedAttribute_FString");

	Params::UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;
	Parms.Value = Value;
	Parms.PayloadKey = PayloadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Float
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PayloadKey                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, float& Value, const class FString& PayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "CreateUserDefinedAttribute_Float");

	Params::UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;
	Parms.Value = Value;
	Parms.PayloadKey = PayloadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Double
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PayloadKey                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, double& Value, const class FString& PayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "CreateUserDefinedAttribute_Double");

	Params::UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;
	Parms.Value = Value;
	Parms.PayloadKey = PayloadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Boolean
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInterchangeBaseNode*        InterchangeNode                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserDefinedAttributeName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PayloadKey                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, bool& Value, const class FString& PayloadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterchangeUserDefinedAttributesAPI", "CreateUserDefinedAttribute_Boolean");

	Params::UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Params Parms{};

	Parms.InterchangeNode = InterchangeNode;
	Parms.UserDefinedAttributeName = UserDefinedAttributeName;
	Parms.Value = Value;
	Parms.PayloadKey = PayloadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


