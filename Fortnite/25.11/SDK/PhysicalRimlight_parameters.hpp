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

// 0x70 (0x70 - 0x0)
// Function PhysicalRimlight.PhysicalRimlight_C.Set Rimlight Color and Intensity
struct APhysicalRimlight_C_Set_Rimlight_Color_and_Intensity_Params
{
public:
	enum class EFortDayPhase                     Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_905B[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDirectionalLightComponent*            CallFunc_GetDirectionalLightComponent_ReturnValue; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetLightColor_ReturnValue;                // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue;           // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_905C[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetIntensity_NewIntensity_ImplicitCast;   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetIntensity_NewIntensity_ImplicitCast_1; // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PhysicalRimlight.PhysicalRimlight_C.RimlightAttemptValidation
struct APhysicalRimlight_C_RimlightAttemptValidation_Params
{
public:
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function PhysicalRimlight.PhysicalRimlight_C.PhysicalRimlight_AutoGenFunc
struct APhysicalRimlight_C_PhysicalRimlight_AutoGenFunc_Params
{
public:
	class FString                                CVarName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_GetConsoleVariableFloatValue_ReturnValue; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_905D[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableSet_Rimlight_CVARBoost_ImplicitCast; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PhysicalRimlight.PhysicalRimlight_C.Update Rimlight
struct APhysicalRimlight_C_Update_Rimlight_Params
{
public:
};

// 0x300 (0x300 - 0x0)
// Function PhysicalRimlight.PhysicalRimlight_C.ValidateRimlight
struct APhysicalRimlight_C_ValidateRimlight_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetCameraRotation_ReturnValue;            // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x80(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_TransformLocation_ReturnValue;            // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0xF8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x1D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x1F0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_905E[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetConsoleVariableFloatValue_ReturnValue; // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item_1;                         // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_905F[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9060[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PhysicalRimlight.PhysicalRimlight_C.ReceiveBeginPlay
struct APhysicalRimlight_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PhysicalRimlight.PhysicalRimlight_C.InitRim
struct APhysicalRimlight_C_InitRim_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function PhysicalRimlight.PhysicalRimlight_C.Day Phase 
struct APhysicalRimlight_C_Day_Phase__Params
{
public:
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     PreviousDayPhase;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAtCreation;                                       // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function PhysicalRimlight.PhysicalRimlight_C.ExecuteUbergraph_PhysicalRimlight
struct APhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDataDrivenCVarEngineSubsystem*        CallFunc_GetEngineSubsystem_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9061[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue; // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     K2Node_CustomEvent_CurrentDayPhase;                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     K2Node_CustomEvent_PreviousDayPhase;               // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bAtCreation;                    // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
