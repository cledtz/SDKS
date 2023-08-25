#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TankUI.FortGameSettingRegistryExtension_Tank
// (None)

class UClass* UFortGameSettingRegistryExtension_Tank::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameSettingRegistryExtension_Tank");

	return Clss;
}


// FortGameSettingRegistryExtension_Tank TankUI.Default__FortGameSettingRegistryExtension_Tank
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameSettingRegistryExtension_Tank* UFortGameSettingRegistryExtension_Tank::GetDefaultObj()
{
	static class UFortGameSettingRegistryExtension_Tank* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameSettingRegistryExtension_Tank*>(UFortGameSettingRegistryExtension_Tank::StaticClass()->DefaultObject);

	return Default;
}


// Class TankUI.TankVehicleReticle
// (None)

class UClass* UTankVehicleReticle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TankVehicleReticle");

	return Clss;
}


// TankVehicleReticle TankUI.Default__TankVehicleReticle
// (Public, ClassDefaultObject, ArchetypeObject)

class UTankVehicleReticle* UTankVehicleReticle::GetDefaultObj()
{
	static class UTankVehicleReticle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTankVehicleReticle*>(UTankVehicleReticle::StaticClass()->DefaultObject);

	return Default;
}


// Function TankUI.TankVehicleReticle.SetupVehicleFromBP
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UActor*                      NewVehicle                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::SetupVehicleFromBP(class UActor* NewVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "SetupVehicleFromBP");

	Params::UTankVehicleReticle_SetupVehicleFromBP_Params Parms{};

	Parms.NewVehicle = NewVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TankUI.TankVehicleReticle.OnTreadEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETreadSide              Side                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::OnTreadEnabledChanged(bool bEnabled, enum class ETreadSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnTreadEnabledChanged");

	Params::UTankVehicleReticle_OnTreadEnabledChanged_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.OnTankTurretAimYawValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::OnTankTurretAimYawValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankTurretAimYawValueChanged");

	Params::UTankVehicleReticle_OnTankTurretAimYawValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.OnTankTurretAimPitchValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Pitch                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchPercent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::OnTankTurretAimPitchValueChanged(float Pitch, float PitchPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankTurretAimPitchValueChanged");

	Params::UTankVehicleReticle_OnTankTurretAimPitchValueChanged_Params Parms{};

	Parms.Pitch = Pitch;
	Parms.PitchPercent = PitchPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.OnTankTargetingReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTankVehicleReticle::OnTankTargetingReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankTargetingReleased");

	Params::UTankVehicleReticle_OnTankTargetingReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.OnTankTargetingPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTankVehicleReticle::OnTankTargetingPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankTargetingPressed");

	Params::UTankVehicleReticle_OnTankTargetingPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.OnTankRotationValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TankValue                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TurretValue                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::OnTankRotationValueChanged(float TankValue, float TurretValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankRotationValueChanged");

	Params::UTankVehicleReticle_OnTankRotationValueChanged_Params Parms{};

	Parms.TankValue = TankValue;
	Parms.TurretValue = TurretValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.OnTankHatchHealthChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HatchHealth                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HatchHealthMax                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewlyDisabled                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewlyEnabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::OnTankHatchHealthChanged(float HatchHealth, float HatchHealthMax, bool bNewlyDisabled, bool bNewlyEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankHatchHealthChanged");

	Params::UTankVehicleReticle_OnTankHatchHealthChanged_Params Parms{};

	Parms.HatchHealth = HatchHealth;
	Parms.HatchHealthMax = HatchHealthMax;
	Parms.bNewlyDisabled = bNewlyDisabled;
	Parms.bNewlyEnabled = bNewlyEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.OnTankEngineHealthChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              EngineHealth                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EngineHealthMax                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewlyDisabled                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewlyEnabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::OnTankEngineHealthChanged(float EngineHealth, float EngineHealthMax, bool bNewlyDisabled, bool bNewlyEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankEngineHealthChanged");

	Params::UTankVehicleReticle_OnTankEngineHealthChanged_Params Parms{};

	Parms.EngineHealth = EngineHealth;
	Parms.EngineHealthMax = EngineHealthMax;
	Parms.bNewlyDisabled = bNewlyDisabled;
	Parms.bNewlyEnabled = bNewlyEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.OnTankDistanceUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DistancePercent                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::OnTankDistanceUpdate(float Distance, float DistancePercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnTankDistanceUpdate");

	Params::UTankVehicleReticle_OnTankDistanceUpdate_Params Parms{};

	Parms.Distance = Distance;
	Parms.DistancePercent = DistancePercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.OnCannonFired
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              RateTime                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::OnCannonFired(float RateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "OnCannonFired");

	Params::UTankVehicleReticle_OnCannonFired_Params Parms{};

	Parms.RateTime = RateTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TankUI.TankVehicleReticle.HandleOnEquipMountedWeapon
// (Final, Native, Private)
// Parameters:
// class UFortWeaponRanged*           EquippedMountedWeapon                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::HandleOnEquipMountedWeapon(class UFortWeaponRanged* EquippedMountedWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "HandleOnEquipMountedWeapon");

	Params::UTankVehicleReticle_HandleOnEquipMountedWeapon_Params Parms{};

	Parms.EquippedMountedWeapon = EquippedMountedWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TankUI.TankVehicleReticle.HandleOnDamageablePartHealthChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FVehicleDamageablePartConfigPartConfig                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVehicleDamageablePart      Part                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bNewlyDisabled                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewlyEnabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTankVehicleReticle::HandleOnDamageablePartHealthChanged(struct FVehicleDamageablePartConfig& PartConfig, struct FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TankVehicleReticle", "HandleOnDamageablePartHealthChanged");

	Params::UTankVehicleReticle_HandleOnDamageablePartHealthChanged_Params Parms{};

	Parms.PartConfig = PartConfig;
	Parms.Part = Part;
	Parms.bNewlyDisabled = bNewlyDisabled;
	Parms.bNewlyEnabled = bNewlyEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


