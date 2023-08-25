#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding
// (None)

class UClass* UFortVehicleLayerAnimInstance_Riding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVehicleLayerAnimInstance_Riding");

	return Clss;
}


// FortVehicleLayerAnimInstance_Riding RidingCodeRuntime.Default__FortVehicleLayerAnimInstance_Riding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVehicleLayerAnimInstance_Riding* UFortVehicleLayerAnimInstance_Riding::GetDefaultObj()
{
	static class UFortVehicleLayerAnimInstance_Riding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVehicleLayerAnimInstance_Riding*>(UFortVehicleLayerAnimInstance_Riding::StaticClass()->DefaultObject);

	return Default;
}


// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateSlopePitchForRiding
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UFortVehicleLayerAnimInstance_Riding::UpdateSlopePitchForRiding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "UpdateSlopePitchForRiding");

	Params::UFortVehicleLayerAnimInstance_Riding_UpdateSlopePitchForRiding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateBoostPlayRate
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UFortVehicleLayerAnimInstance_Riding::UpdateBoostPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "UpdateBoostPlayRate");

	Params::UFortVehicleLayerAnimInstance_Riding_UpdateBoostPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.SetFootPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERidingFootPhase        InFootPhase                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleLayerAnimInstance_Riding::SetFootPhase(enum class ERidingFootPhase InFootPhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "SetFootPhase");

	Params::UFortVehicleLayerAnimInstance_Riding_SetFootPhase_Params Parms{};

	Parms.InFootPhase = InFootPhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.PlaceHandIKTargets
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UFortVehicleLayerAnimInstance_Riding::PlaceHandIKTargets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "PlaceHandIKTargets");

	Params::UFortVehicleLayerAnimInstance_Riding_PlaceHandIKTargets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.BlueprintCollectRidableAnimBPData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimInstance*               RidableAnimInstance                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleLayerAnimInstance_Riding::BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "BlueprintCollectRidableAnimBPData");

	Params::UFortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData_Params Parms{};

	Parms.RidableAnimInstance = RidableAnimInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Class RidingCodeRuntime.RidingCheatManager
// (None)

class UClass* URidingCheatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RidingCheatManager");

	return Clss;
}


// RidingCheatManager RidingCodeRuntime.Default__RidingCheatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class URidingCheatManager* URidingCheatManager::GetDefaultObj()
{
	static class URidingCheatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<URidingCheatManager*>(URidingCheatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function RidingCodeRuntime.RidingCheatManager.StopRidingActor
// (BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void URidingCheatManager::StopRidingActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidingCheatManager", "StopRidingActor");

	Params::URidingCheatManager_StopRidingActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RidingCheatManager.StartRidingActor
// (BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void URidingCheatManager::StartRidingActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidingCheatManager", "StartRidingActor");

	Params::URidingCheatManager_StartRidingActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RidingCheatManager.RidingSetStaminaPercent
// (BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// float                              StaminaPercent                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URidingCheatManager::RidingSetStaminaPercent(float StaminaPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidingCheatManager", "RidingSetStaminaPercent");

	Params::URidingCheatManager_RidingSetStaminaPercent_Params Parms{};

	Parms.StaminaPercent = StaminaPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RidingCodeRuntime.RidableComponent
// (None)

class UClass* URidableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RidableComponent");

	return Clss;
}


// RidableComponent RidingCodeRuntime.Default__RidableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URidableComponent* URidableComponent::GetDefaultObj()
{
	static class URidableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URidableComponent*>(URidableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function RidingCodeRuntime.RidableComponent.ShouldCameraFocusOnRidable
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URidableComponent::ShouldCameraFocusOnRidable(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "ShouldCameraFocusOnRidable");

	Params::URidableComponent_ShouldCameraFocusOnRidable_Params Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RidableComponent.OnRep_ActiveRider
// (Final, Native, Protected)
// Parameters:

void URidableComponent::OnRep_ActiveRider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "OnRep_ActiveRider");

	Params::URidableComponent_OnRep_ActiveRider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RidableComponent.IsSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URidableComponent::IsSprinting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "IsSprinting");

	Params::URidableComponent_IsSprinting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RidableComponent.IsFlying
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URidableComponent::IsFlying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "IsFlying");

	Params::URidableComponent_IsFlying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RidableComponent.IsBeingRidden
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URidableComponent::IsBeingRidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "IsBeingRidden");

	Params::URidableComponent_IsBeingRidden_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RidableComponent.HandleRiderStoppedRiding
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class URiderComponent*             Rider                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URidableComponent::HandleRiderStoppedRiding(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "HandleRiderStoppedRiding");

	Params::URidableComponent_HandleRiderStoppedRiding_Params Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RidableComponent.HandleRiderStartedRiding
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class URiderComponent*             Rider                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URidableComponent::HandleRiderStartedRiding(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "HandleRiderStartedRiding");

	Params::URidableComponent_HandleRiderStartedRiding_Params Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RidableComponent.HandleRiderEndPlay
