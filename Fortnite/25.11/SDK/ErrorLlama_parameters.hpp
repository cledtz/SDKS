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

// 0x1 (0x1 - 0x0)
// Function ErrorLlama.ErrorLlama_C.HandleInputTypeChanged
struct UErrorLlama_C_HandleInputTypeChanged_Params
{
public:
	enum class ECommonInputType                  NewInputType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ErrorLlama.ErrorLlama_C.Construct
struct UErrorLlama_C_Construct_Params
{
public:
};

// 0x3C (0x3C - 0x0)
// Function ErrorLlama.ErrorLlama_C.Tick
struct UErrorLlama_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ErrorLlama.ErrorLlama_C.RandomizeColor
struct UErrorLlama_C_RandomizeColor_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ErrorLlama.ErrorLlama_C.HandleNormalizedInputDirection
struct UErrorLlama_C_HandleNormalizedInputDirection_Params
{
public:
	struct FVector2D                             _2DInputVec;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x280 (0x280 - 0x0)
// Function ErrorLlama.ErrorLlama_C.ExecuteUbergraph_ErrorLlama
struct UErrorLlama_C_ExecuteUbergraph_ErrorLlama_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8563[0x4];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_2;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_3;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_4;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_5;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_6;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_7;                              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_8;                              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_9;                              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8564[0x7];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable_10;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_11;                             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X;                          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8565[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x9C(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetMousePositionOnPlatform_ReturnValue;   // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetLocalSize_ReturnValue;                 // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x100(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_LocalToAbsolute_ReturnValue;              // 0x110(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Normal2D_ReturnValue;                     // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8566[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAnalogStickState_StickX;          // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAnalogStickState_StickY;          // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8567[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_1;                           // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x180(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1A0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8568[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             K2Node_CustomEvent_2DInputVec;                     // 0x1B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8569[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x1E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue_1;     // 0x1F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0x208(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x238(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Vector2DInterpTo_ReturnValue;             // 0x248(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_R_ImplicitCast;                  // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_G_ImplicitCast;                  // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast;  // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_856A[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_MakeVector2D_X_ImplicitCast;              // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Vector2DInterpTo_InterpSpeed_ImplicitCast; // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
