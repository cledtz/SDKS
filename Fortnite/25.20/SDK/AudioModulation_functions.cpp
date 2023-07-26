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


// Function AudioModulation.AudioModulationStyle.GetPatchColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetPatchColor()
{
	static auto Func = Class->GetFunction("AudioModulationStyle", "GetPatchColor");

	Params::UAudioModulationStyle_GetPatchColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStyle.GetParameterColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetParameterColor()
{
	static auto Func = Class->GetFunction("AudioModulationStyle", "GetParameterColor");

	Params::UAudioModulationStyle_GetParameterColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStyle.GetModulationGeneratorColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetModulationGeneratorColor()
{
	static auto Func = Class->GetFunction("AudioModulationStyle", "GetModulationGeneratorColor");

	Params::UAudioModulationStyle_GetModulationGeneratorColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStyle.GetControlBusMixColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetControlBusMixColor()
{
	static auto Func = Class->GetFunction("AudioModulationStyle", "GetControlBusMixColor");

	Params::UAudioModulationStyle_GetControlBusMixColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStyle.GetControlBusColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UAudioModulationStyle::GetControlBusColor()
{
	static auto Func = Class->GetFunction("AudioModulationStyle", "GetControlBusColor");

	Params::UAudioModulationStyle_GetControlBusColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.UpdateModulator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulatorBase*         Modulator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::UpdateModulator(class UObject* WorldContextObject, class USoundModulatorBase* Modulator)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "UpdateModulator");

	Params::UAudioModulationStatics_UpdateModulator_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Modulator = Modulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.AudioModulationStatics.UpdateMixFromObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::UpdateMixFromObject(class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "UpdateMixFromObject");

	Params::UAudioModulationStatics_UpdateMixFromObject_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.FadeTime = FadeTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "UpdateMixByFilter");

	Params::UAudioModulationStatics_UpdateMixByFilter_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.AddressFilter = AddressFilter;
	Parms.ParamClassFilter = ParamClassFilter;
	Parms.ParamFilter = ParamFilter;
	Parms.Value = Value;
	Parms.FadeTime = FadeTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "UpdateMix");

	Params::UAudioModulationStatics_UpdateMix_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.Stages = Stages;
	Parms.FadeTime = FadeTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "SetGlobalBusMixValue");

	Params::UAudioModulationStatics_SetGlobalBusMixValue_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;
	Parms.Value = Value;
	Parms.FadeTime = FadeTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.AudioModulationStatics.SaveMixToProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ProfileIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::SaveMixToProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, int32 ProfileIndex)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "SaveMixToProfile");

	Params::UAudioModulationStatics_SaveMixToProfile_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.ProfileIndex = ProfileIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "LoadMixFromProfile");

	Params::UAudioModulationStatics_LoadMixFromProfile_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;
	Parms.bActivate = bActivate;
	Parms.ProfileIndex = ProfileIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "GetModulatorValue");

	Params::UAudioModulationStatics_GetModulatorValue_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Modulator = Modulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.GetModulatorsFromDestination
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSoundModulationDestinationSettingsDestination                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSet<class USoundModulatorBase*>   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TSet<class USoundModulatorBase*> UAudioModulationStatics::GetModulatorsFromDestination(struct FSoundModulationDestinationSettings& Destination)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "GetModulatorsFromDestination");

	Params::UAudioModulationStatics_GetModulatorsFromDestination_Params Parms;

	Parms.Destination = Destination;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioModulation.AudioModulationStatics.DeactivateGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulationGenerator*   Generator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::DeactivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "DeactivateGenerator");

	Params::UAudioModulationStatics_DeactivateGenerator_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Generator = Generator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.AudioModulationStatics.DeactivateBusMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::DeactivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "DeactivateBusMix");

	Params::UAudioModulationStatics_DeactivateBusMix_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.AudioModulationStatics.DeactivateBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBus*            Bus                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::DeactivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "DeactivateBus");

	Params::UAudioModulationStatics_DeactivateBus_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.AudioModulationStatics.DeactivateAllBusMixes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::DeactivateAllBusMixes(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "DeactivateAllBusMixes");

	Params::UAudioModulationStatics_DeactivateAllBusMixes_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "CreateModulationParameter");

	Params::UAudioModulationStatics_CreateModulationParameter_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.ParamClass = ParamClass;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "CreateLFOGenerator");

	Params::UAudioModulationStatics_CreateLFOGenerator_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "CreateEnvelopeFollowerGenerator");

	Params::UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "CreateBusMixStage");

	Params::UAudioModulationStatics_CreateBusMixStage_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;
	Parms.Value = Value;
	Parms.AttackTime = AttackTime;
	Parms.ReleaseTime = ReleaseTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "CreateBusMix");

	Params::UAudioModulationStatics_CreateBusMix_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Stages = Stages;
	Parms.Activate = Activate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "CreateBus");

	Params::UAudioModulationStatics_CreateBus_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Parameter = Parameter;
	Parms.Activate = Activate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "CreateADEnvelopeGenerator");

	Params::UAudioModulationStatics_CreateADEnvelopeGenerator_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("AudioModulationStatics", "ClearGlobalBusMixValue");

	Params::UAudioModulationStatics_ClearGlobalBusMixValue_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;
	Parms.FadeTime = FadeTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::ClearAllGlobalBusMixValues(class UObject* WorldContextObject, float FadeTime)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "ClearAllGlobalBusMixValues");

	Params::UAudioModulationStatics_ClearAllGlobalBusMixValues_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.FadeTime = FadeTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.AudioModulationStatics.ActivateGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundModulationGenerator*   Generator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::ActivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "ActivateGenerator");

	Params::UAudioModulationStatics_ActivateGenerator_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Generator = Generator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.AudioModulationStatics.ActivateBusMix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBusMix*         Mix                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::ActivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "ActivateBusMix");

	Params::UAudioModulationStatics_ActivateBusMix_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Mix = Mix;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.AudioModulationStatics.ActivateBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundControlBus*            Bus                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioModulationStatics::ActivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus)
{
	static auto Func = Class->GetFunction("AudioModulationStatics", "ActivateBus");

	Params::UAudioModulationStatics_ActivateBus_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bus = Bus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.SoundControlBusMix.SoloMix
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::SoloMix()
{
	static auto Func = Class->GetFunction("SoundControlBusMix", "SoloMix");

	Params::USoundControlBusMix_SoloMix_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.SoundControlBusMix.SaveMixToProfile
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::SaveMixToProfile()
{
	static auto Func = Class->GetFunction("SoundControlBusMix", "SaveMixToProfile");

	Params::USoundControlBusMix_SaveMixToProfile_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.SoundControlBusMix.LoadMixFromProfile
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::LoadMixFromProfile()
{
	static auto Func = Class->GetFunction("SoundControlBusMix", "LoadMixFromProfile");

	Params::USoundControlBusMix_LoadMixFromProfile_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.SoundControlBusMix.DeactivateMix
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::DeactivateMix()
{
	static auto Func = Class->GetFunction("SoundControlBusMix", "DeactivateMix");

	Params::USoundControlBusMix_DeactivateMix_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.SoundControlBusMix.DeactivateAllMixes
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::DeactivateAllMixes()
{
	static auto Func = Class->GetFunction("SoundControlBusMix", "DeactivateAllMixes");

	Params::USoundControlBusMix_DeactivateAllMixes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioModulation.SoundControlBusMix.ActivateMix
// (Final, Native, Protected)
// Parameters:

void USoundControlBusMix::ActivateMix()
{
	static auto Func = Class->GetFunction("SoundControlBusMix", "ActivateMix");

	Params::USoundControlBusMix_ActivateMix_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
