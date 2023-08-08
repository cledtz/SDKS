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

// 0x15 (0x15 - 0x0)
// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.ComputeCosmeticVariantID
struct UBP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID_Params
{
public:
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DCA[0x7];                                     // Fixing Size After Last Property
	class UAthenaAIServicePlayerBots*            CallFunc_GetAIServicePlayerBots_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FetchNextCustomBotCosmeticVariantID_ReturnValue; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.AssignCosmeticVariant
struct UBP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant_Params
{
public:
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DCE[0x7];                                     // Fixing Size After Last Property
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DCF[0x3];                                     // Fixing Size After Last Property
	float                                        CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast; // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.OnLaunched
struct UBP_PlayerPawn_Athena_Phoebe_C_OnLaunched_Params
{
public:
	struct FVector                               LaunchVelocity;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bXYOverride;                                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bZOverride;                                        // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.OnCharacterCustomizationCompleted
struct UBP_PlayerPawn_Athena_Phoebe_C_OnCharacterCustomizationCompleted_Params
{
public:
	class UFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe
struct UBP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DD4[0x4];                                     // Fixing Size After Last Property
	class UController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaAIBotController*            K2Node_DynamicCast_AsFort_Athena_AIBot_Controller; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DD5[0x7];                                     // Fixing Size After Last Property
	struct FVector                               K2Node_Event_LaunchVelocity;                       // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bXYOverride;                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bZOverride;                           // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DD6[0x6];                                     // Fixing Size After Last Property
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       K2Node_Event_Pawn;                                 // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
