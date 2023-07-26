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


// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.SetHighlightedChoiceIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              NewChoiceIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAugmentSelectionToolAbility::SetHighlightedChoiceIndex(int32 NewChoiceIndex)
{
	static auto Func = Class->GetFunction("FortAugmentSelectionToolAbility", "SetHighlightedChoiceIndex");

	Params::UFortAugmentSelectionToolAbility_SetHighlightedChoiceIndex_Params Parms;

	Parms.NewChoiceIndex = NewChoiceIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnSelectedChoiceIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAugmentSelectionToolAbility::OnSelectedChoiceIndex(int32 ChoiceIndex)
{
	static auto Func = Class->GetFunction("FortAugmentSelectionToolAbility", "OnSelectedChoiceIndex");

	Params::UFortAugmentSelectionToolAbility_OnSelectedChoiceIndex_Params Parms;

	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnRerollPressedAndCannotAfford
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortAugmentSelectionToolAbility::OnRerollPressedAndCannotAfford()
{
	static auto Func = Class->GetFunction("FortAugmentSelectionToolAbility", "OnRerollPressedAndCannotAfford");

	Params::UFortAugmentSelectionToolAbility_OnRerollPressedAndCannotAfford_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHoldRerollInputChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsPressed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCompletedHold                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAugmentSelectionToolAbility::OnHoldRerollInputChanged(bool bIsPressed, bool bCompletedHold)
{
	static auto Func = Class->GetFunction("FortAugmentSelectionToolAbility", "OnHoldRerollInputChanged");

	Params::UFortAugmentSelectionToolAbility_OnHoldRerollInputChanged_Params Parms;

	Parms.bIsPressed = bIsPressed;
	Parms.bCompletedHold = bCompletedHold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHighlightSelectionUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewHighlightedChoiceIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAugmentSelectionToolAbility::OnHighlightSelectionUpdated(int32 NewHighlightedChoiceIndex)
{
	static auto Func = Class->GetFunction("FortAugmentSelectionToolAbility", "OnHighlightSelectionUpdated");

	Params::UFortAugmentSelectionToolAbility_OnHighlightSelectionUpdated_Params Parms;

	Parms.NewHighlightedChoiceIndex = NewHighlightedChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryIncrementUnlockRollCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortBattleRoyalePlayerAugmentSystem::TryIncrementUnlockRollCount()
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "TryIncrementUnlockRollCount");

	Params::UFortBattleRoyalePlayerAugmentSystem_TryIncrementUnlockRollCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.TryClaimUnlock
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FFortAugmentPassiveUnlockResultReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFortAugmentPassiveUnlockResult UFortBattleRoyalePlayerAugmentSystem::TryClaimUnlock()
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "TryClaimUnlock");

	Params::UFortBattleRoyalePlayerAugmentSystem_TryClaimUnlock_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ResetMatchAugments
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBattleRoyalePlayerAugmentSystem::ResetMatchAugments()
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "ResetMatchAugments");

	Params::UFortBattleRoyalePlayerAugmentSystem_ResetMatchAugments_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnServerAugmentGrantTimestampReplicated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ServerGrantStartTimestamp                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattleRoyalePlayerAugmentSystem::OnServerAugmentGrantTimestampReplicated(float ServerGrantStartTimestamp)
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "OnServerAugmentGrantTimestampReplicated");

	Params::UFortBattleRoyalePlayerAugmentSystem_OnServerAugmentGrantTimestampReplicated_Params Parms;

	Parms.ServerGrantStartTimestamp = ServerGrantStartTimestamp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnRep_ServerGrantingStartedTimestamp
// (Final, Native, Private)
// Parameters:

void UFortBattleRoyalePlayerAugmentSystem::OnRep_ServerGrantingStartedTimestamp()
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "OnRep_ServerGrantingStartedTimestamp");

	Params::UFortBattleRoyalePlayerAugmentSystem_OnRep_ServerGrantingStartedTimestamp_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnPossedPawnChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattleRoyalePlayerAugmentSystem::OnPossedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "OnPossedPawnChanged");

	Params::UFortBattleRoyalePlayerAugmentSystem_OnPossedPawnChanged_Params Parms;

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnMatchAugmentsReset
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattleRoyalePlayerAugmentSystem::OnMatchAugmentsReset()
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "OnMatchAugmentsReset");

	Params::UFortBattleRoyalePlayerAugmentSystem_OnMatchAugmentsReset_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortBattleRoyalePlayerAugmentSystem::OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature");

	Params::UFortBattleRoyalePlayerAugmentSystem_OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.HandlePossessedPawnChanged
