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
	static auto Func = Class->GetFunction("FortGameStateComponent_SurfaceCoverageMap", "UpdateCoverageMap");

	Params::UFortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SpecialSurfaceRenderTarget = SpecialSurfaceRenderTarget;
	Parms.InTopLeftWorldCoordinate = InTopLeftWorldCoordinate;
	Parms.InBottomRightWorldCoordinate = InBottomRightWorldCoordinate;
	Parms.CoverageThreshold = CoverageThreshold;
	Parms.DebugDrawDuration = DebugDrawDuration;

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
