#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C
// (None)

class UClass* UPlayerAnimOverrideLayerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAnimOverrideLayerInterface_C");

	return Clss;
}


// PlayerAnimOverrideLayerInterface_C PlayerAnimOverrideLayerInterface.Default__PlayerAnimOverrideLayerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAnimOverrideLayerInterface_C* UPlayerAnimOverrideLayerInterface_C::GetDefaultObj()
{
	static class UPlayerAnimOverrideLayerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAnimOverrideLayerInterface_C*>(UPlayerAnimOverrideLayerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.CharacterSkeletalControlPostLegIK
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePostLegIK                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CharacterSkeletalControlPostLegIK                                (Parm, OutParm, NoDestructor)

void UPlayerAnimOverrideLayerInterface_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAnimOverrideLayerInterface_C", "CharacterSkeletalControlPostLegIK");

	Params::UPlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK_Params Parms{};

	Parms.InPosePostLegIK = InPosePostLegIK;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSkeletalControlPostLegIK != nullptr)
		*CharacterSkeletalControlPostLegIK = Parms.CharacterSkeletalControlPostLegIK;

}


// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.FullBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyOverride                                                 (Parm, OutParm, NoDestructor)

void UPlayerAnimOverrideLayerInterface_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAnimOverrideLayerInterface_C", "FullBodyOverride");

	Params::UPlayerAnimOverrideLayerInterface_C_FullBodyOverride_Params Parms{};

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = Parms.FullBodyOverride;

}

}


