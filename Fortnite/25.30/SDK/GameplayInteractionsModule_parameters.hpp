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

// 0x30 (0x30 - 0x0)
// Function GameplayInteractionsModule.AITask_UseGameplayInteraction.UseClaimedGameplayInteractionSmartObject
struct UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Params
{
public:
	class UAIController*                         Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectClaimHandle               ClaimHandle;                                       // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLockAILogic;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3049[0x7];                                     // Fixing Size After Last Property
	class UAITask_UseGameplayInteraction*        ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayInteractionsModule.AITask_UseGameplayInteraction.RequestAbort
struct UAITask_UseGameplayInteraction_RequestAbort_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnNotifyBeginReceived
struct UStateTreeTask_PlayContextualAnim_InstanceData_OnNotifyBeginReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3057[0x4];                                     // Fixing Size After Last Property
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData.OnMontageEnded
struct UStateTreeTask_PlayContextualAnim_InstanceData_OnMontageEnded_Params
{
public:
	class UAnimMontage*                          EndedMontage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_305D[0x7];                                     // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
