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

// 0x2 (0x2 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseNone
struct UCreativeModalDialogAllowedConversionFunction_GetResponseNone_Params
{
public:
	struct FWidgetEventField                     Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton6
struct UCreativeModalDialogAllowedConversionFunction_GetResponseButton6_Params
{
public:
	struct FWidgetEventField                     Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton5
struct UCreativeModalDialogAllowedConversionFunction_GetResponseButton5_Params
{
public:
	struct FWidgetEventField                     Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton4
struct UCreativeModalDialogAllowedConversionFunction_GetResponseButton4_Params
{
public:
	struct FWidgetEventField                     Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton3
struct UCreativeModalDialogAllowedConversionFunction_GetResponseButton3_Params
{
public:
	struct FWidgetEventField                     Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton2
struct UCreativeModalDialogAllowedConversionFunction_GetResponseButton2_Params
{
public:
	struct FWidgetEventField                     Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction.GetResponseButton1
struct UCreativeModalDialogAllowedConversionFunction_GetResponseButton1_Params
{
public:
	struct FWidgetEventField                     Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.TranslateResponse
struct UCreativeModalDialogConversionFunction_TranslateResponse_Params
{
public:
	struct FWidgetEventField                     Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse Response;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetRowIndexForButtonFromContentAlignment
struct UCreativeModalDialogConversionFunction_GetRowIndexForButtonFromContentAlignment_Params
{
public:
	enum class ECreativeModalDialogAlignmentOption AlignmentOption;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391B[0x3];                                     // Fixing Size After Last Property..
	int32                                        ButtonIndex;                                       // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WideMaxColumns;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TallMaxColumns;                                    // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultMaxColumns;                                 // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetMarginFromContentAlignment
struct UCreativeModalDialogConversionFunction_GetMarginFromContentAlignment_Params
{
public:
	enum class ECreativeModalDialogAlignmentOption AlignmentOption;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391C[0x3];                                     // Fixing Size After Last Property..
	float                                        TallMarginAmount;                                  // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WideMarginAmount;                                  // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CenteredFullMarginAmount;                          // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMarginAmount;                               // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ReturnValue;                                       // 0x14(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetFloatingValueFromContentAlignment
struct UCreativeModalDialogConversionFunction_GetFloatingValueFromContentAlignment_Params
{
public:
	enum class ECreativeModalDialogAlignmentOption AlignmentOption;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391D[0x3];                                     // Fixing Size After Last Property..
	float                                        TallValue;                                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WideValue;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CenteredFullValue;                                 // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.GetColumnIndexForButtonFromContentAlignment
struct UCreativeModalDialogConversionFunction_GetColumnIndexForButtonFromContentAlignment_Params
{
public:
	enum class ECreativeModalDialogAlignmentOption AlignmentOption;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391E[0x3];                                     // Fixing Size After Last Property..
	int32                                        ButtonIndex;                                       // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WideMaxColumns;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TallMaxColumns;                                    // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultMaxColumns;                                 // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogConversionFunction.AssignCreativeModalDialogViewmodelResponse
struct UCreativeModalDialogConversionFunction_AssignCreativeModalDialogViewmodelResponse_Params
{
public:
	struct FMVVMEventField                       Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse Response;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECreativeModalDialogViewmodelResponse ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton6UseFallbackDefaultInputAction
struct UCreativeModalDialogViewmodel_ShouldButton6UseFallbackDefaultInputAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton5UseFallbackDefaultInputAction
struct UCreativeModalDialogViewmodel_ShouldButton5UseFallbackDefaultInputAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton4UseFallbackDefaultInputAction
struct UCreativeModalDialogViewmodel_ShouldButton4UseFallbackDefaultInputAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton3UseFallbackDefaultInputAction
struct UCreativeModalDialogViewmodel_ShouldButton3UseFallbackDefaultInputAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton2UseFallbackDefaultInputAction
struct UCreativeModalDialogViewmodel_ShouldButton2UseFallbackDefaultInputAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton1UseFallbackDefaultInputAction
struct UCreativeModalDialogViewmodel_ShouldButton1UseFallbackDefaultInputAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsTimerVisible
struct UCreativeModalDialogViewmodel_IsTimerVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton6Visible
struct UCreativeModalDialogViewmodel_IsButton6Visible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton5Visible
struct UCreativeModalDialogViewmodel_IsButton5Visible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton4Visible
struct UCreativeModalDialogViewmodel_IsButton4Visible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton3Visible
struct UCreativeModalDialogViewmodel_IsButton3Visible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton2Visible
struct UCreativeModalDialogViewmodel_IsButton2Visible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton1Visible
struct UCreativeModalDialogViewmodel_IsButton1Visible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetVerticalAlignment
struct UCreativeModalDialogViewmodel_GetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimerVisibility
struct UCreativeModalDialogViewmodel_GetTimerVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimeoutProgress
struct UCreativeModalDialogViewmodel_GetTimeoutProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetHorizontalAlignment
struct UCreativeModalDialogViewmodel_GetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6Visibility
struct UCreativeModalDialogViewmodel_GetButton6Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6TriggeringInputAction
struct UCreativeModalDialogViewmodel_GetButton6TriggeringInputAction_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5Visibility
struct UCreativeModalDialogViewmodel_GetButton5Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5TriggeringInputAction
struct UCreativeModalDialogViewmodel_GetButton5TriggeringInputAction_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4Visibility
struct UCreativeModalDialogViewmodel_GetButton4Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4TriggeringInputAction
struct UCreativeModalDialogViewmodel_GetButton4TriggeringInputAction_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3Visibility
struct UCreativeModalDialogViewmodel_GetButton3Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3TriggeringInputAction
struct UCreativeModalDialogViewmodel_GetButton3TriggeringInputAction_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2Visibility
struct UCreativeModalDialogViewmodel_GetButton2Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2TriggeringInputAction
struct UCreativeModalDialogViewmodel_GetButton2TriggeringInputAction_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1Visibility
struct UCreativeModalDialogViewmodel_GetButton1Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1TriggeringInputAction
struct UCreativeModalDialogViewmodel_GetButton1TriggeringInputAction_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetBackgroundVisibility
struct UCreativeModalDialogViewmodel_GetBackgroundVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