// (Final, Native, Protected)
// Parameters:
// class APawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattleRoyalePlayerAugmentSystem::HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "HandlePossessedPawnChanged");

	Params::UFortBattleRoyalePlayerAugmentSystem_HandlePossessedPawnChanged_Params Parms;

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.GetServerGrantingStartedTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortBattleRoyalePlayerAugmentSystem::GetServerGrantingStartedTimestamp()
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "GetServerGrantingStartedTimestamp");

	Params::UFortBattleRoyalePlayerAugmentSystem_GetServerGrantingStartedTimestamp_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.ChooseUnlockFromList
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerAugmentLockStatus>LockedList                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFortAugmentPassiveUnlockResultReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFortAugmentPassiveUnlockResult UFortBattleRoyalePlayerAugmentSystem::ChooseUnlockFromList(TArray<struct FPlayerAugmentLockStatus>& LockedList)
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "ChooseUnlockFromList");

	Params::UFortBattleRoyalePlayerAugmentSystem_ChooseUnlockFromList_Params Parms;

	Parms.LockedList = LockedList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentPlayerPawn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EFortBRAugmentSystemCastResultOutExec                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             OutFortPlayerPawn                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattleRoyalePlayerAugmentSystem::BP_GetAugmentPlayerPawn(enum class EFortBRAugmentSystemCastResult* OutExec, class AFortPlayerPawn** OutFortPlayerPawn)
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "BP_GetAugmentPlayerPawn");

	Params::UFortBattleRoyalePlayerAugmentSystem_BP_GetAugmentPlayerPawn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutExec != nullptr)
		*OutExec = Parms.OutExec;

	if (OutFortPlayerPawn != nullptr)
		*OutFortPlayerPawn = Parms.OutFortPlayerPawn;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BP_GetAugmentController
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EFortBRAugmentSystemCastResultOutExec                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 OutController                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattleRoyalePlayerAugmentSystem::BP_GetAugmentController(enum class EFortBRAugmentSystemCastResult* OutExec, class AController** OutController)
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "BP_GetAugmentController");

	Params::UFortBattleRoyalePlayerAugmentSystem_BP_GetAugmentController_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutExec != nullptr)
		*OutExec = Parms.OutExec;

	if (OutController != nullptr)
		*OutController = Parms.OutController;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.BlueprintAugmentLog
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBattleRoyaleBPAugmentLogVerbosityVerbosity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutonomousProxyOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattleRoyalePlayerAugmentSystem::BlueprintAugmentLog(const class FString& Message, enum class EBattleRoyaleBPAugmentLogVerbosity Verbosity, bool bAutonomousProxyOnly)
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "BlueprintAugmentLog");

	Params::UFortBattleRoyalePlayerAugmentSystem_BlueprintAugmentLog_Params Parms;

	Parms.Message = Message;
	Parms.Verbosity = Verbosity;
	Parms.bAutonomousProxyOnly = bAutonomousProxyOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem.AuthoritySetServerGrantingStartedTimestamp
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              ServerTimestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattleRoyalePlayerAugmentSystem::AuthoritySetServerGrantingStartedTimestamp(float ServerTimestamp)
{
	static auto Func = Class->GetFunction("FortBattleRoyalePlayerAugmentSystem", "AuthoritySetServerGrantingStartedTimestamp");

	Params::UFortBattleRoyalePlayerAugmentSystem_AuthoritySetServerGrantingStartedTimestamp_Params Parms;

	Parms.ServerTimestamp = ServerTimestamp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.HandleBindCompletionTrigger
// (Final, Native, Protected)
// Parameters:
// class AFortPlayerControllerZone*   FortPCZone                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_MultipleAugmentsQueued::HandleBindCompletionTrigger(class AFortPlayerControllerZone* FortPCZone)
{
	static auto Func = Class->GetFunction("FortContextualTutorial_MultipleAugmentsQueued", "HandleBindCompletionTrigger");

	Params::UFortContextualTutorial_MultipleAugmentsQueued_HandleBindCompletionTrigger_Params Parms;

	Parms.FortPCZone = FortPCZone;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.HandleBindActivationTrigger
// (Final, Native, Protected)
// Parameters:
// class AFortPlayerControllerZone*   FortPCZone                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_MultipleAugmentsQueued::HandleBindActivationTrigger(class AFortPlayerControllerZone* FortPCZone)
{
	static auto Func = Class->GetFunction("FortContextualTutorial_MultipleAugmentsQueued", "HandleBindActivationTrigger");

	Params::UFortContextualTutorial_MultipleAugmentsQueued_HandleBindActivationTrigger_Params Parms;

	Parms.FortPCZone = FortPCZone;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.CompletionEventCallback
// (Final, Native, Protected)
// Parameters:
// bool                               bIsOpened                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bViewingAugmentInventory                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_MultipleAugmentsQueued::CompletionEventCallback(bool bIsOpened, bool bViewingAugmentInventory)
{
	static auto Func = Class->GetFunction("FortContextualTutorial_MultipleAugmentsQueued", "CompletionEventCallback");

	Params::UFortContextualTutorial_MultipleAugmentsQueued_CompletionEventCallback_Params Parms;

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued.ActivationEventCallback
// (Final, Native, Protected)
// Parameters:
// int8                               NumPendingAugmentsToGrant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortContextualTutorial_MultipleAugmentsQueued::ActivationEventCallback(int8 NumPendingAugmentsToGrant)
{
	static auto Func = Class->GetFunction("FortContextualTutorial_MultipleAugmentsQueued", "ActivationEventCallback");

	Params::UFortContextualTutorial_MultipleAugmentsQueued_ActivationEventCallback_Params Parms;

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerRequestReroll
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::ServerRequestReroll()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "ServerRequestReroll");

	Params::UFortControllerComponent_AugmentGrantingSystem_ServerRequestReroll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerGrantAugment
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UFortPlayerAugmentItemDefinition*ChosenAugmentDef                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::ServerGrantAugment(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "ServerGrantAugment");

	Params::UFortControllerComponent_AugmentGrantingSystem_ServerGrantAugment_Params Parms;

	Parms.ChosenAugmentDef = ChosenAugmentDef;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnSelectedAugmentForGrantDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortPlayerAugmentItemDefinition*SelectedAugment                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::OnSelectedAugmentForGrantDelegate__DelegateSignature(class UFortPlayerAugmentItemDefinition* SelectedAugment)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnSelectedAugmentForGrantDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnSelectedAugmentForGrantDelegate__DelegateSignature_Params Parms;

	Parms.SelectedAugment = SelectedAugment;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int8                               NumPendingAugmentsToGrant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature(int8 NumPendingAugmentsToGrant)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature_Params Parms;

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_SelectorItemEntry
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::OnRep_SelectorItemEntry()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_SelectorItemEntry");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnRep_SelectorItemEntry_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedNumPendingAugmentsToGrant
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::OnRep_ReplicatedNumPendingAugmentsToGrant()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_ReplicatedNumPendingAugmentsToGrant");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnRep_ReplicatedNumPendingAugmentsToGrant_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedAugmentChoices
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::OnRep_ReplicatedAugmentChoices()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_ReplicatedAugmentChoices");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnRep_ReplicatedAugmentChoices_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumLockedSelectionChoices
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::OnRep_NumLockedSelectionChoices()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_NumLockedSelectionChoices");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnRep_NumLockedSelectionChoices_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_NumFreeRerolls
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::OnRep_NumFreeRerolls()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnRep_NumFreeRerolls");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnRep_NumFreeRerolls_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              NewNumFreeRerolls                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature(int32 NewNumFreeRerolls)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature_Params Parms;

	Parms.NewNumFreeRerolls = NewNumFreeRerolls;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnMinigameStarted
// (Final, Native, Protected)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::OnMinigameStarted()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnMinigameStarted");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnMinigameStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalUnequipAugmentSelectionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::OnLocalUnequipAugmentSelectionPressed()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnLocalUnequipAugmentSelectionPressed");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnLocalUnequipAugmentSelectionPressed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalRerollDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::OnLocalRerollDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnLocalRerollDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnLocalRerollDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalEquipAugmentSelectionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::OnLocalEquipAugmentSelectionPressed()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnLocalEquipAugmentSelectionPressed");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnLocalEquipAugmentSelectionPressed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnFreeRerollsUpdatedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              NewNumFreeRerolls                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::OnFreeRerollsUpdatedDelegate__DelegateSignature(int32 NewNumFreeRerolls)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnFreeRerollsUpdatedDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnFreeRerollsUpdatedDelegate__DelegateSignature_Params Parms;

	Parms.NewNumFreeRerolls = NewNumFreeRerolls;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortControllerComponent_AugmentGrantingSystem*GrantingComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature_Params Parms;

	Parms.GrantingComponent = GrantingComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UFortPlayerAugmentItemDefinition*>IgnoreInRoll                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature(TArray<class UFortPlayerAugmentItemDefinition*>& IgnoreInRoll)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentGrantingSystem_OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature_Params Parms;

	Parms.IgnoreInRoll = IgnoreInRoll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionItemEquipped
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_AugmentGrantingSystem::IsSelectionItemEquipped()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "IsSelectionItemEquipped");

	Params::UFortControllerComponent_AugmentGrantingSystem_IsSelectionItemEquipped_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.IsSelectionChoicesLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_AugmentGrantingSystem::IsSelectionChoicesLocked()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "IsSelectionChoicesLocked");

	Params::UFortControllerComponent_AugmentGrantingSystem_IsSelectionChoicesLocked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleUnHolsteredEvent
// (Final, Native, Protected)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::HandleUnHolsteredEvent()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleUnHolsteredEvent");

	Params::UFortControllerComponent_AugmentGrantingSystem_HandleUnHolsteredEvent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleToggleFullscreenMap
// (Final, Native, Private)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::HandleToggleFullscreenMap(bool bVisible)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleToggleFullscreenMap");

	Params::UFortControllerComponent_AugmentGrantingSystem_HandleToggleFullscreenMap_Params Parms;

	Parms.bVisible = bVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandlePossessedPawnChanged
// (Final, Native, Private)
// Parameters:
// class APawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandlePossessedPawnChanged");

	Params::UFortControllerComponent_AugmentGrantingSystem_HandlePossessedPawnChanged_Params Parms;

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleHolsteredEvent
// (Final, Native, Protected)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::HandleHolsteredEvent()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleHolsteredEvent");

	Params::UFortControllerComponent_AugmentGrantingSystem_HandleHolsteredEvent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleGamePhaseChanged
// (Final, Native, Protected)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::HandleGamePhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleGamePhaseChanged");

	Params::UFortControllerComponent_AugmentGrantingSystem_HandleGamePhaseChanged_Params Parms;

	Parms.GamePhase = GamePhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleChangedBuildMode
// (Final, Native, Protected)
// Parameters:
// bool                               bEnteredBuildMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::HandleChangedBuildMode(bool bEnteredBuildMode)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "HandleChangedBuildMode");

	Params::UFortControllerComponent_AugmentGrantingSystem_HandleChangedBuildMode_Params Parms;

	Parms.bEnteredBuildMode = bEnteredBuildMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetPendingAugmentsToGrant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortControllerComponent_AugmentGrantingSystem::GetPendingAugmentsToGrant()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "GetPendingAugmentsToGrant");

	Params::UFortControllerComponent_AugmentGrantingSystem_GetPendingAugmentsToGrant_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetNumFreeRerolls
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortControllerComponent_AugmentGrantingSystem::GetNumFreeRerolls()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "GetNumFreeRerolls");

	Params::UFortControllerComponent_AugmentGrantingSystem_GetNumFreeRerolls_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAvailableAugmentsToGrant
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPlayerAugmentChoiceDatum>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FPlayerAugmentChoiceDatum> UFortControllerComponent_AugmentGrantingSystem::GetAvailableAugmentsToGrant()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "GetAvailableAugmentsToGrant");

	Params::UFortControllerComponent_AugmentGrantingSystem_GetAvailableAugmentsToGrant_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAugmentGrantingComponentFromController
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortControllerComponent_AugmentGrantingSystem*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortControllerComponent_AugmentGrantingSystem* UFortControllerComponent_AugmentGrantingSystem::GetAugmentGrantingComponentFromController(class AController* Controller)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "GetAugmentGrantingComponentFromController");

	Params::UFortControllerComponent_AugmentGrantingSystem_GetAugmentGrantingComponentFromController_Params Parms;

	Parms.Controller = Controller;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ClientSelectAvailableAugmentToGrant
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerAugmentItemDefinition*ChosenAugmentDef                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::ClientSelectAvailableAugmentToGrant(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "ClientSelectAvailableAugmentToGrant");

	Params::UFortControllerComponent_AugmentGrantingSystem_ClientSelectAvailableAugmentToGrant_Params Parms;

	Parms.ChosenAugmentDef = ChosenAugmentDef;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanSelectAugmentChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bCanSelectAugment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::CanSelectAugmentChangedDelegate__DelegateSignature(bool bCanSelectAugment)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "CanSelectAugmentChangedDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentGrantingSystem_CanSelectAugmentChangedDelegate__DelegateSignature_Params Parms;

	Parms.bCanSelectAugment = bCanSelectAugment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanReroll
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_AugmentGrantingSystem::CanReroll()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "CanReroll");

	Params::UFortControllerComponent_AugmentGrantingSystem_CanReroll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthoritySetAvailableAugmentChoices
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPlayerAugmentChoiceDatum>AvailableAugmentsToGrant                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::AuthoritySetAvailableAugmentChoices(TArray<struct FPlayerAugmentChoiceDatum>& AvailableAugmentsToGrant)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthoritySetAvailableAugmentChoices");

	Params::UFortControllerComponent_AugmentGrantingSystem_AuthoritySetAvailableAugmentChoices_Params Parms;

	Parms.AvailableAugmentsToGrant = AvailableAugmentsToGrant;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityResetAugmentData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::AuthorityResetAugmentData()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityResetAugmentData");

	Params::UFortControllerComponent_AugmentGrantingSystem_AuthorityResetAugmentData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityRequestSelectionToolItemGrant
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::AuthorityRequestSelectionToolItemGrant(class UObject* Instigator)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityRequestSelectionToolItemGrant");

	Params::UFortControllerComponent_AugmentGrantingSystem_AuthorityRequestSelectionToolItemGrant_Params Parms;

	Parms.Instigator = Instigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityIncrementLockedSelectionChoices
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumLocksToAdd                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentGrantingSystem::AuthorityIncrementLockedSelectionChoices(int32 NumLocksToAdd)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityIncrementLockedSelectionChoices");

	Params::UFortControllerComponent_AugmentGrantingSystem_AuthorityIncrementLockedSelectionChoices_Params Parms;

	Parms.NumLocksToAdd = NumLocksToAdd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantNewAugment
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::AuthorityGrantNewAugment()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityGrantNewAugment");

	Params::UFortControllerComponent_AugmentGrantingSystem_AuthorityGrantNewAugment_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantFreeReroll
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortControllerComponent_AugmentGrantingSystem::AuthorityGrantFreeReroll()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentGrantingSystem", "AuthorityGrantFreeReroll");

	Params::UFortControllerComponent_AugmentGrantingSystem_AuthorityGrantFreeReroll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.AugmentFuctionLibrary.GiveAugmentWithPreventDropping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerAugmentItemDefinition*ChosenAugmentDef                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FInterfaceProperty_                InventoryOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWorldItem*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItem* UAugmentFuctionLibrary::GiveAugmentWithPreventDropping(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef, FInterfaceProperty_ InventoryOwner)
{
	static auto Func = Class->GetFunction("AugmentFuctionLibrary", "GiveAugmentWithPreventDropping");

	Params::UAugmentFuctionLibrary_GiveAugmentWithPreventDropping_Params Parms;

	Parms.ChosenAugmentDef = ChosenAugmentDef;
	Parms.InventoryOwner = InventoryOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.UpdatedTimerProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimePercentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentUIEvents::UpdatedTimerProgress(float TimeRemaining, float TimePercentage)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "UpdatedTimerProgress");

	Params::UFortControllerComponent_AugmentUIEvents_UpdatedTimerProgress_Params Parms;

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.SetNumGrantableAugmentsForPlaylist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewNumRounds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentUIEvents::SetNumGrantableAugmentsForPlaylist(int32 NewNumRounds)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "SetNumGrantableAugmentsForPlaylist");

	Params::UFortControllerComponent_AugmentUIEvents_SetNumGrantableAugmentsForPlaylist_Params Parms;

	Parms.NewNumRounds = NewNumRounds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnGrantTimerProgressUpdatedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimePercentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentUIEvents::OnGrantTimerProgressUpdatedDelegate__DelegateSignature(float TimeRemaining, float TimePercentage)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "OnGrantTimerProgressUpdatedDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentUIEvents_OnGrantTimerProgressUpdatedDelegate__DelegateSignature_Params Parms;

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentToolViewSwapDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               ViewingInventoryAugments                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentUIEvents::OnAugmentToolViewSwapDelegate__DelegateSignature(bool ViewingInventoryAugments)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "OnAugmentToolViewSwapDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentUIEvents_OnAugmentToolViewSwapDelegate__DelegateSignature_Params Parms;

	Parms.ViewingInventoryAugments = ViewingInventoryAugments;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              ChoiceIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentUIEvents::OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature(int32 ChoiceIndex)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentUIEvents_OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature_Params Parms;

	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bIsOpened                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bViewingInventory                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentUIEvents::OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature(bool bIsOpened, bool bViewingInventory)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentUIEvents_OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature_Params Parms;

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingInventory = bViewingInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              ChoiceIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentUIEvents::OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature(int32 ChoiceIndex)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentUIEvents_OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature_Params Parms;

	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortControllerComponent_AugmentUIEvents::OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentUIEvents_OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortControllerComponent_AugmentUIEvents::OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentUIEvents_OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersReset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortControllerComponent_AugmentUIEvents::NotifyGrantingTimersReset()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "NotifyGrantingTimersReset");

	Params::UFortControllerComponent_AugmentUIEvents_NotifyGrantingTimersReset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortControllerComponent_AugmentUIEvents::NotifyGrantingTimersFinished()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "NotifyGrantingTimersFinished");

	Params::UFortControllerComponent_AugmentUIEvents_NotifyGrantingTimersFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.HandleAugmentSelectorOpenedStatusChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsOpened                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bViewingInventory                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentUIEvents::HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "HandleAugmentSelectorOpenedStatusChanged");

	Params::UFortControllerComponent_AugmentUIEvents_HandleAugmentSelectorOpenedStatusChanged_Params Parms;

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingInventory = bViewingInventory;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.AugmentHoldInputRerollChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EAugmentHoldInputRerollStateHoldState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HoldDurationSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AugmentUIEvents::AugmentHoldInputRerollChangedDelegate__DelegateSignature(enum class EAugmentHoldInputRerollState HoldState, float HoldDurationSeconds)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AugmentUIEvents", "AugmentHoldInputRerollChangedDelegate__DelegateSignature");

	Params::UFortControllerComponent_AugmentUIEvents_AugmentHoldInputRerollChangedDelegate__DelegateSignature_Params Parms;

	Parms.HoldState = HoldState;
	Parms.HoldDurationSeconds = HoldDurationSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleMcpProfilesInitialized
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_PlayerAugmentPersistence::HandleMcpProfilesInitialized()
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "HandleMcpProfilesInitialized");

	Params::UFortControllerComponent_PlayerAugmentPersistence_HandleMcpProfilesInitialized_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataTableLoaded
