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

// 0x10 (0x10 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.FilterHitActors
struct UGA_NPC_Parent_C_FilterHitActors_Params
{
public:
	TArray<class AActor*>                        HitActors;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ResetRotationRate
struct UGA_NPC_Parent_C_NPC_ResetRotationRate_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC OverrideRotationRate
struct UGA_NPC_Parent_C_NPC_OverrideRotationRate_Params
{
public:
	struct FScalableFloat                        RotationRate;                                      // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97FB[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97FC[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakRotator_Roll;                        // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC GetGoalActor
struct UGA_NPC_Parent_C_NPC_GetGoalActor_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97FD[0x3];                                     // Fixing Size After Last Property..
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97FE[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_GetValueAsObject_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityTargetIsBuildingWeAreDestroyingToNavigate
struct UGA_NPC_Parent_C_NPC_AbilityTargetIsBuildingWeAreDestroyingToNavigate_Params
{
public:
	bool                                         IsNavigationBuildingWeAreDestroying;               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97FF[0x7];                                     // Fixing Size After Last Property..
	class ABuildingActor*                        BuildingWeAreDestroying;                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       HealthOfBuildingWeAreDestroying;                   // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_NPC_GetGoalActor_ReturnValue;             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9800[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue;           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9801[0x7];                                     // Fixing Size After Last Property..
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9802[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9803[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_FunctionResult_HealthOfBuildingWeAreDestroying_ImplicitCast; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayEffectWithMMRScaling
struct UGA_NPC_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling_Params
{
public:
	class UClass*                                GameplayEffectClass;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        AvgMMR;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9804[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               ApplyGeTo;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9805[0x7];                                     // Fixing Size After Last Property..
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9806[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetClassDisplayName_ReturnValue;          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9807[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9808[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeLiteralDouble_ReturnValue;            // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_BuildString_Int_ReturnValue;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0xA0(0x8)(NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_BuildString_Object_ReturnValue;           // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAvgPlayerMMR_ReturnValue;              // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9809[0x4];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue; // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_980A[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1; // 0xCC(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast; // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast_1; // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayAbilityCooldownWithMMRScaling
struct UGA_NPC_Parent_C_NPC_ApplyGameplayAbilityCooldownWithMMRScaling_Params
{
public:
};

// 0x2C (0x2C - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ScalableFloatIsValid
struct UGA_NPC_Parent_C_NPC_ScalableFloatIsValid_Params
{
public:
	struct FScalableFloat                        ScalableFloat;                                     // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Valid;                                             // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC GetScalableFloatHotfixValue
struct UGA_NPC_Parent_C_NPC_GetScalableFloatHotfixValue_Params
{
public:
	struct FScalableFloat                        ScalableFloatHotfix;                               // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       AtLevel;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AsBool;                                            // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_980B[0x3];                                     // Fixing Size After Last Property..
	int32                                        AsIntRounded;                                      // 0x34(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AsFloat;                                           // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_ScalableFloatIsValid_Valid;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_980C[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_980D[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_980E[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_Level_ImplicitCast;       // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_980F[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_FunctionResult_AsFloat_ImplicitCast;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_AsFloat_ImplicitCast_1;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast_1;                   // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC SetAlertLevelByAIAbilityTargetType
struct UGA_NPC_Parent_C_NPC_SetAlertLevelByAIAbilityTargetType_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Option_B___If_false__use_Option_A_Variable; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Option_B___If_false__use_Option_A_Variable_1; // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9810[0x5];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9811[0x6];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               K2Node_Select_Default;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               K2Node_Select_Default_1;                           // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC SetAlertLevel
struct UGA_NPC_Parent_C_NPC_SetAlertLevel_Params
{
public:
	enum class Enum_NPC_AlertLevel               NPC_AlertLevel;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9812[0x3];                                     // Fixing Size After Last Property..
	class FName                                  Temp_name_Variable;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9813[0x3];                                     // Fixing Size After Last Property..
	class FName                                  Temp_name_Variable_1;                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               Temp_byte_Variable;                                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9814[0x2];                                     // Fixing Size After Last Property..
	class FName                                  K2Node_Select_Default;                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9815[0x4];                                     // Fixing Size After Last Property..
	class ANPC_Pawn_Parent_C*                    K2Node_DynamicCast_AsNPC_Pawn_Parent;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9816[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_BuildString_Name_ReturnValue;             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x109 (0x109 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC DoIntentionalFailedAttack
struct UGA_NPC_Parent_C_NPC_DoIntentionalFailedAttack_Params
{
public:
	bool                                         DoIntentionalFailedAttack;                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AboveTestForIntentionalFailedAttackPassed;         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AboveTestPassed;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9817[0x3];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9818[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9819[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_981A[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue_1;         // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue_1;          // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_981B[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x131 (0x131 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AttemptBuildFrustrationDueToMovement
struct UGA_NPC_Parent_C_NPC_AttemptBuildFrustrationDueToMovement_Params
{
public:
	class FString                                Reason;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_981C[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x48(0x20)()
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_981D[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_981E[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x80(0xB0)()
	bool                                         CallFunc_IsTagQueryEmpty_ReturnValue;              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x121 (0x121 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AttemptBuildFrustrationDueToGoal
struct UGA_NPC_Parent_C_NPC_AttemptBuildFrustrationDueToGoal_Params
{
public:
	class FString                                Reason;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_981F[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x48(0x20)()
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9820[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x70(0xB0)()
	bool                                         CallFunc_IsTagQueryEmpty_ReturnValue;              // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ClearFrustrationTagsForMovement
struct UGA_NPC_Parent_C_NPC_ClearFrustrationTagsForMovement_Params
{
public:
	class FString                                Reason;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9821[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ClearFrustrationTagsForGoals
struct UGA_NPC_Parent_C_NPC_ClearFrustrationTagsForGoals_Params
{
public:
	class FString                                Reason;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9822[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9C (0x9C - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.DestroyBuilding
struct UGA_NPC_Parent_C_DestroyBuilding_Params
{
public:
	class AActor*                                BuildingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9823[0x6];                                     // Fixing Size After Last Property..
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9824[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x30(0x28)()
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9825[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaSupplyDropBalloon*          K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9826[0x6];                                     // Fixing Size After Last Property..
	class UFortHeldObjectComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9827[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x88(0x10)(ReferenceParm)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_HasAuthority_ReturnValue;              // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC GenerateLaunchVelocityWithMinimumAngle
struct UGA_NPC_Parent_C_NPC_GenerateLaunchVelocityWithMinimumAngle_Params
{
public:
	class AActor*                                ActorWeWantToLaunch;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Vehicle;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9828[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               LaunchVelocity;                                    // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LaunchActor;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         LaunchingVehicle;                                  // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVehicle;                                         // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9829[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_982A[0x7];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_982B[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_982C[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Abs_ReturnValue;                          // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_982D[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_BuildString_Double_ReturnValue;           // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_982E[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        K2Node_Select_Default;                             // 0x180(0x28)()
	class FString                                CallFunc_BuildString_Double_ReturnValue_1;         // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1; // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_982F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1; // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1; // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9830[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        K2Node_Select_Default_1;                           // 0x1D0(0x28)()
	class FString                                CallFunc_BuildString_Bool_ReturnValue;             // 0x1F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2; // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9831[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2; // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2; // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        K2Node_Select_Default_2;                           // 0x228(0x28)()
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x250(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3; // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9832[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3; // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3; // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x278(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_SelectRotator_ReturnValue;                // 0x290(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll_2;                      // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_2;                     // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_2;                       // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9833[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_2;                // 0x2B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x2D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x2E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BuildString_Double_InDouble_ImplicitCast; // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_A_ImplicitCast;                       // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x219 (0x219 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.K2_CanActivateAbility
struct UGA_NPC_Parent_C_K2_CanActivateAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9834[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 RelevantTags;                                      // 0x50(0x20)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_PassAboveZ_ForIntentionalFailedAttack;         // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_PassBelowZ;                                    // 0x72(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_PassAboveZ;                                    // 0x73(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_CanActivateAbility;                            // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x77(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue;           // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9835[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9836[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue_1;         // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9837[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_BreakVector_X;                            // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9838[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue_1;          // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9839[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue_2;         // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_983A[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_983B[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue_2;          // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_983C[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_5;        // 0x1C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x1D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_2;                          // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_983D[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Abs_ReturnValue;                          // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_3;          // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC TryResetMovementUrgency
struct UGA_NPC_Parent_C_NPC_TryResetMovementUrgency_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC TrySetMovementUrgency
struct UGA_NPC_Parent_C_NPC_TrySetMovementUrgency_Params
{
public:
	enum class EFortMovementUrgency              MovementUrgency;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TryResetUrgencyIfInvalid;                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC EQS Results
struct UGA_NPC_Parent_C_NPC_EQS_Results_Params
{
public:
	class UEnvQueryInstanceBlueprintWrapper*     QueryInstance;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryStatus                   QueryStatus;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryRunMode                  EQS_RunMode;                                       // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NumReturnedItemsIsImportant;                       // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_983E[0x5];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        ResultActors;                                      // 0x10(0x10)(Parm, OutParm)
	int32                                        NumValidActorsGenerated;                           // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResultActorsSuccess;                               // 0x24(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_983F[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FVector>                       ResultLocations;                                   // 0x28(0x10)(Parm, OutParm)
	int32                                        NumValidLocationsGenerated;                        // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResultLocationsSuccess;                            // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9840[0x3];                                     // Fixing Size After Last Property..
	class UEnvQueryInstanceBlueprintWrapper*     QueryInstanceOut;                                  // 0x40(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryStatus                   QueryStatusOut;                                    // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NumReturnedItemsImportant;                         // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9841[0x2];                                     // Fixing Size After Last Property..
	int32                                        RandomlyChosenIndexToReturnAsOurResult;            // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastGoodIndex;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9842[0x4];                                     // Fixing Size After Last Property..
	double                                       ScoreThreshold;                                    // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BestScore;                                         // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9843[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FVector>                       ResultLocationsFinal;                              // 0x70(0x10)(Edit, BlueprintVisible)
	int32                                        NumResultLocationsGenerated;                       // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9844[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FVector>                       ResultLocationsGenerated;                          // 0x88(0x10)(Edit, BlueprintVisible)
	bool                                         GeneratedLocations;                                // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9845[0x7];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        ResultActorsFinal;                                 // 0xA0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        NumResultActorsGenerated;                          // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9846[0x4];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        ResultActorsGenerated;                             // 0xB8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         GeneratedActors;                                   // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryStatus                   QueryStatusVar;                                    // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9847[0x6];                                     // Fixing Size After Last Property..
	class UEnvQueryInstanceBlueprintWrapper*     Query;                                             // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9848[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Array_Get_Item;                           // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9849[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_984A[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetItemScore_ReturnValue;                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_984B[0x2];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetItemScore_ReturnValue_1;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x12D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x12E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x12F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x135(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_984C[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_984D[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Array_Get_Item_2;                         // 0x148(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_3;                         // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_3;         // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_4;         // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_984E[0x5];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_984F[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FVector>                       CallFunc_GetQueryResultsAsLocations_ResultLocations; // 0x188(0x10)(ReferenceParm)
	bool                                         CallFunc_GetQueryResultsAsLocations_ReturnValue;   // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9850[0x7];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        CallFunc_GetQueryResultsAsActors_ResultActors;     // 0x1A0(0x10)(ReferenceParm)
	bool                                         CallFunc_GetQueryResultsAsActors_ReturnValue;      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9851[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_BestScore_ImplicitCast;         // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC DebugFreezeFrame
struct UGA_NPC_Parent_C_NPC_DebugFreezeFrame_Params
{
public:
	bool                                         ForceDebugFreezeFrame;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitAbilityTargetRightNow;                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitAbilityTargetDuringThisAbilityActivation;       // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9852[0x5];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        ActorsWeHaveHitDuringThisAbilityActivation;        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                        ActorsHitWithThisSpecificTargetSelection;          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9853[0x4];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x651 (0x651 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayEffectContainerAndLaunchTargets
struct UGA_NPC_Parent_C_NPC_ApplyGameplayEffectContainerAndLaunchTargets_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        GameplayEffectLevel;                               // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AbilityTargetCanBeHitMultipleTimesByThisSelection; // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceDebugFreezeFrameForThisSpecificTargeting;     // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitAbilityTargetRightNow;                          // 0x32(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitAbilityTargetDuringThisAbilityActivation;       // 0x33(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9854[0x4];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        ActorsWeHaveHitDuringThisAbilityActivation;        // 0x38(0x10)(Parm, OutParm)
	TArray<class AActor*>                        ActorsHitWithThisSpecificTargetSelection;          // 0x48(0x10)(Parm, OutParm)
	bool                                         HitWasVehicle;                                     // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceDebugFreezeFrame;                             // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9855[0x6];                                     // Fixing Size After Last Property..
	struct FHitResult                            CurrentHitActorWeAreTestingHitResultFromTargetData; // 0x60(0xE0)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                        CurrentHitActorWeAreTestingArrayIndex;             // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9856[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                CurrentHitActorWeAreTesting;                       // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentAbilityTargetCanBeHitMultipleTimesByThisSelection; // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9857[0x3];                                     // Fixing Size After Last Property..
	int32                                        GetCurrentGameplayEffectLevel;                     // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CurrentApplicationTag;                             // 0x158(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9858[0x4];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        CurrentActorsGatheredThisTargetSelection;          // 0x160(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	double                                       CurrentKnockbackVelocity;                          // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      CurrentTargetData;                                 // 0x178(0x28)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9859[0x7];                                     // Fixing Size After Last Property..
	class ANPC_Pawn_Parent_C*                    K2Node_DynamicCast_AsNPC_Pawn_Parent;              // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_985A[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue; // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_985B[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x1D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_985C[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1; // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_985D[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1; // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1; // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2; // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_985E[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2; // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2; // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        K2Node_Select_Default;                             // 0x200(0x28)()
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3; // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_985F[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3; // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9860[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue;           // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9861[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue_1;         // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloat_ReturnValue;                  // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9862[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9863[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromHitResult_ReturnValue; // 0x270(0x28)()
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9864[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x2A8(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9865[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_2;             // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9866[0x6];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_GetHitResultFromTargetData_ReturnValue;   // 0x2C8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9867[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9868[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue_2;         // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDataCountFromTargetData_ReturnValue;   // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9869[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_3;             // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_986A[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_1;                               // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_986B[0x4];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_GetHitResultFromTargetData_ReturnValue_1; // 0x3E0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                        CallFunc_GetActorsFromTargetData_ReturnValue;      // 0x4C0(0x10)(ReferenceParm)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x4D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_986C[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakHitResult_Time;                      // 0x4D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_986D[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x4E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x4F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x510(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x528(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x540(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x548(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x550(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x55C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x564(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_986E[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x570(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x588(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0x5A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                    K2Node_DynamicCast_AsFort_Athena_Vehicle;          // 0x5A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x5B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_986F[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x5B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                    K2Node_DynamicCast_AsFort_Athena_Vehicle_1;        // 0x5B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9870[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchVelocity; // 0x5C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchActor; // 0x5E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchingVehicle; // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9871[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_BP_GetAllPassengers_self_CastInput;       // 0x5F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerPawn*>               CallFunc_BP_GetAllPassengers_ReturnValue;          // 0x600(0x10)(ReferenceParm)
	class AFortPlayerPawn*                       CallFunc_Array_Get_Item_2;                         // 0x610(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x618(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9872[0x4];                                     // Fixing Size After Last Property..
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x620(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9873[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x62C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            K2Node_DynamicCast_AsCharacter;                    // 0x630(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9874[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x63C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x641(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9875[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x644(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TargetDataHasHitResult_ReturnValue;       // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9876[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetDataCountFromTargetData_ReturnValue_1; // 0x64C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityTargetIsWithinAngleThreshold
struct UGA_NPC_Parent_C_NPC_AbilityTargetIsWithinAngleThreshold_Params
{
public:
	double                                       AngleThreshold;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWithinAngle;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9877[0x7];                                     // Fixing Size After Last Property..
	double                                       AngleThresholdVar;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9878[0x7];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue;           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9879[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_987A[0x6];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_BuildString_Double_ReturnValue;           // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_BuildString_Double_ReturnValue_1;         // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x5A (0x5A - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC IsMontageInfoValid
struct UGA_NPC_Parent_C_NPC_IsMontageInfoValid_Params
{
public:
	struct FFortGameplayAbilityMontageInfo       MontageInfo;                                       // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsValid_;                                          // 0x58(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityDebugMessage
struct UGA_NPC_Parent_C_NPC_AbilityDebugMessage_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         OnlyWhenDebug;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC SetupAbility
struct UGA_NPC_Parent_C_NPC_SetupAbility_Params
{
public:
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368
struct UGA_NPC_Parent_C_Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368
struct UGA_NPC_Parent_C_Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.Cancelled_13B12ED64A3570FC1E117FAC4E3F7961
struct UGA_NPC_Parent_C_Cancelled_13B12ED64A3570FC1E117FAC4E3F7961_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.Targeted_13B12ED64A3570FC1E117FAC4E3F7961
struct UGA_NPC_Parent_C_Targeted_13B12ED64A3570FC1E117FAC4E3F7961_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.BeginDestroyBuildings
struct UGA_NPC_Parent_C_BeginDestroyBuildings_Params
{
public:
	struct FGameplayTag                          TargetSelectionApplicationTag;                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         DoContinuousTargetSelection;                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BD (0x1BD - 0x0)
// Function GA_NPC_Parent.GA_NPC_Parent_C.ExecuteUbergraph_GA_NPC_Parent
struct UGA_NPC_Parent_C_ExecuteUbergraph_GA_NPC_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_2;                   // 0x10(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_2;               // 0x38(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x3C(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable_1;                            // 0x40(0x28)()
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_1;                   // 0x68(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_1;               // 0x90(0x4)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x94(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0xA0(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0xC8(0x4)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xCC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_2;                            // 0xD8(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_987B[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable_3;                            // 0xE0(0x28)()
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_3;                   // 0x108(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_3;               // 0x130(0x4)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x140(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_TargetSelectionApplicationTag;  // 0x14C(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_DoContinuousTargetSelection;    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_987C[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_987D[0x4];                                     // Fixing Size After Last Property..
	class UFortAbilityTask_TargetSelectionContinuous* CallFunc_DoTargetSelectionContinuous_ReturnValue;  // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_WaitTargetSelection*  CallFunc_WaitTargetSelection_ReturnValue;          // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_987E[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_987F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetDataCountFromTargetData_ReturnValue;   // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9880[0x4];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        CallFunc_GetActorsFromTargetData_ReturnValue;      // 0x190(0x10)(ReferenceParm)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9881[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9882[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
