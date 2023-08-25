#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x21 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.PettingTelemetry
struct UGA_Riding_Player_Petting_C_PettingTelemetry_Params
{
public:
	class UActor*                                Owner;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_HasAuthority_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_92FD[0x7];                                     // Fixing Size After Last Property 
	class UFortAthenaAITelemetryData*            CallFunc_GetOrCreateAITelemetryData_ReturnValue;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaPettingWildlifeTelemetryData* K2Node_DynamicCast_AsFort_Athena_Petting_Wildlife_Telemetry_Data; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x230 (0x230 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.GetRiderPettingMontage
struct UGA_Riding_Player_Petting_C_GetRiderPettingMontage_Params
{
public:
	class UAnimMontage*                          RiderPettingMontage;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRidingPettingData                    CallFunc_GetPettingData_ReturnValue;               // 0x8(0x110)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomGender                 CallFunc_GetCharacterGender_ReturnValue;           // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_92FF[0x4];                                     // Fixing Size After Last Property 
	struct FRidingPettingData                    CallFunc_GetPettingData_ReturnValue_1;             // 0x120(0x110)(ConstParm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8
struct UGA_Riding_Player_Petting_C_OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8
struct UGA_Riding_Player_Petting_C_OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8
struct UGA_Riding_Player_Petting_C_OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8
struct UGA_Riding_Player_Petting_C_OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D
struct UGA_Riding_Player_Petting_C_Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_ActivateAbility
struct UGA_Riding_Player_Petting_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_OnEndAbility
struct UGA_Riding_Player_Petting_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.FailedToActivatePassiveAbility
struct UGA_Riding_Player_Petting_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x171 (0x171 - 0x0)
// Function GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.ExecuteUbergraph_GA_Riding_Player_Petting
struct UGA_Riding_Player_Petting_C_ExecuteUbergraph_GA_Riding_Player_Petting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9307[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UControllableRidableComponent*         K2Node_DynamicCast_AsControllable_Ridable_Component; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_930A[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_930C[0x6];                                     // Fixing Size After Last Property 
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0x48(0x48)(ContainsInstancedReference)
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_930D[0x7];                                     // Fixing Size After Last Property 
	class UControllingRiderComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_930E[0x2];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xB4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_930F[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xCC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UControllingRiderComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9311[0x7];                                     // Fixing Size After Last Property 
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xF8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9313[0x3];                                     // Fixing Size After Last Property 
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9314[0x7];                                     // Fixing Size After Last Property 
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3; // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4; // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9316[0x7];                                     // Fixing Size After Last Property 
	class UFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9318[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0x144(0x4)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_931A[0x4];                                     // Fixing Size After Last Property 
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_931B[0x6];                                     // Fixing Size After Last Property 
	class UAnimMontage*                          CallFunc_GetRiderPettingMontage_RiderPettingMontage; // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


