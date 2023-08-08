#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AbilityFunctions.AbilityFunctions_C
class UAbilityFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityFunctions_C");
		return Clss;
	}

	void ApplySlowFall(double SlowFallDuration, class UFortGameplayAbility* SelfGameplayAbilityReference, class UClass* GameplayEffect, class UObject* __WorldContext, struct FActiveGameplayEffectHandle* EffectSpecHandle, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
	void GetDistanceSquaredBetweenActors(class UActor* Actor_1, class UActor* Actor_2, class UObject* __WorldContext, double* Distance_Squared, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSizeSquared_ReturnValue);
	void GetDistanceBetweenActors(class UActor* Actor1, class UActor* Actor2, class UObject* __WorldContext, double* Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue);
	void GetPawnFromPlayerStateZone(class UActor* InActor, class UObject* __WorldContext, class UFortPlayerPawn** OutPawn, bool* PawnReturned, class UFortPlayerStateZone* K2Node_DynamicCast_AsFort_Player_State_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void EvaluatePerkTierBalanceValue(const struct FScalableFloat& T01_Balance_Value, const struct FScalableFloat& T02_Balance_Value, bool Owns_T02, bool Should_Override_T01, class UObject* __WorldContext, struct FScalableFloat* Balance_Value, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_Select_Default, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat, const struct FScalableFloat& K2Node_Select_Default_1, const struct FScalableFloat& K2Node_Select_Default_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast);
	void GetRangeFromGameplayEffectContainer(const struct FFortGameplayEffectContainer& GE_Container, int32 Target_Selection_List_Index, double At_Level, class UObject* __WorldContext, double* Range, const struct FFortAbilityTargetSelection& CallFunc_Array_Get_Item, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_Level_ImplicitCast, double K2Node_FunctionResult_Range_ImplicitCast);
	void GetTotalGameplayEffectCount(TArray<class UClass*>& EffectsToCount, class UAbilitySystemComponent* AbilitySystemComponent, class UObject* __WorldContext, int32* FinalEffectCount, int32 TempTotalEffectCount, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_GetGameplayEffectCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void GetAngleBetweenTwoVectors(const struct FVector& VectorA, const struct FVector& VectorB, class UObject* __WorldContext, double* Angle__Degrees_, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_DegAcos_ReturnValue);
	void GetRangeFromGameplayEffectContainerSpec(const struct FFortGameplayEffectContainerSpec& GE_Container_Spec, int32 Target_Selection_List_Index, double At_Level, class UObject* __WorldContext, double* Range, const struct FFortAbilityTargetSelection& CallFunc_Array_Get_Item, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_Level_ImplicitCast, double K2Node_FunctionResult_Range_ImplicitCast);
	void GetProjectedTeleportLocation(class UActor* Actor, double MovementDistance, class UObject* __WorldContext, struct FVector* TargetLocation, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void ConvertRangeToTiles(double InRange, class UObject* __WorldContext, double* OutTile, double CallFunc_Divide_DoubleDouble_ReturnValue);
	void SetArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, TArray<class UActor*>& ArrayToSet, class UObject* __WorldContext, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class UActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UActor* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void DoNOTUse_BuildArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class UActor*>* HitActors, const TArray<class UActor*>& LocalHitActors, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class UActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UActor* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
