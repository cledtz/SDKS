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


// Function CrowdVolume.CrowdSpawner.SpawnCrowd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Depth                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Precision                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CharacterScaleRandomness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CharacterAngleRandomness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Density                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrowdSpawner::SpawnCrowd(int32 Width, int32 Depth, int32 Height, int32 Precision, int32 CharacterScaleRandomness, int32 CharacterAngleRandomness, int32 Density)
{
	static auto Func = Class->GetFunction("CrowdSpawner", "SpawnCrowd");

	Params::UCrowdSpawner_SpawnCrowd_Params Parms;

	Parms.Width = Width;
	Parms.Depth = Depth;
	Parms.Height = Height;
	Parms.Precision = Precision;
	Parms.CharacterScaleRandomness = CharacterScaleRandomness;
	Parms.CharacterAngleRandomness = CharacterAngleRandomness;
	Parms.Density = Density;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CrowdVolume.CrowdSpawner.RefreshTrackedActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayspaceComponent_SpatialActorTracker*InPlaySpaceComponent_SpatialActorTracker                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrowdSpawner::RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker)
{
	static auto Func = Class->GetFunction("CrowdSpawner", "RefreshTrackedActors");

	Params::UCrowdSpawner_RefreshTrackedActors_Params Parms;

	Parms.InPlaySpaceComponent_SpatialActorTracker = InPlaySpaceComponent_SpatialActorTracker;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
