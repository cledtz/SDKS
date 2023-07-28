#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_AimOffset
struct UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset_Params
{
public:
	struct FPoseLink                             InAimOffsetsPose;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InSourcePosePreAimOffsets;                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_AimOffset;                            // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_FinalPoseOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_FinalPoseOverride;                    // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_FullBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride_Params
{
public:
	struct FPoseLink                             InputPoseFullBody;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_FullBodyOverride;                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_SourcePose
struct UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose_Params
{
public:
	struct FPoseLink                             InSourcePoseBase;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_SourcePose;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_LocomotionAdditives
struct UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives_Params
{
public:
	struct FPoseLink                             InLocomotionAdditivesPose;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LocomotionAdditives;                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MovementMode_LowerBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride_Params
{
public:
	struct FPoseLink                             InLowerBodyPose;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InSourcePose;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LowerBodyOverride;                    // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharacterSkeletalControlPostLegIK
struct UFortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK_Params
{
public:
	struct FPoseLink                             InPosePostLegIK;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             CharacterSkeletalControlPostLegIK;                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride_Params
{
public:
	struct FPoseLink                             PassThroughFullBodyPose;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBodyOverride;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFinalPoseOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFinalPoseOverride;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemPreIK
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK_Params
{
public:
	struct FPoseLink                             InPose_PreIK;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemPreIK;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFullBodyOverride;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemAimOffset
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset_Params
{
public:
	struct FPoseLink                             InPose_AimOffset;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       AimOffsetAlpha;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Yaw;                                               // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Pitch;                                             // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             InPose_UpperLowerPreMeleeAO;                       // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemAimOffset;                                     // 0x38(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSkeletalControl
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemSkeletalControl;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceEnd
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceEnd;                            // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceLoop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceLoop;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpFallLoop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpFallLoop;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStartLoop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStartLoop;                             // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStart
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStart;                                 // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x280 (0x280 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemUpperBody
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody_Params
{
public:
	struct FPoseLink                             InPoseUpperBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x10(0x25C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_912B[0x4];                                     // Fixing Size After Last Property..
	struct FPoseLink                             ItemUpperBody;                                     // 0x270(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemIdleAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive_Params
{
public:
	struct FPoseLink                             InPoseIdleAdditive;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemIdleAdditive;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpUpAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpUpAdditive;                                // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpLoopAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpLoopAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive_Params
{
public:
	struct FPoseLink                             ItemFallAdditive;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallLandAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive_Params
{
public:
	struct FPoseLink                             ItemFallLandAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackJumpAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackJumpAdditive;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemZipLineStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive_Params
{
public:
	struct FPoseLink                             ItemZipLineStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyMovement
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyMovement;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyMovement;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemRelaxedEntry
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry_Params
{
public:
	struct FPoseLink                             InPoseRelaxedEntry;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemRelaxedEntry;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleFinalPoseOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleFinalPoseOverride;                          // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleSplitBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseSplitBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperAndLowerBody;                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperAndLowerBodyRemoveRoot;                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleSplitBodyOverride;                          // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleFullBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleFullBodyOverride;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleLowerBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyDefault;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperBody;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleLowerBodyOverride;                          // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.RigidBodyPBAProto
struct UFortnite_M_Avg_Player_AnimBlueprint_C_RigidBodyPBAProto_Params
{
public:
	struct FPoseLink                             InPoseRigidBodyPBA;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             RigidBodyPBAProto;                                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SourcePoseLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseLayer_Params
{
public:
	struct FPoseLink                             SourcePoseLayer;                                   // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.UpperBodyAdjustmentsLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer_Params
{
public:
	struct FPoseLink                             InPoseUpperBodyAdjustments;                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPosePostUpperBodySlot;                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             UpperBodyAdjustmentsLayer;                         // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodySlotLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer_Params
{
public:
	struct FPoseLink                             InFullBodyPose;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBodySlotLayer;                                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.DebugLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer_Params
{
public:
	struct FPoseLink                             InPoseDebug;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             DebugLayer;                                        // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FacialCurvesLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer_Params
{
public:
	struct FPoseLink                             InPoseFacialCurves;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FacialCurvesLayer;                                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodyAdditivesLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer_Params
{
public:
	struct FPoseLink                             InPoseFullBodyAdditives;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBodyAdditivesLayer;                            // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.LocomotionLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer_Params
{
public:
	struct FPoseLink                             InSourcePoseLoco;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             LocomotionLayer;                                   // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.LowerBodyBlendLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer_Params
{
public:
	struct FPoseLink                             BasePose;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             LowerBody;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             LowerBodyBlendLayer;                               // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SourcePoseAdjustmentsLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer_Params
{
public:
	struct FPoseLink                             InSourcePose;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SourcePoseAdjustmentsLayer;                        // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.UpperBodyAimingOffsetsLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             UpperBodyAimingOffsetsLayer;                       // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimGraph
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_playFacialAnim
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_playFacialAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_IndigoLaunch
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_IndigoLaunch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_End
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_End
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_2
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_2
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeLoop_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeLoop_Entered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeStart_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeStart_Entered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_OpenGlider
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_OpenGlider_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.BlueprintProcessAnimInputEvent
struct UFortnite_M_Avg_Player_AnimBlueprint_C_BlueprintProcessAnimInputEvent_Params
{
public:
	class UFortAnimInputEvent*                   AnimInputEvent;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x15B (0x15B - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_912C[0x4];                                     // Fixing Size After Last Property..
	class UFortPlayerAnimationInterface*         CallFunc_GetAnimationInterface_ReturnValue;        // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_912D[0x7];                                     // Fixing Size After Last Property..
	class UFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_912E[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsInterface_Player_Pawn;        // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_912F[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsInterface_Player_Pawn_1;      // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9130[0x7];                                     // Fixing Size After Last Property..
	class UGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortGameStateZone*                    K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9131[0x7];                                     // Fixing Size After Last Property..
	class UPawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_2;            // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_3;            // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_2;                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9132[0x7];                                     // Fixing Size After Last Property..
	class UFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_3;                  // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9133[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsInterface_Player_Pawn_2;      // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9134[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsInterface_Player_Pawn_3;      // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9135[0x7];                                     // Fixing Size After Last Property..
	class UPawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_4;            // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_5;            // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_4;                  // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9136[0x7];                                     // Fixing Size After Last Property..
	class UFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_5;                  // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9137[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsInterface_Player_Pawn_4;      // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9138[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsInterface_Player_Pawn_5;      // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9139[0x7];                                     // Fixing Size After Last Property..
	class UFortAnimInputEvent*                   K2Node_Event_AnimInputEvent;                       // 0x148(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAnimInputEvent_Bool*              K2Node_DynamicCast_AsFort_Anim_Input_Event_Bool;   // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNamed_ReturnValue;                      // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNamed_ReturnValue_1;                    // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.Indigo_Boost__DelegateSignature
struct UFortnite_M_Avg_Player_AnimBlueprint_C_Indigo_Boost__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MenuScreenDispatcher__DelegateSignature
struct UFortnite_M_Avg_Player_AnimBlueprint_C_MenuScreenDispatcher__DelegateSignature_Params
{
public:
	class UFortPlayerAnimInstance*               CharPart;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
