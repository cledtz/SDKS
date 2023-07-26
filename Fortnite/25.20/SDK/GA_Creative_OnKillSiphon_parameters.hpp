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

// 0x59 (0x59 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.GiveResourcesToPlayer
struct UGA_Creative_OnKillSiphon_C_GiveResourcesToPlayer_Params
{
public:
	bool                                         bShouldGrant;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9595[0x3];                                     // Fixing Size After Last Property..
	int32                                        GiveAmount;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortResourceType                 GiveType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9596[0x6];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          InventoryOwner;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              LocalItemToGive;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9597[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetControllerFromActor_ReturnValue;       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaAIBotController*            K2Node_DynamicCast_AsFort_Athena_AIBot_Controller; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9598[0x7];                                     // Fixing Size After Last Property..
	class UFortWorldItem*                        CallFunc_GiveItemToInventoryOwner_ReturnValue;     // 0x48(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.CalculateResources
struct UGA_Creative_OnKillSiphon_C_CalculateResources_Params
{
public:
	enum class EFortResourceType                 ResourceGrantType;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9599[0x2];                                     // Fixing Size After Last Property..
	int32                                        ResourceToGive;                                    // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortResourceType                 ResourceType;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_959A[0x3];                                     // Fixing Size After Last Property..
	class FName                                  LocalDataTableRowName;                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ILocalResourceToGive;                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetOverridenSiphonGoldValue_ReturnValue;  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_959B[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_959C[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetOverridenSiphonMetalValue_ReturnValue; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetOverridenSiphonWoodValue_ReturnValue;  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_2;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_959D[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetOverridenSiphonStoneValue_ReturnValue; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_3;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_959E[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_4;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_959F[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast_1;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast_2;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast_3;                  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast_4;                  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptMats
struct UGA_Creative_OnKillSiphon_C_AttemptMats_Params
{
public:
	bool                                         CallFunc_CalculateResources_bSuccess;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A0[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_CalculateResources_ResourceToGive;        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortResourceType                 CallFunc_CalculateResources_ResourceType;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CalculateResources_bSuccess_1;            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A1[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_CalculateResources_ResourceToGive_1;      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortResourceType                 CallFunc_CalculateResources_ResourceType_1;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GiveResourcesToPlayer_Success;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GiveResourcesToPlayer_Success_1;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CalculateResources_bSuccess_2;            // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_CalculateResources_ResourceToGive_2;      // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortResourceType                 CallFunc_CalculateResources_ResourceType_2;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CalculateResources_bSuccess_3;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A2[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_CalculateResources_ResourceToGive_3;      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortResourceType                 CallFunc_CalculateResources_ResourceType_3;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GiveResourcesToPlayer_Success_2;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GiveResourcesToPlayer_Success_3;          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptHeal
struct UGA_Creative_OnKillSiphon_C_AttemptHeal_Params
{
public:
	bool                                         CallFunc_RestoreHealth_Success;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A3[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_RestoreHealth_InitialHealAmount;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RestoreHealth_ActualAppliedHeal;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RestoreHealth_ExcessHealing;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddShields_bAddedShields;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A4[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_AddShields_ShieldAdded;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.SetupRestoreModes
struct UGA_Creative_OnKillSiphon_C_SetupRestoreModes_Params
{
public:
	bool                                         ShouldContinue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSpatialGameplayExperience_ReturnValue;  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult_1;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A5[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY_1;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A6[0x2];                                     // Fixing Size After Last Property..
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A7[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.DetermineHealthDelta
struct UGA_Creative_OnKillSiphon_C_DetermineHealthDelta_Params
{
public:
	double                                       HealingAmount;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxHealth;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentHealth;                                     // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HealthDelta;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExcessHealh;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A8[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95A9[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95AA[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_MaxHealth_ImplicitCast;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_CurrentHealth_ImplicitCast;  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AddShields
struct UGA_Creative_OnKillSiphon_C_AddShields_Params
{
public:
	bool                                         bShouldConvertExcessHealthToShields;               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95AB[0x7];                                     // Fixing Size After Last Property..
	double                                       ShieldToAdd;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAddedShields;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95AC[0x7];                                     // Fixing Size After Last Property..
	double                                       ShieldAdded;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95AD[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x28(0x10)()
	struct FGameplayEffectSpecHandle             CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x38(0x10)()
	struct FActiveGameplayEffectHandle           CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast; // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.RestoreHealth
struct UGA_Creative_OnKillSiphon_C_RestoreHealth_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95AE[0x7];                                     // Fixing Size After Last Property..
	double                                       InitialHealAmount;                                 // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ActualAppliedHeal;                                 // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExcessHealing;                                     // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FShieldRestored;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FActualAmountHealed;                               // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FInitialAmountToHeal;                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95AF[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_DetermineHealthDelta_MaxHealth;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_DetermineHealthDelta_CurrentHealth;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_DetermineHealthDelta_HealthDelta;         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_DetermineHealthDelta_ExcessHealh;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B0[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FMin_ReturnValue;                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x70(0x10)()
	struct FGameplayEffectSpecHandle             CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x80(0x10)()
	struct FActiveGameplayEffectHandle           CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x90(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B1[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B2[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetOverridenSiphonHealthValue_ReturnValue; // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast; // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B3[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Option_0_ImplicitCast;               // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Option_1_ImplicitCast;               // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ShouldAbilityRespondToEvent
struct UGA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                    Payload;                                           // 0x48(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLocalMatsOnKill;                                  // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLocalHealthOnKill;                                // 0xFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLocalShouldActivate;                              // 0xFB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B4[0x4];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetControllerFromActor_ReturnValue;       // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDBNO_ReturnValue;                       // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B5[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x123(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult_1;        // 0x125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B6[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY_1;            // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x12D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x12E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B7[0x1];                                     // Fixing Size After Last Property..
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1; // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ActivateAbilityFromEvent
struct UGA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB9 (0xB9 - 0x0)
// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.ExecuteUbergraph_GA_Creative_OnKillSiphon
struct UGA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B8[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	bool                                         CallFunc_SetupRestoreModes_ShouldContinue;         // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
