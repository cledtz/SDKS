#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive
struct UFortNevadaVehicle_SetTractorBeamInactive_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
struct UFortNevadaVehicle_SetTractorBeamEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetCannonEnabled
struct UFortNevadaVehicle_SetCannonEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity
struct UFortNevadaVehicle_SetAttachedPawnAddedVelocity_Params
{
public:
	struct FVector                               AddedVelocity;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
struct UFortNevadaVehicle_OnTractorBeamDetached_Params
{
public:
	class UActor*                                DetachedActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastBeamPosition;                                  // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated
struct UFortNevadaVehicle_OnTractorBeamDeactivated_Params
{
public:
	struct FVector                               LastBeamPosition;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted
struct UFortNevadaVehicle_OnTractorBeamChargeStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached
struct UFortNevadaVehicle_OnTractorBeamAttached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated
struct UFortNevadaVehicle_OnTractorBeamActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
struct UFortNevadaVehicle_OnTargetedActorChanged_Params
{
public:
	class UActor*                                NewTargetedActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnStartDescend
struct UFortNevadaVehicle_OnStartDescend_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnStartAscend
struct UFortNevadaVehicle_OnStartAscend_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
struct UFortNevadaVehicle_OnRep_TractorBeamState_Params
{
public:
	enum class ETractorBeamState                 PreviousState;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted
struct UFortNevadaVehicle_OnRep_TractorBeamChargeStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached
struct UFortNevadaVehicle_OnRep_TractorBeamAttached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged
struct UFortNevadaVehicle_OnRep_TargetedActorChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors
struct UFortNevadaVehicle_OnRep_ReplicatedTargetedActors_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
struct UFortNevadaVehicle_OnRep_NevadaState_Params
{
public:
	struct FNevadaState                          PrevState;                                         // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRebootStarted
struct UFortNevadaVehicle_OnRebootStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRebootFinished
struct UFortNevadaVehicle_OnRebootFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnOutOfBattery
struct UFortNevadaVehicle_OnOutOfBattery_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
struct UFortNevadaVehicle_OnNewVehicleState_Params
{
public:
	enum class ENevadaFlightStates               NewVehicleState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnCrashingStarted
struct UFortNevadaVehicle_OnCrashingStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnCrashedImpact
struct UFortNevadaVehicle_OnCrashedImpact_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnBoostStarted
struct UFortNevadaVehicle_OnBoostStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnBoostFinished
struct UFortNevadaVehicle_OnBoostFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled
struct UFortNevadaVehicle_OnBoostChargeRefilled_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
struct UFortNevadaVehicle_OnBatteryRegen_Params
{
public:
	float                                        Newcharge;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied
struct UFortNevadaVehicle_OnAttachedActorDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41DD[0x4];                                     // Fixing Size After Last Property 
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E0[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed
struct UFortNevadaVehicle_OnAttachedActorDestroyed_Params
{
public:
	class UActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit
struct UFortNevadaVehicle_NativeToggleCockpit_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted
struct UFortNevadaVehicle_IsTractorBeamDisrupted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached
struct UFortNevadaVehicle_IsTractorBeamAttached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive
struct UFortNevadaVehicle_IsTractorBeamActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation
struct UFortNevadaVehicle_GetTractorBeamAttachLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable
struct UFortNevadaVehicle_GetNumRebootsAvailable_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent
struct UFortNevadaVehicle_GetEnergyCanonChargePercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams
struct UFortNevadaVehicle_GetDriverSeatRotationAnimParams_Params
{
public:
	float                                        OutLeftRight;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutForwardBack;                                    // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState
struct UFortNevadaVehicle_GetCurrentVehicleState_Params
{
public:
	enum class ENevadaFlightStates               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining
struct UFortNevadaVehicle_GetBoostChargeTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable
struct UFortNevadaVehicle_GetBoostChargesAvailable_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress
struct UFortNevadaVehicle_GetBoostChargeProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBatteryCharge
struct UFortNevadaVehicle_GetBatteryCharge_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetAudioController
struct UFortNevadaVehicle_GetAudioController_Params
{
public:
	class UFortNevadaAudioController*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer
struct UFortNevadaVehicle_EnablePilotBubbleCollisionOnServer_Params
{
public:
	bool                                         bNewCollisionEnabled;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam
struct UFortNevadaVehicle_DisruptTractorBeam_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor
struct UFortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor_Params
{
public:
	struct FVector                               Impulse;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVelChange;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4201[0x3];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.Update
struct UFortNevadaAudioController_Update_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.Init
struct UFortNevadaAudioController_Init_Params
{
public:
	class UFortNevadaVehicle*                    InVehicle;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.GetVehicleActor
struct UFortNevadaAudioController_GetVehicleActor_Params
{
public:
	class UFortNevadaVehicle*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.CacheReferences
struct UFortNevadaAudioController_CacheReferences_Params
{
public:
	class UFortLayeredAudioComponent*            InLayeredAudioComponent;                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.BP_Update
struct UFortNevadaAudioController_BP_Update_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.BP_Init
struct UFortNevadaAudioController_BP_Init_Params
{
public:
};

}
}


