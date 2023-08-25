#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Mover.MoverBackendLiaisonInterface
// (None)

class UClass* UMoverBackendLiaisonInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoverBackendLiaisonInterface");

	return Clss;
}


// MoverBackendLiaisonInterface Mover.Default__MoverBackendLiaisonInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoverBackendLiaisonInterface* UMoverBackendLiaisonInterface::GetDefaultObj()
{
	static class UMoverBackendLiaisonInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoverBackendLiaisonInterface*>(UMoverBackendLiaisonInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Mover.MoverBasePawn
// (Actor, Pawn)

class UClass* UMoverBasePawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoverBasePawn");

	return Clss;
}


// MoverBasePawn Mover.Default__MoverBasePawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoverBasePawn* UMoverBasePawn::GetDefaultObj()
{
	static class UMoverBasePawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoverBasePawn*>(UMoverBasePawn::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.MoverBasePawn.OnProduceInputInBlueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaMs                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKinematicMoverInputCmdContextInputCmd                                                         (Parm, NativeAccessSpecifierPublic)
// struct FKinematicMoverInputCmdContextReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FKinematicMoverInputCmdContext UMoverBasePawn::OnProduceInputInBlueprint(float DeltaMs, const struct FKinematicMoverInputCmdContext& InputCmd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoverBasePawn", "OnProduceInputInBlueprint");

	Params::UMoverBasePawn_OnProduceInputInBlueprint_Params Parms{};

	Parms.DeltaMs = DeltaMs;
	Parms.InputCmd = InputCmd;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Mover.MoverBasePawn.GetMoverComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKinematicMoverComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UKinematicMoverComponent* UMoverBasePawn::GetMoverComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoverBasePawn", "GetMoverComponent");

	Params::UMoverBasePawn_GetMoverComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mover.MoverBlackboard
// (None)

class UClass* UMoverBlackboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoverBlackboard");

	return Clss;
}


// MoverBlackboard Mover.Default__MoverBlackboard
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoverBlackboard* UMoverBlackboard::GetDefaultObj()
{
	static class UMoverBlackboard* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoverBlackboard*>(UMoverBlackboard::StaticClass()->DefaultObject);

	return Default;
}


// Class Mover.MoverDataModelBlueprintLibrary
// (None)

class UClass* UMoverDataModelBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoverDataModelBlueprintLibrary");

	return Clss;
}


// MoverDataModelBlueprintLibrary Mover.Default__MoverDataModelBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoverDataModelBlueprintLibrary* UMoverDataModelBlueprintLibrary::GetDefaultObj()
{
	static class UMoverDataModelBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoverDataModelBlueprintLibrary*>(UMoverDataModelBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.MoverDataModelBlueprintLibrary.GetVelocityFromSyncState
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMoverDefaultSyncState      SyncState                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMoverDataModelBlueprintLibrary::GetVelocityFromSyncState(struct FMoverDefaultSyncState& SyncState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoverDataModelBlueprintLibrary", "GetVelocityFromSyncState");

	Params::UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Params Parms{};

	Parms.SyncState = SyncState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MoverDataModelBlueprintLibrary.GetOrientationFromSyncState
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMoverDefaultSyncState      SyncState                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UMoverDataModelBlueprintLibrary::GetOrientationFromSyncState(struct FMoverDefaultSyncState& SyncState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoverDataModelBlueprintLibrary", "GetOrientationFromSyncState");

	Params::UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Params Parms{};

	Parms.SyncState = SyncState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromSyncState
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMoverDefaultSyncState      SyncState                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMoverDataModelBlueprintLibrary::GetMoveDirectionIntentFromSyncState(struct FMoverDefaultSyncState& SyncState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoverDataModelBlueprintLibrary", "GetMoveDirectionIntentFromSyncState");

	Params::UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Params Parms{};

	Parms.SyncState = SyncState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromInputs
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FKinematicDefaultInputs     Inputs                                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMoverDataModelBlueprintLibrary::GetMoveDirectionIntentFromInputs(struct FKinematicDefaultInputs& Inputs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoverDataModelBlueprintLibrary", "GetMoveDirectionIntentFromInputs");

	Params::UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Params Parms{};

	Parms.Inputs = Inputs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MoverDataModelBlueprintLibrary.GetLocationFromSyncState
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMoverDefaultSyncState      SyncState                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMoverDataModelBlueprintLibrary::GetLocationFromSyncState(struct FMoverDefaultSyncState& SyncState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoverDataModelBlueprintLibrary", "GetLocationFromSyncState");

	Params::UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Params Parms{};

	Parms.SyncState = SyncState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mover.MoverNetworkPhysicsLiaisonComponent
// (None)

class UClass* UMoverNetworkPhysicsLiaisonComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoverNetworkPhysicsLiaisonComponent");

	return Clss;
}


// MoverNetworkPhysicsLiaisonComponent Mover.Default__MoverNetworkPhysicsLiaisonComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoverNetworkPhysicsLiaisonComponent* UMoverNetworkPhysicsLiaisonComponent::GetDefaultObj()
{
	static class UMoverNetworkPhysicsLiaisonComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoverNetworkPhysicsLiaisonComponent*>(UMoverNetworkPhysicsLiaisonComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Mover.MoverNetworkPredictionLiaisonComponent
// (None)

class UClass* UMoverNetworkPredictionLiaisonComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoverNetworkPredictionLiaisonComponent");

	return Clss;
}


// MoverNetworkPredictionLiaisonComponent Mover.Default__MoverNetworkPredictionLiaisonComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoverNetworkPredictionLiaisonComponent* UMoverNetworkPredictionLiaisonComponent::GetDefaultObj()
{
	static class UMoverNetworkPredictionLiaisonComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoverNetworkPredictionLiaisonComponent*>(UMoverNetworkPredictionLiaisonComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Mover.MoverDataCollectionLibrary
// (None)

class UClass* UMoverDataCollectionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoverDataCollectionLibrary");

	return Clss;
}


// MoverDataCollectionLibrary Mover.Default__MoverDataCollectionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoverDataCollectionLibrary* UMoverDataCollectionLibrary::GetDefaultObj()
{
	static class UMoverDataCollectionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoverDataCollectionLibrary*>(UMoverDataCollectionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.MoverDataCollectionLibrary.K2_GetDataFromCollection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               DidSucceed                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoverDataCollection        Collection                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              TargetAsRawBytes                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoverDataCollectionLibrary::K2_GetDataFromCollection(bool* DidSucceed, struct FMoverDataCollection& Collection, int32* TargetAsRawBytes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoverDataCollectionLibrary", "K2_GetDataFromCollection");

	Params::UMoverDataCollectionLibrary_K2_GetDataFromCollection_Params Parms{};

	Parms.Collection = Collection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DidSucceed != nullptr)
		*DidSucceed = Parms.DidSucceed;

	if (TargetAsRawBytes != nullptr)
		*TargetAsRawBytes = Parms.TargetAsRawBytes;

}


// Function Mover.MoverDataCollectionLibrary.K2_AddDataToCollection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMoverDataCollection        Collection                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              SourceAsRawBytes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoverDataCollectionLibrary::K2_AddDataToCollection(struct FMoverDataCollection& Collection, int32& SourceAsRawBytes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoverDataCollectionLibrary", "K2_AddDataToCollection");

	Params::UMoverDataCollectionLibrary_K2_AddDataToCollection_Params Parms{};

	Parms.Collection = Collection;
	Parms.SourceAsRawBytes = SourceAsRawBytes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Mover.PhysicsCharacterMovementModeInterface
// (None)

class UClass* UPhysicsCharacterMovementModeInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsCharacterMovementModeInterface");

	return Clss;
}


// PhysicsCharacterMovementModeInterface Mover.Default__PhysicsCharacterMovementModeInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsCharacterMovementModeInterface* UPhysicsCharacterMovementModeInterface::GetDefaultObj()
{
	static class UPhysicsCharacterMovementModeInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsCharacterMovementModeInterface*>(UPhysicsCharacterMovementModeInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Mover.KinematicMoverComponent
// (None)

class UClass* UKinematicMoverComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KinematicMoverComponent");

	return Clss;
}


// KinematicMoverComponent Mover.Default__KinematicMoverComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UKinematicMoverComponent* UKinematicMoverComponent::GetDefaultObj()
{
	static class UKinematicMoverComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UKinematicMoverComponent*>(UKinematicMoverComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.KinematicMoverComponent.SetHistoryTracking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SecondsToTrack                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SamplesPerSecond                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKinematicMoverComponent::SetHistoryTracking(float SecondsToTrack, float SamplesPerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "SetHistoryTracking");

	Params::UKinematicMoverComponent_SetHistoryTracking_Params Parms{};

	Parms.SecondsToTrack = SecondsToTrack;
	Parms.SamplesPerSecond = SamplesPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mover.KinematicMoverComponent.PhysicsVolumeChanged
// (Native, Protected)
// Parameters:
// class UPhysicsVolume*              NewVolume                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKinematicMoverComponent::PhysicsVolumeChanged(class UPhysicsVolume* NewVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "PhysicsVolumeChanged");

	Params::UKinematicMoverComponent_PhysicsVolumeChanged_Params Parms{};

	Parms.NewVolume = NewVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mover.KinematicMoverComponent.OnHistoryTrackingRollback
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FMoverTimeStep              NewTimeStep                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FMoverTimeStep              InvalidatedTimeStep                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UKinematicMoverComponent::OnHistoryTrackingRollback(struct FMoverTimeStep& NewTimeStep, struct FMoverTimeStep& InvalidatedTimeStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "OnHistoryTrackingRollback");

	Params::UKinematicMoverComponent_OnHistoryTrackingRollback_Params Parms{};

	Parms.NewTimeStep = NewTimeStep;
	Parms.InvalidatedTimeStep = InvalidatedTimeStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mover.KinematicMoverComponent.OnBeginOverlap
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Other                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UKinematicMoverComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class UActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "OnBeginOverlap");

	Params::UKinematicMoverComponent_OnBeginOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mover.KinematicMoverComponent.K2_QueueLayeredMove
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              MoveAsRawData                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKinematicMoverComponent::K2_QueueLayeredMove(int32& MoveAsRawData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "K2_QueueLayeredMove");

	Params::UKinematicMoverComponent_K2_QueueLayeredMove_Params Parms{};

	Parms.MoveAsRawData = MoveAsRawData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mover.KinematicMoverComponent.IsOnGround
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKinematicMoverComponent::IsOnGround()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "IsOnGround");

	Params::UKinematicMoverComponent_IsOnGround_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.IsFalling
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKinematicMoverComponent::IsFalling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "IsFalling");

	Params::UKinematicMoverComponent_IsFalling_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.IsAirborne
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKinematicMoverComponent::IsAirborne()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "IsAirborne");

	Params::UKinematicMoverComponent_IsAirborne_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.HasValidCachedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKinematicMoverComponent::HasValidCachedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "HasValidCachedState");

	Params::UKinematicMoverComponent_HasValidCachedState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.HasValidCachedInputCmd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKinematicMoverComponent::HasValidCachedInputCmd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "HasValidCachedInputCmd");

	Params::UKinematicMoverComponent_HasValidCachedInputCmd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UKinematicMoverComponent::GetVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetVelocity");

	Params::UKinematicMoverComponent_GetVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetTargetOrientation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UKinematicMoverComponent::GetTargetOrientation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetTargetOrientation");

	Params::UKinematicMoverComponent_GetTargetOrientation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetSyncState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKinematicMoverSyncState    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FKinematicMoverSyncState UKinematicMoverComponent::GetSyncState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetSyncState");

	Params::UKinematicMoverComponent_GetSyncState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetPastTrajectory
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TArray<struct FTrajectorySampleInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTrajectorySampleInfo> UKinematicMoverComponent::GetPastTrajectory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetPastTrajectory");

	Params::UKinematicMoverComponent_GetPastTrajectory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetMovementModeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UKinematicMoverComponent::GetMovementModeName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetMovementModeName");

	Params::UKinematicMoverComponent_GetMovementModeName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetMovementIntent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UKinematicMoverComponent::GetMovementIntent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetMovementIntent");

	Params::UKinematicMoverComponent_GetMovementIntent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetMovementBaseBoneName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UKinematicMoverComponent::GetMovementBaseBoneName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetMovementBaseBoneName");

	Params::UKinematicMoverComponent_GetMovementBaseBoneName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetMovementBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UKinematicMoverComponent::GetMovementBase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetMovementBase");

	Params::UKinematicMoverComponent_GetMovementBase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetLastInputCmd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKinematicMoverInputCmdContextReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FKinematicMoverInputCmdContext UKinematicMoverComponent::GetLastInputCmd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetLastInputCmd");

	Params::UKinematicMoverComponent_GetLastInputCmd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.KinematicMoverComponent.GetFutureTrajectory
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                              FutureSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SamplesPerSecond                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTrajectorySampleInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTrajectorySampleInfo> UKinematicMoverComponent::GetFutureTrajectory(float FutureSeconds, float SamplesPerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KinematicMoverComponent", "GetFutureTrajectory");

	Params::UKinematicMoverComponent_GetFutureTrajectory_Params Parms{};

	Parms.FutureSeconds = FutureSeconds;
	Parms.SamplesPerSecond = SamplesPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mover.BaseMovementMode
// (None)

class UClass* UBaseMovementMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMovementMode");

	return Clss;
}


// BaseMovementMode Mover.Default__BaseMovementMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseMovementMode* UBaseMovementMode::GetDefaultObj()
{
	static class UBaseMovementMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMovementMode*>(UBaseMovementMode::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.BaseMovementMode.K2_OnUnregistered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBaseMovementMode::K2_OnUnregistered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseMovementMode", "K2_OnUnregistered");

	Params::UBaseMovementMode_K2_OnUnregistered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Mover.BaseMovementMode.K2_OnSimulationTick
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSimulationTickParams       Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FKinematicMoverTickEndData  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FKinematicMoverTickEndData UBaseMovementMode::K2_OnSimulationTick(struct FSimulationTickParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseMovementMode", "K2_OnSimulationTick");

	Params::UBaseMovementMode_K2_OnSimulationTick_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Mover.BaseMovementMode.K2_OnRegistered
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        ModeName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBaseMovementMode::K2_OnRegistered(class FName ModeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseMovementMode", "K2_OnRegistered");

	Params::UBaseMovementMode_K2_OnRegistered_Params Parms{};

	Parms.ModeName = ModeName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mover.BaseMovementMode.K2_OnGenerateMove
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FKinematicMoverTickStartDataStartState                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMoverTimeStep              TimeStep                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FProposedMove               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FProposedMove UBaseMovementMode::K2_OnGenerateMove(struct FKinematicMoverTickStartData& StartState, struct FMoverTimeStep& TimeStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseMovementMode", "K2_OnGenerateMove");

	Params::UBaseMovementMode_K2_OnGenerateMove_Params Parms{};

	Parms.StartState = StartState;
	Parms.TimeStep = TimeStep;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Mover.BaseMovementMode.GetBlackboard_Mutable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoverBlackboard*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoverBlackboard* UBaseMovementMode::GetBlackboard_Mutable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseMovementMode", "GetBlackboard_Mutable");

	Params::UBaseMovementMode_GetBlackboard_Mutable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.BaseMovementMode.GetBlackboard
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoverBlackboard*            ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoverBlackboard* UBaseMovementMode::GetBlackboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseMovementMode", "GetBlackboard");

	Params::UBaseMovementMode_GetBlackboard_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mover.FallingMode
// (None)

class UClass* UFallingMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FallingMode");

	return Clss;
}


// FallingMode Mover.Default__FallingMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UFallingMode* UFallingMode::GetDefaultObj()
{
	static class UFallingMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UFallingMode*>(UFallingMode::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.FallingMode.OnSimulationTick
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSimulationTickParams       Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FKinematicMoverTickEndData  OutputState                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UFallingMode::OnSimulationTick(struct FSimulationTickParams& Params, struct FKinematicMoverTickEndData* OutputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FallingMode", "OnSimulationTick");

	Params::UFallingMode_OnSimulationTick_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutputState != nullptr)
		*OutputState = Parms.OutputState;

}


// Function Mover.FallingMode.OnGenerateMove
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKinematicMoverTickStartDataStartState                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMoverTimeStep              TimeStep                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FProposedMove               OutProposedMove                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UFallingMode::OnGenerateMove(struct FKinematicMoverTickStartData& StartState, struct FMoverTimeStep& TimeStep, struct FProposedMove* OutProposedMove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FallingMode", "OnGenerateMove");

	Params::UFallingMode_OnGenerateMove_Params Parms{};

	Parms.StartState = StartState;
	Parms.TimeStep = TimeStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutProposedMove != nullptr)
		*OutProposedMove = Parms.OutProposedMove;

}


// Class Mover.FlyingMode
// (None)

class UClass* UFlyingMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlyingMode");

	return Clss;
}


// FlyingMode Mover.Default__FlyingMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UFlyingMode* UFlyingMode::GetDefaultObj()
{
	static class UFlyingMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlyingMode*>(UFlyingMode::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.FlyingMode.OnSimulationTick
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSimulationTickParams       Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FKinematicMoverTickEndData  OutputState                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UFlyingMode::OnSimulationTick(struct FSimulationTickParams& Params, struct FKinematicMoverTickEndData* OutputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlyingMode", "OnSimulationTick");

	Params::UFlyingMode_OnSimulationTick_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutputState != nullptr)
		*OutputState = Parms.OutputState;

}


// Function Mover.FlyingMode.OnGenerateMove
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKinematicMoverTickStartDataStartState                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMoverTimeStep              TimeStep                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FProposedMove               OutProposedMove                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UFlyingMode::OnGenerateMove(struct FKinematicMoverTickStartData& StartState, struct FMoverTimeStep& TimeStep, struct FProposedMove* OutProposedMove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlyingMode", "OnGenerateMove");

	Params::UFlyingMode_OnGenerateMove_Params Parms{};

	Parms.StartState = StartState;
	Parms.TimeStep = TimeStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutProposedMove != nullptr)
		*OutProposedMove = Parms.OutProposedMove;

}


// Class Mover.WalkingMode
// (None)

class UClass* UWalkingMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WalkingMode");

	return Clss;
}


// WalkingMode Mover.Default__WalkingMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UWalkingMode* UWalkingMode::GetDefaultObj()
{
	static class UWalkingMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UWalkingMode*>(UWalkingMode::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.WalkingMode.OnSimulationTick
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSimulationTickParams       Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FKinematicMoverTickEndData  OutputState                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UWalkingMode::OnSimulationTick(struct FSimulationTickParams& Params, struct FKinematicMoverTickEndData* OutputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WalkingMode", "OnSimulationTick");

	Params::UWalkingMode_OnSimulationTick_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutputState != nullptr)
		*OutputState = Parms.OutputState;

}


// Function Mover.WalkingMode.OnGenerateMove
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKinematicMoverTickStartDataStartState                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMoverTimeStep              TimeStep                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FProposedMove               OutProposedMove                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UWalkingMode::OnGenerateMove(struct FKinematicMoverTickStartData& StartState, struct FMoverTimeStep& TimeStep, struct FProposedMove* OutProposedMove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WalkingMode", "OnGenerateMove");

	Params::UWalkingMode_OnGenerateMove_Params Parms{};

	Parms.StartState = StartState;
	Parms.TimeStep = TimeStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutProposedMove != nullptr)
		*OutProposedMove = Parms.OutProposedMove;

}


// Class Mover.MovementBaseUtils
// (None)

class UClass* UMovementBaseUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovementBaseUtils");

	return Clss;
}


// MovementBaseUtils Mover.Default__MovementBaseUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovementBaseUtils* UMovementBaseUtils::GetDefaultObj()
{
	static class UMovementBaseUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovementBaseUtils*>(UMovementBaseUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.MovementBaseUtils.TransformWorldRotatorToBased
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         MovementBase                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    WorldSpaceRotator                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    OutLocalRotator                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementBaseUtils::TransformWorldRotatorToBased(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FRotator& WorldSpaceRotator, struct FRotator* OutLocalRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformWorldRotatorToBased");

	Params::UMovementBaseUtils_TransformWorldRotatorToBased_Params Parms{};

	Parms.MovementBase = MovementBase;
	Parms.BoneName = BoneName;
	Parms.WorldSpaceRotator = WorldSpaceRotator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocalRotator != nullptr)
		*OutLocalRotator = Parms.OutLocalRotator;

	return Parms.ReturnValue;

}


// Function Mover.MovementBaseUtils.TransformWorldLocationToBased
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         MovementBase                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldSpaceLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocalLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementBaseUtils::TransformWorldLocationToBased(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FVector& WorldSpaceLocation, struct FVector* OutLocalLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformWorldLocationToBased");

	Params::UMovementBaseUtils_TransformWorldLocationToBased_Params Parms{};

	Parms.MovementBase = MovementBase;
	Parms.BoneName = BoneName;
	Parms.WorldSpaceLocation = WorldSpaceLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocalLocation != nullptr)
		*OutLocalLocation = Parms.OutLocalLocation;

	return Parms.ReturnValue;

}


// Function Mover.MovementBaseUtils.TransformWorldDirectionToBased
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         MovementBase                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldSpaceDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocalDirection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementBaseUtils::TransformWorldDirectionToBased(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FVector& WorldSpaceDirection, struct FVector* OutLocalDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformWorldDirectionToBased");

	Params::UMovementBaseUtils_TransformWorldDirectionToBased_Params Parms{};

	Parms.MovementBase = MovementBase;
	Parms.BoneName = BoneName;
	Parms.WorldSpaceDirection = WorldSpaceDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocalDirection != nullptr)
		*OutLocalDirection = Parms.OutLocalDirection;

	return Parms.ReturnValue;

}


// Function Mover.MovementBaseUtils.TransformRotatorToWorld
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       BaseQuat                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    LocalRotator                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    OutWorldSpaceRotator                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMovementBaseUtils::TransformRotatorToWorld(const struct FQuat& BaseQuat, const struct FRotator& LocalRotator, struct FRotator* OutWorldSpaceRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformRotatorToWorld");

	Params::UMovementBaseUtils_TransformRotatorToWorld_Params Parms{};

	Parms.BaseQuat = BaseQuat;
	Parms.LocalRotator = LocalRotator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWorldSpaceRotator != nullptr)
		*OutWorldSpaceRotator = Parms.OutWorldSpaceRotator;

}


// Function Mover.MovementBaseUtils.TransformRotatorToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       BaseQuat                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    WorldSpaceRotator                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    OutLocalRotator                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMovementBaseUtils::TransformRotatorToLocal(const struct FQuat& BaseQuat, const struct FRotator& WorldSpaceRotator, struct FRotator* OutLocalRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformRotatorToLocal");

	Params::UMovementBaseUtils_TransformRotatorToLocal_Params Parms{};

	Parms.BaseQuat = BaseQuat;
	Parms.WorldSpaceRotator = WorldSpaceRotator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocalRotator != nullptr)
		*OutLocalRotator = Parms.OutLocalRotator;

}


// Function Mover.MovementBaseUtils.TransformLocationToWorld
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BasePos                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       BaseQuat                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LocalLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocationWorldSpace                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovementBaseUtils::TransformLocationToWorld(const struct FVector& BasePos, const struct FQuat& BaseQuat, const struct FVector& LocalLocation, struct FVector* OutLocationWorldSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformLocationToWorld");

	Params::UMovementBaseUtils_TransformLocationToWorld_Params Parms{};

	Parms.BasePos = BasePos;
	Parms.BaseQuat = BaseQuat;
	Parms.LocalLocation = LocalLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocationWorldSpace != nullptr)
		*OutLocationWorldSpace = Parms.OutLocationWorldSpace;

}


// Function Mover.MovementBaseUtils.TransformLocationToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BasePos                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       BaseQuat                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldSpaceLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocalLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovementBaseUtils::TransformLocationToLocal(const struct FVector& BasePos, const struct FQuat& BaseQuat, const struct FVector& WorldSpaceLocation, struct FVector* OutLocalLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformLocationToLocal");

	Params::UMovementBaseUtils_TransformLocationToLocal_Params Parms{};

	Parms.BasePos = BasePos;
	Parms.BaseQuat = BaseQuat;
	Parms.WorldSpaceLocation = WorldSpaceLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocalLocation != nullptr)
		*OutLocalLocation = Parms.OutLocalLocation;

}


