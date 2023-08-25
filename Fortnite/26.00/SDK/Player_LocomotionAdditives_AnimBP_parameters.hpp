#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemFinalPoseOverride
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemFinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFinalPoseOverride;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x280 (0x280 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemUpperBody
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemUpperBody_Params
{
public:
	struct FPoseLink                             InPoseUpperBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x10(0x25C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_7663[0x4];                                     // Fixing Size After Last Property 
	struct FPoseLink                             ItemUpperBody;                                     // 0x270(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemIdleAdditive
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemIdleAdditive_Params
{
public:
	struct FPoseLink                             InPoseIdleAdditive;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemIdleAdditive;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemJumpUpAdditive
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemJumpUpAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpUpAdditive;                                // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemJumpLoopAdditive
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemJumpLoopAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpLoopAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemFallAdditive
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemFallAdditive_Params
{
public:
	struct FPoseLink                             ItemFallAdditive;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemFallLandAdditive
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemFallLandAdditive_Params
{
public:
	struct FPoseLink                             ItemFallLandAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemJetPackStartAdditive
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemJetPackStartAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemJetPackJumpAdditive
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemJetPackJumpAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackJumpAdditive;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemZipLineStartAdditive
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemZipLineStartAdditive_Params
{
public:
	struct FPoseLink                             ItemZipLineStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemLowerBodyMovement
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemLowerBodyMovement_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyMovement;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyMovement;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemRelaxedEntry
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemRelaxedEntry_Params
{
public:
	struct FPoseLink                             InPoseRelaxedEntry;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemRelaxedEntry;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpStart
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpStart_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStart;                                 // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpStartLoop
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpStartLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStartLoop;                             // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpFallLoop
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpFallLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpFallLoop;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpSurfaceLoop
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpSurfaceLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceLoop;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSwimJumpSurfaceEnd
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemSwimJumpSurfaceEnd_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceEnd;                            // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemSkeletalControl
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemSkeletalControl_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemSkeletalControl;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemAimOffset
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemAimOffset_Params
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
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemFullBodyOverride
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFullBodyOverride;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ItemPreIK
struct UPlayer_LocomotionAdditives_AnimBP_C_ItemPreIK_Params
{
public:
	struct FPoseLink                             InPose_PreIK;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemPreIK;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_LowerBodyOverride
struct UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_LowerBodyOverride_Params
{
public:
	struct FPoseLink                             InLowerBodyPose;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InSourcePose;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LowerBodyOverride;                    // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_LocomotionAdditives
struct UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_LocomotionAdditives_Params
{
public:
	struct FPoseLink                             InLocomotionAdditivesPose;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LocomotionAdditives;                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_SourcePose
struct UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_SourcePose_Params
{
public:
	struct FPoseLink                             InSourcePoseBase;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_SourcePose;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_FullBodyOverride
struct UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_FullBodyOverride_Params
{
public:
	struct FPoseLink                             InputPoseFullBody;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_FullBodyOverride;                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_FinalPoseOverride
struct UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_FinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_FinalPoseOverride;                    // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.MovementMode_AimOffset
struct UPlayer_LocomotionAdditives_AnimBP_C_MovementMode_AimOffset_Params
{
public:
	struct FPoseLink                             InAimOffsetsPose;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InSourcePosePreAimOffsets;                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_AimOffset;                            // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.AnimGraph
struct UPlayer_LocomotionAdditives_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C.ExecuteUbergraph_Player_LocomotionAdditives_AnimBP
struct UPlayer_LocomotionAdditives_AnimBP_C_ExecuteUbergraph_Player_LocomotionAdditives_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


