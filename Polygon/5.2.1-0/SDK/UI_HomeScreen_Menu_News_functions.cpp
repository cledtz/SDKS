#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C
// (None)

class UClass* UUI_HomeScreen_Menu_News_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HomeScreen_Menu_News_C");

	return Clss;
}


// UI_HomeScreen_Menu_News_C UI_HomeScreen_Menu_News.Default__UI_HomeScreen_Menu_News_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HomeScreen_Menu_News_C* UUI_HomeScreen_Menu_News_C::GetDefaultObj()
{
	static class UUI_HomeScreen_Menu_News_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HomeScreen_Menu_News_C*>(UUI_HomeScreen_Menu_News_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C.SetPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_HomeScreen_Menu_News_ButtonSwitch_C*L_ActiveButton                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              L_Index                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_HomeScreen_Menu_News_ButtonSwitch_C*K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_HomeScreen_Menu_News_ButtonSwitch_C*K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_News_C::SetPage(int32 Index, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* L_ActiveButton, int32 L_Index, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_News_C", "SetPage");

	Params::UUI_HomeScreen_Menu_News_C_SetPage_Params Parms{};

	Parms.Index = Index;
	Parms.L_ActiveButton = L_ActiveButton;
	Parms.L_Index = L_Index;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch = K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_2 = CallFunc_GetActiveWidgetIndex_ReturnValue_2;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1 = K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_News_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_News_C", "PreConstruct");

	Params::UUI_HomeScreen_Menu_News_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_News_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_News_C", "Construct");

	Params::UUI_HomeScreen_Menu_News_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C.ToNextPage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_News_C::ToNextPage_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_News_C", "ToNextPage_Event");

	Params::UUI_HomeScreen_Menu_News_C_ToNextPage_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C.StartNewPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_News_C::StartNewPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_News_C", "StartNewPage");

	Params::UUI_HomeScreen_Menu_News_C_StartNewPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_HomeScreen_Menu_News_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_News_C", "OnMouseEnter");

	Params::UUI_HomeScreen_Menu_News_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_HomeScreen_Menu_News_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_News_C", "OnMouseLeave");

	Params::UUI_HomeScreen_Menu_News_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C.ExecuteUbergraph_UI_HomeScreen_Menu_News
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_HomeScreen_Menu_News_ButtonSwitch_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_HomeScreen_Menu_News_ButtonSwitch_C*K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_HomeScreen_Menu_News_ButtonSwitch_C*K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUI_HomeScreen_Menu_News_ButtonSwitch_C*K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_2    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UUI_HomeScreen_Menu_News_C::ExecuteUbergraph_UI_HomeScreen_Menu_News(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* CallFunc_Create_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, int32 K2Node_Select_Default, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_GetChildAt_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_2, bool K2Node_DynamicCast_bSuccess_2, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_News_C", "ExecuteUbergraph_UI_HomeScreen_Menu_News");

	Params::UUI_HomeScreen_Menu_News_C_ExecuteUbergraph_UI_HomeScreen_Menu_News_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch = K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1 = K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_2 = CallFunc_GetActiveWidgetIndex_ReturnValue_2;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_3 = CallFunc_GetActiveWidgetIndex_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetChildAt_ReturnValue_2 = CallFunc_GetChildAt_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_2 = K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHover                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_News_C::OnHovered__DelegateSignature(bool IsHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_News_C", "OnHovered__DelegateSignature");

	Params::UUI_HomeScreen_Menu_News_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.IsHover = IsHover;

	UObject::ProcessEvent(Func, &Parms);

}

}


