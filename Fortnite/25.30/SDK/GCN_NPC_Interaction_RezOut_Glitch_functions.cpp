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


// Function GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.Spawn Dissolve VFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_NPC_Interaction_RezOut_Glitch_C::Spawn_Dissolve_VFX()
{
	static auto Func = Class->GetFunction("GCN_NPC_Interaction_RezOut_Glitch_C", "Spawn Dissolve VFX");

	Params::UGCN_NPC_Interaction_RezOut_Glitch_C_Spawn_Dissolve_VFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGCN_NPC_Interaction_RezOut_Glitch_C::ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("GCN_NPC_Interaction_RezOut_Glitch_C", "ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch");

	Params::UGCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