// (Final, Native, Protected)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URidableComponent::HandleRiderEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "HandleRiderEndPlay");

	Params::URidableComponent_HandleRiderEndPlay_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RidableComponent.GetRidingEmoteCapsuleSize
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OriginalRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OriginalHalfHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutRadius                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutHalfHeight                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URidableComponent::GetRidingEmoteCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "GetRidingEmoteCapsuleSize");

	Params::URidableComponent_GetRidingEmoteCapsuleSize_Params Parms{};

	Parms.Rider = Rider;
	Parms.OriginalRadius = OriginalRadius;
	Parms.OriginalHalfHeight = OriginalHalfHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutHalfHeight != nullptr)
		*OutHalfHeight = Parms.OutHalfHeight;

}


// Function RidingCodeRuntime.RidableComponent.GetRidingCapsuleSize
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OriginalRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OriginalHalfHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutRadius                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutHalfHeight                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URidableComponent::GetRidingCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "GetRidingCapsuleSize");

	Params::URidableComponent_GetRidingCapsuleSize_Params Parms{};

	Parms.Rider = Rider;
	Parms.OriginalRadius = OriginalRadius;
	Parms.OriginalHalfHeight = OriginalHalfHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutHalfHeight != nullptr)
		*OutHalfHeight = Parms.OutHalfHeight;

}


// Function RidingCodeRuntime.RidableComponent.GetRidingAttachComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USceneComponent* URidableComponent::GetRidingAttachComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "GetRidingAttachComponent");

	Params::URidableComponent_GetRidingAttachComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RidableComponent.GetPettingData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRidingPettingData          ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FRidingPettingData URidableComponent::GetPettingData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "GetPettingData");

	Params::URidableComponent_GetPettingData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RidableComponent.CheatSetStaminaPercent
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              StaminaPercent                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URidableComponent::CheatSetStaminaPercent(float StaminaPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "CheatSetStaminaPercent");

	Params::URidableComponent_CheatSetStaminaPercent_Params Parms{};

	Parms.StaminaPercent = StaminaPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.RidableComponent.CanRiderPlayEmote
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URidableComponent::CanRiderPlayEmote(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "CanRiderPlayEmote");

	Params::URidableComponent_CanRiderPlayEmote_Params Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RidableComponent.CanBeRiddenBP
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URidableComponent::CanBeRiddenBP(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "CanBeRiddenBP");

	Params::URidableComponent_CanBeRiddenBP_Params Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RidableComponent.CanBePet
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URidableComponent::CanBePet(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidableComponent", "CanBePet");

	Params::URidableComponent_CanBePet_Params Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RidingCodeRuntime.ControllableRidableComponent
// (None)

class UClass* UControllableRidableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControllableRidableComponent");

	return Clss;
}


// ControllableRidableComponent RidingCodeRuntime.Default__ControllableRidableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UControllableRidableComponent* UControllableRidableComponent::GetDefaultObj()
{
	static class UControllableRidableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UControllableRidableComponent*>(UControllableRidableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function RidingCodeRuntime.ControllableRidableComponent.ServerDoJumpExit
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable)
// Parameters:

void UControllableRidableComponent::ServerDoJumpExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "ServerDoJumpExit");

	Params::UControllableRidableComponent_ServerDoJumpExit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllableRidableComponent.OnRep_IsBeingControlled
// (Final, Native, Protected)
// Parameters:

void UControllableRidableComponent::OnRep_IsBeingControlled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "OnRep_IsBeingControlled");

	Params::UControllableRidableComponent_OnRep_IsBeingControlled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllableRidableComponent.OnCapsuleBeginOverlap
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UControllableRidableComponent::OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "OnCapsuleBeginOverlap");

	Params::UControllableRidableComponent_OnCapsuleBeginOverlap_Params Parms{};

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


