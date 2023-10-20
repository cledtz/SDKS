#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C
// (None)

class UClass* UUI_MatchResult_ReceivedGamePoints_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MatchResult_ReceivedGamePoints_C");

	return Clss;
}


// UI_MatchResult_ReceivedGamePoints_C UI_MatchResult_ReceivedGamePoints.Default__UI_MatchResult_ReceivedGamePoints_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MatchResult_ReceivedGamePoints_C* UUI_MatchResult_ReceivedGamePoints_C::GetDefaultObj()
{
	static class UUI_MatchResult_ReceivedGamePoints_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MatchResult_ReceivedGamePoints_C*>(UUI_MatchResult_ReceivedGamePoints_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.SetProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPremium_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               L_IsPremium                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_CurrentProgress                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqualFloatInteger_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MatchResult_ReceivedGamePoints_C::SetProgress(double CurrentProgress, bool IsPremium_, bool L_IsPremium, double L_CurrentProgress, bool Temp_bool_Variable, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, class UProgressBar* K2Node_Select_Default, bool CallFunc_GreaterEqualFloatInteger_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_NormalizeToRange_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "SetProgress");

	Params::UUI_MatchResult_ReceivedGamePoints_C_SetProgress_Params Parms{};

	Parms.CurrentProgress = CurrentProgress;
	Parms.IsPremium_ = IsPremium_;
	Parms.L_IsPremium = L_IsPremium;
	Parms.L_CurrentProgress = L_CurrentProgress;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqualFloatInteger_ReturnValue = CallFunc_GreaterEqualFloatInteger_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.OnLoaded_78974F8E44E71FCE94F6F9A7D5D44E54
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_MatchResult_ReceivedGamePoints_C::OnLoaded_78974F8E44E71FCE94F6F9A7D5D44E54(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "OnLoaded_78974F8E44E71FCE94F6F9A7D5D44E54");

	Params::UUI_MatchResult_ReceivedGamePoints_C_OnLoaded_78974F8E44E71FCE94F6F9A7D5D44E54_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.OnLoaded_3D7D3F584CAFF1A110E1DA8B63501C2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_MatchResult_ReceivedGamePoints_C::OnLoaded_3D7D3F584CAFF1A110E1DA8B63501C2E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "OnLoaded_3D7D3F584CAFF1A110E1DA8B63501C2E");

	Params::UUI_MatchResult_ReceivedGamePoints_C_OnLoaded_3D7D3F584CAFF1A110E1DA8B63501C2E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MatchResult_ReceivedGamePoints_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "PreConstruct");

	Params::UUI_MatchResult_ReceivedGamePoints_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MatchResult_ReceivedGamePoints_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "Tick");

	Params::UUI_MatchResult_ReceivedGamePoints_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MatchResult_ReceivedGamePoints_C::Display()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "Display");

	Params::UUI_MatchResult_ReceivedGamePoints_C_Display_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MatchResult_ReceivedGamePoints_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "Destruct");

	Params::UUI_MatchResult_ReceivedGamePoints_C_Destruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.StartAddExpEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MatchResult_ReceivedGamePoints_C::StartAddExpEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "StartAddExpEvent");

	Params::UUI_MatchResult_ReceivedGamePoints_C_StartAddExpEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.OnGameTimer_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MatchResult_ReceivedGamePoints_C::OnGameTimer_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "OnGameTimer_Event");

	Params::UUI_MatchResult_ReceivedGamePoints_C_OnGameTimer_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.GoToNextLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MatchResult_ReceivedGamePoints_C::GoToNextLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "GoToNextLevel");

	Params::UUI_MatchResult_ReceivedGamePoints_C_GoToNextLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MatchResult_ReceivedGamePoints.UI_MatchResult_ReceivedGamePoints_C.ExecuteUbergraph_UI_MatchResult_ReceivedGamePoints
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScore_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScore_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelInfo                  CallFunc_GetNextLevelByLevelID_ReturnValue                       (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameState_Game_C*     CallFunc_GetGameStateBP_MyGameState                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGameTimer_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelInfo                  CallFunc_GetLevelByProgress_ReturnValue                          (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_5                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScore_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_6                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MatchResult_ReceivedGamePoints_C::ExecuteUbergraph_UI_MatchResult_ReceivedGamePoints(int32 EntryPoint, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 CallFunc_FTrunc_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetScore_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_GetScore_ReturnValue_1, const struct FLevelInfo& CallFunc_GetNextLevelByLevelID_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, double CallFunc_FMin_ReturnValue_1, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetGameTimer_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, const struct FLevelInfo& CallFunc_GetLevelByProgress_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_Conv_IntToText_ReturnValue_5, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_GetScore_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_3, double CallFunc_Lerp_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_6, double CallFunc_Conv_IntToDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MatchResult_ReceivedGamePoints_C", "ExecuteUbergraph_UI_MatchResult_ReceivedGamePoints");

	Params::UUI_MatchResult_ReceivedGamePoints_C_ExecuteUbergraph_UI_MatchResult_ReceivedGamePoints_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetScore_ReturnValue = CallFunc_GetScore_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetScore_ReturnValue_1 = CallFunc_GetScore_ReturnValue_1;
	Parms.CallFunc_GetNextLevelByLevelID_ReturnValue = CallFunc_GetNextLevelByLevelID_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.CallFunc_GetGameStateBP_MyGameState = CallFunc_GetGameStateBP_MyGameState;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game = K2Node_DynamicCast_AsBP_PG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameTimer_ReturnValue = CallFunc_GetGameTimer_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetLevelByProgress_ReturnValue = CallFunc_GetLevelByProgress_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_5 = CallFunc_Conv_IntToText_ReturnValue_5;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_3 = CallFunc_Conv_IntToDouble_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetScore_ReturnValue_2 = CallFunc_GetScore_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_6 = CallFunc_Conv_IntToText_ReturnValue_6;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_4 = CallFunc_Conv_IntToDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


