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
// Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.CheckSurfaceType
struct AGCNL_Athena_Player_TacticalSprint_Speedlines_C_CheckSurfaceType_Params
{
public:
	class AFortPawn*                             Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        SurfaceTypeInt;                                    // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFootstepSurfaceType          CallFunc_GetFootstepSurfaceType_ReturnValue;       // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.GetPercentageSprintEnergy
struct AGCNL_Athena_Player_TacticalSprint_Speedlines_C_GetPercentageSprintEnergy_Params
{
public:
	class AActor*                                Energy_Owning_Actor;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentEnergyPercentage;                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_236B[0x7];                                     // Fixing Size After Last Property..
	class UTacticalSprintEnergyComponent_C*      CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_236C[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetCurrentEnergyPercentage_ReturnValue;   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_CurrentEnergyPercentage_ImplicitCast; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.OnLoopingStartNiagara
struct AGCNL_Athena_Player_TacticalSprint_Speedlines_C_OnLoopingStartNiagara_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UNiagaraComponent*>             ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.LoopUpdate
struct AGCNL_Athena_Player_TacticalSprint_Speedlines_C_LoopUpdate_Params
{
public:
};

// 0xA (0xA - 0x0)
// Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.MovementModeChanged
struct AGCNL_Athena_Player_TacticalSprint_Speedlines_C_MovementModeChanged_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.OnRemovalGeneric
struct AGCNL_Athena_Player_TacticalSprint_Speedlines_C_OnRemovalGeneric_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.UpdateSurfaceType
struct AGCNL_Athena_Player_TacticalSprint_Speedlines_C_UpdateSurfaceType_Params
{
public:
};

// 0x2C8 (0x2C8 - 0x0)
// Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_Speedlines
struct AGCNL_Athena_Player_TacticalSprint_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_Speedlines_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_236D[0x2];                                     // Fixing Size After Last Property..
	class UNiagaraComponent*                     CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_236E[0x2];                                     // Fixing Size After Last Property..
	class UNiagaraComponent*                     CallFunc_Array_Get_Item_1;                         // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyViewed_ReturnValue;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_236F[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_MyTarget_1;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters_1;                         // 0x38(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UNiagaraComponent*>             K2Node_Event_ParticleComponents_1;                 // 0x108(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents_1;                    // 0x118(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2370[0x7];                                     // Fixing Size After Last Property..
	class ACharacter*                            K2Node_DynamicCast_AsCharacter;                    // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2371[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x144(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x150(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2372[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetPercentageSprintEnergy_CurrentEnergyPercentage; // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_Array_Get_Item_2;                         // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2373[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2374[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x17C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            K2Node_CustomEvent_Character;                      // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     K2Node_CustomEvent_PrevMovementMode;               // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_PreviousCustomMode;             // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWalking_ReturnValue;                    // 0x193(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2375[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_MyTarget;                             // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x1A0(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            K2Node_Event_ParticleComponents;                   // 0x270(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents;                      // 0x280(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    K2Node_Event_BurstCameraShakeInstance;             // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           K2Node_Event_BurstDecalInstance;                   // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x2A0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x2AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWalking_ReturnValue_1;                  // 0x2AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2376[0x2];                                     // Fixing Size After Last Property..
	class UNiagaraComponent*                     CallFunc_Array_Get_Item_3;                         // 0x2B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2377[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_CheckSurfaceType_SurfaceTypeInt;          // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
