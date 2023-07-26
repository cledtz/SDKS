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

// 0x4 (0x4 - 0x0)
// Function VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier.SetSurface
struct UFortMotorSimComponent_SurfaceModifier_SetSurface_Params
{
public:
	class FName                                  NewSurface;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnUpdate
struct UVehicleAudioLifecycleInterface_OnUpdate_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnShutdown
struct UVehicleAudioLifecycleInterface_OnShutdown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnInit
struct UVehicleAudioLifecycleInterface_OnInit_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.UpdateMotorModelNative
struct AFortVehicleAudioController_UpdateMotorModelNative_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.Update
struct AFortVehicleAudioController_Update_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.Shutdown
struct AFortVehicleAudioController_Shutdown_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.SetVehicle
struct AFortVehicleAudioController_SetVehicle_Params
{
public:
	class AFortAthenaVehicle*                    InVehicle;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.SetRedlineActive
struct AFortVehicleAudioController_SetRedlineActive_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.SetLayeredAudioComponent
struct AFortVehicleAudioController_SetLayeredAudioComponent_Params
{
public:
	class UFortLayeredAudioComponent*            InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.IsNativizationEnabled
struct AFortVehicleAudioController_IsNativizationEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.Init
struct AFortVehicleAudioController_Init_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetVehicleActor
struct AFortVehicleAudioController_GetVehicleActor_Params
{
public:
	class AFortAthenaVehicle*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetThrottleNative
struct AFortVehicleAudioController_GetThrottleNative_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetREVComponent
struct AFortVehicleAudioController_GetREVComponent_Params
{
public:
	class UREVComponent*                         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetRedlineActive
struct AFortVehicleAudioController_GetRedlineActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetPhysicsVehicleConfigs
struct AFortVehicleAudioController_GetPhysicsVehicleConfigs_Params
{
public:
	class UFortPhysicsVehicleConfigs*            ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetLayeredAudioComponent
struct AFortVehicleAudioController_GetLayeredAudioComponent_Params
{
public:
	class UFortLayeredAudioComponent*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetJitterTime
struct AFortVehicleAudioController_GetJitterTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetBrakingNative
struct AFortVehicleAudioController_GetBrakingNative_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetAudioParameterComponent
struct AFortVehicleAudioController_GetAudioParameterComponent_Params
{
public:
	class UAudioParameterComponent*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.GetAudioMotorModelComponent
struct AFortVehicleAudioController_GetAudioMotorModelComponent_Params
{
public:
	class UAudioMotorModelComponent*             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VehicleAudioRuntime.FortVehicleAudioController.CacheJitterTime
struct AFortVehicleAudioController_CacheJitterTime_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.Update
struct UFortVehicleSoundComponent_Update_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.Shutdown
struct UFortVehicleSoundComponent_Shutdown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.Init
struct UFortVehicleSoundComponent_Init_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetVehicleActor
struct UFortVehicleSoundComponent_GetVehicleActor_Params
{
public:
	class AFortAthenaVehicle*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetRootComponent
struct UFortVehicleSoundComponent_GetRootComponent_Params
{
public:
	class USceneComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetREVComponent
struct UFortVehicleSoundComponent_GetREVComponent_Params
{
public:
	class UREVComponent*                         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetPhysicsVehicleConfigs
struct UFortVehicleSoundComponent_GetPhysicsVehicleConfigs_Params
{
public:
	class UFortPhysicsVehicleConfigs*            ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetMotorModelComponent
struct UFortVehicleSoundComponent_GetMotorModelComponent_Params
{
public:
	class UAudioMotorModelComponent*             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetLayeredAudioComponent
struct UFortVehicleSoundComponent_GetLayeredAudioComponent_Params
{
public:
	class UFortLayeredAudioComponent*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioParameterComponent
struct UFortVehicleSoundComponent_GetAudioParameterComponent_Params
{
public:
	class UAudioParameterComponent*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioController
struct UFortVehicleSoundComponent_GetAudioController_Params
{
public:
	class AFortVehicleAudioController*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent_Speed.OnReversedChanged
struct UFortVehicleSoundComponent_Speed_OnReversedChanged_Params
{
public:
	bool                                         bReversing;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSurfaceChanged
struct UFortVehicleSoundComponent_Surface_OnSurfaceChanged_Params
{
public:
	enum class EPhysicalSurface                  NewSurface;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSkiddingChanged
struct UFortVehicleSoundComponent_Surface_OnSkiddingChanged_Params
{
public:
	bool                                         bNewState;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnInAirChanged
struct UFortVehicleSoundComponent_Surface_OnInAirChanged_Params
{
public:
	bool                                         bNewState;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnBrakingChanged
struct UFortVehicleSoundComponent_Surface_OnBrakingChanged_Params
{
public:
	bool                                         bNewState;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