// (Final, Native, Private)
// Parameters:
// TSoftObjectPtr<class UFortCollectionsDataTable>CollectionsDataTableSoftPtr                                      (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_PlayerAugmentPersistence::HandleCollectionDataTableLoaded(TSoftObjectPtr<class UFortCollectionsDataTable> CollectionsDataTableSoftPtr)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "HandleCollectionDataTableLoaded");

	Params::UFortControllerComponent_PlayerAugmentPersistence_HandleCollectionDataTableLoaded_Params Parms;

	Parms.CollectionsDataTableSoftPtr = CollectionsDataTableSoftPtr;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleCollectionDataLoaded
// (Final, Native, Private)
// Parameters:
// TSoftObjectPtr<class UFortCollectionData>BaseCollectionDataSoftPtr                                        (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_PlayerAugmentPersistence::HandleCollectionDataLoaded(TSoftObjectPtr<class UFortCollectionData> BaseCollectionDataSoftPtr)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "HandleCollectionDataLoaded");

	Params::UFortControllerComponent_PlayerAugmentPersistence_HandleCollectionDataLoaded_Params Parms;

	Parms.BaseCollectionDataSoftPtr = BaseCollectionDataSoftPtr;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.HandleAthenaGamePhaseChanged
// (Final, Native, Private)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_PlayerAugmentPersistence::HandleAthenaGamePhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "HandleAthenaGamePhaseChanged");

	Params::UFortControllerComponent_PlayerAugmentPersistence_HandleAthenaGamePhaseChanged_Params Parms;

	Parms.GamePhase = GamePhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetRollCountSinceLastRandomUnlock
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortControllerComponent_PlayerAugmentPersistence::GetRollCountSinceLastRandomUnlock()
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetRollCountSinceLastRandomUnlock");

	Params::UFortControllerComponent_PlayerAugmentPersistence_GetRollCountSinceLastRandomUnlock_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatusForAll
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPlayerAugmentLockStatus>OutLockStatusArray                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortControllerComponent_PlayerAugmentPersistence::GetLockStatusForAll(TArray<struct FPlayerAugmentLockStatus>* OutLockStatusArray)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetLockStatusForAll");

	Params::UFortControllerComponent_PlayerAugmentPersistence_GetLockStatusForAll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLockStatusArray != nullptr)
		*OutLockStatusArray = Parms.OutLockStatusArray;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockStatus
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerAugmentItemDefinition*PlayerAugmentItemDefinition                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerAugmentLockStatus    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPlayerAugmentLockStatus UFortControllerComponent_PlayerAugmentPersistence::GetLockStatus(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetLockStatus");

	Params::UFortControllerComponent_PlayerAugmentPersistence_GetLockStatus_Params Parms;

	Parms.PlayerAugmentItemDefinition = PlayerAugmentItemDefinition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetLockedList
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPlayerAugmentLockStatus>OutLockedList                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bIncludeSharedAugments                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_PlayerAugmentPersistence::GetLockedList(TArray<struct FPlayerAugmentLockStatus>* OutLockedList, bool bIncludeSharedAugments)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetLockedList");

	Params::UFortControllerComponent_PlayerAugmentPersistence_GetLockedList_Params Parms;

	Parms.bIncludeSharedAugments = bIncludeSharedAugments;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLockedList != nullptr)
		*OutLockedList = Parms.OutLockedList;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.GetCarryOverPlayerAugments
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FCarryOverPlayerAugment>OutCarryOverPlayerAugments                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortControllerComponent_PlayerAugmentPersistence::GetCarryOverPlayerAugments(TArray<struct FCarryOverPlayerAugment>* OutCarryOverPlayerAugments)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "GetCarryOverPlayerAugments");

	Params::UFortControllerComponent_PlayerAugmentPersistence_GetCarryOverPlayerAugments_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutCarryOverPlayerAugments != nullptr)
		*OutCarryOverPlayerAugments = Parms.OutCarryOverPlayerAugments;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthorityUnlockPlayerAugment
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerAugmentItemDefinition*PlayerAugmentToUnlock                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_PlayerAugmentPersistence::AuthorityUnlockPlayerAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentToUnlock)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "AuthorityUnlockPlayerAugment");

	Params::UFortControllerComponent_PlayerAugmentPersistence_AuthorityUnlockPlayerAugment_Params Parms;

	Parms.PlayerAugmentToUnlock = PlayerAugmentToUnlock;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetRollCountSinceLastRandomUnlock
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewRollCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_PlayerAugmentPersistence::AuthoritySetRollCountSinceLastRandomUnlock(int32 NewRollCount)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "AuthoritySetRollCountSinceLastRandomUnlock");

	Params::UFortControllerComponent_PlayerAugmentPersistence_AuthoritySetRollCountSinceLastRandomUnlock_Params Parms;

	Parms.NewRollCount = NewRollCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence.AuthoritySetCarryOverPlayerAugments
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCarryOverPlayerAugment>NewCarryOverPlayerAugments                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortControllerComponent_PlayerAugmentPersistence::AuthoritySetCarryOverPlayerAugments(TArray<struct FCarryOverPlayerAugment>& NewCarryOverPlayerAugments)
{
	static auto Func = Class->GetFunction("FortControllerComponent_PlayerAugmentPersistence", "AuthoritySetCarryOverPlayerAugments");

	Params::UFortControllerComponent_PlayerAugmentPersistence_AuthoritySetCarryOverPlayerAugments_Params Parms;

	Parms.NewCarryOverPlayerAugments = NewCarryOverPlayerAugments;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment.MarkSeenForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VariantTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMcpCollectionPlayerAugment::MarkSeenForPlayer(class AFortPlayerController* PlayerController, const struct FGameplayTag& VariantTag)
{
	static auto Func = Class->GetFunction("FortMcpCollectionPlayerAugment", "MarkSeenForPlayer");

	Params::UFortMcpCollectionPlayerAugment_MarkSeenForPlayer_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.VariantTag = VariantTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment.AddToPlayerCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                PlayerAugmentVariantTag                                          (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMcpCollectionPlayerAugment::AddToPlayerCollection(class AFortPlayerController* PlayerController, const struct FGameplayTag& PlayerAugmentVariantTag)
{
	static auto Func = Class->GetFunction("FortMcpCollectionPlayerAugment", "AddToPlayerCollection");

	Params::UFortMcpCollectionPlayerAugment_AddToPlayerCollection_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.PlayerAugmentVariantTag = PlayerAugmentVariantTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.StartAugmentGrantingFlow
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortPlayerAugmentCheatManager::StartAugmentGrantingFlow()
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "StartAugmentGrantingFlow");

	Params::UFortPlayerAugmentCheatManager_StartAugmentGrantingFlow_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.SetPlayerAugmentRollCountSinceLastUnlock
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              RollCount                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentCheatManager::SetPlayerAugmentRollCountSinceLastUnlock(int32 RollCount)
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "SetPlayerAugmentRollCountSinceLastUnlock");

	Params::UFortPlayerAugmentCheatManager_SetPlayerAugmentRollCountSinceLastUnlock_Params Parms;

	Parms.RollCount = RollCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ServerLogDynamicWeightsForPlayer
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// bool                               bVeryDetailedReport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentCheatManager::ServerLogDynamicWeightsForPlayer(bool bVeryDetailedReport)
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "ServerLogDynamicWeightsForPlayer");

	Params::UFortPlayerAugmentCheatManager_ServerLogDynamicWeightsForPlayer_Params Parms;

	Parms.bVeryDetailedReport = bVeryDetailedReport;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ResetAugmentGrantingToSeed
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              Seed                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentCheatManager::ResetAugmentGrantingToSeed(int32 Seed)
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "ResetAugmentGrantingToSeed");

	Params::UFortPlayerAugmentCheatManager_ResetAugmentGrantingToSeed_Params Parms;

	Parms.Seed = Seed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugmentsFromBots
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortPlayerAugmentCheatManager::RemoveAllAugmentsFromBots()
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "RemoveAllAugmentsFromBots");

	Params::UFortPlayerAugmentCheatManager_RemoveAllAugmentsFromBots_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugments
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortPlayerAugmentCheatManager::RemoveAllAugments()
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "RemoveAllAugments");

	Params::UFortPlayerAugmentCheatManager_RemoveAllAugments_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.LogPlayerAugmentsLockStatus
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UFortPlayerAugmentCheatManager::LogPlayerAugmentsLockStatus()
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "LogPlayerAugmentsLockStatus");

	Params::UFortPlayerAugmentCheatManager_LogPlayerAugmentsLockStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugmentToBots
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      AugmentName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentCheatManager::GiveAugmentToBots(const class FString& AugmentName)
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "GiveAugmentToBots");

	Params::UFortPlayerAugmentCheatManager_GiveAugmentToBots_Params Parms;

	Parms.AugmentName = AugmentName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugment
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      AugmentName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentCheatManager::GiveAugment(const class FString& AugmentName)
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "GiveAugment");

	Params::UFortPlayerAugmentCheatManager_GiveAugment_Params Parms;

	Parms.AugmentName = AugmentName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ForceSelectionAugments
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      AugmentNameFirst                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AugmentNameSecond                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentCheatManager::ForceSelectionAugments(const class FString& AugmentNameFirst, const class FString& AugmentNameSecond)
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "ForceSelectionAugments");

	Params::UFortPlayerAugmentCheatManager_ForceSelectionAugments_Params Parms;

	Parms.AugmentNameFirst = AugmentNameFirst;
	Parms.AugmentNameSecond = AugmentNameSecond;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectPlayerAugment
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, Const)
// Parameters:
// class FString                      TagMatch                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentCheatManager::CollectPlayerAugment(const class FString& TagMatch)
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "CollectPlayerAugment");

	Params::UFortPlayerAugmentCheatManager_CollectPlayerAugment_Params Parms;

	Parms.TagMatch = TagMatch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectAllPlayerAugments
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, Const)
// Parameters:

