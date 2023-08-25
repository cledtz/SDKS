#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class IrwinRuntime.FortAIFaunaAnimInstance
// (None)

class UClass* UFortAIFaunaAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance");

	return Clss;
}


// FortAIFaunaAnimInstance IrwinRuntime.Default__FortAIFaunaAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance* UFortAIFaunaAnimInstance::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance*>(UFortAIFaunaAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateTurnAngleStored
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateTurnAngleStored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateTurnAngleStored");

	Params::UFortAIFaunaAnimInstance_UpdateTurnAngleStored_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateSwimmingYaw
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateSwimmingYaw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateSwimmingYaw");

	Params::UFortAIFaunaAnimInstance_UpdateSwimmingYaw_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateRidingMovePlayRate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateRidingMovePlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateRidingMovePlayRate");

	Params::UFortAIFaunaAnimInstance_UpdateRidingMovePlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdatePlayLandAdditive
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdatePlayLandAdditive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdatePlayLandAdditive");

	Params::UFortAIFaunaAnimInstance_UpdatePlayLandAdditive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateFootPhaseStop
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateFootPhaseStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateFootPhaseStop");

	Params::UFortAIFaunaAnimInstance_UpdateFootPhaseStop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBoostPlayRate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateBoostPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBoostPlayRate");

	Params::UFortAIFaunaAnimInstance_UpdateBoostPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBodyRoll
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateBodyRoll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBodyRoll");

	Params::UFortAIFaunaAnimInstance_UpdateBodyRoll_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardVelocity
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateBackwardVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBackwardVelocity");

	Params::UFortAIFaunaAnimInstance_UpdateBackwardVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardsPlayRate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateBackwardsPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBackwardsPlayRate");

	Params::UFortAIFaunaAnimInstance_UpdateBackwardsPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.FinishFootPhaseStopUpdate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::FinishFootPhaseStopUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "FinishFootPhaseStopUpdate");

	Params::UFortAIFaunaAnimInstance_FinishFootPhaseStopUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.CalculateLookAtAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForceDisableLookAt                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFaunaAnimInstance::CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "CalculateLookAtAlpha");

	Params::UFortAIFaunaAnimInstance_CalculateLookAtAlpha_Params Parms{};

	Parms.bForceDisableLookAt = bForceDisableLookAt;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class IrwinRuntime.FortAIFaunaAnimInstance_Burt
// (None)

class UClass* UFortAIFaunaAnimInstance_Burt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Burt");

	return Clss;
}


// FortAIFaunaAnimInstance_Burt IrwinRuntime.Default__FortAIFaunaAnimInstance_Burt
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Burt* UFortAIFaunaAnimInstance_Burt::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Burt* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Burt*>(UFortAIFaunaAnimInstance_Burt::StaticClass()->DefaultObject);

	return Default;
}


// Class IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker
// (None)

class UClass* UFortAIFaunaAnimInstance_Burt_Hitchhiker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Burt_Hitchhiker");

	return Clss;
}


// FortAIFaunaAnimInstance_Burt_Hitchhiker IrwinRuntime.Default__FortAIFaunaAnimInstance_Burt_Hitchhiker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Burt_Hitchhiker* UFortAIFaunaAnimInstance_Burt_Hitchhiker::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Burt_Hitchhiker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Burt_Hitchhiker*>(UFortAIFaunaAnimInstance_Burt_Hitchhiker::StaticClass()->DefaultObject);

	return Default;
}


// Class IrwinRuntime.FortAIFaunaAnimInstance_Crow
// (None)

class UClass* UFortAIFaunaAnimInstance_Crow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Crow");

	return Clss;
}


// FortAIFaunaAnimInstance_Crow IrwinRuntime.Default__FortAIFaunaAnimInstance_Crow
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Crow* UFortAIFaunaAnimInstance_Crow::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Crow* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Crow*>(UFortAIFaunaAnimInstance_Crow::StaticClass()->DefaultObject);

	return Default;
}


// Class IrwinRuntime.FortAIFaunaAnimInstance_Grandma
// (None)

class UClass* UFortAIFaunaAnimInstance_Grandma::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Grandma");

	return Clss;
}


// FortAIFaunaAnimInstance_Grandma IrwinRuntime.Default__FortAIFaunaAnimInstance_Grandma
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Grandma* UFortAIFaunaAnimInstance_Grandma::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Grandma* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Grandma*>(UFortAIFaunaAnimInstance_Grandma::StaticClass()->DefaultObject);

	return Default;
}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAccelerating                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFaunaAnimInstance_Grandma::UpdateStateVariables(bool bAccelerating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateStateVariables");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateStateVariables_Params Parms{};

	Parms.bAccelerating = bAccelerating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateShouldPlayFullBodyInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateShouldPlayFullBodyInPlace");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateShouldPlayFullBodyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateMovingRates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateMovingRates");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateMovingRates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateMeshScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateMeshScale");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateMeshScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateLocomotionPoseAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateLocomotionPoseAlpha");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateLocomotionPoseAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateIdleStartTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateIdleStartTurn");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateIdleStartTurn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateEnableSniffAdditive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateEnableSniffAdditive");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateEnableSniffAdditive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateEnableAlertAdditive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateEnableAlertAdditive");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateEnableAlertAdditive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateBlinkAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateBlinkAlpha");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateBlinkAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Grandma::DetermineShouldPlayFullBodyInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineShouldPlayFullBodyInPlace");

	Params::UFortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Grandma::DetermineIdleStartTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineIdleStartTurn");

	Params::UFortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Grandma::DetermineEnableSniffAdditive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineEnableSniffAdditive");

	Params::UFortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Grandma::DetermineEnableAlertAdditive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineEnableAlertAdditive");

	Params::UFortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Grandma::CalculateWalkRunPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateWalkRunPlayRate");

	Params::UFortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Grandma::CalculateMeshScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateMeshScale");

	Params::UFortAIFaunaAnimInstance_Grandma_CalculateMeshScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Grandma::CalculateLocomotionPoseAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateLocomotionPoseAlpha");

	Params::UFortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Grandma::CalculateBlinkAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateBlinkAlpha");

	Params::UFortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class IrwinRuntime.FortAIFaunaAnimInstance_Grandma_Hitchhiker
