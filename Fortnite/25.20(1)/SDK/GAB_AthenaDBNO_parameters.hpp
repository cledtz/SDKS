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

// 0x8 (0x8 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Custom Tenacity
struct UGAB_AthenaDBNO_C_Get_Custom_Tenacity_Params
{
public:
	double                                       Tenacity;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Max Health Tenacity
struct UGAB_AthenaDBNO_C_Get_Max_Health_Tenacity_Params
{
public:
	double                                       Tenacity;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D5[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Tenacity_ImplicitCast;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Apply Health Bonus
struct UGAB_AthenaDBNO_C_Apply_Health_Bonus_Params
{
public:
	struct FActiveGameplayEffectHandle           EffectHandle;                                      // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	double                                       LocalTenacityAmount;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Get_Custom_Tenacity_Tenacity;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Get_Max_Health_Tenacity_Tenacity;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x20(0x10)()
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D6[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayEffectSpecHandle             CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x38(0x10)()
	struct FActiveGameplayEffectHandle           CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast; // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ApplyBleeding
struct UGAB_AthenaDBNO_C_ApplyBleeding_Params
{
public:
	struct FActiveGameplayEffectHandle           EffectHandle;                                      // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get DBNO Montage
struct UGAB_AthenaDBNO_C_Get_DBNO_Montage_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSkydiving_ReturnValue;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Initial Heal Amount
struct UGAB_AthenaDBNO_C_Get_Initial_Heal_Amount_Params
{
public:
	double                                       Health;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Get_Max_Health_Tenacity_Tenacity;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D7[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection
struct UGAB_AthenaDBNO_C_InitializeDeathHitDirection_Params
{
public:
	struct FGameplayEventData                    EventHitData;                                      // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                               CallFunc_GetImpulseData_ImpulseDirection;          // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetImpulseData_KnockbackMagnitude;        // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetImpulseData_KnockbackZAngle;           // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_EffectContextGetHitResult_ReturnValue;    // 0xD0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F
struct UGAB_AthenaDBNO_C_OnCancelled_F0F6785443BD2E74F5591884CB19F35F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F
struct UGAB_AthenaDBNO_C_OnInterrupted_F0F6785443BD2E74F5591884CB19F35F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F
struct UGAB_AthenaDBNO_C_OnBlendOut_F0F6785443BD2E74F5591884CB19F35F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F
struct UGAB_AthenaDBNO_C_OnCompleted_F0F6785443BD2E74F5591884CB19F35F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6
struct UGAB_AthenaDBNO_C_OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6
struct UGAB_AthenaDBNO_C_OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent
struct UGAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility
struct UGAB_AthenaDBNO_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.DropHeldObjects
struct UGAB_AthenaDBNO_C_DropHeldObjects_Params
{
public:
};

// 0x210 (0x210 - 0x0)
// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO
struct UGAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_Apply_Health_Bonus_EffectHandle;          // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_StartAbilityState*        CallFunc_StartAbilityState_ReturnValue;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsImprovedDBNOEnabled_ReturnValue;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D8[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x48(0xB0)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xF8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99D9[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Get_Initial_Heal_Amount_Health;           // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99DA[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99DB[0x7];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          CallFunc_Get_DBNO_Montage_ReturnValue;             // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99DC[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99DD[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_ApplyBleeding_EffectHandle;               // 0x15C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99DE[0x4];                                     // Fixing Size After Last Property..
	class UFortHeldObjectComponent*              CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue; // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99DF[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x180(0x10)()
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_AssignSetByCallerMagnitude_ReturnValue;   // 0x198(0x10)()
	class UFortAbilitySystemComponent*           K2Node_DynamicCast_AsFort_Ability_System_Component; // 0x1A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E0[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x1B4(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E1[0x4];                                     // Fixing Size After Last Property..
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3; // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*           K2Node_DynamicCast_AsFort_Ability_System_Component_1; // 0x1D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E2[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1DC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4; // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_2;           // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E3[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E4[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_AssignSetByCallerMagnitude_Magnitude_ImplicitCast; // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
