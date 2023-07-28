#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C
class UAthenaQuestFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaQuestFunctionLibrary_C");
		return Clss;
	}

	void Athena_CheckActorHasTags(class UActor* TargetActor, const struct FGameplayTagContainer& TagsToCheck, bool OnlyExactMatch, class UObject* __WorldContext, bool* bDidActorHaveTags, const struct FGameplayTagContainer& TagsWeWant, bool bOnlyExactMatch, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable, bool CallFunc_HasAllTags_ReturnValue);
	void Athena_PartyAssistCheck(class UFortPlayerController* PlayerController, class FName ObjectiveBackendName, class UObject* __WorldContext, bool* bIsAssistingObjective, bool* bIsValidPlayerController, bool CallFunc_IsValid_ReturnValue);
	void Athena_PlayQuestRewardFeedback(bool PlayFX_onPlayer_, class USoundBase* Success_Sound, class UNiagaraSystem* Success_Niagara, class UForceFeedbackEffect* Success_Shake, class UActor* QuestActor, class UFortPlayerPawn* PlayerPawn, const struct FTransform& Effect_Transform, class UObject* __WorldContext, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UPlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	bool Athena_IsCreativeOrPlaygroundPlaylist(struct FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Athena_CheckCreativeMode(class UGameStateBase* InGameState, class UObject* __WorldContext, bool* CanCompleteQuest, class UFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetAthenaPlaylistContextTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Athena_QuestObjectiveCounter(class UFortPlayerController* FortPlayerControllerAthena, class UFortQuestItemDefinition* ObjectiveItem, const struct FDataTableRowHandle& ObjectiveStat, class UObject* __WorldContext, int32* QuestCountAchieved, int32* QuestCountRequired, bool* CountSuccessfullyReturned, int32 LocalRequiredCount, int32 LocalAchievedCount, bool SuccessfullyFoundStage, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_GetObjectiveInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void Athena_GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* InQuestItemRef, class FName ObjectiveBackendName, const struct FDataTableRowHandle& ObjectiveStatEvent, TArray<class UFortPlayerController*>& PlayerControllersForUpdate, class UObject* __WorldContext, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Athena_CheckQuestAndObjectiveCompletionMP(TArray<class UFortPlayerController*>& InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class FName ObjectiveBackendName, class UObject* __WorldContext, bool* QuestIsValid, bool* QuestCompleted, bool* ObjectiveCompleted, bool Result_ObjectiveCompleted, bool Result_QuestCompleted, bool Result_QuestIsValid, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void Athena_CheckQuestAndObjectiveCompletion(class UFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class FName ObjectiveBackendName, class UObject* __WorldContext, bool* QuestIsValid, bool* QuestCompleted, bool* ObjectiveCompleted, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void Athena_HasPlayerCompletedQuest(class UFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* HasQuest, bool* QuestCompleted, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void Athena_HasQuest(class UFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* PlayerHasQuest, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
