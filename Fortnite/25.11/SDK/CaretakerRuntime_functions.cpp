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


// Function CaretakerRuntime.FortAthenaCaretakerAIController.OnMovementModeChanged
// (Final, Native, Public)
// Parameters:
// class ACharacter*                  CharacterOwner                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaCaretakerAIController::OnMovementModeChanged(class ACharacter* CharacterOwner, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("FortAthenaCaretakerAIController", "OnMovementModeChanged");

	Params::AFortAthenaCaretakerAIController_OnMovementModeChanged_Params Parms;

	Parms.CharacterOwner = CharacterOwner;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CaretakerRuntime.FortAthenaCaretakerAIController.DebugUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              UpdateInterval                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaCaretakerAIController::DebugUpdate(float UpdateInterval)
{
	static auto Func = Class->GetFunction("FortAthenaCaretakerAIController", "DebugUpdate");

	Params::AFortAthenaCaretakerAIController_DebugUpdate_Params Parms;

	Parms.UpdateInterval = UpdateInterval;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.SetDelayedMaterialParameters
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortAIAnimInstance_Caretaker::SetDelayedMaterialParameters()
{
	static auto Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "SetDelayedMaterialParameters");

	Params::UFortAIAnimInstance_Caretaker_SetDelayedMaterialParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWorldStriderComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAnimWorldStriderComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAnimWorldStriderComponent* UFortAIAnimInstance_Caretaker::GetWorldStriderComponent()
{
	static auto Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetWorldStriderComponent");

	Params::UFortAIAnimInstance_Caretaker_GetWorldStriderComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkSpeedWarpingValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIAnimInstance_Caretaker::GetWalkSpeedWarpingValue()
{
	static auto Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetWalkSpeedWarpingValue");

	Params::UFortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkPlayRateValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIAnimInstance_Caretaker::GetWalkPlayRateValue()
{
	static auto Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetWalkPlayRateValue");

	Params::UFortAIAnimInstance_Caretaker_GetWalkPlayRateValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetStartAnimPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIAnimInstance_Caretaker::GetStartAnimPosition()
{
	static auto Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetStartAnimPosition");

	Params::UFortAIAnimInstance_Caretaker_GetStartAnimPosition_Params Parms;


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
