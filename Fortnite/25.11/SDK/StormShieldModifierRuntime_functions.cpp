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


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.UpdateProxyCenterAndRadius
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_SplitStorm::UpdateProxyCenterAndRadius()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "UpdateProxyCenterAndRadius");

	Params::AFortAthenaMutator_SplitStorm_UpdateProxyCenterAndRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.StartProxyUpdateTimer
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_SplitStorm::StartProxyUpdateTimer()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "StartProxyUpdateTimer");

	Params::AFortAthenaMutator_SplitStorm_StartProxyUpdateTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetSafeZoneProxyPhase
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class ESplitStormProxyPhase   NewPhase                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SplitStorm::SetSafeZoneProxyPhase(enum class ESplitStormProxyPhase NewPhase)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "SetSafeZoneProxyPhase");

	Params::AFortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase_Params Parms;

	Parms.NewPhase = NewPhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyRadius
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewRadius                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SplitStorm::SetProxyRadius(float NewRadius)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "SetProxyRadius");

	Params::AFortAthenaMutator_SplitStorm_SetProxyRadius_Params Parms;

	Parms.NewRadius = NewRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyCenter
// (Native, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     NewCenter                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SplitStorm::SetProxyCenter(const struct FVector& NewCenter)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "SetProxyCenter");

	Params::AFortAthenaMutator_SplitStorm_SetProxyCenter_Params Parms;

	Parms.NewCenter = NewCenter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZonePhaseChanged
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_SplitStorm::OnSafeZonePhaseChanged()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "OnSafeZonePhaseChanged");

	Params::AFortAthenaMutator_SplitStorm_OnSafeZonePhaseChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZoneIndicatorSpawned
// (Final, Native, Private)
// Parameters:
// class AFortSafeZoneIndicator*      SafeZoneIndicator                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SplitStorm::OnSafeZoneIndicatorSpawned(class AFortSafeZoneIndicator* SafeZoneIndicator)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "OnSafeZoneIndicatorSpawned");

	Params::AFortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned_Params Parms;

	Parms.SafeZoneIndicator = SafeZoneIndicator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnRep_CurrentProxyCircle
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_SplitStorm::OnRep_CurrentProxyCircle()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "OnRep_CurrentProxyCircle");

	Params::AFortAthenaMutator_SplitStorm_OnRep_CurrentProxyCircle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
