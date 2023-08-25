#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle
// (None)

class UClass* UFortMovementMode_ExtLogicHurdle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMovementMode_ExtLogicHurdle");

	return Clss;
}


// FortMovementMode_ExtLogicHurdle VaultingCodeRuntime.Default__FortMovementMode_ExtLogicHurdle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMovementMode_ExtLogicHurdle* UFortMovementMode_ExtLogicHurdle::GetDefaultObj()
{
	static class UFortMovementMode_ExtLogicHurdle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMovementMode_ExtLogicHurdle*>(UFortMovementMode_ExtLogicHurdle::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle.IsContextualActionPrototypeActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMovementMode_ExtLogicHurdle::IsContextualActionPrototypeActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMovementMode_ExtLogicHurdle", "IsContextualActionPrototypeActive");

	Params::UFortMovementMode_ExtLogicHurdle_IsContextualActionPrototypeActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle.BP_GetAnimationMontageInformation
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSynchedActionInfo          SynchedActionInfo                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EHurdleType             Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                AnimMontage                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartSectionName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MontageMiddleSectionName                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMovementMode_ExtLogicHurdle::BP_GetAnimationMontageInformation(const struct FSynchedActionInfo& SynchedActionInfo, enum class EHurdleType Type, class UAnimMontage** AnimMontage, class FName* StartSectionName, class FName* MontageMiddleSectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMovementMode_ExtLogicHurdle", "BP_GetAnimationMontageInformation");

	Params::UFortMovementMode_ExtLogicHurdle_BP_GetAnimationMontageInformation_Params Parms{};

	Parms.SynchedActionInfo = SynchedActionInfo;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimMontage != nullptr)
		*AnimMontage = Parms.AnimMontage;

	if (StartSectionName != nullptr)
		*StartSectionName = Parms.StartSectionName;

	if (MontageMiddleSectionName != nullptr)
		*MontageMiddleSectionName = Parms.MontageMiddleSectionName;

}


// Class VaultingCodeRuntime.HurdleCameraMode
// (None)

class UClass* UHurdleCameraMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HurdleCameraMode");

	return Clss;
}


// HurdleCameraMode VaultingCodeRuntime.Default__HurdleCameraMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UHurdleCameraMode* UHurdleCameraMode::GetDefaultObj()
{
	static class UHurdleCameraMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UHurdleCameraMode*>(UHurdleCameraMode::StaticClass()->DefaultObject);

	return Default;
}


// Class VaultingCodeRuntime.HurdleComponent
// (None)

class UClass* UHurdleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HurdleComponent");

	return Clss;
}


// HurdleComponent VaultingCodeRuntime.Default__HurdleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHurdleComponent* UHurdleComponent::GetDefaultObj()
{
	static class UHurdleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHurdleComponent*>(UHurdleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultingCodeRuntime.HurdleComponent.UnregisterMutatorUpdatedDelegate
// (Final, Native, Protected)
// Parameters:

void UHurdleComponent::UnregisterMutatorUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "UnregisterMutatorUpdatedDelegate");

	Params::UHurdleComponent_UnregisterMutatorUpdatedDelegate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.ShouldShowHurdleIndicator
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHurdleComponent::ShouldShowHurdleIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "ShouldShowHurdleIndicator");

	Params::UHurdleComponent_ShouldShowHurdleIndicator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultingCodeRuntime.HurdleComponent.ServerStartHurdle
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FReplicatedHurdleTargetingDataInReplicatedTargetingData                                        (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             ClientLastTeleportTime                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::ServerStartHurdle(const struct FReplicatedHurdleTargetingData& InReplicatedTargetingData, double ClientLastTeleportTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "ServerStartHurdle");

	Params::UHurdleComponent_ServerStartHurdle_Params Parms{};

	Parms.InReplicatedTargetingData = InReplicatedTargetingData;
	Parms.ClientLastTeleportTime = ClientLastTeleportTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.RegisterMutatorUpdatedDelegate
// (Final, Native, Protected)
// Parameters:
// class UPawn*                       AffectedPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::RegisterMutatorUpdatedDelegate(class UPawn* AffectedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "RegisterMutatorUpdatedDelegate");

	Params::UHurdleComponent_RegisterMutatorUpdatedDelegate_Params Parms{};

	Parms.AffectedPawn = AffectedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.OnRep_ReplicatedLastTeleportTime
// (Final, Native, Protected)
// Parameters:

void UHurdleComponent::OnRep_ReplicatedLastTeleportTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "OnRep_ReplicatedLastTeleportTime");

	Params::UHurdleComponent_OnRep_ReplicatedLastTeleportTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.OnRep_ReplicatedHurdleState
// (Final, Native, Protected)
// Parameters:

void UHurdleComponent::OnRep_ReplicatedHurdleState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "OnRep_ReplicatedHurdleState");

	Params::UHurdleComponent_OnRep_ReplicatedHurdleState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.OnPlayerStatePawnSet
