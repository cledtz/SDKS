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


// Function Grandma_AnimBP.Grandma_AnimBP_C.Fauna Jump
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Fauna_Jump                                                       (Parm, OutParm, NoDestructor)

void UGrandma_AnimBP_C::Fauna_Jump(struct FPoseLink* Fauna_Jump)
{
	static auto Func = Class->GetFunction("Grandma_AnimBP_C", "Fauna Jump");

	Params::UGrandma_AnimBP_C_Fauna_Jump_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Jump != nullptr)
		*Fauna_Jump = Parms.Fauna_Jump;

}


// Function Grandma_AnimBP.Grandma_AnimBP_C.Fauna IdleTurn
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_IdleTurn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Fauna_IdleTurn                                                   (Parm, OutParm, NoDestructor)

void UGrandma_AnimBP_C::Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn)
{
	static auto Func = Class->GetFunction("Grandma_AnimBP_C", "Fauna IdleTurn");

	Params::UGrandma_AnimBP_C_Fauna_IdleTurn_Params Parms;

	Parms.InPose_IdleTurn = InPose_IdleTurn;

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_IdleTurn != nullptr)
		*Fauna_IdleTurn = Parms.Fauna_IdleTurn;

}


// Function Grandma_AnimBP.Grandma_AnimBP_C.Fauna Idle
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_Idle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Fauna_Idle                                                       (Parm, OutParm, NoDestructor)

void UGrandma_AnimBP_C::Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle)
{
	static auto Func = Class->GetFunction("Grandma_AnimBP_C", "Fauna Idle");

	Params::UGrandma_AnimBP_C_Fauna_Idle_Params Parms;

	Parms.InPose_Idle = InPose_Idle;

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Idle != nullptr)
		*Fauna_Idle = Parms.Fauna_Idle;

}


// Function Grandma_AnimBP.Grandma_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGrandma_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Grandma_AnimBP_C", "AnimGraph");

	Params::UGrandma_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_FallExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrandma_AnimBP_C::AnimNotify_FallExit()
{
	static auto Func = Class->GetFunction("Grandma_AnimBP_C", "AnimNotify_FallExit");

	Params::UGrandma_AnimBP_C_AnimNotify_FallExit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandAddExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrandma_AnimBP_C::AnimNotify_LandAddExit()
{
	static auto Func = Class->GetFunction("Grandma_AnimBP_C", "AnimNotify_LandAddExit");

	Params::UGrandma_AnimBP_C_AnimNotify_LandAddExit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrandma_AnimBP_C::AnimNotify_LandEnter()
{
	static auto Func = Class->GetFunction("Grandma_AnimBP_C", "AnimNotify_LandEnter");

	Params::UGrandma_AnimBP_C_AnimNotify_LandEnter_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Grandma_AnimBP.Grandma_AnimBP_C.ExecuteUbergraph_Grandma_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrandma_AnimBP_C::ExecuteUbergraph_Grandma_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Grandma_AnimBP_C", "ExecuteUbergraph_Grandma_AnimBP");

	Params::UGrandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
