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


// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UUI_Game_Notifications_Entry_C::SetText(class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_Entry_C", "SetText");

	Params::UUI_Game_Notifications_Entry_C_SetText_Params Parms;

	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Notifications_Entry_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_Entry_C", "PreConstruct");

	Params::UUI_Game_Notifications_Entry_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Game_Notifications_Entry_C::Construct()
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_Entry_C", "Construct");

	Params::UUI_Game_Notifications_Entry_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Game_Notifications_Entry_C::Destroy()
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_Entry_C", "Destroy");

	Params::UUI_Game_Notifications_Entry_C_Destroy_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.ExecuteUbergraph_UI_Game_Notifications_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Notifications_Entry_C::ExecuteUbergraph_UI_Game_Notifications_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetRealTimeSeconds_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_Entry_C", "ExecuteUbergraph_UI_Game_Notifications_Entry");

	Params::UUI_Game_Notifications_Entry_C_ExecuteUbergraph_UI_Game_Notifications_Entry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Notifications_Entry.UI_Game_Notifications_Entry_C.OnDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Game_Notifications_Entry_C::OnDestroyed__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Game_Notifications_Entry_C", "OnDestroyed__DelegateSignature");

	Params::UUI_Game_Notifications_Entry_C_OnDestroyed__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
