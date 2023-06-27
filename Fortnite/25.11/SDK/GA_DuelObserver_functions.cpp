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


// Function GA_DuelObserver.GA_DuelObserver_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DuelObserver_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_DuelObserver_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_DuelObserver_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DuelObserver.GA_DuelObserver_C.UpdateDuelUI
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDuelState              Duel_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDuelOverlayData            Cached_Duel_Overlay_Data                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DuelObserver_C::UpdateDuelUI(enum class EDuelState Duel_State, const struct FDuelOverlayData& Cached_Duel_Overlay_Data)
{
	static auto Func = Class->GetFunction("GA_DuelObserver_C", "UpdateDuelUI");

	Params::UGA_DuelObserver_C_UpdateDuelUI_Params Parms;

	Parms.Duel_State = Duel_State;
	Parms.Cached_Duel_Overlay_Data = Cached_Duel_Overlay_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DuelObserver.GA_DuelObserver_C.OnDuelChange
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// enum class EDuelState              NewDuelState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDuelOverlayData            ChangedDuelOverlayData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DuelObserver_C::OnDuelChange(enum class EDuelState NewDuelState, struct FDuelOverlayData& ChangedDuelOverlayData)
{
	static auto Func = Class->GetFunction("GA_DuelObserver_C", "OnDuelChange");

	Params::UGA_DuelObserver_C_OnDuelChange_Params Parms;

	Parms.NewDuelState = NewDuelState;
	Parms.ChangedDuelOverlayData = ChangedDuelOverlayData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DuelObserver.GA_DuelObserver_C.ExecuteUbergraph_GA_DuelObserver
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDuelState              K2Node_Event_NewDuelState                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDuelOverlayData            K2Node_Event_ChangedDuelOverlayData                              (ConstParm)
// enum class EDuelState              K2Node_CustomEvent_Duel_State                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDuelOverlayData            K2Node_CustomEvent_Cached_Duel_Overlay_Data                      ()
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DuelObserver_C::ExecuteUbergraph_GA_DuelObserver(int32 EntryPoint, enum class EDuelState K2Node_Event_NewDuelState, const struct FDuelOverlayData& K2Node_Event_ChangedDuelOverlayData, enum class EDuelState K2Node_CustomEvent_Duel_State, const struct FDuelOverlayData& K2Node_CustomEvent_Cached_Duel_Overlay_Data, bool CallFunc_IsServer_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("GA_DuelObserver_C", "ExecuteUbergraph_GA_DuelObserver");

	Params::UGA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewDuelState = K2Node_Event_NewDuelState;
	Parms.K2Node_Event_ChangedDuelOverlayData = K2Node_Event_ChangedDuelOverlayData;
	Parms.K2Node_CustomEvent_Duel_State = K2Node_CustomEvent_Duel_State;
	Parms.K2Node_CustomEvent_Cached_Duel_Overlay_Data = K2Node_CustomEvent_Cached_Duel_Overlay_Data;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
