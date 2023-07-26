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


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateYawDeltaSmoothed
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          VehicleActor                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NewRotation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              SmoothedYawValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortArmoredBattleBusPassengerAnimInstance::UpdateYawDeltaSmoothed(class AFortAthenaVehicle* VehicleActor, class FName SocketName, struct FRotator& NewRotation, float* SmoothedYawValue)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "UpdateYawDeltaSmoothed");

	Params::UFortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed_Params Parms;

	Parms.VehicleActor = VehicleActor;
	Parms.SocketName = SocketName;
	Parms.NewRotation = NewRotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SmoothedYawValue != nullptr)
		*SmoothedYawValue = Parms.SmoothedYawValue;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateSmoothedVehicleYawRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          VehicleActor                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortArmoredBattleBusPassengerAnimInstance::UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle* VehicleActor)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "UpdateSmoothedVehicleYawRate");

	Params::UFortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate_Params Parms;

	Parms.VehicleActor = VehicleActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateHandPositionsSlopeValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      BusMeshComponent                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortArmoredBattleBusPassengerAnimInstance::UpdateHandPositionsSlopeValues(class USkeletalMeshComponent* BusMeshComponent)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "UpdateHandPositionsSlopeValues");

	Params::UFortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues_Params Parms;

	Parms.BusMeshComponent = BusMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UnrotateHandAttachLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     HandLocation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     FootLocation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    FootRotation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortArmoredBattleBusPassengerAnimInstance::UnrotateHandAttachLocation(struct FVector& HandLocation, struct FVector& FootLocation, struct FRotator& FootRotation)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "UnrotateHandAttachLocation");

	Params::UFortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation_Params Parms;

	Parms.HandLocation = HandLocation;
	Parms.FootLocation = FootLocation;
	Parms.FootRotation = FootRotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetPassengerTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      BusMeshComponent                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UFortArmoredBattleBusPassengerAnimInstance::GetPassengerTransform(class USkeletalMeshComponent* BusMeshComponent)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "GetPassengerTransform");

	Params::UFortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform_Params Parms;

	Parms.BusMeshComponent = BusMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetHandAttachLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      BusMeshComponent                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FrontHandAttachBoneName                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RearHandAttachBoneName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortArmoredBattleBusPassengerAnimInstance::GetHandAttachLocation(class USkeletalMeshComponent* BusMeshComponent, class FName FrontHandAttachBoneName, class FName RearHandAttachBoneName)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "GetHandAttachLocation");

	Params::UFortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation_Params Parms;

	Parms.BusMeshComponent = BusMeshComponent;
	Parms.FrontHandAttachBoneName = FrontHandAttachBoneName;
	Parms.RearHandAttachBoneName = RearHandAttachBoneName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetFootAttachTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      BusMeshComponent                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UFortArmoredBattleBusPassengerAnimInstance::GetFootAttachTransform(class USkeletalMeshComponent* BusMeshComponent)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "GetFootAttachTransform");

	Params::UFortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform_Params Parms;

	Parms.BusMeshComponent = BusMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GenerateCharacterPitchAndYawForSlopedTerrain
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          VehicleActor                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TurretYaw                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TurretPitch                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    PawnYawRotator                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortArmoredBattleBusPassengerAnimInstance::GenerateCharacterPitchAndYawForSlopedTerrain(class AFortAthenaVehicle* VehicleActor, float* TurretYaw, float* TurretPitch, struct FRotator* PawnYawRotator)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusPassengerAnimInstance", "GenerateCharacterPitchAndYawForSlopedTerrain");

	Params::UFortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain_Params Parms;

	Parms.VehicleActor = VehicleActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TurretYaw != nullptr)
		*TurretYaw = Parms.TurretYaw;

	if (TurretPitch != nullptr)
		*TurretPitch = Parms.TurretPitch;

	if (PawnYawRotator != nullptr)
		*PawnYawRotator = Parms.PawnYawRotator;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateYawDeltaSmoothed
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          VehicleActor                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NewRotation                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              SmoothedYawValue                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortArmoredBattleBusVehicleAnimInstance::UpdateYawDeltaSmoothed(class AFortAthenaVehicle* VehicleActor, class FName SocketName, const struct FRotator& NewRotation, float SmoothedYawValue)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusVehicleAnimInstance", "UpdateYawDeltaSmoothed");

	Params::UFortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed_Params Parms;

	Parms.VehicleActor = VehicleActor;
	Parms.SocketName = SocketName;
	Parms.NewRotation = NewRotation;
	Parms.SmoothedYawValue = SmoothedYawValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateTurretAimPitchWeaponYaw
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          OwnerVehicle                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             GunnerActor                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              YawOffset                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TurretAimPitch                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              YawDeltaSmoothed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    WeaponYaw                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortArmoredBattleBusVehicleAnimInstance::UpdateTurretAimPitchWeaponYaw(class AFortAthenaVehicle* OwnerVehicle, class AFortPlayerPawn* GunnerActor, class FName SocketName, float YawOffset, float* TurretAimPitch, float* YawDeltaSmoothed, struct FRotator* WeaponYaw)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusVehicleAnimInstance", "UpdateTurretAimPitchWeaponYaw");

	Params::UFortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw_Params Parms;

	Parms.OwnerVehicle = OwnerVehicle;
	Parms.GunnerActor = GunnerActor;
	Parms.SocketName = SocketName;
	Parms.YawOffset = YawOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TurretAimPitch != nullptr)
		*TurretAimPitch = Parms.TurretAimPitch;

	if (YawDeltaSmoothed != nullptr)
		*YawDeltaSmoothed = Parms.YawDeltaSmoothed;

	if (WeaponYaw != nullptr)
		*WeaponYaw = Parms.WeaponYaw;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateSmoothedVehicleYawRate
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          VehicleActor                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    PreviousRotator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortArmoredBattleBusVehicleAnimInstance::UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle* VehicleActor, const struct FRotator& PreviousRotator)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusVehicleAnimInstance", "UpdateSmoothedVehicleYawRate");

	Params::UFortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate_Params Parms;

	Parms.VehicleActor = VehicleActor;
	Parms.PreviousRotator = PreviousRotator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.GetPitchAndYaw
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          VehicleActor                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             GunnerActor                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AdjustedPitch                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AdjustedYaw                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocalPlayerControlled                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    YawRotator                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortArmoredBattleBusVehicleAnimInstance::GetPitchAndYaw(class AFortAthenaVehicle* VehicleActor, class AFortPlayerPawn* GunnerActor, float* AdjustedPitch, float* AdjustedYaw, bool* bIsLocalPlayerControlled, struct FRotator* YawRotator)
{
	static auto Func = Class->GetFunction("FortArmoredBattleBusVehicleAnimInstance", "GetPitchAndYaw");

	Params::UFortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw_Params Parms;

	Parms.VehicleActor = VehicleActor;
	Parms.GunnerActor = GunnerActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AdjustedPitch != nullptr)
		*AdjustedPitch = Parms.AdjustedPitch;

	if (AdjustedYaw != nullptr)
		*AdjustedYaw = Parms.AdjustedYaw;

	if (bIsLocalPlayerControlled != nullptr)
		*bIsLocalPlayerControlled = Parms.bIsLocalPlayerControlled;

	if (YawRotator != nullptr)
		*YawRotator = Parms.YawRotator;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
