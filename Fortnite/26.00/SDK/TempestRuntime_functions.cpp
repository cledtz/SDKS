#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TempestRuntime.FortAIControllerComponent_Tempest
// (None)

class UClass* UFortAIControllerComponent_Tempest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIControllerComponent_Tempest");

	return Clss;
}


// FortAIControllerComponent_Tempest TempestRuntime.Default__FortAIControllerComponent_Tempest
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIControllerComponent_Tempest* UFortAIControllerComponent_Tempest::GetDefaultObj()
{
	static class UFortAIControllerComponent_Tempest* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIControllerComponent_Tempest*>(UFortAIControllerComponent_Tempest::StaticClass()->DefaultObject);

	return Default;
}


// Class TempestRuntime.FortCheatManager_Tempest
// (None)

class UClass* UFortCheatManager_Tempest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_Tempest");

	return Clss;
}


// FortCheatManager_Tempest TempestRuntime.Default__FortCheatManager_Tempest
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_Tempest* UFortCheatManager_Tempest::GetDefaultObj()
{
	static class UFortCheatManager_Tempest* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_Tempest*>(UFortCheatManager_Tempest::StaticClass()->DefaultObject);

	return Default;
}


// Function TempestRuntime.FortCheatManager_Tempest.EndTempestStorm
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      StormName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Tempest::EndTempestStorm(const class FString& StormName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Tempest", "EndTempestStorm");

	Params::UFortCheatManager_Tempest_EndTempestStorm_Params Parms{};

	Parms.StormName = StormName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TempestRuntime.TempestMovementComponent
// (None)

class UClass* UTempestMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TempestMovementComponent");

	return Clss;
}


// TempestMovementComponent TempestRuntime.Default__TempestMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTempestMovementComponent* UTempestMovementComponent::GetDefaultObj()
{
	static class UTempestMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTempestMovementComponent*>(UTempestMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function TempestRuntime.TempestMovementComponent.OnRep_MovementData
// (Final, Native, Private, Const)
// Parameters:

void UTempestMovementComponent::OnRep_MovementData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestMovementComponent", "OnRep_MovementData");

	Params::UTempestMovementComponent_OnRep_MovementData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TempestRuntime.TempestStateMachineComponent
// (None)

class UClass* UTempestStateMachineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TempestStateMachineComponent");

	return Clss;
}


// TempestStateMachineComponent TempestRuntime.Default__TempestStateMachineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTempestStateMachineComponent* UTempestStateMachineComponent::GetDefaultObj()
{
	static class UTempestStateMachineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTempestStateMachineComponent*>(UTempestStateMachineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function TempestRuntime.TempestStateMachineComponent.OnRep_CurrentStateInfo
// (Final, Native, Private)
// Parameters:

void UTempestStateMachineComponent::OnRep_CurrentStateInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestStateMachineComponent", "OnRep_CurrentStateInfo");

	Params::UTempestStateMachineComponent_OnRep_CurrentStateInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TempestRuntime.TempestStateMachineComponent.GetCurrentStateInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTempestStateInfo           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTempestStateInfo UTempestStateMachineComponent::GetCurrentStateInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestStateMachineComponent", "GetCurrentStateInfo");

	Params::UTempestStateMachineComponent_GetCurrentStateInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TempestRuntime.TempestStateMachineComponent.GetCurrentStateCompletionPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTempestStateMachineComponent::GetCurrentStateCompletionPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestStateMachineComponent", "GetCurrentStateCompletionPercentage");

	Params::UTempestStateMachineComponent_GetCurrentStateCompletionPercentage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TempestRuntime.TempestStateMachineComponent.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETempestState           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETempestState UTempestStateMachineComponent::GetCurrentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestStateMachineComponent", "GetCurrentState");

	Params::UTempestStateMachineComponent_GetCurrentState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TempestRuntime.TempestStateMachineComponent.ForceDissipate
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDissipationReason                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTempestStateMachineComponent::ForceDissipate(const class FString& InDissipationReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestStateMachineComponent", "ForceDissipate");

	Params::UTempestStateMachineComponent_ForceDissipate_Params Parms{};

	Parms.InDissipationReason = InDissipationReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


