#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.DebugCreateTabsForDesigner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_DynamicCast_AsCommon_Button_Base                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::DebugCreateTabsForDesigner(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, class UCommonButtonBase* CallFunc_Create_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "DebugCreateTabsForDesigner");

	Params::UHorizontalTabList_Legacy_C_DebugCreateTabsForDesigner_Params Parms;

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommon_Button_Base = K2Node_DynamicCast_AsCommon_Button_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.UpdateTabStyles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           ButtonWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_Legacy_C*     K2Node_DynamicCast_AsIcon_Tab_Button_Legacy                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_Legacy_C*     K2Node_DynamicCast_AsIcon_Tab_Button_Legacy_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::UpdateTabStyles(class UCommonButtonBase* ButtonWidget, class UIconTabButton_Legacy_C* K2Node_DynamicCast_AsIcon_Tab_Button_Legacy, bool K2Node_DynamicCast_bSuccess, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, class UIconTabButton_Legacy_C* K2Node_DynamicCast_AsIcon_Tab_Button_Legacy_1, bool K2Node_DynamicCast_bSuccess_1, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class FText CallFunc_GetEmptyText_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "UpdateTabStyles");

	Params::UHorizontalTabList_Legacy_C_UpdateTabStyles_Params Parms;

	Parms.ButtonWidget = ButtonWidget;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button_Legacy = K2Node_DynamicCast_AsIcon_Tab_Button_Legacy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button_Legacy_1 = K2Node_DynamicCast_AsIcon_Tab_Button_Legacy_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue_1 = CallFunc_SlotAsSizeBoxSlot_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.SetVerticalAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVerticalAlignment      FillVertically                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::SetVerticalAlignment(enum class EVerticalAlignment FillVertically, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "SetVerticalAlignment");

	Params::UHorizontalTabList_Legacy_C_SetVerticalAlignment_Params Parms;

	Parms.FillVertically = FillVertically;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.UpdateGamepadKeyVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumVisibleTabs                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisibleTabCount_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::UpdateGamepadKeyVisibility(int32 NumVisibleTabs, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 CallFunc_GetVisibleTabCount_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "UpdateGamepadKeyVisibility");

	Params::UHorizontalTabList_Legacy_C_UpdateGamepadKeyVisibility_Params Parms;

	Parms.NumVisibleTabs = NumVisibleTabs;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetVisibleTabCount_ReturnValue = CallFunc_GetVisibleTabCount_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "PreConstruct");

	Params::UHorizontalTabList_Legacy_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.Previous Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHorizontalTabList_Legacy_C::Previous_Visibility()
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "Previous Visibility");

	Params::UHorizontalTabList_Legacy_C_Previous_Visibility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHorizontalTabList_Legacy_C::Construct()
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "Construct");

	Params::UHorizontalTabList_Legacy_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::CustomEvent_0(class FName TabId)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "CustomEvent_0");

	Params::UHorizontalTabList_Legacy_C_CustomEvent_0_Params Parms;

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.HandleOnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::HandleOnInputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "HandleOnInputMethodChanged");

	Params::UHorizontalTabList_Legacy_C_HandleOnInputMethodChanged_Params Parms;

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::CustomEvent_1(enum class ESlateVisibility InVisibility)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "CustomEvent_1");

	Params::UHorizontalTabList_Legacy_C_CustomEvent_1_Params Parms;

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.HandleTabCreation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "HandleTabCreation");

	Params::UHorizontalTabList_Legacy_C_HandleTabCreation_Params Parms;

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.HandleTabRemoval
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "HandleTabRemoval");

	Params::UHorizontalTabList_Legacy_C_HandleTabRemoval_Params Parms;

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.ExecuteUbergraph_HorizontalTabList_Legacy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTabCount_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTabCount_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_TabId                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_CustomEvent_InVisibility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TabNameID_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_Event_TabButton_1                                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TabNameID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_Event_TabButton                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_Legacy_C::ExecuteUbergraph_HorizontalTabList_Legacy(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable_4, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetTabCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class FName K2Node_CustomEvent_TabId, enum class ESlateVisibility Temp_byte_Variable_5, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, class FName K2Node_Event_TabNameID_1, class UCommonButtonBase* K2Node_Event_TabButton_1, class FName K2Node_Event_TabNameID, class UCommonButtonBase* K2Node_Event_TabButton, bool Temp_bool_Variable_2, bool CallFunc_IsValidClass_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "ExecuteUbergraph_HorizontalTabList_Legacy");

	Params::UHorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetTabCount_ReturnValue = CallFunc_GetTabCount_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTabCount_ReturnValue_1 = CallFunc_GetTabCount_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_TabId = K2Node_CustomEvent_TabId;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;
	Parms.K2Node_Event_TabNameID_1 = K2Node_Event_TabNameID_1;
	Parms.K2Node_Event_TabButton_1 = K2Node_Event_TabButton_1;
	Parms.K2Node_Event_TabNameID = K2Node_Event_TabNameID;
	Parms.K2Node_Event_TabButton = K2Node_Event_TabButton;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.RefreshGamepad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHorizontalTabList_Legacy_C::RefreshGamepad__DelegateSignature()
{
	static auto Func = Class->GetFunction("HorizontalTabList_Legacy_C", "RefreshGamepad__DelegateSignature");

	Params::UHorizontalTabList_Legacy_C_RefreshGamepad__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