// Function Mover.MovementBaseUtils.TransformDirectionToWorld
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       BaseQuat                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LocalDirection                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutDirectionWorldSpace                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovementBaseUtils::TransformDirectionToWorld(const struct FQuat& BaseQuat, const struct FVector& LocalDirection, struct FVector* OutDirectionWorldSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformDirectionToWorld");

	Params::UMovementBaseUtils_TransformDirectionToWorld_Params Parms{};

	Parms.BaseQuat = BaseQuat;
	Parms.LocalDirection = LocalDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDirectionWorldSpace != nullptr)
		*OutDirectionWorldSpace = Parms.OutDirectionWorldSpace;

}


// Function Mover.MovementBaseUtils.TransformDirectionToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       BaseQuat                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldSpaceDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocalDirection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovementBaseUtils::TransformDirectionToLocal(const struct FQuat& BaseQuat, const struct FVector& WorldSpaceDirection, struct FVector* OutLocalDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformDirectionToLocal");

	Params::UMovementBaseUtils_TransformDirectionToLocal_Params Parms{};

	Parms.BaseQuat = BaseQuat;
	Parms.WorldSpaceDirection = WorldSpaceDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocalDirection != nullptr)
		*OutLocalDirection = Parms.OutLocalDirection;

}


