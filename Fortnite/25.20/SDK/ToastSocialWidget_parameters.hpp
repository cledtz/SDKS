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

// 0x19 (0x19 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.GetDisplayTime
struct UToastSocialWidget_C_GetDisplayTime_Params
{
public:
	bool                                         bOutDisplayTimeOverridden;                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A14F[0x3];                                     // Fixing Size After Last Property..
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIFriendNotification*             K2Node_DynamicCast_AsFort_UIFriend_Notification;   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDisplayTime_bOutDisplayTimeOverridden; // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A150[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetDisplayTime_ReturnValue;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.GetButtonHoldText
struct UToastSocialWidget_C_GetButtonHoldText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	class UFortUIFriendNotification*             K2Node_DynamicCast_AsFort_UIFriend_Notification;   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.GetButtonCursorText
struct UToastSocialWidget_C_GetButtonCursorText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	class UFortUIFriendNotification*             K2Node_DynamicCast_AsFort_UIFriend_Notification;   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.SetVisibilityForOptionalElements
struct UToastSocialWidget_C_SetVisibilityForOptionalElements_Params
{
public:
	enum class ESlateVisibility                  CallFunc_GetInputSwitcherVisibility_ReturnValue;   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.TakeAction
struct UToastSocialWidget_C_TakeAction_Params
{
public:
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.CleanupBeforeClosing
struct UToastSocialWidget_C_CleanupBeforeClosing_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.GetActiveWidgetIndex
struct UToastSocialWidget_C_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A151[0x3];                                     // Fixing Size After Last Property..
	class UFortGlobalUIContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A152[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.GetInputSwitcherVisibility
struct UToastSocialWidget_C_GetInputSwitcherVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.SetupAnimBindings
struct UToastSocialWidget_C_SetupAnimBindings_Params
{
public:
	bool                                         Unbind;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A153[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.SetImage
struct UToastSocialWidget_C_SetImage_Params
{
public:
	TSoftObjectPtr<class UObject>                CallFunc_GetDisplayAsset_ReturnValue;              // 0x0(0x28)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	class UTwitchNotification_C*                 K2Node_DynamicCast_AsTwitch_Notification;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.StartIntro
struct UToastSocialWidget_C_StartIntro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.UpdateToast
struct UToastSocialWidget_C_UpdateToast_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*           NewLocalVar_3;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x10(0x18)(ConstParm)
	class FText                                  CallFunc_GetTitle_ReturnValue;                     // 0x28(0x18)(ConstParm)
	class FText                                  CallFunc_GetButtonHoldText_Text;                   // 0x40(0x18)()
	class FText                                  CallFunc_GetButtonCursorText_Text;                 // 0x58(0x18)()
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.PlayOutro
struct UToastSocialWidget_C_PlayOutro_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnMouseEnter
struct UToastSocialWidget_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnMouseLeave
struct UToastSocialWidget_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastSocialWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.HandleOutroFinished
struct UToastSocialWidget_C_HandleOutroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.HandleIntroFinished
struct UToastSocialWidget_C_HandleIntroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.Construct
struct UToastSocialWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.Destruct
struct UToastSocialWidget_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnPlayOpenAnimation
struct UToastSocialWidget_C_OnPlayOpenAnimation_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnCursorModeChanged
struct UToastSocialWidget_C_OnCursorModeChanged_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UToastSocialWidget_C_BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnCancelNotification
struct UToastSocialWidget_C_OnCancelNotification_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnTakeActionNotification
struct UToastSocialWidget_C_OnTakeActionNotification_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnUserStartedHoldActionNotification
struct UToastSocialWidget_C_OnUserStartedHoldActionNotification_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnInputModeChanged
struct UToastSocialWidget_C_OnInputModeChanged_Params
{
public:
	enum class ECommonInputType                  NewInputType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnNotificationSet
struct UToastSocialWidget_C_OnNotificationSet_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.OnNotificationUpdated
struct UToastSocialWidget_C_OnNotificationUpdated_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x198 (0x198 - 0x0)
// Function ToastSocialWidget.ToastSocialWidget_C.ExecuteUbergraph_ToastSocialWidget
struct UToastSocialWidget_C_ExecuteUbergraph_ToastSocialWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A154[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x14(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_A155[0x4];                                     // Fixing Size After Last Property..
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x50(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xC8(0x78)(ConstParm)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button_1;               // 0x140(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCursorModeEnabled;                   // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A156[0x7];                                     // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A157[0x7];                                     // Fixing Size After Last Property..
	class UIconTextButton_C*                     K2Node_Select_Default;                             // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_Event_NewInputType;                         // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A158[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   K2Node_Event_Notification_1;                       // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   K2Node_Event_Notification;                         // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDisplayTime_bOutDisplayTimeOverridden; // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A159[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetDisplayTime_ReturnValue;               // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x190(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
