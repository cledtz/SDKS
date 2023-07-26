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

// 0x21 (0x21 - 0x0)
// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.SetUIKitDialogViewModel
struct UWBP_UIKit_Dialog_C_SetUIKitDialogViewModel_Params
{
public:
	class UUIKitDialogViewModel*                 ViewModel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMVVMView*                             CallFunc_GetExtension_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_SetViewModel_ViewModel_CastInput;         // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_SetViewModel_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.FNameToNumText
struct UWBP_UIKit_Dialog_C_FNameToNumText_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E5[0x4];                                     // Fixing Size After Last Property..
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E6[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x28(0x18)()
	class FText                                  Temp_text_Variable;                                // 0x40(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E7[0x7];                                     // Fixing Size After Last Property..
	class FText                                  Temp_text_Variable_1;                              // 0x60(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x78(0x18)()
};

// 0x48 (0x48 - 0x0)
// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.ArrayLengthToText
struct UWBP_UIKit_Dialog_C_ArrayLengthToText_Params
{
public:
	TArray<struct FConfirmationDialogAction>     Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Text;                                              // 0x10(0x18)(Parm, OutParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E8[0x4];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.BndEvt__WBP_UIKit_Dialog_Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_UIKit_Dialog_C_BndEvt__WBP_UIKit_Dialog_Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.BndEvt__WBP_UIKit_Dialog_Button_Decline_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_UIKit_Dialog_C_BndEvt__WBP_UIKit_Dialog_Button_Decline_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.ExecuteUbergraph_WBP_UIKit_Dialog
struct UWBP_UIKit_Dialog_C_ExecuteUbergraph_WBP_UIKit_Dialog_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
