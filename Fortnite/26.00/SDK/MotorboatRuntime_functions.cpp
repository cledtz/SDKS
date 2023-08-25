#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotorboatRuntime.FortMeatballVehicleAnimInstance
// (None)

class UClass* UFortMeatballVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMeatballVehicleAnimInstance");

	return Clss;
}


// FortMeatballVehicleAnimInstance MotorboatRuntime.Default__FortMeatballVehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMeatballVehicleAnimInstance* UFortMeatballVehicleAnimInstance::GetDefaultObj()
{
	static class UFortMeatballVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMeatballVehicleAnimInstance*>(UFortMeatballVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class MotorboatRuntime.FortMeatballPontoonsComponent
// (None)

class UClass* UFortMeatballPontoonsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMeatballPontoonsComponent");

	return Clss;
}


// FortMeatballPontoonsComponent MotorboatRuntime.Default__FortMeatballPontoonsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMeatballPontoonsComponent* UFortMeatballPontoonsComponent::GetDefaultObj()
{
	static class UFortMeatballPontoonsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMeatballPontoonsComponent*>(UFortMeatballPontoonsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MotorboatRuntime.FortMeatballVehicle
// (Actor, Pawn)

class UClass* UFortMeatballVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMeatballVehicle");

	return Clss;
}


// FortMeatballVehicle MotorboatRuntime.Default__FortMeatballVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMeatballVehicle* UFortMeatballVehicle::GetDefaultObj()
{
	static class UFortMeatballVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMeatballVehicle*>(UFortMeatballVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function MotorboatRuntime.FortMeatballVehicle.UpdateSnowAndDirtParams
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              NormalizedForwardSpeed                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMeatballVehicle::UpdateSnowAndDirtParams(float NormalizedForwardSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "UpdateSnowAndDirtParams");

	Params::UFortMeatballVehicle_UpdateSnowAndDirtParams_Params Parms{};

	Parms.NormalizedForwardSpeed = NormalizedForwardSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotorboatRuntime.FortMeatballVehicle.StopTurnRumble
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortMeatballVehicle::StopTurnRumble()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "StopTurnRumble");

	Params::UFortMeatballVehicle_StopTurnRumble_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotorboatRuntime.FortMeatballVehicle.StopLandRumble
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortMeatballVehicle::StopLandRumble()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "StopLandRumble");

	Params::UFortMeatballVehicle_StopLandRumble_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotorboatRuntime.FortMeatballVehicle.StopDriverCameraShake
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortMeatballVehicle::StopDriverCameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "StopDriverCameraShake");

	Params::UFortMeatballVehicle_StopDriverCameraShake_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotorboatRuntime.FortMeatballVehicle.SmashedThroughBuildingPiece
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactPoint                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ImpactNormal                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBuildingActor*              BuildingHitActor                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMeatballVehicle::SmashedThroughBuildingPiece(struct FVector& ImpactPoint, struct FVector& ImpactNormal, class UBuildingActor* BuildingHitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "SmashedThroughBuildingPiece");

	Params::UFortMeatballVehicle_SmashedThroughBuildingPiece_Params Parms{};

	Parms.ImpactPoint = ImpactPoint;
	Parms.ImpactNormal = ImpactNormal;
	Parms.BuildingHitActor = BuildingHitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorboatRuntime.FortMeatballVehicle.ShowCooldownCue
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMeatballVehicle::ShowCooldownCue(class UFortPlayerPawn* Pawn, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "ShowCooldownCue");

	Params::UFortMeatballVehicle_ShowCooldownCue_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorboatRuntime.FortMeatballVehicle.OnBoostStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMeatballVehicle::OnBoostStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "OnBoostStarted");

	Params::UFortMeatballVehicle_OnBoostStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorboatRuntime.FortMeatballVehicle.OnBoostReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMeatballVehicle::OnBoostReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "OnBoostReady");

	Params::UFortMeatballVehicle_OnBoostReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorboatRuntime.FortMeatballVehicle.OnBoostFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMeatballVehicle::OnBoostFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "OnBoostFinished");

	Params::UFortMeatballVehicle_OnBoostFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorboatRuntime.FortMeatballVehicle.OnBoostFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMeatballVehicle::OnBoostFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "OnBoostFailed");

	Params::UFortMeatballVehicle_OnBoostFailed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorboatRuntime.FortMeatballVehicle.LandShakeEnd
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortMeatballVehicle::LandShakeEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "LandShakeEnd");

	Params::UFortMeatballVehicle_LandShakeEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotorboatRuntime.FortMeatballVehicle.GetSeatRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQuat                       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQuat UFortMeatballVehicle::GetSeatRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "GetSeatRotation");

	Params::UFortMeatballVehicle_GetSeatRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotorboatRuntime.FortMeatballVehicle.GetSeatOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortMeatballVehicle::GetSeatOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "GetSeatOffset");

	Params::UFortMeatballVehicle_GetSeatOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotorboatRuntime.FortMeatballVehicle.GetBoostCharge
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortMeatballVehicle::GetBoostCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "GetBoostCharge");

	Params::UFortMeatballVehicle_GetBoostCharge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotorboatRuntime.FortMeatballVehicle.CacheGroundFXComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           InGroundFXComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMeatballVehicle::CacheGroundFXComponent(class UNiagaraComponent* InGroundFXComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "CacheGroundFXComponent");

	Params::UFortMeatballVehicle_CacheGroundFXComponent_Params Parms{};

	Parms.InGroundFXComponent = InGroundFXComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotorboatRuntime.FortMeatballVehicle.CacheAudioPointers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortVehicleAudioVoice*      InAudioEngineUp                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortVehicleAudioVoice*      InAudioEngineDown                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortVehicleAudioVoice*      InAudioWakeTurn                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortVehicleAudioVoice*      InAudioWakeSpeed                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortVehicleAudioVoice*      InAudioScrape                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortVehicleAudioVoice*      InAudioEngineOutOfFuel                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMeatballVehicle::CacheAudioPointers(class UFortVehicleAudioVoice* InAudioEngineUp, class UFortVehicleAudioVoice* InAudioEngineDown, class UFortVehicleAudioVoice* InAudioWakeTurn, class UFortVehicleAudioVoice* InAudioWakeSpeed, class UFortVehicleAudioVoice* InAudioScrape, class UFortVehicleAudioVoice* InAudioEngineOutOfFuel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMeatballVehicle", "CacheAudioPointers");

	Params::UFortMeatballVehicle_CacheAudioPointers_Params Parms{};

	Parms.InAudioEngineUp = InAudioEngineUp;
	Parms.InAudioEngineDown = InAudioEngineDown;
	Parms.InAudioWakeTurn = InAudioWakeTurn;
	Parms.InAudioWakeSpeed = InAudioWakeSpeed;
	Parms.InAudioScrape = InAudioScrape;
	Parms.InAudioEngineOutOfFuel = InAudioEngineOutOfFuel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MotorboatRuntime.FortMeatballVehicleConfigs
// (None)

class UClass* UFortMeatballVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMeatballVehicleConfigs");

	return Clss;
}


// FortMeatballVehicleConfigs MotorboatRuntime.Default__FortMeatballVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMeatballVehicleConfigs* UFortMeatballVehicleConfigs::GetDefaultObj()
{
	static class UFortMeatballVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMeatballVehicleConfigs*>(UFortMeatballVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}

}


