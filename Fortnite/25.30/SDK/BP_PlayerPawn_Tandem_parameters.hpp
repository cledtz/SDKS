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

// 0x6C (0x6C - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.UpdatePawnHealthHUD
struct UBP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD_Params
{
public:
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_367B[0x3];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_367E[0x3];                                     // Fixing Size After Last Property
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_AIBoss_C*             K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss;      // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3680[0x7];                                     // Fixing Size After Last Property
	TArray<class UFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x28(0x10)(ReferenceParm)
	class UFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3682[0x4];                                     // Fixing Size After Last Property
	class UPawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3685[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_GetDistanceBetweenActors_Distance;        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3688[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.OnRep_HealthInfo
struct UBP_PlayerPawn_Tandem_C_OnRep_HealthInfo_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.HandlePawnUnconverted
struct UBP_PlayerPawn_Tandem_C_HandlePawnUnconverted_Params
{
public:
	class UFortPawn*                             UnconvertedPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.HandlePawnConverted
struct UBP_PlayerPawn_Tandem_C_HandlePawnConverted_Params
{
public:
	class UFortPawn*                             InstigatorPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPawn*                             ConvertedPawn;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.UpdateConvertIndicator
struct UBP_PlayerPawn_Tandem_C_UpdateConvertIndicator_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3695[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.StartHealthBar
struct UBP_PlayerPawn_Tandem_C_StartHealthBar_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.StartUpdatingHealthWidget
struct UBP_PlayerPawn_Tandem_C_StartUpdatingHealthWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.StopUpdatingHealthWidget
struct UBP_PlayerPawn_Tandem_C_StopUpdatingHealthWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.PawnHealthChanged
struct UBP_PlayerPawn_Tandem_C_PawnHealthChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.ReceiveEndPlay
struct UBP_PlayerPawn_Tandem_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.OnDeathPlayEffects
struct UBP_PlayerPawn_Tandem_C_OnDeathPlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36AA[0x4];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.NPCSetupHealthBarOnDeath
struct UBP_PlayerPawn_Tandem_C_NPCSetupHealthBarOnDeath_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.WidgetVisibilityChanged
struct UBP_PlayerPawn_Tandem_C_WidgetVisibilityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.NPCTandemDisableHealthBar
struct UBP_PlayerPawn_Tandem_C_NPCTandemDisableHealthBar_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.NPCTandemEnableHealthBars
struct UBP_PlayerPawn_Tandem_C_NPCTandemEnableHealthBars_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.EnableHiredTandemHealthBar
struct UBP_PlayerPawn_Tandem_C_EnableHiredTandemHealthBar_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.EnableTandemHealthBar
struct UBP_PlayerPawn_Tandem_C_EnableTandemHealthBar_Params
{
public:
};

// 0x244 (0x244 - 0x0)
// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.ExecuteUbergraph_BP_PlayerPawn_Tandem
struct UBP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D3[0x3];                                     // Fixing Size After Last Property
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_AIBoss_C*             K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss;      // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D5[0x3];                                     // Fixing Size After Last Property
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetShield_ReturnValue;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxShield_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D6[0x3];                                     // Fixing Size After Last Property
	double                                       CallFunc_SafeDivide_ReturnValue_1;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_NPC_HealthInfo                K2Node_MakeStruct_Struct_NPC_HealthInfo;           // 0x40(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D7[0x4];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x68(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0xA0(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortPawn*                             K2Node_Event_InstigatedBy;                         // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_Event_DamageCauser;                         // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x190(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D8[0x7];                                     // Fixing Size After Last Property
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_AIBoss_C*             K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_1;    // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bVisible;                       // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DD[0x3];                                     // Fixing Size After Last Property
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_2;        // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_AIBoss_C*             K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_2;    // 0x1D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DE[0x2];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1DC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue_1;             // 0x1EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue_2;             // 0x1EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E0[0x3];                                     // Fixing Size After Last Property
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_3;        // 0x1F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_AIBoss_C*             K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_3;    // 0x1F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E1[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x204(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_A_ImplicitCast;                // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_B_ImplicitCast;                // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MakeStruct_MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB_ImplicitCast; // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_A_ImplicitCast_1;              // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_B_ImplicitCast_1;              // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MakeStruct_MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846_ImplicitCast; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
