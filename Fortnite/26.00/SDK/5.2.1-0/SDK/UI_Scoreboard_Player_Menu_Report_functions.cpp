#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C
// (None)

class UClass* UUI_Scoreboard_Player_Menu_Report_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Scoreboard_Player_Menu_Report_C");

	return Clss;
}


// UI_Scoreboard_Player_Menu_Report_C UI_Scoreboard_Player_Menu_Report.Default__UI_Scoreboard_Player_Menu_Report_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Scoreboard_Player_Menu_Report_C* UUI_Scoreboard_Player_Menu_Report_C::GetDefaultObj()
{
	static class UUI_Scoreboard_Player_Menu_Report_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Scoreboard_Player_Menu_Report_C*>(UUI_Scoreboard_Player_Menu_Report_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.OnMouseButtonDown_Background
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UUI_Scoreboard_Player_Menu_Report_C::OnMouseButtonDown_Background(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "OnMouseButtonDown_Background");

	Params::UUI_Scoreboard_Player_Menu_Report_C_OnMouseButtonDown_Background_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SetFocusToScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_Menu_Report_C::SetFocusToScoreboard(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "SetFocusToScoreboard");

	Params::UUI_Scoreboard_Player_Menu_Report_C_SetFocusToScoreboard_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.OnPlayFabResponse_860D98224F067764473B2486553C01BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_Menu_Report_C::OnPlayFabResponse_860D98224F067764473B2486553C01BB(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "OnPlayFabResponse_860D98224F067764473B2486553C01BB");

	Params::UUI_Scoreboard_Player_Menu_Report_C_OnPlayFabResponse_860D98224F067764473B2486553C01BB_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_Menu_Report_C::BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Scoreboard_Player_Menu_Report_C_BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SendReport
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_Menu_Report_C::SendReport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "SendReport");

	Params::UUI_Scoreboard_Player_Menu_Report_C_SendReport_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_Menu_Report_C::BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Scoreboard_Player_Menu_Report_C_BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SendReport_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientReportPlayerClientResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_Menu_Report_C::SendReport_Success(const struct FClientReportPlayerClientResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "SendReport_Success");

	Params::UUI_Scoreboard_Player_Menu_Report_C_SendReport_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.SendReport_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_Menu_Report_C::SendReport_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "SendReport_Failure");

	Params::UUI_Scoreboard_Player_Menu_Report_C_SendReport_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Scoreboard_Player_Menu_Report_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "OnMouseLeave");

	Params::UUI_Scoreboard_Player_Menu_Report_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_Menu_Report_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "Construct");

	Params::UUI_Scoreboard_Player_Menu_Report_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C.ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientReportPlayerClientResultK2Node_CustomEvent_result                                        (NoDestructor)
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientReportPlayerClientRequestK2Node_MakeStruct_ClientReportPlayerClientRequest                (None)
// struct FPlayFabError               K2Node_CustomEvent_error                                         (None)
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_ReportPlayer_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// struct FVector2D                   CallFunc_GetMousePositionOnViewport_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_Menu_Report_C::ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report(int32 EntryPoint, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, const struct FClientReportPlayerClientResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FClientReportPlayerClientRequest& K2Node_MakeStruct_ClientReportPlayerClientRequest, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, class UPlayFabClientAPI* CallFunc_ReportPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_Menu_Report_C", "ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report");

	Params::UUI_Scoreboard_Player_Menu_Report_C_ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.K2Node_MakeStruct_ClientReportPlayerClientRequest = K2Node_MakeStruct_ClientReportPlayerClientRequest;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.CallFunc_ReportPlayer_ReturnValue = CallFunc_ReportPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_GetMousePositionOnViewport_ReturnValue = CallFunc_GetMousePositionOnViewport_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


