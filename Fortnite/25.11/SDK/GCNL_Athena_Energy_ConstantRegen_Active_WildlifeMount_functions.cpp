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


// Function GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Added_7482F31A49360978B87F339D76FC2BB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::Added_7482F31A49360978B87F339D76FC2BB7()
{
	static auto Func = Class->GetFunction("GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C", "Added_7482F31A49360978B87F339D76FC2BB7");

	Params::AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_Added_7482F31A49360978B87F339D76FC2BB7_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Removed_AD34CCD44592FD2F05DB47BDF9413ACC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::Removed_AD34CCD44592FD2F05DB47BDF9413ACC()
{
	static auto Func = Class->GetFunction("GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C", "Removed_AD34CCD44592FD2F05DB47BDF9413ACC");

	Params::AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_Removed_AD34CCD44592FD2F05DB47BDF9413ACC_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.OnApplicationGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::OnApplicationGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C", "OnApplicationGeneric");

	Params::AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C", "ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount");

	Params::AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue = CallFunc_WaitGameplayTagAddToActor_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue = CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