// Function RidingCodeRuntime.ControllableRidableComponent.IsSprintToggleable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControllableRidableComponent::IsSprintToggleable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "IsSprintToggleable");

	Params::UControllableRidableComponent_IsSprintToggleable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.ControllableRidableComponent.HandleJumpStopped
// (Event, Public, BlueprintEvent)
// Parameters:

void UControllableRidableComponent::HandleJumpStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleJumpStopped");

	Params::UControllableRidableComponent_HandleJumpStopped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.ControllableRidableComponent.HandleJumpStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UControllableRidableComponent::HandleJumpStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleJumpStarted");

	Params::UControllableRidableComponent_HandleJumpStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.ControllableRidableComponent.HandleJumpHeld
// (Event, Public, BlueprintEvent)
// Parameters:

void UControllableRidableComponent::HandleJumpHeld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleJumpHeld");

	Params::UControllableRidableComponent_HandleJumpHeld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.ControllableRidableComponent.HandleCancelSprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bAbilityInputHeld                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceCancel                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllableRidableComponent::HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleCancelSprint");

	Params::UControllableRidableComponent_HandleCancelSprint_Params Parms{};

	Parms.bAbilityInputHeld = bAbilityInputHeld;
	Parms.bForceCancel = bForceCancel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStopped
// (Event, Public, BlueprintEvent)
// Parameters:

void UControllableRidableComponent::HandleAbilityStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleAbilityStopped");

	Params::UControllableRidableComponent_HandleAbilityStopped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UControllableRidableComponent::HandleAbilityStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleAbilityStarted");

	Params::UControllableRidableComponent_HandleAbilityStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.ControllableRidableComponent.HandleAbilityHeld
// (Event, Public, BlueprintEvent)
// Parameters:

void UControllableRidableComponent::HandleAbilityHeld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleAbilityHeld");

	Params::UControllableRidableComponent_HandleAbilityHeld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.ControllableRidableComponent.GetAbilityDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UControllableRidableComponent::GetAbilityDisplayText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "GetAbilityDisplayText");

	Params::UControllableRidableComponent_GetAbilityDisplayText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.ControllableRidableComponent.CanStartSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControllableRidableComponent::CanStartSprinting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "CanStartSprinting");

	Params::UControllableRidableComponent_CanStartSprinting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.ControllableRidableComponent.CancelBuildBar
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UControllableRidableComponent::CancelBuildBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "CancelBuildBar");

	Params::UControllableRidableComponent_CancelBuildBar_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllableRidableComponent.CanBeControlled
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControllableRidableComponent::CanBeControlled(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllableRidableComponent", "CanBeControlled");

	Params::UControllableRidableComponent_CanBeControlled_Params Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RidingCodeRuntime.RiderComponent
// (None)

class UClass* URiderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RiderComponent");

	return Clss;
}


// RiderComponent RidingCodeRuntime.Default__RiderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URiderComponent* URiderComponent::GetDefaultObj()
{
	static class URiderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URiderComponent*>(URiderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function RidingCodeRuntime.RiderComponent.StopRidingActor
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLaunchRider                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFindDismountLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsJumpExit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URiderComponent::StopRidingActor(bool bLaunchRider, bool bFindDismountLocation, bool bIsJumpExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "StopRidingActor");

	Params::URiderComponent_StopRidingActor_Params Parms{};

	Parms.bLaunchRider = bLaunchRider;
	Parms.bFindDismountLocation = bFindDismountLocation;
	Parms.bIsJumpExit = bIsJumpExit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RiderComponent.StartRidingActor
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URiderComponent::StartRidingActor(class UActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "StartRidingActor");

	Params::URiderComponent_StartRidingActor_Params Parms{};

	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RiderComponent.ServerRidingExit
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void URiderComponent::ServerRidingExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "ServerRidingExit");

	Params::URiderComponent_ServerRidingExit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.OnRep_RidableControlRuntimeUpdated
// (Final, Native, Protected)
// Parameters:

void URiderComponent::OnRep_RidableControlRuntimeUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "OnRep_RidableControlRuntimeUpdated");

	Params::URiderComponent_OnRep_RidableControlRuntimeUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.OnRep_IsSprintingReplay
// (Final, Native, Protected)
// Parameters:

void URiderComponent::OnRep_IsSprintingReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "OnRep_IsSprintingReplay");

	Params::URiderComponent_OnRep_IsSprintingReplay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.OnRep_ActiveRidable
