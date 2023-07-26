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
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemFinalPoseOverride
struct UPlayer_Land_AnimBP_C_ItemFinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFinalPoseOverride;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x280 (0x280 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemUpperBody
struct UPlayer_Land_AnimBP_C_ItemUpperBody_Params
{
public:
	struct FPoseLink                             InPoseUpperBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x10(0x25C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_219F[0x4];                                     // Fixing Size After Last Property..
	struct FPoseLink                             ItemUpperBody;                                     // 0x270(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemIdleAdditive
struct UPlayer_Land_AnimBP_C_ItemIdleAdditive_Params
{
public:
	struct FPoseLink                             InPoseIdleAdditive;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemIdleAdditive;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemJumpUpAdditive
struct UPlayer_Land_AnimBP_C_ItemJumpUpAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpUpAdditive;                                // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemJumpLoopAdditive
struct UPlayer_Land_AnimBP_C_ItemJumpLoopAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpLoopAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemFallAdditive
struct UPlayer_Land_AnimBP_C_ItemFallAdditive_Params
{
public:
	struct FPoseLink                             ItemFallAdditive;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemFallLandAdditive
struct UPlayer_Land_AnimBP_C_ItemFallLandAdditive_Params
{
public:
	struct FPoseLink                             ItemFallLandAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemJetPackStartAdditive
struct UPlayer_Land_AnimBP_C_ItemJetPackStartAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemJetPackJumpAdditive
struct UPlayer_Land_AnimBP_C_ItemJetPackJumpAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackJumpAdditive;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemZipLineStartAdditive
struct UPlayer_Land_AnimBP_C_ItemZipLineStartAdditive_Params
{
public:
	struct FPoseLink                             ItemZipLineStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemLowerBodyMovement
struct UPlayer_Land_AnimBP_C_ItemLowerBodyMovement_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyMovement;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyMovement;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemRelaxedEntry
struct UPlayer_Land_AnimBP_C_ItemRelaxedEntry_Params
{
public:
	struct FPoseLink                             InPoseRelaxedEntry;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemRelaxedEntry;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemSwimJumpStart
struct UPlayer_Land_AnimBP_C_ItemSwimJumpStart_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStart;                                 // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemSwimJumpStartLoop
struct UPlayer_Land_AnimBP_C_ItemSwimJumpStartLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStartLoop;                             // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemSwimJumpFallLoop
struct UPlayer_Land_AnimBP_C_ItemSwimJumpFallLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpFallLoop;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemSwimJumpSurfaceLoop
struct UPlayer_Land_AnimBP_C_ItemSwimJumpSurfaceLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceLoop;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemSwimJumpSurfaceEnd
struct UPlayer_Land_AnimBP_C_ItemSwimJumpSurfaceEnd_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceEnd;                            // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemSkeletalControl
struct UPlayer_Land_AnimBP_C_ItemSkeletalControl_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemSkeletalControl;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemAimOffset
struct UPlayer_Land_AnimBP_C_ItemAimOffset_Params
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
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemFullBodyOverride
struct UPlayer_Land_AnimBP_C_ItemFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFullBodyOverride;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ItemPreIK
struct UPlayer_Land_AnimBP_C_ItemPreIK_Params
{
public:
	struct FPoseLink                             InPose_PreIK;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemPreIK;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.AnimGraph
struct UPlayer_Land_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.OnLandingBecomesRelevant
struct UPlayer_Land_AnimBP_C_OnLandingBecomesRelevant_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.OnLandingUpdate
struct UPlayer_Land_AnimBP_C_OnLandingUpdate_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FAnimationStateResultReference        CallFunc_ConvertToAnimationStateResult_AnimationState; // 0x20(0x10)(NoDestructor)
	enum class EAnimNodeReferenceConversionResult CallFunc_ConvertToAnimationStateResult_Result;     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21A0[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21A1[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Player_Land_AnimBP.Player_Land_AnimBP_C.ExecuteUbergraph_Player_Land_AnimBP
struct UPlayer_Land_AnimBP_C_ExecuteUbergraph_Player_Land_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
