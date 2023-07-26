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


// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.GetAutoAimWeaponPawnComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPawn*                   SourcePawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoAimWeaponPawnComponent* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoAimWeaponPawnComponent* UAutoAimWeaponKismetLibrary::GetAutoAimWeaponPawnComponent(class AFortPawn* SourcePawn)
{
	static auto Func = Class->GetFunction("AutoAimWeaponKismetLibrary", "GetAutoAimWeaponPawnComponent");

	Params::UAutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent_Params Parms;

	Parms.SourcePawn = SourcePawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.FindBestAutoAimTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPawn*                   OutTargetPawn                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutReticleDistance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             SourcePawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReticleSize                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Range                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoAimWeaponKismetLibrary::FindBestAutoAimTarget(class AFortPawn** OutTargetPawn, float* OutReticleDistance, class AFortPlayerPawn* SourcePawn, float ReticleSize, float Range)
{
	static auto Func = Class->GetFunction("AutoAimWeaponKismetLibrary", "FindBestAutoAimTarget");

	Params::UAutoAimWeaponKismetLibrary_FindBestAutoAimTarget_Params Parms;

	Parms.SourcePawn = SourcePawn;
	Parms.ReticleSize = ReticleSize;
	Parms.Range = Range;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutTargetPawn != nullptr)
		*OutTargetPawn = Parms.OutTargetPawn;

	if (OutReticleDistance != nullptr)
		*OutReticleDistance = Parms.OutReticleDistance;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponReticleIntersectTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutReticleDistance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   SourcePawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   TargetPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReticleSize                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoAimWeaponKismetLibrary::DoesAutoAimWeaponReticleIntersectTarget(float* OutReticleDistance, class AFortPawn* SourcePawn, class AFortPawn* TargetPawn, float ReticleSize)
{
	static auto Func = Class->GetFunction("AutoAimWeaponKismetLibrary", "DoesAutoAimWeaponReticleIntersectTarget");

	Params::UAutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget_Params Parms;

	Parms.SourcePawn = SourcePawn;
	Parms.TargetPawn = TargetPawn;
	Parms.ReticleSize = ReticleSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutReticleDistance != nullptr)
		*OutReticleDistance = Parms.OutReticleDistance;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponHaveLineOfSight
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPawn*                   SourcePawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   TargetPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoAimWeaponKismetLibrary::DoesAutoAimWeaponHaveLineOfSight(class AFortPawn* SourcePawn, class AFortPawn* TargetPawn)
{
	static auto Func = Class->GetFunction("AutoAimWeaponKismetLibrary", "DoesAutoAimWeaponHaveLineOfSight");

	Params::UAutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight_Params Parms;

	Parms.SourcePawn = SourcePawn;
	Parms.TargetPawn = TargetPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetTargetToReticleDistanceNormalized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAutoAimWeaponPawnComponent::GetTargetToReticleDistanceNormalized()
{
	static auto Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetTargetToReticleDistanceNormalized");

	Params::UAutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetLockOnTargetLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     OutLockTargetLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoAimWeaponPawnComponent::GetLockOnTargetLocation(struct FVector* OutLockTargetLocation)
{
	static auto Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetLockOnTargetLocation");

	Params::UAutoAimWeaponPawnComponent_GetLockOnTargetLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLockTargetLocation != nullptr)
		*OutLockTargetLocation = Parms.OutLockTargetLocation;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetLockOnProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAutoAimWeaponPawnComponent::GetLockOnProgress()
{
	static auto Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetLockOnProgress");

	Params::UAutoAimWeaponPawnComponent_GetLockOnProgress_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetCurrentLockOnCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAutoAimWeaponPawnComponent::GetCurrentLockOnCount()
{
	static auto Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetCurrentLockOnCount");

	Params::UAutoAimWeaponPawnComponent_GetCurrentLockOnCount_Params Parms;


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
