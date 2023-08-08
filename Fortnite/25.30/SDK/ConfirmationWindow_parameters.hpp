#pragma once

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

// 0x1A8 (0x1A8 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.Handle Configure Decline Button
struct UConfirmationWindow_C_Handle_Configure_Decline_Button_Params
{
public:
	class UCommonButtonBase*                     New_Button;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIKit_ButtonCTA_Base_C*           CTAButton;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIKit_ButtonCTA_Base_C*           K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0D5[0xF];                                     // Fixing Size After Last Property
	struct FFortDialogDescription_NUI            CallFunc_GetConfirmationDescription_ReturnValue;   // 0x30(0x160)(ConstParm, ContainsInstancedReference)
	int32                                        CallFunc_GetInputPriority_ReturnValue;             // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0D6[0x4];                                     // Fixing Size After Last Property
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x198(0x10)(NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton
struct UConfirmationWindow_C_ConfigureConfirmationButton_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0D7[0x8];                                     // Fixing Size After Last Property
	struct FConfirmationDialogAction             Action;                                            // 0x10(0xF0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bSimpleConfirm;                                    // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0D8[0x7];                                     // Fixing Size After Last Property
	class UWBP_UIKit_ButtonCTA_Base_C*           CTAButton;                                         // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIKit_ButtonCTA_Base_C*           K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;    // 0x118(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0D9[0x7];                                     // Fixing Size After Last Property
	struct FDataTableRowHandle                   CallFunc_GetInputAction_ReturnValue;               // 0x128(0x10)(NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0DA[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_GetInputPriority_ReturnValue;             // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x161 (0x161 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.PlayShowSound
struct UConfirmationWindow_C_PlayShowSound_Params
{
public:
	struct FFortDialogDescription_NUI            CallFunc_GetConfirmationDescription_ReturnValue;   // 0x0(0x160)(ConstParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B8 (0x3B8 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.TapToClose
struct UConfirmationWindow_C_TapToClose_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x168(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_PointerEvent_IsTouchEvent_ReturnValue;    // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x183(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0DC[0x4];                                     // Fixing Size After Last Property
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x188(0xB8)()
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0DD[0x7];                                     // Fixing Size After Last Property
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x248(0xB8)()
	struct FEventReply                           K2Node_Select_Default;                             // 0x300(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
struct UConfirmationWindow_C_SetupNonInteractiveContent_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
struct UConfirmationWindow_C_GetInputAction_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseInputAction;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0DE[0x3];                                     // Fixing Size After Last Property
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0DF[0x7];                                     // Fixing Size After Last Property
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x20(0x10)(NoDestructor)
	struct FDataTableRowHandle                   Temp_struct_Variable;                              // 0x30(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_Select_Default;                             // 0x40(0x10)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
struct UConfirmationWindow_C_Initialize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
struct UConfirmationWindow_C_OnBeginOutro_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton
struct UConfirmationWindow_C_ConfigureDeclineButton_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated
struct UConfirmationWindow_C_BP_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct
struct UConfirmationWindow_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E8 (0x1E8 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
struct UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E0[0x2];                                     // Fixing Size After Last Property
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E1[0x4];                                     // Fixing Size After Last Property
	double                                       K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E2[0x8];                                     // Fixing Size After Last Property
	struct FFortDialogDescription_NUI            CallFunc_GetConfirmationDescription_ReturnValue;   // 0x30(0x160)(ConstParm, ContainsInstancedReference)
	class UCommonButtonBase*                     K2Node_Event_Button;                               // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x198(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E3[0x3];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E4[0x4];                                     // Fixing Size After Last Property
	TArray<class UUserWidget*>                   CallFunc_GetAllEntries_ReturnValue;                // 0x1B8(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E5[0x4];                                     // Fixing Size After Last Property
	class UWBP_UIKit_ButtonCTA_Base_C*           K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;    // 0x1D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E6[0x2];                                     // Fixing Size After Last Property
	float                                        CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast; // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
