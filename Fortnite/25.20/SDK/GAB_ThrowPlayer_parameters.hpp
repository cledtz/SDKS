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

// 0x2C (0x2C - 0x0)
// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Completed_45B7744E4902B26207BAA1954E6BCDEE
struct UGAB_ThrowPlayer_C_Completed_45B7744E4902B26207BAA1954E6BCDEE_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Cancelled_45B7744E4902B26207BAA1954E6BCDEE
struct UGAB_ThrowPlayer_C_Cancelled_45B7744E4902B26207BAA1954E6BCDEE_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Triggered_45B7744E4902B26207BAA1954E6BCDEE
struct UGAB_ThrowPlayer_C_Triggered_45B7744E4902B26207BAA1954E6BCDEE_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.K2_ActivateAbility
struct UGAB_ThrowPlayer_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.K2_OnEndAbility
struct UGAB_ThrowPlayer_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x181 (0x181 - 0x0)
// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.ExecuteUbergraph_GAB_ThrowPlayer
struct UGAB_ThrowPlayer_C_ExecuteUbergraph_GAB_ThrowPlayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_1;                   // 0x10(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_1;               // 0x38(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9109[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x40(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x68(0x4)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x78(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_910A[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable_1;                            // 0x80(0x28)()
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0xA8(0x48)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_910B[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x100(0x28)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x128(0x10)(ReferenceParm)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_2;                   // 0x138(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_2;               // 0x160(0x4)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x164(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_910C[0x7];                                     // Fixing Size After Last Property..
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
