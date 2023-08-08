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


// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGCNL_PurpleStuff_C::OnRemove(class UActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCNL_PurpleStuff_C", "OnRemove");

	Params::UGCNL_PurpleStuff_C_OnRemove_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerPawn_Athena_Generic_C*K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGCNL_PurpleStuff_C::OnActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, class UPlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GCNL_PurpleStuff_C", "OnActive");

	Params::UGCNL_PurpleStuff_C_OnActive_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGCNL_PurpleStuff_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCNL_PurpleStuff_C", "ReceiveBeginPlay");

	Params::UGCNL_PurpleStuff_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCNL_PurpleStuff_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("GCNL_PurpleStuff_C", "ReceiveTick");

	Params::UGCNL_PurpleStuff_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ExecuteUbergraph_GCNL_PurpleStuff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetShield_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCNL_PurpleStuff_C::ExecuteUbergraph_GCNL_PurpleStuff(int32 EntryPoint, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetShield_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_Event_DeltaSeconds, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("GCNL_PurpleStuff_C", "ExecuteUbergraph_GCNL_PurpleStuff");

	Params::UGCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetShield_ReturnValue = CallFunc_GetShield_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
