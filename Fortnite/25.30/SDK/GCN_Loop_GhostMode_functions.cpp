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


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.Highlight Lerp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              Highlight                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              K2Node_MakeStruct_PawnHighlight                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerp_Alpha_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Priority_28_E2E1B5344846E187B9C11B863A7F0698_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_Loop_GhostMode_C::Highlight_Lerp(double Alpha, struct FPawnHighlight* Highlight, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FPawnHighlight& K2Node_MakeStruct_PawnHighlight, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_1, float K2Node_MakeStruct_Priority_28_E2E1B5344846E187B9C11B863A7F0698_ImplicitCast, float K2Node_MakeStruct_FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D_ImplicitCast, float K2Node_MakeStruct_FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92_ImplicitCast)
{
	static auto Func = Class->GetFunction("GCN_Loop_GhostMode_C", "Highlight Lerp");

	Params::UGCN_Loop_GhostMode_C_Highlight_Lerp_Params Parms;

	Parms.Alpha = Alpha;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.K2Node_MakeStruct_PawnHighlight = K2Node_MakeStruct_PawnHighlight;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast = CallFunc_LinearColorLerp_Alpha_ImplicitCast;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast_1 = CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;
	Parms.K2Node_MakeStruct_Priority_28_E2E1B5344846E187B9C11B863A7F0698_ImplicitCast = K2Node_MakeStruct_Priority_28_E2E1B5344846E187B9C11B863A7F0698_ImplicitCast;
	Parms.K2Node_MakeStruct_FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D_ImplicitCast = K2Node_MakeStruct_FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D_ImplicitCast;
	Parms.K2Node_MakeStruct_FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92_ImplicitCast = K2Node_MakeStruct_FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Highlight != nullptr)
		*Highlight = Parms.Highlight;

}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UGCN_Loop_GhostMode_C::FadeMaterialsTL__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCN_Loop_GhostMode_C", "FadeMaterialsTL__FinishedFunc");

	Params::UGCN_Loop_GhostMode_C_FadeMaterialsTL__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UGCN_Loop_GhostMode_C::FadeMaterialsTL__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCN_Loop_GhostMode_C", "FadeMaterialsTL__UpdateFunc");

	Params::UGCN_Loop_GhostMode_C_FadeMaterialsTL__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGCN_Loop_GhostMode_C::OnLoopingStart(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static auto Func = Class->GetFunction("GCN_Loop_GhostMode_C", "OnLoopingStart");

	Params::UGCN_Loop_GhostMode_C_OnLoopingStart_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCN_Loop_GhostMode_C::OnRemoval(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCN_Loop_GhostMode_C", "OnRemoval");

	Params::UGCN_Loop_GhostMode_C_OnRemoval_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_Loop_GhostMode_C::FadeMaterialsIn()
{
	static auto Func = Class->GetFunction("GCN_Loop_GhostMode_C", "FadeMaterialsIn");

	Params::UGCN_Loop_GhostMode_C_FadeMaterialsIn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_Loop_GhostMode_C::FadeMaterialsOut()
{
	static auto Func = Class->GetFunction("GCN_Loop_GhostMode_C", "FadeMaterialsOut");

	Params::UGCN_Loop_GhostMode_C_FadeMaterialsOut_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.ExecuteUbergraph_GCN_Loop_GhostMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_MyTarget_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_1                                        (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents_1                                (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_1                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGameplayCueParameters_NormalizedMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGameplayCueParameters_RawMagnitude                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_BreakGameplayCueParameters_EffectContext                ()
// struct FGameplayTag                CallFunc_BreakGameplayCueParameters_MatchedTagName               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_BreakGameplayCueParameters_OriginalTag                  (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_BreakGameplayCueParameters_AggregatedSourceTags         ()
// struct FGameplayTagContainer       CallFunc_BreakGameplayCueParameters_AggregatedTargetTags         ()
// struct FVector                     CallFunc_BreakGameplayCueParameters_Location                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakGameplayCueParameters_Normal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BreakGameplayCueParameters_Instigator                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BreakGameplayCueParameters_EffectCauser                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BreakGameplayCueParameters_SourceObject                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakGameplayCueParameters_PhysicalMaterial             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGameplayCueParameters_GameplayEffectLevel          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGameplayCueParameters_AbilityLevel                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_BreakGameplayCueParameters_TargetAttachComponent        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UPawnHighlight_Interface_C>K2Node_DynamicCast_AsPawn_Highlight_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              CallFunc_Highlight_Lerp_Highlight                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              CallFunc_Highlight_Lerp_Highlight_1                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Highlight_Lerp_Alpha_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_Loop_GhostMode_C::ExecuteUbergraph_GCN_Loop_GhostMode(int32 EntryPoint, class UActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class UActor* CallFunc_BreakGameplayCueParameters_Instigator, class UActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class UPawnHighlight_Interface_C> K2Node_DynamicCast_AsPawn_Highlight_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FPawnHighlight& CallFunc_Highlight_Lerp_Highlight, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FPawnHighlight& CallFunc_Highlight_Lerp_Highlight_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_Highlight_Lerp_Alpha_ImplicitCast)
{
	static auto Func = Class->GetFunction("GCN_Loop_GhostMode_C", "ExecuteUbergraph_GCN_Loop_GhostMode");

	Params::UGCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget_1 = K2Node_Event_MyTarget_1;
	Parms.K2Node_Event_Parameters_1 = K2Node_Event_Parameters_1;
	Parms.K2Node_Event_ParticleComponents_1 = K2Node_Event_ParticleComponents_1;
	Parms.K2Node_Event_AudioComponents_1 = K2Node_Event_AudioComponents_1;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.CallFunc_BreakGameplayCueParameters_NormalizedMagnitude = CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_RawMagnitude = CallFunc_BreakGameplayCueParameters_RawMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_EffectContext = CallFunc_BreakGameplayCueParameters_EffectContext;
	Parms.CallFunc_BreakGameplayCueParameters_MatchedTagName = CallFunc_BreakGameplayCueParameters_MatchedTagName;
	Parms.CallFunc_BreakGameplayCueParameters_OriginalTag = CallFunc_BreakGameplayCueParameters_OriginalTag;
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedSourceTags = CallFunc_BreakGameplayCueParameters_AggregatedSourceTags;
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedTargetTags = CallFunc_BreakGameplayCueParameters_AggregatedTargetTags;
	Parms.CallFunc_BreakGameplayCueParameters_Location = CallFunc_BreakGameplayCueParameters_Location;
	Parms.CallFunc_BreakGameplayCueParameters_Normal = CallFunc_BreakGameplayCueParameters_Normal;
	Parms.CallFunc_BreakGameplayCueParameters_Instigator = CallFunc_BreakGameplayCueParameters_Instigator;
	Parms.CallFunc_BreakGameplayCueParameters_EffectCauser = CallFunc_BreakGameplayCueParameters_EffectCauser;
	Parms.CallFunc_BreakGameplayCueParameters_SourceObject = CallFunc_BreakGameplayCueParameters_SourceObject;
	Parms.CallFunc_BreakGameplayCueParameters_PhysicalMaterial = CallFunc_BreakGameplayCueParameters_PhysicalMaterial;
	Parms.CallFunc_BreakGameplayCueParameters_GameplayEffectLevel = CallFunc_BreakGameplayCueParameters_GameplayEffectLevel;
	Parms.CallFunc_BreakGameplayCueParameters_AbilityLevel = CallFunc_BreakGameplayCueParameters_AbilityLevel;
	Parms.CallFunc_BreakGameplayCueParameters_TargetAttachComponent = CallFunc_BreakGameplayCueParameters_TargetAttachComponent;
	Parms.CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy = CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn_Highlight_Interface = K2Node_DynamicCast_AsPawn_Highlight_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Highlight_Lerp_Highlight = CallFunc_Highlight_Lerp_Highlight;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Highlight_Lerp_Highlight_1 = CallFunc_Highlight_Lerp_Highlight_1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Highlight_Lerp_Alpha_ImplicitCast = CallFunc_Highlight_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
