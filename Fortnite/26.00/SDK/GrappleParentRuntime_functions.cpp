#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GrappleParentRuntime.FortCameraModifier_Swinging
// (None)

class UClass* UFortCameraModifier_Swinging::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCameraModifier_Swinging");

	return Clss;
}


// FortCameraModifier_Swinging GrappleParentRuntime.Default__FortCameraModifier_Swinging
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCameraModifier_Swinging* UFortCameraModifier_Swinging::GetDefaultObj()
{
	static class UFortCameraModifier_Swinging* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCameraModifier_Swinging*>(UFortCameraModifier_Swinging::StaticClass()->DefaultObject);

	return Default;
}


// Function GrappleParentRuntime.FortCameraModifier_Swinging.RemoveSelfFromCameraManager
// (Final, Native, Protected)
// Parameters:

void UFortCameraModifier_Swinging::RemoveSelfFromCameraManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCameraModifier_Swinging", "RemoveSelfFromCameraManager");

	Params::UFortCameraModifier_Swinging_RemoveSelfFromCameraManager_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GrappleParentRuntime.FortCameraModifier_Swinging.CalculateDynamicMultipliers
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// float                              OutFOVBoundsMultiplier                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutBoostOffsetMultiplier                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCameraModifier_Swinging::CalculateDynamicMultipliers(float* OutFOVBoundsMultiplier, float* OutBoostOffsetMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCameraModifier_Swinging", "CalculateDynamicMultipliers");

	Params::UFortCameraModifier_Swinging_CalculateDynamicMultipliers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFOVBoundsMultiplier != nullptr)
		*OutFOVBoundsMultiplier = Parms.OutFOVBoundsMultiplier;

	if (OutBoostOffsetMultiplier != nullptr)
		*OutBoostOffsetMultiplier = Parms.OutBoostOffsetMultiplier;

}


// Class GrappleParentRuntime.FortSwingingLayerAnimInstance
// (None)

class UClass* UFortSwingingLayerAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSwingingLayerAnimInstance");

	return Clss;
}


// FortSwingingLayerAnimInstance GrappleParentRuntime.Default__FortSwingingLayerAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSwingingLayerAnimInstance* UFortSwingingLayerAnimInstance::GetDefaultObj()
{
	static class UFortSwingingLayerAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSwingingLayerAnimInstance*>(UFortSwingingLayerAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function GrappleParentRuntime.FortSwingingLayerAnimInstance.GetPlayerAnglesFromAttachPoint
// (Final, Native, Public, HasOutParams)
// Parameters:
// float                              Pitch                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Roll                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSwingingLayerAnimInstance::GetPlayerAnglesFromAttachPoint(float* Pitch, float* Roll, float* Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSwingingLayerAnimInstance", "GetPlayerAnglesFromAttachPoint");

	Params::UFortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSwingingLayerAnimInstance", "GetAttachVectorInPlayerSpace");

	Params::UFortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace_Params Parms{};

	Parms.InPlayerToAttachPoint = InPlayerToAttachPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


