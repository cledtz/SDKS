#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function WBP_PlayerAvatar.WBP_PlayerAvatar_C.OnOnlinePresenceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHidePresence                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPresenceIndicatorState PresenceState                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerAvatar_C::OnOnlinePresenceChanged(bool bHidePresence, enum class EPresenceIndicatorState PresenceState)
{
	static auto Func = Class->GetFunction("WBP_PlayerAvatar_C", "OnOnlinePresenceChanged");

	Params::UWBP_PlayerAvatar_C_OnOnlinePresenceChanged_Params Parms;

	Parms.bHidePresence = bHidePresence;
	Parms.PresenceState = PresenceState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerAvatar.WBP_PlayerAvatar_C.Event Set Size
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewSize                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerAvatar_C::Event_Set_Size(const struct FVector2D& NewSize)
{
	static auto Func = Class->GetFunction("WBP_PlayerAvatar_C", "Event Set Size");

	Params::UWBP_PlayerAvatar_C_Event_Set_Size_Params Parms;

	Parms.NewSize = NewSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerAvatar.WBP_PlayerAvatar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerAvatar_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("WBP_PlayerAvatar_C", "PreConstruct");

	Params::UWBP_PlayerAvatar_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerAvatar.WBP_PlayerAvatar_C.Event Set Presence Icon Settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerAvatar_C::Event_Set_Presence_Icon_Settings(double Scale, const struct FVector2D& Offset)
{
	static auto Func = Class->GetFunction("WBP_PlayerAvatar_C", "Event Set Presence Icon Settings");

	Params::UWBP_PlayerAvatar_C_Event_Set_Presence_Icon_Settings_Params Parms;

	Parms.Scale = Scale;
	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerAvatar.WBP_PlayerAvatar_C.ExecuteUbergraph_WBP_PlayerAvatar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPresenceIndicatorState Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHidePresence                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPresenceIndicatorState K2Node_Event_PresenceState                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_NewSize                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Scale                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Offset                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPresenceIndicatorState Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerAvatar_C::ExecuteUbergraph_WBP_PlayerAvatar(int32 EntryPoint, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float K2Node_Select_Default, enum class EPresenceIndicatorState Temp_byte_Variable, float Temp_real_Variable_4, bool K2Node_Event_bHidePresence, enum class EPresenceIndicatorState K2Node_Event_PresenceState, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector2D& K2Node_CustomEvent_NewSize, float Temp_real_Variable_5, const struct FLinearColor& K2Node_Select_Default_1, bool Temp_bool_Variable_2, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Select_Default_2, float K2Node_Select_Default_3, double K2Node_CustomEvent_Scale, const struct FVector2D& K2Node_CustomEvent_Offset, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, enum class EPresenceIndicatorState Temp_byte_Variable_1, const struct FLinearColor& K2Node_Select_Default_4, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2)
{
	static auto Func = Class->GetFunction("WBP_PlayerAvatar_C", "ExecuteUbergraph_WBP_PlayerAvatar");

	Params::UWBP_PlayerAvatar_C_ExecuteUbergraph_WBP_PlayerAvatar_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.K2Node_Event_bHidePresence = K2Node_Event_bHidePresence;
	Parms.K2Node_Event_PresenceState = K2Node_Event_PresenceState;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_NewSize = K2Node_CustomEvent_NewSize;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_CustomEvent_Scale = K2Node_CustomEvent_Scale;
	Parms.K2Node_CustomEvent_Offset = K2Node_CustomEvent_Offset;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast = K2Node_MakeStruct_ImageSize_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