// Function Mover.MovementBaseUtils.TransformBasedRotatorToWorld
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         MovementBase                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    LocalRotator                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    OutWorldSpaceRotator                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementBaseUtils::TransformBasedRotatorToWorld(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FRotator& LocalRotator, struct FRotator* OutWorldSpaceRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformBasedRotatorToWorld");

	Params::UMovementBaseUtils_TransformBasedRotatorToWorld_Params Parms{};

	Parms.MovementBase = MovementBase;
	Parms.BoneName = BoneName;
	Parms.LocalRotator = LocalRotator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWorldSpaceRotator != nullptr)
		*OutWorldSpaceRotator = Parms.OutWorldSpaceRotator;

	return Parms.ReturnValue;

}


// Function Mover.MovementBaseUtils.TransformBasedLocationToWorld
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         MovementBase                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LocalLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocationWorldSpace                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementBaseUtils::TransformBasedLocationToWorld(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FVector& LocalLocation, struct FVector* OutLocationWorldSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformBasedLocationToWorld");

	Params::UMovementBaseUtils_TransformBasedLocationToWorld_Params Parms{};

	Parms.MovementBase = MovementBase;
	Parms.BoneName = BoneName;
	Parms.LocalLocation = LocalLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocationWorldSpace != nullptr)
		*OutLocationWorldSpace = Parms.OutLocationWorldSpace;

	return Parms.ReturnValue;

}


