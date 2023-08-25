#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DeployableTurretGameplayRuntime.DeployableTurretLibrary
// (None)

class UClass* UDeployableTurretLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeployableTurretLibrary");

	return Clss;
}


// DeployableTurretLibrary DeployableTurretGameplayRuntime.Default__DeployableTurretLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeployableTurretLibrary* UDeployableTurretLibrary::GetDefaultObj()
{
	static class UDeployableTurretLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeployableTurretLibrary*>(UDeployableTurretLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function DeployableTurretGameplayRuntime.DeployableTurretLibrary.FireAnalyticsEvent_DeployableTurretSessionEnd
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            TurretOwnerAccountId                                             (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortAnalyticsEventAttribute>Attributes                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UDeployableTurretLibrary::FireAnalyticsEvent_DeployableTurretSessionEnd(class UObject* WorldContextObject, struct FUniqueNetIdRepl& TurretOwnerAccountId, TArray<struct FFortAnalyticsEventAttribute>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployableTurretLibrary", "FireAnalyticsEvent_DeployableTurretSessionEnd");

	Params::UDeployableTurretLibrary_FireAnalyticsEvent_DeployableTurretSessionEnd_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TurretOwnerAccountId = TurretOwnerAccountId;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeployableTurretGameplayRuntime.DeployableTurretLibrary.CalculateTargetingLaserScale
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      TurretActor                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  CurrentTurretAimTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LaserOrigin                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxLaserRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DistMult                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDeployableTurretLibrary::CalculateTargetingLaserScale(class UActor* TurretActor, struct FTransform& CurrentTurretAimTransform, struct FVector& LaserOrigin, float MaxLaserRange, float DistMult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeployableTurretLibrary", "CalculateTargetingLaserScale");

	Params::UDeployableTurretLibrary_CalculateTargetingLaserScale_Params Parms{};

	Parms.TurretActor = TurretActor;
	Parms.CurrentTurretAimTransform = CurrentTurretAimTransform;
	Parms.LaserOrigin = LaserOrigin;
	Parms.MaxLaserRange = MaxLaserRange;
	Parms.DistMult = DistMult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


