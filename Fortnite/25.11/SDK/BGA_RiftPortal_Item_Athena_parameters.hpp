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

// 0x20 (0x20 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.GetAffiliationsToShowFor
struct ABGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor_Params
{
public:
	TArray<enum class EFortTeamAffiliation>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<enum class EFortTeamAffiliation>      K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
};

// 0x61 (0x61 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ShouldShowSoundIndicator
struct ABGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C9F[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetPlayerPawn_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA0[0x6];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetVehicleUInterface_ReturnValue;         // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA1[0x6];                                     // Fixing Size After Last Property..
	class APawn*                                 CallFunc_GetPawn_ReturnValue;                      // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA2[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA3[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_FindSeatIndex_ReturnValue;                // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.TeleportPlayerAndSendEvent
struct ABGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent_Params
{
public:
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA4[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TeleportPlayerPawn_ReturnValue;           // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.IsPlayerAttachedToAIPawn
struct ABGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn_Params
{
public:
	class AFortAIPawn*                           AIPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA5[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       AttachedPlayerPawn;                                // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_GetAttachedActors_OutActors;              // 0x18(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA6[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA7[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.EjectFromTurret
struct ABGA_RiftPortal_Item_Athena_C_EjectFromTurret_Params
{
public:
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetVehicleUInterface_ReturnValue;         // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanTeleport_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA8[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Is Flying
struct ABGA_RiftPortal_Item_Athena_C_Is_Flying_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA9[0x7];                                     // Fixing Size After Last Property..
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortMovementComp_Character*           K2Node_DynamicCast_AsFort_Movement_Comp_Character; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.UseRiftQuestUpdate
struct ABGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate_Params
{
public:
	class AController*                           InController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CAA[0x6];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted; // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted; // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.CheckForRiftLocUpdate
struct ABGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate_Params
{
public:
	class AController*                           InController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_PlayerPawn
struct ABGA_RiftPortal_Item_Athena_C_OnRep_PlayerPawn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_Vehicle
struct ABGA_RiftPortal_Item_Athena_C_OnRep_Vehicle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_TeleportLocation
struct ABGA_RiftPortal_Item_Athena_C_OnRep_TeleportLocation_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayExpandOrCollapseAudio
struct ABGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio_Params
{
public:
	bool                                         Expand;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CAB[0x6];                                     // Fixing Size After Last Property..
	class USoundBase*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__FinishedFunc
struct ABGA_RiftPortal_Item_Athena_C_Audio_RiftDestroyed__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__UpdateFunc
struct ABGA_RiftPortal_Item_Athena_C_Audio_RiftDestroyed__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__FinishedFunc
struct ABGA_RiftPortal_Item_Athena_C_VectorScale__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__UpdateFunc
struct ABGA_RiftPortal_Item_Athena_C_VectorScale__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__FinishedFunc
struct ABGA_RiftPortal_Item_Athena_C_FragmentMovement__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__UpdateFunc
struct ABGA_RiftPortal_Item_Athena_C_FragmentMovement__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.DestroyRift
struct ABGA_RiftPortal_Item_Athena_C_DestroyRift_Params
{
public:
};

// 0x100 (0x100 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CAC[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x100 (0x100 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CAD[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1C (0x1C - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ReceiveBeginPlay
struct ABGA_RiftPortal_Item_Athena_C_ReceiveBeginPlay_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayTeleportFX
struct ABGA_RiftPortal_Item_Athena_C_PlayTeleportFX_Params
{
public:
	struct FVector                               PlayerLocation;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          RequestingPlayerState;                             // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayCosmeticFX
struct ABGA_RiftPortal_Item_Athena_C_PlayCosmeticFX_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OverlappingOnBeginPlay
struct ABGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleTeleportEvent
struct ABGA_RiftPortal_Item_Athena_C_VehicleTeleportEvent_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.NotifyTeleportedVehicle
struct ABGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle_Params
{
public:
	class AActor*                                VehicleActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlaylistLoaded
struct ABGA_RiftPortal_Item_Athena_C_PlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CAE[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleInteractionFailed
struct ABGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed_Params
{
public:
	class AFortPlayerPawnAthena*                 FortPlayerPawnAthena;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.TryRiftTeleport
struct ABGA_RiftPortal_Item_Athena_C_TryRiftTeleport_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.IncrementTeleportLocationOffset
struct ABGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset_Params
{
public:
	struct FVector                               IncrementValue;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ResetTeleportLocationOffset
struct ABGA_RiftPortal_Item_Athena_C_ResetTeleportLocationOffset_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ForceRiftTeleport
struct ABGA_RiftPortal_Item_Athena_C_ForceRiftTeleport_Params
{
public:
	class AActor*                                Target_Actor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x800 (0x800 - 0x0)
// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ExecuteUbergraph_BGA_RiftPortal_Item_Athena
struct ABGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CAF[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor_2;           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp_2;            // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex_2;       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep_1;           // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB0[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult_1;          // 0x40(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x120(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor_1;           // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp_1;            // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB1[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x140(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsIgnoredActor_ReturnValue;               // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB2[0x6];                                     // Fixing Size After Last Property..
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x230(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x240(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB3[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB4[0x7];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0x260(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB5[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB6[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_PlayerLocation;                 // 0x288(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          K2Node_CustomEvent_RequestingPlayerState;          // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x2A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x2B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB7[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_Actor;                                // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB8[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x2E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB9[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x320(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x338(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x350(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CBA[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x35C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CBB[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x370(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x378(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_VehicleActor;                         // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          K2Node_DynamicCast_AsFort_Vehicle_Interface;       // 0x388(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CBC[0x7];                                     // Fixing Size After Last Property..
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x3A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_PlaylistName;                   // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CBD[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_CustomEvent_PlaylistContextTags;            // 0x3B0(0x20)(ConstParm)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x3D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Athena_CheckCreativeMode_CanCompleteQuest; // 0x3D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1; // 0x3DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3DB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CBE[0x4];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x3E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CBF[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawnAthena*                 K2Node_CustomEvent_FortPlayerPawnAthena;           // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x3F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Flying_NewParam;                       // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC0[0x7];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors_1; // 0x418(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Flying_NewParam_1;                     // 0x429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC1[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x42C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetVehicleActorPtr_ReturnValue;           // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanTeleport_ReturnValue;                  // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC2[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0x450(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0x468(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x480(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerPawn*>               CallFunc_BP_GetAllPassengers_ReturnValue;          // 0x498(0x10)(ReferenceParm)
	TArray<class AFortPlayerPawn*>               CallFunc_BP_GetAllPassengers_ReturnValue_1;        // 0x4A8(0x10)(ReferenceParm)
	class AFortPlayerPawn*                       CallFunc_Array_Get_Item;                           // 0x4B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_Array_Get_Item_1;                         // 0x4C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC3[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x4D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC4[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC5[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetOwnerLocation_ReturnValue;             // 0x4E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC6[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue;                    // 0x508(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC7[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x518(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x520(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC8[0x7];                                     // Fixing Size After Last Property..
	class APlayerState*                          Temp_object_Variable;                              // 0x530(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x538(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue; // 0x550(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CC9[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x55C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          K2Node_Select_Default;                             // 0x560(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_TargetActor;                    // 0x568(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x570(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCA[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x580(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x588(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_IncrementValue;                 // 0x5A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x5B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x5D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x5E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerPawn*>               CallFunc_BP_GetAllPassengers_ReturnValue_2;        // 0x600(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x610(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x614(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCB[0x3];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerPawn*>               CallFunc_BP_GetAllPassengers_ReturnValue_3;        // 0x618(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x628(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCC[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_Array_Get_Item_2;                         // 0x638(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x640(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x644(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCD[0x3];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x648(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCE[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsFort_Vehicle_Interface_1;     // 0x658(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCF[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue_1; // 0x66C(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x674(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD0[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x678(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInsideHidingProp_ReturnValue;           // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD1[0x7];                                     // Fixing Size After Last Property..
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x698(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x6A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x6A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x6A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TeleportAIPawn_ReturnValue;               // 0x6A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerAttachedToAIPawn_Result;          // 0x6A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD2[0x3];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_IsPlayerAttachedToAIPawn_AttachedPlayerPawn; // 0x6A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD3[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x6B4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_Target_Actor;                   // 0x6D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x6D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x6F0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x7D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x7DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x7F8(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x7FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
