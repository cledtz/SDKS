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


// Function GrappleParentRuntime.FortCameraModifier_Swinging.RemoveSelfFromCameraManager
// (Final, Native, Protected)
// Parameters:

void UFortCameraModifier_Swinging::RemoveSelfFromCameraManager()
{
	static auto Func = Class->GetFunction("FortCameraModifier_Swinging", "RemoveSelfFromCameraManager");

	Params::UFortCameraModifier_Swinging_RemoveSelfFromCameraManager_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GrappleParentRuntime.FortCameraModifier_Swinging.CalculateDynamicMultipliers
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// float                              OutFOVBoundsMultiplier                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutBoostOffsetMultiplier                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCameraModifier_Swinging::CalculateDynamicMultipliers(float* OutFOVBoundsMultiplier, float* OutBoostOffsetMultiplier)
{
	static auto Func = Class->GetFunction("FortCameraModifier_Swinging", "CalculateDynamicMultipliers");

	Params::UFortCameraModifier_Swinging_CalculateDynamicMultipliers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFOVBoundsMultiplier != nullptr)
		*OutFOVBoundsMultiplier = Parms.OutFOVBoundsMultiplier;

	if (OutBoostOffsetMultiplier != nullptr)
		*OutBoostOffsetMultiplier = Parms.OutBoostOffsetMultiplier;

}


// Function GrappleParentRuntime.FortSwingingLayerAnimInstance.GetPlayerAnglesFromAttachPoint
// (Final, Native, Public, HasOutParams)
// Parameters:
// float                              Pitch                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Roll                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSwingingLayerAnimInstance::GetPlayerAnglesFromAttachPoint(float* Pitch, float* Roll, float* Yaw)
{
	static auto Func = Class->GetFunction("FortSwingingLayerAnimInstance", "GetPlayerAnglesFromAttachPoint");

	Params::UFortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;

	if (Roll != nullptr)
		*Roll = Parms.Roll;

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;

}


// Function GrappleParentRuntime.FortSwingingLayerAnimInstance.GetAttachVectorInPlayerSpace
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     InPlayerToAttachPoint                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortSwingingLayerAnimInstance::GetAttachVectorInPlayerSpace(struct FVector& InPlayerToAttachPoint)
{
	static auto Func = Class->GetFunction("FortSwingingLayerAnimInstance", "GetAttachVectorInPlayerSpace");

	Params::UFortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace_Params Parms;

	Parms.InPlayerToAttachPoint = InPlayerToAttachPoint;

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