// Function Mover.MovementBaseUtils.TransformBasedDirectionToWorld
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         MovementBase                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LocalDirection                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutDirectionWorldSpace                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementBaseUtils::TransformBasedDirectionToWorld(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FVector& LocalDirection, struct FVector* OutDirectionWorldSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "TransformBasedDirectionToWorld");

	Params::UMovementBaseUtils_TransformBasedDirectionToWorld_Params Parms{};

	Parms.MovementBase = MovementBase;
	Parms.BoneName = BoneName;
	Parms.LocalDirection = LocalDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDirectionWorldSpace != nullptr)
		*OutDirectionWorldSpace = Parms.OutDirectionWorldSpace;

	return Parms.ReturnValue;

}


// Function Mover.MovementBaseUtils.IsADynamicBase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         MovementBase                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementBaseUtils::IsADynamicBase(class UPrimitiveComponent* MovementBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "IsADynamicBase");

	Params::UMovementBaseUtils_IsADynamicBase_Params Parms{};

	Parms.MovementBase = MovementBase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementBaseUtils.GetMovementBaseTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         MovementBase                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       OutQuat                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementBaseUtils::GetMovementBaseTransform(class UPrimitiveComponent* MovementBase, class FName BoneName, struct FVector* OutLocation, struct FQuat* OutQuat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementBaseUtils", "GetMovementBaseTransform");

	Params::UMovementBaseUtils_GetMovementBaseTransform_Params Parms{};

	Parms.MovementBase = MovementBase;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = Parms.OutLocation;

	if (OutQuat != nullptr)
		*OutQuat = Parms.OutQuat;

	return Parms.ReturnValue;

}


