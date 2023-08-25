#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C
// (None)

class UClass* UFortnite_M_Avg_Player_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fortnite_M_Avg_Player_AnimBlueprint_C");

	return Clss;
}


// Fortnite_M_Avg_Player_AnimBlueprint_C Fortnite_M_Avg_Player_AnimBlueprint.Default__Fortnite_M_Avg_Player_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortnite_M_Avg_Player_AnimBlueprint_C* UFortnite_M_Avg_Player_AnimBlueprint_C::GetDefaultObj()
{
	static class UFortnite_M_Avg_Player_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortnite_M_Avg_Player_AnimBlueprint_C*>(UFortnite_M_Avg_Player_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_AimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InAimOffsetsPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePosePreAimOffsets                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_AimOffset                                           (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MovementMode_AimOffset");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset_Params Parms{};

	Parms.InAimOffsetsPose = InAimOffsetsPose;
	Parms.InSourcePosePreAimOffsets = InSourcePosePreAimOffsets;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_AimOffset != nullptr)
		*MovementMode_AimOffset = Parms.MovementMode_AimOffset;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_FinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FinalPoseOverride                                   (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MovementMode_FinalPoseOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride_Params Parms{};

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FinalPoseOverride != nullptr)
		*MovementMode_FinalPoseOverride = Parms.MovementMode_FinalPoseOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPoseFullBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FullBodyOverride                                    (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MovementMode_FullBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride_Params Parms{};

	Parms.InputPoseFullBody = InputPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FullBodyOverride != nullptr)
		*MovementMode_FullBodyOverride = Parms.MovementMode_FullBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_SourcePose
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InSourcePoseBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_SourcePose                                          (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MovementMode_SourcePose");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose_Params Parms{};

	Parms.InSourcePoseBase = InSourcePoseBase;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_SourcePose != nullptr)
		*MovementMode_SourcePose = Parms.MovementMode_SourcePose;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_LocomotionAdditives
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLocomotionAdditivesPose                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LocomotionAdditives                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MovementMode_LocomotionAdditives");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives_Params Parms{};

	Parms.InLocomotionAdditivesPose = InLocomotionAdditivesPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionAdditives != nullptr)
		*MovementMode_LocomotionAdditives = Parms.MovementMode_LocomotionAdditives;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_LowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLowerBodyPose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LowerBodyOverride                                   (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MovementMode_LowerBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride_Params Parms{};

	Parms.InLowerBodyPose = InLowerBodyPose;
	Parms.InSourcePose = InSourcePose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride != nullptr)
		*MovementMode_LowerBodyOverride = Parms.MovementMode_LowerBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharacterSkeletalControlPostLegIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostLegIK                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CharacterSkeletalControlPostLegIK                                (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "CharacterSkeletalControlPostLegIK");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK_Params Parms{};

	Parms.InPosePostLegIK = InPosePostLegIK;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSkeletalControlPostLegIK != nullptr)
		*CharacterSkeletalControlPostLegIK = Parms.CharacterSkeletalControlPostLegIK;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyOverride                                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "FullBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride_Params Parms{};

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = Parms.FullBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFinalPoseOverride                                            (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* ItemFinalPoseOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFinalPoseOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride_Params Parms{};

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFinalPoseOverride != nullptr)
		*ItemFinalPoseOverride = Parms.ItemFinalPoseOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemPreIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_PreIK                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemPreIK                                                        (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemPreIK");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK_Params Parms{};

	Parms.InPose_PreIK = InPose_PreIK;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemPreIK != nullptr)
		*ItemPreIK = Parms.ItemPreIK;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodyOverride                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFullBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride_Params Parms{};

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = Parms.ItemFullBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemAimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_AimOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             AimOffsetAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   InPose_UpperLowerPreMeleeAO                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemAimOffset                                                    (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemAimOffset");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset_Params Parms{};

	Parms.InPose_AimOffset = InPose_AimOffset;
	Parms.AimOffsetAlpha = AimOffsetAlpha;
	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = InPose_UpperLowerPreMeleeAO;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAimOffset != nullptr)
		*ItemAimOffset = Parms.ItemAimOffset;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemSkeletalControl                                              (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSkeletalControl");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = Parms.ItemSkeletalControl;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceEnd                                           (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSwimJumpSurfaceEnd");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = Parms.ItemSwimJumpSurfaceEnd;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceLoop                                          (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSwimJumpSurfaceLoop");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = Parms.ItemSwimJumpSurfaceLoop;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpFallLoop                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemSwimJumpFallLoop");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = Parms.ItemSwimJumpFallLoop;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemUpperBody");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody_Params Parms{};

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = Parms.ItemUpperBody;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemIdleAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive_Params Parms{};

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = Parms.ItemIdleAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJumpUpAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = Parms.ItemJumpUpAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJumpLoopAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = Parms.ItemJumpLoopAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFallAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = Parms.ItemFallAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemFallLandAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = Parms.ItemFallLandAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJetPackStartAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = Parms.ItemJetPackStartAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemJetPackJumpAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = Parms.ItemJetPackJumpAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemZipLineStartAdditive");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = Parms.ItemZipLineStartAdditive;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemLowerBodyMovement");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement_Params Parms{};

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = Parms.ItemLowerBodyMovement;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ItemRelaxedEntry");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry_Params Parms{};

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = Parms.ItemRelaxedEntry;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleFinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFinalPoseOverride                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "VehicleFinalPoseOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride_Params Parms{};

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFinalPoseOverride != nullptr)
		*VehicleFinalPoseOverride = Parms.VehicleFinalPoseOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleSplitBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSplitBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBody                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBodyRemoveRoot                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleSplitBodyOverride                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "VehicleSplitBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride_Params Parms{};

	Parms.InPoseSplitBody = InPoseSplitBody;
	Parms.InPoseUpperAndLowerBody = InPoseUpperAndLowerBody;
	Parms.InPoseUpperAndLowerBodyRemoveRoot = InPoseUpperAndLowerBodyRemoveRoot;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleSplitBodyOverride != nullptr)
		*VehicleSplitBodyOverride = Parms.VehicleSplitBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFullBodyOverride                                          (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "VehicleFullBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride_Params Parms{};

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFullBodyOverride != nullptr)
		*VehicleFullBodyOverride = Parms.VehicleFullBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleLowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyDefault                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBodyOverride                                         (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "VehicleLowerBodyOverride");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride_Params Parms{};

	Parms.InPoseLowerBodyDefault = InPoseLowerBodyDefault;
	Parms.InPoseUpperBody = InPoseUpperBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBodyOverride != nullptr)
		*VehicleLowerBodyOverride = Parms.VehicleLowerBodyOverride;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.RigidBodyPBAProto
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseRigidBodyPBA                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   RigidBodyPBAProto                                                (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::RigidBodyPBAProto(const struct FPoseLink& InPoseRigidBodyPBA, struct FPoseLink* RigidBodyPBAProto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "RigidBodyPBAProto");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_RigidBodyPBAProto_Params Parms{};

	Parms.InPoseRigidBodyPBA = InPoseRigidBodyPBA;

	UObject::ProcessEvent(Func, &Parms);

	if (RigidBodyPBAProto != nullptr)
		*RigidBodyPBAProto = Parms.RigidBodyPBAProto;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SourcePoseLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   SourcePoseLayer                                                  (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SourcePoseLayer(struct FPoseLink* SourcePoseLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SourcePoseLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseLayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SourcePoseLayer != nullptr)
		*SourcePoseLayer = Parms.SourcePoseLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.UpperBodyAdjustmentsLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseUpperBodyAdjustments                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPosePostUpperBodySlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   UpperBodyAdjustmentsLayer                                        (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::UpperBodyAdjustmentsLayer(const struct FPoseLink& InPoseUpperBodyAdjustments, const struct FPoseLink& InPosePostUpperBodySlot, struct FPoseLink* UpperBodyAdjustmentsLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "UpperBodyAdjustmentsLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer_Params Parms{};

	Parms.InPoseUpperBodyAdjustments = InPoseUpperBodyAdjustments;
	Parms.InPosePostUpperBodySlot = InPosePostUpperBodySlot;

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBodyAdjustmentsLayer != nullptr)
		*UpperBodyAdjustmentsLayer = Parms.UpperBodyAdjustmentsLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodySlotLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InFullBodyPose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodySlotLayer                                                (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::FullBodySlotLayer(const struct FPoseLink& InFullBodyPose, struct FPoseLink* FullBodySlotLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "FullBodySlotLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer_Params Parms{};

	Parms.InFullBodyPose = InFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodySlotLayer != nullptr)
		*FullBodySlotLayer = Parms.FullBodySlotLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.DebugLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseDebug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   DebugLayer                                                       (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::DebugLayer(const struct FPoseLink& InPoseDebug, struct FPoseLink* DebugLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "DebugLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer_Params Parms{};

	Parms.InPoseDebug = InPoseDebug;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugLayer != nullptr)
		*DebugLayer = Parms.DebugLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FacialCurvesLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseFacialCurves                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FacialCurvesLayer                                                (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::FacialCurvesLayer(const struct FPoseLink& InPoseFacialCurves, struct FPoseLink* FacialCurvesLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "FacialCurvesLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer_Params Parms{};

	Parms.InPoseFacialCurves = InPoseFacialCurves;

	UObject::ProcessEvent(Func, &Parms);

	if (FacialCurvesLayer != nullptr)
		*FacialCurvesLayer = Parms.FacialCurvesLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodyAdditivesLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseFullBodyAdditives                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyAdditivesLayer                                           (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::FullBodyAdditivesLayer(const struct FPoseLink& InPoseFullBodyAdditives, struct FPoseLink* FullBodyAdditivesLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "FullBodyAdditivesLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer_Params Parms{};

	Parms.InPoseFullBodyAdditives = InPoseFullBodyAdditives;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyAdditivesLayer != nullptr)
		*FullBodyAdditivesLayer = Parms.FullBodyAdditivesLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.LocomotionLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InSourcePoseLoco                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LocomotionLayer                                                  (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::LocomotionLayer(const struct FPoseLink& InSourcePoseLoco, struct FPoseLink* LocomotionLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "LocomotionLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer_Params Parms{};

	Parms.InSourcePoseLoco = InSourcePoseLoco;

	UObject::ProcessEvent(Func, &Parms);

	if (LocomotionLayer != nullptr)
		*LocomotionLayer = Parms.LocomotionLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.LowerBodyBlendLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   BasePose                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LowerBody                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LowerBodyBlendLayer                                              (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::LowerBodyBlendLayer(const struct FPoseLink& BasePose, const struct FPoseLink& LowerBody, struct FPoseLink* LowerBodyBlendLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "LowerBodyBlendLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer_Params Parms{};

	Parms.BasePose = BasePose;
	Parms.LowerBody = LowerBody;

	UObject::ProcessEvent(Func, &Parms);

	if (LowerBodyBlendLayer != nullptr)
		*LowerBodyBlendLayer = Parms.LowerBodyBlendLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SourcePoseAdjustmentsLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InSourcePose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SourcePoseAdjustmentsLayer                                       (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SourcePoseAdjustmentsLayer(const struct FPoseLink& InSourcePose, struct FPoseLink* SourcePoseAdjustmentsLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "SourcePoseAdjustmentsLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer_Params Parms{};

	Parms.InSourcePose = InSourcePose;

	UObject::ProcessEvent(Func, &Parms);

	if (SourcePoseAdjustmentsLayer != nullptr)
		*SourcePoseAdjustmentsLayer = Parms.SourcePoseAdjustmentsLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.UpperBodyAimingOffsetsLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   UpperBodyAimingOffsetsLayer                                      (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::UpperBodyAimingOffsetsLayer(const struct FPoseLink& InPose, struct FPoseLink* UpperBodyAimingOffsetsLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "UpperBodyAimingOffsetsLayer");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBodyAimingOffsetsLayer != nullptr)
		*UpperBodyAimingOffsetsLayer = Parms.UpperBodyAimingOffsetsLayer;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimGraph");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_L");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_R");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_playFacialAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_playFacialAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_playFacialAnim");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_playFacialAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_IndigoLaunch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_IndigoLaunch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_IndigoLaunch");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_IndigoLaunch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_L_End");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_End_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_R_End");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_End_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_L_2");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_R_2");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeLoop_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_CreateToolFlyModeLoop_Entered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_CreateToolFlyModeLoop_Entered");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeLoop_Entered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeStart_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_CreateToolFlyModeStart_Entered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_CreateToolFlyModeStart_Entered");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeStart_Entered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_OpenGlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_OpenGlider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_OpenGlider");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_OpenGlider_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.BlueprintProcessAnimInputEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAnimInputEvent*         AnimInputEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::BlueprintProcessAnimInputEvent(class UFortAnimInputEvent* AnimInputEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "BlueprintProcessAnimInputEvent");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_BlueprintProcessAnimInputEvent_Params Parms{};

	Parms.AnimInputEvent = AnimInputEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimationInterface*CallFunc_GetAnimationInterface_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_3                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_TryGetPawnOwner_ReturnValue_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_4                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_5                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent*         K2Node_Event_AnimInputEvent                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent_Bool*    K2Node_DynamicCast_AsFort_Anim_Input_Event_Bool                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNamed_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNamed_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint(int32 EntryPoint, class UFortPlayerAnimationInterface* CallFunc_GetAnimationInterface_ReturnValue, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class UInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class UInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess_4, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_5, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_3, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class UInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class UInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_3, bool K2Node_DynamicCast_bSuccess_8, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue_5, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_4, bool K2Node_DynamicCast_bSuccess_9, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_5, bool K2Node_DynamicCast_bSuccess_10, TScriptInterface<class UInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_4, bool K2Node_DynamicCast_bSuccess_11, TScriptInterface<class UInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_5, bool K2Node_DynamicCast_bSuccess_12, class UFortAnimInputEvent* K2Node_Event_AnimInputEvent, class UFortAnimInputEvent_Bool* K2Node_DynamicCast_AsFort_Anim_Input_Event_Bool, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_IsNamed_ReturnValue, bool CallFunc_IsNamed_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAnimationInterface_ReturnValue = CallFunc_GetAnimationInterface_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn = K2Node_DynamicCast_AsInterface_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_1 = K2Node_DynamicCast_AsInterface_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_2 = CallFunc_TryGetPawnOwner_ReturnValue_2;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_3 = CallFunc_TryGetPawnOwner_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFort_Pawn_2 = K2Node_DynamicCast_AsFort_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsFort_Pawn_3 = K2Node_DynamicCast_AsFort_Pawn_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_2 = K2Node_DynamicCast_AsInterface_Player_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_3 = K2Node_DynamicCast_AsInterface_Player_Pawn_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_4 = CallFunc_TryGetPawnOwner_ReturnValue_4;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_5 = CallFunc_TryGetPawnOwner_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsFort_Pawn_4 = K2Node_DynamicCast_AsFort_Pawn_4;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsFort_Pawn_5 = K2Node_DynamicCast_AsFort_Pawn_5;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_4 = K2Node_DynamicCast_AsInterface_Player_Pawn_4;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn_5 = K2Node_DynamicCast_AsInterface_Player_Pawn_5;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_Event_AnimInputEvent = K2Node_Event_AnimInputEvent;
	Parms.K2Node_DynamicCast_AsFort_Anim_Input_Event_Bool = K2Node_DynamicCast_AsFort_Anim_Input_Event_Bool;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_IsNamed_ReturnValue = CallFunc_IsNamed_ReturnValue;
	Parms.CallFunc_IsNamed_ReturnValue_1 = CallFunc_IsNamed_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.Indigo_Boost__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortnite_M_Avg_Player_AnimBlueprint_C::Indigo_Boost__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "Indigo_Boost__DelegateSignature");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_Indigo_Boost__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MenuScreenDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAnimInstance*     CharPart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MenuScreenDispatcher__DelegateSignature(class UFortPlayerAnimInstance* CharPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MenuScreenDispatcher__DelegateSignature");

	Params::UFortnite_M_Avg_Player_AnimBlueprint_C_MenuScreenDispatcher__DelegateSignature_Params Parms{};

	Parms.CharPart = CharPart;

	UObject::ProcessEvent(Func, &Parms);

}

}


