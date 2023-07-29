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


// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.SetupByGameState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Notifications_CountdownTimer_C::SetupByGameState(bool CallFunc_WithEditor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_CountdownTimer_C", "SetupByGameState");

	Params::UUI_Game_Notifications_CountdownTimer_C_SetupByGameState_Params Parms;

	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.OnChangeGameState_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Game_Notifications_CountdownTimer_C::OnChangeGameState_Event()
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_CountdownTimer_C", "OnChangeGameState_Event");

	Params::UUI_Game_Notifications_CountdownTimer_C_OnChangeGameState_Event_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.OnGameTimer_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Game_Notifications_CountdownTimer_C::OnGameTimer_Event()
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_CountdownTimer_C", "OnGameTimer_Event");

	Params::UUI_Game_Notifications_CountdownTimer_C_OnGameTimer_Event_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Game_Notifications_CountdownTimer_C::Construct()
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_CountdownTimer_C", "Construct");

	Params::UUI_Game_Notifications_CountdownTimer_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.ExecuteUbergraph_UI_Game_Notifications_CountdownTimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameState_Game_C*     CallFunc_GetGameStateBP_MyGameState                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_GetGameTimer_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// int32                              CallFunc_GetGameTimer_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Notifications_CountdownTimer_C::ExecuteUbergraph_UI_Game_Notifications_CountdownTimer(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState, int32 CallFunc_GetGameTimer_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetGameTimer_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_CountdownTimer_C", "ExecuteUbergraph_UI_Game_Notifications_CountdownTimer");

	Params::UUI_Game_Notifications_CountdownTimer_C_ExecuteUbergraph_UI_Game_Notifications_CountdownTimer_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetGameStateBP_MyGameState = CallFunc_GetGameStateBP_MyGameState;
	Parms.CallFunc_GetGameTimer_ReturnValue = CallFunc_GetGameTimer_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetGameTimer_ReturnValue_1 = CallFunc_GetGameTimer_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
