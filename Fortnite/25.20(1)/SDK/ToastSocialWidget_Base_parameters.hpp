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
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base_1
struct UToastSocialWidget_Base_C_SequenceEvent__ENTRYPOINTToastSocialWidget_Base_1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base_0
struct UToastSocialWidget_Base_C_SequenceEvent__ENTRYPOINTToastSocialWidget_Base_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base
struct UToastSocialWidget_Base_C_SequenceEvent__ENTRYPOINTToastSocialWidget_Base_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateIcons
struct UToastSocialWidget_Base_C_UpdateIcons_Params
{
public:
	TSoftObjectPtr<class UObject>                Local_IconDisplayAsset;                            // 0x0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         bLocal_ShowIcon;                                   // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLocal_ShowAvatar;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortNotificationType             CallFunc_GetNotificationType_ReturnValue;          // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A0[0x3];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UObject>                CallFunc_GetDisplayAsset_ReturnValue;              // 0x30(0x28)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A1[0x1];                                     // Fixing Size After Last Property..
	class UWidget*                               K2Node_Select_Default_1;                           // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.ResetMaterials
struct UToastSocialWidget_Base_C_ResetMaterials_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A2[0x3];                                     // Fixing Size After Last Property..
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)()
	class UWidget*                               K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.DetermineIntroAnim
