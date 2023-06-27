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


// Function AscenderCodeRuntime.FortCheatManager_AscenderZipline.RemoveAscenders
// (Final, Exec, Native, Public)
// Parameters:
// bool                               bRemoveAscendersOn                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_AscenderZipline::RemoveAscenders(bool bRemoveAscendersOn)
{
	static auto Func = Class->GetFunction("FortCheatManager_AscenderZipline", "RemoveAscenders");

	Params::UFortCheatManager_AscenderZipline_RemoveAscenders_Params Parms;

	Parms.bRemoveAscendersOn = bRemoveAscendersOn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AscenderCodeRuntime.FortAscenderZipline.SetupAscender
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bFromConstruction                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromReplication                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAscenderZipline::SetupAscender(bool bFromConstruction, bool bFromReplication)
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "SetupAscender");

	Params::AFortAscenderZipline_SetupAscender_Params Parms;

	Parms.bFromConstruction = bFromConstruction;
	Parms.bFromReplication = bFromReplication;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation
// (Final, Native, Protected)
// Parameters:

void AFortAscenderZipline::OnRep_TargetSplineEndLocation()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "OnRep_TargetSplineEndLocation");

	Params::AFortAscenderZipline_OnRep_TargetSplineEndLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle
// (Final, Native, Protected)
// Parameters:

void AFortAscenderZipline::OnRep_PawnUsingHandle()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "OnRep_PawnUsingHandle");

	Params::AFortAscenderZipline_OnRep_PawnUsingHandle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation
// (Final, Native, Protected)
// Parameters:

void AFortAscenderZipline::OnRep_InitialSplineEndLocation()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "OnRep_InitialSplineEndLocation");

	Params::AFortAscenderZipline_OnRep_InitialSplineEndLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied
// (Final, Native, Protected)
// Parameters:
// class AFortPawn*                   DeadPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAscenderZipline::HandlePawnUsingHandleDied(class AFortPawn* DeadPawn)
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "HandlePawnUsingHandleDied");

	Params::AFortAscenderZipline_HandlePawnUsingHandleDied_Params Parms;

	Parms.DeadPawn = DeadPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged
// (Final, Native, Protected)
// Parameters:

void AFortAscenderZipline::HandleFloorActorHealthChanged()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "HandleFloorActorHealthChanged");

	Params::AFortAscenderZipline_HandleFloorActorHealthChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAscenderZipline::HandleFloorActorDestroyed(class AActor* Actor)
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "HandleFloorActorDestroyed");

	Params::AFortAscenderZipline_HandleFloorActorDestroyed_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AscenderCodeRuntime.FortAscenderZipline.GetTopComponent
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* AFortAscenderZipline::GetTopComponent()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "GetTopComponent");

	Params::AFortAscenderZipline_GetTopComponent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortPlayerPawn* AFortAscenderZipline::GetPawnUsingHandle()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "GetPawnUsingHandle");

	Params::AFortAscenderZipline_GetPawnUsingHandle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AFortPlayerPawn*             InteractingPawn                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         InteractComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* AFortAscenderZipline::GetInteractComponentOverride(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent)
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "GetInteractComponentOverride");

	Params::AFortAscenderZipline_GetInteractComponentOverride_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* AFortAscenderZipline::GetHandleComponent()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "GetHandleComponent");

	Params::AFortAscenderZipline_GetHandleComponent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortAscenderZipline::BP_HandleUpdatedLoweringHandle()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "BP_HandleUpdatedLoweringHandle");

	Params::AFortAscenderZipline_BP_HandleUpdatedLoweringHandle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortAscenderZipline::BP_HandleUpdatedLoweringCable()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "BP_HandleUpdatedLoweringCable");

	Params::AFortAscenderZipline_BP_HandleUpdatedLoweringCable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortAscenderZipline::BP_HandleStoppedLoweringHandle()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStoppedLoweringHandle");

	Params::AFortAscenderZipline_BP_HandleStoppedLoweringHandle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortAscenderZipline::BP_HandleStoppedLoweringCable()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStoppedLoweringCable");

	Params::AFortAscenderZipline_BP_HandleStoppedLoweringCable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortAscenderZipline::BP_HandleStartedLoweringHandle()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStartedLoweringHandle");

	Params::AFortAscenderZipline_BP_HandleStartedLoweringHandle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortAscenderZipline::BP_HandleStartedLoweringCable()
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStartedLoweringCable");

	Params::AFortAscenderZipline_BP_HandleStartedLoweringCable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAscenderZipline::BP_HandlePlayerStoppedUsingHandle(class AFortPlayerPawn* Player)
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "BP_HandlePlayerStoppedUsingHandle");

	Params::AFortAscenderZipline_BP_HandlePlayerStoppedUsingHandle_Params Parms;

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAscenderZipline::BP_HandlePlayerStartedUsingHandle(class AFortPlayerPawn* Player)
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "BP_HandlePlayerStartedUsingHandle");

	Params::AFortAscenderZipline_BP_HandlePlayerStartedUsingHandle_Params Parms;

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABuildingSMActor*            BuildingActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageSource                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAscenderZipline::ApplyStructureDamage(class ABuildingSMActor* BuildingActor, class AActor* DamageSource)
{
	static auto Func = Class->GetFunction("FortAscenderZipline", "ApplyStructureDamage");

	Params::AFortAscenderZipline_ApplyStructureDamage_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.DamageSource = DamageSource;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
