#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ClamberingCodeRuntime.ClamberingComponent.UnregisterMutatorUpdatedDelegate
// (Final, Native, Protected)
// Parameters:

void UClamberingComponent::UnregisterMutatorUpdatedDelegate()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "UnregisterMutatorUpdatedDelegate");

	Params::UClamberingComponent_UnregisterMutatorUpdatedDelegate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.ShouldShowClamberIndicator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UClamberingComponent::ShouldShowClamberIndicator()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "ShouldShowClamberIndicator");

	Params::UClamberingComponent_ShouldShowClamberIndicator_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClamberingCodeRuntime.ClamberingComponent.SetTutorialModeEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::SetTutorialModeEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "SetTutorialModeEnabled");

	Params::UClamberingComponent_SetTutorialModeEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.ServerStartClambering
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FReplicatedClamberingTargetingDataInReplicatedTargetingData                                        (ConstParm, Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// double                             ClientLastTeleportTime                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::ServerStartClambering(const struct FReplicatedClamberingTargetingData& InReplicatedTargetingData, double ClientLastTeleportTime)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "ServerStartClambering");

	Params::UClamberingComponent_ServerStartClambering_Params Parms;

	Parms.InReplicatedTargetingData = InReplicatedTargetingData;
	Parms.ClientLastTeleportTime = ClientLastTeleportTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.RegisterMutatorUpdatedDelegate
// (Final, Native, Protected)
// Parameters:
// class APawn*                       AffectedPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "RegisterMutatorUpdatedDelegate");

	Params::UClamberingComponent_RegisterMutatorUpdatedDelegate_Params Parms;

	Parms.AffectedPawn = AffectedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedTargetingData
// (Final, Native, Protected)
// Parameters:

void UClamberingComponent::OnRep_ReplicatedTargetingData()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "OnRep_ReplicatedTargetingData");

	Params::UClamberingComponent_OnRep_ReplicatedTargetingData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedLastTeleportTime
// (Final, Native, Protected)
// Parameters:

void UClamberingComponent::OnRep_ReplicatedLastTeleportTime()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "OnRep_ReplicatedLastTeleportTime");

	Params::UClamberingComponent_OnRep_ReplicatedLastTeleportTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedClamberingState
// (Final, Native, Protected)
// Parameters:

void UClamberingComponent::OnRep_ReplicatedClamberingState()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "OnRep_ReplicatedClamberingState");

	Params::UClamberingComponent_OnRep_ReplicatedClamberingState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.OnPlayerStatePawnSet
// (Final, Native, Protected)
// Parameters:
// class APlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "OnPlayerStatePawnSet");

	Params::UClamberingComponent_OnPlayerStatePawnSet_Params Parms;

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.OnMutatorUpdated
// (Final, Native, Protected)
// Parameters:

void UClamberingComponent::OnMutatorUpdated()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "OnMutatorUpdated");

	Params::UClamberingComponent_OnMutatorUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.NetMulticast_ClamberingLedgeFailed
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// enum class EClamberingFailedReason FailedReason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EClamberingState        FailedState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::NetMulticast_ClamberingLedgeFailed(enum class EClamberingFailedReason FailedReason, enum class EClamberingState FailedState)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "NetMulticast_ClamberingLedgeFailed");

	Params::UClamberingComponent_NetMulticast_ClamberingLedgeFailed_Params Parms;

	Parms.FailedReason = FailedReason;
	Parms.FailedState = FailedState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.IsTutorialModeEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UClamberingComponent::IsTutorialModeEnabled()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "IsTutorialModeEnabled");

	Params::UClamberingComponent_IsTutorialModeEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClamberingCodeRuntime.ClamberingComponent.IsClamberingEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UClamberingComponent::IsClamberingEnabled()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "IsClamberingEnabled");

	Params::UClamberingComponent_IsClamberingEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClamberingCodeRuntime.ClamberingComponent.IsAutoClamberingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UClamberingComponent::IsAutoClamberingEnabled()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "IsAutoClamberingEnabled");

	Params::UClamberingComponent_IsAutoClamberingEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataValid
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FClamberingTargetingData    TargetingData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UClamberingComponent::HandleTargetingDataValid(struct FClamberingTargetingData& TargetingData)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleTargetingDataValid");

	Params::UClamberingComponent_HandleTargetingDataValid_Params Parms;

	Parms.TargetingData = TargetingData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataInvalid
