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
// Function OptionsMenuSetting.OptionsMenuSetting_C.SetFontSize
struct UOptionsMenuSetting_C_SetFontSize_Params
{
public:
	class UCommonTextBlock*                      Text;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaulFontSize;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileFont;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        TempFont;                                          // 0x10(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920A[0x2];                                     // Fixing Size After Last Property..
	int32                                        K2Node_Select_Default;                             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.Update Visuals_BP
struct UOptionsMenuSetting_C_Update_Visuals_BP_Params
{
public:
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920B[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_ConvertSliderValueToSettingsValue_SettingsValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x10(0x18)()
	double                                       CallFunc_ConvertSliderValueToSettingsValue_SliderValue_ImplicitCast; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSettingsValueToSliderValue
struct UOptionsMenuSetting_C_ConvertSettingsValueToSliderValue_Params
{
public:
	double                                       SettingsValue;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SliderValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSliderTexture
struct UOptionsMenuSetting_C_UpdateSliderTexture_Params
{
public:
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSliderValueToSettingsValue
struct UOptionsMenuSetting_C_ConvertSliderValueToSettingsValue_Params
{
public:
	double                                       SliderValue;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SettingsValue;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x290 (0x290 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.SetSliderTextRenderScale
struct UOptionsMenuSetting_C_SetSliderTextRenderScale_Params
{
public:
	double                                       Scale_Normalized;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920C[0x7];                                     // Fixing Size After Last Property..
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMinYResolutionFor3DView_ReturnValue;   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized; // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetResolutionScaleInformationEx_MinScaleValue; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetResolutionScaleInformationEx_MaxScaleValue; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920D[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetFullscreenMode_ReturnValue;            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920E[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x48(0x18)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920F[0x7];                                     // Fixing Size After Last Property..
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x68(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x108(0x10)(ReferenceParm)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9210[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x120(0x18)()
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue_1;                  // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x188(0x18)()
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_2;          // 0x1A0(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1B8(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x208(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x258(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x268(0x18)()
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.Hide Tooltip
struct UOptionsMenuSetting_C_Hide_Tooltip_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.Show Tooltip
struct UOptionsMenuSetting_C_Show_Tooltip_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.OnGetUserMenuContent
struct UOptionsMenuSetting_C_OnGetUserMenuContent_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTooltip_Basic_S_C*                    CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.HandlePawnSet
struct UOptionsMenuSetting_C_HandlePawnSet_Params
{
public:
	bool                                         bRCPawn;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9211[0x5];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortRemoteControlledPawnAthena*       K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSize
struct UOptionsMenuSetting_C_UpdateSize_Params
{
public:
	int32                                        FontSizeMobile;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9212[0x3];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9213[0x7];                                     // Fixing Size After Last Property..
	struct FVector2D                             Temp_struct_Variable;                              // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9214[0x6];                                     // Fixing Size After Last Property..
	struct FVector2D                             K2Node_Select_Default;                             // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue_1;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9215[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default_1;                           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Select_Default_2;                           // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Select_Option_0_ImplicitCast;               // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D               K2Node_SetFieldsInStruct_ImageSize_ImplicitCast;   // 0x88(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.OnListItemObjectSet
struct UOptionsMenuSetting_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemExpansionChanged
struct UOptionsMenuSetting_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnEntryReleased
struct UOptionsMenuSetting_C_BP_OnEntryReleased_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseEnter
struct UOptionsMenuSetting_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseLeave
struct UOptionsMenuSetting_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.Refresh
struct UOptionsMenuSetting_C_Refresh_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.Construct
struct UOptionsMenuSetting_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemSelectionChanged
struct UOptionsMenuSetting_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateVisuals
struct UOptionsMenuSetting_C_UpdateVisuals_Params
{
public:
};

// 0x1DC (0x1DC - 0x0)
// Function OptionsMenuSetting.OptionsMenuSetting_C.ExecuteUbergraph_OptionsMenuSetting
struct UOptionsMenuSetting_C_ExecuteUbergraph_OptionsMenuSetting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9216[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9217[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_ConvertSettingsValueToSliderValue_SliderValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortSettingInfo*                      K2Node_DynamicCast_AsFort_Setting_Info;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9218[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9219[0x6];                                     // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue_1;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921A[0x6];                                     // Fixing Size After Last Property..
	class UFortSettingsContext*                  CallFunc_GetContext_ReturnValue;                   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921B[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          K2Node_MakeStruct_LinearColor_1;                   // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetSliderSettingValue_ReturnValue;        // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Value_1;                // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921C[0x3];                                     // Fixing Size After Last Property..
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x90(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0xC8(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x140(0x78)(ConstParm)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x1BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921D[0x5];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSelected;                          // 0x1CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x1CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x1CE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921E[0x1];                                     // Fixing Size After Last Property..
	double                                       CallFunc_ConvertSettingsValueToSliderValue_SettingsValue_ImplicitCast; // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
