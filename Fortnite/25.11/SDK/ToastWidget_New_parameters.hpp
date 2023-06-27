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

// 0x1A (0x1A - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.GetDisplayTime
struct UToastWidget_New_C_GetDisplayTime_Params
{
public:
	bool                                         bOutDisplayTimeOverridden;                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E96[0x3];                                     // Fixing Size After Last Property..
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDisplayTime_bOutDisplayTimeOverridden; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E97[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetDisplayTime_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIFriendNotification*             K2Node_DynamicCast_AsFort_UIFriend_Notification;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.SetupAnimBindings
struct UToastWidget_New_C_SetupAnimBindings_Params
{
public:
	bool                                         Unbind;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E98[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.SetImage
struct UToastWidget_New_C_SetImage_Params
{
public:
	TSoftObjectPtr<class UObject>                CallFunc_GetDisplayAsset_ReturnValue;              // 0x0(0x28)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	class UTwitchNotification_C*                 K2Node_DynamicCast_AsTwitch_Notification;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility
struct UToastWidget_New_C_GetOpenButtonVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E99[0x4];                                     // Fixing Size After Last Property..
	class UFortGlobalUIContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.StartIntro
struct UToastWidget_New_C_StartIntro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x159 (0x159 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.UpdateToast
struct UToastWidget_New_C_UpdateToast_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x8(0x18)(ConstParm)
	class UFortUIFriendNotification*             K2Node_DynamicCast_AsFort_UIFriend_Notification;   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E9A[0x7];                                     // Fixing Size After Last Property..
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAction_ReturnValue;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E9B[0x6];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetDescription_ReturnValue_1;             // 0x88(0x18)(ConstParm)
	class FText                                  CallFunc_GetTitle_ReturnValue;                     // 0xA0(0x18)(ConstParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xB8(0x18)()
	class UFortGlobalUIContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xD8(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E9C[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x130(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x140(0x18)()
	enum class ESlateVisibility                  CallFunc_GetOpenButtonVisibility_ReturnValue;      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.PlayOutro
struct UToastWidget_New_C_PlayOutro_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.OnMouseEnter
struct UToastWidget_New_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.OnMouseLeave
struct UToastWidget_New_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.HandleOutroFinished
struct UToastWidget_New_C_HandleOutroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.HandleIntroFinished
struct UToastWidget_New_C_HandleIntroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.Construct
struct UToastWidget_New_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.Destruct
struct UToastWidget_New_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.OnPlayOpenAnimation
struct UToastWidget_New_C_OnPlayOpenAnimation_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.OnNotificationSet
struct UToastWidget_New_C_OnNotificationSet_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.OnNotificationUpdated
struct UToastWidget_New_C_OnNotificationUpdated_Params
{
public:
	class UFortUINotification*                   Notification;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x169 (0x169 - 0x0)
// Function ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New
struct UToastWidget_New_C_ExecuteUbergraph_ToastWidget_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDisplayTime_bOutDisplayTimeOverridden; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E9D[0x3];                                     // Fixing Size After Last Property..
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
// Function ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature
struct UToastWidget_New_C_OnFinishedToast__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
