#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Indicators.UI_Indicators_C
// (None)

class UClass* UUI_Indicators_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Indicators_C");

	return Clss;
}


// UI_Indicators_C UI_Indicators.Default__UI_Indicators_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Indicators_C* UUI_Indicators_C::GetDefaultObj()
{
	static class UUI_Indicators_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Indicators_C*>(UUI_Indicators_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Indicators.UI_Indicators_C.OnChangeHealth_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Indicators_C::OnChangeHealth_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "OnChangeHealth_Event");

	Params::UUI_Indicators_C_OnChangeHealth_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Indicators.UI_Indicators_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Indicators_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "Tick");

	Params::UUI_Indicators_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Indicators.UI_Indicators_C.OnSetPlayerState_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Indicators_C::OnSetPlayerState_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "OnSetPlayerState_Event");

	Params::UUI_Indicators_C_OnSetPlayerState_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Indicators.UI_Indicators_C.OnSetCurrentGun_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem_Gun_General*           OldCurrentGun                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Indicators_C::OnSetCurrentGun_Event(class UItem_Gun_General* OldCurrentGun)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "OnSetCurrentGun_Event");

	Params::UUI_Indicators_C_OnSetCurrentGun_Event_Params Parms{};

	Parms.OldCurrentGun = OldCurrentGun;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Indicators.UI_Indicators_C.OnChangeNumberGrenades_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Indicators_C::OnChangeNumberGrenades_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "OnChangeNumberGrenades_Event");

	Params::UUI_Indicators_C_OnChangeNumberGrenades_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Indicators.UI_Indicators_C.OnPossessedPawnChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Indicators_C::OnPossessedPawnChanged_Event(class UPawn* OldPawn, class UPawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "OnPossessedPawnChanged_Event");

	Params::UUI_Indicators_C_OnPossessedPawnChanged_Event_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Indicators.UI_Indicators_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Indicators_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "Construct");

	Params::UUI_Indicators_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Indicators.UI_Indicators_C.OnChangeStockAmmo_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Indicators_C::OnChangeStockAmmo_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "OnChangeStockAmmo_Event");

	Params::UUI_Indicators_C_OnChangeStockAmmo_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Indicators.UI_Indicators_C.OnChangeCurrentNumberAmmo_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Indicators_C::OnChangeCurrentNumberAmmo_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "OnChangeCurrentNumberAmmo_Event");

	Params::UUI_Indicators_C_OnChangeCurrentNumberAmmo_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Indicators.UI_Indicators_C.ExecuteUbergraph_UI_Indicators
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_Game_Character_C*     K2Node_DynamicCast_AsBP_PG_Game_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHealth_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItem_Gun_General*           K2Node_CustomEvent_OldCurrentGun                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UPawn*                       K2Node_CustomEvent_OldPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_CustomEvent_NewPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentStockAmmo_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Indicators_C::ExecuteUbergraph_UI_Indicators(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetHealth_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, int32 CallFunc_GetHealth_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_1, class UItem_Gun_General* K2Node_CustomEvent_OldCurrentGun, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UPawn* K2Node_CustomEvent_OldPawn, class UPawn* K2Node_CustomEvent_NewPawn, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 CallFunc_GetCurrentStockAmmo_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Indicators_C", "ExecuteUbergraph_UI_Indicators");

	Params::UUI_Indicators_C_ExecuteUbergraph_UI_Indicators_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Game_Character = K2Node_DynamicCast_AsBP_PG_Game_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetHealth_ReturnValue_1 = CallFunc_GetHealth_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_OldCurrentGun = K2Node_CustomEvent_OldCurrentGun;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game = K2Node_DynamicCast_AsBP_PG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_CustomEvent_OldPawn = K2Node_CustomEvent_OldPawn;
	Parms.K2Node_CustomEvent_NewPawn = K2Node_CustomEvent_NewPawn;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetCurrentStockAmmo_ReturnValue = CallFunc_GetCurrentStockAmmo_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast = CallFunc_LinearColorLerp_Alpha_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_1 = CallFunc_FInterpTo_Current_ImplicitCast_1;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_1 = CallFunc_SetPercent_InPercent_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


