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


// Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnSetMarkerData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWorldMarkerData        FortWorldMarkerData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNPCConvertedIndicatorMarker_C::OnSetMarkerData(struct FFortWorldMarkerData& FortWorldMarkerData)
{
	static auto Func = Class->GetFunction("NPCConvertedIndicatorMarker_C", "OnSetMarkerData");

	Params::UNPCConvertedIndicatorMarker_C_OnSetMarkerData_Params Parms;

	Parms.FortWorldMarkerData = FortWorldMarkerData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnPingCommandEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPingCommandType        CommandType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCConvertedIndicatorMarker_C::OnPingCommandEvent(enum class EPingCommandType CommandType)
{
	static auto Func = Class->GetFunction("NPCConvertedIndicatorMarker_C", "OnPingCommandEvent");

	Params::UNPCConvertedIndicatorMarker_C_OnPingCommandEvent_Params Parms;

	Parms.CommandType = CommandType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.ExecuteUbergraph_NPCConvertedIndicatorMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortWorldMarkerData        K2Node_Event_FortWorldMarkerData                                 (ConstParm)
// class ABP_PlayerPawn_Tandem_C*     K2Node_DynamicCast_AsBP_Player_Pawn_Tandem                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawnComponent_Convert*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPingCommandType        K2Node_CustomEvent_CommandType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetUIColor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetConverterPawn_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            CallFunc_AttemptGetPlayerStateForPawn_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPingCommandType        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCConvertedIndicatorMarker_C::ExecuteUbergraph_NPCConvertedIndicatorMarker(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortWorldMarkerData& K2Node_Event_FortWorldMarkerData, class ABP_PlayerPawn_Tandem_C* K2Node_DynamicCast_AsBP_Player_Pawn_Tandem, bool K2Node_DynamicCast_bSuccess, class ANPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent, bool K2Node_DynamicCast_bSuccess_1, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, enum class EPingCommandType K2Node_CustomEvent_CommandType, const struct FLinearColor& CallFunc_GetUIColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPlayerState* CallFunc_AttemptGetPlayerStateForPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class EPingCommandType Temp_byte_Variable_9, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("NPCConvertedIndicatorMarker_C", "ExecuteUbergraph_NPCConvertedIndicatorMarker");

	Params::UNPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_FortWorldMarkerData = K2Node_Event_FortWorldMarkerData;
	Parms.K2Node_DynamicCast_AsBP_Player_Pawn_Tandem = K2Node_DynamicCast_AsBP_Player_Pawn_Tandem;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent = K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_CommandType = K2Node_CustomEvent_CommandType;
	Parms.CallFunc_GetUIColor_ReturnValue = CallFunc_GetUIColor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetConverterPawn_ReturnValue = CallFunc_GetConverterPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_AttemptGetPlayerStateForPawn_ReturnValue = CallFunc_AttemptGetPlayerStateForPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena = K2Node_DynamicCast_AsFort_Player_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
