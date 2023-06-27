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


// Function GCN_Burst_LandOnRail.GCN_Burst_LandOnRail_C.OnBurstGeneric
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GrindingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// struct FSoundLibrarySimpleContextSettingsK2Node_MakeStruct_SoundLibrarySimpleContextSettings              (NoDestructor, ContainsInstancedReference)
// struct FSoundLibraryPlayResult     CallFunc_PlaySoundSimple_ReturnValue                             (ContainsInstancedReference)

void UGCN_Burst_LandOnRail_C::OnBurstGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, bool Temp_bool_Variable, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UBP_GrindingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, const struct FSoundLibrarySimpleContextSettings& K2Node_MakeStruct_SoundLibrarySimpleContextSettings, const struct FSoundLibraryPlayResult& CallFunc_PlaySoundSimple_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_Burst_LandOnRail_C", "OnBurstGeneric");

	Params::UGCN_Burst_LandOnRail_C_OnBurstGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SoundLibrarySimpleContextSettings = K2Node_MakeStruct_SoundLibrarySimpleContextSettings;
	Parms.CallFunc_PlaySoundSimple_ReturnValue = CallFunc_PlaySoundSimple_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
