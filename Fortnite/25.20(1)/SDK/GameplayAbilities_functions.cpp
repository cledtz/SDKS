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


// Function GameplayAbilities.AbilityAsync.EndAction
// (Native, Public, BlueprintCallable)
// Parameters:

void UAbilityAsync::EndAction()
{
	static auto Func = Class->GetFunction("AbilityAsync", "EndAction");

	Params::UAbilityAsync_EndAction_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitAttributeChanged*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitAttributeChanged* UAbilityAsync_WaitAttributeChanged::WaitForAttributeChanged(class UActor* TargetActor, const struct FGameplayAttribute& Attribute, bool OnlyTriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityAsync_WaitAttributeChanged", "WaitForAttributeChanged");

	Params::UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.Attribute = Attribute;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityAsync_WaitAttributeChanged::AsyncWaitAttributeChangedDelegate__DelegateSignature(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static auto Func = Class->GetFunction("AbilityAsync_WaitAttributeChanged", "AsyncWaitAttributeChangedDelegate__DelegateSignature");

	Params::UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Params Parms;

	Parms.Attribute = Attribute;
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayEffectApplied*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayEffectApplied* UAbilityAsync_WaitGameplayEffectApplied::WaitGameplayEffectAppliedToActor(class UActor* TargetActor, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect)
{
	static auto Func = Class->GetFunction("AbilityAsync_WaitGameplayEffectApplied", "WaitGameplayEffectAppliedToActor");

	Params::UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.SourceFilter = SourceFilter;
	Parms.SourceTagRequirements = SourceTagRequirements;
	Parms.TargetTagRequirements = TargetTagRequirements;
	Parms.TriggerOnce = TriggerOnce;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      Source                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityAsync_WaitGameplayEffectApplied::OnAppliedDelegate__DelegateSignature(class UActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilityAsync_WaitGameplayEffectApplied", "OnAppliedDelegate__DelegateSignature");

	Params::UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Params Parms;

	Parms.Source = Source;
	Parms.SpecHandle = SpecHandle;
	Parms.ActiveHandle = ActiveHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyMatchExact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayEvent* UAbilityAsync_WaitGameplayEvent::WaitGameplayEventToActor(class UActor* TargetActor, const struct FGameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	static auto Func = Class->GetFunction("AbilityAsync_WaitGameplayEvent", "WaitGameplayEventToActor");

	Params::UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.EventTag = EventTag;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;
	Parms.OnlyMatchExact = OnlyMatchExact;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)

void UAbilityAsync_WaitGameplayEvent::EventReceivedDelegate__DelegateSignature(const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("AbilityAsync_WaitGameplayEvent", "EventReceivedDelegate__DelegateSignature");

	Params::UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Params Parms;

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayTagAdded*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayTagAdded* UAbilityAsync_WaitGameplayTagAdded::WaitGameplayTagAddToActor(class UActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityAsync_WaitGameplayTagAdded", "WaitGameplayTagAddToActor");

	Params::UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.Tag = Tag;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayTagRemoved*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayTagRemoved* UAbilityAsync_WaitGameplayTagRemoved::WaitGameplayTagRemoveFromActor(class UActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityAsync_WaitGameplayTagRemoved", "WaitGameplayTagRemoveFromActor");

	Params::UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.Tag = Tag;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TagQuery                                                         (ConstParm, Parm, NativeAccessSpecifierPublic)
// enum class EWaitGameplayTagQueryTriggerConditionTriggerCondition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyTriggerOnce                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayTagQuery*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayTagQuery* UAbilityAsync_WaitGameplayTagQuery::WaitGameplayTagQueryOnActor(class UActor* TargetActor, const struct FGameplayTagQuery& TagQuery, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityAsync_WaitGameplayTagQuery", "WaitGameplayTagQueryOnActor");

	Params::UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.TagQuery = TagQuery;
	Parms.TriggerCondition = TriggerCondition;
	Parms.bOnlyTriggerOnce = bOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldBlockAbilities                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static auto Func = Class->GetFunction("GameplayAbility", "SetShouldBlockOtherAbilities");

	Params::UGameplayAbility_SetShouldBlockOtherAbilities_Params Parms;

	Parms.bShouldBlockAbilities = bShouldBlockAbilities;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanBeCanceled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static auto Func = Class->GetFunction("GameplayAbility", "SetCanBeCanceled");

	Params::UGameplayAbility_SetCanBeCanceled_Params Parms;

	Parms.bCanBeCanceled = bCanBeCanceled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)

void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("GameplayAbility", "SendGameplayEvent");

	Params::UGameplayAbility_SendGameplayEvent_Params Parms;

	Parms.EventTag = EventTag;
	Parms.Payload = Payload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
// (Native, Public, BlueprintCallable)
// Parameters:

void UGameplayAbility::RemoveGrantedByEffect()
{
	static auto Func = Class->GetFunction("GameplayAbility", "RemoveGrantedByEffect");

	Params::UGameplayAbility_RemoveGrantedByEffect_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.MontageStop
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              OverrideBlendOutTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static auto Func = Class->GetFunction("GameplayAbility", "MontageStop");

	Params::UGameplayAbility_MontageStop_Params Parms;

	Parms.OverrideBlendOutTime = OverrideBlendOutTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        FromSectionName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ToSectionName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::MontageSetNextSectionName(class FName FromSectionName, class FName ToSectionName)
{
	static auto Func = Class->GetFunction("GameplayAbility", "MontageSetNextSectionName");

	Params::UGameplayAbility_MontageSetNextSectionName_Params Parms;

	Parms.FromSectionName = FromSectionName;
	Parms.ToSectionName = ToSectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::MontageJumpToSection(class FName SectionName)
{
	static auto Func = Class->GetFunction("GameplayAbility", "MontageJumpToSection");

	Params::UGameplayAbility_MontageJumpToSection_Params Parms;

	Parms.SectionName = SectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetingLocationInfoReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(class FName SocketName)
{
	static auto Func = Class->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");

	Params::UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params Parms;

	Parms.SocketName = SocketName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfoReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static auto Func = Class->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerActor");

	Params::UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level)
{
	static auto Func = Class->GetFunction("GameplayAbility", "MakeOutgoingGameplayEffectSpec");

	Params::UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params Parms;

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Level = Level;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_ShouldAbilityRespondToEvent");

	Params::UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_RemoveGameplayCue");

	Params::UGameplayAbility_K2_RemoveGameplayCue_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_OnEndAbility");

	Params::UGameplayAbility_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.K2_HasAuthority
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_HasAuthority()
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_HasAuthority");

	Params::UGameplayAbility_K2_HasAuthority_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// (Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_ExecuteGameplayCueWithParams");

	Params::UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_ExecuteGameplayCue");

	Params::UGameplayAbility_K2_ExecuteGameplayCue_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
// (Native, Protected, BlueprintCallable)
// Parameters:

void UGameplayAbility::K2_EndAbilityLocally()
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_EndAbilityLocally");

	Params::UGameplayAbility_K2_EndAbilityLocally_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_EndAbility
// (Native, Protected, BlueprintCallable)
// Parameters:

void UGameplayAbility::K2_EndAbility()
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_EndAbility");

	Params::UGameplayAbility_K2_EndAbility_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
// (Event, Public, BlueprintEvent)
// Parameters:

void UGameplayAbility::K2_CommitExecute()
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_CommitExecute");

	Params::UGameplayAbility_K2_CommitExecute_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               BroadcastCommitEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_CommitAbilityCost");

	Params::UGameplayAbility_K2_CommitAbilityCost_Params Parms;

	Parms.BroadcastCommitEvent = BroadcastCommitEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               BroadcastCommitEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ForceCooldown                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_CommitAbilityCooldown");

	Params::UGameplayAbility_K2_CommitAbilityCooldown_Params Parms;

	Parms.BroadcastCommitEvent = BroadcastCommitEvent;
	Parms.ForceCooldown = ForceCooldown;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbility()
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_CommitAbility");

	Params::UGameplayAbility_K2_CommitAbility_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_CheckAbilityCost");

	Params::UGameplayAbility_K2_CheckAbilityCost_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_CheckAbilityCooldown");

	Params::UGameplayAbility_K2_CheckAbilityCooldown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CancelAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameplayAbility::K2_CancelAbility()
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_CancelAbility");

	Params::UGameplayAbility_K2_CancelAbility_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_CanActivateAbility");

	Params::UGameplayAbility_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   EffectSpecHandle                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToTarget");

	Params::UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params Parms;

	Parms.EffectSpecHandle = EffectSpecHandle;
	Parms.TargetData = TargetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   EffectSpecHandle                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToOwner");

	Params::UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params Parms;

	Parms.EffectSpecHandle = EffectSpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
// (Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameter                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bRemoveOnAbilityEnd                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_AddGameplayCueWithParams");

	Params::UGameplayAbility_K2_AddGameplayCueWithParams_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.GameplayCueParameter = GameplayCueParameter;
	Parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)
// bool                               bRemoveOnAbilityEnd                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_AddGameplayCue");

	Params::UGameplayAbility_K2_AddGameplayCue_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.Context = Context;
	Parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_ActivateAbilityFromEvent");

	Params::UGameplayAbility_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGameplayAbility::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GameplayAbility", "K2_ActivateAbility");

	Params::UGameplayAbility_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.IsLocallyControlled
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::IsLocallyControlled()
{
	static auto Func = Class->GetFunction("GameplayAbility", "IsLocallyControlled");

	Params::UGameplayAbility_IsLocallyControlled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UGameplayAbility::InvalidateClientPredictionKey()
{
	static auto Func = Class->GetFunction("GameplayAbility", "InvalidateClientPredictionKey");

	Params::UGameplayAbility_InvalidateClientPredictionKey_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.GetSourceObject_BP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilitySpecHandle  Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGameplayAbility::GetSourceObject_BP(const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayAbilityActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetSourceObject_BP");

	Params::UGameplayAbility_GetSourceObject_BP_Params Parms;

	Parms.Handle = Handle;
	Parms.ActorInfo = ActorInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetOwningComponentFromActorInfo");

	Params::UGameplayAbility_GetOwningComponentFromActorInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetOwningActorFromActorInfo");

	Params::UGameplayAbility_GetOwningActorFromActorInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetGrantedByEffectContext");

	Params::UGameplayAbility_GetGrantedByEffectContext_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetCurrentSourceObject");

	Params::UGameplayAbility_GetCurrentSourceObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetCurrentMontage");

	Params::UGameplayAbility_GetCurrentMontage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayAbility::GetCooldownTimeRemaining()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetCooldownTimeRemaining");

	Params::UGameplayAbility_GetCooldownTimeRemaining_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandleOptionalTargetData                                               (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData)
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetContextFromOwner");

	Params::UGameplayAbility_GetContextFromOwner_Params Parms;

	Parms.OptionalTargetData = OptionalTargetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetAvatarActorFromActorInfo");

	Params::UGameplayAbility_GetAvatarActorFromActorInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetActorInfo");

	Params::UGameplayAbility_GetActorInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAbilitySystemComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilitySystemComponent* UGameplayAbility::GetAbilitySystemComponentFromActorInfo()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetAbilitySystemComponentFromActorInfo");

	Params::UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilitySpecHandle  Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameplayAbility::GetAbilityLevel_BP(const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayAbilityActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetAbilityLevel_BP");

	Params::UGameplayAbility_GetAbilityLevel_BP_Params Parms;

	Parms.Handle = Handle;
	Parms.ActorInfo = ActorInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameplayAbility::GetAbilityLevel()
{
	static auto Func = Class->GetFunction("GameplayAbility", "GetAbilityLevel");

	Params::UGameplayAbility_GetAbilityLevel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InstanceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::EndTaskByInstanceName(class FName InstanceName)
{
	static auto Func = Class->GetFunction("GameplayAbility", "EndTaskByInstanceName");

	Params::UGameplayAbility_EndTaskByInstanceName_Params Parms;

	Parms.InstanceName = InstanceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.EndAbilityState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        OptionalStateNameToEnd                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::EndAbilityState(class FName OptionalStateNameToEnd)
{
	static auto Func = Class->GetFunction("GameplayAbility", "EndAbilityState");

	Params::UGameplayAbility_EndAbilityState_Params Parms;

	Parms.OptionalStateNameToEnd = OptionalStateNameToEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InstanceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEndTask                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::ConfirmTaskByInstanceName(class FName InstanceName, bool bEndTask)
{
	static auto Func = Class->GetFunction("GameplayAbility", "ConfirmTaskByInstanceName");

	Params::UGameplayAbility_ConfirmTaskByInstanceName_Params Parms;

	Parms.InstanceName = InstanceName;
	Parms.bEndTask = bEndTask;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InstanceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::CancelTaskByInstanceName(class FName InstanceName)
{
	static auto Func = Class->GetFunction("GameplayAbility", "CancelTaskByInstanceName");

	Params::UGameplayAbility_CancelTaskByInstanceName_Params Parms;

	Parms.InstanceName = InstanceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove)
{
	static auto Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithHandle");

	Params::UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params Parms;

	Parms.Handle = Handle;
	Parms.StacksToRemove = StacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       WithGrantedTags                                                  (Parm, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int32 StacksToRemove)
{
	static auto Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithGrantedTags");

	Params::UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params Parms;

	Parms.WithGrantedTags = WithGrantedTags;
	Parms.StacksToRemove = StacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       WithAssetTags                                                    (Parm, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int32 StacksToRemove)
{
	static auto Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithAssetTags");

	Params::UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params Parms;

	Parms.WithAssetTags = WithAssetTags;
	Parms.StacksToRemove = StacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Stacks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks)
{
	static auto Func = Class->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToTarget");

	Params::UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params Parms;

	Parms.TargetData = TargetData;
	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.Stacks = Stacks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Stacks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks)
{
	static auto Func = Class->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToOwner");

	Params::UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params Parms;

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.Stacks = Stacks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// (Native, Public)
// Parameters:

void UGameplayAbilityTargetActor::ConfirmTargeting()
{
	static auto Func = Class->GetFunction("GameplayAbilityTargetActor", "ConfirmTargeting");

	Params::UGameplayAbilityTargetActor_ConfirmTargeting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// (Native, Public)
// Parameters:

void UGameplayAbilityTargetActor::CancelTargeting()
{
	static auto Func = Class->GetFunction("GameplayAbilityTargetActor", "CancelTargeting");

	Params::UGameplayAbilityTargetActor_CancelTargeting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbilityWorldReticle::SetReticleMaterialParamVector(class FName ParamName, const struct FVector& Value)
{
	static auto Func = Class->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamVector");

	Params::UGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params Parms;

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(class FName ParamName, float Value)
{
	static auto Func = Class->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamFloat");

	Params::UGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params Parms;

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static auto Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnValidTargetChanged");

	Params::UGameplayAbilityWorldReticle_OnValidTargetChanged_Params Parms;

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static auto Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnTargetingAnActor");

	Params::UGameplayAbilityWorldReticle_OnTargetingAnActor_Params Parms;

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// (Event, Public, BlueprintEvent)
// Parameters:

void UGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static auto Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnParametersInitialized");

	Params::UGameplayAbilityWorldReticle_OnParametersInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFaceIn2D                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static auto Func = Class->GetFunction("GameplayAbilityWorldReticle", "FaceTowardSource");

	Params::UGameplayAbilityWorldReticle_FaceTowardSource_Params Parms;

	Parms.bFaceIn2D = bFaceIn2D;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldDirection                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAdditive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 StrengthOverTime                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnableGravity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionConstantForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity)
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionConstantForce", "ApplyRootMotionConstantForce");

	Params::UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.WorldDirection = WorldDirection;
	Parms.Strength = Strength;
	Parms.Duration = Duration;
	Parms.bIsAdditive = bIsAdditive;
	Parms.StrengthOverTime = StrengthOverTime;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.bEnableGravity = bEnableGravity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "OnLandedCallback");

	Params::UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params Parms;

	Parms.Hit = Hit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAbilityTask_ApplyRootMotionJumpForce::Finish()
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "Finish");

	Params::UAbilityTask_ApplyRootMotionJumpForce_Finish_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumLandedTriggerTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFinishOnLanded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TimeMappingCurve                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionJumpForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve)
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "ApplyRootMotionJumpForce");

	Params::UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Rotation = Rotation;
	Parms.Distance = Distance;
	Parms.Height = Height;
	Parms.Duration = Duration;
	Parms.MinimumLandedTriggerTime = MinimumLandedTriggerTime;
	Parms.bFinishOnLanded = bFinishOnLanded;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.PathOffsetCurve = PathOffsetCurve;
	Parms.TimeMappingCurve = TimeMappingCurve;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
// (Final, Native, Public)
// Parameters:
// class UActor*                      OriginalTarget                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      NewTarget                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnTargetActorSwapped(class UActor* OriginalTarget, class UActor* NewTarget)
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnTargetActorSwapped");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Params Parms;

	Parms.OriginalTarget = OriginalTarget;
	Parms.NewTarget = NewTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
// (Final, Native, Protected)
// Parameters:

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation()
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnRep_TargetLocation");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (Parm, NativeAccessSpecifierPublic)
// int32                              TargetDataIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetActorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionMoveToActorTargetOffsetTypeOffsetAlignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedHorizontal                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedVertical                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetNewMovementMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestrictSpeedToExpected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TimeMappingCurve                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDisableDestinationReachedInterrupt                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToActorForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToTargetDataActorForce");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.TargetDataHandle = TargetDataHandle;
	Parms.TargetDataIndex = TargetDataIndex;
	Parms.TargetActorIndex = TargetActorIndex;
	Parms.TargetLocationOffset = TargetLocationOffset;
	Parms.OffsetAlignment = OffsetAlignment;
	Parms.Duration = Duration;
	Parms.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	Parms.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	Parms.bSetNewMovementMode = bSetNewMovementMode;
	Parms.MovementMode = MovementMode;
	Parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	Parms.PathOffsetCurve = PathOffsetCurve;
	Parms.TimeMappingCurve = TimeMappingCurve;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionMoveToActorTargetOffsetTypeOffsetAlignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedHorizontal                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedVertical                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetNewMovementMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestrictSpeedToExpected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TimeMappingCurve                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDisableDestinationReachedInterrupt                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToActorForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UActor* TargetActor, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToActorForce");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.TargetActor = TargetActor;
	Parms.TargetLocationOffset = TargetLocationOffset;
	Parms.OffsetAlignment = OffsetAlignment;
	Parms.Duration = Duration;
	Parms.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	Parms.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	Parms.bSetNewMovementMode = bSetNewMovementMode;
	Parms.MovementMode = MovementMode;
	Parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	Parms.PathOffsetCurve = PathOffsetCurve;
	Parms.TimeMappingCurve = TimeMappingCurve;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	Parms.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetNewMovementMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestrictSpeedToExpected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToForce", "ApplyRootMotionMoveToForce");

	Params::UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.TargetLocation = TargetLocation;
	Parms.Duration = Duration;
	Parms.bSetNewMovementMode = bSetNewMovementMode;
	Parms.MovementMode = MovementMode;
	Parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	Parms.PathOffsetCurve = PathOffsetCurve;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      LocationActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsPush                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAdditive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoZForce                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 StrengthDistanceFalloff                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 StrengthOverTime                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseFixedWorldDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    FixedWorldDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionRadialForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, class UActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotionRadialForce", "ApplyRootMotionRadialForce");

	Params::UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Location = Location;
	Parms.LocationActor = LocationActor;
	Parms.Strength = Strength;
	Parms.Duration = Duration;
	Parms.Radius = Radius;
	Parms.bIsPush = bIsPush;
	Parms.bIsAdditive = bIsAdditive;
	Parms.bNoZForce = bNoZForce;
	Parms.StrengthDistanceFalloff = StrengthDistanceFalloff;
	Parms.StrengthOverTime = StrengthOverTime;
	Parms.bUseFixedWorldDirection = bUseFixedWorldDirection;
	Parms.FixedWorldDirection = FixedWorldDirection;
	Parms.VelocityOnFinishMode = VelocityOnFinishMode;
	Parms.SetVelocityOnFinish = SetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 OptionalInterpolationCurve                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                OptionalVectorInterpolationCurve                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_MoveToLocation* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
{
	static auto Func = Class->GetFunction("AbilityTask_MoveToLocation", "MoveToLocation");

	Params::UAbilityTask_MoveToLocation_MoveToLocation_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Location = Location;
	Parms.Duration = Duration;
	Parms.OptionalInterpolationCurve = OptionalInterpolationCurve;
	Parms.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAbilityTaskNetSyncType SyncType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_NetworkSyncPoint*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType)
{
	static auto Func = Class->GetFunction("AbilityTask_NetworkSyncPoint", "WaitNetSync");

	Params::UAbilityTask_NetworkSyncPoint_WaitNetSync_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.SyncType = SyncType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_NetworkSyncPoint", "OnSignalCallback");

	Params::UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// (Final, Native, Public)
// Parameters:

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static auto Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageInterrupted");

	Params::UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageEnded");

	Params::UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params Parms;

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageBlendingOut");

	Params::UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params Parms;

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                MontageToPlay                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartSection                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAbilityEnds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AnimRootMotionTranslationScale                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTimeSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_PlayMontageAndWait*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds)
{
	static auto Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "CreatePlayMontageAndWaitProxy");

	Params::UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.MontageToPlay = MontageToPlay;
	Parms.Rate = Rate;
	Parms.StartSection = StartSection;
	Parms.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	Parms.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	Parms.StartTimeSeconds = StartTimeSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeBetweenActions                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalActionCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_Repeat*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount)
{
	static auto Func = Class->GetFunction("AbilityTask_Repeat", "RepeatAction");

	Params::UAbilityTask_Repeat_RepeatAction_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TimeBetweenActions = TimeBetweenActions;
	Parms.TotalActionCount = TotalActionCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UActor>          Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_SpawnActor*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UActor> Class)
{
	static auto Func = Class->GetFunction("AbilityTask_SpawnActor", "SpawnActor");

	Params::UAbilityTask_SpawnActor_SpawnActor_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TargetData = TargetData;
	Parms.Class = Class;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_SpawnActor::FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("AbilityTask_SpawnActor", "FinishSpawningActor");

	Params::UAbilityTask_SpawnActor_FinishSpawningActor_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TargetData = TargetData;
	Parms.SpawnedActor = SpawnedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UActor>          Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilityTask_SpawnActor::BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UActor> Class, class UActor** SpawnedActor)
{
	static auto Func = Class->GetFunction("AbilityTask_SpawnActor", "BeginSpawningActor");

	Params::UAbilityTask_SpawnActor_BeginSpawningActor_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TargetData = TargetData;
	Parms.Class = Class;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StateName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEndCurrentState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_StartAbilityState*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(class UGameplayAbility* OwningAbility, class FName StateName, bool bEndCurrentState)
{
	static auto Func = Class->GetFunction("AbilityTask_StartAbilityState", "StartAbilityState");

	Params::UAbilityTask_StartAbilityState_StartAbilityState_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.StateName = StateName;
	Parms.bEndCurrentState = bEndCurrentState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayAbilityTargetActor* TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_VisualizeTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class UGameplayAbilityTargetActor* TargetActor, class FName TaskInstanceName, float Duration)
{
	static auto Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargetingUsingActor");

	Params::UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TargetActor = TargetActor;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Duration = Duration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_VisualizeTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class UGameplayAbilityTargetActor> Class, class FName TaskInstanceName, float Duration)
{
	static auto Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargeting");

	Params::UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Class = Class;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Duration = Duration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UGameplayAbility* OwningAbility, class UGameplayAbilityTargetActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "FinishSpawningActor");

	Params::UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.SpawnedActor = SpawnedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class UGameplayAbilityTargetActor> Class, class UGameplayAbilityTargetActor** SpawnedActor)
{
	static auto Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "BeginSpawningActor");

	Params::UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Class = Class;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TagRequirements                                                  (Parm, NativeAccessSpecifierPublic)
// bool                               IncludeTriggeredAbilities                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivateWithTagRequirements");

	Params::UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TagRequirements = TagRequirements;
	Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	Parms.TriggerOnce = TriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           Query                                                            (Parm, NativeAccessSpecifierPublic)
// bool                               IncludeTriggeredAbilities                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate_Query");

	Params::UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Query = Query;
	Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	Parms.TriggerOnce = TriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithoutTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IncludeTriggeredAbilities                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate");

	Params::UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.WithTag = WithTag;
	Parms.WithoutTag = WithoutTag;
	Parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	Parms.TriggerOnce = TriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "OnAbilityActivate");

	Params::UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params Parms;

	Parms.ActivatedAbility = ActivatedAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           Query                                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityCommit*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit_Query");

	Params::UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Query = Query;
	Parms.TriggerOnce = TriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithoutTage                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityCommit*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit");

	Params::UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.WithTag = WithTag;
	Parms.WithoutTage = WithoutTage;
	Parms.TriggerOnce = TriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "OnAbilityCommit");

	Params::UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params Parms;

	Parms.ActivatedAbility = ActivatedAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          InAttribute                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InWithTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InWithoutTag                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitAttributeChangeComparisonInComparisonType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InComparisonValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, class UActor* OptionalExternalOwner)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChangeWithComparison");

	Params::UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.InAttribute = InAttribute;
	Parms.InWithTag = InWithTag;
	Parms.InWithoutTag = InWithoutTag;
	Parms.InComparisonType = InComparisonType;
	Parms.InComparisonValue = InComparisonValue;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithSrcTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithoutSrcTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class UActor* OptionalExternalOwner)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChange");

	Params::UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Attribute = Attribute;
	Parms.WithSrcTag = WithSrcTag;
	Parms.WithoutSrcTag = WithoutSrcTag;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeNumerator                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeDenominator                                             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitAttributeChangeComparisonComparisonType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ComparisonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriggerOnce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChangeRatioThreshold*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class UActor* OptionalExternalOwner)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAttributeChangeRatioThreshold", "WaitForAttributeChangeRatioThreshold");

	Params::UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.AttributeNumerator = AttributeNumerator;
	Parms.AttributeDenominator = AttributeDenominator;
	Parms.ComparisonType = ComparisonType;
	Parms.ComparisonValue = ComparisonValue;
	Parms.bTriggerOnce = bTriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitAttributeChangeComparisonComparisonType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ComparisonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriggerOnce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChangeThreshold*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class UActor* OptionalExternalOwner)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitAttributeChangeThreshold", "WaitForAttributeChangeThreshold");

	Params::UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Attribute = Attribute;
	Parms.ComparisonType = ComparisonType;
	Parms.ComparisonValue = ComparisonValue;
	Parms.bTriggerOnce = bTriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitCancel*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(class UGameplayAbility* OwningAbility)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitCancel", "WaitCancel");

	Params::UAbilityTask_WaitCancel_WaitCancel_Params Parms;

	Parms.OwningAbility = OwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_WaitCancel", "OnLocalCancelCallback");

	Params::UAbilityTask_WaitCancel_OnLocalCancelCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_WaitCancel", "OnCancelCallback");

	Params::UAbilityTask_WaitCancel_OnCancelCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitConfirm*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(class UGameplayAbility* OwningAbility)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitConfirm", "WaitConfirm");

	Params::UAbilityTask_WaitConfirm_WaitConfirm_Params Parms;

	Parms.OwningAbility = OwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*            InAbility                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* InAbility)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitConfirm", "OnConfirmCallback");

	Params::UAbilityTask_WaitConfirm_OnConfirmCallback_Params Parms;

	Parms.InAbility = InAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitConfirmCancel*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(class UGameplayAbility* OwningAbility)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "WaitConfirmCancel");

	Params::UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params Parms;

	Parms.OwningAbility = OwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalConfirmCallback");

	Params::UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalCancelCallback");

	Params::UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnConfirmCallback");

	Params::UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnCancelCallback");

	Params::UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitDelay*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(class UGameplayAbility* OwningAbility, float Time)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitDelay", "WaitDelay");

	Params::UAbilityTask_WaitDelay_WaitDelay_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UAbilitySystemComponent*     Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec         SpecApplied                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied", "OnApplyGameplayEffectCallback");

	Params::UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params Parms;

	Parms.Target = Target;
	Parms.SpecApplied = SpecApplied;
	Parms.ActiveHandle = ActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           SourceTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TargetTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Self*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class UActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf_Query");

	Params::UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.SourceFilter = SourceFilter;
	Parms.SourceTagQuery = SourceTagQuery;
	Parms.TargetTagQuery = TargetTagQuery;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Self*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class UActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf");

	Params::UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.SourceFilter = SourceFilter;
	Parms.SourceTagRequirements = SourceTagRequirements;
	Parms.TargetTagRequirements = TargetTagRequirements;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           SourceTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TargetTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Target*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class UActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget_Query");

	Params::UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.SourceFilter = SourceFilter;
	Parms.SourceTagQuery = SourceTagQuery;
	Parms.TargetTagQuery = TargetTagQuery;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleTargetFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffects                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Target*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class UActor* OptionalExternalOwner, bool ListenForPeriodicEffects)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget");

	Params::UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TargetFilter = TargetFilter;
	Parms.SourceTagRequirements = SourceTagRequirements;
	Parms.TargetTagRequirements = TargetTagRequirements;
	Parms.TriggerOnce = TriggerOnce;
	Parms.OptionalExternalOwner = OptionalExternalOwner;
	Parms.ListenForPeriodicEffects = ListenForPeriodicEffects;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalTarget                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectBlockedImmunity*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class UActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectBlockedImmunity", "WaitGameplayEffectBlockedByImmunity");

	Params::UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.SourceTagRequirements = SourceTagRequirements;
	Parms.TargetTagRequirements = TargetTagRequirements;
	Parms.OptionalExternalTarget = OptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectRemoved*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "WaitForGameplayEffectRemoved");

	Params::UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayEffectRemovalInfo  InGameplayEffectRemovalInfo                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "OnGameplayEffectRemoved");

	Params::UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params Parms;

	Parms.InGameplayEffectRemovalInfo = InGameplayEffectRemovalInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectStackChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "WaitForGameplayEffectStackChange");

	Params::UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
// (Final, Native, Public)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OldCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32 NewCount, int32 OldCount)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "OnGameplayEffectStackChange");

	Params::UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params Parms;

	Parms.Handle = Handle;
	Parms.NewCount = NewCount;
	Parms.OldCount = OldCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OptionalExternalTarget                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyMatchExact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class UActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayEvent", "WaitGameplayEvent");

	Params::UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.EventTag = EventTag;
	Parms.OptionalExternalTarget = OptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;
	Parms.OnlyMatchExact = OnlyMatchExact;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// (Native, Public)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& Tag, int32 NewCount)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayTag", "GameplayTagCallback");

	Params::UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params Parms;

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InOptionalExternalTarget                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagAdded*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class UActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayTagAdded", "WaitGameplayTagAdd");

	Params::UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Tag = Tag;
	Parms.InOptionalExternalTarget = InOptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InOptionalExternalTarget                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagRemoved*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class UActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayTagRemoved", "WaitGameplayTagRemove");

	Params::UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Tag = Tag;
	Parms.InOptionalExternalTarget = InOptionalExternalTarget;
	Parms.OnlyTriggerOnce = OnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TagQuery                                                         (ConstParm, Parm, NativeAccessSpecifierPublic)
// class UActor*                      InOptionalExternalTarget                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitGameplayTagQueryTriggerConditionTriggerCondition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyTriggerOnce                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagQuery*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagQuery* UAbilityTask_WaitGameplayTagQuery::WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& TagQuery, class UActor* InOptionalExternalTarget, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayTagQuery", "WaitGameplayTagQuery");

	Params::UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TagQuery = TagQuery;
	Parms.InOptionalExternalTarget = InOptionalExternalTarget;
	Parms.TriggerCondition = TriggerCondition;
	Parms.bOnlyTriggerOnce = bOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayTagQuery::UpdateTargetTags(const struct FGameplayTag& Tag, int32 NewCount)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitGameplayTagQuery", "UpdateTargetTags");

	Params::UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Params Parms;

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTestAlreadyPressed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitInputPress* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitInputPress", "WaitInputPress");

	Params::UAbilityTask_WaitInputPress_WaitInputPress_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.bTestAlreadyPressed = bTestAlreadyPressed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_WaitInputPress", "OnPressCallback");

	Params::UAbilityTask_WaitInputPress_OnPressCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTestAlreadyReleased                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitInputRelease*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitInputRelease", "WaitInputRelease");

	Params::UAbilityTask_WaitInputRelease_WaitInputRelease_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.bTestAlreadyReleased = bTestAlreadyReleased;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_WaitInputRelease", "OnReleaseCallback");

	Params::UAbilityTask_WaitInputRelease_OnReleaseCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// (Final, Native, Public)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitMovementModeChange", "OnMovementModeChange");

	Params::UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params Parms;

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           NewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitMovementModeChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, enum class EMovementMode NewMode)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitMovementModeChange", "CreateWaitMovementModeChange");

	Params::UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.NewMode = NewMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitOverlap*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(class UGameplayAbility* OwningAbility)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitOverlap", "WaitForOverlap");

	Params::UAbilityTask_WaitOverlap_WaitForOverlap_Params Parms;

	Parms.OwningAbility = OwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComp                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilityTask_WaitOverlap::OnHitCallback(class UPrimitiveComponent* HitComp, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitOverlap", "OnHitCallback");

	Params::UAbilityTask_WaitOverlap_OnHitCallback_Params Parms;

	Parms.HitComp = HitComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayTargetingConfirmationConfirmationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayAbilityTargetActor* TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitTargetData* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, class UGameplayAbilityTargetActor* TargetActor)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitTargetData", "WaitTargetDataUsingActor");

	Params::UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.ConfirmationType = ConfirmationType;
	Parms.TargetActor = TargetActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayTargetingConfirmationConfirmationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitTargetData* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, TSubclassOf<class UGameplayAbilityTargetActor> Class)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitTargetData", "WaitTargetData");

	Params::UAbilityTask_WaitTargetData_WaitTargetData_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.ConfirmationType = ConfirmationType;
	Parms.Class = Class;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static auto Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCancelledCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActivationTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params Parms;

	Parms.Data = Data;
	Parms.ActivationTag = ActivationTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReadyCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params Parms;

	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataCancelledCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params Parms;

	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::FinishSpawningActor(class UGameplayAbility* OwningAbility, class UGameplayAbilityTargetActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitTargetData", "FinishSpawningActor");

	Params::UAbilityTask_WaitTargetData_FinishSpawningActor_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.SpawnedActor = SpawnedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class UGameplayAbilityTargetActor> Class, class UGameplayAbilityTargetActor** SpawnedActor)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitTargetData", "BeginSpawningActor");

	Params::UAbilityTask_WaitTargetData_BeginSpawningActor_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Class = Class;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumMagnitude                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitVelocityChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude)
{
	static auto Func = Class->GetFunction("AbilityTask_WaitVelocityChange", "CreateWaitVelocityChange");

	Params::UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Direction = Direction;
	Parms.MinimumMagnitude = MinimumMagnitude;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasOrigin");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params Parms;

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleHitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasHitResult");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params Parms;

	Parms.HitResult = HitResult;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasEndPoint");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params Parms;

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasActor");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params Parms;

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCountToMax");

	Params::UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params Parms;

	Parms.SpecHandle = SpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              StackCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32 StackCount)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCount");

	Params::UAbilitySystemBlueprintLibrary_SetStackCount_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.StackCount = StackCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SetDuration");

	Params::UAbilitySystemBlueprintLibrary_SetDuration_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.Duration = Duration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(class UActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SendGameplayEventToActor");

	Params::UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params Parms;

	Parms.Actor = Actor;
	Parms.EventTag = EventTag;
	Parms.Payload = Payload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bShouldReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::RemoveLooseGameplayTags(class UActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "RemoveLooseGameplayTags");

	Params::UAbilitySystemBlueprintLibrary_RemoveLooseGameplayTags_Params Parms;

	Parms.Actor = Actor;
	Parms.GameplayTags = GameplayTags;
	Parms.bShouldReplicate = bShouldReplicate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          AttributeA                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeB                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_GameplayAttributeGameplayAttribute");

	Params::UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params Parms;

	Parms.AttributeA = AttributeA;
	Parms.AttributeB = AttributeB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle  A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_GameplayAbilitySpecHandle");

	Params::UAbilitySystemBlueprintLibrary_NotEqual_GameplayAbilitySpecHandle_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::NotEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_ActiveGameplayEffectHandle");

	Params::UAbilitySystemBlueprintLibrary_NotEqual_ActiveGameplayEffectHandle_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayEffect*             InGameplayEffect                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InEffectCauser                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InLevel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class UActor* InInstigator, class UActor* InEffectCauser, float InLevel)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "MakeSpecHandle");

	Params::UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params Parms;

	Parms.InGameplayEffect = InGameplayEffect;
	Parms.InInstigator = InInstigator;
	Parms.InEffectCauser = InEffectCauser;
	Parms.InLevel = InLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NormalizedMagnitude                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawMagnitude                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                MatchedTagName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OriginalTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedSourceTags                                             (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedTargetTags                                             (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Instigator                                                       (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      EffectCauser                                                     (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SourceObject                                                     (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysicalMaterial                                                 (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AbilityLevel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetAttachComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplicateLocationWhenUsingMinimalRepProxy                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayCueParameters UAbilitySystemBlueprintLibrary::MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayTag& MatchedTagName, const struct FGameplayTag& OriginalTag, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FVector& Location, const struct FVector& Normal, class UActor* Instigator, class UActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "MakeGameplayCueParameters");

	Params::UAbilitySystemBlueprintLibrary_MakeGameplayCueParameters_Params Parms;

	Parms.NormalizedMagnitude = NormalizedMagnitude;
	Parms.RawMagnitude = RawMagnitude;
	Parms.EffectContext = EffectContext;
	Parms.MatchedTagName = MatchedTagName;
	Parms.OriginalTag = OriginalTag;
	Parms.AggregatedSourceTags = AggregatedSourceTags;
	Parms.AggregatedTargetTags = AggregatedTargetTags;
	Parms.Location = Location;
	Parms.Normal = Normal;
	Parms.Instigator = Instigator;
	Parms.EffectCauser = EffectCauser;
	Parms.SourceObject = SourceObject;
	Parms.PhysicalMaterial = PhysicalMaterial;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.AbilityLevel = AbilityLevel;
	Parms.TargetAttachComponent = TargetAttachComponent;
	Parms.bReplicateLocationWhenUsingMinimalRepProxy = bReplicateLocationWhenUsingMinimalRepProxy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTargetDataFilter   Filter                                                           (Parm, NativeAccessSpecifierPublic)
// class UActor*                      FilterActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class UActor* FilterActor)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "MakeFilterHandle");

	Params::UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params Parms;

	Parms.Filter = Filter;
	Parms.FilterActor = FilterActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsValid(const struct FGameplayAttribute& Attribute)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "IsValid");

	Params::UAbilitySystemBlueprintLibrary_IsValid_Params Parms;

	Parms.Attribute = Attribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlledPlayer");

	Params::UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params Parms;

	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlled");

	Params::UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params Parms;

	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::HasHitResult(const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "HasHitResult");

	Params::UAbilitySystemBlueprintLibrary_HasHitResult_Params Parms;

	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataOrigin");

	Params::UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params Parms;

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPointTransform");

	Params::UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params Parms;

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPoint");

	Params::UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params Parms;

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::GetOrigin(const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetOrigin");

	Params::UAbilitySystemBlueprintLibrary_GetOrigin_Params Parms;

	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetModifiedAttributeMagnitude");

	Params::UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.Attribute = Attribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorTransform");

	Params::UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params Parms;

	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorActor");

	Params::UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params Parms;

	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleHitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResultFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params Parms;

	Parms.HitResult = HitResult;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResult");

	Params::UAbilitySystemBlueprintLibrary_GetHitResult_Params Parms;

	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> EffectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayEffectUIData>DataType                                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayEffectUIData*       ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayEffectUIData* UAbilitySystemBlueprintLibrary::GetGameplayEffectUIData(TSubclassOf<class UGameplayEffect> EffectClass, TSubclassOf<class UGameplayEffectUIData> DataType)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayEffectUIData");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayEffectUIData_Params Parms;

	Parms.EffectClass = EffectClass;
	Parms.DataType = DataType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayEffect*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayEffect* UAbilitySystemBlueprintLibrary::GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayEffectFromActiveEffectHandle");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayEffectFromActiveEffectHandle_Params Parms;

	Parms.ActiveHandle = ActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(class UActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueEndLocationAndNormal");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Location != nullptr)
		*Location = Parms.Location;

	if (Normal != nullptr)
		*Normal = Parms.Normal;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(class UActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueDirection");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Direction != nullptr)
		*Direction = Parms.Direction;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilitySpecHandle                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsInstance                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayAbility*            ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayAbility* UAbilitySystemBlueprintLibrary::GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool* bIsInstance)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayAbilityFromSpecHandle");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayAbilityFromSpecHandle_Params Parms;

	Parms.AbilitySystem = AbilitySystem;
	Parms.AbilitySpecHandle = AbilitySpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bIsInstance != nullptr)
		*bIsInstance = Parms.bIsInstance;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeFromAbilitySystemComponent");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params Parms;

	Parms.AbilitySystem = AbilitySystem;
	Parms.Attribute = Attribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBaseFromAbilitySystemComponent");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.Attribute = Attribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBase(class UActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBase");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params Parms;

	Parms.Actor = Actor;
	Parms.Attribute = Attribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(class UActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttribute");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params Parms;

	Parms.Actor = Actor;
	Parms.Attribute = Attribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetEffectContext");

	Params::UAbilitySystemBlueprintLibrary_GetEffectContext_Params Parms;

	Parms.SpecHandle = SpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAbilitySystemBlueprintLibrary::GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& Attribute)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetDebugStringFromGameplayAttribute");

	Params::UAbilitySystemBlueprintLibrary_GetDebugStringFromGameplayAttribute_Params Parms;

	Parms.Attribute = Attribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetDataCountFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params Parms;

	Parms.TargetData = TargetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<struct FGameplayEffectSpecHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetAllLinkedGameplayEffectSpecHandles");

	Params::UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params Parms;

	Parms.SpecHandle = SpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UActor*> UAbilitySystemBlueprintLibrary::GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetAllActorsFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetAllActorsFromTargetData_Params Parms;

	Parms.TargetData = TargetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActorsFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params Parms;

	Parms.TargetData = TargetData;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetActorCount(const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActorCount");

	Params::UAbilitySystemBlueprintLibrary_GetActorCount_Params Parms;

	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32 Index)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActorByIndex");

	Params::UAbilitySystemBlueprintLibrary_GetActorByIndex_Params Parms;

	Parms.Parameters = Parameters;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectTotalDuration");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration_Params Parms;

	Parms.ActiveHandle = ActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStartTime");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime_Params Parms;

	Parms.ActiveHandle = ActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackLimitCount");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params Parms;

	Parms.ActiveHandle = ActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackCount");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params Parms;

	Parms.ActiveHandle = ActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectRemainingDuration");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActiveHandle = ActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectExpectedEndTime");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime_Params Parms;

	Parms.ActiveHandle = ActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectDebugString");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params Parms;

	Parms.ActiveHandle = ActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(class UActor* Actor)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetAbilitySystemComponent");

	Params::UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FInterfaceProperty_                TargetCueInterface                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(FInterfaceProperty_ TargetCueInterface, enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "ForwardGameplayCueToTarget");

	Params::UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params Parms;

	Parms.TargetCueInterface = TargetCueInterface;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleActorFilterClass                                                 (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "FilterTargetData");

	Params::UAbilitySystemBlueprintLibrary_FilterTargetData_Params Parms;

	Parms.TargetDataHandle = TargetDataHandle;
	Parms.ActorFilterClass = ActorFilterClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       SourceTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TargetTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              BaseValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTagsAndBase");

	Params::UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params Parms;

	Parms.AbilitySystem = AbilitySystem;
	Parms.Attribute = Attribute;
	Parms.SourceTags = SourceTags;
	Parms.TargetTags = TargetTags;
	Parms.BaseValue = BaseValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       SourceTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TargetTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool* bSuccess)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTags");

	Params::UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params Parms;

	Parms.AbilitySystem = AbilitySystem;
	Parms.Attribute = Attribute;
	Parms.SourceTags = SourceTags;
	Parms.TargetTags = TargetTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          AttributeA                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeB                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_GameplayAttributeGameplayAttribute");

	Params::UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params Parms;

	Parms.AttributeA = AttributeA;
	Parms.AttributeB = AttributeB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle  A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_GameplayAbilitySpecHandle");

	Params::UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAbilitySpecHandle_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EqualEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_ActiveGameplayEffectHandle");

	Params::UAbilitySystemBlueprintLibrary_EqualEqual_ActiveGameplayEffectHandle_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextSetOrigin");

	Params::UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params Parms;

	Parms.EffectContext = EffectContext;
	Parms.Origin = Origin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsValid");

	Params::UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params Parms;

	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsInstigatorLocallyControlled");

	Params::UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params Parms;

	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextHasHitResult");

	Params::UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params Parms;

	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetSourceObject");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params Parms;

	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOriginalInstigatorActor");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params Parms;

	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOrigin");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params Parms;

	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetInstigatorActor");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params Parms;

	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetHitResult");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params Parms;

	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetEffectCauser");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params Parms;

	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bReset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextAddHitResult");

	Params::UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params Parms;

	Parms.EffectContext = EffectContext;
	Parms.HitResult = HitResult;
	Parms.bReset = bReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index, class UActor* Actor)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "DoesTargetDataContainActor");

	Params::UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params Parms;

	Parms.TargetData = TargetData;
	Parms.Index = Index;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagReqs                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagReqs                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "DoesGameplayCueMeetTagRequirements");

	Params::UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params Parms;

	Parms.Parameters = Parameters;
	Parms.SourceTagReqs = SourceTagReqs;
	Parms.TargetTagReqs = TargetTagReqs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      InNewInstigator                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InEffectCauser                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   GameplayEffectSpecHandle_Clone                                   (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::CloneSpecHandle(class UActor* InNewInstigator, class UActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "CloneSpecHandle");

	Params::UAbilitySystemBlueprintLibrary_CloneSpecHandle_Params Parms;

	Parms.InNewInstigator = InNewInstigator;
	Parms.InEffectCauser = InEffectCauser;
	Parms.GameplayEffectSpecHandle_Clone = GameplayEffectSpecHandle_Clone;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              NormalizedMagnitude                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawMagnitude                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                MatchedTagName                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OriginalTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedSourceTags                                             (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedTargetTags                                             (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Instigator                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      EffectCauser                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SourceObject                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysicalMaterial                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AbilityLevel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetAttachComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplicateLocationWhenUsingMinimalRepProxy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTag* MatchedTagName, struct FGameplayTag* OriginalTag, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTagContainer* AggregatedTargetTags, struct FVector* Location, struct FVector* Normal, class UActor** Instigator, class UActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int32* GameplayEffectLevel, int32* AbilityLevel, class USceneComponent** TargetAttachComponent, bool* bReplicateLocationWhenUsingMinimalRepProxy)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "BreakGameplayCueParameters");

	Params::UAbilitySystemBlueprintLibrary_BreakGameplayCueParameters_Params Parms;

	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (NormalizedMagnitude != nullptr)
		*NormalizedMagnitude = Parms.NormalizedMagnitude;

	if (RawMagnitude != nullptr)
		*RawMagnitude = Parms.RawMagnitude;

	if (EffectContext != nullptr)
		*EffectContext = Parms.EffectContext;

	if (MatchedTagName != nullptr)
		*MatchedTagName = Parms.MatchedTagName;

	if (OriginalTag != nullptr)
		*OriginalTag = Parms.OriginalTag;

	if (AggregatedSourceTags != nullptr)
		*AggregatedSourceTags = Parms.AggregatedSourceTags;

	if (AggregatedTargetTags != nullptr)
		*AggregatedTargetTags = Parms.AggregatedTargetTags;

	if (Location != nullptr)
		*Location = Parms.Location;

	if (Normal != nullptr)
		*Normal = Parms.Normal;

	if (Instigator != nullptr)
		*Instigator = Parms.Instigator;

	if (EffectCauser != nullptr)
		*EffectCauser = Parms.EffectCauser;

	if (SourceObject != nullptr)
		*SourceObject = Parms.SourceObject;

	if (PhysicalMaterial != nullptr)
		*PhysicalMaterial = Parms.PhysicalMaterial;

	if (GameplayEffectLevel != nullptr)
		*GameplayEffectLevel = Parms.GameplayEffectLevel;

	if (AbilityLevel != nullptr)
		*AbilityLevel = Parms.AbilityLevel;

	if (TargetAttachComponent != nullptr)
		*TargetAttachComponent = Parms.TargetAttachComponent;

	if (bReplicateLocationWhenUsingMinimalRepProxy != nullptr)
		*bReplicateLocationWhenUsingMinimalRepProxy = Parms.bReplicateLocationWhenUsingMinimalRepProxy;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                DataTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Magnitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AssignTagSetByCallerMagnitude");

	Params::UAbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.DataTag = DataTag;
	Parms.Magnitude = Magnitude;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// class FName                        DataName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Magnitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, class FName DataName, float Magnitude)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AssignSetByCallerMagnitude");

	Params::UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.DataName = DataName;
	Parms.Magnitude = Magnitude;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetHandle                                                     (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleHandleToAdd                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AppendTargetDataHandle");

	Params::UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params Parms;

	Parms.TargetHandle = TargetHandle;
	Parms.HandleToAdd = HandleToAdd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bShouldReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::AddLooseGameplayTags(class UActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddLooseGameplayTags");

	Params::UAbilitySystemBlueprintLibrary_AddLooseGameplayTags_Params Parms;

	Parms.Actor = Actor;
	Parms.GameplayTags = GameplayTags;
	Parms.bShouldReplicate = bShouldReplicate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   LinkedGameplayEffectSpec                                         (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffectSpec");

	Params::UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayEffect> LinkedGameplayEffect                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffect");

	Params::UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.LinkedGameplayEffect = LinkedGameplayEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       NewGameplayTags                                                  (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTags");

	Params::UAbilitySystemBlueprintLibrary_AddGrantedTags_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.NewGameplayTags = NewGameplayTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                NewGameplayTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTag");

	Params::UAbilitySystemBlueprintLibrary_AddGrantedTag_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.NewGameplayTag = NewGameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       NewGameplayTags                                                  (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTags");

	Params::UAbilitySystemBlueprintLibrary_AddAssetTags_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.NewGameplayTags = NewGameplayTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                NewGameplayTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTag");

	Params::UAbilitySystemBlueprintLibrary_AddAssetTag_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.NewGameplayTag = NewGameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfoSourceLocation                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetingLocationInfoTargetLocation                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromLocations");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params Parms;

	Parms.SourceLocation = SourceLocation;
	Parms.TargetLocation = TargetLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(struct FHitResult& HitResult)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromHitResult");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params Parms;

	Parms.HitResult = HitResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UActor*>              ActorArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               OneTargetPerHandle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(TArray<class UActor*>& ActorArray, bool OneTargetPerHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActorArray");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params Parms;

	Parms.ActorArray = ActorArray;
	Parms.OneTargetPerHandle = OneTargetPerHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(class UActor* Actor)
{
	static auto Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActor");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
// (BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<struct FGameplayTag, float>   NewSetByCallerValues                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::UpdateActiveGameplayEffectSetByCallerMagnitudes(const struct FActiveGameplayEffectHandle& ActiveHandle, TMap<struct FGameplayTag, float>& NewSetByCallerValues)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "UpdateActiveGameplayEffectSetByCallerMagnitudes");

	Params::UAbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitudes_Params Parms;

	Parms.ActiveHandle = ActiveHandle;
	Parms.NewSetByCallerValues = NewSetByCallerValues;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                SetByCallerTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::UpdateActiveGameplayEffectSetByCallerMagnitude(const struct FActiveGameplayEffectHandle& ActiveHandle, const struct FGameplayTag& SetByCallerTag, float NewValue)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "UpdateActiveGameplayEffectSetByCallerMagnitude");

	Params::UAbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitude_Params Parms;

	Parms.ActiveHandle = ActiveHandle;
	Parms.SetByCallerTag = SetByCallerTag;
	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayAbility>InAbilityToActivate                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRemoteActivation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbilityByClass");

	Params::UAbilitySystemComponent_TryActivateAbilityByClass_Params Parms;

	Parms.InAbilityToActivate = InAbilityToActivate;
	Parms.bAllowRemoteActivation = bAllowRemoteActivation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRemoteActivation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool bAllowRemoteActivation)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbility");

	Params::UAbilitySystemComponent_TryActivateAbility_Params Parms;

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.bAllowRemoteActivation = bAllowRemoteActivation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       GameplayTagContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowRemoteActivation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbilitiesByTag");

	Params::UAbilitySystemComponent_TryActivateAbilitiesByTag_Params Parms;

	Parms.GameplayTagContainer = GameplayTagContainer;
	Parms.bAllowRemoteActivation = bAllowRemoteActivation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
// (Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::TargetConfirm()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "TargetConfirm");

	Params::UAbilitySystemComponent_TargetConfirm_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
// (Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::TargetCancel()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "TargetCancel");

	Params::UAbilitySystemComponent_TargetCancel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewInhibit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "SetUserAbilityActivationInhibited");

	Params::UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params Parms;

	Parms.NewInhibit = NewInhibit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectQuery        Query                                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              NewLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int32 NewLevel)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevelUsingQuery");

	Params::UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params Parms;

	Parms.Query = Query;
	Parms.NewLevel = NewLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int32 NewLevel)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevel");

	Params::UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params Parms;

	Parms.ActiveHandle = ActiveHandle;
	Parms.NewLevel = NewLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InputPressed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          TriggerEventData                                                 (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerTryActivateAbilityWithEventData");

	Params::UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params Parms;

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.InputPressed = InputPressed;
	Parms.PredictionKey = PredictionKey;
	Parms.TriggerEventData = TriggerEventData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InputPressed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerTryActivateAbility");

	Params::UAbilitySystemComponent_ServerTryActivateAbility_Params Parms;

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.InputPressed = InputPressed;
	Parms.PredictionKey = PredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetDataCancelled");

	Params::UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params Parms;

	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	Parms.CurrentPredictionKey = CurrentPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReplicatedTargetDataHandle                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetData");

	Params::UAbilitySystemComponent_ServerSetReplicatedTargetData_Params Parms;

	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	Parms.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	Parms.ApplicationTag = ApplicationTag;
	Parms.CurrentPredictionKey = CurrentPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// enum class EAbilityGenericReplicatedEventEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize100      VectorPayload                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEventWithPayload");

	Params::UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params Parms;

	Parms.EventType = EventType;
	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	Parms.CurrentPredictionKey = CurrentPredictionKey;
	Parms.VectorPayload = VectorPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// enum class EAbilityGenericReplicatedEventEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEvent");

	Params::UAbilitySystemComponent_ServerSetReplicatedEvent_Params Parms;

	Parms.EventType = EventType;
	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	Parms.CurrentPredictionKey = CurrentPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerSetInputReleased");

	Params::UAbilitySystemComponent_ServerSetInputReleased_Params Parms;

	Parms.AbilityHandle = AbilityHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerSetInputPressed");

	Params::UAbilitySystemComponent_ServerSetInputPressed_Params Parms;

	Parms.AbilityHandle = AbilityHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<class FString>              Strings                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings(TArray<class FString>& Strings)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerPrintDebug_RequestWithStrings");

	Params::UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params Parms;

	Parms.Strings = Strings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void UAbilitySystemComponent::ServerPrintDebug_Request()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerPrintDebug_Request");

	Params::UAbilitySystemComponent_ServerPrintDebug_Request_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToEnd                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerEndAbility");

	Params::UAbilitySystemComponent_ServerEndAbility_Params Parms;

	Parms.AbilityToEnd = AbilityToEnd;
	Parms.ActivationInfo = ActivationInfo;
	Parms.PredictionKey = PredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*                ClientAnimMontage                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InPlayRate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetPlayRate");

	Params::UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params Parms;

	Parms.ClientAnimMontage = ClientAnimMontage;
	Parms.InPlayRate = InPlayRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*                ClientAnimMontage                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClientPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NextSectionName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, class FName SectionName, class FName NextSectionName)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetNextSectionName");

	Params::UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params Parms;

	Parms.ClientAnimMontage = ClientAnimMontage;
	Parms.ClientPosition = ClientPosition;
	Parms.SectionName = SectionName;
	Parms.NextSectionName = NextSectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*                ClientAnimMontage                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, class FName SectionName)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageJumpToSectionName");

	Params::UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params Parms;

	Parms.ClientAnimMontage = ClientAnimMontage;
	Parms.SectionName = SectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToCancel                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerCancelAbility");

	Params::UAbilitySystemComponent_ServerCancelAbility_Params Parms;

	Parms.AbilityToCancel = AbilityToCancel;
	Parms.ActivationInfo = ActivationInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FServerAbilityRPCBatch      BatchInfo                                                        (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerAbilityRPCBatch(const struct FServerAbilityRPCBatch& BatchInfo)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ServerAbilityRPCBatch");

	Params::UAbilitySystemComponent_ServerAbilityRPCBatch_Params Parms;

	Parms.BatchInfo = BatchInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffect                                                   (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     InstigatorAbilitySystemComponent                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffectBySourceEffect");

	Params::UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params Parms;

	Parms.GameplayEffect = GameplayEffect;
	Parms.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	Parms.StacksToRemove = StacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffect");

	Params::UAbilitySystemComponent_RemoveActiveGameplayEffect_Params Parms;

	Parms.Handle = Handle;
	Parms.StacksToRemove = StacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params Parms;

	Parms.Tags = Tags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithSourceTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params Parms;

	Parms.Tags = Tags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithGrantedTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params Parms;

	Parms.Tags = Tags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithAppliedTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params Parms;

	Parms.Tags = Tags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ReleaseInputID(int32 InputID)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ReleaseInputID");

	Params::UAbilitySystemComponent_ReleaseInputID_Params Parms;

	Parms.InputID = InputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.PressInputID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::PressInputID(int32 InputID)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "PressInputID");

	Params::UAbilitySystemComponent_PressInputID_Params Parms;

	Parms.InputID = InputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
// (Final, Native, Public)
// Parameters:
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::OnSpawnedAttributesEndPlayed(class UActor* InActor, enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "OnSpawnedAttributesEndPlayed");

	Params::UAbilitySystemComponent_OnSpawnedAttributesEndPlayed_Params Parms;

	Parms.InActor = InActor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class UAttributeSet*>       PreviousSpawnedAttributes                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::OnRep_SpawnedAttributes(TArray<class UAttributeSet*>& PreviousSpawnedAttributes)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "OnRep_SpawnedAttributes");

	Params::UAbilitySystemComponent_OnRep_SpawnedAttributes_Params Parms;

	Parms.PreviousSpawnedAttributes = PreviousSpawnedAttributes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
// (Native, Public)
// Parameters:

void UAbilitySystemComponent::OnRep_ServerDebugString()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ServerDebugString");

	Params::UAbilitySystemComponent_OnRep_ServerDebugString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// (Native, Protected)
// Parameters:

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ReplicatedAnimMontage");

	Params::UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// (Final, Native, Public)
// Parameters:

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "OnRep_OwningActor");

	Params::UAbilitySystemComponent_OnRep_OwningActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
// (Native, Public)
// Parameters:

void UAbilitySystemComponent::OnRep_ClientDebugString()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ClientDebugString");

	Params::UAbilitySystemComponent_OnRep_ClientDebugString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// (Native, Protected)
// Parameters:

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ActivateAbilities");

	Params::UAbilitySystemComponent_OnRep_ActivateAbilities_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::OnOwnerActorDestroyed(class UActor* InActor)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "OnOwnerActorDestroyed");

	Params::UAbilitySystemComponent_OnOwnerActorDestroyed_Params Parms;

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::OnAvatarActorDestroyed(class UActor* InActor)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "OnAvatarActorDestroyed");

	Params::UAbilitySystemComponent_OnAvatarActorDestroyed_Params Parms;

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTags                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params Parms;

	Parms.GameplayCueTags = GameplayCueTags;
	Parms.PredictionKey = PredictionKey;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTags                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params Parms;

	Parms.GameplayCueTags = GameplayCueTags;
	Parms.PredictionKey = PredictionKey;
	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTags                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params Parms;

	Parms.GameplayCueTags = GameplayCueTags;
	Parms.PredictionKey = PredictionKey;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC   Spec                                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_FromSpec");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params Parms;

	Parms.Spec = Spec;
	Parms.PredictionKey = PredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.GameplayCueParameters = GameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC   Spec                                                             (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params Parms;

	Parms.Spec = Spec;
	Parms.PredictionKey = PredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.PredictionKey = PredictionKey;
	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "MakeOutgoingSpec");

	Params::UAbilitySystemComponent_MakeOutgoingSpec_Params Parms;

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Level = Level;
	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "MakeEffectContext");

	Params::UAbilitySystemComponent_MakeEffectContext_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAttributeSet>   Attributes                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*                  DataTable                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::K2_InitStats(TSubclassOf<class UAttributeSet> Attributes, class UDataTable* DataTable)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "K2_InitStats");

	Params::UAbilitySystemComponent_K2_InitStats_Params Parms;

	Parms.Attributes = Attributes;
	Parms.DataTable = DataTable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayAbility>AbilityClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayAbilitySpecHandle UAbilitySystemComponent::K2_GiveAbilityAndActivateOnce(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "K2_GiveAbilityAndActivateOnce");

	Params::UAbilitySystemComponent_K2_GiveAbilityAndActivateOnce_Params Parms;

	Parms.AbilityClass = AbilityClass;
	Parms.Level = Level;
	Parms.InputID = InputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayAbility>AbilityClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayAbilitySpecHandle UAbilitySystemComponent::K2_GiveAbility(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "K2_GiveAbility");

	Params::UAbilitySystemComponent_K2_GiveAbility_Params Parms;

	Parms.AbilityClass = AbilityClass;
	Parms.Level = Level;
	Parms.InputID = InputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "IsGameplayCueActive");

	Params::UAbilitySystemComponent_IsGameplayCueActive_Params Parms;

	Parms.GameplayCueTag = GameplayCueTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.InputConfirm
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::InputConfirm()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "InputConfirm");

	Params::UAbilitySystemComponent_InputConfirm_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.InputCancel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::InputCancel()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "InputCancel");

	Params::UAbilitySystemComponent_InputCancel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetUserAbilityActivationInhibited");

	Params::UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::GetGameplayTagCount(const struct FGameplayTag& GameplayTag)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayTagCount");

	Params::UAbilitySystemComponent_GetGameplayTagCount_Params Parms;

	Parms.GameplayTag = GameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectMagnitude");

	Params::UAbilitySystemComponent_GetGameplayEffectMagnitude_Params Parms;

	Parms.Handle = Handle;
	Parms.Attribute = Attribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftClassPtr<class UGameplayEffect>SoftSourceGameplayEffect                                         (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     OptionalInstigatorFilterComponent                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnforceOnGoingCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::GetGameplayEffectCount_IfLoaded(TSoftClassPtr<class UGameplayEffect> SoftSourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectCount_IfLoaded");

	Params::UAbilitySystemComponent_GetGameplayEffectCount_IfLoaded_Params Parms;

	Parms.SoftSourceGameplayEffect = SoftSourceGameplayEffect;
	Parms.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	Parms.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGameplayEffect> SourceGameplayEffect                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     OptionalInstigatorFilterComponent                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnforceOnGoingCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectCount");

	Params::UAbilitySystemComponent_GetGameplayEffectCount_Params Parms;

	Parms.SourceGameplayEffect = SourceGameplayEffect;
	Parms.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	Parms.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFound                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemComponent::GetGameplayAttributeValue(const struct FGameplayAttribute& Attribute, bool* bFound)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayAttributeValue");

	Params::UAbilitySystemComponent_GetGameplayAttributeValue_Params Parms;

	Parms.Attribute = Attribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bFound != nullptr)
		*bFound = Parms.bFound;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TSubclassOf<class UAttributeSet>   AttributeSetClass                                                (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAttributeSet*               ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAttributeSet* UAbilitySystemComponent::GetAttributeSet(TSubclassOf<class UAttributeSet> AttributeSetClass)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetAttributeSet");

	Params::UAbilitySystemComponent_GetAttributeSet_Params Parms;

	Parms.AttributeSetClass = AttributeSetClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FGameplayAttribute>  OutAttributes                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::GetAllAttributes(TArray<struct FGameplayAttribute>* OutAttributes)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetAllAttributes");

	Params::UAbilitySystemComponent_GetAllAttributes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAttributes != nullptr)
		*OutAttributes = Parms.OutAttributes;

}


// Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FGameplayAbilitySpecHandle>OutAbilityHandles                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::GetAllAbilities(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetAllAbilities");

	Params::UAbilitySystemComponent_GetAllAbilities_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAbilityHandles != nullptr)
		*OutAbilityHandles = Parms.OutAbilityHandles;

}


// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffectsWithAllTags(const struct FGameplayTagContainer& Tags)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetActiveEffectsWithAllTags");

	Params::UAbilitySystemComponent_GetActiveEffectsWithAllTags_Params Parms;

	Parms.Tags = Tags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FGameplayEffectQuery        Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffects(struct FGameplayEffectQuery& Query)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "GetActiveEffects");

	Params::UAbilitySystemComponent_GetActiveEffects_Params Parms;

	Parms.Query = Query;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FGameplayAbilitySpecHandle>OutAbilityHandles                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::FindAllAbilitiesWithTags(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles, const struct FGameplayTagContainer& Tags, bool bExactMatch)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "FindAllAbilitiesWithTags");

	Params::UAbilitySystemComponent_FindAllAbilitiesWithTags_Params Parms;

	Parms.Tags = Tags;
	Parms.bExactMatch = bExactMatch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAbilityHandles != nullptr)
		*OutAbilityHandles = Parms.OutAbilityHandles;

}


// Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FGameplayAbilitySpecHandle>OutAbilityHandles                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::FindAllAbilitiesWithInputID(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles, int32 InputID)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "FindAllAbilitiesWithInputID");

	Params::UAbilitySystemComponent_FindAllAbilitiesWithInputID_Params Parms;

	Parms.InputID = InputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAbilityHandles != nullptr)
		*OutAbilityHandles = Parms.OutAbilityHandles;

}


// Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FGameplayAbilitySpecHandle>OutAbilityHandles                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           Query                                                            (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::FindAllAbilitiesMatchingQuery(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles, const struct FGameplayTagQuery& Query)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "FindAllAbilitiesMatchingQuery");

	Params::UAbilitySystemComponent_FindAllAbilitiesMatchingQuery_Params Parms;

	Parms.Query = Query;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAbilityHandles != nullptr)
		*OutAbilityHandles = Parms.OutAbilityHandles;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClientTryActivateAbility");

	Params::UAbilitySystemComponent_ClientTryActivateAbility_Params Parms;

	Parms.AbilityToActivate = AbilityToActivate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EAbilityGenericReplicatedEventEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClientSetReplicatedEvent");

	Params::UAbilitySystemComponent_ClientSetReplicatedEvent_Params Parms;

	Parms.EventType = EventType;
	Parms.AbilityHandle = AbilityHandle;
	Parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<class FString>              Strings                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              GameFlags                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientPrintDebug_Response(TArray<class FString>& Strings, int32 GameFlags)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClientPrintDebug_Response");

	Params::UAbilitySystemComponent_ClientPrintDebug_Response_Params Parms;

	Parms.Strings = Strings;
	Parms.GameFlags = GameFlags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToEnd                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClientEndAbility");

	Params::UAbilitySystemComponent_ClientEndAbility_Params Parms;

	Parms.AbilityToEnd = AbilityToEnd;
	Parms.ActivationInfo = ActivationInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToCancel                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClientCancelAbility");

	Params::UAbilitySystemComponent_ClientCancelAbility_Params Parms;

	Parms.AbilityToCancel = AbilityToCancel;
	Parms.ActivationInfo = ActivationInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          TriggerEventData                                                 (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceedWithEventData");

	Params::UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params Parms;

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.PredictionKey = PredictionKey;
	Parms.TriggerEventData = TriggerEventData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceed");

	Params::UAbilitySystemComponent_ClientActivateAbilitySucceed_Params Parms;

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.PredictionKey = PredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int16                              PredictionKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16 PredictionKey)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilityFailed");

	Params::UAbilitySystemComponent_ClientActivateAbilityFailed_Params Parms;

	Parms.AbilityToActivate = AbilityToActivate;
	Parms.PredictionKey = PredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClearAllAbilitiesWithInputID(int32 InputID)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClearAllAbilitiesWithInputID");

	Params::UAbilitySystemComponent_ClearAllAbilitiesWithInputID_Params Parms;

	Parms.InputID = InputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::ClearAllAbilities()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClearAllAbilities");

	Params::UAbilitySystemComponent_ClearAllAbilities_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClearAbility
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClearAbility(struct FGameplayAbilitySpecHandle& Handle)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "ClearAbility");

	Params::UAbilitySystemComponent_ClearAbility_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToTarget");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params Parms;

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Target = Target;
	Parms.Level = Level;
	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToSelf");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params Parms;

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Level = Level;
	Parms.EffectContext = EffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToTarget");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params Parms;

	Parms.SpecHandle = SpecHandle;
	Parms.Target = Target;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToSelf");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params Parms;

	Parms.SpecHandle = SpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "AbilityConfirmOrCancel__DelegateSignature");

	Params::UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int32 InputID)
{
	static auto Func = Class->GetFunction("AbilitySystemComponent", "AbilityAbilityKey__DelegateSignature");

	Params::UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params Parms;

	Parms.InputID = InputID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueFunctionLibrary::RemoveGameplayCueOnActor(class UActor* Target, const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueFunctionLibrary", "RemoveGameplayCueOnActor");

	Params::UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Params Parms;

	Parms.Target = Target;
	Parms.GameplayCueTag = GameplayCueTag;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayCueParameters UGameplayCueFunctionLibrary::MakeGameplayCueParametersFromHitResult(struct FHitResult& HitResult)
{
	static auto Func = Class->GetFunction("GameplayCueFunctionLibrary", "MakeGameplayCueParametersFromHitResult");

	Params::UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Params Parms;

	Parms.HitResult = HitResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueFunctionLibrary::ExecuteGameplayCueOnActor(class UActor* Target, const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueFunctionLibrary", "ExecuteGameplayCueOnActor");

	Params::UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Params Parms;

	Parms.Target = Target;
	Parms.GameplayCueTag = GameplayCueTag;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueFunctionLibrary::AddGameplayCueOnActor(class UActor* Target, const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueFunctionLibrary", "AddGameplayCueOnActor");

	Params::UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Params Parms;

	Parms.Target = Target;
	Parms.GameplayCueTag = GameplayCueTag;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UGameplayCueInterface::ForwardGameplayCueToParent()
{
	static auto Func = Class->GetFunction("GameplayCueInterface", "ForwardGameplayCueToParent");

	Params::UGameplayCueInterface_ForwardGameplayCueToParent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueInterface::BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueInterface", "BlueprintCustomHandler");

	Params::UGameplayCueInterface_BlueprintCustomHandler_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Actor::WhileActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Actor", "WhileActive");

	Params::UGameplayCueNotify_Actor_WhileActive_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Actor::OnRemove(class UActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Actor", "OnRemove");

	Params::UGameplayCueNotify_Actor_OnRemove_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// (Native, Public)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Actor::OnOwnerDestroyed(class UActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Actor", "OnOwnerDestroyed");

	Params::UGameplayCueNotify_Actor_OnOwnerDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Actor::OnExecute(class UActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Actor", "OnExecute");

	Params::UGameplayCueNotify_Actor_OnExecute_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Actor::OnActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Actor", "OnActive");

	Params::UGameplayCueNotify_Actor_OnActive_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Actor::K2_HandleGameplayCue(class UActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Actor", "K2_HandleGameplayCue");

	Params::UGameplayCueNotify_Actor_K2_HandleGameplayCue_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
// (Native, Public, BlueprintCallable)
// Parameters:

void UGameplayCueNotify_Actor::K2_EndGameplayCue()
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Actor", "K2_EndGameplayCue");

	Params::UGameplayCueNotify_Actor_K2_EndGameplayCue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::WhileActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Static", "WhileActive");

	Params::UGameplayCueNotify_Static_WhileActive_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnRemove(class UActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Static", "OnRemove");

	Params::UGameplayCueNotify_Static_OnRemove_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnExecute(class UActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Static", "OnExecute");

	Params::UGameplayCueNotify_Static_OnExecute_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Static", "OnActive");

	Params::UGameplayCueNotify_Static_OnActive_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Static::K2_HandleGameplayCue(class UActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Static", "K2_HandleGameplayCue");

	Params::UGameplayCueNotify_Static_K2_HandleGameplayCue_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Burst.OnBurst
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Burst::OnBurst(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Burst", "OnBurst");

	Params::UGameplayCueNotify_Burst_OnBurst_Params Parms;

	Parms.Target = Target;
	Parms.Parameters = Parameters;
	Parms.SpawnResults = SpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_BurstLatent::OnBurst(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_BurstLatent", "OnBurst");

	Params::UGameplayCueNotify_BurstLatent_OnBurst_Params Parms;

	Parms.Target = Target;
	Parms.Parameters = Parameters;
	Parms.SpawnResults = SpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Looping::OnRemoval(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Looping", "OnRemoval");

	Params::UGameplayCueNotify_Looping_OnRemoval_Params Parms;

	Parms.Target = Target;
	Parms.Parameters = Parameters;
	Parms.SpawnResults = SpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Looping::OnRecurring(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Looping", "OnRecurring");

	Params::UGameplayCueNotify_Looping_OnRecurring_Params Parms;

	Parms.Target = Target;
	Parms.Parameters = Parameters;
	Parms.SpawnResults = SpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Looping::OnLoopingStart(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Looping", "OnLoopingStart");

	Params::UGameplayCueNotify_Looping_OnLoopingStart_Params Parms;

	Parms.Target = Target;
	Parms.Parameters = Parameters;
	Parms.SpawnResults = SpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Looping::OnApplication(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static auto Func = Class->GetFunction("GameplayCueNotify_Looping", "OnApplication");

	Params::UGameplayCueNotify_Looping_OnApplication_Params Parms;

	Parms.Target = Target;
	Parms.Parameters = Parameters;
	Parms.SpawnResults = SpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UGameplayEffect*             GameplayEffect                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ASC                                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC)
{
	static auto Func = Class->GetFunction("GameplayEffectCustomApplicationRequirement", "CanApplyGameplayEffect");

	Params::UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params Parms;

	Parms.GameplayEffect = GameplayEffect;
	Parms.Spec = Spec;
	Parms.ASC = ASC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParametersExecutionParams                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayEffectCustomExecutionOutputOutExecutionOutput                                               (Parm, OutParm, NativeAccessSpecifierPublic)

void UGameplayEffectExecutionCalculation::Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
{
	static auto Func = Class->GetFunction("GameplayEffectExecutionCalculation", "Execute");

	Params::UGameplayEffectExecutionCalculation_Execute_Params Parms;

	Parms.ExecutionParams = ExecutionParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = Parms.OutExecutionOutput;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       SourceTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TargetTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::K2_GetCapturedAttributeMagnitude(struct FGameplayEffectSpec& EffectSpec, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "K2_GetCapturedAttributeMagnitude");

	Params::UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Params Parms;

	Parms.EffectSpec = EffectSpec;
	Parms.Attribute = Attribute;
	Parms.SourceTags = SourceTags;
	Parms.TargetTags = TargetTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetSpecTags(struct FGameplayEffectSpec& EffectSpec)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetTargetSpecTags");

	Params::UGameplayModMagnitudeCalculation_GetTargetSpecTags_Params Parms;

	Parms.EffectSpec = EffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetAggregatedTags(struct FGameplayEffectSpec& EffectSpec)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetTargetAggregatedTags");

	Params::UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Params Parms;

	Parms.EffectSpec = EffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetActorTags(struct FGameplayEffectSpec& EffectSpec)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetTargetActorTags");

	Params::UGameplayModMagnitudeCalculation_GetTargetActorTags_Params Parms;

	Parms.EffectSpec = EffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceSpecTags(struct FGameplayEffectSpec& EffectSpec)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSourceSpecTags");

	Params::UGameplayModMagnitudeCalculation_GetSourceSpecTags_Params Parms;

	Parms.EffectSpec = EffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceAggregatedTags(struct FGameplayEffectSpec& EffectSpec)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSourceAggregatedTags");

	Params::UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Params Parms;

	Parms.EffectSpec = EffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceActorTags(struct FGameplayEffectSpec& EffectSpec)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSourceActorTags");

	Params::UGameplayModMagnitudeCalculation_GetSourceActorTags_Params Parms;

	Parms.EffectSpec = EffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByTag(struct FGameplayEffectSpec& EffectSpec, struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSetByCallerMagnitudeByTag");

	Params::UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Params Parms;

	Parms.EffectSpec = EffectSpec;
	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        MagnitudeName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByName(struct FGameplayEffectSpec& EffectSpec, class FName& MagnitudeName)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSetByCallerMagnitudeByName");

	Params::UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Params Parms;

	Parms.EffectSpec = EffectSpec;
	Parms.MagnitudeName = MagnitudeName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec)
{
	static auto Func = Class->GetFunction("GameplayModMagnitudeCalculation", "CalculateBaseMagnitude");

	Params::UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params Parms;

	Parms.Spec = Spec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ASC                                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Idx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& Tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 Idx)
{
	static auto Func = Class->GetFunction("GameplayTagReponseTable", "TagResponseEvent");

	Params::UGameplayTagReponseTable_TagResponseEvent_Params Parms;

	Parms.Tag = Tag;
	Parms.NewCount = NewCount;
	Parms.ASC = ASC;
	Parms.Idx = Idx;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 InGameplayCueTrackHandler                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneGameplayCueTrack::SetSequencerTrackHandler(FDelegateProperty_ InGameplayCueTrackHandler)
{
	static auto Func = Class->GetFunction("MovieSceneGameplayCueTrack", "SetSequencerTrackHandler");

	Params::UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Params Parms;

	Parms.InGameplayCueTrackHandler = InGameplayCueTrackHandler;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
