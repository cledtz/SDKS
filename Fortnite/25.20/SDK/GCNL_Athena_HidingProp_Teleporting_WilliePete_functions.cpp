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


// Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGCNL_Athena_HidingProp_Teleporting_WilliePete_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCNL_Athena_HidingProp_Teleporting_WilliePete_C", "Timeline_0__FinishedFunc");

	Params::AGCNL_Athena_HidingProp_Teleporting_WilliePete_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGCNL_Athena_HidingProp_Teleporting_WilliePete_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCNL_Athena_HidingProp_Teleporting_WilliePete_C", "Timeline_0__UpdateFunc");

	Params::AGCNL_Athena_HidingProp_Teleporting_WilliePete_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.Timeline_0__DoFlash__EventFunc
// (BlueprintEvent)
// Parameters:

void AGCNL_Athena_HidingProp_Teleporting_WilliePete_C::Timeline_0__DoFlash__EventFunc()
{
	static auto Func = Class->GetFunction("GCNL_Athena_HidingProp_Teleporting_WilliePete_C", "Timeline_0__DoFlash__EventFunc");

	Params::AGCNL_Athena_HidingProp_Teleporting_WilliePete_C_Timeline_0__DoFlash__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_Athena_HidingProp_Teleporting_WilliePete_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static auto Func = Class->GetFunction("GCNL_Athena_HidingProp_Teleporting_WilliePete_C", "OnLoopingStart");

	Params::AGCNL_Athena_HidingProp_Teleporting_WilliePete_C_OnLoopingStart_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_HidingProp_Teleporting_WilliePete_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCNL_Athena_HidingProp_Teleporting_WilliePete_C", "OnRemoval");

	Params::AGCNL_Athena_HidingProp_Teleporting_WilliePete_C_OnRemoval_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting_WilliePete
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_1                                        (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents_1                                (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_1                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SpawnGenericCameraLensEffect_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_HidingProp_Teleporting_WilliePete_C::ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting_WilliePete(int32 EntryPoint, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, FInterfaceProperty_ CallFunc_SpawnGenericCameraLensEffect_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UParticleSystemComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("GCNL_Athena_HidingProp_Teleporting_WilliePete_C", "ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting_WilliePete");

	Params::AGCNL_Athena_HidingProp_Teleporting_WilliePete_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting_WilliePete_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_Event_MyTarget_1 = K2Node_Event_MyTarget_1;
	Parms.K2Node_Event_Parameters_1 = K2Node_Event_Parameters_1;
	Parms.K2Node_Event_ParticleComponents_1 = K2Node_Event_ParticleComponents_1;
	Parms.K2Node_Event_AudioComponents_1 = K2Node_Event_AudioComponents_1;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SpawnGenericCameraLensEffect_ReturnValue = CallFunc_SpawnGenericCameraLensEffect_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
