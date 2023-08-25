#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RockVehicleRuntime.RockVehicle_InteractionOverrideComponent
// (None)

class UClass* URockVehicle_InteractionOverrideComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicle_InteractionOverrideComponent");

	return Clss;
}


// RockVehicle_InteractionOverrideComponent RockVehicleRuntime.Default__RockVehicle_InteractionOverrideComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicle_InteractionOverrideComponent* URockVehicle_InteractionOverrideComponent::GetDefaultObj()
{
	static class URockVehicle_InteractionOverrideComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicle_InteractionOverrideComponent*>(URockVehicle_InteractionOverrideComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.FortCheatManager_RockVehicle
// (None)

class UClass* UFortCheatManager_RockVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_RockVehicle");

	return Clss;
}


// FortCheatManager_RockVehicle RockVehicleRuntime.Default__FortCheatManager_RockVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_RockVehicle* UFortCheatManager_RockVehicle::GetDefaultObj()
{
	static class UFortCheatManager_RockVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_RockVehicle*>(UFortCheatManager_RockVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetVelocity
// (Final, Exec, Native, Public)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_RockVehicle::RockVehicleSetVelocity(float X, float Y, float Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetVelocity");

	Params::UFortCheatManager_RockVehicle_RockVehicleSetVelocity_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetRotation
// (Final, Exec, Native, Public)
// Parameters:
// float                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Roll                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_RockVehicle::RockVehicleSetRotation(float Pitch, float Yaw, float Roll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetRotation");

	Params::UFortCheatManager_RockVehicle_RockVehicleSetRotation_Params Parms{};

	Parms.Pitch = Pitch;
	Parms.Yaw = Yaw;
	Parms.Roll = Roll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_RockVehicle::RockVehicleSetLocation(float X, float Y, float Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetLocation");

	Params::UFortCheatManager_RockVehicle_RockVehicleSetLocation_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetBalboaVelocity
// (Final, Exec, Native, Public)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_RockVehicle::RockVehicleSetBalboaVelocity(float X, float Y, float Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetBalboaVelocity");

	Params::UFortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RockVehicleRuntime.RockVehicle
// (Actor, Pawn)

class UClass* URockVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicle");

	return Clss;
}


// RockVehicle RockVehicleRuntime.Default__RockVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicle* URockVehicle::GetDefaultObj()
{
	static class URockVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicle*>(URockVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function RockVehicleRuntime.RockVehicle.ServerToggleFreeCam
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void URockVehicle::ServerToggleFreeCam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicle", "ServerToggleFreeCam");

	Params::URockVehicle_ServerToggleFreeCam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicle.ServerSetLegacyDamageValues
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDamageFriendlyVehicles                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDamageOtherVehicles                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDamageOwnVehicle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDamageAllowedFromOtherVehicle                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicle::ServerSetLegacyDamageValues(bool bDamageFriendlyVehicles, bool bDamageOtherVehicles, bool bDamageOwnVehicle, bool bDamageAllowedFromOtherVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicle", "ServerSetLegacyDamageValues");

	Params::URockVehicle_ServerSetLegacyDamageValues_Params Parms{};

	Parms.bDamageFriendlyVehicles = bDamageFriendlyVehicles;
	Parms.bDamageOtherVehicles = bDamageOtherVehicles;
	Parms.bDamageOwnVehicle = bDamageOwnVehicle;
	Parms.bDamageAllowedFromOtherVehicle = bDamageAllowedFromOtherVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction RockVehicleRuntime.RockVehicle.RockFreeCamToggledDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bFreeCam                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicle::RockFreeCamToggledDelegate__DelegateSignature(bool bFreeCam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicle", "RockFreeCamToggledDelegate__DelegateSignature");

	Params::URockVehicle_RockFreeCamToggledDelegate__DelegateSignature_Params Parms{};

	Parms.bFreeCam = bFreeCam;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction RockVehicleRuntime.RockVehicle.OnSpringImpact__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FName                        Socket                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ImpactSpeed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void URockVehicle::OnSpringImpact__DelegateSignature(class FName Socket, float ImpactSpeed, struct FHitResult& OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicle", "OnSpringImpact__DelegateSignature");

	Params::URockVehicle_OnSpringImpact__DelegateSignature_Params Parms{};

	Parms.Socket = Socket;
	Parms.ImpactSpeed = ImpactSpeed;
	Parms.OutHit = OutHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RockVehicleRuntime.RockVehicle.OnRep_FreeLookCamera
// (Final, Native, Public)
// Parameters:

void URockVehicle::OnRep_FreeLookCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicle", "OnRep_FreeLookCamera");

	Params::URockVehicle_OnRep_FreeLookCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicle.GetThrottleState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URockVehicle::GetThrottleState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicle", "GetThrottleState");

	Params::URockVehicle_GetThrottleState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicle.GetDriverInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortAthenaVehicleInputStateReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFortAthenaVehicleInputState URockVehicle::GetDriverInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicle", "GetDriverInput");

	Params::URockVehicle_GetDriverInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicle.GetCurrentRockRuntimeConfigOverrides
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRockRuntimeConfigOverrides ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRockRuntimeConfigOverrides URockVehicle::GetCurrentRockRuntimeConfigOverrides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicle", "GetCurrentRockRuntimeConfigOverrides");

	Params::URockVehicle_GetCurrentRockRuntimeConfigOverrides_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RockVehicleRuntime.RockVehicleAbility
// (None)

class UClass* URockVehicleAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility");

	return Clss;
}


// RockVehicleAbility RockVehicleRuntime.Default__RockVehicleAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility* URockVehicleAbility::GetDefaultObj()
{
	static class URockVehicleAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility*>(URockVehicleAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function RockVehicleRuntime.RockVehicleAbility.GetVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URockVehicle*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URockVehicle* URockVehicleAbility::GetVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAbility", "GetVehicle");

	Params::URockVehicleAbility_GetVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleAbility.GetInactiveSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URockVehicleAbility::GetInactiveSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAbility", "GetInactiveSeconds");

	Params::URockVehicleAbility_GetInactiveSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleAbility.GetActiveSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URockVehicleAbility::GetActiveSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAbility", "GetActiveSeconds");

	Params::URockVehicleAbility_GetActiveSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RockVehicleRuntime.RockVehicleAbility_Physics
// (None)

class UClass* URockVehicleAbility_Physics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_Physics");

	return Clss;
}


// RockVehicleAbility_Physics RockVehicleRuntime.Default__RockVehicleAbility_Physics
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_Physics* URockVehicleAbility_Physics::GetDefaultObj()
{
	static class URockVehicleAbility_Physics* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_Physics*>(URockVehicleAbility_Physics::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAbility_AirControl
// (None)

class UClass* URockVehicleAbility_AirControl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_AirControl");

	return Clss;
}


// RockVehicleAbility_AirControl RockVehicleRuntime.Default__RockVehicleAbility_AirControl
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_AirControl* URockVehicleAbility_AirControl::GetDefaultObj()
{
	static class URockVehicleAbility_AirControl* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_AirControl*>(URockVehicleAbility_AirControl::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAbility_AutoUpright
// (None)

class UClass* URockVehicleAbility_AutoUpright::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_AutoUpright");

	return Clss;
}


// RockVehicleAbility_AutoUpright RockVehicleRuntime.Default__RockVehicleAbility_AutoUpright
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_AutoUpright* URockVehicleAbility_AutoUpright::GetDefaultObj()
{
	static class URockVehicleAbility_AutoUpright* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_AutoUpright*>(URockVehicleAbility_AutoUpright::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAbility_Boost
// (None)

class UClass* URockVehicleAbility_Boost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_Boost");

	return Clss;
}


// RockVehicleAbility_Boost RockVehicleRuntime.Default__RockVehicleAbility_Boost
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_Boost* URockVehicleAbility_Boost::GetDefaultObj()
{
	static class URockVehicleAbility_Boost* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_Boost*>(URockVehicleAbility_Boost::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleBoostTank
// (None)

class UClass* URockVehicleBoostTank::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleBoostTank");

	return Clss;
}


// RockVehicleBoostTank RockVehicleRuntime.Default__RockVehicleBoostTank
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleBoostTank* URockVehicleBoostTank::GetDefaultObj()
{
	static class URockVehicleBoostTank* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleBoostTank*>(URockVehicleBoostTank::StaticClass()->DefaultObject);

	return Default;
}


// Function RockVehicleRuntime.RockVehicleBoostTank.OnRep_SecondsRemaining
// (Final, Native, Protected)
// Parameters:
// float                              PrevValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleBoostTank::OnRep_SecondsRemaining(float PrevValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleBoostTank", "OnRep_SecondsRemaining");

	Params::URockVehicleBoostTank_OnRep_SecondsRemaining_Params Parms{};

	Parms.PrevValue = PrevValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.IsBoostFull
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URockVehicleBoostTank::IsBoostFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleBoostTank", "IsBoostFull");

	Params::URockVehicleBoostTank_IsBoostFull_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.HasBoost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URockVehicleBoostTank::HasBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleBoostTank", "HasBoost");

	Params::URockVehicleBoostTank_HasBoost_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.GiveBoost
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleBoostTank::GiveBoost(float Seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleBoostTank", "GiveBoost");

	Params::URockVehicleBoostTank_GiveBoost_Params Parms{};

	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.GetPercentRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URockVehicleBoostTank::GetPercentRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleBoostTank", "GetPercentRemaining");

	Params::URockVehicleBoostTank_GetPercentRemaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.GetMaxBoostInSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URockVehicleBoostTank::GetMaxBoostInSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleBoostTank", "GetMaxBoostInSeconds");

	Params::URockVehicleBoostTank_GetMaxBoostInSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RockVehicleRuntime.RockVehicleAbility_Dodge
// (None)

class UClass* URockVehicleAbility_Dodge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_Dodge");

	return Clss;
}


// RockVehicleAbility_Dodge RockVehicleRuntime.Default__RockVehicleAbility_Dodge
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_Dodge* URockVehicleAbility_Dodge::GetDefaultObj()
{
	static class URockVehicleAbility_Dodge* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_Dodge*>(URockVehicleAbility_Dodge::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAbility_DoubleJump
// (None)

class UClass* URockVehicleAbility_DoubleJump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_DoubleJump");

	return Clss;
}


// RockVehicleAbility_DoubleJump RockVehicleRuntime.Default__RockVehicleAbility_DoubleJump
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_DoubleJump* URockVehicleAbility_DoubleJump::GetDefaultObj()
{
	static class URockVehicleAbility_DoubleJump* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_DoubleJump*>(URockVehicleAbility_DoubleJump::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAbility_Flip
// (None)

class UClass* URockVehicleAbility_Flip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_Flip");

	return Clss;
}


// RockVehicleAbility_Flip RockVehicleRuntime.Default__RockVehicleAbility_Flip
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_Flip* URockVehicleAbility_Flip::GetDefaultObj()
{
	static class URockVehicleAbility_Flip* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_Flip*>(URockVehicleAbility_Flip::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAbility_GroundTrails
// (None)

class UClass* URockVehicleAbility_GroundTrails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_GroundTrails");

	return Clss;
}


// RockVehicleAbility_GroundTrails RockVehicleRuntime.Default__RockVehicleAbility_GroundTrails
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_GroundTrails* URockVehicleAbility_GroundTrails::GetDefaultObj()
{
	static class URockVehicleAbility_GroundTrails* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_GroundTrails*>(URockVehicleAbility_GroundTrails::StaticClass()->DefaultObject);

	return Default;
}


// Function RockVehicleRuntime.RockVehicleAbility_GroundTrails.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAbility_GroundTrails::SetEnabled(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAbility_GroundTrails", "SetEnabled");

	Params::URockVehicleAbility_GroundTrails_SetEnabled_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleAbility_GroundTrails.OnSurfaceChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EPhysicalSurface        NewSurface                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAbility_GroundTrails::OnSurfaceChanged(enum class EPhysicalSurface NewSurface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAbility_GroundTrails", "OnSurfaceChanged");

	Params::URockVehicleAbility_GroundTrails_OnSurfaceChanged_Params Parms{};

	Parms.NewSurface = NewSurface;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RockVehicleRuntime.RockVehicleAbility_Jump
// (None)

class UClass* URockVehicleAbility_Jump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_Jump");

	return Clss;
}


// RockVehicleAbility_Jump RockVehicleRuntime.Default__RockVehicleAbility_Jump
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_Jump* URockVehicleAbility_Jump::GetDefaultObj()
{
	static class URockVehicleAbility_Jump* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_Jump*>(URockVehicleAbility_Jump::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAbility_StickyWheels
// (None)

class UClass* URockVehicleAbility_StickyWheels::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_StickyWheels");

	return Clss;
}


// RockVehicleAbility_StickyWheels RockVehicleRuntime.Default__RockVehicleAbility_StickyWheels
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_StickyWheels* URockVehicleAbility_StickyWheels::GetDefaultObj()
{
	static class URockVehicleAbility_StickyWheels* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_StickyWheels*>(URockVehicleAbility_StickyWheels::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAbility_Supersonic
// (None)

class UClass* URockVehicleAbility_Supersonic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAbility_Supersonic");

	return Clss;
}


// RockVehicleAbility_Supersonic RockVehicleRuntime.Default__RockVehicleAbility_Supersonic
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAbility_Supersonic* URockVehicleAbility_Supersonic::GetDefaultObj()
{
	static class URockVehicleAbility_Supersonic* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAbility_Supersonic*>(URockVehicleAbility_Supersonic::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAnalyticsComponent
// (None)

class UClass* URockVehicleAnalyticsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAnalyticsComponent");

	return Clss;
}


// RockVehicleAnalyticsComponent RockVehicleRuntime.Default__RockVehicleAnalyticsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAnalyticsComponent* URockVehicleAnalyticsComponent::GetDefaultObj()
{
	static class URockVehicleAnalyticsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAnalyticsComponent*>(URockVehicleAnalyticsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicStart
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInReset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnSupersonicStart(class UActorComponent* InComp, bool bInReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnSupersonicStart");

	Params::URockVehicleAnalyticsComponent_OnSupersonicStart_Params Parms{};

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicEnd
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnSupersonicEnd(class UActorComponent* InComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnSupersonicEnd");

	Params::URockVehicleAnalyticsComponent_OnSupersonicEnd_Params Parms{};

	Parms.InComp = InComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnExitedSeat
// (Final, Native, Private, HasOutParams)
// Parameters:
// TScriptInterface<class UFortVehicleInterface>InVehicle                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   InPlayerPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSeatIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnPawnExitedSeat(TScriptInterface<class UFortVehicleInterface>& InVehicle, class UFortPawn* InPlayerPawn, int32 InSeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnPawnExitedSeat");

	Params::URockVehicleAnalyticsComponent_OnPawnExitedSeat_Params Parms{};

	Parms.InVehicle = InVehicle;
	Parms.InPlayerPawn = InPlayerPawn;
	Parms.InSeatIndex = InSeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnEnteredSeat
// (Final, Native, Private, HasOutParams)
// Parameters:
// TScriptInterface<class UFortVehicleInterface>InVehicle                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   InPlayerPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSeatIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnPawnEnteredSeat(TScriptInterface<class UFortVehicleInterface>& InVehicle, class UFortPawn* InPlayerPawn, int32 InSeatIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnPawnEnteredSeat");

	Params::URockVehicleAnalyticsComponent_OnPawnEnteredSeat_Params Parms{};

	Parms.InVehicle = InVehicle;
	Parms.InPlayerPawn = InPlayerPawn;
	Parms.InSeatIndex = InSeatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnJumped
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInReset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnJumped(class UActorComponent* InComp, bool bInReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnJumped");

	Params::URockVehicleAnalyticsComponent_OnJumped_Params Parms{};

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDoubleJumped
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInReset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnDoubleJumped(class UActorComponent* InComp, bool bInReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnDoubleJumped");

	Params::URockVehicleAnalyticsComponent_OnDoubleJumped_Params Parms{};

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDodged
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInReset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnDodged(class UActorComponent* InComp, bool bInReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnDodged");

	Params::URockVehicleAnalyticsComponent_OnDodged_Params Parms{};

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RockVehicleRuntime.RockVehicleAnimInstance
// (None)

class UClass* URockVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAnimInstance");

	return Clss;
}


// RockVehicleAnimInstance RockVehicleRuntime.Default__RockVehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAnimInstance* URockVehicleAnimInstance::GetDefaultObj()
{
	static class URockVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAnimInstance*>(URockVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleAudioController
// (Actor)

class UClass* URockVehicleAudioController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleAudioController");

	return Clss;
}


// RockVehicleAudioController RockVehicleRuntime.Default__RockVehicleAudioController
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleAudioController* URockVehicleAudioController::GetDefaultObj()
{
	static class URockVehicleAudioController* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleAudioController*>(URockVehicleAudioController::StaticClass()->DefaultObject);

	return Default;
}


// Function RockVehicleRuntime.RockVehicleAudioController.SetSurfaceTypeParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewSurfaceParam                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAudioController::SetSurfaceTypeParam(float NewSurfaceParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAudioController", "SetSurfaceTypeParam");

	Params::URockVehicleAudioController_SetSurfaceTypeParam_Params Parms{};

	Parms.NewSurfaceParam = NewSurfaceParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleAudioController.SetBoosting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewBoosting                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAudioController::SetBoosting(bool bNewBoosting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAudioController", "SetBoosting");

	Params::URockVehicleAudioController_SetBoosting_Params Parms{};

	Parms.bNewBoosting = bNewBoosting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RockVehicleRuntime.RockVehicleAudioController.OnInAirUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewInAir                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAudioController::OnInAirUpdated(bool bNewInAir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAudioController", "OnInAirUpdated");

	Params::URockVehicleAudioController_OnInAirUpdated_Params Parms{};

	Parms.bNewInAir = bNewInAir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RockVehicleRuntime.RockVehicleAudioController.GetMotorSimComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioMotorModelComponent*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioMotorModelComponent* URockVehicleAudioController::GetMotorSimComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RockVehicleAudioController", "GetMotorSimComponent");

	Params::URockVehicleAudioController_GetMotorSimComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RockVehicleRuntime.RockVehicleCameraMode
// (None)

class UClass* URockVehicleCameraMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleCameraMode");

	return Clss;
}


// RockVehicleCameraMode RockVehicleRuntime.Default__RockVehicleCameraMode
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleCameraMode* URockVehicleCameraMode::GetDefaultObj()
{
	static class URockVehicleCameraMode* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleCameraMode*>(URockVehicleCameraMode::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleConfigs
// (None)

class UClass* URockVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleConfigs");

	return Clss;
}


// RockVehicleConfigs RockVehicleRuntime.Default__RockVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleConfigs* URockVehicleConfigs::GetDefaultObj()
{
	static class URockVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleConfigs*>(URockVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleManager
// (Actor)

class UClass* URockVehicleManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleManager");

	return Clss;
}


// RockVehicleManager RockVehicleRuntime.Default__RockVehicleManager
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleManager* URockVehicleManager::GetDefaultObj()
{
	static class URockVehicleManager* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleManager*>(URockVehicleManager::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.RockVehicleWorldSubsystem
// (None)

class UClass* URockVehicleWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RockVehicleWorldSubsystem");

	return Clss;
}


// RockVehicleWorldSubsystem RockVehicleRuntime.Default__RockVehicleWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URockVehicleWorldSubsystem* URockVehicleWorldSubsystem::GetDefaultObj()
{
	static class URockVehicleWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URockVehicleWorldSubsystem*>(URockVehicleWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class RockVehicleRuntime.StreamingRadioPlayerComponent_Rock
// (None)

class UClass* UStreamingRadioPlayerComponent_Rock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamingRadioPlayerComponent_Rock");

	return Clss;
}


// StreamingRadioPlayerComponent_Rock RockVehicleRuntime.Default__StreamingRadioPlayerComponent_Rock
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamingRadioPlayerComponent_Rock* UStreamingRadioPlayerComponent_Rock::GetDefaultObj()
{
	static class UStreamingRadioPlayerComponent_Rock* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamingRadioPlayerComponent_Rock*>(UStreamingRadioPlayerComponent_Rock::StaticClass()->DefaultObject);

	return Default;
}


// Function RockVehicleRuntime.StreamingRadioPlayerComponent_Rock.VehicleExploded
// (Final, Native, Protected)
// Parameters:
// class UController*                 LastDamageInstigator                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent_Rock::VehicleExploded(class UController* LastDamageInstigator, class UFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent_Rock", "VehicleExploded");

	Params::UStreamingRadioPlayerComponent_Rock_VehicleExploded_Params Parms{};

	Parms.LastDamageInstigator = LastDamageInstigator;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


