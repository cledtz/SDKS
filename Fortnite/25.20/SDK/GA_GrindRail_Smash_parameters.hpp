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

// 0x0 (0x0 - 0x0)
// Function GA_GrindRail_Smash.GA_GrindRail_Smash_C.K2_ActivateAbility
struct UGA_GrindRail_Smash_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_GrindRail_Smash.GA_GrindRail_Smash_C.K2_OnEndAbility
struct UGA_GrindRail_Smash_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_GrindRail_Smash.GA_GrindRail_Smash_C.SurroundingCheck
struct UGA_GrindRail_Smash_C_SurroundingCheck_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function GA_GrindRail_Smash.GA_GrindRail_Smash_C.FailedToActivatePassiveAbility
struct UGA_GrindRail_Smash_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function GA_GrindRail_Smash.GA_GrindRail_Smash_C.EndAsyncBreakNearbyStructuresOverlap
struct UGA_GrindRail_Smash_C_EndAsyncBreakNearbyStructuresOverlap_Params
{
public:
	TArray<class AActor*>                        OverlapActors;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1B8 (0x1B8 - 0x0)
// Function GA_GrindRail_Smash.GA_GrindRail_Smash_C.ExecuteUbergraph_GA_GrindRail_Smash
struct UGA_GrindRail_Smash_C_ExecuteUbergraph_GA_GrindRail_Smash_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ABA[0x3];                                     // Fixing Size After Last Property..
	class UBP_GrindingComponent_C*               CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ABB[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ABC[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x48(0x10)(ConstParm, ReferenceParm)
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0x58(0x48)(ContainsInstancedReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array_1;                          // 0xA0(0x10)(ConstParm, ReferenceParm)
	TArray<class AActor*>                        K2Node_Event_OverlapActors;                        // 0xB0(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ABD[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_Array_Get_Item;                           // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xE0(0x8)(NoDestructor, HasGetValueTypeHash)
	class ABGA_GrindRail_C*                      K2Node_DynamicCast_AsBGA_Grind_Rail;               // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ABE[0x7];                                     // Fixing Size After Last Property..
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ABF[0x7];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x110(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AC0[0x5];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput_1;  // 0x128(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue_1;     // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerBuilt_ReturnValue;                // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AC1[0x4];                                     // Fixing Size After Last Property..
	class AFortAthenaSupplyDropBalloon*          K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon; // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AC2[0x6];                                     // Fixing Size After Last Property..
	class UFortHeldObjectComponent*              CallFunc_GetComponentByClass_ReturnValue_1;        // 0x150(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AC3[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AC4[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetConsoleVariableFloatValue_ReturnValue; // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetConsoleVariableFloatValue_ReturnValue_1; // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AC5[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x195(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x196(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x197(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AC6[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
