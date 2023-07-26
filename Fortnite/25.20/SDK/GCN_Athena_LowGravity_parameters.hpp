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

// 0xE8 (0xE8 - 0x0)
// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove
struct AGCN_Athena_LowGravity_C_OnRemove_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CC8[0x6];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_SpawnFXSystemAttached_ReturnValue;        // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated
struct AGCN_Athena_LowGravity_C_Activated_Params
{
public:
	class AActor*                                PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CC9[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CCA[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult_1;        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CCB[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY_1;            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CCC[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_StartTime_ImplicitCast;         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive
struct AGCN_Athena_LowGravity_C_WhileActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CCD[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_SpawnFXSystemAttached_ReturnValue;        // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExpireTell
struct AGCN_Athena_LowGravity_C_ExpireTell_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.PlayExpirationSound
struct AGCN_Athena_LowGravity_C_PlayExpirationSound_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue
struct AGCN_Athena_LowGravity_C_K2_HandleGameplayCue_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 EventType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CCE[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveBeginPlay
struct AGCN_Athena_LowGravity_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ClearExpireTell
struct AGCN_Athena_LowGravity_C_ClearExpireTell_Params
{
public:
};

// 0xF9 (0xF9 - 0x0)
// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity
struct AGCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CCF[0x4];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_MyTarget;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_Event_EventType;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD0[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x28(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
