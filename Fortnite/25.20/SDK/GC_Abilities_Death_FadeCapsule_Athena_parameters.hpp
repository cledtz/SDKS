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

// 0x40 (0x40 - 0x0)
// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup
struct AGC_Abilities_Death_FadeCapsule_Athena_C_SkeletalMeshSetup_Params
{
public:
	class AFortPlayerPawnAthena*                 FortPawn;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Temp_object_Variable;                              // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E5F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E60[0x4];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E61[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc
struct AGC_Abilities_Death_FadeCapsule_Athena_C_CapsuleFadeTL__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc
struct AGC_Abilities_Death_FadeCapsule_Athena_C_CapsuleFadeTL__UpdateFunc_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue
struct AGC_Abilities_Death_FadeCapsule_Athena_C_K2_HandleGameplayCue_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 EventType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E62[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x144 (0x144 - 0x0)
// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena
struct AGC_Abilities_Death_FadeCapsule_Athena_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E63[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E64[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_MyTarget;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_Event_EventType;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E65[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x28(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E66[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E67[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E68[0x4];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                CallFunc_Array_Get_Item;                           // 0x120(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E69[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Starting_Min_Capsule_Shadow_Vis_ImplicitCast; // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast; // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