// (Event, Protected, BlueprintEvent)
// Parameters:

void UClamberingComponent::HandleTargetingDataInvalid()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleTargetingDataInvalid");

	Params::UClamberingComponent_HandleTargetingDataInvalid_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorHealthChanged
// (Final, Native, Protected)
// Parameters:

void UClamberingComponent::HandleTargetActorHealthChanged()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleTargetActorHealthChanged");

	Params::UClamberingComponent_HandleTargetActorHealthChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::HandleTargetActorDestroyed(class AActor* Actor)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleTargetActorDestroyed");

	Params::UClamberingComponent_HandleTargetActorDestroyed_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerTeleported
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AFortPawn*                   TeleportedOwner                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::HandleOwnerTeleported(class AFortPawn* TeleportedOwner)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleOwnerTeleported");

	Params::UClamberingComponent_HandleOwnerTeleported_Params Parms;

	Parms.TeleportedOwner = TeleportedOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerMovementModeChanged
// (Final, Native, Protected)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::HandleOwnerMovementModeChanged(class ACharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleOwnerMovementModeChanged");

	Params::UClamberingComponent_HandleOwnerMovementModeChanged_Params Parms;

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerJumpInput
// (Final, Native, Protected)
// Parameters:
// bool                               bPressed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::HandleOwnerJumpInput(bool bPressed)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleOwnerJumpInput");

	Params::UClamberingComponent_HandleOwnerJumpInput_Params Parms;

	Parms.bPressed = bPressed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDied
// (Final, Native, Protected)
// Parameters:
// class AFortPawn*                   DeadPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::HandleOwnerDied(class AFortPawn* DeadPawn)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleOwnerDied");

	Params::UClamberingComponent_HandleOwnerDied_Params Parms;

	Parms.DeadPawn = DeadPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDBNO
// (Final, Native, Protected)
// Parameters:

void UClamberingComponent::HandleOwnerDBNO()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleOwnerDBNO");

	Params::UClamberingComponent_HandleOwnerDBNO_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInvalidated
// (Final, Native, Protected)
// Parameters:

void UClamberingComponent::HandleOwnerASCInvalidated()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleOwnerASCInvalidated");

	Params::UClamberingComponent_HandleOwnerASCInvalidated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInitialized
// (Final, Native, Protected)
// Parameters:
// class UFortAbilitySystemComponent* AbilitySystemComponent                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             AffectedPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::HandleOwnerASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleOwnerASCInitialized");

	Params::UClamberingComponent_HandleOwnerASCInitialized_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.AffectedPawn = AffectedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetOutOfActivationRange
// (Event, Protected, BlueprintEvent)
// Parameters:

void UClamberingComponent::HandleClamberingTargetOutOfActivationRange()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleClamberingTargetOutOfActivationRange");

	Params::UClamberingComponent_HandleClamberingTargetOutOfActivationRange_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetInActivationRange
// (Event, Protected, BlueprintEvent)
// Parameters:

void UClamberingComponent::HandleClamberingTargetInActivationRange()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "HandleClamberingTargetInActivationRange");

	Params::UClamberingComponent_HandleClamberingTargetInActivationRange_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ClamberingCodeRuntime.ClamberingComponent.GetAnimMontage
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              OutPlayRate                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimMontage* UClamberingComponent::GetAnimMontage(float* OutPlayRate)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "GetAnimMontage");

	Params::UClamberingComponent_GetAnimMontage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPlayRate != nullptr)
		*OutPlayRate = Parms.OutPlayRate;

	return Parms.ReturnValue;

}


