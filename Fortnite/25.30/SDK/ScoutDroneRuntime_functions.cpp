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


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStoppedDiving
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Dive::BP_OnDroneStoppedDiving()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Dive", "BP_OnDroneStoppedDiving");

	Params::UFortGameplayAbility_ScoutDrone_Dive_BP_OnDroneStoppedDiving_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStartedDiving
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Dive::BP_OnDroneStartedDiving()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Dive", "BP_OnDroneStartedDiving");

	Params::UFortGameplayAbility_ScoutDrone_Dive_BP_OnDroneStartedDiving_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StopTargeting
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_ScoutDrone_TargetingBase::StopTargeting()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_TargetingBase", "StopTargeting");

	Params::UFortGameplayAbility_ScoutDrone_TargetingBase_StopTargeting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StartTargeting
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_ScoutDrone_TargetingBase::StartTargeting()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_TargetingBase", "StartTargeting");

	Params::UFortGameplayAbility_ScoutDrone_TargetingBase_StartTargeting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.BP_OnTargetsFound
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_TargetingBase::BP_OnTargetsFound(struct FTargetingRequestHandle& TargetingHandle)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_TargetingBase", "BP_OnTargetsFound");

	Params::UFortGameplayAbility_ScoutDrone_TargetingBase_BP_OnTargetsFound_Params Parms;

	Parms.TargetingHandle = TargetingHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnDoorBashed
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFortBuildingWallDoorComponent*BashedDoor                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_SpeedBoost::OnDoorBashed(struct FHitResult& HitResult, class UFortBuildingWallDoorComponent* BashedDoor)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_SpeedBoost", "OnDoorBashed");

	Params::UFortGameplayAbility_ScoutDrone_SpeedBoost_OnDoorBashed_Params Parms;

	Parms.HitResult = HitResult;
	Parms.BashedDoor = BashedDoor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnBoostedIntoActor
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_SpeedBoost::OnBoostedIntoActor(struct FHitResult& HitResult)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_SpeedBoost", "OnBoostedIntoActor");

	Params::UFortGameplayAbility_ScoutDrone_SpeedBoost_OnBoostedIntoActor_Params Parms;

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss.GetControlledDrone
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortScoutDrone*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortScoutDrone* UFortGameplayAbility_ScoutDrone_Dismiss::GetControlledDrone()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Dismiss", "GetControlledDrone");

	Params::UFortGameplayAbility_ScoutDrone_Dismiss_GetControlledDrone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStoppedHighlightingTarget
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::OnStoppedHighlightingTarget(class UActor* Target)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_MarkPotentialTargets", "OnStoppedHighlightingTarget");

	Params::UFortGameplayAbility_ScoutDrone_MarkPotentialTargets_OnStoppedHighlightingTarget_Params Parms;

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStartHighlightingTarget
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::OnStartHighlightingTarget(class UActor* Target)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_MarkPotentialTargets", "OnStartHighlightingTarget");

	Params::UFortGameplayAbility_ScoutDrone_MarkPotentialTargets_OnStartHighlightingTarget_Params Parms;

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnRep_CurrentTargetStatus
// (Final, Native, Protected)
// Parameters:

void UFortGameplayAbility_ScoutDrone_PassiveMark::OnRep_CurrentTargetStatus()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PassiveMark", "OnRep_CurrentTargetStatus");

	Params::UFortGameplayAbility_ScoutDrone_PassiveMark_OnRep_CurrentTargetStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnActorIndicatorExpired
// (Final, Native, Private)
// Parameters:
// class UActor*                      IndicatedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_PassiveMark::OnActorIndicatorExpired(class UActor* IndicatedActor)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PassiveMark", "OnActorIndicatorExpired");

	Params::UFortGameplayAbility_ScoutDrone_PassiveMark_OnActorIndicatorExpired_Params Parms;

	Parms.IndicatedActor = IndicatedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.BP_OnTargetStatusChanged
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      ActiveTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_ScoutDrone_PassiveMark::BP_OnTargetStatusChanged(class UActor* ActiveTarget)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PassiveMark", "BP_OnTargetStatusChanged");

	Params::UFortGameplayAbility_ScoutDrone_PassiveMark_BP_OnTargetStatusChanged_Params Parms;

	Parms.ActiveTarget = ActiveTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp.ServerConfirmTargets
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UFortGameplayAbility_ScoutDrone_PickUp::ServerConfirmTargets()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PickUp", "ServerConfirmTargets");

	Params::UFortGameplayAbility_ScoutDrone_PickUp_ServerConfirmTargets_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StopCheckingDistances
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Tether::StopCheckingDistances()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "StopCheckingDistances");

	Params::UFortGameplayAbility_ScoutDrone_Tether_StopCheckingDistances_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StartCheckingDistances
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Tether::StartCheckingDistances()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "StartCheckingDistances");

	Params::UFortGameplayAbility_ScoutDrone_Tether_StartCheckingDistances_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInWarningRange
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Tether::OnRep_bIsInWarningRange()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "OnRep_bIsInWarningRange");

	Params::UFortGameplayAbility_ScoutDrone_Tether_OnRep_bIsInWarningRange_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInSignalLossRange
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_ScoutDrone_Tether::OnRep_bIsInSignalLossRange()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "OnRep_bIsInSignalLossRange");

	Params::UFortGameplayAbility_ScoutDrone_Tether_OnRep_bIsInSignalLossRange_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortAthenaMutator_ScoutDrone.OnViewTargetChanged
