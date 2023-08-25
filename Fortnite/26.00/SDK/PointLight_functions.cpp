#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PointLight.PointLightNativeComponent
// (None)

class UClass* UPointLightNativeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointLightNativeComponent");

	return Clss;
}


// PointLightNativeComponent PointLight.Default__PointLightNativeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointLightNativeComponent* UPointLightNativeComponent::GetDefaultObj()
{
	static class UPointLightNativeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointLightNativeComponent*>(UPointLightNativeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PointLight.PointLightNativeComponent.UpdateShortCircuit
// (Final, Native, Private)
// Parameters:

void UPointLightNativeComponent::UpdateShortCircuit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointLightNativeComponent", "UpdateShortCircuit");

	Params::UPointLightNativeComponent_UpdateShortCircuit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointLight.PointLightNativeComponent.UpdateDeviceSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPointLightRhythmParameters RhythmParameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPointLightNativeComponent::UpdateDeviceSettings(struct FPointLightRhythmParameters& RhythmParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointLightNativeComponent", "UpdateDeviceSettings");

	Params::UPointLightNativeComponent_UpdateDeviceSettings_Params Parms{};

	Parms.RhythmParameters = RhythmParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointLight.PointLightNativeComponent.StopShortCircuitUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPointLightNativeComponent::StopShortCircuitUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointLightNativeComponent", "StopShortCircuitUpdate");

	Params::UPointLightNativeComponent_StopShortCircuitUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointLight.PointLightNativeComponent.StartShortCircuitUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimelineComponent*          ShortCircuitTimeline                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointLightNativeComponent::StartShortCircuitUpdate(class UTimelineComponent* ShortCircuitTimeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointLightNativeComponent", "StartShortCircuitUpdate");

	Params::UPointLightNativeComponent_StartShortCircuitUpdate_Params Parms{};

	Parms.ShortCircuitTimeline = ShortCircuitTimeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PointLight.PointLightNativeComponent.StartRhythmUpdate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTimerHandle                TimerHandle                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointLightNativeComponent::StartRhythmUpdate(struct FTimerHandle* TimerHandle, float Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PointLightNativeComponent", "StartRhythmUpdate");

	Params::UPointLightNativeComponent_StartRhythmUpdate_Params Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TimerHandle != nullptr)
		*TimerHandle = Parms.TimerHandle;

}

}


