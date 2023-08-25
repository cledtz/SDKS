#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioModulation.AudioModulationStyle
// (None)

class UClass* UAudioModulationStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioModulationStyle");

	return Clss;
}


// AudioModulationStyle AudioModulation.Default__AudioModulationStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioModulationStyle* UAudioModulationStyle::GetDefaultObj()
{
	static class UAudioModulationStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioModulationStyle*>(UAudioModulationStyle::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioModulation.AudioModulationStyle.GetPatchColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetPatchColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStyle", "GetPatchColor");

	Params::UAudioModulationStyle_GetPatchColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStyle.GetParameterColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetParameterColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStyle", "GetParameterColor");

	Params::UAudioModulationStyle_GetParameterColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStyle.GetModulationGeneratorColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetModulationGeneratorColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStyle", "GetModulationGeneratorColor");

	Params::UAudioModulationStyle_GetModulationGeneratorColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStyle.GetControlBusMixColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetControlBusMixColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStyle", "GetControlBusMixColor");

	Params::UAudioModulationStyle_GetControlBusMixColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStyle.GetControlBusColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetControlBusColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStyle", "GetControlBusColor");

	Params::UAudioModulationStyle_GetControlBusColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AudioModulation.AudioModulationSettings
// (None)

class UClass* UAudioModulationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioModulationSettings");

	return Clss;
}


// AudioModulationSettings AudioModulation.Default__AudioModulationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioModulationSettings* UAudioModulationSettings::GetDefaultObj()
{
	static class UAudioModulationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioModulationSettings*>(UAudioModulationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.AudioModulationStatics
// (None)

class UClass* UAudioModulationStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioModulationStatics");

	return Clss;
}


// AudioModulationStatics AudioModulation.Default__AudioModulationStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioModulationStatics* UAudioModulationStatics::GetDefaultObj()
{
	static class UAudioModulationStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioModulationStatics*>(UAudioModulationStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioModulation.AudioModulationStatics.UpdateModulator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulatorBase*         Modulator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::UpdateModulator(class UObject* WorldContextObject, class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "UpdateModulator");

	Params::UAudioModulationStatics_UpdateModulator_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.UpdateMixFromObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::UpdateMixFromObject(class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "UpdateMixFromObject");

	Params::UAudioModulationStatics_UpdateMixFromObject_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.UpdateMixByFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AddressFilter                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundModulationParameter>ParamClassFilter                                                 (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulationParameter*   ParamFilter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::UpdateMixByFilter(class UObject* WorldContextObject, class USoundControlBusMix* Mix, const class FString& AddressFilter, TSubclassOf<class USoundModulationParameter> ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "UpdateMixByFilter");

	Params::UAudioModulationStatics_UpdateMixByFilter_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.AddressFilter = AddressFilter;
	Parms.ParamClassFilter = ParamClassFilter;
	Parms.ParamFilter = ParamFilter;
	Parms.Value = Value;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.UpdateMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSoundControlBusMixStage>Stages                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::UpdateMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix, const TArray<struct FSoundControlBusMixStage>& Stages, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "UpdateMix");

	Params::UAudioModulationStatics_UpdateMix_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.Stages = Stages;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.SetGlobalBusMixValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBus*            Bus                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::SetGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "SetGlobalBusMixValue");

	Params::UAudioModulationStatics_SetGlobalBusMixValue_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;
	Parms.Value = Value;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.SaveMixToProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ProfileIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::SaveMixToProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, int32 ProfileIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "SaveMixToProfile");

	Params::UAudioModulationStatics_SaveMixToProfile_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.ProfileIndex = ProfileIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.LoadMixFromProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivate                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ProfileIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSoundControlBusMixStage>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSoundControlBusMixStage> UAudioModulationStatics::LoadMixFromProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int32 ProfileIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "LoadMixFromProfile");

	Params::UAudioModulationStatics_LoadMixFromProfile_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.bActivate = bActivate;
	Parms.ProfileIndex = ProfileIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.GetModulatorValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulatorBase*         Modulator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioModulationStatics::GetModulatorValue(class UObject* WorldContextObject, class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "GetModulatorValue");

	Params::UAudioModulationStatics_GetModulatorValue_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.GetModulatorsFromDestination
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSoundModulationDestinationSettingsDestination                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSet<class USoundModulatorBase*>   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TSet<class USoundModulatorBase*> UAudioModulationStatics::GetModulatorsFromDestination(struct FSoundModulationDestinationSettings& Destination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "GetModulatorsFromDestination");

	Params::UAudioModulationStatics_GetModulatorsFromDestination_Params Parms{};

	Parms.Destination = Destination;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.DeactivateGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulationGenerator*   Generator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::DeactivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "DeactivateGenerator");

	Params::UAudioModulationStatics_DeactivateGenerator_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Generator = Generator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.DeactivateBusMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::DeactivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "DeactivateBusMix");

	Params::UAudioModulationStatics_DeactivateBusMix_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.DeactivateBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBus*            Bus                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::DeactivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "DeactivateBus");

	Params::UAudioModulationStatics_DeactivateBus_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.DeactivateAllBusMixes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::DeactivateAllBusMixes(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "DeactivateAllBusMixes");

	Params::UAudioModulationStatics_DeactivateAllBusMixes_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.CreateModulationParameter
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USoundModulationParameter>ParamClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulationParameter*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundModulationParameter* UAudioModulationStatics::CreateModulationParameter(class UObject* WorldContextObject, class FName Name, TSubclassOf<class USoundModulationParameter> ParamClass, float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "CreateModulationParameter");

	Params::UAudioModulationStatics_CreateModulationParameter_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.ParamClass = ParamClass;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.CreateLFOGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundModulationLFOParams   Params                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class USoundModulationGeneratorLFO*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundModulationGeneratorLFO* UAudioModulationStatics::CreateLFOGenerator(class UObject* WorldContextObject, class FName Name, const struct FSoundModulationLFOParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "CreateLFOGenerator");

	Params::UAudioModulationStatics_CreateLFOGenerator_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.CreateEnvelopeFollowerGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEnvelopeFollowerGeneratorParamsParams                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class USoundModulationGeneratorEnvelopeFollower*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundModulationGeneratorEnvelopeFollower* UAudioModulationStatics::CreateEnvelopeFollowerGenerator(class UObject* WorldContextObject, class FName Name, const struct FEnvelopeFollowerGeneratorParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "CreateEnvelopeFollowerGenerator");

	Params::UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.CreateBusMixStage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBus*            Bus                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AttackTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReleaseTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundControlBusMixStage    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSoundControlBusMixStage UAudioModulationStatics::CreateBusMixStage(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "CreateBusMixStage");

	Params::UAudioModulationStatics_CreateBusMixStage_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;
	Parms.Value = Value;
	Parms.AttackTime = AttackTime;
	Parms.ReleaseTime = ReleaseTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.CreateBusMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSoundControlBusMixStage>Stages                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               Activate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundControlBusMix* UAudioModulationStatics::CreateBusMix(class UObject* WorldContextObject, class FName Name, const TArray<struct FSoundControlBusMixStage>& Stages, bool Activate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "CreateBusMix");

	Params::UAudioModulationStatics_CreateBusMix_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Stages = Stages;
	Parms.Activate = Activate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.CreateBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulationParameter*   Parameter                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Activate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBus*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundControlBus* UAudioModulationStatics::CreateBus(class UObject* WorldContextObject, class FName Name, class USoundModulationParameter* Parameter, bool Activate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "CreateBus");

	Params::UAudioModulationStatics_CreateBus_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Parameter = Parameter;
	Parms.Activate = Activate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.CreateADEnvelopeGenerator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoundModulationADEnvelopeParamsParams                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class USoundModulationGeneratorADEnvelope*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundModulationGeneratorADEnvelope* UAudioModulationStatics::CreateADEnvelopeGenerator(class UObject* WorldContextObject, class FName Name, struct FSoundModulationADEnvelopeParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "CreateADEnvelopeGenerator");

	Params::UAudioModulationStatics_CreateADEnvelopeGenerator_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBus*            Bus                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::ClearGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "ClearGlobalBusMixValue");

	Params::UAudioModulationStatics_ClearGlobalBusMixValue_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::ClearAllGlobalBusMixValues(class UObject* WorldContextObject, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "ClearAllGlobalBusMixValues");

	Params::UAudioModulationStatics_ClearAllGlobalBusMixValues_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.ActivateGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulationGenerator*   Generator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::ActivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "ActivateGenerator");

	Params::UAudioModulationStatics_ActivateGenerator_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Generator = Generator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.ActivateBusMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::ActivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "ActivateBusMix");

	Params::UAudioModulationStatics_ActivateBusMix_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.AudioModulationStatics.ActivateBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBus*            Bus                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::ActivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioModulationStatics", "ActivateBus");

	Params::UAudioModulationStatics_ActivateBus_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioModulation.SoundModulationGenerator
