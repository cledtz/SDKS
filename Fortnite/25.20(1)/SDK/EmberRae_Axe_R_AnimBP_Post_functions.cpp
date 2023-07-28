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


// Function EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UEmberRae_Axe_R_AnimBP_Post_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("EmberRae_Axe_R_AnimBP_Post_C", "AnimGraph");

	Params::UEmberRae_Axe_R_AnimBP_Post_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UEmberRae_Axe_R_AnimBP_Post_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("EmberRae_Axe_R_AnimBP_Post_C", "BlueprintInitializeAnimation");

	Params::UEmberRae_Axe_R_AnimBP_Post_C_BlueprintInitializeAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmberRae_Axe_R_AnimBP_Post_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("EmberRae_Axe_R_AnimBP_Post_C", "BlueprintUpdateAnimation");

	Params::UEmberRae_Axe_R_AnimBP_Post_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmberRae_Axe_R_AnimBP_Post_C::ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput, float CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast_2, double CallFunc_MapRangeClamped_Value_ImplicitCast_3, double CallFunc_MapRangeClamped_Value_ImplicitCast_4)
{
	static auto Func = Class->GetFunction("EmberRae_Axe_R_AnimBP_Post_C", "ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post");

	Params::UEmberRae_Axe_R_AnimBP_Post_C_ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput = CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput;
	Parms.CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput = CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue = CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_2 = CallFunc_MapRangeClamped_Value_ImplicitCast_2;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_3 = CallFunc_MapRangeClamped_Value_ImplicitCast_3;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_4 = CallFunc_MapRangeClamped_Value_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
