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

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive
struct AFortNevadaVehicle_SetTractorBeamInactive_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
struct AFortNevadaVehicle_SetTractorBeamEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetCannonEnabled
struct AFortNevadaVehicle_SetCannonEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity
struct AFortNevadaVehicle_SetAttachedPawnAddedVelocity_Params
{
public:
	struct FVector                               AddedVelocity;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
struct AFortNevadaVehicle_OnTractorBeamDetached_Params
{
public:
	class AActor*                                DetachedActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastBeamPosition;                                  // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated
struct AFortNevadaVehicle_OnTractorBeamDeactivated_Params
{
public:
	struct FVector                               LastBeamPosition;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted
struct AFortNevadaVehicle_OnTractorBeamChargeStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached
struct AFortNevadaVehicle_OnTractorBeamAttached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated
struct AFortNevadaVehicle_OnTractorBeamActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
struct AFortNevadaVehicle_OnTargetedActorChanged_Params
{
public:
	class AActor*                                NewTargetedActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnStartDescend
struct AFortNevadaVehicle_OnStartDescend_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnStartAscend
struct AFortNevadaVehicle_OnStartAscend_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
struct AFortNevadaVehicle_OnRep_TractorBeamState_Params
{
public:
	enum class ETractorBeamState                 PreviousState;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted
struct AFortNevadaVehicle_OnRep_TractorBeamChargeStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached
struct AFortNevadaVehicle_OnRep_TractorBeamAttached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged
struct AFortNevadaVehicle_OnRep_TargetedActorChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors
struct AFortNevadaVehicle_OnRep_ReplicatedTargetedActors_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
struct AFortNevadaVehicle_OnRep_NevadaState_Params
{
public:
	struct FNevadaState                          PrevState;                                         // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRebootStarted
struct AFortNevadaVehicle_OnRebootStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRebootFinished
struct AFortNevadaVehicle_OnRebootFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnOutOfBattery
struct AFortNevadaVehicle_OnOutOfBattery_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
struct AFortNevadaVehicle_OnNewVehicleState_Params
{
public:
	enum class ENevadaFlightStates               NewVehicleState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnCrashingStarted
struct AFortNevadaVehicle_OnCrashingStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnCrashedImpact
struct AFortNevadaVehicle_OnCrashedImpact_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnBoostStarted
struct AFortNevadaVehicle_OnBoostStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnBoostFinished
struct AFortNevadaVehicle_OnBoostFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled
struct AFortNevadaVehicle_OnBoostChargeRefilled_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
struct AFortNevadaVehicle_OnBatteryRegen_Params
{
public:
	float                                        Newcharge;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied
struct AFortNevadaVehicle_OnAttachedActorDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44C6[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44C7[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed
struct AFortNevadaVehicle_OnAttachedActorDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit
struct AFortNevadaVehicle_NativeToggleCockpit_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted
struct AFortNevadaVehicle_IsTractorBeamDisrupted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached
struct AFortNevadaVehicle_IsTractorBeamAttached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive
struct AFortNevadaVehicle_IsTractorBeamActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation
struct AFortNevadaVehicle_GetTractorBeamAttachLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable
struct AFortNevadaVehicle_GetNumRebootsAvailable_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent
struct AFortNevadaVehicle_GetEnergyCanonChargePercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams
struct AFortNevadaVehicle_GetDriverSeatRotationAnimParams_Params
{
public:
	float                                        OutLeftRight;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutForwardBack;                                    // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState
struct AFortNevadaVehicle_GetCurrentVehicleState_Params
{
public:
	enum class ENevadaFlightStates               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining
struct AFortNevadaVehicle_GetBoostChargeTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable
struct AFortNevadaVehicle_GetBoostChargesAvailable_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress
struct AFortNevadaVehicle_GetBoostChargeProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBatteryCharge
struct AFortNevadaVehicle_GetBatteryCharge_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetAudioController
struct AFortNevadaVehicle_GetAudioController_Params
{
public:
	class AFortNevadaAudioController*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer
struct AFortNevadaVehicle_EnablePilotBubbleCollisionOnServer_Params
{
public:
	bool                                         bNewCollisionEnabled;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam
struct AFortNevadaVehicle_DisruptTractorBeam_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor
struct AFortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor_Params
{
public:
	struct FVector                               Impulse;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVelChange;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44C8[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.Update
struct AFortNevadaAudioController_Update_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.Init
struct AFortNevadaAudioController_Init_Params
{
public:
	class AFortNevadaVehicle*                    InVehicle;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.GetVehicleActor
struct AFortNevadaAudioController_GetVehicleActor_Params
{
public:
	class AFortNevadaVehicle*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.CacheReferences
struct AFortNevadaAudioController_CacheReferences_Params
{
public:
	class UFortLayeredAudioComponent*            InLayeredAudioComponent;                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.BP_Update
struct AFortNevadaAudioController_BP_Update_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.BP_Init
struct AFortNevadaAudioController_BP_Init_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
