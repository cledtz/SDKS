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


// Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

bool UGCN_BurtCharging_Player_Latent_C::OnExecute(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_BurtCharging_Player_Latent_C", "OnExecute");

	Params::UGCN_BurtCharging_Player_Latent_C_OnExecute_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteBoostLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_BurtCharging_Player_Latent_C::ExecuteBoostLogic()
{
	static auto Func = Class->GetFunction("GCN_BurtCharging_Player_Latent_C", "ExecuteBoostLogic");

	Params::UGCN_BurtCharging_Player_Latent_C_ExecuteBoostLogic_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.BoostEndEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_BurtCharging_Player_Latent_C::BoostEndEvent()
{
	static auto Func = Class->GetFunction("GCN_BurtCharging_Player_Latent_C", "BoostEndEvent");

	Params::UGCN_BurtCharging_Player_Latent_C_BoostEndEvent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteUbergraph_GCN_BurtCharging_Player_Latent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UCameraLensEffectInterface>CallFunc_AddGenericCameraLensEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_GetPrimaryParticleComponent_ReturnValue                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_BurtCharging_Player_Latent_C::ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class UCameraLensEffectInterface> CallFunc_AddGenericCameraLensEffect_ReturnValue, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_BurtCharging_Player_Latent_C", "ExecuteUbergraph_GCN_BurtCharging_Player_Latent");

	Params::UGCN_BurtCharging_Player_Latent_C_ExecuteUbergraph_GCN_BurtCharging_Player_Latent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddGenericCameraLensEffect_ReturnValue = CallFunc_AddGenericCameraLensEffect_ReturnValue;
	Parms.CallFunc_GetPrimaryParticleComponent_ReturnValue = CallFunc_GetPrimaryParticleComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
