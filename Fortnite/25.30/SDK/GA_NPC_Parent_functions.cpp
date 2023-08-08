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


// Function GA_NPC_Parent.GA_NPC_Parent_C.FilterHitActors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActor*>              HitActors                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_NPC_Parent_C::FilterHitActors(TArray<class UActor*>& HitActors)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "FilterHitActors");

	Params::UGA_NPC_Parent_C_FilterHitActors_Params Parms;

	Parms.HitActors = HitActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ResetRotationRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_ResetRotationRate(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ResetRotationRate");

	Params::UGA_NPC_Parent_C_NPC_ResetRotationRate_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC OverrideRotationRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat              RotationRate                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_OverrideRotationRate(const struct FScalableFloat& RotationRate, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC OverrideRotationRate");

	Params::UGA_NPC_Parent_C_NPC_OverrideRotationRate_Params Parms;

	Parms.RotationRate = RotationRate;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC GetGoalActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UGA_NPC_Parent_C::NPC_GetGoalActor(class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC GetGoalActor");

	Params::UGA_NPC_Parent_C_NPC_GetGoalActor_Params Parms;

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityTargetIsBuildingWeAreDestroyingToNavigate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsNavigationBuildingWeAreDestroying                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuildingActor*              BuildingWeAreDestroying                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             HealthOfBuildingWeAreDestroying                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_NPC_GetGoalActor_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_HealthOfBuildingWeAreDestroying_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_AbilityTargetIsBuildingWeAreDestroyingToNavigate(bool* IsNavigationBuildingWeAreDestroying, class UBuildingActor** BuildingWeAreDestroying, double* HealthOfBuildingWeAreDestroying, class UObject* CallFunc_NPC_GetGoalActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealth_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double K2Node_FunctionResult_HealthOfBuildingWeAreDestroying_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AbilityTargetIsBuildingWeAreDestroyingToNavigate");

	Params::UGA_NPC_Parent_C_NPC_AbilityTargetIsBuildingWeAreDestroyingToNavigate_Params Parms;

	Parms.CallFunc_NPC_GetGoalActor_ReturnValue = CallFunc_NPC_GetGoalActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue = CallFunc_GetAIAbilityTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_FunctionResult_HealthOfBuildingWeAreDestroying_ImplicitCast = K2Node_FunctionResult_HealthOfBuildingWeAreDestroying_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNavigationBuildingWeAreDestroying != nullptr)
		*IsNavigationBuildingWeAreDestroying = Parms.IsNavigationBuildingWeAreDestroying;

	if (BuildingWeAreDestroying != nullptr)
		*BuildingWeAreDestroying = Parms.BuildingWeAreDestroying;

	if (HealthOfBuildingWeAreDestroying != nullptr)
		*HealthOfBuildingWeAreDestroying = Parms.HealthOfBuildingWeAreDestroying;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayEffectWithMMRScaling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      GameplayEffectClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              AvgMMR                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ApplyGeTo                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Object_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAvgPlayerMMR_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_ApplyGameplayEffectWithMMRScaling(class UClass* GameplayEffectClass, class UActor* Actor, int32 AvgMMR, class UObject* ApplyGeTo, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const class FString& CallFunc_BuildString_Object_ReturnValue, int32 CallFunc_GetAvgPlayerMMR_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, float CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast, float CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ApplyGameplayEffectWithMMRScaling");

	Params::UGA_NPC_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling_Params Parms;

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Actor = Actor;
	Parms.AvgMMR = AvgMMR;
	Parms.ApplyGeTo = ApplyGeTo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetGameStateAthena_ReturnValue = CallFunc_GetGameStateAthena_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_BuildString_Object_ReturnValue = CallFunc_BuildString_Object_ReturnValue;
	Parms.CallFunc_GetAvgPlayerMMR_ReturnValue = CallFunc_GetAvgPlayerMMR_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast = CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast_1 = CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayAbilityCooldownWithMMRScaling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_NPC_Parent_C::NPC_ApplyGameplayAbilityCooldownWithMMRScaling()
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ApplyGameplayAbilityCooldownWithMMRScaling");

	Params::UGA_NPC_Parent_C_NPC_ApplyGameplayAbilityCooldownWithMMRScaling_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ScalableFloatIsValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat              ScalableFloat                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_ScalableFloatIsValid(struct FScalableFloat& ScalableFloat, bool* Valid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ScalableFloatIsValid");

	Params::UGA_NPC_Parent_C_NPC_ScalableFloatIsValid_Params Parms;

	Parms.ScalableFloat = ScalableFloat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC GetScalableFloatHotfixValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat              ScalableFloatHotfix                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             AtLevel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AsBool                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AsIntRounded                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AsFloat                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_ScalableFloatIsValid_Valid                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_Level_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_AsFloat_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_AsFloat_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_GetScalableFloatHotfixValue(const struct FScalableFloat& ScalableFloatHotfix, double AtLevel, bool* AsBool, int32* AsIntRounded, double* AsFloat, bool CallFunc_NPC_ScalableFloatIsValid_Valid, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetValueAtLevel_Level_ImplicitCast, double K2Node_FunctionResult_AsFloat_ImplicitCast, double K2Node_FunctionResult_AsFloat_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC GetScalableFloatHotfixValue");

	Params::UGA_NPC_Parent_C_NPC_GetScalableFloatHotfixValue_Params Parms;

	Parms.ScalableFloatHotfix = ScalableFloatHotfix;
	Parms.AtLevel = AtLevel;
	Parms.CallFunc_NPC_ScalableFloatIsValid_Valid = CallFunc_NPC_ScalableFloatIsValid_Valid;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_Level_ImplicitCast = CallFunc_GetValueAtLevel_Level_ImplicitCast;
	Parms.K2Node_FunctionResult_AsFloat_ImplicitCast = K2Node_FunctionResult_AsFloat_ImplicitCast;
	Parms.K2Node_FunctionResult_AsFloat_ImplicitCast_1 = K2Node_FunctionResult_AsFloat_ImplicitCast_1;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBool != nullptr)
		*AsBool = Parms.AsBool;

	if (AsIntRounded != nullptr)
		*AsIntRounded = Parms.AsIntRounded;

	if (AsFloat != nullptr)
		*AsFloat = Parms.AsFloat;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC SetAlertLevelByAIAbilityTargetType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Option_B___If_false__use_Option_A_Variable             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Option_B___If_false__use_Option_A_Variable_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_SetAlertLevelByAIAbilityTargetType(bool Temp_bool_Variable, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool Temp_bool_Option_B___If_false__use_Option_A_Variable_1, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, enum class Enum_NPC_AlertLevel K2Node_Select_Default, enum class Enum_NPC_AlertLevel K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC SetAlertLevelByAIAbilityTargetType");

	Params::UGA_NPC_Parent_C_NPC_SetAlertLevelByAIAbilityTargetType_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Option_B___If_false__use_Option_A_Variable = Temp_bool_Option_B___If_false__use_Option_A_Variable;
	Parms.Temp_bool_Option_B___If_false__use_Option_A_Variable_1 = Temp_bool_Option_B___If_false__use_Option_A_Variable_1;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue = CallFunc_GetAIAbilityTarget_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC SetAlertLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     NPC_AlertLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPC_Pawn_Parent_C*          K2Node_DynamicCast_AsNPC_Pawn_Parent                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Name_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_SetAlertLevel(enum class Enum_NPC_AlertLevel NPC_AlertLevel, class FName Temp_name_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, enum class Enum_NPC_AlertLevel Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class FName K2Node_Select_Default, class UNPC_Pawn_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_BuildString_Name_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC SetAlertLevel");

	Params::UGA_NPC_Parent_C_NPC_SetAlertLevel_Params Parms;

	Parms.NPC_AlertLevel = NPC_AlertLevel;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsNPC_Pawn_Parent = K2Node_DynamicCast_AsNPC_Pawn_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BuildString_Name_ReturnValue = CallFunc_BuildString_Name_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC DoIntentionalFailedAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoIntentionalFailedAttack                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AboveTestForIntentionalFailedAttackPassed                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AboveTestPassed                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_DoIntentionalFailedAttack(bool* DoIntentionalFailedAttack, bool AboveTestForIntentionalFailedAttackPassed, bool AboveTestPassed, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue_1, class UFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC DoIntentionalFailedAttack");

	Params::UGA_NPC_Parent_C_NPC_DoIntentionalFailedAttack_Params Parms;

	Parms.AboveTestForIntentionalFailedAttackPassed = AboveTestForIntentionalFailedAttackPassed;
	Parms.AboveTestPassed = AboveTestPassed;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue = CallFunc_GetAIAbilityTarget_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue_1 = CallFunc_GetAIAbilityTarget_ReturnValue_1;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_1 = CallFunc_GetActivatingPawn_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DoIntentionalFailedAttack != nullptr)
		*DoIntentionalFailedAttack = Parms.DoIntentionalFailedAttack;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AttemptBuildFrustrationDueToMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       ()
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// bool                               CallFunc_IsTagQueryEmpty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_AttemptBuildFrustrationDueToMovement(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsTagQueryEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AttemptBuildFrustrationDueToMovement");

	Params::UGA_NPC_Parent_C_NPC_AttemptBuildFrustrationDueToMovement_Params Parms;

	Parms.Reason = Reason;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_IsTagQueryEmpty_ReturnValue = CallFunc_IsTagQueryEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AttemptBuildFrustrationDueToGoal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       ()
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// bool                               CallFunc_IsTagQueryEmpty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_AttemptBuildFrustrationDueToGoal(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsTagQueryEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AttemptBuildFrustrationDueToGoal");

	Params::UGA_NPC_Parent_C_NPC_AttemptBuildFrustrationDueToGoal_Params Parms;

	Parms.Reason = Reason;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_IsTagQueryEmpty_ReturnValue = CallFunc_IsTagQueryEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ClearFrustrationTagsForMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_ClearFrustrationTagsForMovement(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ClearFrustrationTagsForMovement");

	Params::UGA_NPC_Parent_C_NPC_ClearFrustrationTagsForMovement_Params Parms;

	Parms.Reason = Reason;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ClearFrustrationTagsForGoals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_ClearFrustrationTagsForGoals(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ClearFrustrationTagsForGoals");

	Params::UGA_NPC_Parent_C_NPC_ClearFrustrationTagsForGoals_Params Parms;

	Parms.Reason = Reason;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.DestroyBuilding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaSupplyDropBalloon*K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHeldObjectComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::DestroyBuilding(class UActor* BuildingActor, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsGameplayTagValid_ReturnValue, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, class UFortAthenaSupplyDropBalloon* K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue, class UFortHeldObjectComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool Temp_bool_Variable, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "DestroyBuilding");

	Params::UGA_NPC_Parent_C_DestroyBuilding_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon = K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC GenerateLaunchVelocityWithMinimumAngle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      ActorWeWantToLaunch                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Vehicle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LaunchVelocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      LaunchActor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               LaunchingVehicle                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsVehicle                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Double_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              K2Node_Select_Default                                            ()
// class FString                      CallFunc_BuildString_Double_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              K2Node_Select_Default_1                                          ()
// class FString                      CallFunc_BuildString_Bool_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              K2Node_Select_Default_2                                          ()
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BuildString_Double_InDouble_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_A_ImplicitCast                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_GenerateLaunchVelocityWithMinimumAngle(class UActor* ActorWeWantToLaunch, bool Vehicle, struct FVector* LaunchVelocity, class UActor** LaunchActor, bool* LaunchingVehicle, bool IsVehicle, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const class FString& CallFunc_BuildString_Double_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, const struct FScalableFloat& K2Node_Select_Default, const class FString& CallFunc_BuildString_Double_ReturnValue_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FScalableFloat& K2Node_Select_Default_1, const class FString& CallFunc_BuildString_Bool_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FScalableFloat& K2Node_Select_Default_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_BuildString_Double_InDouble_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Abs_A_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC GenerateLaunchVelocityWithMinimumAngle");

	Params::UGA_NPC_Parent_C_NPC_GenerateLaunchVelocityWithMinimumAngle_Params Parms;

	Parms.ActorWeWantToLaunch = ActorWeWantToLaunch;
	Parms.Vehicle = Vehicle;
	Parms.IsVehicle = IsVehicle;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BuildString_Double_ReturnValue = CallFunc_BuildString_Double_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BuildString_Double_ReturnValue_1 = CallFunc_BuildString_Double_ReturnValue_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BuildString_Bool_ReturnValue = CallFunc_BuildString_Bool_ReturnValue;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BuildString_Double_InDouble_ImplicitCast = CallFunc_BuildString_Double_InDouble_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (LaunchVelocity != nullptr)
		*LaunchVelocity = Parms.LaunchVelocity;

	if (LaunchActor != nullptr)
		*LaunchActor = Parms.LaunchActor;

	if (LaunchingVehicle != nullptr)
		*LaunchingVehicle = Parms.LaunchingVehicle;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NPC_PassAboveZ_ForIntentionalFailedAttack                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NPC_PassBelowZ                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NPC_PassAboveZ                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NPC_CanActivateAbility                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_NPC_Parent_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, bool NPC_PassAboveZ_ForIntentionalFailedAttack, bool NPC_PassBelowZ, bool NPC_PassAboveZ, bool NPC_CanActivateAbility, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_2, class UFortPawn* CallFunc_GetActivatingPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double CallFunc_Abs_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_3)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "K2_CanActivateAbility");

	Params::UGA_NPC_Parent_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.NPC_PassAboveZ_ForIntentionalFailedAttack = NPC_PassAboveZ_ForIntentionalFailedAttack;
	Parms.NPC_PassBelowZ = NPC_PassBelowZ;
	Parms.NPC_PassAboveZ = NPC_PassAboveZ;
	Parms.NPC_CanActivateAbility = NPC_CanActivateAbility;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue = CallFunc_GetAIAbilityTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue_1 = CallFunc_GetAIAbilityTarget_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_1 = CallFunc_GetActivatingPawn_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue_2 = CallFunc_GetAIAbilityTarget_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_2 = CallFunc_GetActivatingPawn_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_2 = CallFunc_Subtract_VectorVector_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_3 = CallFunc_Less_DoubleDouble_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC TryResetMovementUrgency
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_TryResetMovementUrgency(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC TryResetMovementUrgency");

	Params::UGA_NPC_Parent_C_NPC_TryResetMovementUrgency_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC TrySetMovementUrgency
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortMovementUrgency    MovementUrgency                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TryResetUrgencyIfInvalid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_TrySetMovementUrgency(enum class EFortMovementUrgency MovementUrgency, bool TryResetUrgencyIfInvalid, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC TrySetMovementUrgency");

	Params::UGA_NPC_Parent_C_NPC_TrySetMovementUrgency_Params Parms;

	Parms.MovementUrgency = MovementUrgency;
	Parms.TryResetUrgencyIfInvalid = TryResetUrgencyIfInvalid;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC EQS Results
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryRunMode        EQS_RunMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NumReturnedItemsIsImportant                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              ResultActors                                                     (Parm, OutParm)
// int32                              NumValidActorsGenerated                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ResultActorsSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             ResultLocations                                                  (Parm, OutParm)
// int32                              NumValidLocationsGenerated                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ResultLocationsSuccess                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*QueryInstanceOut                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatusOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NumReturnedItemsImportant                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RandomlyChosenIndexToReturnAsOurResult                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LastGoodIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ScoreThreshold                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BestScore                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryRunMode        RunMode                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             ResultLocationsFinal                                             (Edit, BlueprintVisible)
// int32                              NumResultLocationsGenerated                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             ResultLocationsGenerated                                         (Edit, BlueprintVisible)
// bool                               GeneratedLocations                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              ResultActorsFinal                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              NumResultActorsGenerated                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              ResultActorsGenerated                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               GeneratedActors                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatusVar                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*Query                                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetItemScore_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetItemScore_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetQueryResultsAsLocations_ResultLocations              (ReferenceParm)
// bool                               CallFunc_GetQueryResultsAsLocations_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              CallFunc_GetQueryResultsAsActors_ResultActors                    (ReferenceParm)
// bool                               CallFunc_GetQueryResultsAsActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BestScore_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_EQS_Results(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus, enum class EEnvQueryRunMode EQS_RunMode, bool NumReturnedItemsIsImportant, TArray<class UActor*>* ResultActors, int32* NumValidActorsGenerated, bool* ResultActorsSuccess, TArray<struct FVector>* ResultLocations, int32* NumValidLocationsGenerated, bool* ResultLocationsSuccess, class UEnvQueryInstanceBlueprintWrapper** QueryInstanceOut, enum class EEnvQueryStatus* QueryStatusOut, bool NumReturnedItemsImportant, int32 RandomlyChosenIndexToReturnAsOurResult, int32 LastGoodIndex, double ScoreThreshold, double BestScore, enum class EEnvQueryRunMode RunMode, const TArray<struct FVector>& ResultLocationsFinal, int32 NumResultLocationsGenerated, const TArray<struct FVector>& ResultLocationsGenerated, bool GeneratedLocations, const TArray<class UActor*>& ResultActorsFinal, int32 NumResultActorsGenerated, const TArray<class UActor*>& ResultActorsGenerated, bool GeneratedActors, enum class EEnvQueryStatus QueryStatusVar, class UEnvQueryInstanceBlueprintWrapper* Query, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Array_Get_Item, class UActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetItemScore_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_GetItemScore_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_Array_Get_Item_2, class UActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, TArray<class UActor*>& CallFunc_GetQueryResultsAsActors_ResultActors, bool CallFunc_GetQueryResultsAsActors_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_BestScore_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC EQS Results");

	Params::UGA_NPC_Parent_C_NPC_EQS_Results_Params Parms;

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;
	Parms.EQS_RunMode = EQS_RunMode;
	Parms.NumReturnedItemsIsImportant = NumReturnedItemsIsImportant;
	Parms.NumReturnedItemsImportant = NumReturnedItemsImportant;
	Parms.RandomlyChosenIndexToReturnAsOurResult = RandomlyChosenIndexToReturnAsOurResult;
	Parms.LastGoodIndex = LastGoodIndex;
	Parms.ScoreThreshold = ScoreThreshold;
	Parms.BestScore = BestScore;
	Parms.RunMode = RunMode;
	Parms.ResultLocationsFinal = ResultLocationsFinal;
	Parms.NumResultLocationsGenerated = NumResultLocationsGenerated;
	Parms.ResultLocationsGenerated = ResultLocationsGenerated;
	Parms.GeneratedLocations = GeneratedLocations;
	Parms.ResultActorsFinal = ResultActorsFinal;
	Parms.NumResultActorsGenerated = NumResultActorsGenerated;
	Parms.ResultActorsGenerated = ResultActorsGenerated;
	Parms.GeneratedActors = GeneratedActors;
	Parms.QueryStatusVar = QueryStatusVar;
	Parms.Query = Query;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetItemScore_ReturnValue = CallFunc_GetItemScore_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetItemScore_ReturnValue_1 = CallFunc_GetItemScore_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_3 = CallFunc_Array_IsValidIndex_ReturnValue_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_4 = CallFunc_Array_IsValidIndex_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetQueryResultsAsLocations_ResultLocations = CallFunc_GetQueryResultsAsLocations_ResultLocations;
	Parms.CallFunc_GetQueryResultsAsLocations_ReturnValue = CallFunc_GetQueryResultsAsLocations_ReturnValue;
	Parms.CallFunc_GetQueryResultsAsActors_ResultActors = CallFunc_GetQueryResultsAsActors_ResultActors;
	Parms.CallFunc_GetQueryResultsAsActors_ReturnValue = CallFunc_GetQueryResultsAsActors_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_BestScore_ImplicitCast = K2Node_VariableSet_BestScore_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultActors != nullptr)
		*ResultActors = Parms.ResultActors;

	if (NumValidActorsGenerated != nullptr)
		*NumValidActorsGenerated = Parms.NumValidActorsGenerated;

	if (ResultActorsSuccess != nullptr)
		*ResultActorsSuccess = Parms.ResultActorsSuccess;

	if (ResultLocations != nullptr)
		*ResultLocations = Parms.ResultLocations;

	if (NumValidLocationsGenerated != nullptr)
		*NumValidLocationsGenerated = Parms.NumValidLocationsGenerated;

	if (ResultLocationsSuccess != nullptr)
		*ResultLocationsSuccess = Parms.ResultLocationsSuccess;

	if (QueryInstanceOut != nullptr)
		*QueryInstanceOut = Parms.QueryInstanceOut;

	if (QueryStatusOut != nullptr)
		*QueryStatusOut = Parms.QueryStatusOut;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC DebugFreezeFrame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceDebugFreezeFrame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitAbilityTargetRightNow                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitAbilityTargetDuringThisAbilityActivation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              ActorsWeHaveHitDuringThisAbilityActivation                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UActor*>              ActorsHitWithThisSpecificTargetSelection                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_DebugFreezeFrame(bool ForceDebugFreezeFrame, bool HitAbilityTargetRightNow, bool HitAbilityTargetDuringThisAbilityActivation, TArray<class UActor*>& ActorsWeHaveHitDuringThisAbilityActivation, TArray<class UActor*>& ActorsHitWithThisSpecificTargetSelection, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC DebugFreezeFrame");

	Params::UGA_NPC_Parent_C_NPC_DebugFreezeFrame_Params Parms;

	Parms.ForceDebugFreezeFrame = ForceDebugFreezeFrame;
	Parms.HitAbilityTargetRightNow = HitAbilityTargetRightNow;
	Parms.HitAbilityTargetDuringThisAbilityActivation = HitAbilityTargetDuringThisAbilityActivation;
	Parms.ActorsWeHaveHitDuringThisAbilityActivation = ActorsWeHaveHitDuringThisAbilityActivation;
	Parms.ActorsHitWithThisSpecificTargetSelection = ActorsHitWithThisSpecificTargetSelection;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayEffectContainerAndLaunchTargets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GameplayEffectLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AbilityTargetCanBeHitMultipleTimesByThisSelection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceDebugFreezeFrameForThisSpecificTargeting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitAbilityTargetRightNow                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitAbilityTargetDuringThisAbilityActivation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              ActorsWeHaveHitDuringThisAbilityActivation                       (Parm, OutParm)
// TArray<class UActor*>              ActorsHitWithThisSpecificTargetSelection                         (Parm, OutParm)
// bool                               HitWasVehicle                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceDebugFreezeFrame                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CurrentHitActorWeAreTestingHitResultFromTargetData               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CurrentHitActorWeAreTestingArrayIndex                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CurrentHitActorWeAreTesting                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentAbilityTargetCanBeHitMultipleTimesByThisSelection         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GetCurrentGameplayEffectLevel                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CurrentApplicationTag                                            (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              CurrentActorsGatheredThisTargetSelection                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// double                             CurrentKnockbackVelocity                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCurrentTargetData                                                (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPC_Pawn_Parent_C*          K2Node_DynamicCast_AsNPC_Pawn_Parent                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              K2Node_Select_Default                                            ()
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromHitResult_ReturnValue              ()
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetHitResultFromTargetData_ReturnValue                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDataCountFromTargetData_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetHitResultFromTargetData_ReturnValue_1                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class UActor*>              CallFunc_GetActorsFromTargetData_ReturnValue                     (ReferenceParm)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaVehicle*          K2Node_DynamicCast_AsFort_Athena_Vehicle                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaVehicle*          K2Node_DynamicCast_AsFort_Athena_Vehicle_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchVelocity(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchActor  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchingVehicle(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UFortVehicleInterface>CallFunc_BP_GetAllPassengers_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerPawn*>     CallFunc_BP_GetAllPassengers_ReturnValue                         (ReferenceParm)
// class UFortPlayerPawn*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TargetDataHasHitResult_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDataCountFromTargetData_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_ApplyGameplayEffectContainerAndLaunchTargets(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag, int32 GameplayEffectLevel, bool AbilityTargetCanBeHitMultipleTimesByThisSelection, bool ForceDebugFreezeFrameForThisSpecificTargeting, bool* HitAbilityTargetRightNow, bool* HitAbilityTargetDuringThisAbilityActivation, TArray<class UActor*>* ActorsWeHaveHitDuringThisAbilityActivation, TArray<class UActor*>* ActorsHitWithThisSpecificTargetSelection, bool HitWasVehicle, bool ForceDebugFreezeFrame, const struct FHitResult& CurrentHitActorWeAreTestingHitResultFromTargetData, int32 CurrentHitActorWeAreTestingArrayIndex, class UActor* CurrentHitActorWeAreTesting, bool CurrentAbilityTargetCanBeHitMultipleTimesByThisSelection, int32 GetCurrentGameplayEffectLevel, const struct FGameplayTag& CurrentApplicationTag, const TArray<class UActor*>& CurrentActorsGatheredThisTargetSelection, double CurrentKnockbackVelocity, const struct FGameplayAbilityTargetDataHandle& CurrentTargetData, bool CallFunc_IsValid_ReturnValue, class UNPC_Pawn_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2, const struct FScalableFloat& K2Node_Select_Default, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue_1, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_Contains_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UActor* CallFunc_Array_Get_Item, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue_2, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_3, int32 Temp_int_Variable_1, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue_1, TArray<class UActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UActor* CallFunc_Array_Get_Item_1, class UFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, class UFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle_1, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchVelocity, class UActor* CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchActor, bool CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchingVehicle, TScriptInterface<class UFortVehicleInterface> CallFunc_BP_GetAllPassengers_self_CastInput, TArray<class UFortPlayerPawn*>& CallFunc_BP_GetAllPassengers_ReturnValue, class UFortPlayerPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, class UCharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_TargetDataHasHitResult_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ApplyGameplayEffectContainerAndLaunchTargets");

	Params::UGA_NPC_Parent_C_NPC_ApplyGameplayEffectContainerAndLaunchTargets_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.AbilityTargetCanBeHitMultipleTimesByThisSelection = AbilityTargetCanBeHitMultipleTimesByThisSelection;
	Parms.ForceDebugFreezeFrameForThisSpecificTargeting = ForceDebugFreezeFrameForThisSpecificTargeting;
	Parms.HitWasVehicle = HitWasVehicle;
	Parms.ForceDebugFreezeFrame = ForceDebugFreezeFrame;
	Parms.CurrentHitActorWeAreTestingHitResultFromTargetData = CurrentHitActorWeAreTestingHitResultFromTargetData;
	Parms.CurrentHitActorWeAreTestingArrayIndex = CurrentHitActorWeAreTestingArrayIndex;
	Parms.CurrentHitActorWeAreTesting = CurrentHitActorWeAreTesting;
	Parms.CurrentAbilityTargetCanBeHitMultipleTimesByThisSelection = CurrentAbilityTargetCanBeHitMultipleTimesByThisSelection;
	Parms.GetCurrentGameplayEffectLevel = GetCurrentGameplayEffectLevel;
	Parms.CurrentApplicationTag = CurrentApplicationTag;
	Parms.CurrentActorsGatheredThisTargetSelection = CurrentActorsGatheredThisTargetSelection;
	Parms.CurrentKnockbackVelocity = CurrentKnockbackVelocity;
	Parms.CurrentTargetData = CurrentTargetData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNPC_Pawn_Parent = K2Node_DynamicCast_AsNPC_Pawn_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue = CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3 = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3 = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3 = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue = CallFunc_GetAIAbilityTarget_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue_1 = CallFunc_GetAIAbilityTarget_ReturnValue_1;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_AbilityTargetDataFromHitResult_ReturnValue = CallFunc_AbilityTargetDataFromHitResult_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_GetHitResultFromTargetData_ReturnValue = CallFunc_GetHitResultFromTargetData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue_2 = CallFunc_GetAIAbilityTarget_ReturnValue_2;
	Parms.CallFunc_GetDataCountFromTargetData_ReturnValue = CallFunc_GetDataCountFromTargetData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetHitResultFromTargetData_ReturnValue_1 = CallFunc_GetHitResultFromTargetData_ReturnValue_1;
	Parms.CallFunc_GetActorsFromTargetData_ReturnValue = CallFunc_GetActorsFromTargetData_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsFort_Athena_Vehicle = K2Node_DynamicCast_AsFort_Athena_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Athena_Vehicle_1 = K2Node_DynamicCast_AsFort_Athena_Vehicle_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchVelocity = CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchVelocity;
	Parms.CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchActor = CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchActor;
	Parms.CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchingVehicle = CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchingVehicle;
	Parms.CallFunc_BP_GetAllPassengers_self_CastInput = CallFunc_BP_GetAllPassengers_self_CastInput;
	Parms.CallFunc_BP_GetAllPassengers_ReturnValue = CallFunc_BP_GetAllPassengers_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_TargetDataHasHitResult_ReturnValue = CallFunc_TargetDataHasHitResult_ReturnValue;
	Parms.CallFunc_GetDataCountFromTargetData_ReturnValue_1 = CallFunc_GetDataCountFromTargetData_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (HitAbilityTargetRightNow != nullptr)
		*HitAbilityTargetRightNow = Parms.HitAbilityTargetRightNow;

	if (HitAbilityTargetDuringThisAbilityActivation != nullptr)
		*HitAbilityTargetDuringThisAbilityActivation = Parms.HitAbilityTargetDuringThisAbilityActivation;

	if (ActorsWeHaveHitDuringThisAbilityActivation != nullptr)
		*ActorsWeHaveHitDuringThisAbilityActivation = Parms.ActorsWeHaveHitDuringThisAbilityActivation;

	if (ActorsHitWithThisSpecificTargetSelection != nullptr)
		*ActorsHitWithThisSpecificTargetSelection = Parms.ActorsHitWithThisSpecificTargetSelection;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityTargetIsWithinAngleThreshold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AngleThreshold                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsWithinAngle                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AngleThresholdVar                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAIAbilityTarget_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Double_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Double_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_AbilityTargetIsWithinAngleThreshold(double AngleThreshold, bool* IsWithinAngle, double AngleThresholdVar, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const class FString& CallFunc_BuildString_Double_ReturnValue, const class FString& CallFunc_BuildString_Double_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AbilityTargetIsWithinAngleThreshold");

	Params::UGA_NPC_Parent_C_NPC_AbilityTargetIsWithinAngleThreshold_Params Parms;

	Parms.AngleThreshold = AngleThreshold;
	Parms.AngleThresholdVar = AngleThresholdVar;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetAIAbilityTarget_ReturnValue = CallFunc_GetAIAbilityTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_ = CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BuildString_Double_ReturnValue = CallFunc_BuildString_Double_ReturnValue;
	Parms.CallFunc_BuildString_Double_ReturnValue_1 = CallFunc_BuildString_Double_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWithinAngle != nullptr)
		*IsWithinAngle = Parms.IsWithinAngle;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC IsMontageInfoValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortGameplayAbilityMontageInfoMontageInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsValid_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_IsMontageInfoValid(const struct FFortGameplayAbilityMontageInfo& MontageInfo, bool* IsValid_, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC IsMontageInfoValid");

	Params::UGA_NPC_Parent_C_NPC_IsMontageInfoValid_Params Parms;

	Parms.MontageInfo = MontageInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid_ != nullptr)
		*IsValid_ = Parms.IsValid_;

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityDebugMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               OnlyWhenDebug                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_AbilityDebugMessage(const class FString& String, bool OnlyWhenDebug, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AbilityDebugMessage");

	Params::UGA_NPC_Parent_C_NPC_AbilityDebugMessage_Params Parms;

	Parms.String = String;
	Parms.OnlyWhenDebug = OnlyWhenDebug;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.NPC SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::NPC_SetupAbility(class UFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "NPC SetupAbility");

	Params::UGA_NPC_Parent_C_NPC_SetupAbility_Params Parms;

	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368");

	Params::UGA_NPC_Parent_C_Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368");

	Params::UGA_NPC_Parent_C_Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.Cancelled_13B12ED64A3570FC1E117FAC4E3F7961
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::Cancelled_13B12ED64A3570FC1E117FAC4E3F7961(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "Cancelled_13B12ED64A3570FC1E117FAC4E3F7961");

	Params::UGA_NPC_Parent_C_Cancelled_13B12ED64A3570FC1E117FAC4E3F7961_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.Targeted_13B12ED64A3570FC1E117FAC4E3F7961
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::Targeted_13B12ED64A3570FC1E117FAC4E3F7961(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "Targeted_13B12ED64A3570FC1E117FAC4E3F7961");

	Params::UGA_NPC_Parent_C_Targeted_13B12ED64A3570FC1E117FAC4E3F7961_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.BeginDestroyBuildings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TargetSelectionApplicationTag                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               DoContinuousTargetSelection                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::BeginDestroyBuildings(const struct FGameplayTag& TargetSelectionApplicationTag, bool DoContinuousTargetSelection)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "BeginDestroyBuildings");

	Params::UGA_NPC_Parent_C_BeginDestroyBuildings_Params Parms;

	Parms.TargetSelectionApplicationTag = TargetSelectionApplicationTag;
	Parms.DoContinuousTargetSelection = DoContinuousTargetSelection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_NPC_Parent.GA_NPC_Parent_C.ExecuteUbergraph_GA_NPC_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_2                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_2                              (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           ()
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_3                                           ()
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_3                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_3                              (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_TargetSelectionApplicationTag                 (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_DoContinuousTargetSelection                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_TargetSelectionContinuous*CallFunc_DoTargetSelectionContinuous_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_WaitTargetSelection*CallFunc_WaitTargetSelection_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDataCountFromTargetData_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              CallFunc_GetActorsFromTargetData_ReturnValue                     (ReferenceParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_NPC_Parent_C::ExecuteUbergraph_GA_NPC_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_TargetSelectionApplicationTag, bool K2Node_CustomEvent_DoContinuousTargetSelection, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UFortAbilityTask_TargetSelectionContinuous* CallFunc_DoTargetSelectionContinuous_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, TArray<class UActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UActor* CallFunc_Array_Get_Item_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_NPC_Parent_C", "ExecuteUbergraph_GA_NPC_Parent");

	Params::UGA_NPC_Parent_C_ExecuteUbergraph_GA_NPC_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData_2 = K2Node_CustomEvent_TargetData_2;
	Parms.K2Node_CustomEvent_ApplicationTag_2 = K2Node_CustomEvent_ApplicationTag_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CustomEvent_TargetData_3 = K2Node_CustomEvent_TargetData_3;
	Parms.K2Node_CustomEvent_ApplicationTag_3 = K2Node_CustomEvent_ApplicationTag_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_TargetSelectionApplicationTag = K2Node_CustomEvent_TargetSelectionApplicationTag;
	Parms.K2Node_CustomEvent_DoContinuousTargetSelection = K2Node_CustomEvent_DoContinuousTargetSelection;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_DoTargetSelectionContinuous_ReturnValue = CallFunc_DoTargetSelectionContinuous_ReturnValue;
	Parms.CallFunc_WaitTargetSelection_ReturnValue = CallFunc_WaitTargetSelection_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataCountFromTargetData_ReturnValue = CallFunc_GetDataCountFromTargetData_ReturnValue;
	Parms.CallFunc_GetActorsFromTargetData_ReturnValue = CallFunc_GetActorsFromTargetData_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
