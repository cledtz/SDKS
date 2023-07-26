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


// Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObjectOwner                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_TriggerBehavior");

	Params::UGameplayBehavior_K2_TriggerBehavior_Params Parms;

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObjectOwner                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnTriggeredPawn(class APawn* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggeredPawn");

	Params::UGameplayBehavior_K2_OnTriggeredPawn_Params Parms;

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*                  Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObjectOwner                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggeredCharacter");

	Params::UGameplayBehavior_K2_OnTriggeredCharacter_Params Parms;

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObjectOwner                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnTriggered(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnTriggered");

	Params::UGameplayBehavior_K2_OnTriggered_Params Parms;

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasInterrupted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnFinishedPawn");

	Params::UGameplayBehavior_K2_OnFinishedPawn_Params Parms;

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*                  Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasInterrupted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnFinishedCharacter");

	Params::UGameplayBehavior_K2_OnFinishedCharacter_Params Parms;

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasInterrupted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_OnFinished(class AActor* Avatar, bool bWasInterrupted)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_OnFinished");

	Params::UGameplayBehavior_K2_OnFinished_Params Parms;

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              CurrentIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameplayBehavior::K2_GetNextActorIndexInSequence(int32 CurrentIndex)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_GetNextActorIndexInSequence");

	Params::UGameplayBehavior_K2_GetNextActorIndexInSequence_Params Parms;

	Parms.CurrentIndex = CurrentIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_EndBehavior(class AActor* Avatar)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_EndBehavior");

	Params::UGameplayBehavior_K2_EndBehavior_Params Parms;

	Parms.Avatar = Avatar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior::K2_AbortBehavior(class AActor* Avatar)
{
	static auto Func = Class->GetFunction("GameplayBehavior", "K2_AbortBehavior");

	Params::UGameplayBehavior_K2_AbortBehavior_Params Parms;

	Parms.Avatar = Avatar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetValueAsGameplayTagForBlackboardComp
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        BlackboardComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTagValue                                                 (Parm, NativeAccessSpecifierPublic)

void UGameplayBehaviorsBlueprintFunctionLibrary::SetValueAsGameplayTagForBlackboardComp(class UBlackboardComponent* BlackboardComp, class FName& KeyName, const struct FGameplayTagContainer& GameplayTagValue)
{
	static auto Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "SetValueAsGameplayTagForBlackboardComp");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp_Params Parms;

	Parms.BlackboardComp = BlackboardComp;
	Parms.KeyName = KeyName;
	Parms.GameplayTagValue = GameplayTagValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetBlackboardValueAsGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       Value                                                            (Parm, NativeAccessSpecifierPublic)

void UGameplayBehaviorsBlueprintFunctionLibrary::SetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, const struct FGameplayTagContainer& Value)
{
	static auto Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "SetBlackboardValueAsGameplayTag");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTagFromBlackboardComp
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        BlackboardComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayBehaviorsBlueprintFunctionLibrary::GetBlackboardValueAsGameplayTagFromBlackboardComp(class UBlackboardComponent* BlackboardComp, class FName& KeyName)
{
	static auto Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "GetBlackboardValueAsGameplayTagFromBlackboardComp");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp_Params Parms;

	Parms.BlackboardComp = BlackboardComp;
	Parms.KeyName = KeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayBehaviorsBlueprintFunctionLibrary::GetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key)
{
	static auto Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "GetBlackboardValueAsGameplayTag");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag_Params Parms;

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.AddGameplayTagFilterToBlackboardKeySelector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlackboardKeySelector      InSelector                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// class UObject*                     Owner                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehaviorsBlueprintFunctionLibrary::AddGameplayTagFilterToBlackboardKeySelector(struct FBlackboardKeySelector* InSelector, class UObject* Owner, class FName PropertyName)
{
	static auto Func = Class->GetFunction("GameplayBehaviorsBlueprintFunctionLibrary", "AddGameplayTagFilterToBlackboardKeySelector");

	Params::UGameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector_Params Parms;

	Parms.Owner = Owner;
	Parms.PropertyName = PropertyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InSelector != nullptr)
		*InSelector = Parms.InSelector;

}


// Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InAvatar                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayBehavior_AnimationBased::OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar)
{
	static auto Func = Class->GetFunction("GameplayBehavior_AnimationBased", "OnMontageFinished");

	Params::UGameplayBehavior_AnimationBased_OnMontageFinished_Params Parms;

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.InAvatar = InAvatar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
