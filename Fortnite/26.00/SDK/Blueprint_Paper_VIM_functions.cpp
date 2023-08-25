#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
// (None)

class UClass* UBlueprint_Paper_VIM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Blueprint_Paper_VIM_C");

	return Clss;
}


// Blueprint_Paper_VIM_C Blueprint_Paper_VIM.Default__Blueprint_Paper_VIM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlueprint_Paper_VIM_C* UBlueprint_Paper_VIM_C::GetDefaultObj()
{
	static class UBlueprint_Paper_VIM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueprint_Paper_VIM_C*>(UBlueprint_Paper_VIM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBlueprint_Paper_VIM_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blueprint_Paper_VIM_C", "AnimGraph");

	Params::UBlueprint_Paper_VIM_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B
// (BlueprintEvent)
// Parameters:

void UBlueprint_Paper_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blueprint_Paper_VIM_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B");

	Params::UBlueprint_Paper_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149
// (BlueprintEvent)
// Parameters:

void UBlueprint_Paper_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blueprint_Paper_VIM_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149");

	Params::UBlueprint_Paper_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73
// (BlueprintEvent)
// Parameters:

void UBlueprint_Paper_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blueprint_Paper_VIM_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73");

	Params::UBlueprint_Paper_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B
// (BlueprintEvent)
// Parameters:

void UBlueprint_Paper_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blueprint_Paper_VIM_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B");

	Params::UBlueprint_Paper_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlueprint_Paper_VIM_C::ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint, double CallFunc_Add_DoubleDouble_ReturnValue, float K2Node_StructMemberSet_Alpha_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_2, float K2Node_StructMemberSet_Alpha_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blueprint_Paper_VIM_C", "ExecuteUbergraph_Blueprint_Paper_VIM");

	Params::UBlueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast_1 = K2Node_StructMemberSet_Alpha_ImplicitCast_1;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast_2 = K2Node_StructMemberSet_Alpha_ImplicitCast_2;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast_3 = K2Node_StructMemberSet_Alpha_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


