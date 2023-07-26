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

// 0xB0 (0xB0 - 0x0)
// Function GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C.K2_ActivateAbilityFromEvent
struct UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C.FireBoostEffectsOnPlayerMulti
struct UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_FireBoostEffectsOnPlayerMulti_Params
{
public:
	class AActor*                                PlayerTarget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x220 (0x220 - 0x0)
// Function GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C.ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper
struct UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392B[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392C[0x7];                                     // Fixing Size After Last Property..
	class UFortGameplayAbility*                  K2Node_DynamicCast_AsFort_Gameplay_Ability;        // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392D[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392E[0x6];                                     // Fixing Size After Last Property..
	class UControllableRidableComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392F[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakRotator_Roll;                        // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                K2Node_CustomEvent_PlayerTarget;                   // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3930[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_HasAuthority_ReturnValue;              // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3931[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x138(0xD0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3932[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableSet_InitialMaxAcceleration_ImplicitCast; // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_MaxAcceleration_ImplicitCast;   // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
