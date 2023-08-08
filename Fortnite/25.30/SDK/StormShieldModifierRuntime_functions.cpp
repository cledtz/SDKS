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


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.UpdateProxyCenterAndRadius
// (Final, Native, Private)
// Parameters:

void UFortAthenaMutator_SplitStorm::UpdateProxyCenterAndRadius()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "UpdateProxyCenterAndRadius");

	Params::UFortAthenaMutator_SplitStorm_UpdateProxyCenterAndRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.StartProxyUpdateTimer
// (Final, Native, Private)
// Parameters:

void UFortAthenaMutator_SplitStorm::StartProxyUpdateTimer()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "StartProxyUpdateTimer");

	Params::UFortAthenaMutator_SplitStorm_StartProxyUpdateTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetSafeZoneProxyPhase
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class ESplitStormProxyPhase   NewPhase                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SplitStorm::SetSafeZoneProxyPhase(enum class ESplitStormProxyPhase NewPhase)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "SetSafeZoneProxyPhase");

	Params::UFortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase_Params Parms;

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

void UFortAthenaMutator_SplitStorm::SetProxyRadius(float NewRadius)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "SetProxyRadius");

	Params::UFortAthenaMutator_SplitStorm_SetProxyRadius_Params Parms;

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

void UFortAthenaMutator_SplitStorm::SetProxyCenter(const struct FVector& NewCenter)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "SetProxyCenter");

	Params::UFortAthenaMutator_SplitStorm_SetProxyCenter_Params Parms;

	Parms.NewCenter = NewCenter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZonePhaseChanged
// (Final, Native, Private)
// Parameters:

void UFortAthenaMutator_SplitStorm::OnSafeZonePhaseChanged()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "OnSafeZonePhaseChanged");

	Params::UFortAthenaMutator_SplitStorm_OnSafeZonePhaseChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZoneIndicatorSpawned
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FFortSafeZoneIndicatorUpdatedEventEvent                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SplitStorm::OnSafeZoneIndicatorSpawned(struct FFortSafeZoneIndicatorUpdatedEvent& Event)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "OnSafeZoneIndicatorSpawned");

	Params::UFortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned_Params Parms;

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnRep_CurrentProxyCircle
// (Final, Native, Private)
// Parameters:

void UFortAthenaMutator_SplitStorm::OnRep_CurrentProxyCircle()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SplitStorm", "OnRep_CurrentProxyCircle");

	Params::UFortAthenaMutator_SplitStorm_OnRep_CurrentProxyCircle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
