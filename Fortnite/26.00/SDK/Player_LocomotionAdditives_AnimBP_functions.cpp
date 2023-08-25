#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C
// (None)

class UClass* UPlayer_LocomotionAdditives_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Player_LocomotionAdditives_AnimBP_C");

	return Clss;
}


// Player_LocomotionAdditives_AnimBP_C Player_LocomotionAdditives_AnimBP.Default__Player_LocomotionAdditives_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayer_LocomotionAdditives_AnimBP_C* UPlayer_LocomotionAdditives_AnimBP_C::GetDefaultObj()
{
	static class UPlayer_LocomotionAdditives_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayer_LocomotionAdditives_AnimBP_C*>(UPlayer_LocomotionAdditives_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemFinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFinalPoseOverride                                            (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* ItemFinalPoseOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemFinalPoseOverride");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemFinalPoseOverride_Params Parms{};

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFinalPoseOverride != nullptr)
		*ItemFinalPoseOverride = Parms.ItemFinalPoseOverride;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemUpperBody");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemUpperBody_Params Parms{};

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = Parms.ItemUpperBody;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemIdleAdditive");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemIdleAdditive_Params Parms{};

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = Parms.ItemIdleAdditive;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemJumpUpAdditive");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemJumpUpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = Parms.ItemJumpUpAdditive;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemJumpLoopAdditive");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemJumpLoopAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = Parms.ItemJumpLoopAdditive;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemFallAdditive");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemFallAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = Parms.ItemFallAdditive;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemFallLandAdditive");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemFallLandAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = Parms.ItemFallLandAdditive;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemJetPackStartAdditive");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemJetPackStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = Parms.ItemJetPackStartAdditive;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemJetPackJumpAdditive");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemJetPackJumpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = Parms.ItemJetPackJumpAdditive;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemZipLineStartAdditive");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemZipLineStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = Parms.ItemZipLineStartAdditive;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemLowerBodyMovement");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemLowerBodyMovement_Params Parms{};

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = Parms.ItemLowerBodyMovement;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemRelaxedEntry");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemRelaxedEntry_Params Parms{};

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = Parms.ItemRelaxedEntry;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStart                                                (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemSwimJumpStart");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = Parms.ItemSwimJumpStart;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStartLoop                                            (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemSwimJumpStartLoop");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpStartLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = Parms.ItemSwimJumpStartLoop;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpFallLoop                                             (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemSwimJumpFallLoop");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpFallLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = Parms.ItemSwimJumpFallLoop;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceLoop                                          (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemSwimJumpSurfaceLoop");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpSurfaceLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = Parms.ItemSwimJumpSurfaceLoop;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceEnd                                           (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemSwimJumpSurfaceEnd");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpSurfaceEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = Parms.ItemSwimJumpSurfaceEnd;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemSkeletalControl                                              (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemSkeletalControl");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemSkeletalControl_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = Parms.ItemSkeletalControl;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemAimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_AimOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             AimOffsetAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   InPose_UpperLowerPreMeleeAO                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemAimOffset                                                    (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemAimOffset");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemAimOffset_Params Parms{};

	Parms.InPose_AimOffset = InPose_AimOffset;
	Parms.AimOffsetAlpha = AimOffsetAlpha;
	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = InPose_UpperLowerPreMeleeAO;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAimOffset != nullptr)
		*ItemAimOffset = Parms.ItemAimOffset;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodyOverride                                             (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemFullBodyOverride");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemFullBodyOverride_Params Parms{};

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = Parms.ItemFullBodyOverride;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemPreIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_PreIK                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemPreIK                                                        (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ItemPreIK");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ItemPreIK_Params Parms{};

	Parms.InPose_PreIK = InPose_PreIK;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemPreIK != nullptr)
		*ItemPreIK = Parms.ItemPreIK;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_LowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLowerBodyPose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LowerBodyOverride                                   (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "MovementMode_LowerBodyOverride");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_LowerBodyOverride_Params Parms{};

	Parms.InLowerBodyPose = InLowerBodyPose;
	Parms.InSourcePose = InSourcePose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride != nullptr)
		*MovementMode_LowerBodyOverride = Parms.MovementMode_LowerBodyOverride;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_LocomotionAdditives
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLocomotionAdditivesPose                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LocomotionAdditives                                 (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "MovementMode_LocomotionAdditives");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_LocomotionAdditives_Params Parms{};

	Parms.InLocomotionAdditivesPose = InLocomotionAdditivesPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionAdditives != nullptr)
		*MovementMode_LocomotionAdditives = Parms.MovementMode_LocomotionAdditives;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_SourcePose
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InSourcePoseBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_SourcePose                                          (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "MovementMode_SourcePose");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_SourcePose_Params Parms{};

	Parms.InSourcePoseBase = InSourcePoseBase;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_SourcePose != nullptr)
		*MovementMode_SourcePose = Parms.MovementMode_SourcePose;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPoseFullBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FullBodyOverride                                    (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "MovementMode_FullBodyOverride");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_FullBodyOverride_Params Parms{};

	Parms.InputPoseFullBody = InputPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FullBodyOverride != nullptr)
		*MovementMode_FullBodyOverride = Parms.MovementMode_FullBodyOverride;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_FinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FinalPoseOverride                                   (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "MovementMode_FinalPoseOverride");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_FinalPoseOverride_Params Parms{};

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FinalPoseOverride != nullptr)
		*MovementMode_FinalPoseOverride = Parms.MovementMode_FinalPoseOverride;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_AimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InAimOffsetsPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePosePreAimOffsets                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_AimOffset                                           (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "MovementMode_AimOffset");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_AimOffset_Params Parms{};

	Parms.InAimOffsetsPose = InAimOffsetsPose;
	Parms.InSourcePosePreAimOffsets = InSourcePosePreAimOffsets;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_AimOffset != nullptr)
		*MovementMode_AimOffset = Parms.MovementMode_AimOffset;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_LocomotionAdditives_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "AnimGraph");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ExecuteUbergraph_Player_LocomotionAdditives_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_LocomotionAdditives_AnimBP_C::ExecuteUbergraph_Player_LocomotionAdditives_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_LocomotionAdditives_AnimBP_C", "ExecuteUbergraph_Player_LocomotionAdditives_AnimBP");

	Params::UPlayer_LocomotionAdditives_AnimBP_C_ExecuteUbergraph_Player_LocomotionAdditives_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


