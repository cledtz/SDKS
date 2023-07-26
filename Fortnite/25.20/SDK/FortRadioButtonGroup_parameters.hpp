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

// 0x8 (0x8 - 0x0)
// Function FortRadioButtonGroup.FortRadioButtonGroup_C.CenterOnWidget
struct UFortRadioButtonGroup_C_CenterOnWidget_Params
{
public:
	class UIconTextButton_C*                     CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function FortRadioButtonGroup.FortRadioButtonGroup_C.OnButtonClicked_Bind
struct UFortRadioButtonGroup_C_OnButtonClicked_Bind_Params
{
public:
	class UCommonButtonLegacy*                   AssociatedButton;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FortRadioButtonGroup.FortRadioButtonGroup_C.Destruct
struct UFortRadioButtonGroup_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortRadioButtonGroup.FortRadioButtonGroup_C.UpdateButtons
struct UFortRadioButtonGroup_C_UpdateButtons_Params
{
public:
};

// 0xA0 (0xA0 - 0x0)
// Function FortRadioButtonGroup.FortRadioButtonGroup_C.ExecuteUbergraph_FortRadioButtonGroup
struct UFortRadioButtonGroup_C_ExecuteUbergraph_FortRadioButtonGroup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRadioButtonItemStruct            CallFunc_Array_Get_Item;                           // 0x8(0x28)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40CE[0x4];                                     // Fixing Size After Last Property..
	class UIconTextButton_C*                     CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40CF[0x3];                                     // Fixing Size After Last Property..
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      K2Node_DynamicCast_AsVertical_Box_Slot;            // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D0[0x3];                                     // Fixing Size After Last Property..
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x5C(0x8)(NoDestructor)
	uint8                                        Pad_40D1[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   K2Node_CustomEvent_AssociatedButton;               // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ButtonIndex;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x74(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonGroupLegacy*              CallFunc_SpawnObject_ReturnValue;                  // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D2[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D3[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FortRadioButtonGroup.FortRadioButtonGroup_C.RadioButtonClicked_Event__DelegateSignature
struct UFortRadioButtonGroup_C_RadioButtonClicked_Event__DelegateSignature_Params
{
public:
	int32                                        SelectedIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
