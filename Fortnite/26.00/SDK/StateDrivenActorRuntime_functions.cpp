#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StateDrivenActorRuntime.FortActorComponent_StateDriven
// (None)

class UClass* UFortActorComponent_StateDriven::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActorComponent_StateDriven");

	return Clss;
}


// FortActorComponent_StateDriven StateDrivenActorRuntime.Default__FortActorComponent_StateDriven
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActorComponent_StateDriven* UFortActorComponent_StateDriven::GetDefaultObj()
{
	static class UFortActorComponent_StateDriven* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActorComponent_StateDriven*>(UFortActorComponent_StateDriven::StaticClass()->DefaultObject);

	return Default;
}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.TriggerCustomEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActorComponent_StateDriven::TriggerCustomEvent(struct FGameplayTag& EventTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "TriggerCustomEvent");

	Params::UFortActorComponent_StateDriven_TriggerCustomEvent_Params Parms{};

	Parms.EventTag = EventTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.SetCurrentState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FStateDrivenState           InCurrentState                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActorComponent_StateDriven::SetCurrentState(struct FStateDrivenState& InCurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "SetCurrentState");

	Params::UFortActorComponent_StateDriven_SetCurrentState_Params Parms{};

	Parms.InCurrentState = InCurrentState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.PopSlottedItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActorComponent_StateDriven::PopSlottedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "PopSlottedItem");

	Params::UFortActorComponent_StateDriven_PopSlottedItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.PlayBurstGameplayCue
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActorComponent_StateDriven::PlayBurstGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "PlayBurstGameplayCue");

	Params::UFortActorComponent_StateDriven_PlayBurstGameplayCue_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupOverlapEventSettings
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActorComponent_StateDriven::OnSetupOverlapEventSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "OnSetupOverlapEventSettings");

	Params::UFortActorComponent_StateDriven_OnSetupOverlapEventSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupInteractionEventSettings
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActorComponent_StateDriven::OnSetupInteractionEventSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "OnSetupInteractionEventSettings");

	Params::UFortActorComponent_StateDriven_OnSetupInteractionEventSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupDamageEventSettings
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActorComponent_StateDriven::OnSetupDamageEventSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "OnSetupDamageEventSettings");

	Params::UFortActorComponent_StateDriven_OnSetupDamageEventSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnResetCollisionSettings
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActorComponent_StateDriven::OnResetCollisionSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "OnResetCollisionSettings");

	Params::UFortActorComponent_StateDriven_OnResetCollisionSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnMulticastStateTreeEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TransitionTag                                                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueTag             BurstGameplayCueTag                                              (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFortActorComponent_StateDriven::OnMulticastStateTreeEvent(const struct FGameplayTag& TransitionTag, const struct FGameplayCueTag& BurstGameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "OnMulticastStateTreeEvent");

	Params::UFortActorComponent_StateDriven_OnMulticastStateTreeEvent_Params Parms{};

	Parms.TransitionTag = TransitionTag;
	Parms.BurstGameplayCueTag = BurstGameplayCueTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnHandleStateTreeEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TransitionTag                                                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueTag             BurstGameplayCueTag                                              (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFortActorComponent_StateDriven::OnHandleStateTreeEvent(const struct FGameplayTag& TransitionTag, const struct FGameplayCueTag& BurstGameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "OnHandleStateTreeEvent");

	Params::UFortActorComponent_StateDriven_OnHandleStateTreeEvent_Params Parms{};

	Parms.TransitionTag = TransitionTag;
	Parms.BurstGameplayCueTag = BurstGameplayCueTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleInteraction
// (Final, Native, Private)
// Parameters:
// class UBuildingActor*              SelfActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   InteractingPawn                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActorComponent_StateDriven::HandleInteraction(class UBuildingActor* SelfActor, class UFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "HandleInteraction");

	Params::UFortActorComponent_StateDriven_HandleInteraction_Params Parms{};

	Parms.SelfActor = SelfActor;
	Parms.InteractingPawn = InteractingPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActorComponent_StateDriven::HandleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "HandleEndOverlap");

	Params::UFortActorComponent_StateDriven_HandleEndOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleDied
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

void UFortActorComponent_StateDriven::HandleDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "HandleDied");

	Params::UFortActorComponent_StateDriven_HandleDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleDamaged
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

void UFortActorComponent_StateDriven::HandleDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "HandleDamaged");

	Params::UFortActorComponent_StateDriven_HandleDamaged_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleBeginOverlap
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortActorComponent_StateDriven::HandleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "HandleBeginOverlap");

	Params::UFortActorComponent_StateDriven_HandleBeginOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.GetSlottedItemEntry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortItemEntry              ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FFortItemEntry UFortActorComponent_StateDriven::GetSlottedItemEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "GetSlottedItemEntry");

	Params::UFortActorComponent_StateDriven_GetSlottedItemEntry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.GetSlottedItemDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortActorComponent_StateDriven::GetSlottedItemDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "GetSlottedItemDisplayName");

	Params::UFortActorComponent_StateDriven_GetSlottedItemDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.GetInteractionString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortActorComponent_StateDriven::GetInteractionString(class UFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "GetInteractionString");

	Params::UFortActorComponent_StateDriven_GetInteractionString_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.GetFailedInteractionString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortActorComponent_StateDriven::GetFailedInteractionString(class UFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActorComponent_StateDriven", "GetFailedInteractionString");

	Params::UFortActorComponent_StateDriven_GetFailedInteractionString_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


