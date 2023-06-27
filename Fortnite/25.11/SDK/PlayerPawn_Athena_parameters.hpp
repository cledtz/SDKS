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

// 0x2A (0x2A - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UGC BindRimLightIntensityChange
struct APlayerPawn_Athena_C_UGC_BindRimLightIntensityChange_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88A6[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerState*                      CallFunc_AttemptGetPlayerStateForPawn_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSpatialGameplayExperience_ReturnValue;  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UGC InitRimlightIntensity
struct APlayerPawn_Athena_C_UGC_InitRimlightIntensity_Params
{
public:
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevelWithContext_ReturnValue;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88A7[0x4];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSpatialGameplayExperience_ReturnValue;  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88A8[0x6];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableSet_Rim_Light_Intensity_ImplicitCast; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateRimlightIntensity
struct APlayerPawn_Athena_C_UpdateRimlightIntensity_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue_1; // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue_2; // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetMaterialRimlightIntensity
struct APlayerPawn_Athena_C_SetMaterialRimlightIntensity_Params
{
public:
	double                                       Multiplier;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88A9[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item_1;                         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88AA[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPhysicalRimlightIntensity
struct APlayerPawn_Athena_C_SetPhysicalRimlightIntensity_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Rimlight Setup
struct APlayerPawn_Athena_C_Rimlight_Setup_Params
{
public:
	class FString                                CVarName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88AB[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetConsoleVariableFloatValue_ReturnValue; // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue_1; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue_2; // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88AC[0x2];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x20(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APhysicalRimlight_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_RimlightCVARBoost_ImplicitCast; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GoToHUBIslandIfOutOfBounds
struct APlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds_Params
{
public:
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88AD[0x7];                                     // Fixing Size After Last Property..
	class AFortMinigame*                         CallFunc_GetMinigame_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetRightAxis
struct APlayerPawn_Athena_C_GetRightAxis_Params
{
public:
	double                                       Return_Value;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAxisValue_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAxisValue_ReturnValue_1;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetForwardAxis
struct APlayerPawn_Athena_C_GetForwardAxis_Params
{
public:
	double                                       Return_Value;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAxisValue_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAxisValue_ReturnValue_1;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AttemptToSetRimLight
struct APlayerPawn_Athena_C_AttemptToSetRimLight_Params
{
public:
	class UDataDrivenCVarEngineSubsystem*        CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x53 (0x53 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetPawnIsInLocalSquad
struct APlayerPawn_Athena_C_GetPawnIsInLocalSquad_Params
{
public:
	bool                                         IsInLocalSquad;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        ThisPawnSquadID;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88AE[0x6];                                     // Fixing Size After Last Property..
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      CallFunc_AttemptGetPlayerStateForPawn_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88AF[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerStateAthena*                K2Node_DynamicCast_AsFort_Player_State_Athena;     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B0[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerState*                      CallFunc_AttemptGetPlayerStateForPawn_ReturnValue_1; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetSquadId_ReturnValue;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B1[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerStateAthena*                K2Node_DynamicCast_AsFort_Player_State_Athena_1;   // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetSquadId_ReturnValue_1;                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_AttachLocation
struct APlayerPawn_Athena_C_Swinging_AttachLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachPointExists;                                 // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B2[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B3[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_ResetMeshTransform
struct APlayerPawn_Athena_C_Swinging_ResetMeshTransform_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_SetJumpHeight
struct APlayerPawn_Athena_C_Swinging_SetJumpHeight_Params
{
public:
	double                                       Jump_ZVelocity;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMovementComp_Character*           K2Node_DynamicCast_AsFort_Movement_Comp_Character; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwingGrounded
struct APlayerPawn_Athena_C_IsSwingGrounded_Params
{
public:
	bool                                         IsSwingingGrounded;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B4[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortControllerComponent_Swinging*     CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSwingingGrounded_ReturnValue;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingingVectorToAttachPoint
struct APlayerPawn_Athena_C_SwingingVectorToAttachPoint_Params
{
public:
	class FString                                Caller_ID;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_Origin;                // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent;             // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetComponentBounds_SphereRadius;          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B5[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_StopReelingIn
struct APlayerPawn_Athena_C_Swinging_StopReelingIn_Params
{
public:
	class UFortMovementComp_Character*           K2Node_DynamicCast_AsFort_Movement_Comp_Character; // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_StartReelingIn
struct APlayerPawn_Athena_C_Swinging_StartReelingIn_Params
{
public:
	class UFortMovementComp_Character*           K2Node_DynamicCast_AsFort_Movement_Comp_Character; // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swing_GetStartPoint
struct APlayerPawn_Athena_C_Swing_GetStartPoint_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B6[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetComponentBounds_Origin;                // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent;             // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetComponentBounds_SphereRadius;          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B7[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwingAttached
struct APlayerPawn_Athena_C_IsSwingAttached_Params
{
public:
	bool                                         IsSwingAttached;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B8[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88B9[0x6];                                     // Fixing Size After Last Property..
	class UFortControllerComponent_Swinging*     CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSwingAttached_ReturnValue;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingDetached
struct APlayerPawn_Athena_C_SwingDetached_Params
{
public:
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortControllerComponent_Swinging*     CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingAttached
struct APlayerPawn_Athena_C_SwingAttached_Params
{
public:
	struct FVector                               AttachLocation;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                AttachedActor;                                     // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortControllerComponent_Swinging*     CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwinging
struct APlayerPawn_Athena_C_IsSwinging_Params
{
public:
	bool                                         IsSwinging;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88BA[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortControllerComponent_Swinging*     CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInSwingingMovement_ReturnValue;         // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x268 (0x268 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_CheckGrounded
struct APlayerPawn_Athena_C_Swinging_CheckGrounded_Params
{
public:
	bool                                         Grounded_;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88BB[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               HitNormal;                                         // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Distance;                                          // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x28(0x10)(ConstParm, ReferenceParm)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_SphereTraceSingleByProfile_OutHit;        // 0x90(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SphereTraceSingleByProfile_ReturnValue;   // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88BC[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakHitResult_Time;                      // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88BD[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x198(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x1B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x1C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x1F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88BE[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x210(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x228(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x240(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Distance_ImplicitCast;       // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_UpdateCustomMovement
struct APlayerPawn_Athena_C_K2_UpdateCustomMovement_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88BF[0x4];                                     // Fixing Size After Last Property..
	class UCharacterMovementComponent*           MovementComponent;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       DT;                                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.handleCvarsUpdated
struct APlayerPawn_Athena_C_HandleCvarsUpdated_Params
{
public:
	class FString                                CVarName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                L_cvarName;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayerAimRotation
struct APlayerPawn_Athena_C_OnRep_PlayerAimRotation_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetAimPoint
struct APlayerPawn_Athena_C_GetAimPoint_Params
{
public:
	struct FRotator                              ControlRotation;                                   // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsDecoy
struct APlayerPawn_Athena_C_PawnIsDecoy_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsNPC
struct APlayerPawn_Athena_C_PawnIsNPC_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7A (0x7A - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSkeletalMeshComponentsFromWeaponObject
struct APlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject_Params
{
public:
	class AFortWeapon*                           WeaponObject;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        ComponentIndexOffset;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C0[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponentBudgeted*> CallFunc_GetWeaponMeshes_WeaponMeshes;             // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C1[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C2[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    Temp_wildcard_Variable;                            // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponentBudgeted*        CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C3[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C4[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C5[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSkeletalMeshComponentsFromWeaponObject
struct APlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject_Params
{
public:
	class AFortWeapon*                           WeaponObject;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C6[0x7];                                     // Fixing Size After Last Property..
	TArray<class USkeletalMeshComponentBudgeted*> CallFunc_GetWeaponMeshes_WeaponMeshes;             // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C7[0x7];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponentBudgeted*        CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_PawnIsNPC_ReturnValue;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C8[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetupDissolveFx_ReturnValue;              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C9[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88CA[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GalileoMaterialSetup
struct APlayerPawn_Athena_C_GalileoMaterialSetup_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Highest Priority Highlight
struct APlayerPawn_Athena_C_Get_Highest_Priority_Highlight_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        Top_Priority;                                      // 0x8(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Best_Source;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        CallFunc_Map_Find_Value;                           // 0x4C(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88CB[0x3];                                     // Fixing Size After Last Property..
	TArray<class UObject*>                       CallFunc_Map_Keys_Keys;                            // 0x80(0x10)(ReferenceParm)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        CallFunc_Map_Find_Value_1;                         // 0x98(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88CC[0x3];                                     // Fixing Size After Last Property..
	struct FPawnHighlight                        CallFunc_Map_Find_Value_2;                         // 0xCC(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88CD[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88CE[0x2];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast; // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Highlight Pawn from Source
struct APlayerPawn_Athena_C_Highlight_Pawn_from_Source_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        Highlight;                                         // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Only_Update_If_Current;                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        CallFunc_Map_Find_Value;                           // 0x3C(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88CF[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Pawn Highlight from Source
struct APlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Get_Highest_Priority_Highlight_Source;    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        CallFunc_Get_Highest_Priority_Highlight_Top_Priority; // 0x10(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyPawnHighlight
struct APlayerPawn_Athena_C_ApplyPawnHighlight_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        HitGlow;                                           // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D0[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableSet_Current_Highlight_Priority_ImplicitCast; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayRespawnFXOnSpawn
struct APlayerPawn_Athena_C_OnRep_PlayRespawnFXOnSpawn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut
struct APlayerPawn_Athena_C_LockonSearchCompleteTimedOut_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted
struct APlayerPawn_Athena_C_OnLockOnSearchCompleted_Params
{
public:
	bool                                         bConsumeEvent;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D1[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress
struct APlayerPawn_Athena_C_SetPartyInProgress_Params
{
public:
	bool                                         bIsPartyInProgress;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight
struct APlayerPawn_Athena_C_CleanUpTeleportationFXLight_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6C (0x6C - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats
struct APlayerPawn_Athena_C_RestoreCharacterMats_Params
{
public:
	bool                                         bFullyCompleted;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D2[0x3];                                     // Fixing Size After Last Property..
	int32                                        CurrentReplacementIndex;                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Itr;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Temp_wildcard_Variable;                            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D3[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D4[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_Array_Get_Item_1;                         // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x48(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D5[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden
struct APlayerPawn_Athena_C_SetPetHidden_Params
{
public:
	bool                                         NewHidden;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFx
struct APlayerPawn_Athena_C_SetupDissolveFx_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D6[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PawnIsNPC_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D7[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetupDissolveFx_ReturnValue;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanupDissolveFX
struct APlayerPawn_Athena_C_CleanupDissolveFX_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D8[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PawnIsNPC_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D9[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFx
struct APlayerPawn_Athena_C_UpdateDissolveFx_Params
{
public:
	double                                       Scalar_Transition;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Scalar_ZHeight;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Scalar_LightIntensity;                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_UpdateDissolveFx_Transition_ImplicitCast; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_UpdateDissolveFx_Transition_ImplicitCast_1; // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast;    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast_1;  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast_1; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight
struct APlayerPawn_Athena_C_SpawnTeleportationLight_Params
{
public:
	bool                                         CallFunc_PawnIsNPC_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88DA[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88DB[0x7];                                     // Fixing Size After Last Property..
	class UPointLightComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds
struct APlayerPawn_Athena_C_FindBounds_Params
{
public:
	bool                                         bGunTrue;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88DC[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xB0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x1C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut
struct APlayerPawn_Athena_C_QueueTeleportOut_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn
struct APlayerPawn_Athena_C_QueueTeleportIn_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract
struct APlayerPawn_Athena_C_OnStartLongInteract_Params
{
public:
	class AActor*                                ReceivingActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Out_bConsumeEvent;                                 // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Out_bSkipSetInteractDuration;                      // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Out_bSkipStartAnimation;                           // 0xA(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemInteractionType              Out_ItemInteractionType;                           // 0xB(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue_1;                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88DD[0x2];                                     // Fixing Size After Last Property..
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88DE[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x1C(0x4)(NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88DF[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup
struct APlayerPawn_Athena_C_InWarmup_Params
{
public:
	bool                                         bInWarmup;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E0[0x7];                                     // Fixing Size After Last Property..
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAthena_GameState_C*                   K2Node_DynamicCast_AsAthena_Game_State;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio
struct APlayerPawn_Athena_C_StopLoopingAudio_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio
struct APlayerPawn_Athena_C_EnableWaterAudio_Params
{
public:
	bool                                         Is_Entering_Water;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E1[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E2[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            Temp_object_Variable_2;                            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E3[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E4[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E5[0x7];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_SetFloatParameter_self_CastInput;         // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_1;                           // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatParameter_InFloat_ImplicitCast;   // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast; // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY
struct APlayerPawn_Athena_C_GetLocationInCircle_XY_Params
{
public:
	struct FVector                               LocationLocalSpace;                                // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloat_ReturnValue;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetPI_ReturnValue;                        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Cos_ReturnValue;                          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Sin_ReturnValue;                          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript
struct APlayerPawn_Athena_C_UserConstructionScript_Params
{
public:
	struct FFortPlayerPawnStats                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x0(0xD8)()
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E6[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableSet_PlayerAttributes_Speed_Walk_ImplicitCast; // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_PlayerAttributes_Speed_Run_ImplicitCast; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_PlayerAttributes_Speed_Sprint_ImplicitCast; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__FinishedFunc
struct APlayerPawn_Athena_C_Timeline_0__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__UpdateFunc
struct APlayerPawn_Athena_C_Timeline_0__UpdateFunc_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReady_978607004CDEB137CACF38831BECEF40
struct APlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40_Params
{
public:
	class AFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay
struct APlayerPawn_Athena_C_ReceiveBeginPlay_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed
struct APlayerPawn_Athena_C_ReceivePossessed_Params
{
public:
	class AController*                           NewController;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed
struct APlayerPawn_Athena_C_ReceiveDestroyed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged
struct APlayerPawn_Athena_C_SafeZoneStatusChanged_Params
{
public:
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping
struct APlayerPawn_Athena_C_GameplayCue_Athena_Equipping_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E7[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x148 (0x148 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects
struct APlayerPawn_Athena_C_OnDeathPlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E8[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO
struct APlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E9[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX
struct APlayerPawn_Athena_C_RemoveStormFX_Params
{
public:
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88EA[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume
struct APlayerPawn_Athena_C_OnEnteredWaterVolume_Params
{
public:
	struct FVector                               WaterSurfaceLocation;                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume
struct APlayerPawn_Athena_C_OnExitedWaterVolume_Params
{
public:
	struct FVector                               WaterSurfaceLocation;                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88EB[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus
struct APlayerPawn_Athena_C_NotifyTeammateSkydivedFromBus_Params
{
public:
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88EC[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay
struct APlayerPawn_Athena_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy
struct APlayerPawn_Athena_C_OnLeftReplayRelevancy_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy
struct APlayerPawn_Athena_C_OnEnteredReplayRelevancy_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted
struct APlayerPawn_Athena_C_OnCharacterCustomizationCompleted_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup
struct APlayerPawn_Athena_C_OnResInDuringWarmup_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX
struct APlayerPawn_Athena_C_AddStormFX_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag
struct APlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag_Params
{
public:
	int32                                        InSafeZonePhase;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSpawnGameplayCue;                                 // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged
struct APlayerPawn_Athena_C_SetSafeZoneTagWhenChanged_Params
{
public:
	int32                                        NewWhichSafeZoneTag;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GameplayTag;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         bSpawnGameplayCue;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged
struct APlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged_Params
{
public:
	int32                                        SafeZonePhase;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue
struct APlayerPawn_Athena_C_RemoveSafeZoneGameplayCue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage
struct APlayerPawn_Athena_C_OnReceivedStormSurgeDamage_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft
struct APlayerPawn_Athena_C_MeleeSwingLeft_Params
{
public:
	bool                                         First_Left;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight
struct APlayerPawn_Athena_C_MeleeSwingRight_Params
{
public:
	bool                                         First_Right;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOEnter
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88ED[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ActivateInvincibleVisuals
struct APlayerPawn_Athena_C_ActivateInvincibleVisuals_Params
{
public:
	double                                       Duration;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Reloading
struct APlayerPawn_Athena_C_GameplayCue_Athena_Reloading_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88EE[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x38 (0x38 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TeleportInNSeconds
struct APlayerPawn_Athena_C_TeleportInNSeconds_Params
{
public:
	double                                       SecondsTillTeleport;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DestLocation;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DestRotation;                                      // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ClientRunSnowGC
struct APlayerPawn_Athena_C_ClientRunSnowGC_Params
{
public:
	bool                                         Instant;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.WhiteoutAndTeleport
struct APlayerPawn_Athena_C_WhiteoutAndTeleport_Params
{
public:
	struct FVector                               DestLocation;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DestRotation;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Instant;                                           // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88EF[0x7];                                     // Fixing Size After Last Property..
	double                                       Gravity;                                           // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Boost
struct APlayerPawn_Athena_C_GameplayCue_Athena_Boost_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F0[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopGhost
struct APlayerPawn_Athena_C_OnCreativeStopGhost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartGhost
struct APlayerPawn_Athena_C_OnCreativeStartGhost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft_End
struct APlayerPawn_Athena_C_MeleeSwingLeft_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight_End
struct APlayerPawn_Athena_C_MeleeSwingRight_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSafeZoneGameplayCue
struct APlayerPawn_Athena_C_AddSafeZoneGameplayCue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCueServerToClient
struct APlayerPawn_Athena_C_RemoveSafeZoneGameplayCueServerToClient_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSuccessfulBuildingEdit
struct APlayerPawn_Athena_C_OnSuccessfulBuildingEdit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Respawn FX
struct APlayerPawn_Athena_C_Play_Respawn_FX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSpawnImmunityTimeReset
struct APlayerPawn_Athena_C_OnSpawnImmunityTimeReset_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterBody
struct APlayerPawn_Athena_C_OnEnteredWaterBody_Params
{
public:
	class AFortWaterBodyActor*                   WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFirstBody;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterBody
struct APlayerPawn_Athena_C_OnExitedWaterBody_Params
{
public:
	class AFortWaterBodyActor*                   WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsLastBody;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_OnMovementModeChanged
struct APlayerPawn_Athena_C_K2_OnMovementModeChanged_Params
{
public:
	enum class EMovementMode                     PrevMovementMode;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     NewMovementMode;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        PrevCustomMode;                                    // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        NewCustomMode;                                     // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnBeginWaterSprintBoost
struct APlayerPawn_Athena_C_OnBeginWaterSprintBoost_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.isHiddingInProp
struct APlayerPawn_Athena_C_IsHiddingInProp_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLandscapeCheckFailedAndTeleported
struct APlayerPawn_Athena_C_OnLandscapeCheckFailedAndTeleported_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerUp
struct APlayerPawn_Athena_C_ScalePlayerUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerDown
struct APlayerPawn_Athena_C_ScalePlayerDown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitPressed
struct APlayerPawn_Athena_C_OnTetheredExitPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitReleased
struct APlayerPawn_Athena_C_OnTetheredExitReleased_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherStarted
struct APlayerPawn_Athena_C_OnTetherStarted_Params
{
public:
	class APawn*                                 LastTetherPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherEnded
struct APlayerPawn_Athena_C_OnTetherEnded_Params
{
public:
	class APawn*                                 LastTetherPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartAImRotationTick
struct APlayerPawn_Athena_C_StartAImRotationTick_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EndRotationTick
struct APlayerPawn_Athena_C_EndRotationTick_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReplicateAimRotation
struct APlayerPawn_Athena_C_ReplicateAimRotation_Params
{
public:
	struct FRotator                              PlayerAimRotation;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AimTick
struct APlayerPawn_Athena_C_AimTick_Params
{
public:
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage
struct APlayerPawn_Athena_C_GameplayCue_Damage_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F1[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Healing
struct APlayerPawn_Athena_C_GameplayCue_Healing_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F2[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage.Shielded
struct APlayerPawn_Athena_C_GameplayCue_Damage_Shielded_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F3[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Shield.PotionConsumed
struct APlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F4[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupColdTag
struct APlayerPawn_Athena_C_SetupColdTag_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag
struct APlayerPawn_Athena_C_ApplyColdTag_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag_Retry
struct APlayerPawn_Athena_C_ApplyColdTag_Retry_Params
{
public:
	class UFortAbilitySystemComponent*           AbilitySystemComponent;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       AffectedPawn;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeActivate
struct APlayerPawn_Athena_C_OnCreativeModeratorModeActivate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeDeactivate
struct APlayerPawn_Athena_C_OnCreativeModeratorModeDeactivate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartInvulnerable
struct APlayerPawn_Athena_C_OnCreativeStartInvulnerable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopInvulnerable
struct APlayerPawn_Athena_C_OnCreativeStopInvulnerable_Params
{
public:
};

// 0x39 (0x39 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddHighlightFromSource
struct APlayerPawn_Athena_C_AddHighlightFromSource_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        Highlight;                                         // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnlyUpdateIfCurrent;                               // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveHighlightFromSource
struct APlayerPawn_Athena_C_RemoveHighlightFromSource_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveHit
struct APlayerPawn_Athena_C_ReceiveHit_Params
{
public:
	class UPrimitiveComponent*                   MyComp;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Other;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bSelfMoved;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F5[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               HitLocation;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitNormal;                                         // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NormalImpulse;                                     // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0x68(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x48 (0x48 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDisplayHitNotify
struct APlayerPawn_Athena_C_OnDisplayHitNotify_Params
{
public:
	float                                        DamageDealt;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCriticalHit;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFatalHit;                                         // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShieldHit;                                        // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F6[0x1];                                     // Fixing Size After Last Property..
	class AActor*                                HitActor;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 HitTags;                                           // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                               HitLocation;                                       // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Hide Character Parts
struct APlayerPawn_Athena_C_Hide_Character_Parts_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnPart
struct APlayerPawn_Athena_C_OnPart_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPart*                  Part;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                MeshPart;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               PartType;                                          // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathServer
struct APlayerPawn_Athena_C_OnDeathServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F7[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDBNOStateChanged_Event
struct APlayerPawn_Athena_C_OnDBNOStateChanged_Event_Params
{
public:
	class AFortPawn*                             FortPawn;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bInIsDBNO;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredOrExitedWaterVolume
struct APlayerPawn_Athena_C_OnEnteredOrExitedWaterVolume_Params
{
public:
	bool                                         bEntered;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F8[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               WaterSurfaceLocation;                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayWaterEnterExitAudioAndFX
struct APlayerPawn_Athena_C_PlayWaterEnterExitAudioAndFX_Params
{
public:
	struct FVector                               WaterSurfaceLocation;                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2150 (0x2150 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena
struct APlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_8;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88F9[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_8;              // 0x8(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_7;               // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88FA[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_7;              // 0xE0(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88FB[0x6];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x1B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x1D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x1D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x1F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue_1;           // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88FC[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_CustomEvent_Pawn_1;                         // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x208(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88FD[0x4];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x220(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88FE[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetSafeZonePhase_ReturnValue;             // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x250(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_InSafeZonePhase;                // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSpawnGameplayCue_1;            // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88FF[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x260(0xD0)(ContainsInstancedReference)
	bool                                         Temp_bool_Variable;                                // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8900[0x3];                                     // Fixing Size After Last Property..
	int32                                        K2Node_CustomEvent_NewWhichSafeZoneTag;            // 0x334(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_GameplayTag;                    // 0x338(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSpawnGameplayCue;              // 0x33C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8901[0x3];                                     // Fixing Size After Last Property..
	int32                                        K2Node_Event_SafeZonePhase;                        // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8902[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_Event_WaterSurfaceLocation;                 // 0x348(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_First_Left;                           // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8903[0x7];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x368(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x370(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_First_Right;                          // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_6;               // 0x379(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8904[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_6;              // 0x380(0xD0)(ConstParm, ContainsInstancedReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x450(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8905[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_Event_WaterSurfaceLocation_1;               // 0x470(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_Duration;                       // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8906[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x498(0xD0)(ContainsInstancedReference)
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x568(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_9;               // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8907[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_9;              // 0x578(0xD0)(ConstParm, ContainsInstancedReference)
	class AFortPlayerControllerSpectating*       K2Node_DynamicCast_AsFort_Player_Controller_Spectating; // 0x648(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8908[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x654(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x658(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8909[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEffectContextHandle          CallFunc_BreakGameplayCueParameters_EffectContext; // 0x660(0x18)()
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x678(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x67C(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x680(0x20)()
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x6A0(0x20)()
	struct FVector                               CallFunc_BreakGameplayCueParameters_Location;      // 0x6C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakGameplayCueParameters_Normal;        // 0x6D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_Instigator;    // 0x6F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x6F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x700(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x708(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x710(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x714(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x718(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_890A[0x7];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable_1;                              // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_2;        // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_890B[0x7];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_1; // 0x738(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerSpectating*       K2Node_DynamicCast_AsFort_Player_Controller_Spectating_1; // 0x740(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_10;              // 0x749(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_890C[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_10;             // 0x750(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_3;        // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_5;               // 0x821(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_890D[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_5;              // 0x828(0xD0)(ConstParm, ContainsInstancedReference)
	double                                       K2Node_CustomEvent_SecondsTillTeleport;            // 0x8F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_DestLocation_1;                 // 0x900(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_DestRotation_1;                 // 0x918(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Instant_1;                      // 0x930(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_890E[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_CustomEvent_DestLocation;                   // 0x938(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_DestRotation;                   // 0x950(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Instant;                        // 0x968(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_890F[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_CustomEvent_Gravity;                        // 0x970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8910[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default;                             // 0x980(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x988(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_TeleportTo_ReturnValue;                // 0x989(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8911[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x990(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0x998(0xD0)(ContainsInstancedReference)
	FInterfaceProperty_                          CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0xA68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0xA78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8912[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_4;        // 0xA80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8913[0x7];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_2; // 0xA88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerSpectating*       K2Node_DynamicCast_AsFort_Player_Controller_Spectating_2; // 0xA90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xA98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8914[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage_1;                             // 0xA9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags_1;                         // 0xAA0(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum_1;                           // 0xAC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo_1;                            // 0xAD8(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             K2Node_Event_InstigatedBy_1;                       // 0xBB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser_1;                       // 0xBC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext_1;                      // 0xBC8(0x18)()
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_4;               // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8915[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_4;              // 0xBE8(0xD0)(ConstParm, ContainsInstancedReference)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_11;              // 0xCB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8916[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_11;             // 0xCC0(0xD0)(ConstParm, ContainsInstancedReference)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0xD90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0xD98(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_3;  // 0xDA0(0xD0)(ContainsInstancedReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0xE70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8917[0x4];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetLocalViewingPlayerController_ReturnValue_3; // 0xE90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xE98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8918[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerControllerSpectating*       K2Node_DynamicCast_AsFort_Player_Controller_Spectating_3; // 0xEA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xEA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8919[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetVehicleUInterface_ReturnValue;         // 0xEB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue;                    // 0xEC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0xEC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetVehicleActorPtrConst_ReturnValue;      // 0xED0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xED8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_891A[0x7];                                     // Fixing Size After Last Property..
	class AFortCharacterVehicle*                 K2Node_DynamicCast_AsFort_Character_Vehicle;       // 0xEE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xEE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_5;        // 0xEE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xEEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_891B[0x1];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xEEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWaterBodyActor*                   K2Node_Event_WaterBody_1;                          // 0xEF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsFirstBody;                         // 0xEF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_891C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xEFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWaterBodyActor*                   K2Node_Event_WaterBody;                            // 0xF00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsLastBody;                          // 0xF08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     K2Node_Event_PrevMovementMode;                     // 0xF09(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     K2Node_Event_NewMovementMode;                      // 0xF0A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_Event_PrevCustomMode;                       // 0xF0B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_Event_NewCustomMode;                        // 0xF0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF0D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue;            // 0xF0E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_891D[0x1];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0xF10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xF18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_891E[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0xF1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0xF20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0xF21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_891F[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetNumericCVar_OutValue;                  // 0xF24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNumericCVar_ReturnValue;               // 0xF28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0xF29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;    // 0xF2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInAthena_ReturnValue;                   // 0xF2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xF2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0xF2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xF2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8920[0x1];                                     // Fixing Size After Last Property..
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0xF30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfacePosition; // 0xF38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfaceNormal; // 0xF50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  K2Node_DynamicCast_AsFort_Game_State_Athena_1;     // 0xF68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xF70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStormCN_ReturnValue;                    // 0xF71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8921[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0xF78(0xB0)()
	float                                        CallFunc_GetWaterImmersionDepth_ReturnValue;       // 0x1028(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8922[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x1030(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMovementComp_Character*           K2Node_DynamicCast_AsFort_Movement_Comp_Character; // 0x1038(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x1040(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8923[0x7];                                     // Fixing Size After Last Property..
	class AFortWaterBodyActor*                   CallFunc_GetCurrentWaterBody_ReturnValue;          // 0x1048(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMovingOnGround_ReturnValue;             // 0x1050(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1051(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x1052(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8924[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetWaterSurfaceLocation_ReturnValue;      // 0x1058(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_4;  // 0x1070(0xD0)(ContainsInstancedReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_6;        // 0x1140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_isHidden_1;                     // 0x1141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8925[0x5];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x1148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1; // 0x1150(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorFloat_ReturnValue;           // 0x1170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x1188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8926[0x7];                                     // Fixing Size After Last Property..
	class APawn*                                 K2Node_Event_LastTetherPawn_1;                     // 0x1190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_LastTetherPawn;                       // 0x1198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x11A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x11A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0x11B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x11B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetTetherPawn_ReturnValue;                // 0x11C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x11C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x11D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8927[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x11E0(0x20)()
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData_1;             // 0x1200(0xB0)()
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x12B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              K2Node_CustomEvent_PlayerAimRotation;              // 0x12C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x12E0(0x8)(NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_Event_NewController;                        // 0x12E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x12F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8928[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_5;  // 0x12F8(0xD0)(ContainsInstancedReference)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue_1;                // 0x13C8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_6;  // 0x13D0(0xD0)(ContainsInstancedReference)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_7;  // 0x14A0(0xD0)(ContainsInstancedReference)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_8;  // 0x1570(0xD0)(ContainsInstancedReference)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_3;               // 0x1640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8929[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_3;              // 0x1648(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x1718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_2;               // 0x1719(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_892A[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_2;              // 0x1720(0xD0)(ConstParm, ContainsInstancedReference)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType_1;               // 0x17F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_892B[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters_1;              // 0x17F8(0xD0)(ConstParm, ContainsInstancedReference)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType;                 // 0x18C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_892C[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters;                // 0x18D0(0xD0)(ConstParm, ContainsInstancedReference)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x19A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_892D[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_2;  // 0x19A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2; // 0x19B0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3; // 0x19B8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x19C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_892E[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            Temp_struct_Variable;                              // 0x19D0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*           K2Node_CustomEvent_AbilitySystemComponent;         // 0x1A30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_CustomEvent_AffectedPawn;                   // 0x1A38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x1A40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1A48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x1A49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_892F[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_9;  // 0x1A50(0xD0)(ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1B20(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8930[0x4];                                     // Fixing Size After Last Property..
	struct FDelegateHandleController             CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out; // 0x1B30(0x10)()
	class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0x1B40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x1B48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8931[0x7];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  Temp_object_Variable;                              // 0x1B50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_10; // 0x1B58(0xD0)(ContainsInstancedReference)
	class UFortPlaylist*                         Temp_object_Variable_1;                            // 0x1C28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Temp_struct_Variable_1;                            // 0x1C30(0x20)()
	bool                                         Temp_bool_Has_Been_Initd_Variable_2;               // 0x1C50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8932[0x7];                                     // Fixing Size After Last Property..
	class UFortAnimInputEvent*                   CallFunc_CreateAnimInputEvent_ReturnValue;         // 0x1C58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAnimInputEvent*                   CallFunc_CreateAnimInputEvent_ReturnValue_1;       // 0x1C60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAnimInputEvent*                   CallFunc_CreateAnimInputEvent_ReturnValue_2;       // 0x1C68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAnimInputEvent*                   CallFunc_CreateAnimInputEvent_ReturnValue_3;       // 0x1C70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_Source_1;                             // 0x1C78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        K2Node_Event_Highlight;                            // 0x1C80(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_OnlyUpdateIfCurrent;                  // 0x1CB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8933[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               K2Node_Event_Source;                               // 0x1CB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_MyComp;                               // 0x1CC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_Other;                                // 0x1CC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_OtherComp;                            // 0x1CD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSelfMoved;                           // 0x1CD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8934[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_Event_HitLocation_1;                        // 0x1CE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_HitNormal;                            // 0x1CF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_NormalImpulse;                        // 0x1D10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x1D28(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x1E08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x1E09(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_2;                     // 0x1E0A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPawnIsInLocalSquad_IsInLocalSquad;     // 0x1E0B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DamageDealt;                          // 0x1E0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCriticalHit;                         // 0x1E10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bFatalHit;                            // 0x1E11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShieldHit;                           // 0x1E12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8935[0x5];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_HitActor;                             // 0x1E18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_HitTags;                              // 0x1E20(0x20)()
	struct FVector                               K2Node_Event_HitLocation;                          // 0x1E40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_isHidden;                       // 0x1E58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8936[0x7];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  K2Node_CustomEvent_GameState;                      // 0x1E60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         K2Node_CustomEvent_Playlist;                       // 0x1E68(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_CustomEvent_PlaylistContextTags;            // 0x1E70(0x20)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1E90(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8937[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_CustomEvent_Pawn;                           // 0x1EA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomCharacterPart*                  K2Node_CustomEvent_Part;                           // 0x1EA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                K2Node_CustomEvent_MeshPart;                       // 0x1EB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               K2Node_CustomEvent_PartType;                       // 0x1EB8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8938[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1EBC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x1EC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8939[0x7];                                     // Fixing Size After Last Property..
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x1ED0(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x1EE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1EE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ComponentHasTag_ReturnValue;              // 0x1EF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x1EF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893A[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1EF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1EF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893B[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue_2;                // 0x1F00(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x1F08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893C[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x1F10(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x1F30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x1F48(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x2028(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x2030(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x2038(0x18)()
	class AFortPawn*                             K2Node_CustomEvent_FortPawn;                       // 0x2050(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bInIsDBNO;                      // 0x2058(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893D[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x205C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetActorTeam_ReturnValue;                 // 0x2068(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893E[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 Temp_struct_Variable_2;                            // 0x2070(0x20)()
	enum class EFortTeamAffiliation              CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue; // 0x2090(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x2091(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bEntered;                       // 0x2092(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_893F[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_CustomEvent_WaterSurfaceLocation_1;         // 0x2098(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInVehicle_ReturnValue_1;                // 0x20B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8940[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_CustomEvent_WaterSurfaceLocation;           // 0x20B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x20D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x20D8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8941[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20E8(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x20F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8942[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast; // 0x20F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast_1; // 0x2100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x2104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast; // 0x2108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8943[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast_1; // 0x2110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_Level_ImplicitCast;       // 0x2118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8944[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x2120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x2128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x2130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x2138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_InvokeWaterJumpSplash_SplashScale_ImplicitCast; // 0x2140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8945[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_CallDelegate_Damage_ImplicitCast;           // 0x2148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp__DelegateSignature
struct APlayerPawn_Athena_C_CCPM_isHiddenInProp__DelegateSignature_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeft2__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2__DelegateSignature
struct APlayerPawn_Athena_C_SwingRight2__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeftEnd__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd__DelegateSignature
struct APlayerPawn_Athena_C_SwingRightEnd__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported__DelegateSignature
struct APlayerPawn_Athena_C_OnFadeToWhiteTeleported__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeft__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature
struct APlayerPawn_Athena_C_SwingRight__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature
struct APlayerPawn_Athena_C_ResOut__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature
struct APlayerPawn_Athena_C_ResIn__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
