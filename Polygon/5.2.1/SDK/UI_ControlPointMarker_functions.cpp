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


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewSize                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControlPointMarker_C::SetSize(double NewSize, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "SetSize");

	Params::UUI_ControlPointMarker_C_SetSize_Params Parms;

	Parms.NewSize = NewSize;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControlPointMarker_C::SetName(bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "SetName");

	Params::UUI_ControlPointMarker_C_SetName_Params Parms;

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControlPointMarker_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "PreConstruct");

	Params::UUI_ControlPointMarker_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.AttachMarkerToControlPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UControlPoint*               ControlPointReference                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_ControlPointMarker_C::AttachMarkerToControlPoint(class UControlPoint* ControlPointReference)
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "AttachMarkerToControlPoint");

	Params::UUI_ControlPointMarker_C_AttachMarkerToControlPoint_Params Parms;

	Parms.ControlPointReference = ControlPointReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnCapturedTeam_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UControlPoint*               ControlPoint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_ControlPointMarker_C::OnCapturedTeam_Event(class UControlPoint* ControlPoint)
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "OnCapturedTeam_Event");

	Params::UUI_ControlPointMarker_C_OnCapturedTeam_Event_Params Parms;

	Parms.ControlPoint = ControlPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnIsCapture_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UControlPoint*               ControlPoint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_ControlPointMarker_C::OnIsCapture_Event(class UControlPoint* ControlPoint)
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "OnIsCapture_Event");

	Params::UUI_ControlPointMarker_C_OnIsCapture_Event_Params Parms;

	Parms.ControlPoint = ControlPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnSetTeam_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ControlPointMarker_C::OnSetTeam_Event()
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "OnSetTeam_Event");

	Params::UUI_ControlPointMarker_C_OnSetTeam_Event_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.OnSetPlayerState_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ControlPointMarker_C::OnSetPlayerState_Event()
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "OnSetPlayerState_Event");

	Params::UUI_ControlPointMarker_C_OnSetPlayerState_Event_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.ExecuteUbergraph_UI_ControlPointMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UControlPoint*               K2Node_CustomEvent_ControlPointReference                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UControlPoint*               K2Node_CustomEvent_ControlPoint_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UControlPoint*               K2Node_CustomEvent_ControlPoint                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerController_Base*   K2Node_DynamicCast_AsPG_Player_Controller_Base                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControlPointMarker_C::ExecuteUbergraph_UI_ControlPointMarker(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, class UControlPoint* K2Node_CustomEvent_ControlPointReference, class UControlPoint* K2Node_CustomEvent_ControlPoint_1, class UControlPoint* K2Node_CustomEvent_ControlPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPG_PlayerController_Base* K2Node_DynamicCast_AsPG_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "ExecuteUbergraph_UI_ControlPointMarker");

	Params::UUI_ControlPointMarker_C_ExecuteUbergraph_UI_ControlPointMarker_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_ControlPointReference = K2Node_CustomEvent_ControlPointReference;
	Parms.K2Node_CustomEvent_ControlPoint_1 = K2Node_CustomEvent_ControlPoint_1;
	Parms.K2Node_CustomEvent_ControlPoint = K2Node_CustomEvent_ControlPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPG_Player_Controller_Base = K2Node_DynamicCast_AsPG_Player_Controller_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game = K2Node_DynamicCast_AsBP_PG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ControlPointMarker.UI_ControlPointMarker_C.SelectAsSpawnPointDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EControlPoint           Point                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ControlPointMarker_C::SelectAsSpawnPointDelegate__DelegateSignature(enum class EControlPoint Point)
{
	static auto Func = Class->GetFunction("UI_ControlPointMarker_C", "SelectAsSpawnPointDelegate__DelegateSignature");

	Params::UUI_ControlPointMarker_C_SelectAsSpawnPointDelegate__DelegateSignature_Params Parms;

	Parms.Point = Point;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
