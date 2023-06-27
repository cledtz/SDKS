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


// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetVelocity
// (Final, Exec, Native, Public)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_RockVehicle::RockVehicleSetVelocity(float X, float Y, float Z)
{
	static auto Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetVelocity");

	Params::UFortCheatManager_RockVehicle_RockVehicleSetVelocity_Params Parms;

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetRotation
// (Final, Exec, Native, Public)
// Parameters:
// float                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Roll                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_RockVehicle::RockVehicleSetRotation(float Pitch, float Yaw, float Roll)
{
	static auto Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetRotation");

	Params::UFortCheatManager_RockVehicle_RockVehicleSetRotation_Params Parms;

	Parms.Pitch = Pitch;
	Parms.Yaw = Yaw;
	Parms.Roll = Roll;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_RockVehicle::RockVehicleSetLocation(float X, float Y, float Z)
{
	static auto Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetLocation");

	Params::UFortCheatManager_RockVehicle_RockVehicleSetLocation_Params Parms;

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetBalboaVelocity
// (Final, Exec, Native, Public)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_RockVehicle::RockVehicleSetBalboaVelocity(float X, float Y, float Z)
{
	static auto Func = Class->GetFunction("FortCheatManager_RockVehicle", "RockVehicleSetBalboaVelocity");

	Params::UFortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity_Params Parms;

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicle.ServerToggleFreeCam
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void ARockVehicle::ServerToggleFreeCam()
{
	static auto Func = Class->GetFunction("RockVehicle", "ServerToggleFreeCam");

	Params::ARockVehicle_ServerToggleFreeCam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicle.ServerSetLegacyDamageValues
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDamageFriendlyVehicles                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDamageOtherVehicles                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDamageOwnVehicle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDamageAllowedFromOtherVehicle                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARockVehicle::ServerSetLegacyDamageValues(bool bDamageFriendlyVehicles, bool bDamageOtherVehicles, bool bDamageOwnVehicle, bool bDamageAllowedFromOtherVehicle)
{
	static auto Func = Class->GetFunction("RockVehicle", "ServerSetLegacyDamageValues");

	Params::ARockVehicle_ServerSetLegacyDamageValues_Params Parms;

	Parms.bDamageFriendlyVehicles = bDamageFriendlyVehicles;
	Parms.bDamageOtherVehicles = bDamageOtherVehicles;
	Parms.bDamageOwnVehicle = bDamageOwnVehicle;
	Parms.bDamageAllowedFromOtherVehicle = bDamageAllowedFromOtherVehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction RockVehicleRuntime.RockVehicle.RockFreeCamToggledDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bFreeCam                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARockVehicle::RockFreeCamToggledDelegate__DelegateSignature(bool bFreeCam)
{
	static auto Func = Class->GetFunction("RockVehicle", "RockFreeCamToggledDelegate__DelegateSignature");

	Params::ARockVehicle_RockFreeCamToggledDelegate__DelegateSignature_Params Parms;

	Parms.bFreeCam = bFreeCam;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction RockVehicleRuntime.RockVehicle.OnSpringImpact__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FName                        Socket                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ImpactSpeed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ARockVehicle::OnSpringImpact__DelegateSignature(class FName Socket, float ImpactSpeed, struct FHitResult& OutHit)
{
	static auto Func = Class->GetFunction("RockVehicle", "OnSpringImpact__DelegateSignature");

	Params::ARockVehicle_OnSpringImpact__DelegateSignature_Params Parms;

	Parms.Socket = Socket;
	Parms.ImpactSpeed = ImpactSpeed;
	Parms.OutHit = OutHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RockVehicleRuntime.RockVehicle.OnRep_FreeLookCamera
// (Final, Native, Public)
// Parameters:

void ARockVehicle::OnRep_FreeLookCamera()
{
	static auto Func = Class->GetFunction("RockVehicle", "OnRep_FreeLookCamera");

	Params::ARockVehicle_OnRep_FreeLookCamera_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicle.GetThrottleState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ARockVehicle::GetThrottleState()
{
	static auto Func = Class->GetFunction("RockVehicle", "GetThrottleState");

	Params::ARockVehicle_GetThrottleState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicle.GetDriverInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortAthenaVehicleInputStateReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFortAthenaVehicleInputState ARockVehicle::GetDriverInput()
{
	static auto Func = Class->GetFunction("RockVehicle", "GetDriverInput");

	Params::ARockVehicle_GetDriverInput_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicle.GetCurrentRockRuntimeConfigOverrides
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRockRuntimeConfigOverrides ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRockRuntimeConfigOverrides ARockVehicle::GetCurrentRockRuntimeConfigOverrides()
{
	static auto Func = Class->GetFunction("RockVehicle", "GetCurrentRockRuntimeConfigOverrides");

	Params::ARockVehicle_GetCurrentRockRuntimeConfigOverrides_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleAbility.GetVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ARockVehicle*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ARockVehicle* URockVehicleAbility::GetVehicle()
{
	static auto Func = Class->GetFunction("RockVehicleAbility", "GetVehicle");

	Params::URockVehicleAbility_GetVehicle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleAbility.GetInactiveSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URockVehicleAbility::GetInactiveSeconds()
{
	static auto Func = Class->GetFunction("RockVehicleAbility", "GetInactiveSeconds");

	Params::URockVehicleAbility_GetInactiveSeconds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleAbility.GetActiveSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URockVehicleAbility::GetActiveSeconds()
{
	static auto Func = Class->GetFunction("RockVehicleAbility", "GetActiveSeconds");

	Params::URockVehicleAbility_GetActiveSeconds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.OnRep_SecondsRemaining
// (Final, Native, Protected)
// Parameters:
// float                              PrevValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleBoostTank::OnRep_SecondsRemaining(float PrevValue)
{
	static auto Func = Class->GetFunction("RockVehicleBoostTank", "OnRep_SecondsRemaining");

	Params::URockVehicleBoostTank_OnRep_SecondsRemaining_Params Parms;

	Parms.PrevValue = PrevValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.IsBoostFull
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URockVehicleBoostTank::IsBoostFull()
{
	static auto Func = Class->GetFunction("RockVehicleBoostTank", "IsBoostFull");

	Params::URockVehicleBoostTank_IsBoostFull_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.HasBoost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URockVehicleBoostTank::HasBoost()
{
	static auto Func = Class->GetFunction("RockVehicleBoostTank", "HasBoost");

	Params::URockVehicleBoostTank_HasBoost_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.GiveBoost
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleBoostTank::GiveBoost(float Seconds)
{
	static auto Func = Class->GetFunction("RockVehicleBoostTank", "GiveBoost");

	Params::URockVehicleBoostTank_GiveBoost_Params Parms;

	Parms.Seconds = Seconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.GetPercentRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URockVehicleBoostTank::GetPercentRemaining()
{
	static auto Func = Class->GetFunction("RockVehicleBoostTank", "GetPercentRemaining");

	Params::URockVehicleBoostTank_GetPercentRemaining_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleBoostTank.GetMaxBoostInSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URockVehicleBoostTank::GetMaxBoostInSeconds()
{
	static auto Func = Class->GetFunction("RockVehicleBoostTank", "GetMaxBoostInSeconds");

	Params::URockVehicleBoostTank_GetMaxBoostInSeconds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.RockVehicleAbility_GroundTrails.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAbility_GroundTrails::SetEnabled(bool bValue)
{
	static auto Func = Class->GetFunction("RockVehicleAbility_GroundTrails", "SetEnabled");

	Params::URockVehicleAbility_GroundTrails_SetEnabled_Params Parms;

	Parms.bValue = bValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAbility_GroundTrails.OnSurfaceChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EPhysicalSurface        NewSurface                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAbility_GroundTrails::OnSurfaceChanged(enum class EPhysicalSurface NewSurface)
{
	static auto Func = Class->GetFunction("RockVehicleAbility_GroundTrails", "OnSurfaceChanged");

	Params::URockVehicleAbility_GroundTrails_OnSurfaceChanged_Params Parms;

	Parms.NewSurface = NewSurface;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicStart
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInReset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnSupersonicStart(class UActorComponent* InComp, bool bInReset)
{
	static auto Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnSupersonicStart");

	Params::URockVehicleAnalyticsComponent_OnSupersonicStart_Params Parms;

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicEnd
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnSupersonicEnd(class UActorComponent* InComp)
{
	static auto Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnSupersonicEnd");

	Params::URockVehicleAnalyticsComponent_OnSupersonicEnd_Params Parms;

	Parms.InComp = InComp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnExitedSeat
// (Final, Native, Private, HasOutParams)
// Parameters:
// FInterfaceProperty_                InVehicle                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   InPlayerPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSeatIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnPawnExitedSeat(FInterfaceProperty_& InVehicle, class AFortPawn* InPlayerPawn, int32 InSeatIndex)
{
	static auto Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnPawnExitedSeat");

	Params::URockVehicleAnalyticsComponent_OnPawnExitedSeat_Params Parms;

	Parms.InVehicle = InVehicle;
	Parms.InPlayerPawn = InPlayerPawn;
	Parms.InSeatIndex = InSeatIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnEnteredSeat
// (Final, Native, Private, HasOutParams)
// Parameters:
// FInterfaceProperty_                InVehicle                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   InPlayerPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSeatIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnPawnEnteredSeat(FInterfaceProperty_& InVehicle, class AFortPawn* InPlayerPawn, int32 InSeatIndex)
{
	static auto Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnPawnEnteredSeat");

	Params::URockVehicleAnalyticsComponent_OnPawnEnteredSeat_Params Parms;

	Parms.InVehicle = InVehicle;
	Parms.InPlayerPawn = InPlayerPawn;
	Parms.InSeatIndex = InSeatIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnJumped
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInReset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnJumped(class UActorComponent* InComp, bool bInReset)
{
	static auto Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnJumped");

	Params::URockVehicleAnalyticsComponent_OnJumped_Params Parms;

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDoubleJumped
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInReset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnDoubleJumped(class UActorComponent* InComp, bool bInReset)
{
	static auto Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnDoubleJumped");

	Params::URockVehicleAnalyticsComponent_OnDoubleJumped_Params Parms;

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDodged
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComp                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInReset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URockVehicleAnalyticsComponent::OnDodged(class UActorComponent* InComp, bool bInReset)
{
	static auto Func = Class->GetFunction("RockVehicleAnalyticsComponent", "OnDodged");

	Params::URockVehicleAnalyticsComponent_OnDodged_Params Parms;

	Parms.InComp = InComp;
	Parms.bInReset = bInReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAudioController.SetSurfaceTypeParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewSurfaceParam                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARockVehicleAudioController::SetSurfaceTypeParam(float NewSurfaceParam)
{
	static auto Func = Class->GetFunction("RockVehicleAudioController", "SetSurfaceTypeParam");

	Params::ARockVehicleAudioController_SetSurfaceTypeParam_Params Parms;

	Parms.NewSurfaceParam = NewSurfaceParam;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAudioController.SetBoosting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewBoosting                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARockVehicleAudioController::SetBoosting(bool bNewBoosting)
{
	static auto Func = Class->GetFunction("RockVehicleAudioController", "SetBoosting");

	Params::ARockVehicleAudioController_SetBoosting_Params Parms;

	Parms.bNewBoosting = bNewBoosting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function RockVehicleRuntime.RockVehicleAudioController.OnInAirUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewInAir                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARockVehicleAudioController::OnInAirUpdated(bool bNewInAir)
{
	static auto Func = Class->GetFunction("RockVehicleAudioController", "OnInAirUpdated");

	Params::ARockVehicleAudioController_OnInAirUpdated_Params Parms;

	Parms.bNewInAir = bNewInAir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RockVehicleRuntime.RockVehicleAudioController.GetMotorSimComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioMotorModelComponent*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioMotorModelComponent* ARockVehicleAudioController::GetMotorSimComponent()
{
	static auto Func = Class->GetFunction("RockVehicleAudioController", "GetMotorSimComponent");

	Params::ARockVehicleAudioController_GetMotorSimComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function RockVehicleRuntime.StreamingRadioPlayerComponent_Rock.VehicleExploded
// (Final, Native, Protected)
// Parameters:
// class AController*                 LastDamageInstigator                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent_Rock::VehicleExploded(class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent_Rock", "VehicleExploded");

	Params::UStreamingRadioPlayerComponent_Rock_VehicleExploded_Params Parms;

	Parms.LastDamageInstigator = LastDamageInstigator;
	Parms.Vehicle = Vehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
