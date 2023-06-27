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

// 0x1 (0x1 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnVehicleStateChanged
struct UFortNevadaVehicleReticle_OnVehicleStateChanged_Params
{
public:
	enum class ENevadaFlightStates               VehicleState;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamEnabledChanged
struct UFortNevadaVehicleReticle_OnTractorBeamEnabledChanged_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDetached
struct UFortNevadaVehicleReticle_OnTractorBeamDetached_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDeactivated
struct UFortNevadaVehicleReticle_OnTractorBeamDeactivated_Params
{
public:
	float                                        Cooldown;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamChargeStarted
struct UFortNevadaVehicleReticle_OnTractorBeamChargeStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamAttached
struct UFortNevadaVehicleReticle_OnTractorBeamAttached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamActivated
struct UFortNevadaVehicleReticle_OnTractorBeamActivated_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnEnergyCanonFired
struct UFortNevadaVehicleReticle_OnEnergyCanonFired_Params
{
public:
	float                                        Cooldown;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnEnergyCannonEnabledChanged
struct UFortNevadaVehicleReticle_OnEnergyCannonEnabledChanged_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaUI.FortNevadaVehicleReticle.OnBatteryChanged
struct UFortNevadaVehicleReticle_OnBatteryChanged_Params
{
public:
	float                                        BatteryLevel;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaUI.NevadaTargetIndicator.OnTractorBeamAttached
struct UNevadaTargetIndicator_OnTractorBeamAttached_Params
{
public:
	bool                                         bAttached;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaUI.NevadaTargetIndicator.OnTractorBeamActivated
struct UNevadaTargetIndicator_OnTractorBeamActivated_Params
{
public:
	bool                                         bActivated;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
