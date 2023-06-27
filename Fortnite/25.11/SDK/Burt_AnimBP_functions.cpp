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


// Function Burt_AnimBP.Burt_AnimBP_C.Fauna IdleTurn
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_IdleTurn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Fauna_IdleTurn                                                   (Parm, OutParm, NoDestructor)

void UBurt_AnimBP_C::Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn)
{
	static auto Func = Class->GetFunction("Burt_AnimBP_C", "Fauna IdleTurn");

	Params::UBurt_AnimBP_C_Fauna_IdleTurn_Params Parms;

	Parms.InPose_IdleTurn = InPose_IdleTurn;

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_IdleTurn != nullptr)
		*Fauna_IdleTurn = Parms.Fauna_IdleTurn;

}


// Function Burt_AnimBP.Burt_AnimBP_C.Fauna Idle
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_Idle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Fauna_Idle                                                       (Parm, OutParm, NoDestructor)

void UBurt_AnimBP_C::Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle)
{
	static auto Func = Class->GetFunction("Burt_AnimBP_C", "Fauna Idle");

	Params::UBurt_AnimBP_C_Fauna_Idle_Params Parms;

	Parms.InPose_Idle = InPose_Idle;

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Idle != nullptr)
		*Fauna_Idle = Parms.Fauna_Idle;

}


// Function Burt_AnimBP.Burt_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBurt_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Burt_AnimBP_C", "AnimGraph");

	Params::UBurt_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Burt_AnimBP.Burt_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3
// (BlueprintEvent)
// Parameters:

void UBurt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3()
{
	static auto Func = Class->GetFunction("Burt_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3");

	Params::UBurt_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Burt_AnimBP.Burt_AnimBP_C.AnimNotify_FallExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBurt_AnimBP_C::AnimNotify_FallExit()
{
	static auto Func = Class->GetFunction("Burt_AnimBP_C", "AnimNotify_FallExit");

	Params::UBurt_AnimBP_C_AnimNotify_FallExit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandAddExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBurt_AnimBP_C::AnimNotify_LandAddExit()
{
	static auto Func = Class->GetFunction("Burt_AnimBP_C", "AnimNotify_LandAddExit");

	Params::UBurt_AnimBP_C_AnimNotify_LandAddExit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBurt_AnimBP_C::AnimNotify_LandEnter()
{
	static auto Func = Class->GetFunction("Burt_AnimBP_C", "AnimNotify_LandEnter");

	Params::UBurt_AnimBP_C_AnimNotify_LandEnter_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Burt_AnimBP.Burt_AnimBP_C.ExecuteUbergraph_Burt_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet___FloatProperty_3_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBurt_AnimBP_C::ExecuteUbergraph_Burt_AnimBP(int32 EntryPoint, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_3_ImplicitCast)
{
	static auto Func = Class->GetFunction("Burt_AnimBP_C", "ExecuteUbergraph_Burt_AnimBP");

	Params::UBurt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_StructMemberSet___FloatProperty_3_ImplicitCast = K2Node_StructMemberSet___FloatProperty_3_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
