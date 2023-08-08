#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0xB98 - 0xB28)
// BlueprintGeneratedClass GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C
class UGA_Athena_TillLandFallDamageImmunity_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_FallDamageImmunity;                             // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GEH_FallDamageImmunity;                            // 0xB38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Delay_PostLand;                                    // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_SurfaceSwimming;                               // 0xB48(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag_Sliding;                                       // 0xB4C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_IgnoreApplication;                              // 0xB50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          Tag_InVehicle;                                     // 0xB70(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_729E[0x4];                                     // Fixing Size After Last Property
	double                                       Delay_WaterSwimBind;                               // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ApplyInAirOnly;                                    // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_729F[0x3];                                     // Fixing Size After Last Property
	struct FGameplayTag                          TagIsRiding;                                       // 0xB84(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UAbilityTask_WaitGameplayTagAdded*> WaitTagAsyncTasks;                                 // 0xB88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_TillLandFallDamageImmunity_Parent_C");
		return Clss;
	}

	void Added_3DBE819D4ED6A0A0909A7690321F9B09();
	void Added_15DBA1504E74C72F22BBCBAD8E3CD31E();
	void Added_052C8416489756AFAF2C5391148ABB52();
	void Added_1195BCDD4C66168D5746C2BD02970859();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void CallEnd();
	void SetUpWaits();
	void SetUpBinds();
	void PawnLanded(struct FHitResult& Hit);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_bWasCancelled, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool Temp_bool_IsClosed_Variable, class UAbilityTask_WaitGameplayTagAdded* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
