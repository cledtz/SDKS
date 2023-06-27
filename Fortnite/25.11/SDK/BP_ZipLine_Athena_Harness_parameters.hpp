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

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OnRep_AttachedPlayer
struct ABP_ZipLine_Athena_Harness_C_OnRep_AttachedPlayer_Params
{
public:
};

// 0x208 (0x208 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Update Audio and VFXParams
struct ABP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams_Params
{
public:
	double                                       Alpha;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpeedFactor;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x20(0xD0)(ContainsInstancedReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A4[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Abs_ReturnValue_1;                        // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A5[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x108(0xD0)(ContainsInstancedReference)
	float                                        CallFunc_GetZiplineSpeedFactor_ReturnValue;        // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetZiplineSpeedFactorTarget_ReturnValue;  // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A6[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast; // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast_1; // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_SpeedFactor_ImplicitCast;       // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveBeginPlay
struct ABP_ZipLine_Athena_Harness_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Start Travel Audio
struct ABP_ZipLine_Athena_Harness_C_Start_Travel_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Stop Travel Audio
struct ABP_ZipLine_Athena_Harness_C_Stop_Travel_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveDestroyed
struct ABP_ZipLine_Athena_Harness_C_ReceiveDestroyed_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.HandleOnDied
struct ABP_ZipLine_Athena_Harness_C_HandleOnDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A7[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A8[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Chime Visual
struct ABP_ZipLine_Athena_Harness_C_Chime_Visual_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OrientMotorForZipline
struct ABP_ZipLine_Athena_Harness_C_OrientMotorForZipline_Params
{
public:
	class AFortAthenaZiplineBase*                Zipline;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DesiredZiplineOffset;                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.RotateToZiplineDirection
struct ABP_ZipLine_Athena_Harness_C_RotateToZiplineDirection_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToSpline
struct ABP_ZipLine_Athena_Harness_C_UpdateMotorToSpline_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateParamsForAudioAndVFX
struct ABP_ZipLine_Athena_Harness_C_UpdateParamsForAudioAndVFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Cleanup On DownhillGCN
struct ABP_ZipLine_Athena_Harness_C_Cleanup_On_DownhillGCN_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateZiplineOffsetLocation
struct ABP_ZipLine_Athena_Harness_C_UpdateZiplineOffsetLocation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToDynSpline
struct ABP_ZipLine_Athena_Harness_C_UpdateMotorToDynSpline_Params
{
public:
};

// 0x7A0 (0x7A0 - 0x0)
// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness
struct ABP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A9[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18AA[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18AB[0x4];                                     // Fixing Size After Last Property..
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18AC[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakRotator_Roll;                        // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x118(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                K2Node_CustomEvent_DamagedActor;                   // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Damage;                         // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18AD[0x4];                                     // Fixing Size After Last Property..
	class AController*                           K2Node_CustomEvent_InstigatedBy;                   // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_DamageCauser;                   // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_HitLocation;                    // 0x218(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_FHitComponent;                  // 0x230(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_BoneName;                       // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18AE[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_CustomEvent_Momentum;                       // 0x240(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18AF[0x7];                                     // Fixing Size After Last Property..
	class UParticleSystem*                       K2Node_Select_Default;                             // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x268(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x280(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EFortTeamAffiliation>      K2Node_MakeArray_Array;                            // 0x288(0x10)(ReferenceParm)
	class AFortAthenaZiplineBase*                K2Node_CustomEvent_Zipline;                        // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_DesiredZiplineOffset;           // 0x2A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B0[0x7];                                     // Fixing Size After Last Property..
	class APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C* K2Node_DynamicCast_AsPROTOTYPE_BP_Athena_Dynamic_Zip_Line_Spline; // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B1[0x7];                                     // Fixing Size After Last Property..
	class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline; // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B2[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x2DC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x2E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x300(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotFromZ_ReturnValue;                 // 0x308(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B3[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x338(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_FindDirectionClosestToWorldLocation_ReturnValue; // 0x350(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x368(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x448(0xD0)(ContainsInstancedReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B4[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x51C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x528(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x530(0xD0)(ContainsInstancedReference)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x600(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       K2Node_Select_Default_1;                           // 0x608(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B5[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x618(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x630(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x648(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x660(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AFortPlayerController*>         Temp_object_Variable;                              // 0x740(0x10)(ConstParm, ReferenceParm)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x750(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x758(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B6[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x768(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_FindDirectionClosestToWorldLocation_ReturnValue_1; // 0x770(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x788(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x78C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x798(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;  // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
