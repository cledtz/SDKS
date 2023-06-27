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

// 0x50 (0x50 - 0x0)
// Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.AttachFX
struct AGCN_Loop_Ice_Feet_Environmental_C_AttachFX_Params
{
public:
	class USceneComponent*                       Mesh;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_934E[0x3];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_934F[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9350[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.ReceiveTick
struct AGCN_Loop_Ice_Feet_Environmental_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.OnPawnMovementModeChanged
struct AGCN_Loop_Ice_Feet_Environmental_C_OnPawnMovementModeChanged_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.On Footstep Event
struct AGCN_Loop_Ice_Feet_Environmental_C_On_Footstep_Event_Params
{
public:
};

// 0xF8 (0xF8 - 0x0)
// Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.OnLoopingStartGeneric
struct AGCN_Loop_Ice_Feet_Environmental_C_OnLoopingStartGeneric_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x108 (0x108 - 0x0)
// Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.OnRemovalGeneric
struct AGCN_Loop_Ice_Feet_Environmental_C_OnRemovalGeneric_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x390 (0x390 - 0x0)
// Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental
struct AGCN_Loop_Ice_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9351[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9352[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9353[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9354[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x70(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9355[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_SetFloatParameter_self_CastInput;         // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            K2Node_CustomEvent_Character;                      // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     K2Node_CustomEvent_PrevMovementMode;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_PreviousCustomMode;             // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9356[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x9C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMovingOnGround_ReturnValue;             // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9357[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xAC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_1;            // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9358[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_LastIndex_ReturnValue_2;            // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9359[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Clamp_ReturnValue_1;                      // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_Array_Get_Item_1;                         // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_2;                      // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935A[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_SetFloatParameter_self_CastInput_1;       // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_Array_Get_Item_2;                         // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_SetTriggerParameter_self_CastInput;       // 0x100(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_3;            // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935B[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_MyTarget_1;                           // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters_1;                         // 0x120(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            K2Node_Event_ParticleComponents_1;                 // 0x1F0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents_1;                    // 0x200(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Clamp_ReturnValue_3;                      // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_Array_Get_Item_3;                         // 0x218(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_Array_Get_Item_4;                         // 0x220(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_SetFloatParameter_self_CastInput_2;       // 0x228(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935D[0x3];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_Array_Get_Item_5;                         // 0x240(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935E[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_MyTarget;                             // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x258(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            K2Node_Event_ParticleComponents;                   // 0x328(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents;                      // 0x338(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    K2Node_Event_BurstCameraShakeInstance;             // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           K2Node_Event_BurstDecalInstance;                   // 0x350(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935F[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1;    // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9360[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9361[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9362[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetFloatParameter_InFloat_ImplicitCast;   // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
