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
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Orphaned
struct UNPC_Pawn_Parent_C_Orphaned_Params
{
public:
	bool                                         IsOrphaned;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_941B[0x7];                                     // Fixing Size After Last Property..
	class UFortPawn*                             AttachedPawn;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RemoveLibraryCollection
struct UNPC_Pawn_Parent_C_RemoveLibraryCollection_Params
{
public:
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumGameplayTagsInContainer_ReturnValue; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Check Tag
struct UNPC_Pawn_Parent_C_Check_Tag_Params
{
public:
	struct FGameplayTagContainer                 Tag_Container;                                     // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ShouldDefault;                                     // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_941C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumGameplayTagsInContainer_ReturnValue; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibraryCollection
struct UNPC_Pawn_Parent_C_UpdateSoundLibraryCollection_Params
{
public:
	bool                                         AddLibraries;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ValidLibraries;                                    // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTagContainer_ReturnValue; // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_Tag_ShouldDefault;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_Tag_ShouldDefault_1;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_941D[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumGameplayTagsInContainer_ReturnValue; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_941E[0x3];                                     // Fixing Size After Last Property..
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               CallFunc_NPC_GetAlertLevelInfo_AlertLevel;         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_941F[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag;      // 0x1C(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetAlertLevelInfo_ValidDataFound;     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryShowHealthBar
struct UNPC_Pawn_Parent_C_TryShowHealthBar_Params
{
public:
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9420[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9421[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9422[0x7];                                     // Fixing Size After Last Property..
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_C*                    K2Node_DynamicCast_AsNPCStatus_Widget;             // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9423[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x30(0x10)(ReferenceParm)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9424[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9425[0x4];                                     // Fixing Size After Last Property..
	class UPawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9426[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetDistanceBetweenActors_Distance;        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9427[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9428[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9429[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Death Time
struct UNPC_Pawn_Parent_C_OnRep_NPC_Death_Time_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayStateChangeAudio
struct UNPC_Pawn_Parent_C_PlayStateChangeAudio_Params
{
public:
	enum class Enum_NPC_AlertLevel               Index;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.IsConverted
struct UNPC_Pawn_Parent_C_IsConverted_Params
{
public:
	bool                                         IsConverted;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942A[0x7];                                     // Fixing Size After Last Property..
	class UFortPawnComponent_Convert*            CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       CallFunc_GetConverterPawn_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GhostCollisionSettings
struct UNPC_Pawn_Parent_C_NPC_GhostCollisionSettings_Params
{
public:
	bool                                         NoCollisionForRanged;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoCollisionForMelee;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoCollisionForProjectiles;                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnlyOverlapCollisionForPawns;                      // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CanUpdateSoundLib
struct UNPC_Pawn_Parent_C_CanUpdateSoundLib_Params
{
public:
	TArray<class USoundLibrary*>                 TargetArray;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942B[0x7];                                     // Fixing Size After Last Property..
	class USoundLibrary*                         CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundLibrary*                         CallFunc_Array_Get_Item_1;                         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayAdditiveHitReacts
struct UNPC_Pawn_Parent_C_PlayAdditiveHitReacts_Params
{
public:
	struct FVector                               Hit_Direction;                                     // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Anim_Montage;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageRemovesIdlePhaseTagGE
struct UNPC_Pawn_Parent_C_NPC_DamageRemovesIdlePhaseTagGE_Params
{
public:
};

// 0x4A (0x4A - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GetSoundFoleyLibrary
struct UNPC_Pawn_Parent_C_GetSoundFoleyLibrary_Params
{
public:
	class USoundLibrary*                         CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942C[0x7];                                     // Fixing Size After Last Property..
	class USoundLibrary*                         CallFunc_Array_Get_Item_1;                         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942D[0x7];                                     // Fixing Size After Last Property..
	class USoundLibrary*                         CallFunc_Array_Get_Item_2;                         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundLibrary*                         CallFunc_Array_Get_Item_3;                         // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CanBeInteractedWith
struct UNPC_Pawn_Parent_C_NPC_CanBeInteractedWith_Params
{
public:
	bool                                         CanInteract;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckForDespawnIfStaleToPlayers
struct UNPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers_Params
{
public:
	class UFortPlayerPawn*                       ClosestFortPlayerPawn;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942E[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942F[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1; // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9430[0x5];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9431[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetDistanceBetweenActors_Distance;        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetCanDropLoot
struct UNPC_Pawn_Parent_C_NPC_SetCanDropLoot_Params
{
public:
	bool                                         CanDropLoot;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetSafeZonePhase
struct UNPC_Pawn_Parent_C_NPC_GetSafeZonePhase_Params
{
public:
	int32                                        SafeZonePhase;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9432[0x4];                                     // Fixing Size After Last Property..
	class UGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAthena_GameState_C*                   K2Node_DynamicCast_AsAthena_Game_State;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9433[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetSafeZonePhase_ReturnValue;             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Leader
struct UNPC_Pawn_Parent_C_OnRep_NPC_Leader_Params
{
public:
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9434[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x8(0xD0)(ContainsInstancedReference)
	float                                        CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast; // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Play Water Splash at Water Surface
struct UNPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface_Params
{
public:
	class UFortWaterBodyActor*                   Water_Body;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Enter_Water;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9435[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9436[0x7];                                     // Fixing Size After Last Property..
	struct FWaterSurfaceInfo                     CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo; // 0x30(0x68)(NoDestructor)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0xA0(0xD0)(ContainsInstancedReference)
	struct FGameplayTag                          K2Node_Select_Default;                             // 0x170(0x4)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast; // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ResetMaterialFromDeath
struct UNPC_Pawn_Parent_C_ResetMaterialFromDeath_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9437[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x18(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_SelectedPrimitiveDataFloat
struct UNPC_Pawn_Parent_C_OnRep_SelectedPrimitiveDataFloat_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryRemoved
struct UNPC_Pawn_Parent_C_CheckSoundLibraryRemoved_Params
{
public:
	TArray<class USoundLibrary*>                 Libraries;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9438[0x7];                                     // Fixing Size After Last Property..
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryAdded
struct UNPC_Pawn_Parent_C_CheckSoundLibraryAdded_Params
{
public:
	TArray<class USoundLibrary*>                 Libraries;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundLibrary*                         CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibrary
struct UNPC_Pawn_Parent_C_UpdateSoundLibrary_Params
{
public:
	enum class Enum_NPC_AlertLevel               Alert_Level;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUpdateSoundLib_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUpdateSoundLib_ReturnValue_1;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUpdateSoundLib_ReturnValue_2;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9439[0x2];                                     // Fixing Size After Last Property..
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x53 (0x53 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ClearOutTargetSlots
struct UNPC_Pawn_Parent_C_NPC_ClearOutTargetSlots_Params
{
public:
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0(0x20)()
	FInterfaceProperty_                          CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x30(0x20)()
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue_1;                     // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateInteract
struct UNPC_Pawn_Parent_C_NPC_UpdateInteract_Params
{
public:
	bool                                         CanInteract;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnabledInteract;                                   // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasInteractEnabled;                                // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_HasLeader__HasLeader_;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943A[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                CallFunc_NPC_HasLeader__Leader;                    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HasLeader?
struct UNPC_Pawn_Parent_C_NPC_HasLeader__Params
{
public:
	bool                                         HasLeader_;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943B[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                Leader;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLeader
struct UNPC_Pawn_Parent_C_NPC_SetLeader_Params
{
public:
	class UActor*                                Leader;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success_;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943C[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                LeaderSet;                                         // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_HasLeader__HasLeader_;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943D[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                CallFunc_NPC_HasLeader__Leader;                    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943E[0x4];                                     // Fixing Size After Last Property..
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AttemptToSetLeader
struct UNPC_Pawn_Parent_C_NPC_AttemptToSetLeader_Params
{
public:
	class UActor*                                PossibleLeader;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EUnconvertReason                  UnconvertReason;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_SetLeader_Success_;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943F[0x6];                                     // Fixing Size After Last Property..
	class UActor*                                CallFunc_NPC_SetLeader_LeaderSet;                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SetPrimitiveDataFloat
struct UNPC_Pawn_Parent_C_SetPrimitiveDataFloat_Params
{
public:
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9440[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SelectPrimitiveDataFloat
struct UNPC_Pawn_Parent_C_SelectPrimitiveDataFloat_Params
{
public:
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9441[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9442[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1; // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2; // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9443[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StoreOriginalGravityAndRotation
struct UNPC_Pawn_Parent_C_StoreOriginalGravityAndRotation_Params
{
public:
	double                                       K2Node_VariableSet_NPC_OriginalGravityScale_ImplicitCast; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DisableIntroPhaseBehavior
struct UNPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9444[0x2];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue; // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageAttemptDisableIntroPhaseBehavior
struct UNPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior_Params
{
public:
	struct FGameplayTagContainer                 DamageTags;                                        // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTagQueryEmpty_ReturnValue;              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD5 (0xD5 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotIsUsingOverride
struct UNPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride_Params
{
public:
	enum class Enum_NPC_TargetSlots              TargetSlotType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9445[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                TargetWeWantToSlotOnto;                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Override;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9446[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                NPC_TargetSlotOverrideGE;                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NPC_TargetSlotInfo_TargetSlotCount;       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NPC_TargetSlotInfo_TargetSlotMax;         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NPC_TargetSlotInfo_NPC_TargetSlotsRequired; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_TargetSlotInfo_TargetSlotsMaxOrMore;  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_TargetSlotInfo_TargetSlotCountIsExactlyMax; // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_TargetSlotInfo_NPC_IsTargetSlotOwner; // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_TargetSlotInfo_NPC_HasSpaceToSlotOnTarget; // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_TargetSlots              CallFunc_NPC_TargetSlotInfo_TargetSlotTypeOut;     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9447[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                CallFunc_NPC_TargetSlotInfo_TargetSlotCountingGE;  // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        CallFunc_NPC_TargetSlotInfo_AI_TargetSlotSizeHF;   // 0x40(0x28)()
	struct FScalableFloat                        CallFunc_NPC_TargetSlotInfo_AI_TargetSlotDurationHF; // 0x68(0x28)()
	class UClass*                                CallFunc_NPC_TargetSlotInfo_TargetSlotOverrideGE;  // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_NPC_TargetSlotInfo_TargetSlotOwnerGE;     // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_NPC_TargetSlotInfo_TargetSlotCountingMaxedGE; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9448[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9449[0x7];                                     // Fixing Size After Last Property..
	TArray<class UClass*>                        K2Node_MakeArray_Array;                            // 0xC0(0x10)(ReferenceParm)
	int32                                        CallFunc_GetTotalGameplayEffectCount_FinalEffectCount; // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F7 (0x1F7 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotInfo
struct UNPC_Pawn_Parent_C_NPC_TargetSlotInfo_Params
{
public:
	enum class Enum_NPC_TargetSlots              TargetSlotType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944A[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                TargetWeWantToSlotOnto;                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetSlotCount;                                   // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetSlotMax;                                     // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NPC_TargetSlotsRequired;                           // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TargetSlotsMaxOrMore;                              // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TargetSlotCountIsExactlyMax;                       // 0x1D(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_IsTargetSlotOwner;                             // 0x1E(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_HasSpaceToSlotOnTarget;                        // 0x1F(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_TargetSlots              TargetSlotTypeOut;                                 // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944B[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                TargetSlotCountingGE;                              // 0x28(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        AI_TargetSlotSizeHF;                               // 0x30(0x28)(Parm, OutParm)
	struct FScalableFloat                        AI_TargetSlotDurationHF;                           // 0x58(0x28)(Parm, OutParm)
	class UClass*                                TargetSlotOverrideGE;                              // 0x80(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TargetSlotOwnerGE;                                 // 0x88(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TargetSlotCountingMaxedGE;                         // 0x90(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NPC_TargetSlotCountingMaxedGE;                     // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NPC_TargetSlotOwnerGE;                             // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NPC_TargetSlotOverrideGE;                          // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        NPC_AI_TargetSlotDurationHF;                       // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_AI_TargetSlotSizeHF;                           // 0xD8(0x28)(Edit, BlueprintVisible)
	class UClass*                                NPC_TargetSlotCountingGE;                          // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944C[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944D[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        K2Node_MakeArray_Array;                            // 0x120(0x10)(ReferenceParm)
	int32                                        CallFunc_GetTotalGameplayEffectCount_FinalEffectCount; // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x135(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944E[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944F[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        K2Node_MakeArray_Array_1;                          // 0x148(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9450[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetTotalGameplayEffectCount_FinalEffectCount_1; // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9451[0x4];                                     // Fixing Size After Last Property..
	struct FStruct_NPC_TargetSlots               CallFunc_Array_Get_Item;                           // 0x168(0x78)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9452[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckIsInSafeZone
struct UNPC_Pawn_Parent_C_NPC_CheckIsInSafeZone_Params
{
public:
	bool                                         TestSucceeded;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInSafeZone;                                      // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9453[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAthena_GameState_C*                   K2Node_DynamicCast_AsAthena_Game_State;            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9454[0x7];                                     // Fixing Size After Last Property..
	class UFortSafeZoneIndicator*                CallFunc_GetSafeZoneIndicator_ReturnValue;         // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSafeZoneCenter_ReturnValue;            // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9455[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Vector_Distance2DSquared_ReturnValue;     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetSafeZoneRadius_ReturnValue;            // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9456[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Square_ReturnValue;                       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9457[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Square_A_ImplicitCast;                    // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HandleAlertLevelVoice
struct UNPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice_Params
{
public:
	enum class Enum_NPC_AlertLevel               Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9458[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x4(0x4)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0x8(0x4)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_2;                            // 0xC(0x4)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayVoiceLine_Success;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayVoiceLine_Success_1;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9459[0x1];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          K2Node_Select_Default;                             // 0x14(0x4)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayVoiceLine_Success_2;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x246 (0x246 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TryToDropLootOnDeath
struct UNPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath_Params
{
public:
	struct FGameplayTagContainer                 DamageTags;                                        // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CanDropLoot;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanDropLootBool;                                   // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945A[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInAthena_ReturnValue;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945B[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetLootLevel_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945C[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FFortItemEntry>                CallFunc_PickLootDrops_OutLootToDrop;              // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_PickLootDrops_ReturnValue;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945D[0x7];                                     // Fixing Size After Last Property..
	struct FFortItemEntry                        CallFunc_Array_Get_Item;                           // 0x58(0x1A0)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945E[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GiveItemEntryToInventoryOwner_InventoryOwner_CastInput; // 0x200(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GiveItemEntryToInventoryOwner_ReturnValue; // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x212(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945F[0x5];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x218(0x20)()
	bool                                         CallFunc_EqualEqual_GameplayTagContainer_ReturnValue; // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1; // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_GameplayTagContainer_ReturnValue; // 0x23A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0x23B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1; // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x23D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyTags_ReturnValue_1;                 // 0x23E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x23F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x242(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x243(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x245(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyGameplayEffectWithMMRScaling
struct UNPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Class;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                ApplyGeToThisActor;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Option_B___If_false__use_Option_A_Variable; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9460[0x5];                                     // Fixing Size After Last Property..
	class UActor*                                K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLootCollectionPhaseCompleteToBlackboard
struct UNPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard_Params
{
public:
	bool                                         LootCollectionPhaseComplete;                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9461[0x3];                                     // Fixing Size After Last Property..
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalRotationRate
struct UNPC_Pawn_Parent_C_NPC_ResetOriginalRotationRate_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalGravityScale
struct UNPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale_Params
{
public:
	float                                        K2Node_VariableSet_GravityScale_ImplicitCast;      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetReturnGatheredLootToBlackboard
struct UNPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard_Params
{
public:
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetInventoryInformation_HasItemInInventory; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9462[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetInventoryInformation_TotalNumberOfInventoryItems; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NPC_GetInventoryInformation_LastInventoryItemIndex; // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetInventoryInformation_HasEnoughItemsToDeliver; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetInventoryInformation_ConsumedEnoughItemsToBeConsideredFull; // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9463[0x6];                                     // Fixing Size After Last Property..
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetScalableFloatHotfixValue
struct UNPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue_Params
{
public:
	struct FScalableFloat                        ScalableFloatHotfix;                               // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                       AtLevel;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AsBool;                                            // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9464[0x3];                                     // Fixing Size After Last Property..
	int32                                        AsIntRounded;                                      // 0x34(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AsFloat;                                           // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_ScalableFloatIsValid_Valid;           // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9465[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_Level_ImplicitCast;       // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9466[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_FunctionResult_AsFloat_ImplicitCast;        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_AsFloat_ImplicitCast_1;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast_1;                   // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ScalableFloatIsValid
struct UNPC_Pawn_Parent_C_NPC_ScalableFloatIsValid_Params
{
public:
	struct FScalableFloat                        ScalableFloat;                                     // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Valid;                                             // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupDropped
struct UNPC_Pawn_Parent_C_NPC_PickupDropped_Params
{
public:
	class UFortPickup*                           FortPickupDropped;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed_Destroyed
struct UNPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed_Params
{
public:
	class UActor*                                ActorGrabbed;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed
struct UNPC_Pawn_Parent_C_NPC_PickupGrabbed_Params
{
public:
	class UFortPickup*                           FortPickupGrabbed;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory
struct UNPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDD (0xDD - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed
struct UNPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9467[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x8(0xD0)(ContainsInstancedReference)
	struct FGameplayTag                          CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0xD8(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage
struct UNPC_Pawn_Parent_C_NPC_PawnDebugMessage_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         OnlyWhenDebug;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetInventoryInformation
struct UNPC_Pawn_Parent_C_NPC_GetInventoryInformation_Params
{
public:
	bool                                         HasItemInInventory;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9468[0x3];                                     // Fixing Size After Last Property..
	int32                                        TotalNumberOfInventoryItems;                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastInventoryItemIndex;                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasEnoughItemsToDeliver;                           // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ConsumedEnoughItemsToBeConsideredFull;             // 0xD(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9469[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_946A[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1; // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_946B[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_946C[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_BuildString_Bool_ReturnValue;             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UFortWorldItem*>                CallFunc_GetItemsFromInventoryOwner_Items;         // 0x58(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_946D[0x4];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_BuildString_Bool_ReturnValue_1;           // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_946E[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_BuildString_Bool_ReturnValue_2;           // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_BuildString_Bool_ReturnValue_3;           // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x115 (0x115 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory
struct UNPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory_Params
{
public:
	enum class EFortRarity                       NPC_BestLootRarityInInventory;                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       NPC_BestLootRarityInventoryFound;                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_946F[0x6];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9470[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9471[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput; // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UFortWorldItem*>                CallFunc_GetItemsFromInventoryOwner_Items;         // 0x40(0x10)(ReferenceParm)
	class FName                                  CallFunc_GetEnumeratorName_ReturnValue;            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9472[0x4];                                     // Fixing Size After Last Property..
	class UFortWorldItem*                        CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_BuildString_Name_ReturnValue;             // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x70(0x18)()
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9473[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetEnumeratorName_ReturnValue_1;          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9474[0x4];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue_1;           // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9475[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel
struct UNPC_Pawn_Parent_C_OnRep_NPC_AlertLevel_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo
struct UNPC_Pawn_Parent_C_NPC_GetAlertLevelInfo_Params
{
public:
	enum class Enum_NPC_AlertLevel               AlertLevel;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9476[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          AlertLevelTag;                                     // 0x4(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	bool                                         ValidDataFound;                                    // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9477[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          CallFunc_Map_Find_Value;                           // 0xC(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTagGE
struct UNPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE_Params
{
public:
	class UClass*                                RecentlyDamagedOverride;                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue_1;               // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0xC(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1; // 0x14(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh
struct UNPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UserConstructionScript
struct UNPC_Pawn_Parent_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__FinishedFunc
struct UNPC_Pawn_Parent_C_Timeline_ScaleMeshInOrOut__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__UpdateFunc
struct UNPC_Pawn_Parent_C_Timeline_ScaleMeshInOrOut__UpdateFunc_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay
struct UNPC_Pawn_Parent_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged
struct UNPC_Pawn_Parent_C_WidgetVisibilityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle
struct UNPC_Pawn_Parent_C_NPC_ParentLaunchVehicle_Params
{
public:
	class UActor*                                Vehicle;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot
struct UNPC_Pawn_Parent_C_TestLoot_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathPlayEffects
struct UNPC_Pawn_Parent_C_OnDeathPlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9478[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateHealthBarComponentVisibility
struct UNPC_Pawn_Parent_C_NPC_UpdateHealthBarComponentVisibility_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceivePossessed
struct UNPC_Pawn_Parent_C_ReceivePossessed_Params
{
public:
	class UController*                           NewController;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RequestUpdateNPCAlertLevel
struct UNPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel_Params
{
public:
	enum class Enum_NPC_AlertLevel               NPC_AlertLevel;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelChangedClient
struct UNPC_Pawn_Parent_C_NPCAlertLevelChangedClient_Params
{
public:
	enum class Enum_NPC_AlertLevel               NPC_AlertLevel;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC InitializeIdleVO
struct UNPC_Pawn_Parent_C_NPC_InitializeIdleVO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerIdleVO
struct UNPC_Pawn_Parent_C_TriggerIdleVO_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathServer
struct UNPC_Pawn_Parent_C_OnDeathServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9479[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UController*                           InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCEnableHealthBars
struct UNPC_Pawn_Parent_C_NPCEnableHealthBars_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCDisableHealthBars
struct UNPC_Pawn_Parent_C_NPCDisableHealthBars_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ForceLevel
struct UNPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel_Params
{
public:
	enum class Enum_NPC_AlertLevel               NewNPC_AlertLevel;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ClearDebug
struct UNPC_Pawn_Parent_C_Debug_AlertLevel_ClearDebug_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Invalid
struct UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_Invalid_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Unaware
struct UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_Unaware_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_NA
struct UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_NA_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Alerted
struct UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_Alerted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Aggressive
struct UNPC_Pawn_Parent_C_Debug_ForceAlertLevel_Aggressive_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.HandleInteracts
struct UNPC_Pawn_Parent_C_HandleInteracts_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC Pawn Interact
struct UNPC_Pawn_Parent_C_NPC_Pawn_Interact_Params
{
public:
	class UFortAIPawn*                           AI;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerController*                 InteractingPlayerController;                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.On NPC PawnInteractedWith
struct UNPC_Pawn_Parent_C_On_NPC_PawnInteractedWith_Params
{
public:
	class UActor*                                AIPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       InteractingPlayerPawn;                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDeepWaterInteraction
struct UNPC_Pawn_Parent_C_OnBeginDeepWaterInteraction_Params
{
public:
	struct FVector                               WaterSurfaceLocation;                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaterDepth;                                        // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC LeaderSet
struct UNPC_Pawn_Parent_C_NPC_LeaderSet_Params
{
public:
	bool                                         Success_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947A[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                Leader;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EUnconvertReason                  UnconvertReason;                                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems
struct UNPC_Pawn_Parent_C_GrantStartingItems_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestIsInSafeZone
struct UNPC_Pawn_Parent_C_TestIsInSafeZone_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay
struct UNPC_Pawn_Parent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryToDespawnDueToStorm
struct UNPC_Pawn_Parent_C_TryToDespawnDueToStorm_Params
{
public:
	bool                                         Reset_Timer;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeTestInSafeZone
struct UNPC_Pawn_Parent_C_InitializeTestInSafeZone_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer
struct UNPC_Pawn_Parent_C_OnDamageServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947B[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UController*                           InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.DespawnDueToStorm
struct UNPC_Pawn_Parent_C_DespawnDueToStorm_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDeathFX
struct UNPC_Pawn_Parent_C_TriggerDeathFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEndDance
struct UNPC_Pawn_Parent_C_OnEndDance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDance
struct UNPC_Pawn_Parent_C_OnBeginDance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.End Music Tracker
struct UNPC_Pawn_Parent_C_End_Music_Tracker_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.BeginMusicTracker
struct UNPC_Pawn_Parent_C_BeginMusicTracker_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopUpdatingHealthBarWidget
struct UNPC_Pawn_Parent_C_StopUpdatingHealthBarWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RemoveSoundSystemLibraries
struct UNPC_Pawn_Parent_C_RemoveSoundSystemLibraries_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.AddSoundSystemLibraries
struct UNPC_Pawn_Parent_C_AddSoundSystemLibraries_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeInventory
struct UNPC_Pawn_Parent_C_InitializeInventory_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StartUpdatingHleathBarWidget
struct UNPC_Pawn_Parent_C_StartUpdatingHleathBarWidget_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AlertLevelChangedServer
struct UNPC_Pawn_Parent_C_NPC_AlertLevelChangedServer_Params
{
public:
	enum class Enum_NPC_AlertLevel               NPCAlertLevel;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnPawnHealthChanged_Event_0
struct UNPC_Pawn_Parent_C_OnPawnHealthChanged_Event_0_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEnteredWaterBody
struct UNPC_Pawn_Parent_C_OnEnteredWaterBody_Params
{
public:
	class UFortWaterBodyActor*                   WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFirstBody;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnExitedWaterBody
struct UNPC_Pawn_Parent_C_OnExitedWaterBody_Params
{
public:
	class UFortWaterBodyActor*                   WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsLastBody;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredOnServer
struct UNPC_Pawn_Parent_C_LuredOnServer_Params
{
public:
	enum class Enum_NPC_AlertLevel               AlertLevel;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredInterest
struct UNPC_Pawn_Parent_C_LuredInterest_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayEnterWaterSplash
struct UNPC_Pawn_Parent_C_PlayEnterWaterSplash_Params
{
public:
	class UFortWaterBodyActor*                   Water_Body;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayExitWaterSplash
struct UNPC_Pawn_Parent_C_PlayExitWaterSplash_Params
{
public:
	class UFortWaterBodyActor*                   Water_Body;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryWaterInteractionDrown
struct UNPC_Pawn_Parent_C_TryWaterInteractionDrown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopTestingIsInSafeZone
struct UNPC_Pawn_Parent_C_StopTestingIsInSafeZone_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshIn
struct UNPC_Pawn_Parent_C_NPCScaleMeshIn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOut
struct UNPC_Pawn_Parent_C_NPCScaleMeshOut_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDespawnAbility
struct UNPC_Pawn_Parent_C_TriggerDespawnAbility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC MulticastGameplayCueDeath
struct UNPC_Pawn_Parent_C_NPC_MulticastGameplayCueDeath_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibFoley
struct UNPC_Pawn_Parent_C_UpdateSoundLibFoley_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamagePlayEffects
struct UNPC_Pawn_Parent_C_OnDamagePlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947C[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.AdditiveHitReactDelay
struct UNPC_Pawn_Parent_C_AdditiveHitReactDelay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateCustomDepth
struct UNPC_Pawn_Parent_C_UpdateCustomDepth_Params
{
public:
};

// 0xE70 (0xE70 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent
struct UNPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateSoundLibraryCollection_ValidLibraries; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947D[0x3];                                     // Fixing Size After Last Property..
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947E[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                K2Node_CustomEvent_Vehicle;                        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Velocity;                       // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_NPC_SetBestLootRarityInInventory_NPC_BestLootRarityInInventory; // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947F[0x2];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage_3;                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags_3;                         // 0x40(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum_3;                           // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo_3;                            // 0x78(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortPawn*                             K2Node_Event_InstigatedBy_3;                       // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_Event_DamageCauser_3;                       // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext_3;                      // 0x168(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x183(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9480[0x4];                                     // Fixing Size After Last Property..
	class UController*                           K2Node_Event_NewController;                        // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x190(0x20)()
	bool                                         CallFunc_NotEqual_GameplayTagContainer_ReturnValue; // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9481[0x7];                                     // Fixing Size After Last Property..
	class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue;                   // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               K2Node_CustomEvent_NPC_AlertLevel_1;               // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               K2Node_CustomEvent_NPC_AlertLevel;                 // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9482[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9483[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage_2;                             // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags_2;                         // 0x1E0(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum_2;                           // 0x200(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo_2;                            // 0x218(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UController*                           K2Node_Event_InstigatedBy_2;                       // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_Event_DamageCauser_2;                       // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext_2;                      // 0x308(0x18)()
	bool                                         CallFunc_NPC_TryToDropLootOnDeath_CanDropLoot;     // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x322(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9484[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9485[0x7];                                     // Fixing Size After Last Property..
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x338(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_C*                    K2Node_DynamicCast_AsNPCStatus_Widget;             // 0x340(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               K2Node_CustomEvent_NewNPC_AlertLevel;              // 0x349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9486[0x6];                                     // Fixing Size After Last Property..
	class UFortAIPawn*                           K2Node_CustomEvent_AI;                             // 0x350(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerController*                 K2Node_CustomEvent_InteractingPlayerController;    // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        K2Node_CustomEvent_InteractionBeingAttempted;      // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9487[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                K2Node_CustomEvent_AIPawn;                         // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       K2Node_CustomEvent_InteractingPlayerPawn;          // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       CallFunc_GetPlayerPawn_ReturnValue;                // 0x378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bVisible;                       // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9488[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_Event_WaterSurfaceLocation;                 // 0x388(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_WaterDepth;                           // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_;                       // 0x3A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9489[0x3];                                     // Fixing Size After Last Property..
	class UActor*                                K2Node_CustomEvent_Leader;                         // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EUnconvertReason                  K2Node_CustomEvent_UnconvertReason;                // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_UpdateInteract_EnabledInteract;       // 0x3B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_UpdateInteract_EnabledInteract_1;     // 0x3B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x3B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x3D0(0xD0)(ContainsInstancedReference)
	bool                                         CallFunc_NPC_CheckIsInSafeZone_TestSucceeded;      // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_CheckIsInSafeZone_isInSafeZone;       // 0x4A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1; // 0x4A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948B[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1; // 0x4A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1; // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4B0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948C[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948D[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x4D0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Reset_Timer;                    // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948E[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage_1;                             // 0x4DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags_1;                         // 0x4E0(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum_1;                           // 0x500(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo_1;                            // 0x518(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UController*                           K2Node_Event_InstigatedBy_1;                       // 0x5F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_Event_DamageCauser_1;                       // 0x600(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext_1;                      // 0x608(0x18)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x620(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948F[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x630(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2; // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9490[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2; // 0x63C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2; // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x64A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x64B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0x64C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3; // 0x64D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9491[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3; // 0x650(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9492[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3; // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9493[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          K2Node_Select_Default;                             // 0x664(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayVoiceLine_Success;                    // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               CallFunc_NPC_GetAlertLevelInfo_AlertLevel;         // 0x669(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9494[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag;      // 0x66C(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetAlertLevelInfo_ValidDataFound;     // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9495[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x674(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_4;               // 0x681(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9496[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x684(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x690(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               K2Node_CustomEvent_NPCAlertLevel;                  // 0x699(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x69A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9497[0x5];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x6A0(0xB0)()
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData_1;             // 0x750(0xB0)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x800(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x80C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9498[0x3];                                     // Fixing Size After Last Property..
	class UFortWaterBodyActor*                   K2Node_Event_WaterBody_1;                          // 0x810(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsFirstBody;                         // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9499[0x7];                                     // Fixing Size After Last Property..
	class UFortWaterBodyActor*                   K2Node_Event_WaterBody;                            // 0x820(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsLastBody;                          // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949A[0x7];                                     // Fixing Size After Last Property..
	class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue_1;                 // 0x830(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x838(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x840(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               K2Node_CustomEvent_AlertLevel;                     // 0x841(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x842(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949B[0x5];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_GetValueAsObject_ReturnValue;             // 0x848(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileBase*                   K2Node_DynamicCast_AsFort_Projectile_Base;         // 0x850(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x858(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949C[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x860(0xD0)(ContainsInstancedReference)
	class UFortPickup*                           K2Node_DynamicCast_AsFort_Pickup;                  // 0x930(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x939(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x93A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x93B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949D[0x4];                                     // Fixing Size After Last Property..
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x940(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x948(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949E[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x954(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue_1;               // 0x95C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x95D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949F[0x2];                                     // Fixing Size After Last Property..
	class UFortWaterBodyActor*                   K2Node_CustomEvent_Water_Body_1;                   // 0x960(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortWaterBodyActor*                   K2Node_CustomEvent_Water_Body;                     // 0x968(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1; // 0x970(0x20)()
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_2;      // 0x991(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x992(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_4; // 0x993(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_4; // 0x994(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_4; // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_5; // 0x9A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A0[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_5; // 0x9A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_5; // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_6; // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A1[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_6; // 0x9B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_6; // 0x9B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_7; // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A2[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_7; // 0x9C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_7; // 0x9C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_8; // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A3[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_8; // 0x9D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_8; // 0x9D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue_1;         // 0x9E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x9E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A4[0x2];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1; // 0x9E4(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2; // 0x9EC(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3; // 0x9F4(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NPC_GetSafeZonePhase_SafeZonePhase;       // 0x9FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A5[0x7];                                     // Fixing Size After Last Property..
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0xA08(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_C*                    K2Node_DynamicCast_AsNPCStatus_Widget_1;           // 0xA10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xA18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryActivateAbilitiesByTag_ReturnValue;    // 0xA19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A6[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2; // 0xA20(0x20)()
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3; // 0xA40(0x20)()
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xA60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1; // 0xA61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0xA62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_CanBeInteractedWith_CanInteract;      // 0xA63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_CanBeInteractedWith_CanInteract_1;    // 0xA64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_UpdateInteract_EnabledInteract_2;     // 0xA65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_UpdateInteract_EnabledInteract_3;     // 0xA66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xA67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xA68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xA69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xA6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A7[0x5];                                     // Fixing Size After Last Property..
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_2;        // 0xA70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_C*                    K2Node_DynamicCast_AsNPCStatus_Widget_2;           // 0xA78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xA80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A8[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0xA88(0xD0)(ContainsInstancedReference)
	struct FGameplayTag                          CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0xB58(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_GameplayTag_ReturnValue;         // 0xB5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xB5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0xB5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               CallFunc_NPC_GetAlertLevelInfo_AlertLevel_1;       // 0xB5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag_1;    // 0xB60(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetAlertLevelInfo_ValidDataFound_1;   // 0xB64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A9[0x3];                                     // Fixing Size After Last Property..
	class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue_2;                 // 0xB68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0xB70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue_2;               // 0xB71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AA[0x2];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_4; // 0xB74(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xB7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AB[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0xB80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AC[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_SetIntParameter_self_CastInput;           // 0xB88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0xB98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AD[0x7];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0xBA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0xBA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0xBA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0xBAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AE[0x1];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xBAC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0xBB8(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xBC0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0xBCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AF[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage;                               // 0xBD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B0[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0xBD8(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0xBF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0xC10(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortPawn*                             K2Node_Event_InstigatedBy;                         // 0xCF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_Event_DamageCauser;                         // 0xCF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0xD00(0x18)()
	class UFortProjectileBase*                   K2Node_DynamicCast_AsFort_Projectile_Base_1;       // 0xD18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xD20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B1[0x7];                                     // Fixing Size After Last Property..
	class UFortWeapon*                           K2Node_DynamicCast_AsFort_Weapon;                  // 0xD28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xD30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDamageZone                   CallFunc_GetDamageZone_ReturnValue;                // 0xD31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0xD32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue; // 0xD33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0xD34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B2[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0xD38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0xD50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0xD68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0xD70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0xD71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B3[0x6];                                     // Fixing Size After Last Property..
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_3;        // 0xD78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0xD80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_C*                    K2Node_DynamicCast_AsNPCStatus_Widget_3;           // 0xD88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0xD90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0xD91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xD92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0xD93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xD94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0xD95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConverted_IsConverted;                  // 0xD96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRenderCustomDepthEnabled_ReturnValue;   // 0xD97(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0xD98(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue_2;         // 0xDA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0xDA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0xDA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue_1; // 0xDA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue; // 0xDA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryActivateAbilitiesByTag_ReturnValue_1;  // 0xDA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_9; // 0xDA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B4[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_9; // 0xDA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B5[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_9; // 0xDB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0xDB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0xDB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_10; // 0xDBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B6[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_10; // 0xDBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_10; // 0xDC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0xDC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0xDC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0xDCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B7[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0xDD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xDE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0xDF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0xDF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0xE00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0xE01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryActivateAbilitiesByTag_ReturnValue_2;  // 0xE02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B8[0x5];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0xE08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0xE10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0xE11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WasRecentlyRendered_ReturnValue;          // 0xE12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0xE13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0xE14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0xE15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0xE16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0xE17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0xE18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_9;                 // 0xE19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateSoundLibraryCollection_ValidLibraries_1; // 0xE1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_10;                // 0xE1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateSoundLibraryCollection_ValidLibraries_2; // 0xE1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B9[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xE20(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryActivateAbilitiesByTag_ReturnValue_3;  // 0xE2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0xE2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BA[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0xE30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BB[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_RandomFloatInRange_Min_ImplicitCast;      // 0xE38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_Max_ImplicitCast;      // 0xE40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0xE48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_1;            // 0xE4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast; // 0xE50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0xE54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;  // 0xE58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast_1; // 0xE5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0xE60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3;  // 0xE64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Update_DeltaTime_ImplicitCast;            // 0xE68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_2;            // 0xE6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelUpdated__DelegateSignature
struct UNPC_Pawn_Parent_C_NPCAlertLevelUpdated__DelegateSignature_Params
{
public:
	enum class Enum_NPC_AlertLevel               NPC_Alert_Level;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCPawnInteractWithDispatcher__DelegateSignature
struct UNPC_Pawn_Parent_C_NPCPawnInteractWithDispatcher__DelegateSignature_Params
{
public:
	class UActor*                                AIPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       InteractingPlayerPawn;                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOutCompleted__DelegateSignature
struct UNPC_Pawn_Parent_C_NPCScaleMeshOutCompleted__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshInCompleted__DelegateSignature
struct UNPC_Pawn_Parent_C_NPCScaleMeshInCompleted__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
