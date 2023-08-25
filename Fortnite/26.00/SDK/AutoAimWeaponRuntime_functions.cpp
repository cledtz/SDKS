#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary
// (None)

class UClass* UAutoAimWeaponKismetLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutoAimWeaponKismetLibrary");

	return Clss;
}


// AutoAimWeaponKismetLibrary AutoAimWeaponRuntime.Default__AutoAimWeaponKismetLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutoAimWeaponKismetLibrary* UAutoAimWeaponKismetLibrary::GetDefaultObj()
{
	static class UAutoAimWeaponKismetLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutoAimWeaponKismetLibrary*>(UAutoAimWeaponKismetLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.GetAutoAimWeaponPawnComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPawn*                   SourcePawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAutoAimWeaponPawnComponent* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAutoAimWeaponPawnComponent* UAutoAimWeaponKismetLibrary::GetAutoAimWeaponPawnComponent(class UFortPawn* SourcePawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoAimWeaponKismetLibrary", "GetAutoAimWeaponPawnComponent");

	Params::UAutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent_Params Parms{};

	Parms.SourcePawn = SourcePawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.FindBestAutoAimTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UFortPawn*                   OutTargetPawn                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutReticleDistance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             SourcePawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReticleSize                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Range                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoAimWeaponKismetLibrary::FindBestAutoAimTarget(class UFortPawn** OutTargetPawn, float* OutReticleDistance, class UFortPlayerPawn* SourcePawn, float ReticleSize, float Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoAimWeaponKismetLibrary", "FindBestAutoAimTarget");

	Params::UAutoAimWeaponKismetLibrary_FindBestAutoAimTarget_Params Parms{};

	Parms.SourcePawn = SourcePawn;
	Parms.ReticleSize = ReticleSize;
	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTargetPawn != nullptr)
		*OutTargetPawn = Parms.OutTargetPawn;

	if (OutReticleDistance != nullptr)
		*OutReticleDistance = Parms.OutReticleDistance;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponReticleIntersectTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutReticleDistance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   SourcePawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   TargetPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReticleSize                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoAimWeaponKismetLibrary::DoesAutoAimWeaponReticleIntersectTarget(float* OutReticleDistance, class UFortPawn* SourcePawn, class UFortPawn* TargetPawn, float ReticleSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoAimWeaponKismetLibrary", "DoesAutoAimWeaponReticleIntersectTarget");

	Params::UAutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget_Params Parms{};

	Parms.SourcePawn = SourcePawn;
	Parms.TargetPawn = TargetPawn;
	Parms.ReticleSize = ReticleSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutReticleDistance != nullptr)
		*OutReticleDistance = Parms.OutReticleDistance;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponHaveLineOfSight
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPawn*                   SourcePawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   TargetPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoAimWeaponKismetLibrary::DoesAutoAimWeaponHaveLineOfSight(class UFortPawn* SourcePawn, class UFortPawn* TargetPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoAimWeaponKismetLibrary", "DoesAutoAimWeaponHaveLineOfSight");

	Params::UAutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight_Params Parms{};

	Parms.SourcePawn = SourcePawn;
	Parms.TargetPawn = TargetPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AutoAimWeaponRuntime.AutoAimWeaponPawnComponent
// (None)

class UClass* UAutoAimWeaponPawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutoAimWeaponPawnComponent");

	return Clss;
}


// AutoAimWeaponPawnComponent AutoAimWeaponRuntime.Default__AutoAimWeaponPawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutoAimWeaponPawnComponent* UAutoAimWeaponPawnComponent::GetDefaultObj()
{
	static class UAutoAimWeaponPawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutoAimWeaponPawnComponent*>(UAutoAimWeaponPawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetTargetToReticleDistanceNormalized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAutoAimWeaponPawnComponent::GetTargetToReticleDistanceNormalized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetTargetToReticleDistanceNormalized");

	Params::UAutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetLockOnTargetLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     OutLockTargetLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoAimWeaponPawnComponent::GetLockOnTargetLocation(struct FVector* OutLockTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetLockOnTargetLocation");

	Params::UAutoAimWeaponPawnComponent_GetLockOnTargetLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetLockOnProgress");

	Params::UAutoAimWeaponPawnComponent_GetLockOnProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetCurrentLockOnCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAutoAimWeaponPawnComponent::GetCurrentLockOnCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetCurrentLockOnCount");

	Params::UAutoAimWeaponPawnComponent_GetCurrentLockOnCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


