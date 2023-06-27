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

// 0x79 (0x79 - 0x0)
// Function AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C.Received_Notify
struct UAnimNotify_EliminationBotM2_C_Received_Notify_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A6[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_TeleportationDrone_C*              K2Node_DynamicCast_AsBP_Teleportation_Drone;       // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A7[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A8[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsElimination_Bot_VFXInterface; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
