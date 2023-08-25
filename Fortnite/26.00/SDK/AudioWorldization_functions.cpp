#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioWorldization.AudioWorldizationReflectionProbe
// (Actor)

class UClass* UAudioWorldizationReflectionProbe::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioWorldizationReflectionProbe");

	return Clss;
}


// AudioWorldizationReflectionProbe AudioWorldization.Default__AudioWorldizationReflectionProbe
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioWorldizationReflectionProbe* UAudioWorldizationReflectionProbe::GetDefaultObj()
{
	static class UAudioWorldizationReflectionProbe* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioWorldizationReflectionProbe*>(UAudioWorldizationReflectionProbe::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWorldization.AudioWorldizationDefaultSettings
// (None)

class UClass* UAudioWorldizationDefaultSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioWorldizationDefaultSettings");

	return Clss;
}


// AudioWorldizationDefaultSettings AudioWorldization.Default__AudioWorldizationDefaultSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioWorldizationDefaultSettings* UAudioWorldizationDefaultSettings::GetDefaultObj()
{
	static class UAudioWorldizationDefaultSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioWorldizationDefaultSettings*>(UAudioWorldizationDefaultSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWorldization.AudioWorldizationSubsystem
// (None)

class UClass* UAudioWorldizationSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioWorldizationSubsystem");

	return Clss;
}


// AudioWorldizationSubsystem AudioWorldization.Default__AudioWorldizationSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioWorldizationSubsystem* UAudioWorldizationSubsystem::GetDefaultObj()
{
	static class UAudioWorldizationSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioWorldizationSubsystem*>(UAudioWorldizationSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioWorldization.AudioWorldizationSubsystem.SetWorldizationSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioWorldizationSettings  InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioWorldizationSubsystem::SetWorldizationSettings(struct FAudioWorldizationSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioWorldizationSubsystem", "SetWorldizationSettings");

	Params::UAudioWorldizationSubsystem_SetWorldizationSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioWorldization.AudioWorldizationSubsystem.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioWorldizationSubsystem::SetEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioWorldizationSubsystem", "SetEnabled");

	Params::UAudioWorldizationSubsystem_SetEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioWorldization.AudioWorldizationSubsystem.SetDefaultSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAudioWorldizationSubsystem::SetDefaultSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioWorldizationSubsystem", "SetDefaultSettings");

	Params::UAudioWorldizationSubsystem_SetDefaultSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioWorldization.AudioWorldizationSubsystem.RemoveWorldizationSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InIdentifier                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioWorldizationSubsystem::RemoveWorldizationSettings(class FName InIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioWorldizationSubsystem", "RemoveWorldizationSettings");

	Params::UAudioWorldizationSubsystem_RemoveWorldizationSettings_Params Parms{};

	Parms.InIdentifier = InIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioWorldization.AudioWorldizationSubsystem.GetTraceResults
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FAudioSphereTraceResult>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FAudioSphereTraceResult> UAudioWorldizationSubsystem::GetTraceResults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioWorldizationSubsystem", "GetTraceResults");

	Params::UAudioWorldizationSubsystem_GetTraceResults_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWorldization.AudioWorldizationSubsystem.GetEnclosureFactor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioWorldizationSubsystem::GetEnclosureFactor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioWorldizationSubsystem", "GetEnclosureFactor");

	Params::UAudioWorldizationSubsystem_GetEnclosureFactor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWorldization.AudioWorldizationSubsystem.GetAverageTraceDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioWorldizationSubsystem::GetAverageTraceDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioWorldizationSubsystem", "GetAverageTraceDistance");

	Params::UAudioWorldizationSubsystem_GetAverageTraceDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AudioWorldization.AudioWorldizationTraceDirectionPolicyBase
// (None)

class UClass* UAudioWorldizationTraceDirectionPolicyBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioWorldizationTraceDirectionPolicyBase");

	return Clss;
}


// AudioWorldizationTraceDirectionPolicyBase AudioWorldization.Default__AudioWorldizationTraceDirectionPolicyBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioWorldizationTraceDirectionPolicyBase* UAudioWorldizationTraceDirectionPolicyBase::GetDefaultObj()
{
	static class UAudioWorldizationTraceDirectionPolicyBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioWorldizationTraceDirectionPolicyBase*>(UAudioWorldizationTraceDirectionPolicyBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWorldization.AudioWorldizationTraceDirectionPolicyDefault
// (None)

class UClass* UAudioWorldizationTraceDirectionPolicyDefault::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioWorldizationTraceDirectionPolicyDefault");

	return Clss;
}


// AudioWorldizationTraceDirectionPolicyDefault AudioWorldization.Default__AudioWorldizationTraceDirectionPolicyDefault
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioWorldizationTraceDirectionPolicyDefault* UAudioWorldizationTraceDirectionPolicyDefault::GetDefaultObj()
{
	static class UAudioWorldizationTraceDirectionPolicyDefault* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioWorldizationTraceDirectionPolicyDefault*>(UAudioWorldizationTraceDirectionPolicyDefault::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWorldization.AudioWorldizationTracePolicyBase
// (None)

class UClass* UAudioWorldizationTracePolicyBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioWorldizationTracePolicyBase");

	return Clss;
}


// AudioWorldizationTracePolicyBase AudioWorldization.Default__AudioWorldizationTracePolicyBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioWorldizationTracePolicyBase* UAudioWorldizationTracePolicyBase::GetDefaultObj()
{
	static class UAudioWorldizationTracePolicyBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioWorldizationTracePolicyBase*>(UAudioWorldizationTracePolicyBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWorldization.AudioWorldizationTracePolicyDefault
// (None)

class UClass* UAudioWorldizationTracePolicyDefault::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioWorldizationTracePolicyDefault");

	return Clss;
}


// AudioWorldizationTracePolicyDefault AudioWorldization.Default__AudioWorldizationTracePolicyDefault
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioWorldizationTracePolicyDefault* UAudioWorldizationTracePolicyDefault::GetDefaultObj()
{
	static class UAudioWorldizationTracePolicyDefault* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioWorldizationTracePolicyDefault*>(UAudioWorldizationTracePolicyDefault::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWorldization.GameFeatureAction_SetAudioWorldizationSettings
// (None)

class UClass* UGameFeatureAction_SetAudioWorldizationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_SetAudioWorldizationSettings");

	return Clss;
}


// GameFeatureAction_SetAudioWorldizationSettings AudioWorldization.Default__GameFeatureAction_SetAudioWorldizationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_SetAudioWorldizationSettings* UGameFeatureAction_SetAudioWorldizationSettings::GetDefaultObj()
{
	static class UGameFeatureAction_SetAudioWorldizationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_SetAudioWorldizationSettings*>(UGameFeatureAction_SetAudioWorldizationSettings::StaticClass()->DefaultObject);

	return Default;
}

}


