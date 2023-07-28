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


// Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_GameState_C::OnWinnerAnnounced()
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "OnWinnerAnnounced");

	Params::UAthena_GameState_C_OnWinnerAnnounced_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSlowMotionOnVictory_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_GameState_C::ExecuteUbergraph_Athena_GameState(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool CallFunc_CanUseSlowMotionOnVictory_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable)
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "ExecuteUbergraph_Athena_GameState");

	Params::UAthena_GameState_C_ExecuteUbergraph_Athena_GameState_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_CanUseSlowMotionOnVictory_ReturnValue = CallFunc_CanUseSlowMotionOnVictory_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