// (Final, Native, Protected)
// Parameters:

void URiderComponent::OnRep_ActiveRidable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "OnRep_ActiveRidable");

	Params::URiderComponent_OnRep_ActiveRidable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.OnMovementModeChanged
// (Final, Native, Protected)
// Parameters:
// class UCharacter*                  InCharacter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::OnMovementModeChanged(class UCharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "OnMovementModeChanged");

	Params::URiderComponent_OnMovementModeChanged_Params Parms{};

	Parms.InCharacter = InCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.IsRidingActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URiderComponent::IsRidingActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "IsRidingActor");

	Params::URiderComponent_IsRidingActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.RiderComponent.HandleStoppedRiding
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class URidableComponent*           Ridable                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandleStoppedRiding(class URidableComponent* Ridable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleStoppedRiding");

	Params::URiderComponent_HandleStoppedRiding_Params Parms{};

	Parms.Ridable = Ridable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleStartedRiding
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class URidableComponent*           Ridable                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandleStartedRiding(class URidableComponent* Ridable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleStartedRiding");

	Params::URiderComponent_HandleStartedRiding_Params Parms{};

	Parms.Ridable = Ridable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleRidingExitReleased
// (Final, Native, Protected)
// Parameters:

void URiderComponent::HandleRidingExitReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleRidingExitReleased");

	Params::URiderComponent_HandleRidingExitReleased_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleRidingExitPressed
// (Final, Native, Protected)
// Parameters:

void URiderComponent::HandleRidingExitPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleRidingExitPressed");

	Params::URiderComponent_HandleRidingExitPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleRiderTakenDamage
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class UActor*                      DamageOnOwnerPawnDamageddActor                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandleRiderTakenDamage(class UActor* DamageOnOwnerPawnDamageddActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleRiderTakenDamage");

	Params::URiderComponent_HandleRiderTakenDamage_Params Parms{};

	Parms.DamageOnOwnerPawnDamageddActor = DamageOnOwnerPawnDamageddActor;
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


// Function RidingCodeRuntime.RiderComponent.HandleRiderDidDamage
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandleRiderDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleRiderDidDamage");

	Params::URiderComponent_HandleRiderDidDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleRidableMovementModeChanged
// (Final, Native, Protected)
// Parameters:
// class UCharacter*                  InCharacter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandleRidableMovementModeChanged(class UCharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleRidableMovementModeChanged");

	Params::URiderComponent_HandleRidableMovementModeChanged_Params Parms{};

	Parms.InCharacter = InCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleRidableFound
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void URiderComponent::HandleRidableFound(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleRidableFound");

	Params::URiderComponent_HandleRidableFound_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.RiderComponent.HandlePawnTeleported
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   TeleportedPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandlePawnTeleported(class UFortPawn* TeleportedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandlePawnTeleported");

	Params::URiderComponent_HandlePawnTeleported_Params Parms{};

	Parms.TeleportedPawn = TeleportedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandlePawnDiedWhileRiding
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   DeadPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandlePawnDiedWhileRiding(class UFortPawn* DeadPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandlePawnDiedWhileRiding");

	Params::URiderComponent_HandlePawnDiedWhileRiding_Params Parms{};

	Parms.DeadPawn = DeadPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleOnWeaponEquipped
// (Final, Native, Protected)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandleOnWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleOnWeaponEquipped");

	Params::URiderComponent_HandleOnWeaponEquipped_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleGamepadRidingExitReleased
// (Final, Native, Protected)
// Parameters:

void URiderComponent::HandleGamepadRidingExitReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleGamepadRidingExitReleased");

	Params::URiderComponent_HandleGamepadRidingExitReleased_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleDeferredExitVelocity
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FVector                     ExitVelocity                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandleDeferredExitVelocity(const struct FVector& ExitVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleDeferredExitVelocity");

	Params::URiderComponent_HandleDeferredExitVelocity_Params Parms{};

	Parms.ExitVelocity = ExitVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleDBNOWhileRiding
// (Final, Native, Protected)
// Parameters:

void URiderComponent::HandleDBNOWhileRiding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleDBNOWhileRiding");

	Params::URiderComponent_HandleDBNOWhileRiding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.HandleActorEndPlayWhileRiding
// (Final, Native, Protected)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::HandleActorEndPlayWhileRiding(class UActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "HandleActorEndPlayWhileRiding");

	Params::URiderComponent_HandleActorEndPlayWhileRiding_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.ClientNotifyEmoteFailure
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayTagContainer       ErrorTags                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)

void URiderComponent::ClientNotifyEmoteFailure(const struct FGameplayTagContainer& ErrorTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "ClientNotifyEmoteFailure");

	Params::URiderComponent_ClientNotifyEmoteFailure_Params Parms{};

	Parms.ErrorTags = ErrorTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.RiderComponent.ClientHandleFinishedCharacterCustomization
// (Final, Native, Protected)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URiderComponent::ClientHandleFinishedCharacterCustomization(class UFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RiderComponent", "ClientHandleFinishedCharacterCustomization");

	Params::URiderComponent_ClientHandleFinishedCharacterCustomization_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RidingCodeRuntime.ControllingRiderComponent
// (None)

class UClass* UControllingRiderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControllingRiderComponent");

	return Clss;
}


// ControllingRiderComponent RidingCodeRuntime.Default__ControllingRiderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UControllingRiderComponent* UControllingRiderComponent::GetDefaultObj()
{
	static class UControllingRiderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UControllingRiderComponent*>(UControllingRiderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function RidingCodeRuntime.ControllingRiderComponent.UpdateFromInput
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRidingControlInputState    InputState                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UControllingRiderComponent::UpdateFromInput(float DeltaTime, struct FRidingControlInputState& InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "UpdateFromInput");

	Params::UControllingRiderComponent_UpdateFromInput_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.InputState = InputState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateUnreliable
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FRidingControlInputStateUnreliableInputState                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UControllingRiderComponent::ServerUpdateControlInputStateUnreliable(const struct FRidingControlInputStateUnreliable& InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "ServerUpdateControlInputStateUnreliable");

	Params::UControllingRiderComponent_ServerUpdateControlInputStateUnreliable_Params Parms{};

	Parms.InputState = InputState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateReliable
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FRidingControlInputStateReliableInputState                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UControllingRiderComponent::ServerUpdateControlInputStateReliable(const struct FRidingControlInputStateReliable& InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "ServerUpdateControlInputStateReliable");

	Params::UControllingRiderComponent_ServerUpdateControlInputStateReliable_Params Parms{};

	Parms.InputState = InputState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.ServerCancelPetting
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void UControllingRiderComponent::ServerCancelPetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "ServerCancelPetting");

	Params::UControllingRiderComponent_ServerCancelPetting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.ReloadPressed
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::ReloadPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "ReloadPressed");

	Params::UControllingRiderComponent_ReloadPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.OnSprintCanceled
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void UControllingRiderComponent::OnSprintCanceled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "OnSprintCanceled");

	Params::UControllingRiderComponent_OnSprintCanceled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.OnRep_IsControllingRidable
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::OnRep_IsControllingRidable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "OnRep_IsControllingRidable");

	Params::UControllingRiderComponent_OnRep_IsControllingRidable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputUnreliable
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::OnRep_ControlInputUnreliable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "OnRep_ControlInputUnreliable");

	Params::UControllingRiderComponent_OnRep_ControlInputUnreliable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputReliable
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::OnRep_ControlInputReliable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "OnRep_ControlInputReliable");

	Params::UControllingRiderComponent_OnRep_ControlInputReliable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.IsTryingToMove
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControllingRiderComponent::IsTryingToMove(float Tolerance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "IsTryingToMove");

	Params::UControllingRiderComponent_IsTryingToMove_Params Parms{};

	Parms.Tolerance = Tolerance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityReleased
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::HandleSpotActorOrPettingAbilityReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleSpotActorOrPettingAbilityReleased");

	Params::UControllingRiderComponent_HandleSpotActorOrPettingAbilityReleased_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityPressed
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::HandleSpotActorOrPettingAbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleSpotActorOrPettingAbilityPressed");

	Params::UControllingRiderComponent_HandleSpotActorOrPettingAbilityPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityReleased
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::HandleRidingAbilityReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleRidingAbilityReleased");

	Params::UControllingRiderComponent_HandleRidingAbilityReleased_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityPressed
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::HandleRidingAbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleRidingAbilityPressed");

	Params::UControllingRiderComponent_HandleRidingAbilityPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStop
// (Event, Protected, BlueprintEvent)
// Parameters:

void UControllingRiderComponent::HandleRequestPettingStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleRequestPettingStop");

	Params::UControllingRiderComponent_HandleRequestPettingStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStart
// (Event, Protected, BlueprintEvent)
// Parameters:

void UControllingRiderComponent::HandleRequestPettingStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleRequestPettingStart");

	Params::UControllingRiderComponent_HandleRequestPettingStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingCodeRuntime.ControllingRiderComponent.HandlePettingAbilityPressed
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::HandlePettingAbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "HandlePettingAbilityPressed");

	Params::UControllingRiderComponent_HandlePettingAbilityPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.HandleGamepadRidingAbilityPressed
