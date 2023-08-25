#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap
// (None)

class UClass* UFortGameStateComponent_SurfaceCoverageMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameStateComponent_SurfaceCoverageMap");

	return Clss;
}


// FortGameStateComponent_SurfaceCoverageMap SpecialSurfaceCoverageRuntime.Default__FortGameStateComponent_SurfaceCoverageMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameStateComponent_SurfaceCoverageMap* UFortGameStateComponent_SurfaceCoverageMap::GetDefaultObj()
{
	static class UFortGameStateComponent_SurfaceCoverageMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameStateComponent_SurfaceCoverageMap*>(UFortGameStateComponent_SurfaceCoverageMap::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap.UpdateCoverageMap
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      SpecialSurfaceRenderTarget                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InTopLeftWorldCoordinate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InBottomRightWorldCoordinate                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CoverageThreshold                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DebugDrawDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameStateComponent_SurfaceCoverageMap::UpdateCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* SpecialSurfaceRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_SurfaceCoverageMap", "UpdateCoverageMap");

	Params::UFortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SpecialSurfaceRenderTarget = SpecialSurfaceRenderTarget;
	Parms.InTopLeftWorldCoordinate = InTopLeftWorldCoordinate;
	Parms.InBottomRightWorldCoordinate = InBottomRightWorldCoordinate;
	Parms.CoverageThreshold = CoverageThreshold;
	Parms.DebugDrawDuration = DebugDrawDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


