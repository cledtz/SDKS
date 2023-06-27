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
// Function EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.AnimGraph
struct UEmberRae_Axe_L_AnimBP_Post_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.BlueprintUpdateAnimation
struct UEmberRae_Axe_L_AnimBP_Post_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.BlueprintInitializeAnimation
struct UEmberRae_Axe_L_AnimBP_Post_C_BlueprintInitializeAnimation_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.ExecuteUbergraph_EmberRae_Axe_L_AnimBP_Post
struct UEmberRae_Axe_L_AnimBP_Post_C_ExecuteUbergraph_EmberRae_Axe_L_AnimBP_Post_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BE6[0x4];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                CallFunc_GetPartSkeletalMeshComponent_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput; // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue_2;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BE7[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast_1;     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast_2;     // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
