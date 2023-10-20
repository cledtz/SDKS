#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Multiplayer_Queue.UI_Multiplayer_Queue_C
// (None)

class UClass* UUI_Multiplayer_Queue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Multiplayer_Queue_C");

	return Clss;
}


// UI_Multiplayer_Queue_C UI_Multiplayer_Queue.Default__UI_Multiplayer_Queue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Multiplayer_Queue_C* UUI_Multiplayer_Queue_C::GetDefaultObj()
{
	static class UUI_Multiplayer_Queue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Multiplayer_Queue_C*>(UUI_Multiplayer_Queue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Multiplayer_Queue.UI_Multiplayer_Queue_C.DisableTutorialLocal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UPG_PlayerState_Menu*        K2Node_DynamicCast_AsPG_Player_State_Menu                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Multiplayer_Queue_C::DisableTutorialLocal(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_Queue_C", "DisableTutorialLocal");

	Params::UUI_Multiplayer_Queue_C_DisableTutorialLocal_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Menu = K2Node_DynamicCast_AsPG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Multiplayer_Queue.UI_Multiplayer_Queue_C.BndEvt__UI_Multiplayer_Queue_Button_Leave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Multiplayer_Queue_C::BndEvt__UI_Multiplayer_Queue_Button_Leave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_Queue_C", "BndEvt__UI_Multiplayer_Queue_Button_Leave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Multiplayer_Queue_C_BndEvt__UI_Multiplayer_Queue_Button_Leave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Multiplayer_Queue.UI_Multiplayer_Queue_C.ExecuteUbergraph_UI_Multiplayer_Queue
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Multiplayer_Queue_C::ExecuteUbergraph_UI_Multiplayer_Queue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_Queue_C", "ExecuteUbergraph_UI_Multiplayer_Queue");

	Params::UUI_Multiplayer_Queue_C_ExecuteUbergraph_UI_Multiplayer_Queue_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Multiplayer_Queue.UI_Multiplayer_Queue_C.OnClickLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Multiplayer_Queue_C::OnClickLeave__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Multiplayer_Queue_C", "OnClickLeave__DelegateSignature");

	Params::UUI_Multiplayer_Queue_C_OnClickLeave__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


