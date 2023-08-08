#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ScoutDroneUI.DronePickUpIndicatorComponent.OnDroneDestroyed
// (Final, Native, Protected)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDronePickUpIndicatorComponent::OnDroneDestroyed(class UActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("DronePickUpIndicatorComponent", "OnDroneDestroyed");

	Params::UDronePickUpIndicatorComponent_OnDroneDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneUI.DronePickUpIndicatorComponent.Init
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortScoutDrone*             Drone                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDronePickUpIndicatorComponent::Init(class UFortScoutDrone* Drone)
{
	static auto Func = Class->GetFunction("DronePickUpIndicatorComponent", "Init");

	Params::UDronePickUpIndicatorComponent_Init_Params Parms;

	Parms.Drone = Drone;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneUI.ScoutDroneHUD.OnTargetingStatusChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FScoutDroneStatusData       StatusData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnTargetingStatusChanged(struct FScoutDroneStatusData& StatusData)
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnTargetingStatusChanged");

	Params::UScoutDroneHUD_OnTargetingStatusChanged_Params Parms;

	Parms.StatusData = StatusData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnReticleChangeAbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                UpdatedTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnReticleChangeAbilityActivated(const struct FGameplayTag& UpdatedTag)
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnReticleChangeAbilityActivated");

	Params::UScoutDroneHUD_OnReticleChangeAbilityActivated_Params Parms;

	Parms.UpdatedTag = UpdatedTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnOwningPlayerDamaged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnOwningPlayerDamaged()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnOwningPlayerDamaged");

	Params::UScoutDroneHUD_OnOwningPlayerDamaged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityUsed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDroneSpeedBoostAbilityUsed()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneSpeedBoostAbilityUsed");

	Params::UScoutDroneHUD_OnDroneSpeedBoostAbilityUsed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDroneSpeedBoostAbilityEnd()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneSpeedBoostAbilityEnd");

	Params::UScoutDroneHUD_OnDroneSpeedBoostAbilityEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneSignalDataUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DistanceFromPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SignalPercentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage)
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneSignalDataUpdated");

	Params::UScoutDroneHUD_OnDroneSignalDataUpdated_Params Parms;

	Parms.DistanceFromPlayer = DistanceFromPlayer;
	Parms.SignalPercentage = SignalPercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsEmpty
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDronePickUpTargetsEmpty()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpTargetsEmpty");

	Params::UScoutDroneHUD_OnDronePickUpTargetsEmpty_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDronePickUpTargetsAvailable()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpTargetsAvailable");

	Params::UScoutDroneHUD_OnDronePickUpTargetsAvailable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityUsed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDronePickUpAbilityUsed()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpAbilityUsed");

	Params::UScoutDroneHUD_OnDronePickUpAbilityUsed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDronePickUpAbilityEnd()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpAbilityEnd");

	Params::UScoutDroneHUD_OnDronePickUpAbilityEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityUsed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDroneMarkAbilityUsed()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneMarkAbilityUsed");

	Params::UScoutDroneHUD_OnDroneMarkAbilityUsed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDroneMarkAbilityEnd()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneMarkAbilityEnd");

	Params::UScoutDroneHUD_OnDroneMarkAbilityEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityUsed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDroneInteractAbilityUsed()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneInteractAbilityUsed");

	Params::UScoutDroneHUD_OnDroneInteractAbilityUsed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDroneInteractAbilityEnd()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneInteractAbilityEnd");

	Params::UScoutDroneHUD_OnDroneInteractAbilityEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneHealthUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HealthPercentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentHealth                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth)
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneHealthUpdated");

	Params::UScoutDroneHUD_OnDroneHealthUpdated_Params Parms;

	Parms.HealthPercentage = HealthPercentage;
	Parms.CurrentHealth = CurrentHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneEnergyChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              EnergyPercentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneHUD::OnDroneEnergyChanged(float EnergyPercentage)
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneEnergyChanged");

	Params::UScoutDroneHUD_OnDroneEnergyChanged_Params Parms;

	Parms.EnergyPercentage = EnergyPercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.OnDroneDismissAbilityUsed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneHUD::OnDroneDismissAbilityUsed()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "OnDroneDismissAbilityUsed");

	Params::UScoutDroneHUD_OnDroneDismissAbilityUsed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneHUD.GetTargetConfirmationTime
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UScoutDroneHUD::GetTargetConfirmationTime()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "GetTargetConfirmationTime");

	Params::UScoutDroneHUD_GetTargetConfirmationTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneUI.ScoutDroneHUD.GetControlledDrone
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortScoutDrone*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortScoutDrone* UScoutDroneHUD::GetControlledDrone()
{
	static auto Func = Class->GetFunction("ScoutDroneHUD", "GetControlledDrone");

	Params::UScoutDroneHUD_GetControlledDrone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.GetControlledDrone
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortScoutDrone*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortScoutDrone* UScoutDroneTetherIndicator::GetControlledDrone()
{
	static auto Func = Class->GetFunction("ScoutDroneTetherIndicator", "GetControlledDrone");

	Params::UScoutDroneTetherIndicator_GetControlledDrone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_WhileInWarningRange
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              SignalIntensityPercentage                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScoutDroneTetherIndicator::BP_WhileInWarningRange(float SignalIntensityPercentage)
{
	static auto Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_WhileInWarningRange");

	Params::UScoutDroneTetherIndicator_BP_WhileInWarningRange_Params Parms;

	Parms.SignalIntensityPercentage = SignalIntensityPercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnExitWarningRange
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneTetherIndicator::BP_OnExitWarningRange()
{
	static auto Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_OnExitWarningRange");

	Params::UScoutDroneTetherIndicator_BP_OnExitWarningRange_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterWarningRange
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneTetherIndicator::BP_OnEnterWarningRange()
{
	static auto Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_OnEnterWarningRange");

	Params::UScoutDroneTetherIndicator_BP_OnEnterWarningRange_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneTetherIndicator.BP_OnEnterSignalLossRange
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneTetherIndicator::BP_OnEnterSignalLossRange()
{
	static auto Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_OnEnterSignalLossRange");

	Params::UScoutDroneTetherIndicator_BP_OnEnterSignalLossRange_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDismissed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneUIDirector::BP_OnScoutDroneDismissed()
{
	static auto Func = Class->GetFunction("ScoutDroneUIDirector", "BP_OnScoutDroneDismissed");

	Params::UScoutDroneUIDirector_BP_OnScoutDroneDismissed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDeployed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoutDroneUIDirector::BP_OnScoutDroneDeployed()
{
	static auto Func = Class->GetFunction("ScoutDroneUIDirector", "BP_OnScoutDroneDeployed");

	Params::UScoutDroneUIDirector_BP_OnScoutDroneDeployed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