// Class Mover.MovementUtils
// (None)

class UClass* UMovementUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovementUtils");

	return Clss;
}


// MovementUtils Mover.Default__MovementUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovementUtils* UMovementUtils::GetDefaultObj()
{
	static class UMovementUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovementUtils*>(UMovementUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.MovementUtils.TryWalkToSlideAlongSurface
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             UpdatedComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         UpdatedPrimitive                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Delta                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PctOfDeltaToMove                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Rotation                                                         (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bHandleImpact                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovementRecord             MoveRecord                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// float                              MaxWalkSlopeCosine                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovementUtils::TryWalkToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Delta, float PctOfDeltaToMove, const struct FQuat& Rotation, struct FVector& Normal, struct FHitResult* Hit, bool bHandleImpact, struct FMovementRecord* MoveRecord, float MaxWalkSlopeCosine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "TryWalkToSlideAlongSurface");

	Params::UMovementUtils_TryWalkToSlideAlongSurface_Params Parms{};

	Parms.UpdatedComponent = UpdatedComponent;
	Parms.UpdatedPrimitive = UpdatedPrimitive;
	Parms.Delta = Delta;
	Parms.PctOfDeltaToMove = PctOfDeltaToMove;
	Parms.Rotation = Rotation;
	Parms.Normal = Normal;
	Parms.bHandleImpact = bHandleImpact;
	Parms.MaxWalkSlopeCosine = MaxWalkSlopeCosine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Hit != nullptr)
		*Hit = Parms.Hit;

	if (MoveRecord != nullptr)
		*MoveRecord = Parms.MoveRecord;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.TrySafeMoveUpdatedComponent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             UpdatedComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         UpdatedPrimitive                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Delta                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       NewRotation                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSweep                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class ETeleportType           Teleport                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovementRecord             MoveRecord                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementUtils::TrySafeMoveUpdatedComponent(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Delta, struct FQuat& NewRotation, bool bSweep, struct FHitResult* OutHit, enum class ETeleportType Teleport, struct FMovementRecord* MoveRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "TrySafeMoveUpdatedComponent");

	Params::UMovementUtils_TrySafeMoveUpdatedComponent_Params Parms{};

	Parms.UpdatedComponent = UpdatedComponent;
	Parms.UpdatedPrimitive = UpdatedPrimitive;
	Parms.Delta = Delta;
	Parms.NewRotation = NewRotation;
	Parms.bSweep = bSweep;
	Parms.Teleport = Teleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = Parms.OutHit;

	if (MoveRecord != nullptr)
		*MoveRecord = Parms.MoveRecord;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.TryMoveToSlideAlongSurface
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             UpdatedComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         UpdatedPrimitive                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Delta                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PctOfDeltaToMove                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Rotation                                                         (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bHandleImpact                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovementRecord             MoveRecord                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovementUtils::TryMoveToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Delta, float PctOfDeltaToMove, const struct FQuat& Rotation, struct FVector& Normal, struct FHitResult* Hit, bool bHandleImpact, struct FMovementRecord* MoveRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "TryMoveToSlideAlongSurface");

	Params::UMovementUtils_TryMoveToSlideAlongSurface_Params Parms{};

	Parms.UpdatedComponent = UpdatedComponent;
	Parms.UpdatedPrimitive = UpdatedPrimitive;
	Parms.Delta = Delta;
	Parms.PctOfDeltaToMove = PctOfDeltaToMove;
	Parms.Rotation = Rotation;
	Parms.Normal = Normal;
	Parms.bHandleImpact = bHandleImpact;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Hit != nullptr)
		*Hit = Parms.Hit;

	if (MoveRecord != nullptr)
		*MoveRecord = Parms.MoveRecord;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.TryMoveToFallAlongSurface
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             UpdatedComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         UpdatedPrimitive                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Delta                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PctOfDeltaToMove                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Rotation                                                         (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bHandleImpact                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloorSweepDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxWalkSlopeCosine                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFloorCheckResult           OutFloorResult                                                   (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FMovementRecord             MoveRecord                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovementUtils::TryMoveToFallAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Delta, float PctOfDeltaToMove, const struct FQuat& Rotation, struct FVector& Normal, struct FHitResult* Hit, bool bHandleImpact, float FloorSweepDistance, float MaxWalkSlopeCosine, struct FFloorCheckResult* OutFloorResult, struct FMovementRecord* MoveRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "TryMoveToFallAlongSurface");

	Params::UMovementUtils_TryMoveToFallAlongSurface_Params Parms{};

	Parms.UpdatedComponent = UpdatedComponent;
	Parms.UpdatedPrimitive = UpdatedPrimitive;
	Parms.Delta = Delta;
	Parms.PctOfDeltaToMove = PctOfDeltaToMove;
	Parms.Rotation = Rotation;
	Parms.Normal = Normal;
	Parms.bHandleImpact = bHandleImpact;
	Parms.FloorSweepDistance = FloorSweepDistance;
	Parms.MaxWalkSlopeCosine = MaxWalkSlopeCosine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Hit != nullptr)
		*Hit = Parms.Hit;

	if (OutFloorResult != nullptr)
		*OutFloorResult = Parms.OutFloorResult;

	if (MoveRecord != nullptr)
		*MoveRecord = Parms.MoveRecord;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.IsValidLandingSpot
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             UpdatedComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         UpdatedPrimitive                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              FloorSweepDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxWalkSlopeCosine                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFloorCheckResult           OutFloorResult                                                   (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementUtils::IsValidLandingSpot(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Location, struct FHitResult& Hit, float FloorSweepDistance, float MaxWalkSlopeCosine, struct FFloorCheckResult* OutFloorResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "IsValidLandingSpot");

	Params::UMovementUtils_IsValidLandingSpot_Params Parms{};

	Parms.UpdatedComponent = UpdatedComponent;
	Parms.UpdatedPrimitive = UpdatedPrimitive;
	Parms.Location = Location;
	Parms.Hit = Hit;
	Parms.FloorSweepDistance = FloorSweepDistance;
	Parms.MaxWalkSlopeCosine = MaxWalkSlopeCosine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFloorResult != nullptr)
		*OutFloorResult = Parms.OutFloorResult;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.IsHitSurfaceWalkable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              MaxWalkSlopeCosine                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementUtils::IsHitSurfaceWalkable(struct FHitResult& Hit, float MaxWalkSlopeCosine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "IsHitSurfaceWalkable");

	Params::UMovementUtils_IsHitSurfaceWalkable_Params Parms{};

	Parms.Hit = Hit;
	Parms.MaxWalkSlopeCosine = MaxWalkSlopeCosine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.IsExceedingMaxSpeed
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Velocity                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMaxSpeed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementUtils::IsExceedingMaxSpeed(struct FVector& Velocity, float InMaxSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "IsExceedingMaxSpeed");

	Params::UMovementUtils_IsExceedingMaxSpeed_Params Parms{};

	Parms.Velocity = Velocity;
	Parms.InMaxSpeed = InMaxSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ConstrainToPlane
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Vector                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlane                      MovementPlane                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMaintainMagnitude                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMovementUtils::ConstrainToPlane(struct FVector& Vector, struct FPlane& MovementPlane, bool bMaintainMagnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ConstrainToPlane");

	Params::UMovementUtils_ConstrainToPlane_Params Parms{};

	Parms.Vector = Vector;
	Parms.MovementPlane = MovementPlane;
	Parms.bMaintainMagnitude = bMaintainMagnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ComputeVelocityFromPositions
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     FromPos                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ToPos                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMovementUtils::ComputeVelocityFromPositions(struct FVector& FromPos, struct FVector& ToPos, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ComputeVelocityFromPositions");

	Params::UMovementUtils_ComputeVelocityFromPositions_Params Parms{};

	Parms.FromPos = FromPos;
	Parms.ToPos = ToPos;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ComputeVelocityFromGravity
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     GravityAccel                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMovementUtils::ComputeVelocityFromGravity(struct FVector& GravityAccel, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ComputeVelocityFromGravity");

	Params::UMovementUtils_ComputeVelocityFromGravity_Params Parms{};

	Parms.GravityAccel = GravityAccel;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ComputeVelocity
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FComputeVelocityParams      InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMovementUtils::ComputeVelocity(struct FComputeVelocityParams& InParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ComputeVelocity");

	Params::UMovementUtils_ComputeVelocity_Params Parms{};

	Parms.InParams = InParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ComputeSlideDelta
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Delta                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PctOfDeltaToMove                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMovementUtils::ComputeSlideDelta(struct FVector& Delta, float PctOfDeltaToMove, struct FVector& Normal, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ComputeSlideDelta");

	Params::UMovementUtils_ComputeSlideDelta_Params Parms{};

	Parms.Delta = Delta;
	Parms.PctOfDeltaToMove = PctOfDeltaToMove;
	Parms.Normal = Normal;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ComputeDirectionIntent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     MoveInput                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMoveInputType          MoveInputType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMovementUtils::ComputeDirectionIntent(struct FVector& MoveInput, enum class EMoveInputType MoveInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ComputeDirectionIntent");

	Params::UMovementUtils_ComputeDirectionIntent_Params Parms{};

	Parms.MoveInput = MoveInput;
	Parms.MoveInputType = MoveInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ComputeDeflectedMoveOntoRamp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     OrigMoveDelta                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  RampHitResult                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              MaxWalkSlopeCosine                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHitFromLineTrace                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMovementUtils::ComputeDeflectedMoveOntoRamp(struct FVector& OrigMoveDelta, struct FHitResult& RampHitResult, float MaxWalkSlopeCosine, bool bHitFromLineTrace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ComputeDeflectedMoveOntoRamp");

	Params::UMovementUtils_ComputeDeflectedMoveOntoRamp_Params Parms{};

	Parms.OrigMoveDelta = OrigMoveDelta;
	Parms.RampHitResult = RampHitResult;
	Parms.MaxWalkSlopeCosine = MaxWalkSlopeCosine;
	Parms.bHitFromLineTrace = bHitFromLineTrace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ComputeControlledGroundMove
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGroundMoveParams           InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FProposedMove               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FProposedMove UMovementUtils::ComputeControlledGroundMove(struct FGroundMoveParams& InParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ComputeControlledGroundMove");

	Params::UMovementUtils_ComputeControlledGroundMove_Params Parms{};

	Parms.InParams = InParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ComputeControlledFreeMove
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFreeMoveParams             InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FProposedMove               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FProposedMove UMovementUtils::ComputeControlledFreeMove(struct FFreeMoveParams& InParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ComputeControlledFreeMove");

	Params::UMovementUtils_ComputeControlledFreeMove_Params Parms{};

	Parms.InParams = InParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.ComputeAngularVelocity
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    From                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    To                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TurningRateLimit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UMovementUtils::ComputeAngularVelocity(struct FRotator& From, struct FRotator& To, float DeltaSeconds, float TurningRateLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "ComputeAngularVelocity");

	Params::UMovementUtils_ComputeAngularVelocity_Params Parms{};

	Parms.From = From;
	Parms.To = To;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.TurningRateLimit = TurningRateLimit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.CanStepUpOnHitSurface
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovementUtils::CanStepUpOnHitSurface(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "CanStepUpOnHitSurface");

	Params::UMovementUtils_CanStepUpOnHitSurface_Params Parms{};

	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Mover.MovementUtils.AdjustProposedMoveForRootMotion
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FProposedMove               MoveToAdjust                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkeletalMesh                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     GroundNormal                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovementUtils::AdjustProposedMoveForRootMotion(struct FProposedMove* MoveToAdjust, class USkeletalMeshComponent* SkeletalMesh, struct FVector& GroundNormal, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementUtils", "AdjustProposedMoveForRootMotion");

	Params::UMovementUtils_AdjustProposedMoveForRootMotion_Params Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.GroundNormal = GroundNormal;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MoveToAdjust != nullptr)
		*MoveToAdjust = Parms.MoveToAdjust;

}


// Class Mover.PlayMoverMontageCallbackProxy
// (None)

class UClass* UPlayMoverMontageCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayMoverMontageCallbackProxy");

	return Clss;
}


// PlayMoverMontageCallbackProxy Mover.Default__PlayMoverMontageCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayMoverMontageCallbackProxy* UPlayMoverMontageCallbackProxy::GetDefaultObj()
{
	static class UPlayMoverMontageCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayMoverMontageCallbackProxy*>(UPlayMoverMontageCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function Mover.PlayMoverMontageCallbackProxy.OnMoverMontageEnded
// (Final, Native, Protected)
// Parameters:
// class FName                        IgnoredNotifyName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayMoverMontageCallbackProxy::OnMoverMontageEnded(class FName IgnoredNotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMoverMontageCallbackProxy", "OnMoverMontageEnded");

	Params::UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Params Parms{};

	Parms.IgnoredNotifyName = IgnoredNotifyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Mover.PlayMoverMontageCallbackProxy.CreateProxyObjectForPlayMoverMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UKinematicMoverComponent*    InMoverComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                MontageToPlay                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartingPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartingSection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayMoverMontageCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayMoverMontageCallbackProxy* UPlayMoverMontageCallbackProxy::CreateProxyObjectForPlayMoverMontage(class UKinematicMoverComponent* InMoverComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMoverMontageCallbackProxy", "CreateProxyObjectForPlayMoverMontage");

	Params::UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Params Parms{};

	Parms.InMoverComponent = InMoverComponent;
	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Mover.NullMovementMode
// (None)

class UClass* UNullMovementMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NullMovementMode");

	return Clss;
}


// NullMovementMode Mover.Default__NullMovementMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UNullMovementMode* UNullMovementMode::GetDefaultObj()
{
	static class UNullMovementMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UNullMovementMode*>(UNullMovementMode::StaticClass()->DefaultObject);

	return Default;
}


// Class Mover.MovementModeStateMachine
// (None)

class UClass* UMovementModeStateMachine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovementModeStateMachine");

	return Clss;
}


// MovementModeStateMachine Mover.Default__MovementModeStateMachine
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovementModeStateMachine* UMovementModeStateMachine::GetDefaultObj()
{
	static class UMovementModeStateMachine* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovementModeStateMachine*>(UMovementModeStateMachine::StaticClass()->DefaultObject);

	return Default;
}


// Class Mover.PhysicsDrivenFallingMode
// (None)

class UClass* UPhysicsDrivenFallingMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsDrivenFallingMode");

	return Clss;
}


// PhysicsDrivenFallingMode Mover.Default__PhysicsDrivenFallingMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsDrivenFallingMode* UPhysicsDrivenFallingMode::GetDefaultObj()
{
	static class UPhysicsDrivenFallingMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsDrivenFallingMode*>(UPhysicsDrivenFallingMode::StaticClass()->DefaultObject);

	return Default;
}


// Class Mover.PhysicsDrivenWalkingMode
// (None)

class UClass* UPhysicsDrivenWalkingMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsDrivenWalkingMode");

	return Clss;
}


// PhysicsDrivenWalkingMode Mover.Default__PhysicsDrivenWalkingMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsDrivenWalkingMode* UPhysicsDrivenWalkingMode::GetDefaultObj()
{
	static class UPhysicsDrivenWalkingMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsDrivenWalkingMode*>(UPhysicsDrivenWalkingMode::StaticClass()->DefaultObject);

	return Default;
}


// Class Mover.PhysicsMoverManager
// (None)

class UClass* UPhysicsMoverManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsMoverManager");

	return Clss;
}


// PhysicsMoverManager Mover.Default__PhysicsMoverManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsMoverManager* UPhysicsMoverManager::GetDefaultObj()
{
	static class UPhysicsMoverManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsMoverManager*>(UPhysicsMoverManager::StaticClass()->DefaultObject);

	return Default;
}

}


