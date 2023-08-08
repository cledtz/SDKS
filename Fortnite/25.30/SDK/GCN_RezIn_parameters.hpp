#pragma once

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
// Function GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX
struct UGCN_RezIn_C_Spawn_Drone_VFX_Params
{
public:
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates
struct UGCN_RezIn_C_Set_Timelines__Playrates_Params
{
public:
	float                                        CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPlayRate_NewRate_ImplicitCast_1;       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX
struct UGCN_RezIn_C_Spawn_Teleport_In_VFX_Params
{
public:
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x85 (0x85 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Restore Character Materials
struct UGCN_RezIn_C_Restore_Character_Materials_Params
{
public:
	bool                                         Fully_Completed;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BEA[0x3];                                     // Fixing Size After Last Property
	int32                                        CurrentReplacementIndex;                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Itr;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BEF[0x4];                                     // Fixing Size After Last Property
	class UMaterialInstanceDynamic*              Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF1[0x7];                                     // Fixing Size After Last Property
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF3[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF5[0x4];                                     // Fixing Size After Last Property
	class USkeletalMeshComponent*                CallFunc_Array_Get_Item_1;                         // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF6[0x7];                                     // Fixing Size After Last Property
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x68(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light
struct UGCN_RezIn_C_Clean_Up_Teleportation_Light_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light
struct UGCN_RezIn_C_Spawn_Teleportation_Light_Params
{
public:
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF8[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF9[0x8];                                     // Fixing Size After Last Property
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BFA[0x7];                                     // Fixing Size After Last Property
	class UPointLightComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x84 (0x84 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone
struct UGCN_RezIn_C_Spawn_Teleportation_Drone_Params
{
public:
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BFB[0x6];                                     // Fixing Size After Last Property
	class UBP_TeleportationDrone_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetLifeSpan_InLifespan_ImplicitCast;      // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Stop Looping Audio
struct UGCN_RezIn_C_Stop_Looping_Audio_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc
struct UGCN_RezIn_C_TFX_GlowCharacterMesh__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc
struct UGCN_RezIn_C_TFX_GlowCharacterMesh__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc
struct UGCN_RezIn_C_TFX_ResOutCharacterMesh__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc
struct UGCN_RezIn_C_TFX_ResOutCharacterMesh__UpdateFunc_Params
{
public:
};

// 0x108 (0x108 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.OnBurstGeneric
struct UGCN_RezIn_C_OnBurstGeneric_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change
struct UGCN_RezIn_C_Pre_Sequence_Change_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX
struct UGCN_RezIn_C_Set_Additional_Niagara_Parameters_on_Spawned_FX_Params
{
public:
	class UNiagaraComponent*                     Spawned_Teleport_In_FX;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.EndVFX
struct UGCN_RezIn_C_EndVFX_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX
struct UGCN_RezIn_C_Set_Additional_Niagara_Parameter_on_Drone_FX_Params
{
public:
	class UNiagaraComponent*                     Drone_FX;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.OnCosmeticPart
struct UGCN_RezIn_C_OnCosmeticPart_Params
{
public:
	class UFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPart*                  Part;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                MeshPart;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               PartType;                                          // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.TriggerVFX
struct UGCN_RezIn_C_TriggerVFX_Params
{
public:
};

// 0x1C0 (0x1C0 - 0x0)
// Function GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn
struct UGCN_RezIn_C_ExecuteUbergraph_GCN_RezIn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDelegateHandleController             CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out; // 0x10(0x10)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C09[0x7];                                     // Fixing Size After Last Property
	class UActor*                                K2Node_Event_MyTarget;                             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x30(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            K2Node_Event_ParticleComponents;                   // 0x100(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents;                      // 0x110(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    K2Node_Event_BurstCameraShakeInstance;             // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDecalActor*                           K2Node_Event_BurstDecalInstance;                   // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C0A[0x7];                                     // Fixing Size After Last Property
	class UNiagaraComponent*                     K2Node_CustomEvent_Spawned_Teleport_In_FX;         // 0x140(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     K2Node_CustomEvent_Drone_FX;                       // 0x148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>     CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x150(0x28)(UObjectWrapper, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue; // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveMaterialOverrideLocal_ReturnValue;  // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C0D[0x7];                                     // Fixing Size After Last Property
	TArray<class UMaterialInstanceDynamic*>      K2Node_MakeArray_Array;                            // 0x190(0x10)(ConstParm, ReferenceParm)
	class UFortPlayerPawn*                       K2Node_CustomEvent_Pawn;                           // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPart*                  K2Node_CustomEvent_Part;                           // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                K2Node_CustomEvent_MeshPart;                       // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               K2Node_CustomEvent_PartType;                       // 0x1B8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C10[0x3];                                     // Fixing Size After Last Property
	float                                        CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast; // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