// (Final, Native, Private)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OldViewTarget                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      NewViewTarget                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_ScoutDrone::OnViewTargetChanged(class UFortPlayerController* PlayerController, class UActor* OldViewTarget, class UActor* NewViewTarget)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_ScoutDrone", "OnViewTargetChanged");

	Params::UFortAthenaMutator_ScoutDrone_OnViewTargetChanged_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.OldViewTarget = OldViewTarget;
	Parms.NewViewTarget = NewViewTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy.OnRep_Energy
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FFortGameplayAttributeData  OldValue                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortChargingSet_ScoutDroneEnergy::OnRep_Energy(struct FFortGameplayAttributeData& OldValue)
{
	static auto Func = Class->GetFunction("FortChargingSet_ScoutDroneEnergy", "OnRep_Energy");

	Params::UFortChargingSet_ScoutDroneEnergy_OnRep_Energy_Params Parms;

	Parms.OldValue = OldValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDrone.SetupGameplayAudioParameters
// (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable)
// Parameters:

void UFortScoutDrone::SetupGameplayAudioParameters()
{
	static auto Func = Class->GetFunction("FortScoutDrone", "SetupGameplayAudioParameters");

	Params::UFortScoutDrone_SetupGameplayAudioParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDrone.SetTeamMatesIndicator
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bState                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDrone::SetTeamMatesIndicator(bool bState)
{
	static auto Func = Class->GetFunction("FortScoutDrone", "SetTeamMatesIndicator");

	Params::UFortScoutDrone_SetTeamMatesIndicator_Params Parms;

	Parms.bState = bState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDrone.SetAffiliationAudio
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortScoutDrone::SetAffiliationAudio()
{
	static auto Func = Class->GetFunction("FortScoutDrone", "SetAffiliationAudio");

	Params::UFortScoutDrone_SetAffiliationAudio_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDrone.OnRep_ControllingPlayerPawn
// (Final, Native, Private)
// Parameters:

void UFortScoutDrone::OnRep_ControllingPlayerPawn()
{
	static auto Func = Class->GetFunction("FortScoutDrone", "OnRep_ControllingPlayerPawn");

	Params::UFortScoutDrone_OnRep_ControllingPlayerPawn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDrone.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UFortScoutDrone::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("FortScoutDrone", "OnDeathPlayEffects");

	Params::UFortScoutDrone_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDrone.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UFortScoutDrone::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("FortScoutDrone", "OnDamagePlayEffects");

	Params::UFortScoutDrone_OnDamagePlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDrone.GetHealthPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortScoutDrone::GetHealthPercentage()
{
	static auto Func = Class->GetFunction("FortScoutDrone", "GetHealthPercentage");

	Params::UFortScoutDrone_GetHealthPercentage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDrone.GetForwardAndRightDotProducts_Native
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              OutForwardDot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutRightDot                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDrone::GetForwardAndRightDotProducts_Native(float* OutForwardDot, float* OutRightDot)
{
	static auto Func = Class->GetFunction("FortScoutDrone", "GetForwardAndRightDotProducts_Native");

	Params::UFortScoutDrone_GetForwardAndRightDotProducts_Native_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutForwardDot != nullptr)
		*OutForwardDot = Parms.OutForwardDot;

	if (OutRightDot != nullptr)
		*OutRightDot = Parms.OutRightDot;

}


// Function ScoutDroneRuntime.FortScoutDrone.GetDeltaRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UFortScoutDrone::GetDeltaRotator()
{
	static auto Func = Class->GetFunction("FortScoutDrone", "GetDeltaRotator");

	Params::UFortScoutDrone_GetDeltaRotator_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDrone.GetControllingPlayerPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPawn*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPawn* UFortScoutDrone::GetControllingPlayerPawn()
{
	static auto Func = Class->GetFunction("FortScoutDrone", "GetControllingPlayerPawn");

	Params::UFortScoutDrone_GetControllingPlayerPawn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDrone.GameplayCue_Damage
// (Native, Protected)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortScoutDrone::GameplayCue_Damage(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("FortScoutDrone", "GameplayCue_Damage");

	Params::UFortScoutDrone_GameplayCue_Damage_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.ServerRequestDroneDismissal
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UFortScoutDroneControllingComponent::ServerRequestDroneDismissal()
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "ServerRequestDroneDismissal");

	Params::UFortScoutDroneControllingComponent_ServerRequestDroneDismissal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::OnWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnWeaponEquipped");

	Params::UFortScoutDroneControllingComponent_OnWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_CurrentDestructionData
// (Final, Native, Private)
// Parameters:

void UFortScoutDroneControllingComponent::OnRep_CurrentDestructionData()
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnRep_CurrentDestructionData");

	Params::UFortScoutDroneControllingComponent_OnRep_CurrentDestructionData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_ControlledDrone
// (Final, Native, Private)
// Parameters:

void UFortScoutDroneControllingComponent::OnRep_ControlledDrone()
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnRep_ControlledDrone");

	Params::UFortScoutDroneControllingComponent_OnRep_ControlledDrone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnPlayerInterruptionTagsChanged
// (Final, Native, Private)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::OnPlayerInterruptionTagsChanged(const struct FGameplayTag& Tag, int32 NewCount)
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnPlayerInterruptionTagsChanged");

	Params::UFortScoutDroneControllingComponent_OnPlayerInterruptionTagsChanged_Params Parms;

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnOwningPlayerStartedDBNO
// (Final, Native, Private)
// Parameters:

void UFortScoutDroneControllingComponent::OnOwningPlayerStartedDBNO()
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnOwningPlayerStartedDBNO");

	Params::UFortScoutDroneControllingComponent_OnOwningPlayerStartedDBNO_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnControlledDroneDestroyed
// (Final, Native, Private)
// Parameters:
// class UActor*                      InControlledDrone                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::OnControlledDroneDestroyed(class UActor* InControlledDrone)
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnControlledDroneDestroyed");

	Params::UFortScoutDroneControllingComponent_OnControlledDroneDestroyed_Params Parms;

	Parms.InControlledDrone = InControlledDrone;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.GetControlledDrone
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortScoutDrone*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortScoutDrone* UFortScoutDroneControllingComponent::GetControlledDrone()
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "GetControlledDrone");

	Params::UFortScoutDroneControllingComponent_GetControlledDrone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerShortInteract
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UFortScoutDroneControllingComponent::BP_OnPlayerShortInteract()
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnPlayerShortInteract");

	Params::UFortScoutDroneControllingComponent_BP_OnPlayerShortInteract_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerInteractLongUseChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInteracting                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLongUseInteractionCompleted                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::BP_OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted)
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnPlayerInteractLongUseChanged");

	Params::UFortScoutDroneControllingComponent_BP_OnPlayerInteractLongUseChanged_Params Parms;

	Parms.bInteracting = bInteracting;
	Parms.bLongUseInteractionCompleted = bLongUseInteractionCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDroneDestroyed
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                DismissalReason                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::BP_OnDroneDestroyed(struct FGameplayTag& DismissalReason)
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnDroneDestroyed");

	Params::UFortScoutDroneControllingComponent_BP_OnDroneDestroyed_Params Parms;

	Parms.DismissalReason = DismissalReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDismissalStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInstantDismissal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                DismissalReason                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::BP_OnDismissalStarted(bool bInstantDismissal, const struct FGameplayTag& DismissalReason)
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnDismissalStarted");

	Params::UFortScoutDroneControllingComponent_BP_OnDismissalStarted_Params Parms;

	Parms.bInstantDismissal = bInstantDismissal;
	Parms.DismissalReason = DismissalReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDestructionStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInstantDestruction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                DismissalReason                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDroneControllingComponent::BP_OnDestructionStarted(bool bInstantDestruction, const struct FGameplayTag& DismissalReason)
{
	static auto Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnDestructionStarted");

	Params::UFortScoutDroneControllingComponent_BP_OnDestructionStarted_Params Parms;

	Parms.bInstantDestruction = bInstantDestruction;
	Parms.DismissalReason = DismissalReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.ServerUpdateItemAttachment
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults)
// Parameters:
// struct FVector                     CalculatedItemOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDronePickupManager::ServerUpdateItemAttachment(const struct FVector& CalculatedItemOffset)
{
	static auto Func = Class->GetFunction("FortScoutDronePickupManager", "ServerUpdateItemAttachment");

	Params::UFortScoutDronePickupManager_ServerUpdateItemAttachment_Params Parms;

	Parms.CalculatedItemOffset = CalculatedItemOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.ServerDropAttachedActors
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UFortScoutDronePickupManager::ServerDropAttachedActors()
{
	static auto Func = Class->GetFunction("FortScoutDronePickupManager", "ServerDropAttachedActors");

	Params::UFortScoutDronePickupManager_ServerDropAttachedActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.OnRep_AttachedTargets
// (Final, Native, Private)
// Parameters:

void UFortScoutDronePickupManager::OnRep_AttachedTargets()
{
	static auto Func = Class->GetFunction("FortScoutDronePickupManager", "OnRep_AttachedTargets");

	Params::UFortScoutDronePickupManager_OnRep_AttachedTargets_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.OnPawnDBNOStateChanged
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDBNO                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDronePickupManager::OnPawnDBNOStateChanged(class UFortPawn* Pawn, bool bIsDBNO)
{
	static auto Func = Class->GetFunction("FortScoutDronePickupManager", "OnPawnDBNOStateChanged");

	Params::UFortScoutDronePickupManager_OnPawnDBNOStateChanged_Params Parms;

	Parms.Pawn = Pawn;
	Parms.bIsDBNO = bIsDBNO;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.OnAttachedPawnDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortScoutDronePickupManager::OnAttachedPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortScoutDronePickupManager", "OnAttachedPawnDied");

	Params::UFortScoutDronePickupManager_OnAttachedPawnDied_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.HasAPawnAtached
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortScoutDronePickupManager::HasAPawnAtached()
{
	static auto Func = Class->GetFunction("FortScoutDronePickupManager", "HasAPawnAtached");

	Params::UFortScoutDronePickupManager_HasAPawnAtached_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.HasAnyAttachedActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortScoutDronePickupManager::HasAnyAttachedActors()
{
	static auto Func = Class->GetFunction("FortScoutDronePickupManager", "HasAnyAttachedActors");

	Params::UFortScoutDronePickupManager_HasAnyAttachedActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsDetached
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UFortScoutDronePickupManager::BP_OnActorsDetached()
{
	static auto Func = Class->GetFunction("FortScoutDronePickupManager", "BP_OnActorsDetached");

	Params::UFortScoutDronePickupManager_BP_OnActorsDetached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsAttached
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UFortScoutDronePickupManager::BP_OnActorsAttached()
{
	static auto Func = Class->GetFunction("FortScoutDronePickupManager", "BP_OnActorsAttached");

	Params::UFortScoutDronePickupManager_BP_OnActorsAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