void UFortPlayerAugmentCheatManager::CollectAllPlayerAugments()
{
	static auto Func = Class->GetFunction("FortPlayerAugmentCheatManager", "CollectAllPlayerAugments");

	Params::UFortPlayerAugmentCheatManager_CollectAllPlayerAugments_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.SetAugmentMatchDataCacheFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                TargetAugmentCacheTag                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerStateComponent_PlayerAugmentSystem::SetAugmentMatchDataCacheFloat(const struct FGameplayTag& TargetAugmentCacheTag, double InData)
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "SetAugmentMatchDataCacheFloat");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_SetAugmentMatchDataCacheFloat_Params Parms;

	Parms.TargetAugmentCacheTag = TargetAugmentCacheTag;
	Parms.InData = InData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnRep_ActiveAugments
// (Final, Native, Private)
// Parameters:

void UFortPlayerStateComponent_PlayerAugmentSystem::OnRep_ActiveAugments()
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "OnRep_ActiveAugments");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_OnRep_ActiveAugments_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnAugmentListUpdatedEventDispatcher__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortPlayerStateComponent_PlayerAugmentSystem*AugmentComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerStateComponent_PlayerAugmentSystem::OnAugmentListUpdatedEventDispatcher__DelegateSignature(class UFortPlayerStateComponent_PlayerAugmentSystem* AugmentComponent)
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "OnAugmentListUpdatedEventDispatcher__DelegateSignature");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_OnAugmentListUpdatedEventDispatcher__DelegateSignature_Params Parms;

	Parms.AugmentComponent = AugmentComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandlePlayerPawnSpawned
