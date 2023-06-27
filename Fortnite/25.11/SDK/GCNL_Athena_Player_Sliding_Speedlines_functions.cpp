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


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.RefreshDustStateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Speedlines_C::RefreshDustStateTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "RefreshDustStateTimer");

	Params::AGCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer_Params Parms;

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.OnLoopingStartGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_Athena_Player_Sliding_Speedlines_C::OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "OnLoopingStartGeneric");

	Params::AGCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.OnRemovalGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Speedlines_C::OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "OnRemovalGeneric");

	Params::AGCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.On View Target Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OldViewTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewViewTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Speedlines_C::On_View_Target_Changed(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "On View Target Changed");

	Params::AGCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.OldViewTarget = OldViewTarget;
	Parms.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.UpdateDustState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Athena_Player_Sliding_Speedlines_C::UpdateDustState()
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "UpdateDustState");

	Params::AGCNL_Athena_Player_Sliding_Speedlines_C_UpdateDustState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_1                                        (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents_1                                (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_1                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UFXSystemComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_CustomEvent_PlayerController                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OldViewTarget                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_NewViewTarget                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Speedlines_C::ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UFXSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UFortMovementComp_Character* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AFortPlayerController* K2Node_CustomEvent_PlayerController, class AActor* K2Node_CustomEvent_OldViewTarget, class AActor* K2Node_CustomEvent_NewViewTarget, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyViewed_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Speedlines_C", "ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines");

	Params::AGCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyTarget_1 = K2Node_Event_MyTarget_1;
	Parms.K2Node_Event_Parameters_1 = K2Node_Event_Parameters_1;
	Parms.K2Node_Event_ParticleComponents_1 = K2Node_Event_ParticleComponents_1;
	Parms.K2Node_Event_AudioComponents_1 = K2Node_Event_AudioComponents_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.K2Node_CustomEvent_OldViewTarget = K2Node_CustomEvent_OldViewTarget;
	Parms.K2Node_CustomEvent_NewViewTarget = K2Node_CustomEvent_NewViewTarget;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
