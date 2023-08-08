#pragma once

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
// Function MotorboatRuntime.FortMeatballVehicle.UpdateSnowAndDirtParams
struct UFortMeatballVehicle_UpdateSnowAndDirtParams_Params
{
public:
	float                                        NormalizedForwardSpeed;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.StopTurnRumble
struct UFortMeatballVehicle_StopTurnRumble_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.StopLandRumble
struct UFortMeatballVehicle_StopLandRumble_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.StopDriverCameraShake
struct UFortMeatballVehicle_StopDriverCameraShake_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.SmashedThroughBuildingPiece
struct UFortMeatballVehicle_SmashedThroughBuildingPiece_Params
{
public:
	struct FVector                               ImpactPoint;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ImpactNormal;                                      // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBuildingActor*                        BuildingHitActor;                                  // 0x30(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.ShowCooldownCue
struct UFortMeatballVehicle_ShowCooldownCue_Params
{
public:
	class UFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3750[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.OnBoostStarted
struct UFortMeatballVehicle_OnBoostStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.OnBoostReady
struct UFortMeatballVehicle_OnBoostReady_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.OnBoostFinished
struct UFortMeatballVehicle_OnBoostFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.OnBoostFailed
struct UFortMeatballVehicle_OnBoostFailed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.LandShakeEnd
struct UFortMeatballVehicle_LandShakeEnd_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.GetSeatRotation
struct UFortMeatballVehicle_GetSeatRotation_Params
{
public:
	struct FQuat                                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.GetSeatOffset
struct UFortMeatballVehicle_GetSeatOffset_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.GetBoostCharge
struct UFortMeatballVehicle_GetBoostCharge_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.CacheGroundFXComponent
struct UFortMeatballVehicle_CacheGroundFXComponent_Params
{
public:
	class UNiagaraComponent*                     InGroundFXComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MotorboatRuntime.FortMeatballVehicle.CacheAudioPointers
struct UFortMeatballVehicle_CacheAudioPointers_Params
{
public:
	class UFortVehicleAudioVoice*                InAudioEngineUp;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortVehicleAudioVoice*                InAudioEngineDown;                                 // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortVehicleAudioVoice*                InAudioWakeTurn;                                   // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortVehicleAudioVoice*                InAudioWakeSpeed;                                  // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortVehicleAudioVoice*                InAudioScrape;                                     // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortVehicleAudioVoice*                InAudioEngineOutOfFuel;                            // 0x28(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
