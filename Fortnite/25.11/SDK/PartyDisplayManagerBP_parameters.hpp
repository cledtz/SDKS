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

// 0x380 (0x380 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetPreScaleLocations
struct APartyDisplayManagerBP_C_ResetPreScaleLocations_Params
{
public:
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0xE0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x1C0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult_3;  // 0x2A0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x5B (0x5B - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.RestoreTeleportMIDsInProgress
struct APartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue; // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143F[0x3];                                     // Fixing Size After Last Property..
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1440[0x5];                                     // Fixing Size After Last Property..
	struct FUniqueNetIdRepl                      CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue; // 0x20(0x30)(HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyMemberLocation          CallFunc_GetPartyMemberLocation_LocationOut;       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPartyMemberLocation_ReturnValue;       // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandlePartyMemberInProgressDisplayChanges
struct APartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1441[0x7];                                     // Fixing Size After Last Property..
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1442[0x7];                                     // Fixing Size After Last Property..
	class UPrimitiveComponent*                   K2Node_DynamicCast_AsPrimitive_Component;          // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1443[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1444[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1445[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1446[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              CallFunc_K2_GetTextureParameterValue_ReturnValue;  // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              CallFunc_K2_GetTextureParameterValue_ReturnValue_1; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_1; // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_2; // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_3; // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_4; // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_5; // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_6; // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_7; // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_8; // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_9; // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_10; // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue_11; // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1447[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x73 (0x73 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PartyMemberInProgressCheck
struct APartyDisplayManagerBP_C_PartyMemberInProgressCheck_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerIndex;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex; // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1448[0x7];                                     // Fixing Size After Last Property..
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1449[0x7];                                     // Fixing Size After Last Property..
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyInProgressEnabled_ReturnValue;     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144A[0x7];                                     // Fixing Size After Last Property..
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue; // 0x40(0x30)(HasGetValueTypeHash)
	enum class EFortPartyMemberLocation          CallFunc_GetPartyMemberLocation_LocationOut;       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPartyMemberLocation_ReturnValue;       // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPrefabActorForCurrentDisplayedItem
struct APartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostSetupPrefabVisuals
struct APartyDisplayManagerBP_C_PostSetupPrefabVisuals_Params
{
public:
};

// 0x52 (0x52 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem
struct APartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem_Params
{
public:
	class UMeshComponent*                        OutDisplayedMesh;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerParachute*                  K2Node_DynamicCast_AsFort_Player_Parachute;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144B[0x7];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                CallFunc_GetParachuteRootMesh_ReturnValue;         // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144C[0x7];                                     // Fixing Size After Last Property..
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
struct APartyDisplayManagerBP_C_GetItemDefinitionToShow_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144D[0x5];                                     // Fixing Size After Last Property..
	class UFortItemDefinition*                   K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xCD (0xCD - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
struct APartyDisplayManagerBP_C_SetUIOverrideVisuals_Params
{
public:
	class UTexture2D*                            Large_Texture;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Item;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       Rarity;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144E[0x7];                                     // Fixing Size After Last Property..
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x18(0x80)()
	class FString                                CallFunc_GetPersistentName_ReturnValue;            // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144F[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1450[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_FindSubstring_ReturnValue_1;              // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindSubstring_ReturnValue_2;              // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_1;             // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_2;             // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1451[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_FindSubstring_ReturnValue_3;              // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_3;             // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
struct APartyDisplayManagerBP_C_GetWeaponPlacementTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xC0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1452[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x130(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_ComposeTransforms_ReturnValue;            // 0x190(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
struct APartyDisplayManagerBP_C_UpdatePreviewMeshTransforms_Params
{
public:
	struct FTransform                            CallFunc_GetPreviewMeshWorldTransform_ReturnValue; // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x60(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Percent_FloatFloat_ReturnValue;           // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x360 (0x360 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
struct APartyDisplayManagerBP_C_GetItemPreviewOffset_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1453[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1454[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetPreviewMeshOffset_ReturnValue;         // 0x80(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xE0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue_1;    // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0x18A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x18B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1455[0x3];                                     // Fixing Size After Last Property..
	struct FTransform                            K2Node_Select_Default;                             // 0x190(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x1F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x208(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x220(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1456[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x240(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_2;              // 0x2A0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_ComposeTransforms_ReturnValue;            // 0x300(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x284 (0x284 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
struct APartyDisplayManagerBP_C_GetPreviewMeshWorldTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable;                                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1457[0x7];                                     // Fixing Size After Last Property..
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition;   // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1458[0x7];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetItemPreviewOffset_ReturnValue;         // 0x80(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetWeaponPlacementTransform_ReturnValue;  // 0xE0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x148(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x160(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_ComposeTransforms_ReturnValue;            // 0x1C0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_ComposeTransforms_ReturnValue_1;          // 0x220(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x151 (0x151 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
struct APartyDisplayManagerBP_C_SetupStaticMeshVisuals_Params
{
public:
	class UStaticMesh*                           NewMesh;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition;   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x70(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
struct APartyDisplayManagerBP_C_SetupSkeletalMeshVisuals_Params
{
public:
	class USkeletalMesh*                         NewMesh;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition;   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x70(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x151 (0x151 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
struct APartyDisplayManagerBP_C_ResetVisuals_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1459[0xD];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x70(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
struct APartyDisplayManagerBP_C_ScaleAnimLevel__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
struct APartyDisplayManagerBP_C_ScaleAnimLevel__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
struct APartyDisplayManagerBP_C_ScaleAnimEvolve__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
struct APartyDisplayManagerBP_C_ScaleAnimEvolve__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__FinishedFunc
struct APartyDisplayManagerBP_C_HoloMatColorPulse__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__UpdateFunc
struct APartyDisplayManagerBP_C_HoloMatColorPulse__UpdateFunc_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Completed_01D864884864692DBB7035B0996A5437
struct APartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 RequestID;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
struct APartyDisplayManagerBP_C_ShowItem_Params
{
public:
	class UFortItem*                             ItemToView;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 RequestID;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
struct APartyDisplayManagerBP_C_PlayLevelUpEffect_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
struct APartyDisplayManagerBP_C_PlayEvolutionEffect_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
struct APartyDisplayManagerBP_C_CelebrateWithFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
struct APartyDisplayManagerBP_C_PerformScaleMeshFX_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
struct APartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted_Params
{
public:
	class UFortItem*                             ItemWhoseAssetsWereLoaded;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       LoadedAssets;                                      // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGuid                                 RequestID;                                         // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
struct APartyDisplayManagerBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Set Character Parts Visibility
struct APartyDisplayManagerBP_C_Set_Character_Parts_Visibility_Params
{
public:
	bool                                         NewVisible;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CharacterCustomizationFinished
struct APartyDisplayManagerBP_C_CharacterCustomizationFinished_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveBeginPlay
struct APartyDisplayManagerBP_C_ReceiveBeginPlay_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnPlayerPawnAddedToLobby
struct APartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResOutPawnFromLobby
struct APartyDisplayManagerBP_C_ResOutPawnFromLobby_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        PartyIndex;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals
struct APartyDisplayManagerBP_C_SetupPrefabVisuals_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnEmoteSetupFinished
struct APartyDisplayManagerBP_C_OnEmoteSetupFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnMeshLODStreamingFinished
struct APartyDisplayManagerBP_C_OnMeshLODStreamingFinished_Params
{
public:
};

// 0xB48 (0xB48 - 0x0)
// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
struct APartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x20(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortItem*                             K2Node_Event_ItemWhoseAssetsWereLoaded;            // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       K2Node_Event_LoadedAssets;                         // 0x108(0x10)(ConstParm, ReferenceParm)
	struct FGuid                                 K2Node_Event_RequestId;                            // 0x118(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition;   // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     K2Node_MakeArray_Array;                            // 0x130(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145B[0x6];                                     // Fixing Size After Last Property..
	TArray<class UFortItem*>                     K2Node_MakeArray_Array_1;                          // 0x148(0x10)(ConstParm, ReferenceParm)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition_1; // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            CallFunc_GetPreviewStaticMeshAsset_Asset;          // 0x160(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetPreviewStaticMeshAsset_ReturnValue;    // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145C[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue;         // 0x198(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class UStaticMesh*                           K2Node_DynamicCast_AsStatic_Mesh;                  // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145D[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145E[0x7];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_GetPreviewSkeletalMeshAsset_Asset;        // 0x1E8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue;  // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145F[0x7];                                     // Fixing Size After Last Property..
	class UFortItemDefinition*                   CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2; // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1460[0x7];                                     // Fixing Size After Last Property..
	class USkeletalMesh*                         K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x23A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1461[0x5];                                     // Fixing Size After Last Property..
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition_2; // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1462[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetWeaponPlacementTransform_ReturnValue;  // 0x250(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x2B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x2C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x2E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x2F8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<TSoftObjectPtr<class UObject>>        CallFunc_GetPreviewAssets_ReturnValue;             // 0x3D8(0x10)(ReferenceParm)
	bool                                         K2Node_CustomEvent_NewVisible;                     // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x3E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1463[0x6];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue; // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1464[0x7];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x400(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x460(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x478(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x490(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x4A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x4B0(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1465[0x4];                                     // Fixing Size After Last Property..
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x4C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x4D0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortItem*                             K2Node_Event_ItemToView;                           // 0x5B0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 K2Node_Event_RequestId_1;                          // 0x5B8(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     K2Node_MakeArray_Array_2;                          // 0x5C8(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x5D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1466[0x6];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_Event_Pawn_2;                               // 0x5E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x5E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x5F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1467[0x6];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_Event_Pawn_1;                               // 0x5F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1468[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x608(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x620(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x628(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1469[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex; // 0x634(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue; // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146A[0x7];                                     // Fixing Size After Last Property..
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x640(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146B[0x7];                                     // Fixing Size After Last Property..
	struct FUniqueNetIdRepl                      CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue; // 0x650(0x30)(HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_Event_Pawn;                                 // 0x680(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_PartyIndex;                           // 0x688(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x68C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146C[0x3];                                     // Fixing Size After Last Property..
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;         // 0x690(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_B_Execution_Happened_Variable;           // 0x699(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInCharacterCustomization_ReturnValue;   // 0x69A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_A_Execution_Happened_Variable;           // 0x69B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x69C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146D[0x3];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x6A0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition_3; // 0x700(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x708(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1; // 0x7E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena_2;         // 0x7F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x7F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146E[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetContrailFXComponent_ReturnValue;       // 0x800(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x808(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFrontendAnimInstance*                 K2Node_DynamicCast_AsFrontend_Anim_Instance;       // 0x810(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x819(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x81A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x81B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_146F[0x4];                                     // Fixing Size After Last Property..
	class UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals* CallFunc_SetupPrefabVisuals_ReturnValue;           // 0x820(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1470[0x7];                                     // Fixing Size After Last Property..
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_2;     // 0x830(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x839(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1471[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x840(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x858(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1472[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2; // 0x860(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x868(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1473[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x86C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x870(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1474[0x4];                                     // Fixing Size After Last Property..
	class UFortItem*                             Temp_object_Variable;                              // 0x880(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     K2Node_MakeArray_Array_3;                          // 0x888(0x10)(ConstParm, ReferenceParm)
	struct FGuid                                 Temp_struct_Variable;                              // 0x898(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_CustomEvent_Item;                           // 0x8A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 K2Node_CustomEvent_RequestId;                      // 0x8B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x8C0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1475[0x4];                                     // Fixing Size After Last Property..
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyMemberLocation          CallFunc_GetPartyMemberLocation_LocationOut;       // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPartyMemberLocation_ReturnValue;       // 0x8D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1476[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x8DC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1477[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue_1;            // 0x8F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x900(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x908(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1478[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetRelativeTransform_ReturnValue;         // 0x920(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x980(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x988(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1479[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x990(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x998(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentLockerSubslotIndex_ReturnValue; // 0x9A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_147A[0x4];                                     // Fixing Size After Last Property..
	class AB_EmotePreviewDisplay_C*              K2Node_DynamicCast_AsB_Emote_Preview_Display;      // 0x9A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_147B[0x7];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class AActor>                  CallFunc_GetPreviewPrefabAssetAtSubSlot_Asset;     // 0x9B8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetPreviewPrefabAssetAtSubSlot_ReturnValue; // 0x9E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_147C[0x7];                                     // Fixing Size After Last Property..
	TSubclassOf<class UObject>                   CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x9E8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsActor;                   // 0x9F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x9F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_147D[0x7];                                     // Fixing Size After Last Property..
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionToShow_ItemDefinition_4; // 0xA00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0xA08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_147E[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0xA10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xA28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0xA40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_3;     // 0xA58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_4;     // 0xA60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0xA68(0xD0)(ContainsInstancedReference)
	double                                       CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast; // 0xB38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast_1; // 0xB40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
