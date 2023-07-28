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

// 0x3 (0x3 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoFailSafeUnholster
struct UGA_Athena_Ascender_Smash_C_DoFailSafeUnholster_Params
{
public:
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue_1; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoUnholster
struct UGA_Athena_Ascender_Smash_C_DoUnholster_Params
{
public:
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoHolster
struct UGA_Athena_Ascender_Smash_C_DoHolster_Params
{
public:
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.IsPlayerUsingHandle
struct UGA_Athena_Ascender_Smash_C_IsPlayerUsingHandle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2E0[0x5];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       CallFunc_GetPawnUsingHandle_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCancelled_899182BF4C098785CCBCFD85AA84455F
struct UGA_Athena_Ascender_Smash_C_OnCancelled_899182BF4C098785CCBCFD85AA84455F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnInterrupted_899182BF4C098785CCBCFD85AA84455F
struct UGA_Athena_Ascender_Smash_C_OnInterrupted_899182BF4C098785CCBCFD85AA84455F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnBlendOut_899182BF4C098785CCBCFD85AA84455F
struct UGA_Athena_Ascender_Smash_C_OnBlendOut_899182BF4C098785CCBCFD85AA84455F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCompleted_899182BF4C098785CCBCFD85AA84455F
struct UGA_Athena_Ascender_Smash_C_OnCompleted_899182BF4C098785CCBCFD85AA84455F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZipliningComplete
struct UGA_Athena_Ascender_Smash_C_ZipliningComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_SmashObjects
struct UGA_Athena_Ascender_Smash_C_SurroundingsCheck_SmashObjects_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_MotorCheck
struct UGA_Athena_Ascender_Smash_C_SurroundingsCheck_MotorCheck_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineEnter
struct UGA_Athena_Ascender_Smash_C_GameplayTagEvent_ZiplineEnter_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineExit
struct UGA_Athena_Ascender_Smash_C_GameplayTagEvent_ZiplineExit_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.FallingTagRemoved
struct UGA_Athena_Ascender_Smash_C_FallingTagRemoved_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.Pre_BeginZiplinging
struct UGA_Athena_Ascender_Smash_C_Pre_BeginZiplinging_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.HandleGameplayEventTag
struct UGA_Athena_Ascender_Smash_C_HandleGameplayEventTag_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZiplinePostBegin_Event
struct UGA_Athena_Ascender_Smash_C_ZiplinePostBegin_Event_Params
{
public:
};

// 0x2B6 (0x2B6 - 0x0)
// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ExecuteUbergraph_GA_Athena_Ascender_Smash
struct UGA_Athena_Ascender_Smash_C_ExecuteUbergraph_GA_Athena_Ascender_Smash_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomGender                 Temp_byte_Variable;                                // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerUsingHandle_ReturnValue;          // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerUsingHandle_ReturnValue_1;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerUsingHandle_ReturnValue_2;        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2E1[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerUsingHandle_ReturnValue_3;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2E2[0x7];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          K2Node_Select_Default_1;                           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_Event_EventData_2;                          // 0x48(0xB0)(ConstParm)
	struct FGameplayEventData                    K2Node_Event_EventData_1;                          // 0xF8(0xB0)(ConstParm)
	class UB_Athena_Zipline_Ascender_C*          K2Node_DynamicCast_AsB_Athena_Zipline_Ascender;    // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2E3[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x1C0(0x8)(NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1; // 0x1D0(0x8)(NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomGender                 CallFunc_GetCharacterGender_ReturnValue;           // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2E4[0x7];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          K2Node_Select_Default_2;                           // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2E5[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x1F8(0xB0)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x2A8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
