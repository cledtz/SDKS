#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CaretakerRuntime.FortAthenaCaretakerAIController
// (Actor)

class UClass* UFortAthenaCaretakerAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaCaretakerAIController");

	return Clss;
}


// FortAthenaCaretakerAIController CaretakerRuntime.Default__FortAthenaCaretakerAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaCaretakerAIController* UFortAthenaCaretakerAIController::GetDefaultObj()
{
	static class UFortAthenaCaretakerAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaCaretakerAIController*>(UFortAthenaCaretakerAIController::StaticClass()->DefaultObject);

	return Default;
}


// Function CaretakerRuntime.FortAthenaCaretakerAIController.OnMovementModeChanged
// (Final, Native, Public)
// Parameters:
// class UCharacter*                  CharacterOwner                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaCaretakerAIController::OnMovementModeChanged(class UCharacter* CharacterOwner, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaCaretakerAIController", "OnMovementModeChanged");

	Params::UFortAthenaCaretakerAIController_OnMovementModeChanged_Params Parms{};

	Parms.CharacterOwner = CharacterOwner;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CaretakerRuntime.FortAthenaCaretakerAIController.DebugUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              UpdateInterval                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaCaretakerAIController::DebugUpdate(float UpdateInterval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaCaretakerAIController", "DebugUpdate");

	Params::UFortAthenaCaretakerAIController_DebugUpdate_Params Parms{};

	Parms.UpdateInterval = UpdateInterval;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CaretakerRuntime.FortBTTask_CaretakerMoveTo
// (None)

class UClass* UFortBTTask_CaretakerMoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_CaretakerMoveTo");

	return Clss;
}


// FortBTTask_CaretakerMoveTo CaretakerRuntime.Default__FortBTTask_CaretakerMoveTo
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_CaretakerMoveTo* UFortBTTask_CaretakerMoveTo::GetDefaultObj()
{
	static class UFortBTTask_CaretakerMoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_CaretakerMoveTo*>(UFortBTTask_CaretakerMoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class CaretakerRuntime.FortNavigationFilter_Caretaker
// (None)

class UClass* UFortNavigationFilter_Caretaker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavigationFilter_Caretaker");

	return Clss;
}


// FortNavigationFilter_Caretaker CaretakerRuntime.Default__FortNavigationFilter_Caretaker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavigationFilter_Caretaker* UFortNavigationFilter_Caretaker::GetDefaultObj()
{
	static class UFortNavigationFilter_Caretaker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavigationFilter_Caretaker*>(UFortNavigationFilter_Caretaker::StaticClass()->DefaultObject);

	return Default;
}


// Class CaretakerRuntime.FortAITask_CaretakerMove
// (None)

class UClass* UFortAITask_CaretakerMove::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITask_CaretakerMove");

	return Clss;
}


// FortAITask_CaretakerMove CaretakerRuntime.Default__FortAITask_CaretakerMove
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAITask_CaretakerMove* UFortAITask_CaretakerMove::GetDefaultObj()
{
	static class UFortAITask_CaretakerMove* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITask_CaretakerMove*>(UFortAITask_CaretakerMove::StaticClass()->DefaultObject);

	return Default;
}


// Class CaretakerRuntime.FortAIAnimInstance_Caretaker
// (None)

class UClass* UFortAIAnimInstance_Caretaker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIAnimInstance_Caretaker");

	return Clss;
}


// FortAIAnimInstance_Caretaker CaretakerRuntime.Default__FortAIAnimInstance_Caretaker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIAnimInstance_Caretaker* UFortAIAnimInstance_Caretaker::GetDefaultObj()
{
	static class UFortAIAnimInstance_Caretaker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIAnimInstance_Caretaker*>(UFortAIAnimInstance_Caretaker::StaticClass()->DefaultObject);

	return Default;
}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.SetDelayedMaterialParameters
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortAIAnimInstance_Caretaker::SetDelayedMaterialParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "SetDelayedMaterialParameters");

	Params::UFortAIAnimInstance_Caretaker_SetDelayedMaterialParameters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWorldStriderComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAnimWorldStriderComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAnimWorldStriderComponent* UFortAIAnimInstance_Caretaker::GetWorldStriderComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetWorldStriderComponent");

	Params::UFortAIAnimInstance_Caretaker_GetWorldStriderComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkSpeedWarpingValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIAnimInstance_Caretaker::GetWalkSpeedWarpingValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetWalkSpeedWarpingValue");

	Params::UFortAIAnimInstance_Caretaker_GetWalkSpeedWarpingValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkPlayRateValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIAnimInstance_Caretaker::GetWalkPlayRateValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetWalkPlayRateValue");

	Params::UFortAIAnimInstance_Caretaker_GetWalkPlayRateValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CaretakerRuntime.FortAIAnimInstance_Caretaker.GetStartAnimPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIAnimInstance_Caretaker::GetStartAnimPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAnimInstance_Caretaker", "GetStartAnimPosition");

	Params::UFortAIAnimInstance_Caretaker_GetStartAnimPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


