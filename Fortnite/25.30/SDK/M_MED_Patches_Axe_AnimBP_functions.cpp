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


// Function M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_Patches_Axe_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("M_MED_Patches_Axe_AnimBP_C", "AnimGraph");

	Params::UM_MED_Patches_Axe_AnimBP_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Patches_Axe_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("M_MED_Patches_Axe_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UM_MED_Patches_Axe_AnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.ExecuteUbergraph_M_MED_Patches_Axe_AnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRBANParamsStruct           Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Gravity_Override_State_Function_GravityOverride         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gravity_Override_State_Function_CurrentStateOut         (ZeroConstructor, HasGetValueTypeHash)
// struct FGravityOverrideSettingStructCallFunc_Gravity_Override_State_Function_GravityOverrideSettingsOut(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRBANSettingStruct          CallFunc_Gravity_Override_State_Function_RBAN_SettingsOut        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Patches_Axe_AnimBP_C::ExecuteUbergraph_M_MED_Patches_Axe_AnimBP(int32 EntryPoint, const struct FRBANParamsStruct& Temp_struct_Variable, float K2Node_Event_DeltaTimeX, double CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_Gravity_Override_State_Function_GravityOverride, const class FString& CallFunc_Gravity_Override_State_Function_CurrentStateOut, const struct FGravityOverrideSettingStruct& CallFunc_Gravity_Override_State_Function_GravityOverrideSettingsOut, const struct FRBANSettingStruct& CallFunc_Gravity_Override_State_Function_RBAN_SettingsOut)
{
	static auto Func = Class->GetFunction("M_MED_Patches_Axe_AnimBP_C", "ExecuteUbergraph_M_MED_Patches_Axe_AnimBP");

	Params::UM_MED_Patches_Axe_AnimBP_C_ExecuteUbergraph_M_MED_Patches_Axe_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Gravity_Override_State_Function_GravityOverride = CallFunc_Gravity_Override_State_Function_GravityOverride;
	Parms.CallFunc_Gravity_Override_State_Function_CurrentStateOut = CallFunc_Gravity_Override_State_Function_CurrentStateOut;
	Parms.CallFunc_Gravity_Override_State_Function_GravityOverrideSettingsOut = CallFunc_Gravity_Override_State_Function_GravityOverrideSettingsOut;
	Parms.CallFunc_Gravity_Override_State_Function_RBAN_SettingsOut = CallFunc_Gravity_Override_State_Function_RBAN_SettingsOut;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
