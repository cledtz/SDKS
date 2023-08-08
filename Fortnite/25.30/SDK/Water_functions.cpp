#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Water.BuoyancyComponent.OnPontoonExitedWater
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon           Pontoon                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UBuoyancyComponent::OnPontoonExitedWater(struct FSphericalPontoon& Pontoon)
{
	static auto Func = Class->GetFunction("BuoyancyComponent", "OnPontoonExitedWater");

	Params::UBuoyancyComponent_OnPontoonExitedWater_Params Parms;

	Parms.Pontoon = Pontoon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.BuoyancyComponent.OnPontoonEnteredWater
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon           Pontoon                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UBuoyancyComponent::OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon)
{
	static auto Func = Class->GetFunction("BuoyancyComponent", "OnPontoonEnteredWater");

	Params::UBuoyancyComponent_OnPontoonEnteredWater_Params Parms;

	Parms.Pontoon = Pontoon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.BuoyancyComponent.IsOverlappingWaterBody
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuoyancyComponent::IsOverlappingWaterBody()
{
	static auto Func = Class->GetFunction("BuoyancyComponent", "IsOverlappingWaterBody");

	Params::UBuoyancyComponent_IsOverlappingWaterBody_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.BuoyancyComponent.IsInWaterBody
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuoyancyComponent::IsInWaterBody()
{
	static auto Func = Class->GetFunction("BuoyancyComponent", "IsInWaterBody");

	Params::UBuoyancyComponent_IsInWaterBody_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     OutWaterPlaneLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterPlaneNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterSurfacePosition                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutWaterDepth                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutWaterBodyIdx                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterVelocity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32* OutWaterBodyIdx, struct FVector* OutWaterVelocity)
{
	static auto Func = Class->GetFunction("BuoyancyComponent", "GetLastWaterSurfaceInfo");

	Params::UBuoyancyComponent_GetLastWaterSurfaceInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutWaterPlaneLocation != nullptr)
		*OutWaterPlaneLocation = Parms.OutWaterPlaneLocation;

	if (OutWaterPlaneNormal != nullptr)
		*OutWaterPlaneNormal = Parms.OutWaterPlaneNormal;

	if (OutWaterSurfacePosition != nullptr)
		*OutWaterSurfacePosition = Parms.OutWaterSurfacePosition;

	if (OutWaterDepth != nullptr)
		*OutWaterDepth = Parms.OutWaterDepth;

	if (OutWaterBodyIdx != nullptr)
		*OutWaterBodyIdx = Parms.OutWaterBodyIdx;

	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = Parms.OutWaterVelocity;

}


// Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWaterBodyComponent*> ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UWaterBodyComponent*> UBuoyancyComponent::GetCurrentWaterBodyComponents()
{
	static auto Func = Class->GetFunction("BuoyancyComponent", "GetCurrentWaterBodyComponents");

	Params::UBuoyancyComponent_GetCurrentWaterBodyComponents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.BuoyancyManager.GetBuoyancyComponentManager
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBuoyancyManager*            Manager                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuoyancyManager::GetBuoyancyComponentManager(class UObject* WorldContextObject, class UBuoyancyManager** Manager)
{
	static auto Func = Class->GetFunction("BuoyancyManager", "GetBuoyancyComponentManager");

	Params::UBuoyancyManager_GetBuoyancyComponentManager_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Manager != nullptr)
		*Manager = Parms.Manager;

	return Parms.ReturnValue;

}


// Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<struct FGerstnerWave>       OutWaves                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGerstnerWaterWaveGeneratorBase::GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves)
{
	static auto Func = Class->GetFunction("GerstnerWaterWaveGeneratorBase", "GenerateGerstnerWaves");

	Params::UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutWaves != nullptr)
		*OutWaves = Parms.OutWaves;

}


// Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWaterBodyComponent*         WaterBodyComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraWaterFunctionLibrary::SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UWaterBodyComponent* WaterBodyComponent)
{
	static auto Func = Class->GetFunction("NiagaraWaterFunctionLibrary", "SetWaterBodyComponent");

	Params::UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Params Parms;

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.WaterBodyComponent = WaterBodyComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWaterBody*                  WaterBody                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraWaterFunctionLibrary::SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UWaterBody* WaterBody)
{
	static auto Func = Class->GetFunction("NiagaraWaterFunctionLibrary", "SetWaterBody");

	Params::UNiagaraWaterFunctionLibrary_SetWaterBody_Params Parms;

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.WaterBody = WaterBody;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterBody.SetWaterWaves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWaterWavesBase*             InWaterWaves                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterBody::SetWaterWaves(class UWaterWavesBase* InWaterWaves)
{
	static auto Func = Class->GetFunction("WaterBody", "SetWaterWaves");

	Params::UWaterBody_SetWaterWaves_Params Parms;

	Parms.InWaterWaves = InWaterWaves;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterBody.SetWaterMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterBody::SetWaterMaterial(class UMaterialInterface* InMaterial)
{
	static auto Func = Class->GetFunction("WaterBody", "SetWaterMaterial");

	Params::UWaterBody_SetWaterMaterial_Params Parms;

	Parms.InMaterial = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterBody.OnWaterBodyChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShapeOrPositionChanged                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWeightmapSettingsChanged                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static auto Func = Class->GetFunction("WaterBody", "OnWaterBodyChanged");

	Params::UWaterBody_OnWaterBodyChanged_Params Parms;

	Parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	Parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InKey                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UWaterBody::GetWaterVelocityVectorAtSplineInputKey(float InKey)
{
	static auto Func = Class->GetFunction("WaterBody", "GetWaterVelocityVectorAtSplineInputKey");

	Params::UWaterBody_GetWaterVelocityVectorAtSplineInputKey_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterVelocityAtSplineInputKey
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InKey                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterBody::GetWaterVelocityAtSplineInputKey(float InKey)
{
	static auto Func = Class->GetFunction("WaterBody", "GetWaterVelocityAtSplineInputKey");

	Params::UWaterBody_GetWaterVelocityAtSplineInputKey_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* UWaterBody::GetWaterSpline()
{
	static auto Func = Class->GetFunction("WaterBody", "GetWaterSpline");

	Params::UWaterBody_GetWaterSpline_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBody::GetWaterMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBody", "GetWaterMaterialInstance");

	Params::UWaterBody_GetWaterMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterBodyType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWaterBodyType          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWaterBodyType UWaterBody::GetWaterBodyType()
{
	static auto Func = Class->GetFunction("WaterBody", "GetWaterBodyType");

	Params::UWaterBody_GetWaterBodyType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterBodyComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterBodyComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterBodyComponent* UWaterBody::GetWaterBodyComponent()
{
	static auto Func = Class->GetFunction("WaterBody", "GetWaterBodyComponent");

	Params::UWaterBody_GetWaterBodyComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBody::GetRiverToOceanTransitionMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBody", "GetRiverToOceanTransitionMaterialInstance");

	Params::UWaterBody_GetRiverToOceanTransitionMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBody::GetRiverToLakeTransitionMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBody", "GetRiverToLakeTransitionMaterialInstance");

	Params::UWaterBody_GetRiverToLakeTransitionMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetIslands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWaterBodyIsland*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UWaterBodyIsland*> UWaterBody::GetIslands()
{
	static auto Func = Class->GetFunction("WaterBody", "GetIslands");

	Params::UWaterBody_GetIslands_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetExclusionVolumes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWaterBodyExclusionVolume*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UWaterBodyExclusionVolume*> UWaterBody::GetExclusionVolumes()
{
	static auto Func = Class->GetFunction("WaterBody", "GetExclusionVolumes");

	Params::UWaterBody_GetExclusionVolumes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetAudioIntensityAtSplineInputKey
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InKey                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterBody::GetAudioIntensityAtSplineInputKey(float InKey)
{
	static auto Func = Class->GetFunction("WaterBody", "GetAudioIntensityAtSplineInputKey");

	Params::UWaterBody_GetAudioIntensityAtSplineInputKey_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InWaterMaterial                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          InUnderWaterPostProcessMaterial                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterBodyComponent::SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface* InWaterMaterial, class UMaterialInterface* InUnderWaterPostProcessMaterial)
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "SetWaterAndUnderWaterPostProcessMaterial");

	Params::UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Params Parms;

	Parms.InWaterMaterial = InWaterMaterial;
	Parms.InUnderWaterPostProcessMaterial = InUnderWaterPostProcessMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterBodyComponent.OnWaterBodyChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShapeOrPositionChanged                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWeightmapSettingsChanged                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterBodyComponent::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "OnWaterBodyChanged");

	Params::UWaterBodyComponent_OnWaterBodyChanged_Params Parms;

	Parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	Parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterBodyComponent.GetWaterWaves
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterWavesBase*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterWavesBase* UWaterBodyComponent::GetWaterWaves()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterWaves");

	Params::UWaterBodyComponent_GetWaterWaves_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InKey                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterBodyComponent::GetWaterVelocityAtSplineInputKey(float InKey)
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterVelocityAtSplineInputKey");

	Params::UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     InLocation                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterSurfaceLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterSurfaceNormal                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterVelocity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutWaterDepth                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDepth                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterBodyComponent::GetWaterSurfaceInfoAtLocation(struct FVector& InLocation, struct FVector* OutWaterSurfaceLocation, struct FVector* OutWaterSurfaceNormal, struct FVector* OutWaterVelocity, float* OutWaterDepth, bool bIncludeDepth)
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterSurfaceInfoAtLocation");

	Params::UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Params Parms;

	Parms.InLocation = InLocation;
	Parms.bIncludeDepth = bIncludeDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutWaterSurfaceLocation != nullptr)
		*OutWaterSurfaceLocation = Parms.OutWaterSurfaceLocation;

	if (OutWaterSurfaceNormal != nullptr)
		*OutWaterSurfaceNormal = Parms.OutWaterSurfaceNormal;

	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = Parms.OutWaterVelocity;

	if (OutWaterDepth != nullptr)
		*OutWaterDepth = Parms.OutWaterDepth;

}


// Function Water.WaterBodyComponent.GetWaterStaticMeshMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterStaticMeshMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterStaticMeshMaterialInstance");

	Params::UWaterBodyComponent_GetWaterStaticMeshMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* UWaterBodyComponent::GetWaterSpline()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterSpline");

	Params::UWaterBodyComponent_GetWaterSpline_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterMaterialInstance");

	Params::UWaterBodyComponent_GetWaterMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UWaterBodyComponent::GetWaterMaterial()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterMaterial");

	Params::UWaterBodyComponent_GetWaterMaterial_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterLODMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterLODMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterLODMaterialInstance");

	Params::UWaterBodyComponent_GetWaterLODMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterInfoMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterInfoMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterInfoMaterialInstance");

	Params::UWaterBodyComponent_GetWaterInfoMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetWaterBodyActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterBody*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterBody* UWaterBodyComponent::GetWaterBodyActor()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetWaterBodyActor");

	Params::UWaterBodyComponent_GetWaterBodyActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetUnderwaterPostProcessMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetUnderwaterPostProcessMaterialInstance");

	Params::UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetStandardRenderableComponents
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UPrimitiveComponent*> UWaterBodyComponent::GetStandardRenderableComponents()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetStandardRenderableComponents");

	Params::UWaterBodyComponent_GetStandardRenderableComponents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToOceanTransitionMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetRiverToOceanTransitionMaterialInstance");

	Params::UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToLakeTransitionMaterialInstance()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetRiverToLakeTransitionMaterialInstance");

	Params::UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetMaxWaveHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterBodyComponent::GetMaxWaveHeight()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetMaxWaveHeight");

	Params::UWaterBodyComponent_GetMaxWaveHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetIslands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWaterBodyIsland*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UWaterBodyIsland*> UWaterBodyComponent::GetIslands()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetIslands");

	Params::UWaterBodyComponent_GetIslands_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetExclusionVolumes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWaterBodyExclusionVolume*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UWaterBodyExclusionVolume*> UWaterBodyComponent::GetExclusionVolumes()
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetExclusionVolumes");

	Params::UWaterBodyComponent_GetExclusionVolumes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyComponent.GetCollisionComponents
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInOnlyEnabledComponents                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UPrimitiveComponent*> ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UPrimitiveComponent*> UWaterBodyComponent::GetCollisionComponents(bool bInOnlyEnabledComponents)
{
	static auto Func = Class->GetFunction("WaterBodyComponent", "GetCollisionComponents");

	Params::UWaterBodyComponent_GetCollisionComponents_Params Parms;

	Parms.bInOnlyEnabledComponents = bInOnlyEnabledComponents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterBodyIsland.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* UWaterBodyIsland::GetWaterSpline()
{
	static auto Func = Class->GetFunction("WaterBodyIsland", "GetWaterSpline");

	Params::UWaterBodyIsland_GetWaterSpline_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterMeshComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterMeshComponent::IsEnabled()
{
	static auto Func = Class->GetFunction("WaterMeshComponent", "IsEnabled");

	Params::UWaterMeshComponent_IsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSplineComponent.K2_SynchronizeAndBroadcastDataChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWaterSplineComponent::K2_SynchronizeAndBroadcastDataChange()
{
	static auto Func = Class->GetFunction("WaterSplineComponent", "K2_SynchronizeAndBroadcastDataChange");

	Params::UWaterSplineComponent_K2_SynchronizeAndBroadcastDataChange_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterSubsystem.SetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFloodHeight                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight)
{
	static auto Func = Class->GetFunction("WaterSubsystem", "SetOceanFloodHeight");

	Params::UWaterSubsystem_SetOceanFloodHeight_Params Parms;

	Parms.InFloodHeight = InFloodHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterSubsystem.PrintToWaterLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWarning                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterSubsystem::PrintToWaterLog(const class FString& Message, bool bWarning)
{
	static auto Func = Class->GetFunction("WaterSubsystem", "PrintToWaterLog");

	Params::UWaterSubsystem_PrintToWaterLog_Params Parms;

	Parms.Message = Message;
	Parms.bWarning = bWarning;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Water.WaterSubsystem.IsWaterRenderingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsWaterRenderingEnabled()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "IsWaterRenderingEnabled");

	Params::UWaterSubsystem_IsWaterRenderingEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsUnderwaterPostProcessEnabled()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "IsUnderwaterPostProcessEnabled");

	Params::UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsShallowWaterSimulationEnabled()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "IsShallowWaterSimulationEnabled");

	Params::UWaterSubsystem_IsShallowWaterSimulationEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetWaterTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetWaterTimeSeconds()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetWaterTimeSeconds");

	Params::UWaterSubsystem_GetWaterTimeSeconds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetSmoothedWorldTimeSeconds()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetSmoothedWorldTimeSeconds");

	Params::UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterSimulationRenderTargetSize");

	Params::UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterMaxImpulseForces()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterMaxImpulseForces");

	Params::UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterMaxDynamicForces()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterMaxDynamicForces");

	Params::UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetOceanTotalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanTotalHeight()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetOceanTotalHeight");

	Params::UWaterSubsystem_GetOceanTotalHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanFloodHeight()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetOceanFloodHeight");

	Params::UWaterSubsystem_GetOceanFloodHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetOceanBaseHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanBaseHeight()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetOceanBaseHeight");

	Params::UWaterSubsystem_GetOceanBaseHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetCameraUnderwaterDepth()
{
	static auto Func = Class->GetFunction("WaterSubsystem", "GetCameraUnderwaterDepth");

	Params::UWaterSubsystem_GetCameraUnderwaterDepth_Params Parms;


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