// Function ClamberingCodeRuntime.ClamberingComponent.DrawDebugHUD
// (Final, Native, Protected)
// Parameters:
// class AHUD*                        HUD                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvas*                     Canvas                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "DrawDebugHUD");

	Params::UClamberingComponent_DrawDebugHUD_Params Parms;

	Parms.HUD = HUD;
	Parms.Canvas = Canvas;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeEnabled
// (Event, Protected, BlueprintEvent, Const)
// Parameters:

void UClamberingComponent::BP_TutorialModeEnabled()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "BP_TutorialModeEnabled");

	Params::UClamberingComponent_BP_TutorialModeEnabled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeDisabled
// (Event, Protected, BlueprintEvent, Const)
// Parameters:

void UClamberingComponent::BP_TutorialModeDisabled()
{
	static auto Func = Class->GetFunction("ClamberingComponent", "BP_TutorialModeDisabled");

	Params::UClamberingComponent_BP_TutorialModeDisabled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ClamberingCodeRuntime.ClamberingComponent.BP_IsValidTargetActor
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class AActor*                      TargetActor                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidTargetActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::BP_IsValidTargetActor(class AActor* TargetActor, bool* bIsValidTargetActor)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "BP_IsValidTargetActor");

	Params::UClamberingComponent_BP_IsValidTargetActor_Params Parms;

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsValidTargetActor != nullptr)
		*bIsValidTargetActor = Parms.bIsValidTargetActor;

}


// Function ClamberingCodeRuntime.ClamberingComponent.BP_HandleSynchedActionStarted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSynchedActionInfo          SynchedActionInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UClamberingComponent::BP_HandleSynchedActionStarted(struct FSynchedActionInfo& SynchedActionInfo)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "BP_HandleSynchedActionStarted");

	Params::UClamberingComponent_BP_HandleSynchedActionStarted_Params Parms;

	Parms.SynchedActionInfo = SynchedActionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClamberingCodeRuntime.ClamberingComponent.BP_HandleClamberingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EClamberingState        OldClamberingState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EClamberingState        NewClamberingState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::BP_HandleClamberingStateChanged(enum class EClamberingState OldClamberingState, enum class EClamberingState NewClamberingState)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "BP_HandleClamberingStateChanged");

	Params::UClamberingComponent_BP_HandleClamberingStateChanged_Params Parms;

	Parms.OldClamberingState = OldClamberingState;
	Parms.NewClamberingState = NewClamberingState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClamberingCodeRuntime.ClamberingComponent.BP_CanStartTargeting
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// bool                               bCanStartTargeting                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::BP_CanStartTargeting(bool* bCanStartTargeting)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "BP_CanStartTargeting");

	Params::UClamberingComponent_BP_CanStartTargeting_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (bCanStartTargeting != nullptr)
		*bCanStartTargeting = Parms.bCanStartTargeting;

}


// Function ClamberingCodeRuntime.ClamberingComponent.BP_CanStartClambering
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// bool                               bCanStartClambering                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClamberingComponent::BP_CanStartClambering(bool* bCanStartClambering)
{
	static auto Func = Class->GetFunction("ClamberingComponent", "BP_CanStartClambering");

	Params::UClamberingComponent_BP_CanStartClambering_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (bCanStartClambering != nullptr)
		*bCanStartClambering = Parms.bCanStartClambering;

}


// Function ClamberingCodeRuntime.ClamberingLibrary.PerformClamberingTargeting
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ACharacter*                  Character                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FClamberingTargetingData    OutTargetingData                                                 (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UClamberingLibrary::PerformClamberingTargeting(class ACharacter* Character, struct FClamberingTargetingData* OutTargetingData)
{
	static auto Func = Class->GetFunction("ClamberingLibrary", "PerformClamberingTargeting");

	Params::UClamberingLibrary_PerformClamberingTargeting_Params Parms;

	Parms.Character = Character;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutTargetingData != nullptr)
		*OutTargetingData = Parms.OutTargetingData;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
