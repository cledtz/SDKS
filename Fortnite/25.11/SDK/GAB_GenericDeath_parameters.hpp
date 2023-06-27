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

// 0x64 (0x64 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName
struct UGAB_GenericDeath_C_GetRandomSectionName_Params
{
public:
	int32                                        MaxNumberOfSections;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OriginalSectionName;                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SectionName;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection
struct UGAB_GenericDeath_C_InitializeDeathHitDirection_Params
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
// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility
struct UGAB_GenericDeath_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection
struct UGAB_GenericDeath_C_PickDeathMontageSection_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericDeath_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2C4 (0x2C4 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath
struct UGAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82D3[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue_1;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82D4[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82D5[0x5];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82D6[0x7];                                     // Fixing Size After Last Property..
	class ABP_VictoryDrone_C*                    CallFunc_FinishSpawningActor_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82D7[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xD0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName;         // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName_1;       // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName_2;       // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName_3;       // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_4;        // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_5;        // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_6;        // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_7;        // 0xEF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82D8[0x3];                                     // Fixing Size After Last Property..
	class FName                                  CallFunc_GetRandomSectionName_SectionName_4;       // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName_5;       // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName_6;       // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName_7;       // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x10C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue_2;          // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDamageZone                   CallFunc_GetDamageZone_ReturnValue;                // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82D9[0x5];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x130(0xB0)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1E0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_SetFNameBasedOnHitDirection_NameResult;   // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x1F0(0xD0)(ContainsInstancedReference)
	class FName                                  CallFunc_SetFNameBasedOnHitDirection_NameResult_1; // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
