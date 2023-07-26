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

// 0x118 (0x118 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLaunchCharacter
struct ANPC_Pawn_Wildlife_Parent_C_OnLaunchCharacter_Params
{
public:
	struct FVector                               LaunchVelocity;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bXYOverride;                                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bZOverride;                                        // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9475[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Vector_Up_ReturnValue;                    // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNearlyZero2D_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9476[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9477[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9478[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x103(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9479[0x2];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x108(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;    // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.TryShowHealthBar
struct ANPC_Pawn_Wildlife_Parent_C_TryShowHealthBar_Params
{
public:
	class UFortPawnComponent_Convert*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947A[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetConverterPawn_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnLocalPlayersTeam_Return_Value;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3E (0x3E - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BlueprintCanInteract
struct ANPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BlueprintCanInteract_ReturnValue;         // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947B[0x5];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947C[0x6];                                     // Fixing Size After Last Property..
	class UFortPawnComponent_Convert*            CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetConverterPawn_ReturnValue;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetOnlyLeaderInteraction_ReturnValue;     // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayStateChangeAudio
struct ANPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio_Params
{
public:
	enum class Enum_NPC_AlertLevel               Index;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947D[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x4(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0x8(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_2;                            // 0xC(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_3;                            // 0x10(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_4;                            // 0x14(0x4)(NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947E[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          K2Node_Select_Default;                             // 0x1C(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayAdditiveHitReacts
struct ANPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts_Params
{
public:
	struct FVector                               Hit_Direction;                                     // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Anim_Montage;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x20(0x20)()
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BlueprintModifyIncomingDamage
struct ANPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947F[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x28(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                           EventInstigator;                                   // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x50(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9480[0x4];                                     // Fixing Size After Last Property..
	int64                                        LastFrameCount;                                    // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Last_DamageCauser;                                 // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AController*                           LastDamageInstigator;                              // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                       NewDamage;                                         // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BlueprintModifyIncomingDamage_ReturnValue; // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9481[0x4];                                     // Fixing Size After Last Property..
	int64                                        CallFunc_GetFrameCount_ReturnValue;                // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9482[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPCStatusWidget_UpdateKeepVisible
struct ANPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible_Params
{
public:
	bool                                         ShouldKeepVisible;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9483[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9484[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_C*                    K2Node_DynamicCast_AsNPCStatus_Widget;             // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9485[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetDistanceBetweenActors_Distance;        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9486[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.CanBeInteractedWithWhenTamed
struct ANPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed_Params
{
public:
	bool                                         bCanInteract;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9487[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC PickupGrabbed_Destroyed
struct ANPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed_Params
{
public:
	class AActor*                                ActorGrabbed;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.SetTamingEnabled
struct ANPC_Pawn_Wildlife_Parent_C_SetTamingEnabled_Params
{
public:
	bool                                         EnableTaming;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_CanBeInteractedWith_CanInteract;      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9488[0x6];                                     // Fixing Size After Last Property..
	class UFortPawnComponent_Convert*            CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC CanBeInteractedWith
struct ANPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith_Params
{
public:
	bool                                         CanInteract;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_CanBeInteractedWith_CanInteract;      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AttachAndApplyVocalFX
struct ANPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX_Params
{
public:
	struct FSoundLibraryPlayResult               SoundLibraryResult;                                // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9489[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948A[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948B[0x4];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948C[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Water Splash at Water Surface
struct ANPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface_Params
{
public:
	class AFortWaterBodyActor*                   Water_Body;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Enter_Water;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.IsValidAutoFireTarget
struct ANPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget_Params
{
public:
	class AActor*                                Attacker;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeamAffiliation              TeamAffiliation;                                   // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeamAffiliation              CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue; // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948D[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948E[0x5];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Sound Lib
struct ANPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib_Params
{
public:
	struct FGameplayTag                          Event_Name;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_948F[0x4];                                     // Fixing Size After Last Property..
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSoundLibrarySimpleContextSettings    K2Node_MakeStruct_SoundLibrarySimpleContextSettings; // 0x10(0x58)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9490[0x7];                                     // Fixing Size After Last Property..
	class UB_CreatureSoundLibraryContext_C*      CallFunc_SpawnObject_ReturnValue;                  // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9491[0x7];                                     // Fixing Size After Last Property..
	struct FSoundLibraryPlayResult               CallFunc_PlaySound_OutResults;                     // 0x80(0x18)(ContainsInstancedReference)
};

// 0x12 (0x12 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.UpdateTamingIndicator
struct ANPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9492[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnRep_LeaderTeam
struct ANPC_Pawn_Wildlife_Parent_C_OnRep_LeaderTeam_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06
struct ANPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ReceiveBeginPlay
struct ANPC_Pawn_Wildlife_Parent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.LinkAnimationLayers
struct ANPC_Pawn_Wildlife_Parent_C_LinkAnimationLayers_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AsyncLinkAnimationLayer
struct ANPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer_Params
{
public:
	TSoftClassPtr<class UAnimInstance>           AnimationLayer;                                    // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnCustomizationsLoaded_BP
struct ANPC_Pawn_Wildlife_Parent_C_OnCustomizationsLoaded_BP_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On NPC PawnInteractedWith
struct ANPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith_Params
{
public:
	class AActor*                                AIPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       InteractingPlayerPawn;                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature
struct ANPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature_Params
{
public:
	class AFortPawn*                             InstigatorPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             ConvertedPawn;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature
struct ANPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature_Params
{
public:
	class AFortPawn*                             UnconvertedPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EUnconvertReason                  UnconvertReason;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC AlertLevelChangedServer
struct ANPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer_Params
{
public:
	enum class Enum_NPC_AlertLevel               NPCAlertLevel;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathServer
struct ANPC_Pawn_Wildlife_Parent_C_OnDeathServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9493[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x11 (0x11 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC LeaderSet
struct ANPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet_Params
{
public:
	bool                                         Success_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9494[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                Leader;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EUnconvertReason                  UnconvertReason;                                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature
struct ANPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature_Params
{
public:
	struct FSoundLibraryPlayResult               Results;                                           // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class USoundLibraryContext*                  Context;                                           // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnBeingControlledChanged
struct ANPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged_Params
{
public:
	bool                                         bControlled;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnApplyEffectOptimization
struct ANPC_Pawn_Wildlife_Parent_C_OnApplyEffectOptimization_Params
{
public:
	int32                                        NewBudgetValue;                                    // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDamagePlayEffects
struct ANPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9495[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC UpdateHealthBarComponentVisibility
struct ANPC_Pawn_Wildlife_Parent_C_NPC_UpdateHealthBarComponentVisibility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnPawnHealthChanged_Event_0
struct ANPC_Pawn_Wildlife_Parent_C_OnPawnHealthChanged_Event_0_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On Pawn Focused
struct ANPC_Pawn_Wildlife_Parent_C_On_Pawn_Focused_Params
{
public:
	class AFortPawn*                             FocusedPawn;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.HideStatus
struct ANPC_Pawn_Wildlife_Parent_C_HideStatus_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnSlidingStateChanged
struct ANPC_Pawn_Wildlife_Parent_C_OnSlidingStateChanged_Params
{
public:
	bool                                         bNewSlidingState;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathPlayEffects
struct ANPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9496[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xE0 (0xE0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLanded
struct ANPC_Pawn_Wildlife_Parent_C_OnLanded_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x50 (0x50 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnOutOfConvertResistanceServer
struct ANPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer_Params
{
public:
	float                                        ConvertDamageDone;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9497[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 SourceTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x28(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                           EffectInstigator;                                  // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                EffectCauser;                                      // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.RestoreConvertResistance
struct ANPC_Pawn_Wildlife_Parent_C_RestoreConvertResistance_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.CE_UpdateSurfaceType
struct ANPC_Pawn_Wildlife_Parent_C_CE_UpdateSurfaceType_Params
{
public:
	class UActorComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bReset;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB98 (0xB98 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ExecuteUbergraph_NPC_Pawn_Wildlife_Parent
struct ANPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9498[0x1];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UAnimInstance>           K2Node_CustomEvent_AnimationLayer;                 // 0x8(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable; // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9499[0x5];                                     // Fixing Size After Last Property..
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidget_C*                    K2Node_DynamicCast_AsNPCStatus_Widget;             // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949A[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_AIPawn;                               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_Event_InteractingPlayerPawn;                // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949B[0x3];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetConsoleVariableIntValue_ReturnValue;   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InEditorOrPIE_ReturnValue;                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949D[0x7];                                     // Fixing Size After Last Property..
	TArray<bool>                                 Temp_wildcard_Avoid_creating_array_every_time_Variable; // 0x80(0x10)(ConstParm, ReferenceParm)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_ComponentBoundEvent_InstigatorPawn;         // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_ComponentBoundEvent_ConvertedPawn;          // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949E[0x3];                                     // Fixing Size After Last Property..
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_ComponentBoundEvent_UnconvertedPawn;        // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EUnconvertReason                  K2Node_ComponentBoundEvent_UnconvertReason;        // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               K2Node_Event_NPCAlertLevel;                        // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_949F[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage_2;                             // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A0[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_Event_DamageTags_2;                         // 0xD0(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum_2;                           // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo_2;                            // 0x108(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           K2Node_Event_InstigatedBy_2;                       // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser_2;                       // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext_3;                      // 0x1F8(0x18)()
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x210(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Success_;                             // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A1[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_Leader;                               // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EUnconvertReason                  K2Node_Event_UnconvertReason;                      // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A2[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetConsoleVariableIntValue_ReturnValue_1; // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoundLibraryPlayResult               K2Node_ComponentBoundEvent_Results;                // 0x240(0x18)(ConstParm, ContainsInstancedReference)
	class USoundLibraryContext*                  K2Node_ComponentBoundEvent_Context;                // 0x258(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bControlled;                          // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A3[0x6];                                     // Fixing Size After Last Property..
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_CanBeInteractedWith_CanInteract;      // 0x272(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeInteractedWithWhenTamed_bCanInteract; // 0x273(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_UpdateInteract_EnabledInteract;       // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A4[0x3];                                     // Fixing Size After Last Property..
	int32                                        K2Node_Event_NewBudgetValue;                       // 0x278(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x27C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x27D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A5[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_1;                               // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x284(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A6[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage_1;                             // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A7[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_Event_DamageTags_1;                         // 0x290(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum_1;                           // 0x2B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo_1;                            // 0x2C8(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             K2Node_Event_InstigatedBy_1;                       // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser_1;                       // 0x3B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext_2;                      // 0x3B8(0x18)()
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x3D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x3D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A8[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetConsoleVariableIntValue_ReturnValue_2; // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue_1;                 // 0x3E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InEditorOrPIE_ReturnValue_1;              // 0x3E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x3E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94A9[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetConverterPawn_ReturnValue;             // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AA[0x7];                                     // Fixing Size After Last Property..
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue_1;     // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue_2;                 // 0x404(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x405(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AB[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x408(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AC[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetConverterPawn_ReturnValue_1;           // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AD[0x6];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_CustomEvent_FocusedPawn;                    // 0x428(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AE[0x7];                                     // Fixing Size After Last Property..
	class UFortPawnComponent_Convert*            CallFunc_GetComponentByClass_ReturnValue;          // 0x438(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94AF[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetConverterPawn_ReturnValue_2;           // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B0[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerStateAthena*                K2Node_DynamicCast_AsFort_Player_State_Athena;     // 0x458(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetSquadId_ReturnValue;                   // 0x461(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B1[0x6];                                     // Fixing Size After Last Property..
	class UClass*                                Temp_class_Variable;                               // 0x468(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsAnim_Instance;           // 0x470(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x479(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x47A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B2[0x1];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x47C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B3[0x4];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B4[0x7];                                     // Fixing Size After Last Property..
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue_1; // 0x498(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x4A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B5[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerStateAthena*                K2Node_DynamicCast_AsFort_Player_State_Athena_1;   // 0x4B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x4B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetSquadId_ReturnValue_1;                 // 0x4BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x4BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemoveActiveEffectsWithTags_ReturnValue;  // 0x4BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1; // 0x4C0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B6[0x7];                                     // Fixing Size After Last Property..
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x4D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bNewSlidingState;                     // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B7[0x7];                                     // Fixing Size After Last Property..
	class UNPCStatusWidget_C*                    K2Node_DynamicCast_AsNPCStatus_Widget_1;           // 0x4E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B8[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayEffectContextHandle          CallFunc_MakeSimpleFortEffectContext_ReturnValue;  // 0x4F0(0x18)()
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded;                         // 0x508(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B9[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage;                               // 0x514(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x518(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x538(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x550(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             K2Node_Event_InstigatedBy;                         // 0x630(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x638(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext_1;                      // 0x640(0x18)()
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x658(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x738(0x10)(ConstParm, ReferenceParm)
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x748(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x74C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue_2; // 0x758(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingSpec_ReturnValue;             // 0x760(0x10)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x770(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BA[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEffectSpecHandle             CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x780(0x10)()
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0x790(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxConvertResistance_ReturnValue;      // 0x798(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_ConvertDamageDone;                    // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_SourceTags;                           // 0x7A0(0x20)(ConstParm)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x7C0(0x18)(ConstParm)
	class AController*                           K2Node_Event_EffectInstigator;                     // 0x7D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_EffectCauser;                         // 0x7E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxConvertResistance_ReturnValue;      // 0x7E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BB[0x4];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x7F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x7F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BC[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x800(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSurfaceTrackingComponent*         CallFunc_GetSurfaceTrackingComponent_ReturnValue;  // 0x808(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  CallFunc_GetCurrentSurfaceType_ReturnValue;        // 0x810(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x811(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BD[0x6];                                     // Fixing Size After Last Property..
	class UActorComponent*                       K2Node_CustomEvent_Component;                      // 0x818(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bReset;                         // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BE[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x824(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x830(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94BF[0x7];                                     // Fixing Size After Last Property..
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_2;        // 0x838(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x840(0x10)(ConstParm, ReferenceParm)
	class UNPCStatusWidget_C*                    K2Node_DynamicCast_AsNPCStatus_Widget_2;           // 0x850(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x858(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94C0[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x860(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x878(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x890(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingleForObjects_OutHit;         // 0x8A8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x988(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94C1[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x990(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x9A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94C2[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakHitResult_Time;                      // 0x9AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x9B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94C3[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x9B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x9D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x9E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0xA00(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0xA18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0xA20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0xA28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0xA30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0xA34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0xA38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0xA3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0xA40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94C4[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0xA48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0xA60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotFromZX_ReturnValue;                // 0xA78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0xA90(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast; // 0xB70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94C5[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0xB78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0xB80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0xB88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSetRef_Target_ImplicitCast;         // 0xB90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnModifiedDamageReceived__DelegateSignature
struct ANPC_Pawn_Wildlife_Parent_C_OnModifiedDamageReceived__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ConvertedDispatcher__DelegateSignature
struct ANPC_Pawn_Wildlife_Parent_C_ConvertedDispatcher__DelegateSignature_Params
{
public:
	bool                                         Converted;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94C6[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             InstigatorPawn;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnPickupGrabbed_Destroyed__DelegateSignature
struct ANPC_Pawn_Wildlife_Parent_C_OnPickupGrabbed_Destroyed__DelegateSignature_Params
{
public:
	class ANPC_Pawn_Wildlife_Parent_C*           WildlifePawn;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ActorGrabbed;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
