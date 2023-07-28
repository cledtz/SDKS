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

// 0x4 (0x4 - 0x0)
// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.OnPress_BBDAB9B94E9778E3575BD1A1551EA10E
struct UGA_Action_Sprint_GrindRail_C_OnPress_BBDAB9B94E9778E3575BD1A1551EA10E_Params
{
public:
	float                                        TimeWaited;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.OnRelease_5B08467A452F5716E7C96290186D3E19
struct UGA_Action_Sprint_GrindRail_C_OnRelease_5B08467A452F5716E7C96290186D3E19_Params
{
public:
	float                                        TimeHeld;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.OnPress_EB1E0A904B5B510E2C8590AD3B367EDD
struct UGA_Action_Sprint_GrindRail_C_OnPress_EB1E0A904B5B510E2C8590AD3B367EDD_Params
{
public:
	float                                        TimeWaited;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2
struct UGA_Action_Sprint_GrindRail_C_OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2_Params
{
public:
	float                                        TimeHeld;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.K2_ActivateAbility
struct UGA_Action_Sprint_GrindRail_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.K2_OnEndAbility
struct UGA_Action_Sprint_GrindRail_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.FailedToActivatePassiveAbility
struct UGA_Action_Sprint_GrindRail_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x139 (0x139 - 0x0)
// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.ExecuteUbergraph_GA_Action_Sprint_GrindRail
struct UGA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_818D[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_TimeHeld_1;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_818E[0x4];                                     // Fixing Size After Last Property..
	class UAbilityTask_WaitInputRelease*         CallFunc_WaitInputRelease_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_818F[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_TimeWaited;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_1;                              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitInputPress*           CallFunc_WaitInputPress_ReturnValue;               // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8190[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x4C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_TimeHeld;                       // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_2;                              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitInputRelease*         CallFunc_WaitInputRelease_ReturnValue_1;           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8191[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x6C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitInputPress*           CallFunc_WaitInputPress_ReturnValue_1;             // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x80(0x48)(ContainsInstancedReference)
	class UPlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8192[0x6];                                     // Fixing Size After Last Property..
	class UBP_GrindingComponent_C*               CallFunc_GetComponentByClass_ReturnValue;          // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8193[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0xE8(0x48)(ContainsInstancedReference)
	float                                        Temp_real_Variable_3;                              // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_TimeWaited_1;                   // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_HasAuthority_ReturnValue;              // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
