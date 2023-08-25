#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayInteractionsModule.GameplayInteractionSmartObjectBehaviorDefinition
// (None)

class UClass* UGameplayInteractionSmartObjectBehaviorDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayInteractionSmartObjectBehaviorDefinition");

	return Clss;
}


// GameplayInteractionSmartObjectBehaviorDefinition GameplayInteractionsModule.Default__GameplayInteractionSmartObjectBehaviorDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayInteractionSmartObjectBehaviorDefinition* UGameplayInteractionSmartObjectBehaviorDefinition::GetDefaultObj()
{
	static class UGameplayInteractionSmartObjectBehaviorDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayInteractionSmartObjectBehaviorDefinition*>(UGameplayInteractionSmartObjectBehaviorDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayInteractionsModule.AITask_UseGameplayInteraction
// (None)

class UClass* UAITask_UseGameplayInteraction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_UseGameplayInteraction");

	return Clss;
}


// AITask_UseGameplayInteraction GameplayInteractionsModule.Default__AITask_UseGameplayInteraction
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_UseGameplayInteraction* UAITask_UseGameplayInteraction::GetDefaultObj()
{
	static class UAITask_UseGameplayInteraction* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_UseGameplayInteraction*>(UAITask_UseGameplayInteraction::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayInteractionsModule.AITask_UseGameplayInteraction.UseSmartObjectWithGameplayInteraction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayInteraction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayInteraction* UAITask_UseGameplayInteraction::UseSmartObjectWithGameplayInteraction(class UAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_UseGameplayInteraction", "UseSmartObjectWithGameplayInteraction");

	Params::UAITask_UseGameplayInteraction_UseSmartObjectWithGameplayInteraction_Params Parms{};

	Parms.Controller = Controller;
	Parms.ClaimHandle = ClaimHandle;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayInteractionsModule.AITask_UseGameplayInteraction.RequestAbort
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAITask_UseGameplayInteraction::RequestAbort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_UseGameplayInteraction", "RequestAbort");

	Params::UAITask_UseGameplayInteraction_RequestAbort_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayInteractionsModule.AITask_UseGameplayInteraction.MoveToAndUseSmartObjectWithGameplayInteraction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseGameplayInteraction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseGameplayInteraction* UAITask_UseGameplayInteraction::MoveToAndUseSmartObjectWithGameplayInteraction(class UAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_UseGameplayInteraction", "MoveToAndUseSmartObjectWithGameplayInteraction");

	Params::UAITask_UseGameplayInteraction_MoveToAndUseSmartObjectWithGameplayInteraction_Params Parms{};

	Parms.Controller = Controller;
	Parms.ClaimHandle = ClaimHandle;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayInteractionsModule.GameplayInteractionStateTreeSchema
// (None)

class UClass* UGameplayInteractionStateTreeSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayInteractionStateTreeSchema");

	return Clss;
}


// GameplayInteractionStateTreeSchema GameplayInteractionsModule.Default__GameplayInteractionStateTreeSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayInteractionStateTreeSchema* UGameplayInteractionStateTreeSchema::GetDefaultObj()
{
	static class UGameplayInteractionStateTreeSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayInteractionStateTreeSchema*>(UGameplayInteractionStateTreeSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData
// (None)

class UClass* UStateTreeTask_PlayContextualAnim_InstanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateTreeTask_PlayContextualAnim_InstanceData");

	return Clss;
}


// StateTreeTask_PlayContextualAnim_InstanceData GameplayInteractionsModule.Default__StateTreeTask_PlayContextualAnim_InstanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UStateTreeTask_PlayContextualAnim_InstanceData* UStateTreeTask_PlayContextualAnim_InstanceData::GetDefaultObj()
{
	static class UStateTreeTask_PlayContextualAnim_InstanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateTreeTask_PlayContextualAnim_InstanceData*>(UStateTreeTask_PlayContextualAnim_InstanceData::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnNotifyBeginReceived
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UStateTreeTask_PlayContextualAnim_InstanceData::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeTask_PlayContextualAnim_InstanceData", "OnNotifyBeginReceived");

	Params::UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnMontageEnded
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                EndedMontage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStateTreeTask_PlayContextualAnim_InstanceData::OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateTreeTask_PlayContextualAnim_InstanceData", "OnMontageEnded");

	Params::UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Params Parms{};

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


