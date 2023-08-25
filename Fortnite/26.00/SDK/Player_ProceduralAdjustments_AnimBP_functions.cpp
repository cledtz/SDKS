#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C
// (None)

class UClass* UPlayer_ProceduralAdjustments_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Player_ProceduralAdjustments_AnimBP_C");

	return Clss;
}


// Player_ProceduralAdjustments_AnimBP_C Player_ProceduralAdjustments_AnimBP.Default__Player_ProceduralAdjustments_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayer_ProceduralAdjustments_AnimBP_C* UPlayer_ProceduralAdjustments_AnimBP_C::GetDefaultObj()
{
	static class UPlayer_ProceduralAdjustments_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayer_ProceduralAdjustments_AnimBP_C*>(UPlayer_ProceduralAdjustments_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyOverride                                                 (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "FullBodyOverride");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_FullBodyOverride_Params Parms{};

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = Parms.FullBodyOverride;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.CharacterSkeletalControlPostLegIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostLegIK                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CharacterSkeletalControlPostLegIK                                (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "CharacterSkeletalControlPostLegIK");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_CharacterSkeletalControlPostLegIK_Params Parms{};

	Parms.InPosePostLegIK = InPosePostLegIK;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSkeletalControlPostLegIK != nullptr)
		*CharacterSkeletalControlPostLegIK = Parms.CharacterSkeletalControlPostLegIK;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemFinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFinalPoseOverride                                            (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* ItemFinalPoseOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemFinalPoseOverride");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemFinalPoseOverride_Params Parms{};

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFinalPoseOverride != nullptr)
		*ItemFinalPoseOverride = Parms.ItemFinalPoseOverride;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemUpperBody");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemUpperBody_Params Parms{};

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = Parms.ItemUpperBody;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemIdleAdditive");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemIdleAdditive_Params Parms{};

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = Parms.ItemIdleAdditive;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemJumpUpAdditive");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemJumpUpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = Parms.ItemJumpUpAdditive;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemJumpLoopAdditive");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemJumpLoopAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = Parms.ItemJumpLoopAdditive;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemFallAdditive");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemFallAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = Parms.ItemFallAdditive;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemFallLandAdditive");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemFallLandAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = Parms.ItemFallLandAdditive;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemJetPackStartAdditive");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemJetPackStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = Parms.ItemJetPackStartAdditive;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemJetPackJumpAdditive");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemJetPackJumpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = Parms.ItemJetPackJumpAdditive;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemZipLineStartAdditive");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemZipLineStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = Parms.ItemZipLineStartAdditive;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemLowerBodyMovement");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemLowerBodyMovement_Params Parms{};

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = Parms.ItemLowerBodyMovement;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemRelaxedEntry");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemRelaxedEntry_Params Parms{};

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = Parms.ItemRelaxedEntry;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpFallLoop                                             (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemSwimJumpFallLoop");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemSwimJumpFallLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = Parms.ItemSwimJumpFallLoop;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceLoop                                          (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemSwimJumpSurfaceLoop");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemSwimJumpSurfaceLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = Parms.ItemSwimJumpSurfaceLoop;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceEnd                                           (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemSwimJumpSurfaceEnd");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemSwimJumpSurfaceEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = Parms.ItemSwimJumpSurfaceEnd;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemSkeletalControl                                              (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemSkeletalControl");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemSkeletalControl_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = Parms.ItemSkeletalControl;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemAimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_AimOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             AimOffsetAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   InPose_UpperLowerPreMeleeAO                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemAimOffset                                                    (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemAimOffset");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemAimOffset_Params Parms{};

	Parms.InPose_AimOffset = InPose_AimOffset;
	Parms.AimOffsetAlpha = AimOffsetAlpha;
	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = InPose_UpperLowerPreMeleeAO;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAimOffset != nullptr)
		*ItemAimOffset = Parms.ItemAimOffset;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodyOverride                                             (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemFullBodyOverride");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemFullBodyOverride_Params Parms{};

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = Parms.ItemFullBodyOverride;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemPreIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_PreIK                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemPreIK                                                        (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ItemPreIK");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ItemPreIK_Params Parms{};

	Parms.InPose_PreIK = InPose_PreIK;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemPreIK != nullptr)
		*ItemPreIK = Parms.ItemPreIK;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.PostIKAdjustmentsLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePostIkAdjustments                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PostIKAdjustmentsLayer                                           (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::PostIKAdjustmentsLayer(const struct FPoseLink& InPosePostIkAdjustments, struct FPoseLink* PostIKAdjustmentsLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "PostIKAdjustmentsLayer");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_PostIKAdjustmentsLayer_Params Parms{};

	Parms.InPosePostIkAdjustments = InPosePostIkAdjustments;

	UObject::ProcessEvent(Func, &Parms);

	if (PostIKAdjustmentsLayer != nullptr)
		*PostIKAdjustmentsLayer = Parms.PostIKAdjustmentsLayer;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.PreIKAdjustmentsLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePreIKAdjustments                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PreIKAdjustmentsLayer                                            (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::PreIKAdjustmentsLayer(const struct FPoseLink& InPosePreIKAdjustments, struct FPoseLink* PreIKAdjustmentsLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "PreIKAdjustmentsLayer");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_PreIKAdjustmentsLayer_Params Parms{};

	Parms.InPosePreIKAdjustments = InPosePreIKAdjustments;

	UObject::ProcessEvent(Func, &Parms);

	if (PreIKAdjustmentsLayer != nullptr)
		*PreIKAdjustmentsLayer = Parms.PreIKAdjustmentsLayer;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.PlevisAndFeetAdjustmentsLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePelvisAndFeetAdjustments                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PlevisAndFeetAdjustmentsLayer                                    (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::PlevisAndFeetAdjustmentsLayer(const struct FPoseLink& InPosePelvisAndFeetAdjustments, struct FPoseLink* PlevisAndFeetAdjustmentsLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "PlevisAndFeetAdjustmentsLayer");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_PlevisAndFeetAdjustmentsLayer_Params Parms{};

	Parms.InPosePelvisAndFeetAdjustments = InPosePelvisAndFeetAdjustments;

	UObject::ProcessEvent(Func, &Parms);

	if (PlevisAndFeetAdjustmentsLayer != nullptr)
		*PlevisAndFeetAdjustmentsLayer = Parms.PlevisAndFeetAdjustmentsLayer;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.PushCannonAdjustmentsLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePushCannonAdjustments                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PushCannonAdjustmentsLayer                                       (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::PushCannonAdjustmentsLayer(const struct FPoseLink& InPosePushCannonAdjustments, struct FPoseLink* PushCannonAdjustmentsLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "PushCannonAdjustmentsLayer");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_PushCannonAdjustmentsLayer_Params Parms{};

	Parms.InPosePushCannonAdjustments = InPosePushCannonAdjustments;

	UObject::ProcessEvent(Func, &Parms);

	if (PushCannonAdjustmentsLayer != nullptr)
		*PushCannonAdjustmentsLayer = Parms.PushCannonAdjustmentsLayer;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ParaGliderAdjustmentsLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseParaGliderAdjustments                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ParaGliderAdjustmentsLayer                                       (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::ParaGliderAdjustmentsLayer(const struct FPoseLink& InPoseParaGliderAdjustments, struct FPoseLink* ParaGliderAdjustmentsLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ParaGliderAdjustmentsLayer");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ParaGliderAdjustmentsLayer_Params Parms{};

	Parms.InPoseParaGliderAdjustments = InPoseParaGliderAdjustments;

	UObject::ProcessEvent(Func, &Parms);

	if (ParaGliderAdjustmentsLayer != nullptr)
		*ParaGliderAdjustmentsLayer = Parms.ParaGliderAdjustmentsLayer;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.HandIKFixUpLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseHandIk                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   HandIKFixUpLayer                                                 (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::HandIKFixUpLayer(const struct FPoseLink& InPoseHandIk, struct FPoseLink* HandIKFixUpLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "HandIKFixUpLayer");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_HandIKFixUpLayer_Params Parms{};

	Parms.InPoseHandIk = InPoseHandIk;

	UObject::ProcessEvent(Func, &Parms);

	if (HandIKFixUpLayer != nullptr)
		*HandIKFixUpLayer = Parms.HandIKFixUpLayer;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePostTurnInPlace                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_ProceduralAdjustments_AnimBP_C::AnimGraph(const struct FPoseLink& InPosePostTurnInPlace, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "AnimGraph");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPosePostTurnInPlace = InPosePostTurnInPlace;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ExecuteUbergraph_Player_ProceduralAdjustments_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_ProceduralAdjustments_AnimBP_C::ExecuteUbergraph_Player_ProceduralAdjustments_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_ProceduralAdjustments_AnimBP_C", "ExecuteUbergraph_Player_ProceduralAdjustments_AnimBP");

	Params::UPlayer_ProceduralAdjustments_AnimBP_C_ExecuteUbergraph_Player_ProceduralAdjustments_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


