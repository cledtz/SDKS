#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.CenterOnWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconTextButton_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UFortRadioButtonGroup_C::CenterOnWidget(class UIconTextButton_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("FortRadioButtonGroup_C", "CenterOnWidget");

	Params::UFortRadioButtonGroup_C_CenterOnWidget_Params Parms;

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.OnButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         AssociatedButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortRadioButtonGroup_C::OnButtonClicked_Bind(class UCommonButtonLegacy* AssociatedButton, int32 ButtonIndex)
{
	static auto Func = Class->GetFunction("FortRadioButtonGroup_C", "OnButtonClicked_Bind");

	Params::UFortRadioButtonGroup_C_OnButtonClicked_Bind_Params Parms;

	Parms.AssociatedButton = AssociatedButton;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortRadioButtonGroup_C::Destruct()
{
	static auto Func = Class->GetFunction("FortRadioButtonGroup_C", "Destruct");

	Params::UFortRadioButtonGroup_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.UpdateButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortRadioButtonGroup_C::UpdateButtons()
{
	static auto Func = Class->GetFunction("FortRadioButtonGroup_C", "UpdateButtons");

	Params::UFortRadioButtonGroup_C_UpdateButtons_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.ExecuteUbergraph_FortRadioButtonGroup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRadioButtonItemStruct  CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UCommonButtonLegacy*         K2Node_CustomEvent_AssociatedButton                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ButtonIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonGroupLegacy*    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortRadioButtonGroup_C::ExecuteUbergraph_FortRadioButtonGroup(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FFortRadioButtonItemStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UIconTextButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UCommonButtonLegacy* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonGroupLegacy* CallFunc_SpawnObject_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortRadioButtonGroup_C", "ExecuteUbergraph_FortRadioButtonGroup");

	Params::UFortRadioButtonGroup_C_ExecuteUbergraph_FortRadioButtonGroup_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_CustomEvent_AssociatedButton = K2Node_CustomEvent_AssociatedButton;
	Parms.K2Node_CustomEvent_ButtonIndex = K2Node_CustomEvent_ButtonIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.RadioButtonClicked_Event__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortRadioButtonGroup_C::RadioButtonClicked_Event__DelegateSignature(int32 SelectedIndex)
{
	static auto Func = Class->GetFunction("FortRadioButtonGroup_C", "RadioButtonClicked_Event__DelegateSignature");

	Params::UFortRadioButtonGroup_C_RadioButtonClicked_Event__DelegateSignature_Params Parms;

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
