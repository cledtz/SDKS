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

// 0x8 (0x8 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Spawn Drone VFX
struct AGCN_RezOut_C_Spawn_Drone_VFX_Params
{
public:
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Set Timeline Playrates
struct AGCN_RezOut_C_Set_Timeline_Playrates_Params
{
public:
	float                                        CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPlayRate_NewRate_ImplicitCast_1;       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Dissolve Material Setup
struct AGCN_RezOut_C_Dissolve_Material_Setup_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F3[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F4[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Spawn Dissolve VFX
struct AGCN_RezOut_C_Spawn_Dissolve_VFX_Params
{
public:
	struct FVector                               Temp_struct_Variable;                              // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F5[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F6[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_Select_Default;                             // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Clean-Up Teleportation Light
struct AGCN_RezOut_C_Clean_Up_Teleportation_Light_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Light
struct AGCN_RezOut_C_Spawn_Teleportation_Light_Params
{
public:
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F7[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F8[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F9[0x7];                                     // Fixing Size After Last Property..
	class UPointLightComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x84 (0x84 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Drone
struct AGCN_RezOut_C_Spawn_Teleportation_Drone_Params
{
public:
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FA[0x6];                                     // Fixing Size After Last Property..
	class ABP_TeleportationDrone_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetLifeSpan_InLifespan_ImplicitCast;      // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Stop Looping Audio
struct AGCN_RezOut_C_Stop_Looping_Audio_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Play Elmination AnimMontage
struct AGCN_RezOut_C_Play_Elmination_AnimMontage_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSkydiving_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WasDBNOOnDeath_ReturnValue;               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default_1;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default_2;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default_3;                           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayLocalAnimMontage_ReturnValue;         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__FinishedFunc
struct AGCN_RezOut_C_TFX_GlowCharacterMesh__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__UpdateFunc
struct AGCN_RezOut_C_TFX_GlowCharacterMesh__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__FinishedFunc
struct AGCN_RezOut_C_TFX_ResOutCharacterMesh__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__UpdateFunc
struct AGCN_RezOut_C_TFX_ResOutCharacterMesh__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.EndVFX
struct AGCN_RezOut_C_EndVFX_Params
{
public:
};

// 0x108 (0x108 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.OnBurstGeneric
struct AGCN_RezOut_C_OnBurstGeneric_Params
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
// Function GCN_RezOut.GCN_RezOut_C.Pre-Sequence Change
struct AGCN_RezOut_C_Pre_Sequence_Change_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Spawned FX
struct AGCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX_Params
{
public:
	class UNiagaraComponent*                     Spawned_Death_FX;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Drone FX
struct AGCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX_Params
{
public:
	class UNiagaraComponent*                     Drone_FX;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.TriggerVFX
struct AGCN_RezOut_C_TriggerVFX_Params
{
public:
};

// 0x1E0 (0x1E0 - 0x0)
// Function GCN_RezOut.GCN_RezOut_C.ExecuteUbergraph_GCN_RezOut
struct AGCN_RezOut_C_ExecuteUbergraph_GCN_RezOut_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FB[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UMaterialInterface>     CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        CallFunc_Set_ToArray_Result;                       // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	class AActor*                                K2Node_Event_MyTarget;                             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x48(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            K2Node_Event_ParticleComponents;                   // 0x118(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents;                      // 0x128(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    K2Node_Event_BurstCameraShakeInstance;             // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           K2Node_Event_BurstDecalInstance;                   // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FC[0x7];                                     // Fixing Size After Last Property..
	class UNiagaraComponent*                     K2Node_CustomEvent_Spawned_Death_FX;               // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     K2Node_CustomEvent_Drone_FX;                       // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x170(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FD[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FE[0x4];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    K2Node_DynamicCast_AsFXSystem_Component;           // 0x198(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FF[0x7];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInstanceDynamic*>      K2Node_MakeArray_Array;                            // 0x1A8(0x10)(ConstParm, ReferenceParm)
	struct FGuid                                 CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue; // 0x1B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      K2Node_MakeArray_Array_1;                          // 0x1C8(0x10)(ReferenceParm)
	float                                        CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast; // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
