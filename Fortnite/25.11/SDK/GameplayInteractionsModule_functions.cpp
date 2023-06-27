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


// Function GameplayInteractionsModule.AITask_UseGameplayInteraction.UseClaimedGameplayInteractionSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayInteraction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayInteraction* UAITask_UseGameplayInteraction::UseClaimedGameplayInteractionSmartObject(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic)
{
	static auto Func = Class->GetFunction("AITask_UseGameplayInteraction", "UseClaimedGameplayInteractionSmartObject");

	Params::UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Params Parms;

	Parms.Controller = Controller;
	Parms.ClaimHandle = ClaimHandle;
	Parms.bLockAILogic = bLockAILogic;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayInteractionsModule.AITask_UseGameplayInteraction.RequestAbort
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAITask_UseGameplayInteraction::RequestAbort()
{
	static auto Func = Class->GetFunction("AITask_UseGameplayInteraction", "RequestAbort");

	Params::UAITask_UseGameplayInteraction_RequestAbort_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnNotifyBeginReceived
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UStateTreeTask_PlayContextualAnim_InstanceData::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto Func = Class->GetFunction("StateTreeTask_PlayContextualAnim_InstanceData", "OnNotifyBeginReceived");

	Params::UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Params Parms;

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnMontageEnded
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                EndedMontage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeTask_PlayContextualAnim_InstanceData::OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted)
{
	static auto Func = Class->GetFunction("StateTreeTask_PlayContextualAnim_InstanceData", "OnMontageEnded");

	Params::UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Params Parms;

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
