#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MetasoundEngine.MetasoundGeneratorHandle
// (None)

class UClass* UMetasoundGeneratorHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetasoundGeneratorHandle");

	return Clss;
}


// MetasoundGeneratorHandle MetasoundEngine.Default__MetasoundGeneratorHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetasoundGeneratorHandle* UMetasoundGeneratorHandle::GetDefaultObj()
{
	static class UMetasoundGeneratorHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetasoundGeneratorHandle*>(UMetasoundGeneratorHandle::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetasoundGeneratorHandle.WatchOutput
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        OutputName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnOutputValueChanged                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AnalyzerName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AnalyzerOutputName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundGeneratorHandle::WatchOutput(class FName OutputName, FDelegateProperty_& OnOutputValueChanged, class FName AnalyzerName, class FName AnalyzerOutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundGeneratorHandle", "WatchOutput");

	Params::UMetasoundGeneratorHandle_WatchOutput_Params Parms{};

	Parms.OutputName = OutputName;
	Parms.OnOutputValueChanged = OnOutputValueChanged;
	Parms.AnalyzerName = AnalyzerName;
	Parms.AnalyzerOutputName = AnalyzerOutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction MetasoundEngine.MetasoundGeneratorHandle.OnOutputValueChangedMulticast__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMetasoundGeneratorHandle::OnOutputValueChangedMulticast__DelegateSignature(class FName Name, struct FMetaSoundOutput& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundGeneratorHandle", "OnOutputValueChangedMulticast__DelegateSignature");

	Params::UMetasoundGeneratorHandle_OnOutputValueChangedMulticast__DelegateSignature_Params Parms{};

	Parms.Name = Name;
	Parms.Output = Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*             OnComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetasoundGeneratorHandle*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMetasoundGeneratorHandle* UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundGeneratorHandle", "CreateMetaSoundGeneratorHandle");

	Params::UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Params Parms{};

	Parms.OnComponent = OnComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMetasoundParameterPack*     Pack                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundGeneratorHandle::ApplyParameterPack(class UMetasoundParameterPack* Pack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundGeneratorHandle", "ApplyParameterPack");

	Params::UMetasoundGeneratorHandle_ApplyParameterPack_Params Parms{};

	Parms.Pack = Pack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MetasoundEngine.MetasoundOutputBlueprintAccess
// (None)

class UClass* UMetasoundOutputBlueprintAccess::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetasoundOutputBlueprintAccess");

	return Clss;
}


// MetasoundOutputBlueprintAccess MetasoundEngine.Default__MetasoundOutputBlueprintAccess
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetasoundOutputBlueprintAccess* UMetasoundOutputBlueprintAccess::GetDefaultObj()
{
	static class UMetasoundOutputBlueprintAccess* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetasoundOutputBlueprintAccess*>(UMetasoundOutputBlueprintAccess::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsTime
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundOutputBlueprintAccess::IsTime(struct FMetaSoundOutput& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "IsTime");

	Params::UMetasoundOutputBlueprintAccess_IsTime_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsString
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundOutputBlueprintAccess::IsString(struct FMetaSoundOutput& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "IsString");

	Params::UMetasoundOutputBlueprintAccess_IsString_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsInt32
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundOutputBlueprintAccess::IsInt32(struct FMetaSoundOutput& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "IsInt32");

	Params::UMetasoundOutputBlueprintAccess_IsInt32_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsFloat
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundOutputBlueprintAccess::IsFloat(struct FMetaSoundOutput& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "IsFloat");

	Params::UMetasoundOutputBlueprintAccess_IsFloat_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsBool
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundOutputBlueprintAccess::IsBool(struct FMetaSoundOutput& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "IsBool");

	Params::UMetasoundOutputBlueprintAccess_IsBool_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetTimeSeconds
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMetasoundOutputBlueprintAccess::GetTimeSeconds(struct FMetaSoundOutput& Output, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "GetTimeSeconds");

	Params::UMetasoundOutputBlueprintAccess_GetTimeSeconds_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetString
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMetasoundOutputBlueprintAccess::GetString(struct FMetaSoundOutput& Output, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "GetString");

	Params::UMetasoundOutputBlueprintAccess_GetString_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetInt32
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMetasoundOutputBlueprintAccess::GetInt32(struct FMetaSoundOutput& Output, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "GetInt32");

	Params::UMetasoundOutputBlueprintAccess_GetInt32_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetFloat
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMetasoundOutputBlueprintAccess::GetFloat(struct FMetaSoundOutput& Output, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "GetFloat");

	Params::UMetasoundOutputBlueprintAccess_GetFloat_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetBool
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundOutput            Output                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetasoundOutputBlueprintAccess::GetBool(struct FMetaSoundOutput& Output, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundOutputBlueprintAccess", "GetBool");

	Params::UMetasoundOutputBlueprintAccess_GetBool_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Class MetasoundEngine.MetaSoundOutputSubsystem
// (None)

class UClass* UMetaSoundOutputSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundOutputSubsystem");

	return Clss;
}


// MetaSoundOutputSubsystem MetasoundEngine.Default__MetaSoundOutputSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundOutputSubsystem* UMetaSoundOutputSubsystem::GetDefaultObj()
{
	static class UMetaSoundOutputSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundOutputSubsystem*>(UMetaSoundOutputSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetaSoundOutputSubsystem.WatchOutput
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAudioComponent*             AudioComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OutputName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnOutputValueChanged                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AnalyzerName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AnalyzerOutputName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundOutputSubsystem::WatchOutput(class UAudioComponent* AudioComponent, class FName OutputName, FDelegateProperty_& OnOutputValueChanged, class FName AnalyzerName, class FName AnalyzerOutputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundOutputSubsystem", "WatchOutput");

	Params::UMetaSoundOutputSubsystem_WatchOutput_Params Parms{};

	Parms.AudioComponent = AudioComponent;
	Parms.OutputName = OutputName;
	Parms.OnOutputValueChanged = OnOutputValueChanged;
	Parms.AnalyzerName = AnalyzerName;
	Parms.AnalyzerOutputName = AnalyzerOutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MetasoundEngine.MetaSoundSettings
// (None)

class UClass* UMetaSoundSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundSettings");

	return Clss;
}


// MetaSoundSettings MetasoundEngine.Default__MetaSoundSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundSettings* UMetaSoundSettings::GetDefaultObj()
{
	static class UMetaSoundSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundSettings*>(UMetaSoundSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MetasoundEngine.MetasoundEditorGraphBase
// (None)

class UClass* UMetasoundEditorGraphBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetasoundEditorGraphBase");

	return Clss;
}


// MetasoundEditorGraphBase MetasoundEngine.Default__MetasoundEditorGraphBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetasoundEditorGraphBase* UMetasoundEditorGraphBase::GetDefaultObj()
{
	static class UMetasoundEditorGraphBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetasoundEditorGraphBase*>(UMetasoundEditorGraphBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MetasoundEngine.MetaSoundPatch
// (None)

class UClass* UMetaSoundPatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundPatch");

	return Clss;
}


// MetaSoundPatch MetasoundEngine.Default__MetaSoundPatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundPatch* UMetaSoundPatch::GetDefaultObj()
{
	static class UMetaSoundPatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundPatch*>(UMetaSoundPatch::StaticClass()->DefaultObject);

	return Default;
}


// Class MetasoundEngine.MetaSoundAssetSubsystem
// (None)

class UClass* UMetaSoundAssetSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundAssetSubsystem");

	return Clss;
}


// MetaSoundAssetSubsystem MetasoundEngine.Default__MetaSoundAssetSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundAssetSubsystem* UMetaSoundAssetSubsystem::GetDefaultObj()
{
	static class UMetaSoundAssetSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundAssetSubsystem*>(UMetaSoundAssetSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMetaSoundAssetDirectory>Directories                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundAssetSubsystem", "UnregisterAssetClassesInDirectories");

	Params::UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params Parms{};

	Parms.Directories = Directories;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMetaSoundAssetDirectory>Directories                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMetaSoundAssetSubsystem::RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundAssetSubsystem", "RegisterAssetClassesInDirectories");

	Params::UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params Parms{};

	Parms.Directories = Directories;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MetasoundEngine.MetaSoundBuilderBase
// (None)

class UClass* UMetaSoundBuilderBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundBuilderBase");

	return Clss;
}


// MetaSoundBuilderBase MetasoundEngine.Default__MetaSoundBuilderBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundBuilderBase* UMetaSoundBuilderBase::GetDefaultObj()
{
	static class UMetaSoundBuilderBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundBuilderBase*>(UMetaSoundBuilderBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetaSoundBuilderBase.SetNodeInputDefault
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeInputHandleNodeInputHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   Literal                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::SetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, struct FMetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "SetNodeInputDefault");

	Params::UMetaSoundBuilderBase_SetNodeInputDefault_Params Parms{};

	Parms.NodeInputHandle = NodeInputHandle;
	Parms.Literal = Literal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.SetGraphInputDefault
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InputName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   Literal                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::SetGraphInputDefault(class FName InputName, struct FMetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "SetGraphInputDefault");

	Params::UMetaSoundBuilderBase_SetGraphInputDefault_Params Parms{};

	Parms.InputName = InputName;
	Parms.Literal = Literal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.RemoveNodeInputDefault
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeInputHandleInputHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::RemoveNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "RemoveNodeInputDefault");

	Params::UMetaSoundBuilderBase_RemoveNodeInputDefault_Params Parms{};

	Parms.InputHandle = InputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.RemoveNode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::RemoveNode(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "RemoveNode");

	Params::UMetaSoundBuilderBase_RemoveNode_Params Parms{};

	Parms.NodeHandle = NodeHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.RemoveInterface
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InterfaceName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::RemoveInterface(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "RemoveInterface");

	Params::UMetaSoundBuilderBase_RemoveInterface_Params Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.RemoveGraphOutput
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::RemoveGraphOutput(class FName Name, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "RemoveGraphOutput");

	Params::UMetaSoundBuilderBase_RemoveGraphOutput_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.RemoveGraphInput
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::RemoveGraphInput(class FName Name, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "RemoveGraphInput");

	Params::UMetaSoundBuilderBase_RemoveGraphInput_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.NodesAreConnected
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMetaSoundBuilderNodeOutputHandleOutputHandle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeInputHandleInputHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderBase::NodesAreConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, struct FMetaSoundBuilderNodeInputHandle& InputHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "NodesAreConnected");

	Params::UMetaSoundBuilderBase_NodesAreConnected_Params Parms{};

	Parms.OutputHandle = OutputHandle;
	Parms.InputHandle = InputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.NodeOutputIsConnected
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMetaSoundBuilderNodeOutputHandleOutputHandle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderBase::NodeOutputIsConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "NodeOutputIsConnected");

	Params::UMetaSoundBuilderBase_NodeOutputIsConnected_Params Parms{};

	Parms.OutputHandle = OutputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.NodeInputIsConnected
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMetaSoundBuilderNodeInputHandleInputHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderBase::NodeInputIsConnected(struct FMetaSoundBuilderNodeInputHandle& InputHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "NodeInputIsConnected");

	Params::UMetaSoundBuilderBase_NodeInputIsConnected_Params Parms{};

	Parms.InputHandle = InputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.IsPreset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderBase::IsPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "IsPreset");

	Params::UMetaSoundBuilderBase_IsPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.InterfaceIsDeclared
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InterfaceName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderBase::InterfaceIsDeclared(class FName InterfaceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "InterfaceIsDeclared");

	Params::UMetaSoundBuilderBase_InterfaceIsDeclared_Params Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.GetReferencedPresetAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UMetaSoundBuilderBase::GetReferencedPresetAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "GetReferencedPresetAsset");

	Params::UMetaSoundBuilderBase_GetReferencedPresetAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeOutputHandleOutputHandle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::GetNodeOutputData(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, class FName* Name, class FName* DataType, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "GetNodeOutputData");

	Params::UMetaSoundBuilderBase_GetNodeOutputData_Params Parms{};

	Parms.OutputHandle = OutputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputDefault
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeInputHandleInputHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderBase::GetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "GetNodeInputDefault");

	Params::UMetaSoundBuilderBase_GetNodeInputDefault_Params Parms{};

	Parms.InputHandle = InputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeInputHandleInputHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::GetNodeInputData(struct FMetaSoundBuilderNodeInputHandle& InputHandle, class FName* Name, class FName* DataType, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "GetNodeInputData");

	Params::UMetaSoundBuilderBase_GetNodeInputData_Params Parms{};

	Parms.InputHandle = InputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputClassDefault
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeInputHandleInputHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderBase::GetNodeInputClassDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "GetNodeInputClassDefault");

	Params::UMetaSoundBuilderBase_GetNodeInputClassDefault_Params Parms{};

	Parms.InputHandle = InputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputsByDataType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetaSoundBuilderNodeOutputHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMetaSoundBuilderNodeOutputHandle> UMetaSoundBuilderBase::FindNodeOutputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult, class FName DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeOutputsByDataType");

	Params::UMetaSoundBuilderBase_FindNodeOutputsByDataType_Params Parms{};

	Parms.NodeHandle = NodeHandle;
	Parms.DataType = DataType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetaSoundBuilderNodeOutputHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMetaSoundBuilderNodeOutputHandle> UMetaSoundBuilderBase::FindNodeOutputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeOutputs");

	Params::UMetaSoundBuilderBase_FindNodeOutputs_Params Parms{};

	Parms.NodeHandle = NodeHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputParent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeOutputHandleOutputHandle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundNodeHandle        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::FindNodeOutputParent(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeOutputParent");

	Params::UMetaSoundBuilderBase_FindNodeOutputParent_Params Parms{};

	Parms.OutputHandle = OutputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        OutputName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeOutputHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMetaSoundBuilderNodeOutputHandle UMetaSoundBuilderBase::FindNodeOutputByName(struct FMetaSoundNodeHandle& NodeHandle, class FName OutputName, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeOutputByName");

	Params::UMetaSoundBuilderBase_FindNodeOutputByName_Params Parms{};

	Parms.NodeHandle = NodeHandle;
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputsByDataType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetaSoundBuilderNodeInputHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMetaSoundBuilderNodeInputHandle> UMetaSoundBuilderBase::FindNodeInputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult, class FName DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeInputsByDataType");

	Params::UMetaSoundBuilderBase_FindNodeInputsByDataType_Params Parms{};

	Parms.NodeHandle = NodeHandle;
	Parms.DataType = DataType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetaSoundBuilderNodeInputHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMetaSoundBuilderNodeInputHandle> UMetaSoundBuilderBase::FindNodeInputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeInputs");

	Params::UMetaSoundBuilderBase_FindNodeInputs_Params Parms{};

	Parms.NodeHandle = NodeHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputParent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeInputHandleInputHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundNodeHandle        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::FindNodeInputParent(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeInputParent");

	Params::UMetaSoundBuilderBase_FindNodeInputParent_Params Parms{};

	Parms.InputHandle = InputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        InputName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeInputHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMetaSoundBuilderNodeInputHandle UMetaSoundBuilderBase::FindNodeInputByName(struct FMetaSoundNodeHandle& NodeHandle, class FName InputName, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeInputByName");

	Params::UMetaSoundBuilderBase_FindNodeInputByName_Params Parms{};

	Parms.NodeHandle = NodeHandle;
	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeClassVersion
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendVersion   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMetasoundFrontendVersion UMetaSoundBuilderBase::FindNodeClassVersion(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeClassVersion");

	Params::UMetaSoundBuilderBase_FindNodeClassVersion_Params Parms{};

	Parms.NodeHandle = NodeHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindInterfaceOutputNodes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InterfaceName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetaSoundNodeHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMetaSoundNodeHandle> UMetaSoundBuilderBase::FindInterfaceOutputNodes(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindInterfaceOutputNodes");

	Params::UMetaSoundBuilderBase_FindInterfaceOutputNodes_Params Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindInterfaceInputNodes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InterfaceName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetaSoundNodeHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMetaSoundNodeHandle> UMetaSoundBuilderBase::FindInterfaceInputNodes(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindInterfaceInputNodes");

	Params::UMetaSoundBuilderBase_FindInterfaceInputNodes_Params Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindGraphOutputNode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        OutputName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundNodeHandle        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::FindGraphOutputNode(class FName OutputName, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindGraphOutputNode");

	Params::UMetaSoundBuilderBase_FindGraphOutputNode_Params Parms{};

	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.FindGraphInputNode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InputName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundNodeHandle        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::FindGraphInputNode(class FName InputName, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindGraphInputNode");

	Params::UMetaSoundBuilderBase_FindGraphInputNode_Params Parms{};

	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodesByInterfaceBindings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        FromNodeHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FMetaSoundNodeHandle        ToNodeHandle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::DisconnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "DisconnectNodesByInterfaceBindings");

	Params::UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Params Parms{};

	Parms.FromNodeHandle = FromNodeHandle;
	Parms.ToNodeHandle = ToNodeHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeOutputHandleNodeOutputHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeInputHandleNodeInputHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::DisconnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "DisconnectNodes");

	Params::UMetaSoundBuilderBase_DisconnectNodes_Params Parms{};

	Parms.NodeOutputHandle = NodeOutputHandle;
	Parms.NodeInputHandle = NodeInputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeOutput
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeOutputHandleNodeOutputHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::DisconnectNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "DisconnectNodeOutput");

	Params::UMetaSoundBuilderBase_DisconnectNodeOutput_Params Parms{};

	Parms.NodeOutputHandle = NodeOutputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeInput
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeInputHandleNodeInputHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::DisconnectNodeInput(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "DisconnectNodeInput");

	Params::UMetaSoundBuilderBase_DisconnectNodeInput_Params Parms{};

	Parms.NodeInputHandle = NodeInputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ConvertToPreset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class UMetaSoundDocumentInterface>ReferencedNodeClass                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::ConvertToPreset(TScriptInterface<class UMetaSoundDocumentInterface>& ReferencedNodeClass, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConvertToPreset");

	Params::UMetaSoundBuilderBase_ConvertToPreset_Params Parms{};

	Parms.ReferencedNodeClass = ReferencedNodeClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ConvertFromPreset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::ConvertFromPreset(enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConvertFromPreset");

	Params::UMetaSoundBuilderBase_ConvertFromPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ContainsNodeOutput
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMetaSoundBuilderNodeOutputHandleOutput                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderBase::ContainsNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ContainsNodeOutput");

	Params::UMetaSoundBuilderBase_ContainsNodeOutput_Params Parms{};

	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ContainsNodeInput
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMetaSoundBuilderNodeInputHandleInput                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderBase::ContainsNodeInput(struct FMetaSoundBuilderNodeInputHandle& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ContainsNodeInput");

	Params::UMetaSoundBuilderBase_ContainsNodeInput_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ContainsNode
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMetaSoundNodeHandle        Node                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderBase::ContainsNode(struct FMetaSoundNodeHandle& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ContainsNode");

	Params::UMetaSoundBuilderBase_ContainsNode_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodesByInterfaceBindings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        FromNodeHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FMetaSoundNodeHandle        ToNodeHandle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::ConnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodesByInterfaceBindings");

	Params::UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Params Parms{};

	Parms.FromNodeHandle = FromNodeHandle;
	Parms.ToNodeHandle = ToNodeHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundBuilderNodeOutputHandleNodeOutputHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeInputHandleNodeInputHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::ConnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodes");

	Params::UMetaSoundBuilderBase_ConnectNodes_Params Parms{};

	Parms.NodeOutputHandle = NodeOutputHandle;
	Parms.NodeInputHandle = NodeInputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputToGraphOutput
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        GraphOutputName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeOutputHandleNodeOutputHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::ConnectNodeOutputToGraphOutput(class FName GraphOutputName, struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodeOutputToGraphOutput");

	Params::UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Params Parms{};

	Parms.GraphOutputName = GraphOutputName;
	Parms.NodeOutputHandle = NodeOutputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputsToMatchingGraphInterfaceOutputs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetaSoundBuilderNodeInputHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMetaSoundBuilderNodeInputHandle> UMetaSoundBuilderBase::ConnectNodeOutputsToMatchingGraphInterfaceOutputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodeOutputsToMatchingGraphInterfaceOutputs");

	Params::UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Params Parms{};

	Parms.NodeHandle = NodeHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputToGraphInput
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        GraphInputName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeInputHandleNodeInputHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::ConnectNodeInputToGraphInput(class FName GraphInputName, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodeInputToGraphInput");

	Params::UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Params Parms{};

	Parms.GraphInputName = GraphInputName;
	Parms.NodeInputHandle = NodeInputHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputsToMatchingGraphInterfaceInputs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetaSoundNodeHandle        NodeHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetaSoundBuilderNodeOutputHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMetaSoundBuilderNodeOutputHandle> UMetaSoundBuilderBase::ConnectNodeInputsToMatchingGraphInterfaceInputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodeInputsToMatchingGraphInterfaceInputs");

	Params::UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Params Parms{};

	Parms.NodeHandle = NodeHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.AddNodeByClassName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMetasoundFrontendClassName ClassName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MajorVersion                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundNodeHandle        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::AddNodeByClassName(struct FMetasoundFrontendClassName& ClassName, int32 MajorVersion, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "AddNodeByClassName");

	Params::UMetaSoundBuilderBase_AddNodeByClassName_Params Parms{};

	Parms.ClassName = ClassName;
	Parms.MajorVersion = MajorVersion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.AddNode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class UMetaSoundDocumentInterface>NodeClass                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundNodeHandle        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::AddNode(TScriptInterface<class UMetaSoundDocumentInterface>& NodeClass, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "AddNode");

	Params::UMetaSoundBuilderBase_AddNode_Params Parms{};

	Parms.NodeClass = NodeClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.AddInterface
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InterfaceName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderBase::AddInterface(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "AddInterface");

	Params::UMetaSoundBuilderBase_AddInterface_Params Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundBuilderBase.AddGraphOutputNode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   DefaultValue                                                     (Parm, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsConstructorOutput                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeInputHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMetaSoundBuilderNodeInputHandle UMetaSoundBuilderBase::AddGraphOutputNode(class FName Name, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, enum class EMetaSoundBuilderResult* OutResult, bool bIsConstructorOutput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "AddGraphOutputNode");

	Params::UMetaSoundBuilderBase_AddGraphOutputNode_Params Parms{};

	Parms.Name = Name;
	Parms.DataType = DataType;
	Parms.DefaultValue = DefaultValue;
	Parms.bIsConstructorOutput = bIsConstructorOutput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderBase.AddGraphInputNode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   DefaultValue                                                     (Parm, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsConstructorInput                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeOutputHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMetaSoundBuilderNodeOutputHandle UMetaSoundBuilderBase::AddGraphInputNode(class FName Name, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, enum class EMetaSoundBuilderResult* OutResult, bool bIsConstructorInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderBase", "AddGraphInputNode");

	Params::UMetaSoundBuilderBase_AddGraphInputNode_Params Parms{};

	Parms.Name = Name;
	Parms.DataType = DataType;
	Parms.DefaultValue = DefaultValue;
	Parms.bIsConstructorInput = bIsConstructorInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Class MetasoundEngine.MetaSoundPatchBuilder
// (None)

class UClass* UMetaSoundPatchBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundPatchBuilder");

	return Clss;
}


// MetaSoundPatchBuilder MetasoundEngine.Default__MetaSoundPatchBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundPatchBuilder* UMetaSoundPatchBuilder::GetDefaultObj()
{
	static class UMetaSoundPatchBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundPatchBuilder*>(UMetaSoundPatchBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetaSoundPatchBuilder.Build
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Parent                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderOptions    Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TScriptInterface<class UMetaSoundDocumentInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class UMetaSoundDocumentInterface> UMetaSoundPatchBuilder::Build(class UObject* Parent, struct FMetaSoundBuilderOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundPatchBuilder", "Build");

	Params::UMetaSoundPatchBuilder_Build_Params Parms{};

	Parms.Parent = Parent;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MetasoundEngine.MetaSoundSourceBuilder
// (None)

class UClass* UMetaSoundSourceBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundSourceBuilder");

	return Clss;
}


// MetaSoundSourceBuilder MetasoundEngine.Default__MetaSoundSourceBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundSourceBuilder* UMetaSoundSourceBuilder::GetDefaultObj()
{
	static class UMetaSoundSourceBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundSourceBuilder*>(UMetaSoundSourceBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetaSoundSourceBuilder.SetFormat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EMetaSoundOutputAudioFormatOutputFormat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundSourceBuilder::SetFormat(enum class EMetaSoundOutputAudioFormat OutputFormat, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundSourceBuilder", "SetFormat");

	Params::UMetaSoundSourceBuilder_SetFormat_Params Parms{};

	Parms.OutputFormat = OutputFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MetasoundEngine.MetaSoundSourceBuilder.GetLiveUpdatesEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundSourceBuilder::GetLiveUpdatesEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundSourceBuilder", "GetLiveUpdatesEnabled");

	Params::UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundSourceBuilder.Build
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Parent                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderOptions    Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TScriptInterface<class UMetaSoundDocumentInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class UMetaSoundDocumentInterface> UMetaSoundSourceBuilder::Build(class UObject* Parent, struct FMetaSoundBuilderOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundSourceBuilder", "Build");

	Params::UMetaSoundSourceBuilder_Build_Params Parms{};

	Parms.Parent = Parent;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundSourceBuilder.Audition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Parent                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*             AudioComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnCreateGenerator                                                (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLiveUpdatesEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundSourceBuilder::Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FDelegateProperty_ OnCreateGenerator, bool bLiveUpdatesEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundSourceBuilder", "Audition");

	Params::UMetaSoundSourceBuilder_Audition_Params Parms{};

	Parms.Parent = Parent;
	Parms.AudioComponent = AudioComponent;
	Parms.OnCreateGenerator = OnCreateGenerator;
	Parms.bLiveUpdatesEnabled = bLiveUpdatesEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MetasoundEngine.MetaSoundBuilderSubsystem
// (None)

class UClass* UMetaSoundBuilderSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundBuilderSubsystem");

	return Clss;
}


// MetaSoundBuilderSubsystem MetasoundEngine.Default__MetaSoundBuilderSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundBuilderSubsystem* UMetaSoundBuilderSubsystem::GetDefaultObj()
{
	static class UMetaSoundBuilderSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundBuilderSubsystem*>(UMetaSoundBuilderSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterSourceBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderSubsystem::UnregisterSourceBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "UnregisterSourceBuilder");

	Params::UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterPatchBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderSubsystem::UnregisterPatchBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "UnregisterPatchBuilder");

	Params::UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderSubsystem::UnregisterBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "UnregisterBuilder");

	Params::UMetaSoundBuilderSubsystem_UnregisterBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterSourceBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundSourceBuilder*     Builder                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderSubsystem::RegisterSourceBuilder(class FName BuilderName, class UMetaSoundSourceBuilder* Builder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "RegisterSourceBuilder");

	Params::UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;
	Parms.Builder = Builder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterPatchBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundPatchBuilder*      Builder                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderSubsystem::RegisterPatchBuilder(class FName BuilderName, class UMetaSoundPatchBuilder* Builder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "RegisterPatchBuilder");

	Params::UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;
	Parms.Builder = Builder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundBuilderBase*       Builder                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMetaSoundBuilderSubsystem::RegisterBuilder(class FName BuilderName, class UMetaSoundBuilderBase* Builder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "RegisterBuilder");

	Params::UMetaSoundBuilderSubsystem_RegisterBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;
	Parms.Builder = Builder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.IsInterfaceRegistered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InInterfaceName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMetaSoundBuilderSubsystem::IsInterfaceRegistered(class FName InInterfaceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "IsInterfaceRegistered");

	Params::UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Params Parms{};

	Parms.InInterfaceName = InInterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.FindSourceBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundSourceBuilder*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMetaSoundSourceBuilder* UMetaSoundBuilderSubsystem::FindSourceBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "FindSourceBuilder");

	Params::UMetaSoundBuilderSubsystem_FindSourceBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.FindPatchBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundPatchBuilder*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMetaSoundPatchBuilder* UMetaSoundBuilderSubsystem::FindPatchBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "FindPatchBuilder");

	Params::UMetaSoundBuilderSubsystem_FindPatchBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundBuilderBase*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMetaSoundBuilderBase* UMetaSoundBuilderSubsystem::FindBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "FindBuilder");

	Params::UMetaSoundBuilderSubsystem_FindBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringMetaSoundLiteral
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateStringMetaSoundLiteral(const class FString& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateStringMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringArrayMetaSoundLiteral
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateStringArrayMetaSoundLiteral(TArray<class FString>& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateStringArrayMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourcePresetBuilder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UMetaSoundDocumentInterface>ReferencedSourceClass                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundSourceBuilder*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMetaSoundSourceBuilder* UMetaSoundBuilderSubsystem::CreateSourcePresetBuilder(class FName BuilderName, TScriptInterface<class UMetaSoundDocumentInterface>& ReferencedSourceClass, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateSourcePresetBuilder");

	Params::UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;
	Parms.ReferencedSourceClass = ReferencedSourceClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourceBuilder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeOutputHandleOnPlayNodeOutput                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetaSoundBuilderNodeInputHandleOnFinishedNodeInput                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMetaSoundBuilderNodeInputHandle>AudioOutNodeInputs                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundOutputAudioFormatOutputFormat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsOneShot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundSourceBuilder*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMetaSoundSourceBuilder* UMetaSoundBuilderSubsystem::CreateSourceBuilder(class FName BuilderName, struct FMetaSoundBuilderNodeOutputHandle* OnPlayNodeOutput, struct FMetaSoundBuilderNodeInputHandle* OnFinishedNodeInput, TArray<struct FMetaSoundBuilderNodeInputHandle>* AudioOutNodeInputs, enum class EMetaSoundBuilderResult* OutResult, enum class EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateSourceBuilder");

	Params::UMetaSoundBuilderSubsystem_CreateSourceBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;
	Parms.OutputFormat = OutputFormat;
	Parms.bIsOneShot = bIsOneShot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnPlayNodeOutput != nullptr)
		*OnPlayNodeOutput = Parms.OnPlayNodeOutput;

	if (OnFinishedNodeInput != nullptr)
		*OnFinishedNodeInput = Parms.OnFinishedNodeInput;

	if (AudioOutNodeInputs != nullptr)
		*AudioOutNodeInputs = Parms.AudioOutNodeInputs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchPresetBuilder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UMetaSoundDocumentInterface>ReferencedPatchClass                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundPatchBuilder*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMetaSoundPatchBuilder* UMetaSoundBuilderSubsystem::CreatePatchPresetBuilder(class FName BuilderName, TScriptInterface<class UMetaSoundDocumentInterface>& ReferencedPatchClass, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreatePatchPresetBuilder");

	Params::UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;
	Parms.ReferencedPatchClass = ReferencedPatchClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchBuilder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        BuilderName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMetaSoundBuilderResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMetaSoundPatchBuilder*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMetaSoundPatchBuilder* UMetaSoundBuilderSubsystem::CreatePatchBuilder(class FName BuilderName, enum class EMetaSoundBuilderResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreatePatchBuilder");

	Params::UMetaSoundBuilderSubsystem_CreatePatchBuilder_Params Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectMetaSoundLiteral
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateObjectMetaSoundLiteral(class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateObjectMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectArrayMetaSoundLiteral
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateObjectArrayMetaSoundLiteral(TArray<class UObject*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateObjectArrayMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateMetaSoundLiteralFromParam
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioParameter             Param                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateMetaSoundLiteralFromParam(struct FAudioParameter& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateMetaSoundLiteralFromParam");

	Params::UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Params Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntMetaSoundLiteral
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateIntMetaSoundLiteral(int32 Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateIntMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntArrayMetaSoundLiteral
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateIntArrayMetaSoundLiteral(TArray<int32>& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateIntArrayMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatMetaSoundLiteral
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateFloatMetaSoundLiteral(float Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateFloatMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatArrayMetaSoundLiteral
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateFloatArrayMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolMetaSoundLiteral
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateBoolMetaSoundLiteral(bool Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateBoolMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;

}


// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolArrayMetaSoundLiteral
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<bool>                       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        DataType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMetasoundFrontendLiteral   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateBoolArrayMetaSoundLiteral");

	Params::UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;

}


// Class MetasoundEngine.MetaSoundSource
// (None)

class UClass* UMetaSoundSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaSoundSource");

	return Clss;
}


// MetaSoundSource MetasoundEngine.Default__MetaSoundSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetaSoundSource* UMetaSoundSource::GetDefaultObj()
{
	static class UMetaSoundSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaSoundSource*>(UMetaSoundSource::StaticClass()->DefaultObject);

	return Default;
}

}


