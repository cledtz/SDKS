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
// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.CharacterSkeletalControlPostLegIK
struct UMANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK_Params
{
public:
	struct FPoseLink                             InPosePostLegIK;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             CharacterSkeletalControlPostLegIK;                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.FullBodyOverride
struct UMANG_PatrolLayerAnimBP_C_FullBodyOverride_Params
{
public:
	struct FPoseLink                             PassThroughFullBodyPose;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBodyOverride;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimGraph
struct UMANG_PatrolLayerAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.ExecuteUbergraph_MANG_PatrolLayerAnimBP
struct UMANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
