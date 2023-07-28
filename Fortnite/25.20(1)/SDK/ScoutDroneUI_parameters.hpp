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
// Function ScoutDroneUI.DronePickUpIndicatorComponent.OnDroneDestroyed
struct UDronePickUpIndicatorComponent_OnDroneDestroyed_Params
{
public:
	class UActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneUI.DronePickUpIndicatorComponent.Init
struct UDronePickUpIndicatorComponent_Init_Params
{
public:
	class UFortScoutDrone*                       Drone;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnTargetingStatusChanged
struct UScoutDroneHUD_OnTargetingStatusChanged_Params
{
public:
	struct FScoutDroneStatusData                 StatusData;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnReticleChangeAbilityActivated
struct UScoutDroneHUD_OnReticleChangeAbilityActivated_Params
{
public:
	struct FGameplayTag                          UpdatedTag;                                        // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnOwningPlayerDamaged
struct UScoutDroneHUD_OnOwningPlayerDamaged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityUsed
struct UScoutDroneHUD_OnDroneSpeedBoostAbilityUsed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityEnd
struct UScoutDroneHUD_OnDroneSpeedBoostAbilityEnd_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneSignalDataUpdated
struct UScoutDroneHUD_OnDroneSignalDataUpdated_Params
{
public:
	float                                        DistanceFromPlayer;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SignalPercentage;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsEmpty
struct UScoutDroneHUD_OnDronePickUpTargetsEmpty_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsAvailable
struct UScoutDroneHUD_OnDronePickUpTargetsAvailable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityUsed
struct UScoutDroneHUD_OnDronePickUpAbilityUsed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityEnd
struct UScoutDroneHUD_OnDronePickUpAbilityEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityUsed
struct UScoutDroneHUD_OnDroneMarkAbilityUsed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityEnd
struct UScoutDroneHUD_OnDroneMarkAbilityEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityUsed
struct UScoutDroneHUD_OnDroneInteractAbilityUsed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityEnd
struct UScoutDroneHUD_OnDroneInteractAbilityEnd_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneHealthUpdated
struct UScoutDroneHUD_OnDroneHealthUpdated_Params
{
public:
	float                                        HealthPercentage;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentHealth;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneEnergyChanged
struct UScoutDroneHUD_OnDroneEnergyChanged_Params
{
public:
	float                                        EnergyPercentage;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.OnDroneDismissAbilityUsed
struct UScoutDroneHUD_OnDroneDismissAbilityUsed_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.GetTargetConfirmationTime
struct UScoutDroneHUD_GetTargetConfirmationTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneUI.ScoutDroneHUD.GetControlledDrone
struct UScoutDroneHUD_GetControlledDrone_Params
{
public:
	class UFortScoutDrone*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneUI.ScoutDroneTetherIndicator.GetControlledDrone
struct UScoutDroneTetherIndicator_GetControlledDrone_Params
{
public:
	class UFortScoutDrone*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_WhileInWarningRange
struct UScoutDroneTetherIndicator_BP_WhileInWarningRange_Params
{
public:
	float                                        SignalIntensityPercentage;                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnExitWarningRange
struct UScoutDroneTetherIndicator_BP_OnExitWarningRange_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterWarningRange
struct UScoutDroneTetherIndicator_BP_OnEnterWarningRange_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterSignalLossRange
struct UScoutDroneTetherIndicator_BP_OnEnterSignalLossRange_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDismissed
struct UScoutDroneUIDirector_BP_OnScoutDroneDismissed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDeployed
struct UScoutDroneUIDirector_BP_OnScoutDroneDeployed_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
