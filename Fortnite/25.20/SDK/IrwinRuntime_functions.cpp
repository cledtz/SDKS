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


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateTurnAngleStored
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateTurnAngleStored()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateTurnAngleStored");

	Params::UFortAIFaunaAnimInstance_UpdateTurnAngleStored_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateSwimmingYaw
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateSwimmingYaw()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateSwimmingYaw");

	Params::UFortAIFaunaAnimInstance_UpdateSwimmingYaw_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateRidingMovePlayRate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateRidingMovePlayRate()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateRidingMovePlayRate");

	Params::UFortAIFaunaAnimInstance_UpdateRidingMovePlayRate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdatePlayLandAdditive
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdatePlayLandAdditive()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdatePlayLandAdditive");

	Params::UFortAIFaunaAnimInstance_UpdatePlayLandAdditive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateFootPhaseStop
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateFootPhaseStop()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateFootPhaseStop");

	Params::UFortAIFaunaAnimInstance_UpdateFootPhaseStop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBoostPlayRate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateBoostPlayRate()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBoostPlayRate");

	Params::UFortAIFaunaAnimInstance_UpdateBoostPlayRate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBodyRoll
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateBodyRoll()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBodyRoll");

	Params::UFortAIFaunaAnimInstance_UpdateBodyRoll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardVelocity
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateBackwardVelocity()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBackwardVelocity");

	Params::UFortAIFaunaAnimInstance_UpdateBackwardVelocity_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardsPlayRate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::UpdateBackwardsPlayRate()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBackwardsPlayRate");

	Params::UFortAIFaunaAnimInstance_UpdateBackwardsPlayRate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.FinishFootPhaseStopUpdate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIFaunaAnimInstance::FinishFootPhaseStopUpdate()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "FinishFootPhaseStopUpdate");

	Params::UFortAIFaunaAnimInstance_FinishFootPhaseStopUpdate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance.CalculateLookAtAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForceDisableLookAt                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFaunaAnimInstance::CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance", "CalculateLookAtAlpha");

	Params::UFortAIFaunaAnimInstance_CalculateLookAtAlpha_Params Parms;

	Parms.bForceDisableLookAt = bForceDisableLookAt;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAccelerating                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFaunaAnimInstance_Grandma::UpdateStateVariables(bool bAccelerating)
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateStateVariables");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateStateVariables_Params Parms;

	Parms.bAccelerating = bAccelerating;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateShouldPlayFullBodyInPlace()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateShouldPlayFullBodyInPlace");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateShouldPlayFullBodyInPlace_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateMovingRates()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateMovingRates");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateMovingRates_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateMeshScale()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateMeshScale");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateMeshScale_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateLocomotionPoseAlpha()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateLocomotionPoseAlpha");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateLocomotionPoseAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateIdleStartTurn()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateIdleStartTurn");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateIdleStartTurn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateEnableSniffAdditive()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateEnableSniffAdditive");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateEnableSniffAdditive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateEnableAlertAdditive()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateEnableAlertAdditive");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateEnableAlertAdditive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Grandma::UpdateBlinkAlpha()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateBlinkAlpha");

	Params::UFortAIFaunaAnimInstance_Grandma_UpdateBlinkAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Grandma::DetermineShouldPlayFullBodyInPlace()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineShouldPlayFullBodyInPlace");

	Params::UFortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Grandma::DetermineIdleStartTurn()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineIdleStartTurn");

	Params::UFortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Grandma::DetermineEnableSniffAdditive()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineEnableSniffAdditive");

	Params::UFortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Grandma::DetermineEnableAlertAdditive()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineEnableAlertAdditive");

	Params::UFortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Grandma::CalculateWalkRunPlayRate()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateWalkRunPlayRate");

	Params::UFortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Grandma::CalculateMeshScale()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateMeshScale");

	Params::UFortAIFaunaAnimInstance_Grandma_CalculateMeshScale_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Grandma::CalculateLocomotionPoseAlpha()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateLocomotionPoseAlpha");

	Params::UFortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Grandma::CalculateBlinkAlpha()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateBlinkAlpha");

	Params::UFortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateStateVariables()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateStateVariables");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateStateVariables_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateLocomotionPoseAdditiveAlpha()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateLocomotionPoseAdditiveAlpha");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateLocomotionPoseAdditiveAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateIsFullBodyInPlace()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateIsFullBodyInPlace");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateIsFullBodyInPlace_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateIdleStartTurn()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateIdleStartTurn");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateIdleStartTurn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIFaunaAnimInstance_Robert::UpdateEnableHeadTiltDownAdditive()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateEnableHeadTiltDownAdditive");

	Params::UFortAIFaunaAnimInstance_Robert_UpdateEnableHeadTiltDownAdditive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Robert::DetermineIsFullBodyInPlace()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "DetermineIsFullBodyInPlace");

	Params::UFortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Robert::DetermineIdleStartTurn()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "DetermineIdleStartTurn");

	Params::UFortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFaunaAnimInstance_Robert::DetermineEnableHeadTiltDownAdditive()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "DetermineEnableHeadTiltDownAdditive");

	Params::UFortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIFaunaAnimInstance_Robert::CalculateLocomotionPoseAdditiveAlpha()
{
	static auto Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "CalculateLocomotionPoseAdditiveAlpha");

	Params::UFortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
