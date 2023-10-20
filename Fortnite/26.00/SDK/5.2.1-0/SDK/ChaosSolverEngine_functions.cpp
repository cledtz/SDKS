#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosSolverEngine.ChaosDebugDrawComponent
// (None)

class UClass* UChaosDebugDrawComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosDebugDrawComponent");

	return Clss;
}


// ChaosDebugDrawComponent ChaosSolverEngine.Default__ChaosDebugDrawComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosDebugDrawComponent* UChaosDebugDrawComponent::GetDefaultObj()
{
	static class UChaosDebugDrawComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosDebugDrawComponent*>(UChaosDebugDrawComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosSolverEngine.ChaosEventListenerComponent
// (None)

class UClass* UChaosEventListenerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosEventListenerComponent");

	return Clss;
}


// ChaosEventListenerComponent ChaosSolverEngine.Default__ChaosEventListenerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosEventListenerComponent* UChaosEventListenerComponent::GetDefaultObj()
{
	static class UChaosEventListenerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosEventListenerComponent*>(UChaosEventListenerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// (None)

class UClass* UChaosGameplayEventDispatcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosGameplayEventDispatcher");

	return Clss;
}


// ChaosGameplayEventDispatcher ChaosSolverEngine.Default__ChaosGameplayEventDispatcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosGameplayEventDispatcher* UChaosGameplayEventDispatcher::GetDefaultObj()
{
	static class UChaosGameplayEventDispatcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosGameplayEventDispatcher*>(UChaosGameplayEventDispatcher::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// (None)

class UClass* UChaosNotifyHandlerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosNotifyHandlerInterface");

	return Clss;
}


// ChaosNotifyHandlerInterface ChaosSolverEngine.Default__ChaosNotifyHandlerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosNotifyHandlerInterface* UChaosNotifyHandlerInterface::GetDefaultObj()
{
	static class UChaosNotifyHandlerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosNotifyHandlerInterface*>(UChaosNotifyHandlerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// (None)

class UClass* UChaosSolverEngineBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosSolverEngineBlueprintLibrary");

	return Clss;
}


// ChaosSolverEngineBlueprintLibrary ChaosSolverEngine.Default__ChaosSolverEngineBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosSolverEngineBlueprintLibrary* UChaosSolverEngineBlueprintLibrary::GetDefaultObj()
{
	static class UChaosSolverEngineBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosSolverEngineBlueprintLibrary*>(UChaosSolverEngineBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FChaosPhysicsCollisionInfo  PhysicsCollision                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosSolverEngineBlueprintLibrary", "ConvertPhysicsCollisionToHitResult");

	Params::UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params Parms{};

	Parms.PhysicsCollision = PhysicsCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChaosSolverEngine.ChaosSolver
// (None)

class UClass* UChaosSolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosSolver");

	return Clss;
}


// ChaosSolver ChaosSolverEngine.Default__ChaosSolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosSolver* UChaosSolver::GetDefaultObj()
{
	static class UChaosSolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosSolver*>(UChaosSolver::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosSolverEngine.ChaosSolverActor
// (Actor)

class UClass* UChaosSolverActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosSolverActor");

	return Clss;
}


// ChaosSolverActor ChaosSolverEngine.Default__ChaosSolverActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosSolverActor* UChaosSolverActor::GetDefaultObj()
{
	static class UChaosSolverActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosSolverActor*>(UChaosSolverActor::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosSolverActor::SetSolverActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosSolverActor", "SetSolverActive");

	Params::UChaosSolverActor_SetSolverActive_Params Parms{};

	Parms.bActive = bActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChaosSolverActor::SetAsCurrentWorldSolver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosSolverActor", "SetAsCurrentWorldSolver");

	Params::UChaosSolverActor_SetAsCurrentWorldSolver_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ChaosSolverEngine.ChaosSolverSettings
// (None)

class UClass* UChaosSolverSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosSolverSettings");

	return Clss;
}


// ChaosSolverSettings ChaosSolverEngine.Default__ChaosSolverSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosSolverSettings* UChaosSolverSettings::GetDefaultObj()
{
	static class UChaosSolverSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosSolverSettings*>(UChaosSolverSettings::StaticClass()->DefaultObject);

	return Default;
}

}


