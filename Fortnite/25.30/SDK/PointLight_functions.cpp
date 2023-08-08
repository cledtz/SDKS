#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function PointLight.PointLightNativeComponent.UpdateShortCircuit
// (Final, Native, Private)
// Parameters:

void UPointLightNativeComponent::UpdateShortCircuit()
{
	static auto Func = Class->GetFunction("PointLightNativeComponent", "UpdateShortCircuit");

	Params::UPointLightNativeComponent_UpdateShortCircuit_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PointLight.PointLightNativeComponent.UpdateDeviceSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPointLightRhythmParameters RhythmParameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPointLightNativeComponent::UpdateDeviceSettings(struct FPointLightRhythmParameters& RhythmParameters)
{
	static auto Func = Class->GetFunction("PointLightNativeComponent", "UpdateDeviceSettings");

	Params::UPointLightNativeComponent_UpdateDeviceSettings_Params Parms;

	Parms.RhythmParameters = RhythmParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PointLight.PointLightNativeComponent.StopShortCircuitUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPointLightNativeComponent::StopShortCircuitUpdate()
{
	static auto Func = Class->GetFunction("PointLightNativeComponent", "StopShortCircuitUpdate");

	Params::UPointLightNativeComponent_StopShortCircuitUpdate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PointLight.PointLightNativeComponent.StartShortCircuitUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimelineComponent*          ShortCircuitTimeline                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointLightNativeComponent::StartShortCircuitUpdate(class UTimelineComponent* ShortCircuitTimeline)
{
	static auto Func = Class->GetFunction("PointLightNativeComponent", "StartShortCircuitUpdate");

	Params::UPointLightNativeComponent_StartShortCircuitUpdate_Params Parms;

	Parms.ShortCircuitTimeline = ShortCircuitTimeline;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PointLight.PointLightNativeComponent.StartRhythmUpdate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTimerHandle                TimerHandle                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPointLightNativeComponent::StartRhythmUpdate(struct FTimerHandle* TimerHandle, float Rate)
{
	static auto Func = Class->GetFunction("PointLightNativeComponent", "StartRhythmUpdate");

	Params::UPointLightNativeComponent_StartRhythmUpdate_Params Parms;

	Parms.Rate = Rate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TimerHandle != nullptr)
		*TimerHandle = Parms.TimerHandle;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
