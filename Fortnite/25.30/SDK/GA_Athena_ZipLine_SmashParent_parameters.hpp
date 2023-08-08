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

// 0x21 (0x21 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Motor Offset
struct UGA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset_Params
{
public:
	struct FVector                               Offset;                                            // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GetZiplineRotationForMotor
struct UGA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6552[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotFromZ_ReturnValue;                 // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6554[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast;            // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Pole A Socket Loc
struct UGA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc_Params
{
public:
	struct FVector                               PoleBSocketLoc;                                    // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Pole B Socket Loc
struct UGA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc_Params
{
public:
	struct FVector                               PoleBSocketLoc;                                    // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x278 (0x278 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.CheckForQuestProgress
struct UGA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress_Params
{
public:
	TScriptInterface<class UGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x10(0x20)()
	class UController*                           CallFunc_GetController_ReturnValue;                // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_655E[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_655F[0x7];                                     // Fixing Size After Last Property
	struct FVerbMessage_Custom                   CallFunc_MakeCustomVerbMessage_ReturnValue;        // 0x50(0x110)()
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVerbMessage_Custom                   CallFunc_AddTagsForSubject_Result;                 // 0x168(0x110)()
};

// 0x46 (0x46 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.CheckMotor
struct UGA_Athena_ZipLine_SmashParent_C_CheckMotor_Params
{
public:
	bool                                         HasHarness;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6563[0x2];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6564[0x7];                                     // Fixing Size After Last Property
	TArray<class UActor*>                        CallFunc_GetAttachedActors_OutActors;              // 0x10(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6566[0x4];                                     // Fixing Size After Last Property
	class UActor*                                CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ZipLine_Athena_Harness_C*          K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness;   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6567[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Spawn Motor
struct UGA_Athena_ZipLine_SmashParent_C_Spawn_Motor_Params
{
public:
	class UActor*                                PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_656B[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_Get_Zipline_Motor_Offset_Offset;          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_656C[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x50(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ZipLine_Athena_Harness_Yellow_C*   CallFunc_FinishSpawningActor_ReturnValue;          // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.BreakNearbyStructures
struct UGA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures_Params
{
public:
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UActor*>                        K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ReferenceParm)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array_1;                          // 0x48(0x10)(ConstParm, ReferenceParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Added_5A9C02A9480D39B213A8AC81767C7A76
struct UGA_Athena_ZipLine_SmashParent_C_Added_5A9C02A9480D39B213A8AC81767C7A76_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Removed_A0F18316443E5C5267615C9692274B36
struct UGA_Athena_ZipLine_SmashParent_C_Removed_A0F18316443E5C5267615C9692274B36_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck
struct UGA_Athena_ZipLine_SmashParent_C_SurroundingsCheck_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xE0 (0xE0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnPawnLanded_Bind
struct UGA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleZiplineStateChanged
struct UGA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged_Params
{
public:
	bool                                         bIsZiplining;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6584[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerPawn*                       Pawn;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.RemoveFallDamageImmunity
struct UGA_Athena_ZipLine_SmashParent_C_RemoveFallDamageImmunity_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnEnterVehicle_Bind
struct UGA_Athena_ZipLine_SmashParent_C_OnEnterVehicle_Bind_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ZipliningComplete
struct UGA_Athena_ZipLine_SmashParent_C_ZipliningComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnEnteredAircraft_Bind
struct UGA_Athena_ZipLine_SmashParent_C_OnEnteredAircraft_Bind_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnBeginSkydiving_Bind
struct UGA_Athena_ZipLine_SmashParent_C_OnBeginSkydiving_Bind_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.DelaySpawnMotor
struct UGA_Athena_ZipLine_SmashParent_C_DelaySpawnMotor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.BindEvent
struct UGA_Athena_ZipLine_SmashParent_C_BindEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SwimmingStarted
struct UGA_Athena_ZipLine_SmashParent_C_SwimmingStarted_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.EnterWaterExit
struct UGA_Athena_ZipLine_SmashParent_C_EnterWaterExit_Params
{
public:
	class UFortPlayerPawn*                       FortPlayerPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleClientSplineZiplineStateChanged
struct UGA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged_Params
{
public:
	bool                                         bIsZiplining;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_658E[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerPawn*                       Pawn;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SplineZiplineMovementModeDelayOver
struct UGA_Athena_ZipLine_SmashParent_C_SplineZiplineMovementModeDelayOver_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.K2_OnEndAbility
struct UGA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Remove Fall Damage Immunity Delayed
struct UGA_Athena_ZipLine_SmashParent_C_Remove_Fall_Damage_Immunity_Delayed_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.EndAsyncBreakNearbyStructuresOverlap
struct UGA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap_Params
{
public:
	TArray<class UActor*>                        OverlapActors;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck_SmashObjects
struct UGA_Athena_ZipLine_SmashParent_C_SurroundingsCheck_SmashObjects_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck_MotorCheck
struct UGA_Athena_ZipLine_SmashParent_C_SurroundingsCheck_MotorCheck_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurruondingsCheck_VehicleCheck
struct UGA_Athena_ZipLine_SmashParent_C_SurruondingsCheck_VehicleCheck_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.StartSurroundingsCheck
struct UGA_Athena_ZipLine_SmashParent_C_StartSurroundingsCheck_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnPawnDied
struct UGA_Athena_ZipLine_SmashParent_C_OnPawnDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6594[0x4];                                     // Fixing Size After Last Property
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6597[0x4];                                     // Fixing Size After Last Property
	struct FVector                               Momentum;                                          // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayTagEvent_ZiplineEnter
struct UGA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayTagEvent_ZiplineExit
struct UGA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayEvent_ZiplineEnter_BeginZiplining
struct UGA_Athena_ZipLine_SmashParent_C_GameplayEvent_ZiplineEnter_BeginZiplining_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.FallingTagRemoved
struct UGA_Athena_ZipLine_SmashParent_C_FallingTagRemoved_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Pre_BeginZiplinging
struct UGA_Athena_ZipLine_SmashParent_C_Pre_BeginZiplinging_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleGameplayEventTag
struct UGA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ZiplinePostBegin_Event
struct UGA_Athena_ZipLine_SmashParent_C_ZiplinePostBegin_Event_Params
{
public:
};

// 0x7FC (0x7FC - 0x0)
// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ExecuteUbergraph_GA_Athena_ZipLine_SmashParent
struct UGA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WantsToGoFromVehicleToZipline_ReturnValue; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInInteractBlockingVehicle_ReturnValue;  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_CustomEvent_Hit;                            // 0x8(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65BE[0x4];                                     // Fixing Size After Last Property
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65C1[0x7];                                     // Fixing Size After Last Property
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsZiplining_1;                 // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65C2[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerPawn*                       K2Node_CustomEvent_Pawn_1;                         // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x128(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1; // 0x130(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x138(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x144(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x150(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65C3[0x4];                                     // Fixing Size After Last Property
	class UController*                           CallFunc_GetController_ReturnValue;                // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65C5[0x2];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x174(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x180(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x18C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x198(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x1A4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1B8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x1C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65C8[0x2];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x1D0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x1DC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x1E8(0xB0)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x298(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x2A4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UController*                           CallFunc_GetController_ReturnValue_1;              // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller_1;     // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65CD[0x7];                                     // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65CF[0x3];                                     // Fixing Size After Last Property
	class UFortPlayerPawn*                       K2Node_CustomEvent_FortPlayerPawn;                 // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagRemoved*   CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x2E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsZiplining;                   // 0x2FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65D1[0x5];                                     // Fixing Size After Last Property
	class UFortPlayerPawn*                       K2Node_CustomEvent_Pawn;                           // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue_1;       // 0x308(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component_1; // 0x310(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65D2[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x31C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x32A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x32B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65D3[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x330(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x33C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x33D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x33E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65D6[0x1];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x340(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65D8[0x4];                                     // Fixing Size After Last Property
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x350(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x359(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x35A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65D9[0x1];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x35C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x368(0x8)(NoDestructor, HasGetValueTypeHash)
	TArray<class UActor*>                        K2Node_Event_OverlapActors;                        // 0x370(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65DA[0x7];                                     // Fixing Size After Last Property
	class UActor*                                CallFunc_Array_Get_Item;                           // 0x388(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65DB[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x3A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65DC[0x7];                                     // Fixing Size After Last Property
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x3B0(0x28)()
	TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x3D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65DE[0x7];                                     // Fixing Size After Last Property
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2; // 0x3F0(0x10)(ReferenceParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65DF[0x7];                                     // Fixing Size After Last Property
	class UFortAthenaSupplyDropBalloon*          K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon; // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65E0[0x7];                                     // Fixing Size After Last Property
	class UFortHeldObjectComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x418(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65E1[0x2];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x428(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x434(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x444(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65E2[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x448(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65E3[0x4];                                     // Fixing Size After Last Property
	class UFortAnimInputEvent*                   CallFunc_CreateAnimInputEvent_ReturnValue;         // 0x450(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAnimInputEvent*                   CallFunc_CreateAnimInputEvent_ReturnValue_1;       // 0x458(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x460(0xB0)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x510(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x51C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x528(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_4;        // 0x530(0x8)(NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_CustomEvent_DamagedActor;                   // 0x538(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Damage;                         // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65E5[0x4];                                     // Fixing Size After Last Property
	class UController*                           K2Node_CustomEvent_InstigatedBy;                   // 0x548(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_CustomEvent_DamageCauser;                   // 0x550(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_HitLocation;                    // 0x558(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_FHitComponent;                  // 0x570(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_BoneName;                       // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65E6[0x4];                                     // Fixing Size After Last Property
	struct FVector                               K2Node_CustomEvent_Momentum;                       // 0x580(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_CustomEvent_EventData_2;                    // 0x598(0xB0)(ConstParm)
	struct FGameplayEventData                    K2Node_CustomEvent_EventData_1;                    // 0x648(0xB0)(ConstParm)
	class UPrimitiveComponent*                   K2Node_DynamicCast_AsPrimitive_Component;          // 0x6F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65E7[0x7];                                     // Fixing Size After Last Property
	class UFortAthenaZipline*                    K2Node_DynamicCast_AsFort_Athena_Zipline;          // 0x708(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65E8[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x714(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_CustomEvent_EventData;                      // 0x720(0xB0)(ConstParm)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65EB[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0x7D4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0x7E0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0x7EC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x7F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
