#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FallTeleportationRuntime.FortFallTeleportSpawnerComponent
// (None)

class UClass* UFortFallTeleportSpawnerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortFallTeleportSpawnerComponent");

	return Clss;
}


// FortFallTeleportSpawnerComponent FallTeleportationRuntime.Default__FortFallTeleportSpawnerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortFallTeleportSpawnerComponent* UFortFallTeleportSpawnerComponent::GetDefaultObj()
{
	static class UFortFallTeleportSpawnerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortFallTeleportSpawnerComponent*>(UFortFallTeleportSpawnerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleWarmupCountdownEndTimeUpdated
// (Final, Native, Protected)
// Parameters:
// float                              NewEndTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortFallTeleportSpawnerComponent::HandleWarmupCountdownEndTimeUpdated(float NewEndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFallTeleportSpawnerComponent", "HandleWarmupCountdownEndTimeUpdated");

	Params::UFortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated_Params Parms{};

	Parms.NewEndTime = NewEndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleGamePhaseChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FFortGamePhaseUpdatedEvent  Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortFallTeleportSpawnerComponent::HandleGamePhaseChanged(struct FFortGamePhaseUpdatedEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFallTeleportSpawnerComponent", "HandleGamePhaseChanged");

	Params::UFortFallTeleportSpawnerComponent_HandleGamePhaseChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FallTeleportationRuntime.FortFallTeleportCheatManager
// (None)

class UClass* UFortFallTeleportCheatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortFallTeleportCheatManager");

	return Clss;
}


// FortFallTeleportCheatManager FallTeleportationRuntime.Default__FortFallTeleportCheatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortFallTeleportCheatManager* UFortFallTeleportCheatManager::GetDefaultObj()
{
	static class UFortFallTeleportCheatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortFallTeleportCheatManager*>(UFortFallTeleportCheatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function FallTeleportationRuntime.FortFallTeleportCheatManager.EnableFallTeleportationIndefinitely
// (Final, Exec, Native, Private)
// Parameters:

void UFortFallTeleportCheatManager::EnableFallTeleportationIndefinitely()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFallTeleportCheatManager", "EnableFallTeleportationIndefinitely");

	Params::UFortFallTeleportCheatManager_EnableFallTeleportationIndefinitely_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FallTeleportationRuntime.FortFallTeleportComponentBase
// (None)

class UClass* UFortFallTeleportComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortFallTeleportComponentBase");

	return Clss;
}


// FortFallTeleportComponentBase FallTeleportationRuntime.Default__FortFallTeleportComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortFallTeleportComponentBase* UFortFallTeleportComponentBase::GetDefaultObj()
{
	static class UFortFallTeleportComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortFallTeleportComponentBase*>(UFortFallTeleportComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FallTeleportationRuntime.FortFallTeleportComponentBase.UpdateLastGroundLocation
// (Final, Native, Protected)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortFallTeleportComponentBase::UpdateLastGroundLocation(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFallTeleportComponentBase", "UpdateLastGroundLocation");

	Params::UFortFallTeleportComponentBase_UpdateLastGroundLocation_Params Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FallTeleportationRuntime.FortFallTeleportComponentBase.IsValidActorToTeleportOn
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ActorToTeleportOn                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortFallTeleportComponentBase::IsValidActorToTeleportOn(class UActor* ActorToTeleportOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFallTeleportComponentBase", "IsValidActorToTeleportOn");

	Params::UFortFallTeleportComponentBase_IsValidActorToTeleportOn_Params Parms{};

	Parms.ActorToTeleportOn = ActorToTeleportOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FallTeleportationRuntime.FortFallTeleportComponentBase.IsTeleportLocationValid
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     LocationToTest                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortFallTeleportComponentBase::IsTeleportLocationValid(struct FVector& LocationToTest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFallTeleportComponentBase", "IsTeleportLocationValid");

	Params::UFortFallTeleportComponentBase_IsTeleportLocationValid_Params Parms{};

	Parms.LocationToTest = LocationToTest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