// (None)

class UClass* UFortAIFaunaAnimInstance_Grandma_Hitchhiker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Grandma_Hitchhiker");

	return Clss;
}


// FortAIFaunaAnimInstance_Grandma_Hitchhiker IrwinRuntime.Default__FortAIFaunaAnimInstance_Grandma_Hitchhiker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Grandma_Hitchhiker* UFortAIFaunaAnimInstance_Grandma_Hitchhiker::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Grandma_Hitchhiker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Grandma_Hitchhiker*>(UFortAIFaunaAnimInstance_Grandma_Hitchhiker::StaticClass()->DefaultObject);

	return Default;
}


// Class IrwinRuntime.FortAIFaunaAnimInstance_Nug
// (None)

class UClass* UFortAIFaunaAnimInstance_Nug::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Nug");

	return Clss;
}


// FortAIFaunaAnimInstance_Nug IrwinRuntime.Default__FortAIFaunaAnimInstance_Nug
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Nug* UFortAIFaunaAnimInstance_Nug::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Nug* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Nug*>(UFortAIFaunaAnimInstance_Nug::StaticClass()->DefaultObject);

	return Default;
}


// Class IrwinRuntime.FortAIFaunaAnimInstance_Nug_Hitchhiker
// (None)

class UClass* UFortAIFaunaAnimInstance_Nug_Hitchhiker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Nug_Hitchhiker");

	return Clss;
}


// FortAIFaunaAnimInstance_Nug_Hitchhiker IrwinRuntime.Default__FortAIFaunaAnimInstance_Nug_Hitchhiker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Nug_Hitchhiker* UFortAIFaunaAnimInstance_Nug_Hitchhiker::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Nug_Hitchhiker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Nug_Hitchhiker*>(UFortAIFaunaAnimInstance_Nug_Hitchhiker::StaticClass()->DefaultObject);

	return Default;
}


// Class IrwinRuntime.FortAIFaunaAnimInstance_Robert
// (None)

class UClass* UFortAIFaunaAnimInstance_Robert::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Robert");

	return Clss;
}


// FortAIFaunaAnimInstance_Robert IrwinRuntime.Default__FortAIFaunaAnimInstance_Robert
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Robert* UFortAIFaunaAnimInstance_Robert::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Robert* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Robert*>(UFortAIFaunaAnimInstance_Robert::StaticClass()->DefaultObject);

	return Default;
}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateStateVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateStateVariables");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateStateVariables_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateLocomotionPoseAdditiveAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateLocomotionPoseAdditiveAlpha");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateLocomotionPoseAdditiveAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateIsFullBodyInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateIsFullBodyInPlace");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateIsFullBodyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateIdleStartTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateIdleStartTurn");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateIdleStartTurn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateEnableHeadTiltDownAdditive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateEnableHeadTiltDownAdditive");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateEnableHeadTiltDownAdditive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Robert::DetermineIsFullBodyInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "DetermineIsFullBodyInPlace");

	Params::UFortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Robert::DetermineIdleStartTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "DetermineIdleStartTurn");

	Params::UFortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Robert::DetermineEnableHeadTiltDownAdditive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "DetermineEnableHeadTiltDownAdditive");

	Params::UFortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Robert::CalculateLocomotionPoseAdditiveAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "CalculateLocomotionPoseAdditiveAlpha");

	Params::UFortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class IrwinRuntime.FortAIFaunaAnimInstance_Smackie
// (None)

class UClass* UFortAIFaunaAnimInstance_Smackie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaAnimInstance_Smackie");

	return Clss;
}


// FortAIFaunaAnimInstance_Smackie IrwinRuntime.Default__FortAIFaunaAnimInstance_Smackie
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaAnimInstance_Smackie* UFortAIFaunaAnimInstance_Smackie::GetDefaultObj()
{
	static class UFortAIFaunaAnimInstance_Smackie* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaAnimInstance_Smackie*>(UFortAIFaunaAnimInstance_Smackie::StaticClass()->DefaultObject);

	return Default;
}


// Class IrwinRuntime.FortAIFaunaLayerAnimInstance
// (None)

class UClass* UFortAIFaunaLayerAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFaunaLayerAnimInstance");

	return Clss;
}


// FortAIFaunaLayerAnimInstance IrwinRuntime.Default__FortAIFaunaLayerAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFaunaLayerAnimInstance* UFortAIFaunaLayerAnimInstance::GetDefaultObj()
{
	static class UFortAIFaunaLayerAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFaunaLayerAnimInstance*>(UFortAIFaunaLayerAnimInstance::StaticClass()->DefaultObject);

	return Default;
}

}


