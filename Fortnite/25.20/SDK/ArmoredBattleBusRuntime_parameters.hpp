#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateYawDeltaSmoothed
struct UFortArmoredBattleBusPassengerAnimInstance_UpdateYawDeltaSmoothed_Params
{
public:
	class AFortAthenaVehicle*                    VehicleActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C6D[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              NewRotation;                                       // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SmoothedYawValue;                                  // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C6E[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateSmoothedVehicleYawRate
struct UFortArmoredBattleBusPassengerAnimInstance_UpdateSmoothedVehicleYawRate_Params
{
public:
	class AFortAthenaVehicle*                    VehicleActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateHandPositionsSlopeValues
struct UFortArmoredBattleBusPassengerAnimInstance_UpdateHandPositionsSlopeValues_Params
{
public:
	class USkeletalMeshComponent*                BusMeshComponent;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UnrotateHandAttachLocation
struct UFortArmoredBattleBusPassengerAnimInstance_UnrotateHandAttachLocation_Params
{
public:
	struct FVector                               HandLocation;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FootLocation;                                      // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              FootRotation;                                      // 0x30(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetPassengerTransform
struct UFortArmoredBattleBusPassengerAnimInstance_GetPassengerTransform_Params
{
public:
	class USkeletalMeshComponent*                BusMeshComponent;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C6F[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetHandAttachLocation
struct UFortArmoredBattleBusPassengerAnimInstance_GetHandAttachLocation_Params
{
public:
	class USkeletalMeshComponent*                BusMeshComponent;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FrontHandAttachBoneName;                           // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RearHandAttachBoneName;                            // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetFootAttachTransform
struct UFortArmoredBattleBusPassengerAnimInstance_GetFootAttachTransform_Params
{
public:
	class USkeletalMeshComponent*                BusMeshComponent;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C70[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GenerateCharacterPitchAndYawForSlopedTerrain
struct UFortArmoredBattleBusPassengerAnimInstance_GenerateCharacterPitchAndYawForSlopedTerrain_Params
{
public:
	class AFortAthenaVehicle*                    VehicleActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurretYaw;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurretPitch;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              PawnYawRotator;                                    // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateYawDeltaSmoothed
struct UFortArmoredBattleBusVehicleAnimInstance_UpdateYawDeltaSmoothed_Params
{
public:
	class AFortAthenaVehicle*                    VehicleActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C75[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              NewRotation;                                       // 0x10(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SmoothedYawValue;                                  // 0x28(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateTurretAimPitchWeaponYaw
struct UFortArmoredBattleBusVehicleAnimInstance_UpdateTurretAimPitchWeaponYaw_Params
{
public:
	class AFortAthenaVehicle*                    OwnerVehicle;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerPawn*                       GunnerActor;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawOffset;                                         // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurretAimPitch;                                    // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawDeltaSmoothed;                                  // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              WeaponYaw;                                         // 0x20(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateSmoothedVehicleYawRate
struct UFortArmoredBattleBusVehicleAnimInstance_UpdateSmoothedVehicleYawRate_Params
{
public:
	class AFortAthenaVehicle*                    VehicleActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              PreviousRotator;                                   // 0x8(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C76[0x4];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.GetPitchAndYaw
struct UFortArmoredBattleBusVehicleAnimInstance_GetPitchAndYaw_Params
{
public:
	class AFortAthenaVehicle*                    VehicleActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerPawn*                       GunnerActor;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdjustedPitch;                                     // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdjustedYaw;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocalPlayerControlled;                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C77[0x7];                                     // Fixing Size After Last Property..
	struct FRotator                              YawRotator;                                        // 0x20(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
