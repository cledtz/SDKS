#pragma once

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
// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.CharacterSkeletalControlPostLegIK
struct UPlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK_Params
{
public:
	struct FPoseLink                             InPosePostLegIK;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             CharacterSkeletalControlPostLegIK;                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.FullBodyOverride
struct UPlayerAnimOverrideLayerInterface_C_FullBodyOverride_Params
{
public:
	struct FPoseLink                             PassThroughFullBodyPose;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBodyOverride;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