// (Final, Native, Protected)
// Parameters:
// class UPlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "OnPlayerStatePawnSet");

	Params::UHurdleComponent_OnPlayerStatePawnSet_Params Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.OnMutatorUpdated
// (Final, Native, Protected)
// Parameters:

void UHurdleComponent::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "OnMutatorUpdated");

	Params::UHurdleComponent_OnMutatorUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.IsContextualActionPrototypeActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHurdleComponent::IsContextualActionPrototypeActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "IsContextualActionPrototypeActive");

	Params::UHurdleComponent_IsContextualActionPrototypeActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaultingCodeRuntime.HurdleComponent.HandleTargetingDataValid
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHurdleTargetingData        TargetingData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UHurdleComponent::HandleTargetingDataValid(struct FHurdleTargetingData& TargetingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "HandleTargetingDataValid");

	Params::UHurdleComponent_HandleTargetingDataValid_Params Parms{};

	Parms.TargetingData = TargetingData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.HandleTargetingDataInvalid
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHurdleComponent::HandleTargetingDataInvalid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "HandleTargetingDataInvalid");

	Params::UHurdleComponent_HandleTargetingDataInvalid_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.HandleOwnerTeleported
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   TeleportedOwner                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::HandleOwnerTeleported(class UFortPawn* TeleportedOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "HandleOwnerTeleported");

	Params::UHurdleComponent_HandleOwnerTeleported_Params Parms{};

	Parms.TeleportedOwner = TeleportedOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.HandleOwnerMovementModeChanged
// (Final, Native, Protected)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::HandleOwnerMovementModeChanged(class UCharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "HandleOwnerMovementModeChanged");

	Params::UHurdleComponent_HandleOwnerMovementModeChanged_Params Parms{};

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.HandleOwnerJumpInput
// (Final, Native, Protected)
// Parameters:
// bool                               bPressed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::HandleOwnerJumpInput(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "HandleOwnerJumpInput");

	Params::UHurdleComponent_HandleOwnerJumpInput_Params Parms{};

	Parms.bPressed = bPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaultingCodeRuntime.HurdleComponent.BP_HandleSpringJump
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHurdleComponent::BP_HandleSpringJump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "BP_HandleSpringJump");

	Params::UHurdleComponent_BP_HandleSpringJump_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleStarted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHurdleTargetingData        TargetingData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FSynchedActionInfo          SynchedActionInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UHurdleComponent::BP_HandleHurdleStarted(struct FHurdleTargetingData& TargetingData, struct FSynchedActionInfo& SynchedActionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "BP_HandleHurdleStarted");

	Params::UHurdleComponent_BP_HandleHurdleStarted_Params Parms{};

	Parms.TargetingData = TargetingData;
	Parms.SynchedActionInfo = SynchedActionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHurdleComponent::BP_HandleHurdleEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "BP_HandleHurdleEnded");

	Params::UHurdleComponent_BP_HandleHurdleEnded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultingCodeRuntime.HurdleComponent.BP_CanStartHurdle
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// bool                               OutCanStartHurdle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHurdleComponent::BP_CanStartHurdle(bool* OutCanStartHurdle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleComponent", "BP_CanStartHurdle");

	Params::UHurdleComponent_BP_CanStartHurdle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutCanStartHurdle != nullptr)
		*OutCanStartHurdle = Parms.OutCanStartHurdle;

}


// Class VaultingCodeRuntime.HurdleLibrary
// (None)

class UClass* UHurdleLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HurdleLibrary");

	return Clss;
}


// HurdleLibrary VaultingCodeRuntime.Default__HurdleLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHurdleLibrary* UHurdleLibrary::GetDefaultObj()
{
	static class UHurdleLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHurdleLibrary*>(UHurdleLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VaultingCodeRuntime.HurdleLibrary.PerformHurdleTargeting
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UCharacter*                  Character                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHurdleInputConfigCache     HurdleInputConfig                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FHurdleTargetingData        OutTargetingData                                                 (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bIsAutoHurdle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHurdleLibrary::PerformHurdleTargeting(class UCharacter* Character, struct FHurdleInputConfigCache* HurdleInputConfig, struct FHurdleTargetingData* OutTargetingData, bool bIsAutoHurdle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HurdleLibrary", "PerformHurdleTargeting");

	Params::UHurdleLibrary_PerformHurdleTargeting_Params Parms{};

	Parms.Character = Character;
	Parms.bIsAutoHurdle = bIsAutoHurdle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HurdleInputConfig != nullptr)
		*HurdleInputConfig = Parms.HurdleInputConfig;

	if (OutTargetingData != nullptr)
		*OutTargetingData = Parms.OutTargetingData;

	return Parms.ReturnValue;

}

}


