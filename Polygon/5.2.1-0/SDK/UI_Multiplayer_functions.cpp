#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Multiplayer.UI_Multiplayer_C
// (None)

class UClass* UUI_Multiplayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Multiplayer_C");

	return Clss;
}


// UI_Multiplayer_C UI_Multiplayer.Default__UI_Multiplayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Multiplayer_C* UUI_Multiplayer_C::GetDefaultObj()
{
	static class UUI_Multiplayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Multiplayer_C*>(UUI_Multiplayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Multiplayer.UI_Multiplayer_C.DirectConnectToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      IP                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Port                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              L_Port                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      L_IP                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*L_PlayerController                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Menu_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Menu                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameInstance_C*       CallFunc_GetGameInstance_MyGameIntance                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Multiplayer_C::DirectConnectToServer(const class FString& IP, int32 Port, int32 L_Port, const class FString& L_IP, class UBP_PG_PlayerController_Menu_C* L_PlayerController, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess_1, class UBP_PG_GameInstance_C* CallFunc_GetGameInstance_MyGameIntance, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_C", "DirectConnectToServer");

	Params::UUI_Multiplayer_C_DirectConnectToServer_Params Parms{};

	Parms.IP = IP;
	Parms.Port = Port;
	Parms.L_Port = L_Port;
	Parms.L_IP = L_IP;
	Parms.L_PlayerController = L_PlayerController;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Menu = K2Node_DynamicCast_AsBP_PG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_MyGameIntance = CallFunc_GetGameInstance_MyGameIntance;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Multiplayer.UI_Multiplayer_C.BndEvt__UI_Button_Quickmatch_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Multiplayer_C::BndEvt__UI_Button_Quickmatch_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_C", "BndEvt__UI_Button_Quickmatch_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	Params::UUI_Multiplayer_C_BndEvt__UI_Button_Quickmatch_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Multiplayer.UI_Multiplayer_C.BndEvt__UI_Button_ServerList_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Multiplayer_C::BndEvt__UI_Button_ServerList_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_C", "BndEvt__UI_Button_ServerList_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	Params::UUI_Multiplayer_C_BndEvt__UI_Button_ServerList_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Multiplayer.UI_Multiplayer_C.BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Multiplayer_C::BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_C", "BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	Params::UUI_Multiplayer_C_BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Multiplayer.UI_Multiplayer_C.OnClick_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Multiplayer_C::OnClick_Event(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_C", "OnClick_Event");

	Params::UUI_Multiplayer_C_OnClick_Event_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Multiplayer.UI_Multiplayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Multiplayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_C", "Construct");

	Params::UUI_Multiplayer_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Multiplayer.UI_Multiplayer_C.ExecuteUbergraph_UI_Multiplayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_DynamicCast_AsUI_Button                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_DynamicCast_AsUI_Button_1                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Multiplayer_C::ExecuteUbergraph_UI_Multiplayer(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button, bool K2Node_DynamicCast_bSuccess, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_2, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1, class UUI_Button_C* K2Node_ComponentBoundEvent_Button, class UUI_Button_C* K2Node_CustomEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_C", "ExecuteUbergraph_UI_Multiplayer");

	Params::UUI_Multiplayer_C_ExecuteUbergraph_UI_Multiplayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsUI_Button = K2Node_DynamicCast_AsUI_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUI_Button_1 = K2Node_DynamicCast_AsUI_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


