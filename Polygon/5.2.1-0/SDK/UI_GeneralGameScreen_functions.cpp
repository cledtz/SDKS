#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_GeneralGameScreen.UI_GeneralGameScreen_C
// (None)

class UClass* UUI_GeneralGameScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_GeneralGameScreen_C");

	return Clss;
}


// UI_GeneralGameScreen_C UI_GeneralGameScreen.Default__UI_GeneralGameScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_GeneralGameScreen_C* UUI_GeneralGameScreen_C::GetDefaultObj()
{
	static class UUI_GeneralGameScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_GeneralGameScreen_C*>(UUI_GeneralGameScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.ToggleMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GeneralGameScreen_C::ToggleMenu(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "ToggleMenu");

	Params::UUI_GeneralGameScreen_C_ToggleMenu_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.SetActiveScreenIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_GeneralGameScreen_C::SetActiveScreenIndex(int32 Index, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "SetActiveScreenIndex");

	Params::UUI_GeneralGameScreen_C_SetActiveScreenIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UUI_GeneralGameScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "OnKeyDown");

	Params::UUI_GeneralGameScreen_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnSuccess_687E902B488342B2BAC8458BD7DE2584
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GeneralGameScreen_C::OnSuccess_687E902B488342B2BAC8458BD7DE2584()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "OnSuccess_687E902B488342B2BAC8458BD7DE2584");

	Params::UUI_GeneralGameScreen_C_OnSuccess_687E902B488342B2BAC8458BD7DE2584_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnNewLevelReceived_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GeneralGameScreen_C::OnNewLevelReceived_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "OnNewLevelReceived_Event");

	Params::UUI_GeneralGameScreen_C_OnNewLevelReceived_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnTeamWon_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GeneralGameScreen_C::OnTeamWon_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "OnTeamWon_Event");

	Params::UUI_GeneralGameScreen_C_OnTeamWon_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_GeneralGameScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "Construct");

	Params::UUI_GeneralGameScreen_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CustomString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_GeneralGameScreen_C::OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UUI_GeneralGameScreen_C_OnUpdatePlayerCombinedInfo_Event_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomString = CustomString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.DeveloperLogin_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GeneralGameScreen_C::DeveloperLogin_Failure(const struct FPlayFabError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "DeveloperLogin_Failure");

	Params::UUI_GeneralGameScreen_C_DeveloperLogin_Failure_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GeneralGameScreen.UI_GeneralGameScreen_C.ExecuteUbergraph_UI_GeneralGameScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClientLoggedIn_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTask_DevepolerLogin_C*      CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_UpgradeLevelOfPlayer_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameState_Game_C*     CallFunc_GetGameStateBP_MyGameState                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_MatchResult_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<enum class EModifiedData>   K2Node_CustomEvent_ModifiedData                                  (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_CustomString                                  (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         (None)

void UUI_GeneralGameScreen_C::ExecuteUbergraph_UI_GeneralGameScreen(int32 EntryPoint, bool CallFunc_IsClientLoggedIn_ReturnValue, class UTask_DevepolerLogin_C* CallFunc_CreateAction_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_1, class UUI_UpgradeLevelOfPlayer_C* CallFunc_Create_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUI_MatchResult_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_BooleanAND_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_WithEditor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FPlayFabError& K2Node_CustomEvent_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GeneralGameScreen_C", "ExecuteUbergraph_UI_GeneralGameScreen");

	Params::UUI_GeneralGameScreen_C_ExecuteUbergraph_UI_GeneralGameScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsClientLoggedIn_ReturnValue = CallFunc_IsClientLoggedIn_ReturnValue;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game = K2Node_DynamicCast_AsBP_PG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameStateBP_MyGameState = CallFunc_GetGameStateBP_MyGameState;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_ModifiedData = K2Node_CustomEvent_ModifiedData;
	Parms.K2Node_CustomEvent_CustomString = K2Node_CustomEvent_CustomString;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;

	UObject::ProcessEvent(Func, &Parms);

}

}


