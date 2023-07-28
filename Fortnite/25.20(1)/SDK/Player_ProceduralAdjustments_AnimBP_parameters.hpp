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

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.FullBodyOverride
struct UPlayer_ProceduralAdjustments_AnimBP_C_FullBodyOverride_Params
{
public:
	struct FPoseLink                             PassThroughFullBodyPose;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBodyOverride;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.CharacterSkeletalControlPostLegIK
struct UPlayer_ProceduralAdjustments_AnimBP_C_CharacterSkeletalControlPostLegIK_Params
{
public:
	struct FPoseLink                             InPosePostLegIK;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             CharacterSkeletalControlPostLegIK;                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemFinalPoseOverride
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemFinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFinalPoseOverride;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x280 (0x280 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemUpperBody
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemUpperBody_Params
{
public:
	struct FPoseLink                             InPoseUpperBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x10(0x25C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_8D4A[0x4];                                     // Fixing Size After Last Property..
	struct FPoseLink                             ItemUpperBody;                                     // 0x270(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemIdleAdditive
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemIdleAdditive_Params
{
public:
	struct FPoseLink                             InPoseIdleAdditive;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemIdleAdditive;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemJumpUpAdditive
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemJumpUpAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpUpAdditive;                                // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemJumpLoopAdditive
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemJumpLoopAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpLoopAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemFallAdditive
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemFallAdditive_Params
{
public:
	struct FPoseLink                             ItemFallAdditive;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemFallLandAdditive
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemFallLandAdditive_Params
{
public:
	struct FPoseLink                             ItemFallLandAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemJetPackStartAdditive
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemJetPackStartAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemJetPackJumpAdditive
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemJetPackJumpAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackJumpAdditive;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemZipLineStartAdditive
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemZipLineStartAdditive_Params
{
public:
	struct FPoseLink                             ItemZipLineStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemLowerBodyMovement
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemLowerBodyMovement_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyMovement;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyMovement;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemRelaxedEntry
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemRelaxedEntry_Params
{
public:
	struct FPoseLink                             InPoseRelaxedEntry;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemRelaxedEntry;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSwimJumpStart
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemSwimJumpStart_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStart;                                 // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSwimJumpStartLoop
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemSwimJumpStartLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStartLoop;                             // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSwimJumpFallLoop
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemSwimJumpFallLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpFallLoop;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSwimJumpSurfaceLoop
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemSwimJumpSurfaceLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceLoop;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSwimJumpSurfaceEnd
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemSwimJumpSurfaceEnd_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceEnd;                            // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemSkeletalControl
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemSkeletalControl_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemSkeletalControl;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemAimOffset
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemAimOffset_Params
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
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemFullBodyOverride
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFullBodyOverride;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ItemPreIK
struct UPlayer_ProceduralAdjustments_AnimBP_C_ItemPreIK_Params
{
public:
	struct FPoseLink                             InPose_PreIK;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemPreIK;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.PostIKAdjustmentsLayer
struct UPlayer_ProceduralAdjustments_AnimBP_C_PostIKAdjustmentsLayer_Params
{
public:
	struct FPoseLink                             InPosePostIkAdjustments;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PostIKAdjustmentsLayer;                            // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.PreIKAdjustmentsLayer
struct UPlayer_ProceduralAdjustments_AnimBP_C_PreIKAdjustmentsLayer_Params
{
public:
	struct FPoseLink                             InPosePreIKAdjustments;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PreIKAdjustmentsLayer;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.PlevisAndFeetAdjustmentsLayer
struct UPlayer_ProceduralAdjustments_AnimBP_C_PlevisAndFeetAdjustmentsLayer_Params
{
public:
	struct FPoseLink                             InPosePelvisAndFeetAdjustments;                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PlevisAndFeetAdjustmentsLayer;                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.PushCannonAdjustmentsLayer
struct UPlayer_ProceduralAdjustments_AnimBP_C_PushCannonAdjustmentsLayer_Params
{
public:
	struct FPoseLink                             InPosePushCannonAdjustments;                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PushCannonAdjustmentsLayer;                        // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ParaGliderAdjustmentsLayer
struct UPlayer_ProceduralAdjustments_AnimBP_C_ParaGliderAdjustmentsLayer_Params
{
public:
	struct FPoseLink                             InPoseParaGliderAdjustments;                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ParaGliderAdjustmentsLayer;                        // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.HandIKFixUpLayer
struct UPlayer_ProceduralAdjustments_AnimBP_C_HandIKFixUpLayer_Params
{
public:
	struct FPoseLink                             InPoseHandIk;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             HandIKFixUpLayer;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.AnimGraph
struct UPlayer_ProceduralAdjustments_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPosePostTurnInPlace;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C.ExecuteUbergraph_Player_ProceduralAdjustments_AnimBP
struct UPlayer_ProceduralAdjustments_AnimBP_C_ExecuteUbergraph_Player_ProceduralAdjustments_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
