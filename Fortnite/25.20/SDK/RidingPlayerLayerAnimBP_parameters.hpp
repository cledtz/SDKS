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
// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
struct URidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleFinalPoseOverride;                          // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
struct URidingPlayerLayerAnimBP_C_VehicleFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleFullBodyOverride;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
struct URidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyDefault;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperBody;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleLowerBodyOverride;                          // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
struct URidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseSplitBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperAndLowerBody;                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperAndLowerBodyRemoveRoot;                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleSplitBodyOverride;                          // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.AnimGraph
struct URidingPlayerLayerAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976
struct URidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA
struct URidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.BlueprintUpdateAnimation
struct URidingPlayerLayerAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1FC (0x1FC - 0x0)
// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.ExecuteUbergraph_RidingPlayerLayerAnimBP
struct URidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0A9[0x2];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue_1;                     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0AA[0x6];                                     // Fixing Size After Last Property..
	class URiderComponent*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCreatureBaseRidableComponent_C*       K2Node_DynamicCast_AsCreature_Base_Ridable_Component; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0AB[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0AC[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_DeltaTimeX;                           // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0AD[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0AE[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0AF[0x6];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_GetBaseAimRotation_ReturnValue;           // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B0[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_GetBaseAimRotation_ReturnValue_1;         // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B1[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeAxis_ReturnValue;                // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCurrentMontage_ReturnValue;            // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x107(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B2[0x6];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x110(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_TransformRotation_ReturnValue;            // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll_2;                      // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_2;                     // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_2;                       // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B3[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B4[0x7];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_2;     // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B5[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_StructMemberSet_Yaw_ImplicitCast;           // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B6[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeAxis_Angle_ImplicitCast;         // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B7[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableSet_LowerBodyYaw_ImplicitCast;      // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;   // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
