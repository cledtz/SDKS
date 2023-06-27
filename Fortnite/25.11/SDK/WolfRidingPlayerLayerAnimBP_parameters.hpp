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
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
struct UWolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleFinalPoseOverride;                          // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
struct UWolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleFullBodyOverride;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
struct UWolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyDefault;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperBody;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleLowerBodyOverride;                          // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
struct UWolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseSplitBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperAndLowerBody;                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperAndLowerBodyRemoveRoot;                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleSplitBodyOverride;                          // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.AnimGraph
struct UWolfRidingPlayerLayerAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.GetMainAnimBPData_Wolf
struct UWolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf_Params
{
public:
	class UObject*                               AnimInstance;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGrandma_AnimBP_C*                     K2Node_DynamicCast_AsGrandma_Anim_BP;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DD7[0x6];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_BodyRoll_ImplicitCast;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Turn_in_Place_Rotation_Speed_ImplicitCast; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_WolfSpeed2D_ImplicitCast;       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766
struct UWolfRidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D
struct UWolfRidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93
struct UWolfRidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.BlueprintCollectRidableAnimBPData
struct UWolfRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData_Params
{
public:
	class UAnimInstance*                         RidableAnimInstance;                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.UpdateBoostPlayRate
struct UWolfRidingPlayerLayerAnimBP_C_UpdateBoostPlayRate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.PlaceHandIKTargets
struct UWolfRidingPlayerLayerAnimBP_C_PlaceHandIKTargets_Params
{
public:
};

// 0x2C (0x2C - 0x0)
// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.ExecuteUbergraph_WolfRidingPlayerLayerAnimBP
struct UWolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DD8[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         K2Node_Event_RidableAnimInstance;                  // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet___FloatProperty_24_ImplicitCast; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet___FloatProperty_25_ImplicitCast; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_BoostPlayRate_ImplicitCast;     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
