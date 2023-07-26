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


// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.SetupPawnActorAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   FortPawn                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   LocalFortPawn                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_TriggeredAbility_Pawn_C::SetupPawnActorAbility(class AFortPawn** FortPawn, class AFortPawn* LocalFortPawn, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GAT_Creative_TriggeredAbility_Pawn_C", "SetupPawnActorAbility");

	Params::UGAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility_Params Parms;

	Parms.LocalFortPawn = LocalFortPawn;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FortPawn != nullptr)
		*FortPawn = Parms.FortPawn;

}


// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_Creative_TriggeredAbility_Pawn_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAT_Creative_TriggeredAbility_Pawn_C", "K2_ActivateAbilityFromEvent");

	Params::UGAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AFortPawn*                   CallFunc_SetupPawnActorAbility_FortPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_TriggeredAbility_Pawn_C::ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPawn* CallFunc_SetupPawnActorAbility_FortPawn)
{
	static auto Func = Class->GetFunction("GAT_Creative_TriggeredAbility_Pawn_C", "ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn");

	Params::UGAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_SetupPawnActorAbility_FortPawn = CallFunc_SetupPawnActorAbility_FortPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
