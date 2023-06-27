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

// 0x18 (0x18 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color
struct APlayerPawn_Athena_Generic_C_Melee_Effect_Color_Params
{
public:
	struct FVector                               Melee_Color_Set;                                   // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnRep_CapsuleEnlarged
struct APlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79F8[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79F9[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue; // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleHalfHeight_HalfHeight_ImplicitCast; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79FA[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableSet_CachedCapsuleHalfHeight_ImplicitCast; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayShieldDestroyedSound
struct APlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound_Params
{
public:
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x0(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class APawn*                                 InstigatorLocal;                                   // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_BreakGameplayCueParameters_EffectContext; // 0xE0(0x18)()
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0xF8(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0xFC(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x100(0x20)()
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x120(0x20)()
	struct FVector                               CallFunc_BreakGameplayCueParameters_Location;      // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakGameplayCueParameters_Normal;        // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_Instigator;    // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x198(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79FB[0x7];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x1A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79FC[0x7];                                     // Fixing Size After Last Property..
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCriticalHit_ReturnValue;                // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyViewed_ReturnValue;              // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79FD[0x4];                                     // Fixing Size After Last Property..
	class USoundBase*                            K2Node_Select_Default;                             // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetAudioForDamageEvent_AudioAsset;        // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x1D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReInitFrontendPetDisplay
struct APlayerPawn_Athena_Generic_C_ReInitFrontendPetDisplay_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled
struct APlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79FE[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79FF[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick
struct APlayerPawn_Athena_Generic_C_DisableWaterLevelTick_Params
{
public:
};

// 0x278 (0x278 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
struct APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params
{
public:
	class UMaterialInterface*                    Material_to_Apply;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      Empty_MID_Array;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        TranslucentSortPriority;                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A00[0x4];                                     // Fixing Size After Last Property..
	class UPoseableMeshComponent*                PoseableMesh;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               CustomBodyType;                                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A01[0x7];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                PartMesh;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue;   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A02[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A03[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A04[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A05[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_Array_Get_Item_1;                         // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A06[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A07[0x2];                                     // Fixing Size After Last Property..
	class USceneComponent*                       K2Node_Select_Default;                             // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A08[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetRelativeTransform_ReturnValue;         // 0xB0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A09[0x4];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x118(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_7A0A[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Temp_struct_Variable;                              // 0x200(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A0B[0x7];                                     // Fixing Size After Last Property..
	class UPoseableMeshComponent*                CallFunc_AddComponent_ReturnValue;                 // 0x268(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkinnedMeshComponent*                 K2Node_Select_Default_1;                           // 0x270(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody
struct APlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody_Params
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Master;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkinnedMeshComponent*                 MasterToUse;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetAttachSocketName_ReturnValue;          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A0C[0x3];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_GetAttachParent_ReturnValue;              // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A0D[0x6];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetRelativeTransform_ReturnValue;         // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x90(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x271 (0x271 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
struct APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params
{
public:
	class USkeletalMeshComponent*                DuplicatedSkeletalMeshComponent;                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Material_to_Apply;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      Empty_MID_Array;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        TranslucentSortPriority;                           // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A0E[0x4];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                MeshPart;                                          // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               CustomBodyType;                                    // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A0F[0x5];                                     // Fixing Size After Last Property..
	class USkeletalMesh*                         CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue;   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A10[0x6];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x48(0x10)(ReferenceParm)
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A11[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A12[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A13[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A14[0x6];                                     // Fixing Size After Last Property..
	class USceneComponent*                       K2Node_Select_Default;                             // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetRelativeTransform_ReturnValue;         // 0x90(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A15[0x4];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0xF8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_7A16[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Temp_struct_Variable;                              // 0x1E0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A17[0x7];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                CallFunc_AddComponent_ReturnValue;                 // 0x248(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                K2Node_Select_Default_1;                           // 0x250(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_Array_Get_Item_1;                         // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript
struct APlayerPawn_Athena_Generic_C_UserConstructionScript_Params
{
public:
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight
struct APlayerPawn_Athena_Generic_C_MeleeSwingRight_Params
{
public:
	bool                                         First_Right;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft
struct APlayerPawn_Athena_Generic_C_MeleeSwingLeft_Params
{
public:
	bool                                         First_Left;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight_End
struct APlayerPawn_Athena_Generic_C_MeleeSwingRight_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft_End
struct APlayerPawn_Athena_Generic_C_MeleeSwingLeft_End_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects
struct APlayerPawn_Athena_Generic_C_OnDamagePlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A18[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xE0 (0xE0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded
struct APlayerPawn_Athena_Generic_C_OnLanded_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped
struct APlayerPawn_Athena_Generic_C_OnWeaponEquipped_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft
struct APlayerPawn_Athena_Generic_C_FootStepLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight
struct APlayerPawn_Athena_Generic_C_FootStepRight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized
struct APlayerPawn_Athena_Generic_C_OnCharacterPartsReinitialized_Params
{
public:
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A19[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A1A[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed
struct APlayerPawn_Athena_Generic_C_ReceiveDestroyed_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer
struct APlayerPawn_Athena_Generic_C_OnDeathServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A1B[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Entered WaterVolume
struct APlayerPawn_Athena_Generic_C_Entered_WaterVolume_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed
struct APlayerPawn_Athena_Generic_C_CharacterDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed
struct APlayerPawn_Athena_Generic_C_BindOnDestroyed_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsNotify
struct APlayerPawn_Athena_Generic_C_AnimTrailsNotify_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsSetup
struct APlayerPawn_Athena_Generic_C_AnimTrailsSetup_Params
{
public:
	class UParticleSystem*                       ParticleSystemReference;                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NiagaraSystemReference;                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  FirstSocketName;                                   // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SecondSocketName;                                  // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Width;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A1C[0x4];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    OverrideParticleComp;                              // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  OverideFirstSocketName;                            // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OverideSecondSocketName;                           // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsDisable
struct APlayerPawn_Athena_Generic_C_AnimTrailsDisable_Params
{
public:
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.SpookyMist.Loop
struct APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A1D[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.PotionConsumed
struct APlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A1E[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded
struct APlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A1F[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed
struct APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A20[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied
struct APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A21[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Loop.Shadow.Bomb
struct APlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A22[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ToggleLandFX
struct APlayerPawn_Athena_Generic_C_ToggleLandFX_Params
{
public:
	bool                                         NewHidden;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnMovementStyleChanged
struct APlayerPawn_Athena_Generic_C_OnMovementStyleChanged_Params
{
public:
	enum class EFortMovementStyle                PreviousMovementStyle;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementStyle                NewMovementStyle;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Hide VFX In Frontend Hologram
struct APlayerPawn_Athena_Generic_C_Hide_VFX_In_Frontend_Hologram_Params
{
public:
	bool                                         IsFrontEndHologram;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnPart
struct APlayerPawn_Athena_Generic_C_OnPart_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPart*                  Part;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                MeshPart;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               PartType;                                          // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnPartApplied
struct APlayerPawn_Athena_Generic_C_OnPartApplied_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPart*                  Part;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                MeshPart;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               PartType;                                          // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xFF8 (0xFF8 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic
struct APlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A23[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              Temp_object_Variable;                              // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A24[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A25[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetScalarParameterValue_ReturnValue_1;    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeLiteralDouble_ReturnValue;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A26[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue_1;            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A27[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_2;                               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A28[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_MakeLiteralDouble_ReturnValue_1;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A29[0x4];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInterface*>            K2Node_MakeArray_Array_1;                          // 0x78(0x10)(ReferenceParm)
	int32                                        Temp_int_Variable_3;                               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A2A[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A2B[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A2C[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue_2;            // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_1;                // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A2D[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_MakeLiteralDouble_ReturnValue_2;          // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A2E[0x7];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInstanceDynamic*>      K2Node_MakeArray_Array_2;                          // 0xD0(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A2F[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue_3;            // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A30[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_MakeLiteralDouble_ReturnValue_3;          // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A31[0x4];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInterface*>            K2Node_MakeArray_Array_3;                          // 0x100(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x115(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x116(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A32[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue_4;            // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A33[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_5;                               // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_6;                               // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeLiteralDouble_ReturnValue_4;          // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A34[0x4];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInterface*>            K2Node_MakeArray_Array_4;                          // 0x140(0x10)(ReferenceParm)
	int32                                        Temp_int_Variable_7;                               // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A35[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_2;                // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A36[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x16D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A37[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue_5;            // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_3;                // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A38[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeLiteralDouble_ReturnValue_5;          // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A39[0x7];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInterface*>            K2Node_MakeArray_Array_5;                          // 0x198(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_First_Right;                          // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_First_Left;                           // 0x1AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A3A[0x1];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage_1;                             // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A3B[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_Event_DamageTags_1;                         // 0x1B8(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum_1;                           // 0x1D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo_1;                            // 0x1F0(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             K2Node_Event_InstigatedBy_1;                       // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser_1;                       // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext_1;                      // 0x2E0(0x18)()
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x2F8(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortWeapon*                           K2Node_Event_NewWeapon;                            // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           K2Node_Event_PrevWeapon;                           // 0x3E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_7;               // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A3C[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_7;              // 0x3F0(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_6;               // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A3D[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_6;              // 0x4C8(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x599(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerControlled_ReturnValue;           // 0x59A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A3E[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetScalarParameterValue_ReturnValue_2;    // 0x59C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x5A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x5A8(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x5C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x5E0(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x6C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x6C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x6D0(0x18)()
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x6E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A3F[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x6F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A40[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_8;                               // 0x704(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x708(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x70C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_9;                               // 0x710(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A41[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_4;                // 0x718(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0x724(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A42[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x728(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_10;                // 0x72C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_10;                              // 0x730(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A43[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_5;                // 0x738(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x740(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_5;           // 0x744(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A44[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_11;                // 0x748(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x74C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A45[0x3];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x750(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x759(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x75A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam; // 0x75B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A46[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_CustomEvent_DestroyedActor;                 // 0x760(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bActive;                              // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A47[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x76C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDelegateHandleController             CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out; // 0x778(0x10)()
	class UParticleSystem*                       K2Node_Event_ParticleSystemReference;              // 0x788(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        K2Node_Event_NiagaraSystemReference;               // 0x790(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_FirstSocketName;                      // 0x798(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_SecondSocketName;                     // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Width;                                // 0x7A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A48[0x4];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    K2Node_Event_OverrideParticleComp;                 // 0x7A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_OverideFirstSocketName;               // 0x7B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_OverideSecondSocketName;              // 0x7B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x7B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A49[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemAsset*                        CallFunc_GetFXSystemAsset_ReturnValue;             // 0x7C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_5;               // 0x7C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A4A[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_5;              // 0x7D0(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A4B[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x8A4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x8B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A4C[0x7];                                     // Fixing Size After Last Property..
	struct FDelegateHandleController             CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_1; // 0x8B8(0x10)()
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x8C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x8D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_4;               // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A4D[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_4;              // 0x8E0(0xD0)(ConstParm, ContainsInstancedReference)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_3;               // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A4E[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_3;              // 0x9B8(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0xA88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_2;               // 0xA89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A4F[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_2;              // 0xA90(0xD0)(ConstParm, ContainsInstancedReference)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_1;               // 0xB60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A50[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_1;              // 0xB68(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0xC38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0xC39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType;                 // 0xC3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A51[0x5];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters;                // 0xC40(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0xD10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_4;          // 0xD11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0xD12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A52[0x5];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_SetAssetOrSpawnAltFXAttached_ReturnValue; // 0xD18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xD20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_NewHidden;                      // 0xD24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementStyle                K2Node_Event_PreviousMovementStyle;                // 0xD25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementStyle                K2Node_Event_NewMovementStyle;                     // 0xD26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xD27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0xD28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_isFrontEndHologram;             // 0xD2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0xD2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_5;          // 0xD2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0xD2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A53[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0xD30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A54[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_CustomEvent_Pawn_1;                         // 0xD38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPart*                  K2Node_CustomEvent_Part_1;                         // 0xD40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                K2Node_CustomEvent_MeshPart_1;                     // 0xD48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               K2Node_CustomEvent_PartType_1;                     // 0xD50(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A55[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xD54(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0xD60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A56[0x7];                                     // Fixing Size After Last Property..
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0xD68(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0xD78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    K2Node_DynamicCast_AsFXSystem_Component;           // 0xD80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A57[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ComponentHasTag_ReturnValue;              // 0xD91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A58[0x6];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              Temp_object_Variable_1;                            // 0xD98(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_11;                              // 0xDA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_12;                // 0xDA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Temp_object_Variable_2;                            // 0xDA8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Temp_object_Variable_3;                            // 0xDB0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0xDB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0xDBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0xDC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0xDC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0xDC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A59[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0xDCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_CustomEvent_Pawn;                           // 0xDD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPart*                  K2Node_CustomEvent_Part;                           // 0xDD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                K2Node_CustomEvent_MeshPart;                       // 0xDE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               K2Node_CustomEvent_PartType;                       // 0xDE8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0xDE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0xDEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0xDEB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0xDEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0xDED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_26;                   // 0xDEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A5A[0x1];                                     // Fixing Size After Last Property..
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0xDF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xDF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_27;                   // 0xE00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A5B[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0xE04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0xE08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A5C[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_6;                // 0xE10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_6;            // 0xE18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_28;                   // 0xE1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A5D[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_6;            // 0xE20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_6;           // 0xE24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A5E[0x3];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0xE28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xE30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A5F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0xE34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue_1;       // 0xE38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0xE40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_29;                   // 0xE48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A60[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0xE4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0xE50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A61[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_7;                // 0xE58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_7;            // 0xE60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_30;                   // 0xE64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A62[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_7;            // 0xE68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_7;           // 0xE6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A63[0x3];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;  // 0xE70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xE78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A64[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0xE7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue_2;       // 0xE80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0xE88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_31;                   // 0xE90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A65[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0xE94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0xE98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A66[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_8;                // 0xEA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_8;            // 0xEA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_32;                   // 0xEAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A67[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_8;            // 0xEB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_8;           // 0xEB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A68[0x3];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2;  // 0xEB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xEC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A69[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_18;                 // 0xEC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue_3;       // 0xEC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0xED0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_33;                   // 0xED8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A6A[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_19;                 // 0xEDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_20;                 // 0xEE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A6B[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_9;                // 0xEE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_9;            // 0xEF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_34;                   // 0xEF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A6C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_9;            // 0xEF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_9;           // 0xEFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A6D[0x3];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3;  // 0xF00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xF08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A6E[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_21;                 // 0xF0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue_4;       // 0xF10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_4; // 0xF18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_35;                   // 0xF20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A6F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_22;                 // 0xF24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_23;                 // 0xF28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A70[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_10;               // 0xF30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_10;           // 0xF38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_36;                   // 0xF3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A71[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_10;           // 0xF40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_10;          // 0xF44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A72[0x3];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic_4;  // 0xF48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xF50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A73[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_24;                 // 0xF54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue_5;       // 0xF58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_5; // 0xF60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_37;                   // 0xF68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A74[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_25;                 // 0xF6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_26;                 // 0xF70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A75[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_11;               // 0xF78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_11;           // 0xF80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_38;                   // 0xF84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A76[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_11;           // 0xF88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_11;          // 0xF8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A77[0x3];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic_5;  // 0xF90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0xF98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A78[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_27;                 // 0xF9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Temp_object_Variable_4;                            // 0xFA0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_28;                 // 0xFA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A79[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              Temp_object_Variable_5;                            // 0xFB0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_29;                 // 0xFB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast; // 0xFBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_1; // 0xFC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_2; // 0xFC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_3; // 0xFC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_4; // 0xFCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_5; // 0xFD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_6; // 0xFD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_7; // 0xFD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_8; // 0xFDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_9; // 0xFE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_10; // 0xFE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_11; // 0xFE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A7A[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0xFF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsMIDInitialized__DelegateSignature
struct APlayerPawn_Athena_Generic_C_OnCharacterPartsMIDInitialized__DelegateSignature_Params
{
public:
};

// 0x110 (0x110 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayDamageEffect__DelegateSignature
struct APlayerPawn_Athena_Generic_C_PlayDamageEffect__DelegateSignature_Params
{
public:
	struct FGameplayTagContainer                 Damage_Tags;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FHitResult                            Hit_Info;                                          // 0x20(0xE0)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             Instigated_By;                                     // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Damage_Causer;                                     // 0x108(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_End__DelegateSignature
struct APlayerPawn_Athena_Generic_C_AnimNotify_End__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_Begin__DelegateSignature
struct APlayerPawn_Athena_Generic_C_AnimNotify_Begin__DelegateSignature_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
