#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LaserGameplayRuntime.LaserCapsuleComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULaserCapsuleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LaserCapsuleComponent");

	return Clss;
}


// LaserCapsuleComponent LaserGameplayRuntime.Default__LaserCapsuleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULaserCapsuleComponent* ULaserCapsuleComponent::GetDefaultObj()
{
	static class ULaserCapsuleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULaserCapsuleComponent*>(ULaserCapsuleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class LaserGameplayRuntime.LaserGridEditorComponent
// (None)

class UClass* ULaserGridEditorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LaserGridEditorComponent");

	return Clss;
}


// LaserGridEditorComponent LaserGameplayRuntime.Default__LaserGridEditorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULaserGridEditorComponent* ULaserGridEditorComponent::GetDefaultObj()
{
	static class ULaserGridEditorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULaserGridEditorComponent*>(ULaserGridEditorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class LaserGameplayRuntime.BuildingGameplayActorLaserGrid
// (Actor)

class UClass* UBuildingGameplayActorLaserGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildingGameplayActorLaserGrid");

	return Clss;
}


// BuildingGameplayActorLaserGrid LaserGameplayRuntime.Default__BuildingGameplayActorLaserGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UBuildingGameplayActorLaserGrid* UBuildingGameplayActorLaserGrid::GetDefaultObj()
{
	static class UBuildingGameplayActorLaserGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuildingGameplayActorLaserGrid*>(UBuildingGameplayActorLaserGrid::StaticClass()->DefaultObject);

	return Default;
}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.SetLaserGridEnable
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuildingGameplayActorLaserGrid::SetLaserGridEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "SetLaserGridEnable");

	Params::UBuildingGameplayActorLaserGrid_SetLaserGridEnable_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_LaserGridConnections
// (Final, Native, Private)
// Parameters:

void UBuildingGameplayActorLaserGrid::OnRep_LaserGridConnections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "OnRep_LaserGridConnections");

	Params::UBuildingGameplayActorLaserGrid_OnRep_LaserGridConnections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_bEnabled
// (Final, Native, Private)
// Parameters:

void UBuildingGameplayActorLaserGrid::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "OnRep_bEnabled");

	Params::UBuildingGameplayActorLaserGrid_OnRep_bEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridTriggered
// (BlueprintAuthorityOnly, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FLaserGridConnectionEntry   LaserConnectionData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UActor*                      TriggeringActor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuildingGameplayActorLaserGrid::LaserGridTriggered(struct FLaserGridConnectionEntry& LaserConnectionData, class UActor* TriggeringActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "LaserGridTriggered");

	Params::UBuildingGameplayActorLaserGrid_LaserGridTriggered_Params Parms{};

	Parms.LaserConnectionData = LaserConnectionData;
	Parms.TriggeringActor = TriggeringActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bLaserGridEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuildingGameplayActorLaserGrid::LaserGridStateUpdated(bool bLaserGridEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "LaserGridStateUpdated");

	Params::UBuildingGameplayActorLaserGrid_LaserGridStateUpdated_Params Parms{};

	Parms.bLaserGridEnabled = bLaserGridEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PreTransition
// (Final, Native, Private)
// Parameters:

void UBuildingGameplayActorLaserGrid::HandlePatternTimerComplete_PreTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "HandlePatternTimerComplete_PreTransition");

	Params::UBuildingGameplayActorLaserGrid_HandlePatternTimerComplete_PreTransition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PostTransition
// (Final, Native, Private)
// Parameters:

void UBuildingGameplayActorLaserGrid::HandlePatternTimerComplete_PostTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "HandlePatternTimerComplete_PostTransition");

	Params::UBuildingGameplayActorLaserGrid_HandlePatternTimerComplete_PostTransition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleLaserCollisionOverlap
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UBuildingGameplayActorLaserGrid::HandleLaserCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "HandleLaserCollisionOverlap");

	Params::UBuildingGameplayActorLaserGrid_HandleLaserCollisionOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
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


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleAttachedBuildingActorDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuildingGameplayActorLaserGrid::HandleAttachedBuildingActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "HandleAttachedBuildingActorDied");

	Params::UBuildingGameplayActorLaserGrid_HandleAttachedBuildingActorDied_Params Parms{};

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


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.GetActiveLaserGridConnections
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FLaserGridConnectionEntry>OutActiveLaserGridConnections                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UBuildingGameplayActorLaserGrid::GetActiveLaserGridConnections(TArray<struct FLaserGridConnectionEntry>* OutActiveLaserGridConnections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "GetActiveLaserGridConnections");

	Params::UBuildingGameplayActorLaserGrid_GetActiveLaserGridConnections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutActiveLaserGridConnections != nullptr)
		*OutActiveLaserGridConnections = Parms.OutActiveLaserGridConnections;

}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CosmeticDestroyOutletInstance
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FLaserGridOutletEntry       OutletEntry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UBuildingGameplayActorLaserGrid::CosmeticDestroyOutletInstance(struct FLaserGridOutletEntry& OutletEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "CosmeticDestroyOutletInstance");

	Params::UBuildingGameplayActorLaserGrid_CosmeticDestroyOutletInstance_Params Parms{};

	Parms.OutletEntry = OutletEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CanActorTriggerLaserGrid
// (BlueprintAuthorityOnly, Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UActor*                      TriggeringActor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuildingGameplayActorLaserGrid::CanActorTriggerLaserGrid(class UActor* TriggeringActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingGameplayActorLaserGrid", "CanActorTriggerLaserGrid");

	Params::UBuildingGameplayActorLaserGrid_CanActorTriggerLaserGrid_Params Parms{};

	Parms.TriggeringActor = TriggeringActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


