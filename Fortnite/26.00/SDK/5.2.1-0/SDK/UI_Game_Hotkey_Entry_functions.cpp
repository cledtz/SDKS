#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C
// (None)

class UClass* UUI_Game_Hotkey_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Game_Hotkey_Entry_C");

	return Clss;
}


// UI_Game_Hotkey_Entry_C UI_Game_Hotkey_Entry.Default__UI_Game_Hotkey_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Game_Hotkey_Entry_C* UUI_Game_Hotkey_Entry_C::GetDefaultObj()
{
	static class UUI_Game_Hotkey_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Game_Hotkey_Entry_C*>(UUI_Game_Hotkey_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Hotkey_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_Hotkey_Entry_C", "PreConstruct");

	Params::UUI_Game_Hotkey_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Game_Hotkey_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_Hotkey_Entry_C", "Construct");

	Params::UUI_Game_Hotkey_Entry_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.OnMappingsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Hotkey_Entry_C::OnMappingsChanged_Event(class UPlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_Hotkey_Entry_C", "OnMappingsChanged_Event");

	Params::UUI_Game_Hotkey_Entry_C_OnMappingsChanged_Event_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.OnSetCurrentGun_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem_Gun_General*           OldCurrentGun                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Hotkey_Entry_C::OnSetCurrentGun_Event(class UItem_Gun_General* OldCurrentGun)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_Hotkey_Entry_C", "OnSetCurrentGun_Event");

	Params::UUI_Game_Hotkey_Entry_C_OnSetCurrentGun_Event_Params Parms{};

	Parms.OldCurrentGun = OldCurrentGun;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.OnSetGunModules_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Game_Hotkey_Entry_C::OnSetGunModules_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_Hotkey_Entry_C", "OnSetGunModules_Event");

	Params::UUI_Game_Hotkey_Entry_C_OnSetGunModules_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.OnEnable_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Game_Hotkey_Entry_C::OnEnable_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_Hotkey_Entry_C", "OnEnable_Event");

	Params::UUI_Game_Hotkey_Entry_C_OnEnable_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.ExecuteUbergraph_UI_Game_Hotkey_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputMappingManager*        CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           K2Node_CustomEvent_Player                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UItem_Gun_General*           K2Node_CustomEvent_OldCurrentGun                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Game*        K2Node_DynamicCast_AsPG_Player_State_Game                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItem_Module_General*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItem_Module_Flashlight*     K2Node_DynamicCast_AsItem_Module_Flashlight                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Hotkey_Entry_C::ExecuteUbergraph_UI_Game_Hotkey_Entry(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UInputMappingManager* CallFunc_GetEngineSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayerController* K2Node_CustomEvent_Player, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UItem_Gun_General* K2Node_CustomEvent_OldCurrentGun, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, class UItem_Module_General* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UItem_Module_Flashlight* K2Node_DynamicCast_AsItem_Module_Flashlight, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_Hotkey_Entry_C", "ExecuteUbergraph_UI_Game_Hotkey_Entry");

	Params::UUI_Game_Hotkey_Entry_C_ExecuteUbergraph_UI_Game_Hotkey_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_CustomEvent_OldCurrentGun = K2Node_CustomEvent_OldCurrentGun;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Game = K2Node_DynamicCast_AsPG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Module_Flashlight = K2Node_DynamicCast_AsItem_Module_Flashlight;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