// (Final, Native, Private)
// Parameters:

void UFortPlayerStateComponent_PlayerAugmentSystem::HandlePlayerPawnSpawned()
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "HandlePlayerPawnSpawned");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_HandlePlayerPawnSpawned_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandleBotPlayerPawnSpawned
// (Final, Native, Private)
// Parameters:
// class AFortAthenaAIBotController*  BotController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawnAthena*       BotPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerStateComponent_PlayerAugmentSystem::HandleBotPlayerPawnSpawned(class AFortAthenaAIBotController* BotController, class AFortPlayerPawnAthena* BotPawn)
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "HandleBotPlayerPawnSpawned");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_HandleBotPlayerPawnSpawned_Params Parms;

	Parms.BotController = BotController;
	Parms.BotPawn = BotPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentMatchDataCacheFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EAugmentExecResult      OutExec                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                TargetAugmentCacheTag                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UFortPlayerStateComponent_PlayerAugmentSystem::GetAugmentMatchDataCacheFloat(enum class EAugmentExecResult* OutExec, const struct FGameplayTag& TargetAugmentCacheTag)
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "GetAugmentMatchDataCacheFloat");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_GetAugmentMatchDataCacheFloat_Params Parms;

	Parms.TargetAugmentCacheTag = TargetAugmentCacheTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutExec != nullptr)
		*OutExec = Parms.OutExec;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponentValidated
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EAugmentExecResult      OutExec                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      PlayerContextActor                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateComponent_PlayerAugmentSystem*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPlayerStateComponent_PlayerAugmentSystem* UFortPlayerStateComponent_PlayerAugmentSystem::GetAugmentComponentValidated(enum class EAugmentExecResult* OutExec, class AActor* PlayerContextActor)
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "GetAugmentComponentValidated");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_GetAugmentComponentValidated_Params Parms;

	Parms.PlayerContextActor = PlayerContextActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutExec != nullptr)
		*OutExec = Parms.OutExec;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponent
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      PlayerContextActor                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateComponent_PlayerAugmentSystem*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPlayerStateComponent_PlayerAugmentSystem* UFortPlayerStateComponent_PlayerAugmentSystem::GetAugmentComponent(class AActor* PlayerContextActor)
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "GetAugmentComponent");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_GetAugmentComponent_Params Parms;

	Parms.PlayerContextActor = PlayerContextActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetActiveAugments
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortPlayerAugmentItemDefinition*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortPlayerAugmentItemDefinition*> UFortPlayerStateComponent_PlayerAugmentSystem::GetActiveAugments(class AActor* Actor)
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "GetActiveAugments");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_GetActiveAugments_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.ClientClearMatchAugmentDataCache
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UFortPlayerStateComponent_PlayerAugmentSystem::ClientClearMatchAugmentDataCache()
{
	static auto Func = Class->GetFunction("FortPlayerStateComponent_PlayerAugmentSystem", "ClientClearMatchAugmentDataCache");

	Params::UFortPlayerStateComponent_PlayerAugmentSystem_ClientClearMatchAugmentDataCache_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
