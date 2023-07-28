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


// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.SetJetpackAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_3                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SpawnSoundAttached_StartTime_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCL_BoostJumpPack_Hovering_Infinite_C::SetJetpackAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USoundBase* K2Node_Select_Default, double CallFunc_RandomFloatInRange_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "SetJetpackAudioEnabled");

	Params::UGCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled_Params Parms;

	Parms.Enabled = Enabled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_2 = CallFunc_K2_GetRootComponent_ReturnValue_2;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_3 = CallFunc_K2_GetRootComponent_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_3 = CallFunc_SpawnSoundAttached_ReturnValue_3;
	Parms.CallFunc_SpawnSoundAttached_StartTime_ImplicitCast = CallFunc_SpawnSoundAttached_StartTime_ImplicitCast;
	Parms.CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1 = CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnRemove_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGCL_BoostJumpPack_Hovering_Infinite_C::OnRemove(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_OnRemove_ReturnValue)
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "OnRemove");

	Params::UGCL_BoostJumpPack_Hovering_Infinite_C_OnRemove_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_OnRemove_ReturnValue = CallFunc_OnRemove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXSystemAttached_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

bool UGCL_BoostJumpPack_Hovering_Infinite_C::OnActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "OnActive");

	Params::UGCL_BoostJumpPack_Hovering_Infinite_C_OnActive_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnActive_ReturnValue = CallFunc_OnActive_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnFXSystemAttached_ReturnValue = CallFunc_SpawnFXSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.On Pawn Landed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGCL_BoostJumpPack_Hovering_Infinite_C::On_Pawn_Landed(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "On Pawn Landed");

	Params::UGCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCL_BoostJumpPack_Hovering_Infinite_C::ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite(int32 EntryPoint, const struct FHitResult& K2Node_CustomEvent_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_Hovering_Infinite_C", "ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite");

	Params::UGCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
