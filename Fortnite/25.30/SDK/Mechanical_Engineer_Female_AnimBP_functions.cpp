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


// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMechanical_Engineer_Female_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Mechanical_Engineer_Female_AnimBP_C", "AnimGraph");

	Params::UMechanical_Engineer_Female_AnimBP_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMechanical_Engineer_Female_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("Mechanical_Engineer_Female_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UMechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UMechanical_Engineer_Female_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("Mechanical_Engineer_Female_AnimBP_C", "BlueprintInitializeAnimation");

	Params::UMechanical_Engineer_Female_AnimBP_C_BlueprintInitializeAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMechanical_Engineer_Female_AnimBP_C::ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput, float CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast)
{
	static auto Func = Class->GetFunction("Mechanical_Engineer_Female_AnimBP_C", "ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP");

	Params::UMechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue = CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput = CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput;
	Parms.CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput = CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
