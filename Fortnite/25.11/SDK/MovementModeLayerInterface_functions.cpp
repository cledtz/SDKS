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


// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_AimOffset
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InAimOffsetsPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePosePreAimOffsets                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_AimOffset                                           (Parm, OutParm, NoDestructor)

void UMovementModeLayerInterface_C::MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset)
{
	static auto Func = Class->GetFunction("MovementModeLayerInterface_C", "MovementMode_AimOffset");

	Params::UMovementModeLayerInterface_C_MovementMode_AimOffset_Params Parms;

	Parms.InAimOffsetsPose = InAimOffsetsPose;
	Parms.InSourcePosePreAimOffsets = InSourcePosePreAimOffsets;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_AimOffset != nullptr)
		*MovementMode_AimOffset = Parms.MovementMode_AimOffset;

}


// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_FinalPoseOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FinalPoseOverride                                   (Parm, OutParm, NoDestructor)

void UMovementModeLayerInterface_C::MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride)
{
	static auto Func = Class->GetFunction("MovementModeLayerInterface_C", "MovementMode_FinalPoseOverride");

	Params::UMovementModeLayerInterface_C_MovementMode_FinalPoseOverride_Params Parms;

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FinalPoseOverride != nullptr)
		*MovementMode_FinalPoseOverride = Parms.MovementMode_FinalPoseOverride;

}


// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_FullBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InputPoseFullBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FullBodyOverride                                    (Parm, OutParm, NoDestructor)

void UMovementModeLayerInterface_C::MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride)
{
	static auto Func = Class->GetFunction("MovementModeLayerInterface_C", "MovementMode_FullBodyOverride");

	Params::UMovementModeLayerInterface_C_MovementMode_FullBodyOverride_Params Parms;

	Parms.InputPoseFullBody = InputPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FullBodyOverride != nullptr)
		*MovementMode_FullBodyOverride = Parms.MovementMode_FullBodyOverride;

}


// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_SourcePose
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InSourcePoseBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_SourcePose                                          (Parm, OutParm, NoDestructor)

void UMovementModeLayerInterface_C::MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose)
{
	static auto Func = Class->GetFunction("MovementModeLayerInterface_C", "MovementMode_SourcePose");

	Params::UMovementModeLayerInterface_C_MovementMode_SourcePose_Params Parms;

	Parms.InSourcePoseBase = InSourcePoseBase;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_SourcePose != nullptr)
		*MovementMode_SourcePose = Parms.MovementMode_SourcePose;

}


// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LocomotionAdditives
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InLocomotionAdditivesPose                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LocomotionAdditives                                 (Parm, OutParm, NoDestructor)

void UMovementModeLayerInterface_C::MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives)
{
	static auto Func = Class->GetFunction("MovementModeLayerInterface_C", "MovementMode_LocomotionAdditives");

	Params::UMovementModeLayerInterface_C_MovementMode_LocomotionAdditives_Params Parms;

	Parms.InLocomotionAdditivesPose = InLocomotionAdditivesPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionAdditives != nullptr)
		*MovementMode_LocomotionAdditives = Parms.MovementMode_LocomotionAdditives;

}


// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LowerBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InLowerBodyPose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LowerBodyOverride                                   (Parm, OutParm, NoDestructor)

void UMovementModeLayerInterface_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride)
{
	static auto Func = Class->GetFunction("MovementModeLayerInterface_C", "MovementMode_LowerBodyOverride");

	Params::UMovementModeLayerInterface_C_MovementMode_LowerBodyOverride_Params Parms;

	Parms.InLowerBodyPose = InLowerBodyPose;
	Parms.InSourcePose = InSourcePose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride != nullptr)
		*MovementMode_LowerBodyOverride = Parms.MovementMode_LowerBodyOverride;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
