#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AscenderCodeRuntime.FortCheatManager_AscenderZipline
// (None)

class UClass* UFortCheatManager_AscenderZipline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_AscenderZipline");

	return Clss;
}


// FortCheatManager_AscenderZipline AscenderCodeRuntime.Default__FortCheatManager_AscenderZipline
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_AscenderZipline* UFortCheatManager_AscenderZipline::GetDefaultObj()
{
	static class UFortCheatManager_AscenderZipline* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_AscenderZipline*>(UFortCheatManager_AscenderZipline::StaticClass()->DefaultObject);

	return Default;
}


// Function AscenderCodeRuntime.FortCheatManager_AscenderZipline.RemoveAscenders
// (Final, Exec, Native, Public)
// Parameters:
// bool                               bRemoveAscendersOn                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_AscenderZipline::RemoveAscenders(bool bRemoveAscendersOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_AscenderZipline", "RemoveAscenders");

	Params::UFortCheatManager_AscenderZipline_RemoveAscenders_Params Parms{};

	Parms.bRemoveAscendersOn = bRemoveAscendersOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AscenderCodeRuntime.FortAscenderZipline
// (Actor)

class UClass* UFortAscenderZipline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAscenderZipline");

	return Clss;
}


// FortAscenderZipline AscenderCodeRuntime.Default__FortAscenderZipline
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAscenderZipline* UFortAscenderZipline::GetDefaultObj()
{
	static class UFortAscenderZipline* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAscenderZipline*>(UFortAscenderZipline::StaticClass()->DefaultObject);

	return Default;
}


// Function AscenderCodeRuntime.FortAscenderZipline.SetupAscender
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bFromConstruction                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromReplication                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAscenderZipline::SetupAscender(bool bFromConstruction, bool bFromReplication)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "SetupAscender");

	Params::UFortAscenderZipline_SetupAscender_Params Parms{};

	Parms.bFromConstruction = bFromConstruction;
	Parms.bFromReplication = bFromReplication;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation
// (Final, Native, Protected)
// Parameters:

void UFortAscenderZipline::OnRep_TargetSplineEndLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "OnRep_TargetSplineEndLocation");

	Params::UFortAscenderZipline_OnRep_TargetSplineEndLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle
// (Final, Native, Protected)
// Parameters:

void UFortAscenderZipline::OnRep_PawnUsingHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "OnRep_PawnUsingHandle");

	Params::UFortAscenderZipline_OnRep_PawnUsingHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation
// (Final, Native, Protected)
// Parameters:

void UFortAscenderZipline::OnRep_InitialSplineEndLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "OnRep_InitialSplineEndLocation");

	Params::UFortAscenderZipline_OnRep_InitialSplineEndLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   DeadPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAscenderZipline::HandlePawnUsingHandleDied(class UFortPawn* DeadPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "HandlePawnUsingHandleDied");

	Params::UFortAscenderZipline_HandlePawnUsingHandleDied_Params Parms{};

	Parms.DeadPawn = DeadPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged
// (Final, Native, Protected)
// Parameters:

void UFortAscenderZipline::HandleFloorActorHealthChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "HandleFloorActorHealthChanged");

	Params::UFortAscenderZipline_HandleFloorActorHealthChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed
// (Final, Native, Protected)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAscenderZipline::HandleFloorActorDestroyed(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "HandleFloorActorDestroyed");

	Params::UFortAscenderZipline_HandleFloorActorDestroyed_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AscenderCodeRuntime.FortAscenderZipline.GetTopComponent
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UFortAscenderZipline::GetTopComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "GetTopComponent");

	Params::UFortAscenderZipline_GetTopComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerPawn*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPlayerPawn* UFortAscenderZipline::GetPawnUsingHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "GetPawnUsingHandle");

	Params::UFortAscenderZipline_GetPawnUsingHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFortPlayerPawn*             InteractingPawn                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         InteractComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UFortAscenderZipline::GetInteractComponentOverride(class UFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "GetInteractComponentOverride");

	Params::UFortAscenderZipline_GetInteractComponentOverride_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UFortAscenderZipline::GetHandleComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "GetHandleComponent");

	Params::UFortAscenderZipline_GetHandleComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAscenderZipline::BP_HandleUpdatedLoweringHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleUpdatedLoweringHandle");

	Params::UFortAscenderZipline_BP_HandleUpdatedLoweringHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAscenderZipline::BP_HandleUpdatedLoweringCable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleUpdatedLoweringCable");

	Params::UFortAscenderZipline_BP_HandleUpdatedLoweringCable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAscenderZipline::BP_HandleStoppedLoweringHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStoppedLoweringHandle");

	Params::UFortAscenderZipline_BP_HandleStoppedLoweringHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAscenderZipline::BP_HandleStoppedLoweringCable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStoppedLoweringCable");

	Params::UFortAscenderZipline_BP_HandleStoppedLoweringCable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAscenderZipline::BP_HandleStartedLoweringHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStartedLoweringHandle");

	Params::UFortAscenderZipline_BP_HandleStartedLoweringHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAscenderZipline::BP_HandleStartedLoweringCable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandleStartedLoweringCable");

	Params::UFortAscenderZipline_BP_HandleStartedLoweringCable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAscenderZipline::BP_HandlePlayerStoppedUsingHandle(class UFortPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandlePlayerStoppedUsingHandle");

	Params::UFortAscenderZipline_BP_HandlePlayerStoppedUsingHandle_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAscenderZipline::BP_HandlePlayerStartedUsingHandle(class UFortPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "BP_HandlePlayerStartedUsingHandle");

	Params::UFortAscenderZipline_BP_HandlePlayerStartedUsingHandle_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBuildingSMActor*            BuildingActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageSource                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAscenderZipline::ApplyStructureDamage(class UBuildingSMActor* BuildingActor, class UActor* DamageSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAscenderZipline", "ApplyStructureDamage");

	Params::UFortAscenderZipline_ApplyStructureDamage_Params Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.DamageSource = DamageSource;

	UObject::ProcessEvent(Func, &Parms);

}

}


