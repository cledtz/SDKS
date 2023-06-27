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
// Function TankRuntime.FortTankVehicleAnimInstance.UpdateMIDEngineProperties
struct UFortTankVehicleAnimInstance_UpdateMIDEngineProperties_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineHealthRatio;                                 // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function TankRuntime.FortTankVehicleAudioController.PlayTurningOneShot
struct AFortTankVehicleAudioController_PlayTurningOneShot_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TankRuntime.FortTankVehicleAudioController.PlayDecelOneShot
struct AFortTankVehicleAudioController_PlayDecelOneShot_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TankRuntime.FortTankVehicleAudioController.PlayAccelOneShot
struct AFortTankVehicleAudioController_PlayAccelOneShot_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function TankRuntime.FortTankVehicleAudioController.GetTankVehicleActor
struct AFortTankVehicleAudioController_GetTankVehicleActor_Params
{
public:
	class AFortTankVehicle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
