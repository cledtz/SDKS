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

// 0x34 (0x34 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetupAnimBindings
struct UToastWidget_MinorError_C_SetupAnimBindings_Params
{
public:
	bool                                         Unbind;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181E[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.ApplyAdditionalStyling
struct UToastWidget_MinorError_C_ApplyAdditionalStyling_Params
{
public:
	class UClass*                                Temp_class_Variable;                               // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181F[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                Temp_class_Variable_1;                             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_2;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1820[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                Temp_class_Variable_3;                             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_4;                             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_5;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortNotificationType             CallFunc_GetNotificationType_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1821[0x6];                                     // Fixing Size After Last Property..
	class UClass*                                K2Node_Select_Default;                             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default_1;                           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1822[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                K2Node_Select_Default_2;                           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.GetOpenButtonVisibility
struct UToastWidget_MinorError_C_GetOpenButtonVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.StartIntro
struct UToastWidget_MinorError_C_StartIntro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1A1 (0x1A1 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.UpdateToast
struct UToastWidget_MinorError_C_UpdateToast_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1823[0x4];                                     // Fixing Size After Last Property..
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)()
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)()
	enum class EFortNotificationType             CallFunc_GetNotificationType_ReturnValue;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1824[0x6];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x60(0x18)(ConstParm)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTitle_ReturnValue;                     // 0x88(0x18)(ConstParm)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor_1;                   // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xB0(0xC0)()
	bool                                         Temp_bool_Variable;                                // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1825[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_1;                           // 0x188(0x18)()
	enum class ESlateVisibility                  CallFunc_GetOpenButtonVisibility_ReturnValue;      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.PlayOutro
struct UToastWidget_MinorError_C_PlayOutro_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseEnter
struct UToastWidget_MinorError_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseLeave
struct UToastWidget_MinorError_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastWidget_MinorError_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleOutroFinished
struct UToastWidget_MinorError_C_HandleOutroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleIntroFinished
struct UToastWidget_MinorError_C_HandleIntroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.Construct
struct UToastWidget_MinorError_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.Destruct
struct UToastWidget_MinorError_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnPlayOpenAnimation
struct UToastWidget_MinorError_C_OnPlayOpenAnimation_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnNotificationSet
struct UToastWidget_MinorError_C_OnNotificationSet_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnNotificationUpdated
struct UToastWidget_MinorError_C_OnNotificationUpdated_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x169 (0x169 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.ExecuteUbergraph_ToastWidget_MinorError
struct UToastWidget_MinorError_C_ExecuteUbergraph_ToastWidget_MinorError_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDisplayTime_bOutDisplayTimeOverridden; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1826[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetDisplayTime_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x58(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xD0(0x78)(ConstParm)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   K2Node_Event_Notification_1;                       // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   K2Node_Event_Notification;                         // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnFinishedToast__DelegateSignature
struct UToastWidget_MinorError_C_OnFinishedToast__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
