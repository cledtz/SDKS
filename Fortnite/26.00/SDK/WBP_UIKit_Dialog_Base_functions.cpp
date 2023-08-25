#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C
// (None)

class UClass* UWBP_UIKit_Dialog_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UIKit_Dialog_Base_C");

	return Clss;
}


// WBP_UIKit_Dialog_Base_C WBP_UIKit_Dialog_Base.Default__WBP_UIKit_Dialog_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UIKit_Dialog_Base_C* UWBP_UIKit_Dialog_Base_C::GetDefaultObj()
{
	static class UWBP_UIKit_Dialog_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UIKit_Dialog_Base_C*>(UWBP_UIKit_Dialog_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetButtonFocus
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Focus_Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Last_Index                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetButtonFocus(int32& Focus_Index, int32 Last_Index, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetButtonFocus");

	Params::UWBP_UIKit_Dialog_Base_C_SetButtonFocus_Params Parms{};

	Parms.Focus_Index = Focus_Index;
	Parms.Last_Index = Last_Index;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetActionButton
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_UIKit_ButtonCTA_Base_C* Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UUIKitDialogButtonViewModel* Button_Data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_ButtonCTA_Base_C* ButtonReference                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_DynamicCast_AsData_Table                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetActionButton(class UWBP_UIKit_ButtonCTA_Base_C*& Button, class UUIKitDialogButtonViewModel* Button_Data, class UWBP_UIKit_ButtonCTA_Base_C* ButtonReference, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, class UDataTable* K2Node_DynamicCast_AsData_Table, bool K2Node_DynamicCast_bSuccess, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UDataTable* K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetActionButton");

	Params::UWBP_UIKit_Dialog_Base_C_SetActionButton_Params Parms{};

	Parms.Button = Button;
	Parms.Button_Data = Button_Data;
	Parms.ButtonReference = ButtonReference;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.K2Node_DynamicCast_AsData_Table = K2Node_DynamicCast_AsData_Table;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.UpdateDialogStyle
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UI_DialogStyle           S_UI_DialogStyle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_ButtonCTA_Base_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLineHeightPercentage_InLineHeightPercentage_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::UpdateDialogStyle(struct FS_UI_DialogStyle& S_UI_DialogStyle, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_MakeStruct_Left_ImplicitCast, float CallFunc_SetLineHeightPercentage_InLineHeightPercentage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "UpdateDialogStyle");

	Params::UWBP_UIKit_Dialog_Base_C_UpdateDialogStyle_Params Parms{};

	Parms.S_UI_DialogStyle = S_UI_DialogStyle;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;
	Parms.CallFunc_SetLineHeightPercentage_InLineHeightPercentage_ImplicitCast = CallFunc_SetLineHeightPercentage_InLineHeightPercentage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetDialogImage(class UTexture2D* Texture, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetDialogImage");

	Params::UWBP_UIKit_Dialog_Base_C_SetDialogImage_Params Parms{};

	Parms.Texture = Texture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogButtons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUIKitDialogButtonViewModel*>Action_Buttons                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIKitDialogButtonViewModel* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_Button_Loud_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_Button_Regular_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetDialogButtons(TArray<class UUIKitDialogButtonViewModel*>& Action_Buttons, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUIKitDialogButtonViewModel* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_UIKit_Button_Loud_C* CallFunc_Create_ReturnValue, class UWBP_UIKit_Button_Regular_C* CallFunc_Create_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetDialogButtons");

	Params::UWBP_UIKit_Dialog_Base_C_SetDialogButtons_Params Parms{};

	Parms.Action_Buttons = Action_Buttons;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.DeactivateDialog
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::DeactivateDialog(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "DeactivateDialog");

	Params::UWBP_UIKit_Dialog_Base_C_DeactivateDialog_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.ActivateDialog
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::ActivateDialog(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "ActivateDialog");

	Params::UWBP_UIKit_Dialog_Base_C_ActivateDialog_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.ClearButtonWidgets
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_UIKit_Dialog_Base_C::ClearButtonWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "ClearButtonWidgets");

	Params::UWBP_UIKit_Dialog_Base_C_ClearButtonWidgets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetSizeBox
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UI_SizeBox               S_UI_SizeBox                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinAspectRatio_InMinAspectRatio_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxAspectRatio_InMaxAspectRatio_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetSizeBox(struct FS_UI_SizeBox& S_UI_SizeBox, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast, float CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast, float CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast, float CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast, float CallFunc_SetMinAspectRatio_InMinAspectRatio_ImplicitCast, float CallFunc_SetMaxAspectRatio_InMaxAspectRatio_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetSizeBox");

	Params::UWBP_UIKit_Dialog_Base_C_SetSizeBox_Params Parms{};

	Parms.S_UI_SizeBox = S_UI_SizeBox;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	Parms.CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast = CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;
	Parms.CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast = CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast;
	Parms.CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast = CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast;
	Parms.CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast = CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast;
	Parms.CallFunc_SetMinAspectRatio_InMinAspectRatio_ImplicitCast = CallFunc_SetMinAspectRatio_InMinAspectRatio_ImplicitCast;
	Parms.CallFunc_SetMaxAspectRatio_InMaxAspectRatio_ImplicitCast = CallFunc_SetMaxAspectRatio_InMaxAspectRatio_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_UIKit_Dialog_Base_C::SetDialogText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetDialogText");

	Params::UWBP_UIKit_Dialog_Base_C_SetDialogText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_UIKit_Dialog_Base_C::SetDialogTitle(class FText Title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetDialogTitle");

	Params::UWBP_UIKit_Dialog_Base_C_SetDialogTitle_Params Parms{};

	Parms.Title = Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogStyleFromDT
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Style_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_DialogStyle           CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetDialogStyleFromDT(class FName Style_ID, const struct FS_UI_DialogStyle& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetDialogStyleFromDT");

	Params::UWBP_UIKit_Dialog_Base_C_SetDialogStyleFromDT_Params Parms{};

	Parms.Style_ID = Style_ID;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UI_DialogStyle           Style                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetDialogStyle(const struct FS_UI_DialogStyle& Style)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetDialogStyle");

	Params::UWBP_UIKit_Dialog_Base_C_SetDialogStyle_Params Parms{};

	Parms.Style = Style;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIKitDialogViewModel*       Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetDialogData(class UUIKitDialogViewModel* Data, int32 CallFunc_Array_LastIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetDialogData");

	Params::UWBP_UIKit_Dialog_Base_C_SetDialogData_Params Parms{};

	Parms.Data = Data;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridNudge
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Nudge                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   K2Node_DynamicCast_AsGrid_Slot                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetGridNudge(class UWidget* Widget, const struct FVector2D& Nudge, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetGridNudge");

	Params::UWBP_UIKit_Dialog_Base_C_SetGridNudge_Params Parms{};

	Parms.Widget = Widget;
	Parms.Nudge = Nudge;
	Parms.K2Node_DynamicCast_AsGrid_Slot = K2Node_DynamicCast_AsGrid_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridPadding
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     Padding                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGridSlot*                   K2Node_DynamicCast_AsGrid_Slot                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetGridPadding(class UWidget* Widget, const struct FMargin& Padding, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetGridPadding");

	Params::UWBP_UIKit_Dialog_Base_C_SetGridPadding_Params Parms{};

	Parms.Widget = Widget;
	Parms.Padding = Padding;
	Parms.K2Node_DynamicCast_AsGrid_Slot = K2Node_DynamicCast_AsGrid_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridLayer
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Layer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   K2Node_DynamicCast_AsGrid_Slot                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetGridLayer(class UWidget* Widget, int32 Layer, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetGridLayer");

	Params::UWBP_UIKit_Dialog_Base_C_SetGridLayer_Params Parms{};

	Parms.Widget = Widget;
	Parms.Layer = Layer;
	Parms.K2Node_DynamicCast_AsGrid_Slot = K2Node_DynamicCast_AsGrid_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridAlignment
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Horizontal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Vertical                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   K2Node_DynamicCast_AsGrid_Slot                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetGridAlignment(class UWidget* Widget, enum class EHorizontalAlignment Horizontal, enum class EVerticalAlignment Vertical, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetGridAlignment");

	Params::UWBP_UIKit_Dialog_Base_C_SetGridAlignment_Params Parms{};

	Parms.Widget = Widget;
	Parms.Horizontal = Horizontal;
	Parms.Vertical = Vertical;
	Parms.K2Node_DynamicCast_AsGrid_Slot = K2Node_DynamicCast_AsGrid_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridColumnAndRow
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Row_Span                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column_Span                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   K2Node_DynamicCast_AsGrid_Slot                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetGridColumnAndRow(class UWidget* Widget, int32 Row, int32 Row_Span, int32 Column, int32 Column_Span, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetGridColumnAndRow");

	Params::UWBP_UIKit_Dialog_Base_C_SetGridColumnAndRow_Params Parms{};

	Parms.Widget = Widget;
	Parms.Row = Row;
	Parms.Row_Span = Row_Span;
	Parms.Column = Column;
	Parms.Column_Span = Column_Span;
	Parms.K2Node_DynamicCast_AsGrid_Slot = K2Node_DynamicCast_AsGrid_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetPlacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_Placement             Placement                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::SetPlacement(class UWidget* Widget, const struct FS_UI_Placement& Placement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "SetPlacement");

	Params::UWBP_UIKit_Dialog_Base_C_SetPlacement_Params Parms{};

	Parms.Widget = Widget;
	Parms.Placement = Placement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "PreConstruct");

	Params::UWBP_UIKit_Dialog_Base_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.OnDialogButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           AssociatedButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::OnDialogButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "OnDialogButtonClicked");

	Params::UWBP_UIKit_Dialog_Base_C_OnDialogButtonClicked_Params Parms{};

	Parms.AssociatedButton = AssociatedButton;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_UIKit_Dialog_Base_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "BP_OnActivated");

	Params::UWBP_UIKit_Dialog_Base_C_BP_OnActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_UIKit_Dialog_Base_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "BP_OnDeactivated");

	Params::UWBP_UIKit_Dialog_Base_C_BP_OnDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.ExecuteUbergraph_WBP_UIKit_Dialog_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonGroupBase*      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_AssociatedButton                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ButtonIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::ExecuteUbergraph_WBP_UIKit_Dialog_Base(int32 EntryPoint, class UCommonButtonGroupBase* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "ExecuteUbergraph_WBP_UIKit_Dialog_Base");

	Params::UWBP_UIKit_Dialog_Base_C_ExecuteUbergraph_WBP_UIKit_Dialog_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_AssociatedButton = K2Node_CustomEvent_AssociatedButton;
	Parms.K2Node_CustomEvent_ButtonIndex = K2Node_CustomEvent_ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.DialogButtonClickedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_Base_C::DialogButtonClickedDispatcher__DelegateSignature(int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_Base_C", "DialogButtonClickedDispatcher__DelegateSignature");

	Params::UWBP_UIKit_Dialog_Base_C_DialogButtonClickedDispatcher__DelegateSignature_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


