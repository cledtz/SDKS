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


// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.CharacterSkeletalControlPostLegIK
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePostLegIK                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CharacterSkeletalControlPostLegIK                                (Parm, OutParm, NoDestructor)

void UPlayerAnimOverrideLayerInterface_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK)
{
	static auto Func = Class->GetFunction("PlayerAnimOverrideLayerInterface_C", "CharacterSkeletalControlPostLegIK");

	Params::UPlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK_Params Parms;

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
	static auto Func = Class->GetFunction("PlayerAnimOverrideLayerInterface_C", "FullBodyOverride");

	Params::UPlayerAnimOverrideLayerInterface_C_FullBodyOverride_Params Parms;

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = Parms.FullBodyOverride;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
