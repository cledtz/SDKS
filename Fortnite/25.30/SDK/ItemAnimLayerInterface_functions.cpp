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


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFinalPoseOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFinalPoseOverride                                            (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* ItemFinalPoseOverride)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemFinalPoseOverride");

	Params::UItemAnimLayerInterface_C_ItemFinalPoseOverride_Params Parms;

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFinalPoseOverride != nullptr)
		*ItemFinalPoseOverride = Parms.ItemFinalPoseOverride;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemPreIK
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_PreIK                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemPreIK                                                        (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemPreIK");

	Params::UItemAnimLayerInterface_C_ItemPreIK_Params Parms;

	Parms.InPose_PreIK = InPose_PreIK;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemPreIK != nullptr)
		*ItemPreIK = Parms.ItemPreIK;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodyOverride                                             (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemFullBodyOverride");

	Params::UItemAnimLayerInterface_C_ItemFullBodyOverride_Params Parms;

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = Parms.ItemFullBodyOverride;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemAimOffset
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_AimOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             AimOffsetAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   InPose_UpperLowerPreMeleeAO                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemAimOffset                                                    (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemAimOffset");

	Params::UItemAnimLayerInterface_C_ItemAimOffset_Params Parms;

	Parms.InPose_AimOffset = InPose_AimOffset;
	Parms.AimOffsetAlpha = AimOffsetAlpha;
	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = InPose_UpperLowerPreMeleeAO;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAimOffset != nullptr)
		*ItemAimOffset = Parms.ItemAimOffset;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemSkeletalControl                                              (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSkeletalControl");

	Params::UItemAnimLayerInterface_C_ItemSkeletalControl_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = Parms.ItemSkeletalControl;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceEnd                                           (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpSurfaceEnd");

	Params::UItemAnimLayerInterface_C_ItemSwimJumpSurfaceEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = Parms.ItemSwimJumpSurfaceEnd;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceLoop                                          (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpSurfaceLoop");

	Params::UItemAnimLayerInterface_C_ItemSwimJumpSurfaceLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = Parms.ItemSwimJumpSurfaceLoop;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpFallLoop                                             (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpFallLoop");

	Params::UItemAnimLayerInterface_C_ItemSwimJumpFallLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = Parms.ItemSwimJumpFallLoop;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStartLoop                                            (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpStartLoop");

	Params::UItemAnimLayerInterface_C_ItemSwimJumpStartLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = Parms.ItemSwimJumpStartLoop;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStart                                                (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpStart");

	Params::UItemAnimLayerInterface_C_ItemSwimJumpStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = Parms.ItemSwimJumpStart;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemRelaxedEntry");

	Params::UItemAnimLayerInterface_C_ItemRelaxedEntry_Params Parms;

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = Parms.ItemRelaxedEntry;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyMovement");

	Params::UItemAnimLayerInterface_C_ItemLowerBodyMovement_Params Parms;

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = Parms.ItemLowerBodyMovement;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemZipLineStartAdditive");

	Params::UItemAnimLayerInterface_C_ItemZipLineStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = Parms.ItemZipLineStartAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJetPackJumpAdditive");

	Params::UItemAnimLayerInterface_C_ItemJetPackJumpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = Parms.ItemJetPackJumpAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJetPackStartAdditive");

	Params::UItemAnimLayerInterface_C_ItemJetPackStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = Parms.ItemJetPackStartAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemFallLandAdditive");

	Params::UItemAnimLayerInterface_C_ItemFallLandAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = Parms.ItemFallLandAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemFallAdditive");

	Params::UItemAnimLayerInterface_C_ItemFallAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = Parms.ItemFallAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJumpLoopAdditive");

	Params::UItemAnimLayerInterface_C_ItemJumpLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = Parms.ItemJumpLoopAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJumpUpAdditive");

	Params::UItemAnimLayerInterface_C_ItemJumpUpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = Parms.ItemJumpUpAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemIdleAdditive");

	Params::UItemAnimLayerInterface_C_ItemIdleAdditive_Params Parms;

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = Parms.ItemIdleAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemUpperBody
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UItemAnimLayerInterface_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemUpperBody");

	Params::UItemAnimLayerInterface_C_ItemUpperBody_Params Parms;

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = Parms.ItemUpperBody;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
