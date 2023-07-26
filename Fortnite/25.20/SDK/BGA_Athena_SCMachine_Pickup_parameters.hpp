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

// 0x38 (0x38 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BuildDataRegistryResolverScope
struct ABGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope_Params
{
public:
	TArray<class FName>                          InOutResolverScopes;                               // 0x0(0x10)(Parm, OutParm)
	int32                                        InOutPriority;                                     // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98ED[0x3];                                     // Fixing Size After Last Property..
	class AFortMinigame*                         CallFunc_GetMinigame_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetSpatialGameplayInterfaceFNameForActor_ReturnValue; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98EE[0x3];                                     // Fixing Size After Last Property..
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.GetCacheContextOverride
struct ABGA_Athena_SCMachine_Pickup_C_GetCacheContextOverride_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_CollectedPickup
struct ABGA_Athena_SCMachine_Pickup_C_OnRep_CollectedPickup_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionTime
struct ABGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        OutInteractionTime;                                // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0xC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98EF[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevelWithContext_ReturnValue;   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CanHandleCleanupEvents
struct ABGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActorBeingDestroyed_ReturnValue;        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_HideAndKill
struct ABGA_Athena_SCMachine_Pickup_C_OnRep_HideAndKill_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ShouldDie
struct ABGA_Athena_SCMachine_Pickup_C_ShouldDie_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F0[0x4];                                     // Fixing Size After Last Property..
	class AController*                           EventInstigator;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionString
struct ABGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F1[0x7];                                     // Fixing Size After Last Property..
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm)
};

// 0xF (0xF - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintCanInteract
struct ABGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETInteractionType                 InteractionType;                                   // 0x9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_UnHide
struct ABGA_Athena_SCMachine_Pickup_C_OnRep_UnHide_Params
{
public:
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F2[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x10(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F3[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F4[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F5[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_1;             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F6[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x44(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.UserConstructionScript
struct ABGA_Athena_SCMachine_Pickup_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ReceiveBeginPlay
struct ABGA_Athena_SCMachine_Pickup_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DestroyPickup
struct ABGA_Athena_SCMachine_Pickup_C_DestroyPickup_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintOnInteract
struct ABGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CollectPickup
struct ABGA_Athena_SCMachine_Pickup_C_CollectPickup_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDestroyPickup
struct ABGA_Athena_SCMachine_Pickup_C_OnDestroyPickup_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.SpawnSound
struct ABGA_Athena_SCMachine_Pickup_C_SpawnSound_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDeathServer
struct ABGA_Athena_SCMachine_Pickup_C_OnDeathServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F7[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.HideAndKillPickup
struct ABGA_Athena_SCMachine_Pickup_C_HideAndKillPickup_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DelayDestroyPickup
struct ABGA_Athena_SCMachine_Pickup_C_DelayDestroyPickup_Params
{
public:
};

// 0x100 (0x100 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F8[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature
struct ABGA_Athena_SCMachine_Pickup_C_BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature_Params
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x37C (0x37C - 0x0)
// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ExecuteUbergraph_BGA_Athena_SCMachine_Pickup
struct ABGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_Event_InteractingPawn;                      // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        K2Node_Event_InteractionBeingAttempted;            // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98F9[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevelWithContext_ReturnValue;   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x40(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FA[0x3];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue_1; // 0x58(0x10)(ReferenceParm)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FB[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x80(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0xB8(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x1A8(0x18)()
	class AFortPlayerController*                 CallFunc_Array_Get_Item_1;                         // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetPlayerPawn_ReturnValue;                // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue_1;               // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FC[0x5];                                     // Fixing Size After Last Property..
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x1D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FD[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevelWithContext_ReturnValue_1; // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x1F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x200(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FE[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x210(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98FF[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue_2;               // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9900[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x31A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x31B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x31C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x330(0x8)(NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInVortex_ReturnValue;                   // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9901[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x344(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9902[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9903[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_ComponentBoundEvent_DamageCauser;           // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WakeUp_ReturnValue;                       // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WakeUp_ReturnValue_1;                     // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9904[0x6];                                     // Fixing Size After Last Property..
	class APlayspace*                            CallFunc_GetPlayspaceForActor_ReturnValue;         // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9905[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetLifeSpan_InLifespan_ImplicitCast;      // 0x378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