// (Final, Native, Protected)
// Parameters:

void UControllingRiderComponent::HandleGamepadRidingAbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleGamepadRidingAbilityPressed");

	Params::UControllingRiderComponent_HandleGamepadRidingAbilityPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.GetControlInputState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRidingControlInputState    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRidingControlInputState UControllingRiderComponent::GetControlInputState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "GetControlInputState");

	Params::UControllingRiderComponent_GetControlInputState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveRight
// (Final, Native, Protected)
// Parameters:
// float                              Val                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllingRiderComponent::ControllingActor_OnMoveRight(float Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "ControllingActor_OnMoveRight");

	Params::UControllingRiderComponent_ControllingActor_OnMoveRight_Params Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveForward
// (Final, Native, Protected)
// Parameters:
// float                              Val                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllingRiderComponent::ControllingActor_OnMoveForward(float Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "ControllingActor_OnMoveForward");

	Params::UControllingRiderComponent_ControllingActor_OnMoveForward_Params Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnJumpInput
// (Final, Native, Protected)
// Parameters:
// bool                               bPressed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllingRiderComponent::ControllingActor_OnJumpInput(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllingRiderComponent", "ControllingActor_OnJumpInput");

	Params::UControllingRiderComponent_ControllingActor_OnJumpInput_Params Parms{};

	Parms.bPressed = bPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RidingCodeRuntime.FortCameraMode_Riding
