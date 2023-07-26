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


// Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.OnLoopingStartGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C::OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_TacticalSprint_EnergyDrain_C", "OnLoopingStartGeneric");

	Params::AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C_OnLoopingStartGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.UpdateFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C::UpdateFX()
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_TacticalSprint_EnergyDrain_C", "UpdateFX");

	Params::AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C_UpdateFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.OnRemovalGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C::OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_TacticalSprint_EnergyDrain_C", "OnRemovalGeneric");

	Params::AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C_OnRemovalGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_EnergyDrain
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_1                                        (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents_1                                (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_1                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTacticalSprintEnergyComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentEnergyPercentage_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SetFloatParameter_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentEnergyPercentage_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InFloat_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C::ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_EnergyDrain(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UTacticalSprintEnergyComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetCurrentEnergyPercentage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAudioComponent* CallFunc_Array_Get_Item, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double K2Node_VariableSet_CurrentEnergyPercentage_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_TacticalSprint_EnergyDrain_C", "ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_EnergyDrain");

	Params::AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C_ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_EnergyDrain_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_MyTarget_1 = K2Node_Event_MyTarget_1;
	Parms.K2Node_Event_Parameters_1 = K2Node_Event_Parameters_1;
	Parms.K2Node_Event_ParticleComponents_1 = K2Node_Event_ParticleComponents_1;
	Parms.K2Node_Event_AudioComponents_1 = K2Node_Event_AudioComponents_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCurrentEnergyPercentage_ReturnValue = CallFunc_GetCurrentEnergyPercentage_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetFloatParameter_self_CastInput = CallFunc_SetFloatParameter_self_CastInput;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.K2Node_VariableSet_CurrentEnergyPercentage_ImplicitCast = K2Node_VariableSet_CurrentEnergyPercentage_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_InFloat_ImplicitCast = CallFunc_SetFloatParameter_InFloat_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
