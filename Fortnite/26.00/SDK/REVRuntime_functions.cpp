#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class REVRuntime.REVComponent
// (SceneComponent)

class UClass* UREVComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("REVComponent");

	return Clss;
}


// REVComponent REVRuntime.Default__REVComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UREVComponent* UREVComponent::GetDefaultObj()
{
	static class UREVComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UREVComponent*>(UREVComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function REVRuntime.REVComponent.UpdateSimSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UREVComponent::UpdateSimSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("REVComponent", "UpdateSimSettings");

	Params::UREVComponent_UpdateSimSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function REVRuntime.REVComponent.UpdateParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPitch                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRPM                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InThrottle                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InVelocity                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InGear                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInEnableShifting                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UREVComponent::UpdateParameters(float InPitch, float InRPM, float InThrottle, float InVelocity, int32 InGear, bool bInEnableShifting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("REVComponent", "UpdateParameters");

	Params::UREVComponent_UpdateParameters_Params Parms{};

	Parms.InPitch = InPitch;
	Parms.InRPM = InRPM;
	Parms.InThrottle = InThrottle;
	Parms.InVelocity = InVelocity;
	Parms.InGear = InGear;
	Parms.bInEnableShifting = bInEnableShifting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function REVRuntime.REVComponent.SetSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URevSettings*                InSettings                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UREVComponent::SetSettings(class URevSettings* InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("REVComponent", "SetSettings");

	Params::UREVComponent_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function REVRuntime.REVComponent.SetRevModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UREVModel*                   InModel                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UREVComponent::SetRevModel(class UREVModel* InModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("REVComponent", "SetRevModel");

	Params::UREVComponent_SetRevModel_Params Parms{};

	Parms.InModel = InModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class REVRuntime.REVModel
// (None)

class UClass* UREVModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("REVModel");

	return Clss;
}


// REVModel REVRuntime.Default__REVModel
// (Public, ClassDefaultObject, ArchetypeObject)

class UREVModel* UREVModel::GetDefaultObj()
{
	static class UREVModel* Default = nullptr;

	if (!Default)
		Default = static_cast<UREVModel*>(UREVModel::StaticClass()->DefaultObject);

	return Default;
}


// Class REVRuntime.RevSettings
// (None)

class UClass* URevSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevSettings");

	return Clss;
}


// RevSettings REVRuntime.Default__RevSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class URevSettings* URevSettings::GetDefaultObj()
{
	static class URevSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<URevSettings*>(URevSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function REVRuntime.RevSettings.UpdateSettings
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void URevSettings::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RevSettings", "UpdateSettings");

	Params::URevSettings_UpdateSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


