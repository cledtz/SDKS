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


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDesiredPackagePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomAsset*                 InGroomAsset                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSkeletalMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumInterpolationPoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSourceSkeletalMeshForTransfer                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMatchingSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(const class FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection)
{
	static auto Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAssetWithPath");

	Params::UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params Parms;

	Parms.InDesiredPackagePath = InDesiredPackagePath;
	Parms.InGroomAsset = InGroomAsset;
	Parms.InSkeletalMesh = InSkeletalMesh;
	Parms.InNumInterpolationPoints = InNumInterpolationPoints;
	Parms.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	Parms.InMatchingSection = InMatchingSection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 InGroomAsset                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSkeletalMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InNumInterpolationPoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               InSourceSkeletalMeshForTransfer                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMatchingSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection)
{
	static auto Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAsset");

	Params::UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params Parms;

	Parms.InGroomAsset = InGroomAsset;
	Parms.InSkeletalMesh = InSkeletalMesh;
	Parms.InNumInterpolationPoints = InNumInterpolationPoints;
	Parms.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	Parms.InMatchingSection = InMatchingSection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      DesiredPackagePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomAsset*                 GroomAsset                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              GeometryCache                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumInterpolationPoints                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              SourceGeometryCacheForTransfer                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MatchingSection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAssetWithPath(const class FString& DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection)
{
	static auto Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGeometryCacheGroomBindingAssetWithPath");

	Params::UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params Parms;

	Parms.DesiredPackagePath = DesiredPackagePath;
	Parms.GroomAsset = GroomAsset;
	Parms.GeometryCache = GeometryCache;
	Parms.NumInterpolationPoints = NumInterpolationPoints;
	Parms.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
	Parms.MatchingSection = MatchingSection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 GroomAsset                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              GeometryCache                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumInterpolationPoints                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGeometryCache*              SourceGeometryCacheForTransfer                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MatchingSection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection)
{
	static auto Func = Class->GetFunction("GroomBlueprintLibrary", "CreateNewGeometryCacheGroomBindingAsset");

	Params::UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params Parms;

	Parms.GroomAsset = GroomAsset;
	Parms.GeometryCache = GeometryCache;
	Parms.NumInterpolationPoints = NumInterpolationPoints;
	Parms.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
	Parms.MatchingSection = MatchingSection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomComponent.SetPhysicsAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhysicsAsset*               InPhysicsAsset                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset)
{
	static auto Func = Class->GetFunction("GroomComponent", "SetPhysicsAsset");

	Params::UGroomComponent_SetPhysicsAsset_Params Parms;

	Parms.InPhysicsAsset = InPhysicsAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HairStrandsCore.GroomComponent.SetMeshDeformer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshDeformer*               InMeshDeformer                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetMeshDeformer(class UMeshDeformer* InMeshDeformer)
{
	static auto Func = Class->GetFunction("GroomComponent", "SetMeshDeformer");

	Params::UGroomComponent_SetMeshDeformer_Params Parms;

	Parms.InMeshDeformer = InMeshDeformer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetHairLengthScaleEnable(bool bEnable)
{
	static auto Func = Class->GetFunction("GroomComponent", "SetHairLengthScaleEnable");

	Params::UGroomComponent_SetHairLengthScaleEnable_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HairStrandsCore.GroomComponent.SetHairLengthScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetHairLengthScale(float Scale)
{
	static auto Func = Class->GetFunction("GroomComponent", "SetHairLengthScale");

	Params::UGroomComponent_SetHairLengthScale_Params Parms;

	Parms.Scale = Scale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HairStrandsCore.GroomComponent.SetGroomAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGroomAsset*                 Asset                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetGroomAsset(class UGroomAsset* Asset)
{
	static auto Func = Class->GetFunction("GroomComponent", "SetGroomAsset");

	Params::UGroomComponent_SetGroomAsset_Params Parms;

	Parms.Asset = Asset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HairStrandsCore.GroomComponent.SetEnableSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnableSimulation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetEnableSimulation(bool bInEnableSimulation)
{
	static auto Func = Class->GetFunction("GroomComponent", "SetEnableSimulation");

	Params::UGroomComponent_SetEnableSimulation_Params Parms;

	Parms.bInEnableSimulation = bInEnableSimulation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HairStrandsCore.GroomComponent.SetBindingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGroomBindingAsset*          InBinding                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::SetBindingAsset(class UGroomBindingAsset* InBinding)
{
	static auto Func = Class->GetFunction("GroomComponent", "SetBindingAsset");

	Params::UGroomComponent_SetBindingAsset_Params Parms;

	Parms.InBinding = InBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HairStrandsCore.GroomComponent.ResetSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGroomComponent::ResetSimulation()
{
	static auto Func = Class->GetFunction("GroomComponent", "ResetSimulation");

	Params::UGroomComponent_ResetSimulation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HairStrandsCore.GroomComponent.ResetCollisionComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGroomComponent::ResetCollisionComponents()
{
	static auto Func = Class->GetFunction("GroomComponent", "ResetCollisionComponents");

	Params::UGroomComponent_ResetCollisionComponents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HairStrandsCore.GroomComponent.GetNiagaraComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GroupIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UGroomComponent::GetNiagaraComponent(int32 GroupIndex)
{
	static auto Func = Class->GetFunction("GroomComponent", "GetNiagaraComponent");

	Params::UGroomComponent_GetNiagaraComponent_Params Parms;

	Parms.GroupIndex = GroupIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGroomComponent::GetIsHairLengthScaleEnabled()
{
	static auto Func = Class->GetFunction("GroomComponent", "GetIsHairLengthScaleEnabled");

	Params::UGroomComponent_GetIsHairLengthScaleEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HairStrandsCore.GroomComponent.AddCollisionComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGroomComponent::AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto Func = Class->GetFunction("GroomComponent", "AddCollisionComponent");

	Params::UGroomComponent_AddCollisionComponent_Params Parms;

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
