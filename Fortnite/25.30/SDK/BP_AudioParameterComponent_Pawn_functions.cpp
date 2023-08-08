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


// Function BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.PrintParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAudioParameterQueryData    Parameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioParameterComponent_Pawn_C::PrintParameter(struct FAudioParameterQueryData& Parameter, bool Condition)
{
	static auto Func = Class->GetFunction("BP_AudioParameterComponent_Pawn_C", "PrintParameter");

	Params::UBP_AudioParameterComponent_Pawn_C_PrintParameter_Params Parms;

	Parms.Parameter = Parameter;
	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.OnViewTargetSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AudioParameterComponent_Pawn_C::OnViewTargetSet(class UActor* Actor)
{
	static auto Func = Class->GetFunction("BP_AudioParameterComponent_Pawn_C", "OnViewTargetSet");

	Params::UBP_AudioParameterComponent_Pawn_C_OnViewTargetSet_Params Parms;

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.ExecuteUbergraph_BP_AudioParameterComponent_Pawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_Actor                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AudioParameterComponent_Pawn_C::ExecuteUbergraph_BP_AudioParameterComponent_Pawn(int32 EntryPoint, class UActor* K2Node_Event_Actor)
{
	static auto Func = Class->GetFunction("BP_AudioParameterComponent_Pawn_C", "ExecuteUbergraph_BP_AudioParameterComponent_Pawn");

	Params::UBP_AudioParameterComponent_Pawn_C_ExecuteUbergraph_BP_AudioParameterComponent_Pawn_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