// (None)

class UClass* USoundModulationGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationGenerator");

	return Clss;
}


// SoundModulationGenerator AudioModulation.Default__SoundModulationGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationGenerator* USoundModulationGenerator::GetDefaultObj()
{
	static class USoundModulationGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationGenerator*>(USoundModulationGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationGeneratorADEnvelope
// (None)

class UClass* USoundModulationGeneratorADEnvelope::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationGeneratorADEnvelope");

	return Clss;
}


// SoundModulationGeneratorADEnvelope AudioModulation.Default__SoundModulationGeneratorADEnvelope
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationGeneratorADEnvelope* USoundModulationGeneratorADEnvelope::GetDefaultObj()
{
	static class USoundModulationGeneratorADEnvelope* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationGeneratorADEnvelope*>(USoundModulationGeneratorADEnvelope::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationGeneratorEnvelopeFollower
// (None)

class UClass* USoundModulationGeneratorEnvelopeFollower::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationGeneratorEnvelopeFollower");

	return Clss;
}


// SoundModulationGeneratorEnvelopeFollower AudioModulation.Default__SoundModulationGeneratorEnvelopeFollower
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationGeneratorEnvelopeFollower* USoundModulationGeneratorEnvelopeFollower::GetDefaultObj()
{
	static class USoundModulationGeneratorEnvelopeFollower* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationGeneratorEnvelopeFollower*>(USoundModulationGeneratorEnvelopeFollower::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationGeneratorLFO
// (None)

class UClass* USoundModulationGeneratorLFO::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationGeneratorLFO");

	return Clss;
}


// SoundModulationGeneratorLFO AudioModulation.Default__SoundModulationGeneratorLFO
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationGeneratorLFO* USoundModulationGeneratorLFO::GetDefaultObj()
{
	static class USoundModulationGeneratorLFO* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationGeneratorLFO*>(USoundModulationGeneratorLFO::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundControlBus
// (None)

class UClass* USoundControlBus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundControlBus");

	return Clss;
}


// SoundControlBus AudioModulation.Default__SoundControlBus
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundControlBus* USoundControlBus::GetDefaultObj()
{
	static class USoundControlBus* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundControlBus*>(USoundControlBus::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundControlBusMix
// (None)

class UClass* USoundControlBusMix::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundControlBusMix");

	return Clss;
}


// SoundControlBusMix AudioModulation.Default__SoundControlBusMix
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundControlBusMix* USoundControlBusMix::GetDefaultObj()
{
	static class USoundControlBusMix* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundControlBusMix*>(USoundControlBusMix::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioModulation.SoundControlBusMix.SoloMix
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::SoloMix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundControlBusMix", "SoloMix");

	Params::USoundControlBusMix_SoloMix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.SoundControlBusMix.SaveMixToProfile
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::SaveMixToProfile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundControlBusMix", "SaveMixToProfile");

	Params::USoundControlBusMix_SaveMixToProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.SoundControlBusMix.LoadMixFromProfile
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::LoadMixFromProfile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundControlBusMix", "LoadMixFromProfile");

	Params::USoundControlBusMix_LoadMixFromProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.SoundControlBusMix.DeactivateMix
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::DeactivateMix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundControlBusMix", "DeactivateMix");

	Params::USoundControlBusMix_DeactivateMix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.SoundControlBusMix.DeactivateAllMixes
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::DeactivateAllMixes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundControlBusMix", "DeactivateAllMixes");

	Params::USoundControlBusMix_DeactivateAllMixes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioModulation.SoundControlBusMix.ActivateMix
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::ActivateMix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundControlBusMix", "ActivateMix");

	Params::USoundControlBusMix_ActivateMix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioModulation.SoundModulationParameter
// (None)

class UClass* USoundModulationParameter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationParameter");

	return Clss;
}


// SoundModulationParameter AudioModulation.Default__SoundModulationParameter
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationParameter* USoundModulationParameter::GetDefaultObj()
{
	static class USoundModulationParameter* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationParameter*>(USoundModulationParameter::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationParameterScaled
// (None)

class UClass* USoundModulationParameterScaled::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationParameterScaled");

	return Clss;
}


// SoundModulationParameterScaled AudioModulation.Default__SoundModulationParameterScaled
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationParameterScaled* USoundModulationParameterScaled::GetDefaultObj()
{
	static class USoundModulationParameterScaled* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationParameterScaled*>(USoundModulationParameterScaled::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationParameterFrequencyBase
// (None)

class UClass* USoundModulationParameterFrequencyBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationParameterFrequencyBase");

	return Clss;
}


// SoundModulationParameterFrequencyBase AudioModulation.Default__SoundModulationParameterFrequencyBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationParameterFrequencyBase* USoundModulationParameterFrequencyBase::GetDefaultObj()
{
	static class USoundModulationParameterFrequencyBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationParameterFrequencyBase*>(USoundModulationParameterFrequencyBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationParameterFrequency
// (None)

class UClass* USoundModulationParameterFrequency::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationParameterFrequency");

	return Clss;
}


// SoundModulationParameterFrequency AudioModulation.Default__SoundModulationParameterFrequency
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationParameterFrequency* USoundModulationParameterFrequency::GetDefaultObj()
{
	static class USoundModulationParameterFrequency* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationParameterFrequency*>(USoundModulationParameterFrequency::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationParameterFilterFrequency
// (None)

class UClass* USoundModulationParameterFilterFrequency::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationParameterFilterFrequency");

	return Clss;
}


// SoundModulationParameterFilterFrequency AudioModulation.Default__SoundModulationParameterFilterFrequency
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationParameterFilterFrequency* USoundModulationParameterFilterFrequency::GetDefaultObj()
{
	static class USoundModulationParameterFilterFrequency* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationParameterFilterFrequency*>(USoundModulationParameterFilterFrequency::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationParameterLPFFrequency
// (None)

class UClass* USoundModulationParameterLPFFrequency::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationParameterLPFFrequency");

	return Clss;
}


// SoundModulationParameterLPFFrequency AudioModulation.Default__SoundModulationParameterLPFFrequency
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationParameterLPFFrequency* USoundModulationParameterLPFFrequency::GetDefaultObj()
{
	static class USoundModulationParameterLPFFrequency* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationParameterLPFFrequency*>(USoundModulationParameterLPFFrequency::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationParameterHPFFrequency
// (None)

class UClass* USoundModulationParameterHPFFrequency::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationParameterHPFFrequency");

	return Clss;
}


// SoundModulationParameterHPFFrequency AudioModulation.Default__SoundModulationParameterHPFFrequency
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationParameterHPFFrequency* USoundModulationParameterHPFFrequency::GetDefaultObj()
{
	static class USoundModulationParameterHPFFrequency* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationParameterHPFFrequency*>(USoundModulationParameterHPFFrequency::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationParameterBipolar
// (None)

class UClass* USoundModulationParameterBipolar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationParameterBipolar");

	return Clss;
}


// SoundModulationParameterBipolar AudioModulation.Default__SoundModulationParameterBipolar
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationParameterBipolar* USoundModulationParameterBipolar::GetDefaultObj()
{
	static class USoundModulationParameterBipolar* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationParameterBipolar*>(USoundModulationParameterBipolar::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationParameterVolume
// (None)

class UClass* USoundModulationParameterVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationParameterVolume");

	return Clss;
}


// SoundModulationParameterVolume AudioModulation.Default__SoundModulationParameterVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationParameterVolume* USoundModulationParameterVolume::GetDefaultObj()
{
	static class USoundModulationParameterVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationParameterVolume*>(USoundModulationParameterVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioModulation.SoundModulationPatch
// (None)

class UClass* USoundModulationPatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundModulationPatch");

	return Clss;
}


// SoundModulationPatch AudioModulation.Default__SoundModulationPatch
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundModulationPatch* USoundModulationPatch::GetDefaultObj()
{
	static class USoundModulationPatch* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundModulationPatch*>(USoundModulationPatch::StaticClass()->DefaultObject);

	return Default;
}

}


