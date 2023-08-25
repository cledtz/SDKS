#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MantisRuntime.FortMantisLayerAnimInstance
// (None)

class UClass* UFortMantisLayerAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMantisLayerAnimInstance");

	return Clss;
}


// FortMantisLayerAnimInstance MantisRuntime.Default__FortMantisLayerAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMantisLayerAnimInstance* UFortMantisLayerAnimInstance::GetDefaultObj()
{
	static class UFortMantisLayerAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMantisLayerAnimInstance*>(UFortMantisLayerAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TechniqueIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TechniqueName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisLayerAnimInstance::OnMantisTechniqueStarted(int32 TechniqueIndex, class FName TechniqueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisLayerAnimInstance", "OnMantisTechniqueStarted");

	Params::UFortMantisLayerAnimInstance_OnMantisTechniqueStarted_Params Parms{};

	Parms.TechniqueIndex = TechniqueIndex;
	Parms.TechniqueName = TechniqueName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TechniqueIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TechniqueName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisLayerAnimInstance::OnMantisTechniqueEnded(int32 TechniqueIndex, class FName TechniqueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisLayerAnimInstance", "OnMantisTechniqueEnded");

	Params::UFortMantisLayerAnimInstance_OnMantisTechniqueEnded_Params Parms{};

	Parms.TechniqueIndex = TechniqueIndex;
	Parms.TechniqueName = TechniqueName;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
// (None)

class UClass* UFortItemLayerAnimInstance_UncleBrolly::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemLayerAnimInstance_UncleBrolly");

	return Clss;
}


// FortItemLayerAnimInstance_UncleBrolly MantisRuntime.Default__FortItemLayerAnimInstance_UncleBrolly
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemLayerAnimInstance_UncleBrolly* UFortItemLayerAnimInstance_UncleBrolly::GetDefaultObj()
{
	static class UFortItemLayerAnimInstance_UncleBrolly* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemLayerAnimInstance_UncleBrolly*>(UFortItemLayerAnimInstance_UncleBrolly::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.UncleBrollyWeaponAnimInstance
// (None)

class UClass* UUncleBrollyWeaponAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UncleBrollyWeaponAnimInstance");

	return Clss;
}


// UncleBrollyWeaponAnimInstance MantisRuntime.Default__UncleBrollyWeaponAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UUncleBrollyWeaponAnimInstance* UUncleBrollyWeaponAnimInstance::GetDefaultObj()
{
	static class UUncleBrollyWeaponAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UUncleBrollyWeaponAnimInstance*>(UUncleBrollyWeaponAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
// (None)

class UClass* UFortAbilityTask_ApplyRootMotionMantisForce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAbilityTask_ApplyRootMotionMantisForce");

	return Clss;
}


// FortAbilityTask_ApplyRootMotionMantisForce MantisRuntime.Default__FortAbilityTask_ApplyRootMotionMantisForce
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAbilityTask_ApplyRootMotionMantisForce* UFortAbilityTask_ApplyRootMotionMantisForce::GetDefaultObj()
{
	static class UFortAbilityTask_ApplyRootMotionMantisForce* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAbilityTask_ApplyRootMotionMantisForce*>(UFortAbilityTask_ApplyRootMotionMantisForce::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.FortAnimNotify_Mantis
// (None)

class UClass* UFortAnimNotify_Mantis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnimNotify_Mantis");

	return Clss;
}


// FortAnimNotify_Mantis MantisRuntime.Default__FortAnimNotify_Mantis
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAnimNotify_Mantis* UFortAnimNotify_Mantis::GetDefaultObj()
{
	static class UFortAnimNotify_Mantis* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAnimNotify_Mantis*>(UFortAnimNotify_Mantis::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.FortAnimNotifyState_Mantis
// (None)

class UClass* UFortAnimNotifyState_Mantis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnimNotifyState_Mantis");

	return Clss;
}


// FortAnimNotifyState_Mantis MantisRuntime.Default__FortAnimNotifyState_Mantis
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAnimNotifyState_Mantis* UFortAnimNotifyState_Mantis::GetDefaultObj()
{
	static class UFortAnimNotifyState_Mantis* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAnimNotifyState_Mantis*>(UFortAnimNotifyState_Mantis::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.FortGameplayAbility_Mantis
// (None)

class UClass* UFortGameplayAbility_Mantis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_Mantis");

	return Clss;
}


// FortGameplayAbility_Mantis MantisRuntime.Default__FortGameplayAbility_Mantis
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_Mantis* UFortGameplayAbility_Mantis::GetDefaultObj()
{
	static class UFortGameplayAbility_Mantis* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_Mantis*>(UFortGameplayAbility_Mantis::StaticClass()->DefaultObject);

	return Default;
}


// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished
// (Final, Native, Protected)
// Parameters:

void UFortGameplayAbility_Mantis::OnMontageFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "OnMontageFinished");

	Params::UFortGameplayAbility_Mantis_OnMontageFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled
// (Final, Native, Protected)
// Parameters:

void UFortGameplayAbility_Mantis::OnMontageCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "OnMontageCancelled");

	Params::UFortGameplayAbility_Mantis_OnMontageCancelled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.GetLevelForGameplayEffectContainer
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                ApplicationTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortGameplayAbility_Mantis::GetLevelForGameplayEffectContainer(const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "GetLevelForGameplayEffectContainer");

	Params::UFortGameplayAbility_Mantis_GetLevelForGameplayEffectContainer_Params Parms{};

	Parms.ApplicationTag = ApplicationTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.GetDynamicMontageNameForTechnique
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class FName                        TechniqueName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UFortGameplayAbility_Mantis::GetDynamicMontageNameForTechnique(class FName TechniqueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "GetDynamicMontageNameForTechnique");

	Params::UFortGameplayAbility_Mantis_GetDynamicMontageNameForTechnique_Params Parms{};

	Parms.TechniqueName = TechniqueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.FillMetadataForTechnique
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TechniqueName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortMantisTechniqueMetadataOutTechniqueMetadata                                             (Parm, OutParm, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::FillMetadataForTechnique(class FName TechniqueName, struct FFortMantisTechniqueMetadata* OutTechniqueMetadata)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "FillMetadataForTechnique");

	Params::UFortGameplayAbility_Mantis_FillMetadataForTechnique_Params Parms{};

	Parms.TechniqueName = TechniqueName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTechniqueMetadata != nullptr)
		*OutTechniqueMetadata = Parms.OutTechniqueMetadata;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarping
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class FName                        TechniqueName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutAllowTranslationWarp                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutAllowRotationWarp                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OutTargetActor                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutSnapshotTargetActorLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutWarpTranslationToLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutTargetLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::ConfigureRootMotionWarping(class FName TechniqueName, bool* bOutAllowTranslationWarp, bool* bOutAllowRotationWarp, class UActor** OutTargetActor, bool* bOutSnapshotTargetActorLocation, bool* bOutWarpTranslationToLocation, struct FVector* OutTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "ConfigureRootMotionWarping");

	Params::UFortGameplayAbility_Mantis_ConfigureRootMotionWarping_Params Parms{};

	Parms.TechniqueName = TechniqueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOutAllowTranslationWarp != nullptr)
		*bOutAllowTranslationWarp = Parms.bOutAllowTranslationWarp;

	if (bOutAllowRotationWarp != nullptr)
		*bOutAllowRotationWarp = Parms.bOutAllowRotationWarp;

	if (OutTargetActor != nullptr)
		*OutTargetActor = Parms.OutTargetActor;

	if (bOutSnapshotTargetActorLocation != nullptr)
		*bOutSnapshotTargetActorLocation = Parms.bOutSnapshotTargetActorLocation;

	if (bOutWarpTranslationToLocation != nullptr)
		*bOutWarpTranslationToLocation = Parms.bOutWarpTranslationToLocation;

	if (OutTargetLocation != nullptr)
		*OutTargetLocation = Parms.OutTargetLocation;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMantisNotifyWindow NotifyWindow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAnimNotifyState_Mantis* Notify                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::BP_OnTechniqueNotifyWindowStarted(enum class EFortMantisNotifyWindow NotifyWindow, class UFortAnimNotifyState_Mantis* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnTechniqueNotifyWindowStarted");

	Params::UFortGameplayAbility_Mantis_BP_OnTechniqueNotifyWindowStarted_Params Parms{};

	Parms.NotifyWindow = NotifyWindow;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMantisNotifyWindow NotifyWindow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAnimNotifyState_Mantis* Notify                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::BP_OnTechniqueNotifyWindowEnded(enum class EFortMantisNotifyWindow NotifyWindow, class UFortAnimNotifyState_Mantis* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnTechniqueNotifyWindowEnded");

	Params::UFortGameplayAbility_Mantis_BP_OnTechniqueNotifyWindowEnded_Params Parms{};

	Parms.NotifyWindow = NotifyWindow;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMantisNotifyEvent  NotifyEvent                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAnimNotify_Mantis*      Notify                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::BP_OnTechniqueNotifyEvent(enum class EFortMantisNotifyEvent NotifyEvent, class UFortAnimNotify_Mantis* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnTechniqueNotifyEvent");

	Params::UFortGameplayAbility_Mantis_BP_OnTechniqueNotifyEvent_Params Parms{};

	Parms.NotifyEvent = NotifyEvent;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnMantisTechniqueHit");

	Params::UFortGameplayAbility_Mantis_BP_OnMantisTechniqueHit_Params Parms{};

	Parms.TargetDataHandle = TargetDataHandle;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisInputEvent
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMantisTechniqueActivationInputTypeInputType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMantisTechniqueActivationTimingTypeInputTiming                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDidInputStartTechnique                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDidInputQueueTechnique                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InputHeldDuration                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::BP_OnMantisInputEvent(enum class EFortMantisTechniqueActivationInputType InputType, enum class EFortMantisTechniqueActivationTimingType InputTiming, bool bDidInputStartTechnique, bool bDidInputQueueTechnique, float InputHeldDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnMantisInputEvent");

	Params::UFortGameplayAbility_Mantis_BP_OnMantisInputEvent_Params Parms{};

	Parms.InputType = InputType;
	Parms.InputTiming = InputTiming;
	Parms.bDidInputStartTechnique = bDidInputStartTechnique;
	Parms.bDidInputQueueTechnique = bDidInputQueueTechnique;
	Parms.InputHeldDuration = InputHeldDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MantisRuntime.FortGameplayAbility_Mantis.BP_MantisAbilityTechniqueStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       OwningTags                                                       (Parm, NativeAccessSpecifierPublic)
// class FName                        SequenceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               StartsSequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               EndsSequence                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::BP_MantisAbilityTechniqueStarted(const struct FGameplayTagContainer& OwningTags, class FName SequenceName, bool StartsSequence, bool EndsSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_MantisAbilityTechniqueStarted");

	Params::UFortGameplayAbility_Mantis_BP_MantisAbilityTechniqueStarted_Params Parms{};

	Parms.OwningTags = OwningTags;
	Parms.SequenceName = SequenceName;
	Parms.StartsSequence = StartsSequence;
	Parms.EndsSequence = EndsSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MantisRuntime.FortMantisData
// (None)

class UClass* UFortMantisData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMantisData");

	return Clss;
}


// FortMantisData MantisRuntime.Default__FortMantisData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMantisData* UFortMantisData::GetDefaultObj()
{
	static class UFortMantisData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMantisData*>(UFortMantisData::StaticClass()->DefaultObject);

	return Default;
}


// Class MantisRuntime.FortMantisPawnComponent
// (None)

class UClass* UFortMantisPawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMantisPawnComponent");

	return Clss;
}


// FortMantisPawnComponent MantisRuntime.Default__FortMantisPawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMantisPawnComponent* UFortMantisPawnComponent::GetDefaultObj()
{
	static class UFortMantisPawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMantisPawnComponent*>(UFortMantisPawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MantisRuntime.FortMantisPawnComponent.TryManuallyStartTechnique
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TechniqueDataIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMantisPawnComponent::TryManuallyStartTechnique(int32 TechniqueDataIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "TryManuallyStartTechnique");

	Params::UFortMantisPawnComponent_TryManuallyStartTechnique_Params Parms{};

	Parms.TechniqueDataIndex = TechniqueDataIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortMantisPawnComponent.TryManuallyEndCurrentTechnique
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMantisPawnComponent::TryManuallyEndCurrentTechnique()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "TryManuallyEndCurrentTechnique");

	Params::UFortMantisPawnComponent_TryManuallyEndCurrentTechnique_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortMantisPawnComponent.SimulateInputEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortMantisTechniqueActivationInputTypeInputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMantisTechniqueActivationTimingTypeInputTiming                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceProcessEvent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisPawnComponent::SimulateInputEvent(enum class EFortMantisTechniqueActivationInputType InputType, enum class EFortMantisTechniqueActivationTimingType InputTiming, bool bForceProcessEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "SimulateInputEvent");

	Params::UFortMantisPawnComponent_SimulateInputEvent_Params Parms{};

	Parms.InputType = InputType;
	Parms.InputTiming = InputTiming;
	Parms.bForceProcessEvent = bForceProcessEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisPawnComponent.SetLockOnState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisPawnComponent::SetLockOnState(bool bEnabled, class UActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "SetLockOnState");

	Params::UFortMantisPawnComponent_SetLockOnState_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisPawnComponent.SetBranchRule
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EFortMantisBranchRule   InBranchRule                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMantisBranchPath   InBranchPath                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisPawnComponent::SetBranchRule(enum class EFortMantisBranchRule InBranchRule, enum class EFortMantisBranchPath InBranchPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "SetBranchRule");

	Params::UFortMantisPawnComponent_SetBranchRule_Params Parms{};

	Parms.InBranchRule = InBranchRule;
	Parms.InBranchPath = InBranchPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation
// (Final, Native, Protected)
// Parameters:
// class UCharacterMovementComponent* CharMoveComp                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisPawnComponent::OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "OnPostPhysicsRotation");

	Params::UFortMantisPawnComponent_OnPostPhysicsRotation_Params Parms{};

	Parms.CharMoveComp = CharMoveComp;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisPawnComponent.OnOwnerWeaponHolstered
// (Final, Native, Protected)
// Parameters:

void UFortMantisPawnComponent::OnOwnerWeaponHolstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "OnOwnerWeaponHolstered");

	Params::UFortMantisPawnComponent_OnOwnerWeaponHolstered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate
// (Final, Native, Protected)
// Parameters:
// class UCharacterMovementComponent* CharMoveComp                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisPawnComponent::OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "OnCharacterMovementPreUpdate");

	Params::UFortMantisPawnComponent_OnCharacterMovementPreUpdate_Params Parms{};

	Parms.CharMoveComp = CharMoveComp;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisPawnComponent.IsSpecificInputPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EFortMantisTechniqueActivationInputTypeInputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMantisPawnComponent::IsSpecificInputPressed(enum class EFortMantisTechniqueActivationInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "IsSpecificInputPressed");

	Params::UFortMantisPawnComponent_IsSpecificInputPressed_Params Parms{};

	Parms.InputType = InputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortMantisPawnComponent.IsPerformingLockOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMantisPawnComponent::IsPerformingLockOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "IsPerformingLockOn");

	Params::UFortMantisPawnComponent_IsPerformingLockOn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortMantisPawnComponent.HasLockOnTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMantisPawnComponent::HasLockOnTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "HasLockOnTarget");

	Params::UFortMantisPawnComponent_HasLockOnTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortMantisPawnComponent.HasCurrentTechniqueMetadataBeenSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMantisPawnComponent::HasCurrentTechniqueMetadataBeenSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "HasCurrentTechniqueMetadataBeenSet");

	Params::UFortMantisPawnComponent_HasCurrentTechniqueMetadataBeenSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortMantisPawnComponent.GetLockOnTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortMantisPawnComponent::GetLockOnTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "GetLockOnTarget");

	Params::UFortMantisPawnComponent_GetLockOnTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortMantisPawnComponent.GetCurrentTechniqueMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortMantisTechniqueMetadataReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FFortMantisTechniqueMetadata UFortMantisPawnComponent::GetCurrentTechniqueMetadata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisPawnComponent", "GetCurrentTechniqueMetadata");

	Params::UFortMantisPawnComponent_GetCurrentTechniqueMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MantisRuntime.FortMantisWeaponComponent
// (None)

class UClass* UFortMantisWeaponComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMantisWeaponComponent");

	return Clss;
}


// FortMantisWeaponComponent MantisRuntime.Default__FortMantisWeaponComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMantisWeaponComponent* UFortMantisWeaponComponent::GetDefaultObj()
{
	static class UFortMantisWeaponComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMantisWeaponComponent*>(UFortMantisWeaponComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MantisRuntime.FortMantisWeaponComponent.OnWeaponAbilitiesRemoved
// (Final, Native, Protected)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortWeaponAbilityRemovalReasonRemovalReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisWeaponComponent::OnWeaponAbilitiesRemoved(class UFortWeapon* Weapon, enum class EFortWeaponAbilityRemovalReason RemovalReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnWeaponAbilitiesRemoved");

	Params::UFortMantisWeaponComponent_OnWeaponAbilitiesRemoved_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.RemovalReason = RemovalReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisWeaponComponent.OnUnEquip
// (Final, Native, Protected)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisWeaponComponent::OnUnEquip(class UFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnUnEquip");

	Params::UFortMantisWeaponComponent_OnUnEquip_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisWeaponComponent.OnRep_ReplayAnimInstanceInfo
// (Final, Native, Protected)
// Parameters:

void UFortMantisWeaponComponent::OnRep_ReplayAnimInstanceInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnRep_ReplayAnimInstanceInfo");

	Params::UFortMantisWeaponComponent_OnRep_ReplayAnimInstanceInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisWeaponComponent.OnReleaseTrigger
// (Final, Native, Protected)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisWeaponComponent::OnReleaseTrigger(class UFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnReleaseTrigger");

	Params::UFortMantisWeaponComponent_OnReleaseTrigger_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisWeaponComponent.OnReleaseSecondaryFire
// (Final, Native, Protected)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisWeaponComponent::OnReleaseSecondaryFire(class UFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnReleaseSecondaryFire");

	Params::UFortMantisWeaponComponent_OnReleaseSecondaryFire_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisWeaponComponent.OnPressTrigger
// (Final, Native, Protected)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisWeaponComponent::OnPressTrigger(class UFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnPressTrigger");

	Params::UFortMantisWeaponComponent_OnPressTrigger_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisWeaponComponent.OnPressSecondaryFire
// (Final, Native, Protected)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisWeaponComponent::OnPressSecondaryFire(class UFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnPressSecondaryFire");

	Params::UFortMantisWeaponComponent_OnPressSecondaryFire_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisWeaponComponent.OnEquip
// (Final, Native, Protected)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisWeaponComponent::OnEquip(class UFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnEquip");

	Params::UFortMantisWeaponComponent_OnEquip_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MantisRuntime.FortMantisWeaponComponent.GetAnimInstanceInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortMantisReplicatedAnimInstanceInfoReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFortMantisReplicatedAnimInstanceInfo UFortMantisWeaponComponent::GetAnimInstanceInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMantisWeaponComponent", "GetAnimInstanceInfo");

	Params::UFortMantisWeaponComponent_GetAnimInstanceInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