struct UToastSocialWidget_Base_C_DetermineIntroAnim_Params
{
public:
	class UWidgetAnimation*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortNotificationType             Temp_byte_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A3[0x5];                                     // Fixing Size After Last Property..
	class UWidgetAnimation*                      Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Temp_object_Variable_1;                            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Temp_object_Variable_2;                            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Temp_object_Variable_3;                            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Temp_object_Variable_4;                            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortNotificationType             CallFunc_GetNotificationType_ReturnValue;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A4[0x5];                                     // Fixing Size After Last Property..
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select_Default_1;                           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select_Default_2;                           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select_Default_3;                           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.InputBasedStyling
struct UToastSocialWidget_Base_C_InputBasedStyling_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A5[0x5];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable_2;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable_6;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A6[0x3];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable_2;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_3;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_4;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A7[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_HandleNotificationType_Return;            // 0x48(0x18)()
	bool                                         Temp_bool_Variable_1;                              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsInGame_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A8[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default_2;                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_3;                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20B (0x20B - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleNotificationType
struct UToastSocialWidget_Base_C_HandleNotificationType_Params
{
public:
	class FText                                  Return;                                            // 0x0(0x18)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1A9[0x6];                                     // Fixing Size After Last Property..
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable_1;                              // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1AA[0x5];                                     // Fixing Size After Last Property..
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue_1;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1AB[0x7];                                     // Fixing Size After Last Property..
	class UFortUIFriendNotification*             K2Node_DynamicCast_AsFort_UIFriend_Notification;   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsInGame_ReturnValue;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsInGame_ReturnValue_1;                // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsInGame_ReturnValue_2;                // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsInGame_ReturnValue_3;                // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1AC[0x2];                                     // Fixing Size After Last Property..
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;    // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable_2;                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue_2;        // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1AD[0x6];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x60(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x78(0x18)()
	bool                                         Temp_bool_Variable_2;                              // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1AE[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x98(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0xB0(0x18)()
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue_3;    // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0xD0(0x18)()
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue_3;        // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1AF[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Select_Default_1;                           // 0xF0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_4;            // 0x108(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_5;            // 0x120(0x18)()
	class FText                                  K2Node_Select_Default_2;                           // 0x138(0x18)()
	enum class ECommonInputType                  Temp_byte_Variable_3;                              // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B0[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Select_Default_3;                           // 0x158(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_6;            // 0x170(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_7;            // 0x188(0x18)()
	bool                                         Temp_bool_Variable_3;                              // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B1[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Select_Default_4;                           // 0x1A8(0x18)()
	class FText                                  K2Node_Select_Default_5;                           // 0x1C0(0x18)()
	class FText                                  K2Node_Select_Default_6;                           // 0x1D8(0x18)()
	class FText                                  K2Node_Select_Default_7;                           // 0x1F0(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortNotificationType             CallFunc_GetNotificationType_ReturnValue;          // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x20A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonHoldText
struct UToastSocialWidget_Base_C_GetButtonHoldText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	class UFortUIFriendNotification*             K2Node_DynamicCast_AsFort_UIFriend_Notification;   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonCursorText
struct UToastSocialWidget_Base_C_GetButtonCursorText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	class UFortUIFriendNotification*             K2Node_DynamicCast_AsFort_UIFriend_Notification;   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetVisibilityForOptionalElements
struct UToastSocialWidget_Base_C_SetVisibilityForOptionalElements_Params
{
public:
	enum class ESlateVisibility                  CallFunc_GetInputSwitcherVisibility_ReturnValue;   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.TakeAction
struct UToastSocialWidget_Base_C_TakeAction_Params
{
public:
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.CleanupBeforeClosing
struct UToastSocialWidget_Base_C_CleanupBeforeClosing_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetActiveWidgetIndex
struct UToastSocialWidget_Base_C_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsInGame_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetInputSwitcherVisibility
struct UToastSocialWidget_Base_C_GetInputSwitcherVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetupAnimBindings
struct UToastSocialWidget_Base_C_SetupAnimBindings_Params
{
public:
	bool                                         Unbind;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B2[0x6];                                     // Fixing Size After Last Property..
	class UWidgetAnimation*                      CallFunc_DetermineIntroAnim_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B3[0x6];                                     // Fixing Size After Last Property..
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x44(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.ApplyAdditionalStyling
struct UToastSocialWidget_Base_C_ApplyAdditionalStyling_Params
{
public:
	class UClass*                                NewLocalVar_2;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NewLocalVar_1;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NewLocalVar_0;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortNotificationType             CallFunc_GetNotificationType_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetImage
struct UToastSocialWidget_Base_C_SetImage_Params
{
public:
	TSoftObjectPtr<class UObject>                CallFunc_GetDisplayAsset_ReturnValue;              // 0x0(0x28)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateToast
struct UToastSocialWidget_Base_C_UpdateToast_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*           NewLocalVar_3;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x10(0x18)(ConstParm)
	class FText                                  CallFunc_GetTitle_ReturnValue;                     // 0x28(0x18)(ConstParm)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetInputSwitcherVisibility_ReturnValue;   // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleIntroFinished
struct UToastSocialWidget_Base_C_HandleIntroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleOutroFinished
struct UToastSocialWidget_Base_C_HandleOutroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.PlayOutro
struct UToastSocialWidget_Base_C_PlayOutro_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseEnter
struct UToastSocialWidget_Base_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseLeave
struct UToastSocialWidget_Base_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastSocialWidget_Base_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.Construct
struct UToastSocialWidget_Base_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.Destruct
struct UToastSocialWidget_Base_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnPlayOpenAnimation
struct UToastSocialWidget_Base_C_OnPlayOpenAnimation_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCursorModeChanged
struct UToastSocialWidget_Base_C_OnCursorModeChanged_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UToastSocialWidget_Base_C_BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCancelNotification
struct UToastSocialWidget_Base_C_OnCancelNotification_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnTakeActionNotification
struct UToastSocialWidget_Base_C_OnTakeActionNotification_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnUserStartedHoldActionNotification
struct UToastSocialWidget_Base_C_OnUserStartedHoldActionNotification_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnInputModeChanged
struct UToastSocialWidget_Base_C_OnInputModeChanged_Params
{
public:
	enum class ECommonInputType                  NewInputType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.PreConstruct
struct UToastSocialWidget_Base_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HoldComplete
struct UToastSocialWidget_Base_C_HoldComplete_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UToastSocialWidget_Base_C_BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UToastSocialWidget_Base_C_BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature
struct UToastSocialWidget_Base_C_BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature
struct UToastSocialWidget_Base_C_BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature
struct UToastSocialWidget_Base_C_BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationSet
struct UToastSocialWidget_Base_C_OnNotificationSet_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationUpdated
struct UToastSocialWidget_Base_C_OnNotificationUpdated_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNewAvatarsEnabledChanged
struct UToastSocialWidget_Base_C_OnNewAvatarsEnabledChanged_Params
{
public:
	bool                                         bUsingNewAvatars;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F8 (0x2F8 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.ExecuteUbergraph_ToastSocialWidget_Base
struct UToastSocialWidget_Base_C_ExecuteUbergraph_ToastSocialWidget_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B4[0x3];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x10(0x14)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x24(0x14)()
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue_1;        // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B5[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x64(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_A1B6[0x4];                                     // Fixing Size After Last Property..
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0xA0(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x118(0x78)(ConstParm)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button_3;               // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCursorModeEnabled;                   // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B7[0x7];                                     // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button_2;               // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_Event_NewInputType;                         // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B8[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B9[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1BA[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x1DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1BB[0x3];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CallFunc_DetermineIntroAnim_ReturnValue;           // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1BC[0x6];                                     // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button_1;               // 0x200(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_2;                           // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_2;                              // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1BD[0x6];                                     // Fixing Size After Last Property..
	class UWidgetAnimation*                      K2Node_Select_Default_3;                           // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default_4;                           // 0x248(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1BE[0x7];                                     // Fixing Size After Last Property..
	class UFortUINotification*                   K2Node_Event_Notification_1;                       // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1BF[0x7];                                     // Fixing Size After Last Property..
	class UFortUINotification*                   K2Node_Event_Notification;                         // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue_1;                  // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue_2;                  // 0x272(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1C0[0x5];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default_5;                           // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1C1[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_4;              // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDisplayTime_bOutDisplayTimeOverridden; // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1C2[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetDisplayTime_ReturnValue;               // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDisplayTime_bOutDisplayTimeOverridden_1; // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1C3[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetDisplayTime_ReturnValue_1;             // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_5;              // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_6;              // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x2C0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bUsingNewAvatars;                     // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1C4[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_InRange_FloatFloat_Value_ImplicitCast;    // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast; // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1C5[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast_1; // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast_2; // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnFinishedToast__DelegateSignature
struct UToastSocialWidget_Base_C_OnFinishedToast__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