// (None)

class UClass* UFortCameraMode_Riding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCameraMode_Riding");

	return Clss;
}


// FortCameraMode_Riding RidingCodeRuntime.Default__FortCameraMode_Riding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCameraMode_Riding* UFortCameraMode_Riding::GetDefaultObj()
{
	static class UFortCameraMode_Riding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCameraMode_Riding*>(UFortCameraMode_Riding::StaticClass()->DefaultObject);

	return Default;
}


// Class RidingCodeRuntime.RidingGameStateMutator
// (Actor)

class UClass* URidingGameStateMutator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RidingGameStateMutator");

	return Clss;
}


// RidingGameStateMutator RidingCodeRuntime.Default__RidingGameStateMutator
// (Public, ClassDefaultObject, ArchetypeObject)

class URidingGameStateMutator* URidingGameStateMutator::GetDefaultObj()
{
	static class URidingGameStateMutator* Default = nullptr;

	if (!Default)
		Default = static_cast<URidingGameStateMutator*>(URidingGameStateMutator::StaticClass()->DefaultObject);

	return Default;
}


// Class RidingCodeRuntime.RidingAnalytics
// (None)

class UClass* URidingAnalytics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RidingAnalytics");

	return Clss;
}


// RidingAnalytics RidingCodeRuntime.Default__RidingAnalytics
// (Public, ClassDefaultObject, ArchetypeObject)

class URidingAnalytics* URidingAnalytics::GetDefaultObj()
{
	static class URidingAnalytics* Default = nullptr;

	if (!Default)
		Default = static_cast<URidingAnalytics*>(URidingAnalytics::StaticClass()->DefaultObject);

	return Default;
}


// Class RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData
// (None)

class UClass* UFortAthenaPettingWildlifeTelemetryData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPettingWildlifeTelemetryData");

	return Clss;
}


// FortAthenaPettingWildlifeTelemetryData RidingCodeRuntime.Default__FortAthenaPettingWildlifeTelemetryData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaPettingWildlifeTelemetryData* UFortAthenaPettingWildlifeTelemetryData::GetDefaultObj()
{
	static class UFortAthenaPettingWildlifeTelemetryData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaPettingWildlifeTelemetryData*>(UFortAthenaPettingWildlifeTelemetryData::StaticClass()->DefaultObject);

	return Default;
}


// Function RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData.OnPetted
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaPettingWildlifeTelemetryData::OnPetted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPettingWildlifeTelemetryData", "OnPetted");

	Params::UFortAthenaPettingWildlifeTelemetryData_OnPetted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


