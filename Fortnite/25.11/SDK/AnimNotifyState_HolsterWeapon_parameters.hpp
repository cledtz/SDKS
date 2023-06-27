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

// 0x5 (0x5 - 0x0)
// Function AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.CanApplyHolster
struct UAnimNotifyState_HolsterWeapon_C_CanApplyHolster_Params
{
public:
	class FName                                  HolsterId;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyEnd
struct UAnimNotifyState_HolsterWeapon_C_Received_NotifyEnd_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A53[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A54[0x4];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyBegin
struct UAnimNotifyState_HolsterWeapon_C_Received_NotifyBegin_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        TotalDuration;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A55[0x4];                                     // Fixing Size After Last Property..
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A56[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A57[0x4];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
