#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C
// (None)

class UClass* UFauna_Idle_AnimInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fauna_Idle_AnimInterface_C");

	return Clss;
}


// Fauna_Idle_AnimInterface_C Fauna_Idle_AnimInterface.Default__Fauna_Idle_AnimInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFauna_Idle_AnimInterface_C* UFauna_Idle_AnimInterface_C::GetDefaultObj()
{
	static class UFauna_Idle_AnimInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFauna_Idle_AnimInterface_C*>(UFauna_Idle_AnimInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C.Fauna IdleTurn
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_IdleTurn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Fauna_IdleTurn                                                   (Parm, OutParm, NoDestructor)

void UFauna_Idle_AnimInterface_C::Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fauna_Idle_AnimInterface_C", "Fauna IdleTurn");

	Params::UFauna_Idle_AnimInterface_C_Fauna_IdleTurn_Params Parms{};

	Parms.InPose_IdleTurn = InPose_IdleTurn;

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_IdleTurn != nullptr)
		*Fauna_IdleTurn = Parms.Fauna_IdleTurn;

}


// Function Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C.Fauna Idle
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_Idle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Fauna_Idle                                                       (Parm, OutParm, NoDestructor)

void UFauna_Idle_AnimInterface_C::Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fauna_Idle_AnimInterface_C", "Fauna Idle");

	Params::UFauna_Idle_AnimInterface_C_Fauna_Idle_Params Parms{};

	Parms.InPose_Idle = InPose_Idle;

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Idle != nullptr)
		*Fauna_Idle = Parms.Fauna_Idle;

}

}


