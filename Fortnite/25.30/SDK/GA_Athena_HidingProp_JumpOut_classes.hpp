#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB30 - 0xB28)
// BlueprintGeneratedClass GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C
class UGA_Athena_HidingProp_JumpOut_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_HidingProp_JumpOut_C");
		return Clss;
	}

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class UActor* LocalAvatarActor, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_Variable_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_HidingProp_JumpOut(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsServer_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, bool Temp_bool_Variable_2, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, const struct FGameplayEventData& K2Node_Event_EventData, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_3, class UB_HidingProp_C* K2Node_DynamicCast_AsB_Hiding_Prop, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
