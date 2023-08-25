#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UnstableLiquidGunRuntime.FortLiquidGunProjectile
// (Actor)

class UClass* UFortLiquidGunProjectile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLiquidGunProjectile");

	return Clss;
}


// FortLiquidGunProjectile UnstableLiquidGunRuntime.Default__FortLiquidGunProjectile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLiquidGunProjectile* UFortLiquidGunProjectile::GetDefaultObj()
{
	static class UFortLiquidGunProjectile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLiquidGunProjectile*>(UFortLiquidGunProjectile::StaticClass()->DefaultObject);

	return Default;
}


// Function UnstableLiquidGunRuntime.FortLiquidGunProjectile.SetDetachmentReason
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELiquidRibbonDetachmentReasonInDetachmentReason                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLiquidGunProjectile::SetDetachmentReason(enum class ELiquidRibbonDetachmentReason InDetachmentReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLiquidGunProjectile", "SetDetachmentReason");

	Params::UFortLiquidGunProjectile_SetDetachmentReason_Params Parms{};

	Parms.InDetachmentReason = InDetachmentReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnstableLiquidGunRuntime.FortLiquidGunProjectile.HandleSplineHit
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortLiquidGunProjectile::HandleSplineHit(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLiquidGunProjectile", "HandleSplineHit");

	Params::UFortLiquidGunProjectile_HandleSplineHit_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnstableLiquidGunRuntime.FortLiquidGunProjectile.GetDetachmentReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELiquidRibbonDetachmentReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELiquidRibbonDetachmentReason UFortLiquidGunProjectile::GetDetachmentReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLiquidGunProjectile", "GetDetachmentReason");

	Params::UFortLiquidGunProjectile_GetDetachmentReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UnstableLiquidGunRuntime.LiquidRibbonManager
// (Actor)

class UClass* ULiquidRibbonManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiquidRibbonManager");

	return Clss;
}


// LiquidRibbonManager UnstableLiquidGunRuntime.Default__LiquidRibbonManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiquidRibbonManager* ULiquidRibbonManager::GetDefaultObj()
{
	static class ULiquidRibbonManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiquidRibbonManager*>(ULiquidRibbonManager::StaticClass()->DefaultObject);

	return Default;
}


// Function UnstableLiquidGunRuntime.LiquidRibbonManager.SetNiagaraData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraComponent*           NiagaraComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Positions                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      RibbonIDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<bool>                       RibbonVisibilities                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      FlashIntensities                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      RibbonSizes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULiquidRibbonManager::SetNiagaraData(class UNiagaraComponent* NiagaraComponent, TArray<struct FVector>& Positions, TArray<int32>& RibbonIDs, TArray<bool>& RibbonVisibilities, TArray<float>& FlashIntensities, TArray<int32>& RibbonSizes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiquidRibbonManager", "SetNiagaraData");

	Params::ULiquidRibbonManager_SetNiagaraData_Params Parms{};

	Parms.NiagaraComponent = NiagaraComponent;
	Parms.Positions = Positions;
	Parms.RibbonIDs = RibbonIDs;
	Parms.RibbonVisibilities = RibbonVisibilities;
	Parms.FlashIntensities = FlashIntensities;
	Parms.RibbonSizes = RibbonSizes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnstableLiquidGunRuntime.LiquidRibbonManager.RunSplineCollisionTestOnProjectiles
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULiquidRibbonManager::RunSplineCollisionTestOnProjectiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiquidRibbonManager", "RunSplineCollisionTestOnProjectiles");

	Params::ULiquidRibbonManager_RunSplineCollisionTestOnProjectiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnstableLiquidGunRuntime.LiquidRibbonManager.GetPointOnSegment
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              T                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiquidRibbonSplineSegment  Segment                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector ULiquidRibbonManager::GetPointOnSegment(float T, struct FLiquidRibbonSplineSegment& Segment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiquidRibbonManager", "GetPointOnSegment");

	Params::ULiquidRibbonManager_GetPointOnSegment_Params Parms{};

	Parms.T = T;
	Parms.Segment = Segment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnstableLiquidGunRuntime.LiquidRibbonManager.GetOrAddDetachment
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              RibbonID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiquidRibbonSplineSegment  Segment                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLiquidRibbonSplineDetachmentReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FLiquidRibbonSplineDetachment ULiquidRibbonManager::GetOrAddDetachment(int32 RibbonID, struct FLiquidRibbonSplineSegment& Segment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiquidRibbonManager", "GetOrAddDetachment");

	Params::ULiquidRibbonManager_GetOrAddDetachment_Params Parms{};

	Parms.RibbonID = RibbonID;
	Parms.Segment = Segment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnstableLiquidGunRuntime.LiquidRibbonManager.GetFirstVisiblePointIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULiquidRibbonManager::GetFirstVisiblePointIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiquidRibbonManager", "GetFirstVisiblePointIndex");

	Params::ULiquidRibbonManager_GetFirstVisiblePointIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSplinePointsAndSetNiagaraData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UFortLiquidGunProjectile*>Projectiles                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAttachSplineToMuzzle                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           NiagaraComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             OutAllPositions                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      OutRibbonIDs                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<bool>                       OutRibbonVisibilities                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      OutFlashIntensities                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      OutRibbonSizes                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiquidRibbonManager::CalculateSplinePointsAndSetNiagaraData(TArray<class UFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, class UNiagaraComponent* NiagaraComponent, TArray<struct FVector>* OutAllPositions, TArray<int32>* OutRibbonIDs, TArray<bool>* OutRibbonVisibilities, TArray<float>* OutFlashIntensities, TArray<int32>* OutRibbonSizes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiquidRibbonManager", "CalculateSplinePointsAndSetNiagaraData");

	Params::ULiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData_Params Parms{};

	Parms.Projectiles = Projectiles;
	Parms.bAttachSplineToMuzzle = bAttachSplineToMuzzle;
	Parms.NiagaraComponent = NiagaraComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAllPositions != nullptr)
		*OutAllPositions = Parms.OutAllPositions;

	if (OutRibbonIDs != nullptr)
		*OutRibbonIDs = Parms.OutRibbonIDs;

	if (OutRibbonVisibilities != nullptr)
		*OutRibbonVisibilities = Parms.OutRibbonVisibilities;

	if (OutFlashIntensities != nullptr)
		*OutFlashIntensities = Parms.OutFlashIntensities;

	if (OutRibbonSizes != nullptr)
		*OutRibbonSizes = Parms.OutRibbonSizes;

}


// Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSegments
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Points                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              Tension                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLiquidRibbonSplineSegment>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLiquidRibbonSplineSegment> ULiquidRibbonManager::CalculateSegments(TArray<struct FVector>& Points, float Tension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiquidRibbonManager", "CalculateSegments");

	Params::ULiquidRibbonManager_CalculateSegments_Params Parms{};

	Parms.Points = Points;
	Parms.Tension = Tension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SegmentIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PointIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULiquidRibbonManager::CalculatePointSize(int32 SegmentIndex, int32 PointIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiquidRibbonManager", "CalculatePointSize");

	Params::ULiquidRibbonManager_CalculatePointSize_Params Parms{};

	Parms.SegmentIndex = SegmentIndex;
	Parms.PointIndex = PointIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointFlashIntensity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              PointSize                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULiquidRibbonManager::CalculatePointFlashIntensity(int32 PointSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiquidRibbonManager", "CalculatePointFlashIntensity");

	Params::ULiquidRibbonManager_CalculatePointFlashIntensity_Params Parms{};

	Parms.PointSize = PointSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


