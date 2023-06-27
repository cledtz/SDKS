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


// Function NevadaUI.FortNevadaVehicleReticle.OnVehicleStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ENevadaFlightStates     VehicleState                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicleReticle::OnVehicleStateChanged(enum class ENevadaFlightStates VehicleState)
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnVehicleStateChanged");

	Params::UFortNevadaVehicleReticle_OnVehicleStateChanged_Params Parms;

	Parms.VehicleState = VehicleState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicleReticle::OnTractorBeamEnabledChanged(bool bEnabled)
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamEnabledChanged");

	Params::UFortNevadaVehicleReticle_OnTractorBeamEnabledChanged_Params Parms;

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDetached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicleReticle::OnTractorBeamDetached()
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamDetached");

	Params::UFortNevadaVehicleReticle_OnTractorBeamDetached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Cooldown                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicleReticle::OnTractorBeamDeactivated(float Cooldown)
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamDeactivated");

	Params::UFortNevadaVehicleReticle_OnTractorBeamDeactivated_Params Parms;

	Parms.Cooldown = Cooldown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamChargeStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicleReticle::OnTractorBeamChargeStarted()
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamChargeStarted");

	Params::UFortNevadaVehicleReticle_OnTractorBeamChargeStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamAttached
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicleReticle::OnTractorBeamAttached()
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamAttached");

	Params::UFortNevadaVehicleReticle_OnTractorBeamAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNevadaVehicleReticle::OnTractorBeamActivated()
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamActivated");

	Params::UFortNevadaVehicleReticle_OnTractorBeamActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.FortNevadaVehicleReticle.OnEnergyCanonFired
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Cooldown                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicleReticle::OnEnergyCanonFired(float Cooldown)
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnEnergyCanonFired");

	Params::UFortNevadaVehicleReticle_OnEnergyCanonFired_Params Parms;

	Parms.Cooldown = Cooldown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.FortNevadaVehicleReticle.OnEnergyCannonEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicleReticle::OnEnergyCannonEnabledChanged(bool bEnabled)
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnEnergyCannonEnabledChanged");

	Params::UFortNevadaVehicleReticle_OnEnergyCannonEnabledChanged_Params Parms;

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.FortNevadaVehicleReticle.OnBatteryChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              BatteryLevel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNevadaVehicleReticle::OnBatteryChanged(float BatteryLevel)
{
	static auto Func = Class->GetFunction("FortNevadaVehicleReticle", "OnBatteryChanged");

	Params::UFortNevadaVehicleReticle_OnBatteryChanged_Params Parms;

	Parms.BatteryLevel = BatteryLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.NevadaTargetIndicator.OnTractorBeamAttached
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bAttached                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNevadaTargetIndicator::OnTractorBeamAttached(bool bAttached)
{
	static auto Func = Class->GetFunction("NevadaTargetIndicator", "OnTractorBeamAttached");

	Params::UNevadaTargetIndicator_OnTractorBeamAttached_Params Parms;

	Parms.bAttached = bAttached;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NevadaUI.NevadaTargetIndicator.OnTractorBeamActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bActivated                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNevadaTargetIndicator::OnTractorBeamActivated(bool bActivated)
{
	static auto Func = Class->GetFunction("NevadaTargetIndicator", "OnTractorBeamActivated");

	Params::UNevadaTargetIndicator_OnTractorBeamActivated_Params Parms;

	Parms.bActivated = bActivated;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
