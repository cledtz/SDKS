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

// 0x8 (0x8 - 0x0)
// Function TankUI.TankVehicleReticle.SetupVehicleFromBP
struct UTankVehicleReticle_SetupVehicleFromBP_Params
{
public:
	class AActor*                                NewVehicle;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function TankUI.TankVehicleReticle.OnTreadEnabledChanged
struct UTankVehicleReticle_OnTreadEnabledChanged_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETreadSide                        Side;                                              // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TankUI.TankVehicleReticle.OnTankTurretAimYawValueChanged
struct UTankVehicleReticle_OnTankTurretAimYawValueChanged_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TankUI.TankVehicleReticle.OnTankTurretAimPitchValueChanged
struct UTankVehicleReticle_OnTankTurretAimPitchValueChanged_Params
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchPercent;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function TankUI.TankVehicleReticle.OnTankTargetingReleased
struct UTankVehicleReticle_OnTankTargetingReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TankUI.TankVehicleReticle.OnTankTargetingPressed
struct UTankVehicleReticle_OnTankTargetingPressed_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function TankUI.TankVehicleReticle.OnTankRotationValueChanged
struct UTankVehicleReticle_OnTankRotationValueChanged_Params
{
public:
	float                                        TankValue;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurretValue;                                       // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function TankUI.TankVehicleReticle.OnTankHatchHealthChanged
struct UTankVehicleReticle_OnTankHatchHealthChanged_Params
{
public:
	float                                        HatchHealth;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HatchHealthMax;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewlyDisabled;                                    // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewlyEnabled;                                     // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_807B[0x2];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function TankUI.TankVehicleReticle.OnTankEngineHealthChanged
struct UTankVehicleReticle_OnTankEngineHealthChanged_Params
{
public:
	float                                        EngineHealth;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineHealthMax;                                   // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewlyDisabled;                                    // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewlyEnabled;                                     // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_807C[0x2];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function TankUI.TankVehicleReticle.OnTankDistanceUpdate
struct UTankVehicleReticle_OnTankDistanceUpdate_Params
{
public:
	float                                        Distance;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistancePercent;                                   // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TankUI.TankVehicleReticle.OnCannonFired
struct UTankVehicleReticle_OnCannonFired_Params
{
public:
	float                                        RateTime;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TankUI.TankVehicleReticle.HandleOnEquipMountedWeapon
struct UTankVehicleReticle_HandleOnEquipMountedWeapon_Params
{
public:
	class AFortWeaponRanged*                     EquippedMountedWeapon;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function TankUI.TankVehicleReticle.HandleOnDamageablePartHealthChanged
struct UTankVehicleReticle_HandleOnDamageablePartHealthChanged_Params
{
public:
	struct FVehicleDamageablePartConfig          PartConfig;                                        // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVehicleDamageablePart                Part;                                              // 0x40(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bNewlyDisabled;                                    // 0x54(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewlyEnabled;                                     // 0x55(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_807D[0x2];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
