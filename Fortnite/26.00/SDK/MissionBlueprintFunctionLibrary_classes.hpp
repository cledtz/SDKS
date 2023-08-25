#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C
class UMissionBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMissionBlueprintFunctionLibrary_C* GetDefaultObj();

	void Any_Player_Pawn_Near_Location(double DistanceToCheck, const struct FVector& Location, TArray<class UFortPlayerPawn*>& Ignore_Player_Pawns, class UObject* __WorldContext, bool* IsPawnNearLocation, TArray<class UFortPawn*>* PawnsNearLocation, const TArray<class UFortPlayerPawn*>& Filtered_Player_Pawns, const TArray<class UFortPawn*>& Pawns, int32 Temp_int_Loop_Counter_Variable, TArray<class UFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, double CallFunc_DistanceBetweenTwoVectors_Distance, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UFortPlayerPawn* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortPawn* Temp_object_Variable, int32 CallFunc_Array_AddUnique_ReturnValue);
	void GetSeasonalEventManager(class UObject* WorldContextObject, class UObject* __WorldContext, class UFortSeasonalEventManager** SeasonalEventManager, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UFortGameInstance* K2Node_DynamicCast_AsFort_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UFortSeasonalEventManager* CallFunc_GetEventManager_ReturnValue);
	void NPC_CanBeElemental(const struct FGameplayTag& PawnTag, class UObject* __WorldContext, bool* Value, const struct FGameplayTagContainer& ElementalEnablePawnTag, bool CallFunc_HasTag_ReturnValue);
	void LaunchHoverboard(class UActor* HoverboardActor, const struct FVector& LaunchVelocity, class FName ForceFeedbackTag, class UObject* __WorldContext, bool* Success, class UFortAthenaJackalVehicle* Hoverboard, class UFortAthenaJackalVehicle* K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class UFortVehicleInterface> CallFunc_GetDriver_self_CastInput, class UFortPlayerPawn* CallFunc_GetDriver_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class UFortVehicleInterface> CallFunc_SetIgnoreNextFallingDamage_self_CastInput, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue);
	void NPC_ConvertTagToNameText(const struct FGameplayTag& PawnTag, class UObject* __WorldContext, class FText* Name, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
	void CheckBasicVectorToActorLineOfSight(const struct FVector& Vector_A, class UActor* Actor_B, const struct FVector& Actor_B_Location_Offset, enum class ETraceTypeQuery TraceChannel, enum class EDrawDebugTrace DrawDebugType, double DrawTime, TArray<class UActor*>& ActorsToIgnore, bool bTraceComplex, bool bRequireThatTraceHitActorB, class UObject* __WorldContext, bool* In_Line_Of_Sight, double* Distance, bool Result, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_LineTraceSingle_DrawTime_ImplicitCast, double K2Node_FunctionResult_Distance_ImplicitCast);
	void CheckBasicActorLineOfSight(class UActor* Actor_A, const struct FVector& ActorA_Location_Offset, class UActor* Actor_B, const struct FVector& Actor_B_Location_Offset, bool UseActorHalfHeightForSight, enum class ETraceTypeQuery TraceChannel, enum class EDrawDebugTrace DrawDebugType, double DrawTime, bool bTraceComplex, class UObject* __WorldContext, bool* In_Line_Of_Sight, double* Distance, const struct FGameplayTag& Tag_IgnoreHalfHeightForSightCheck, const struct FVector& Actor_B_Start_Vector, const struct FVector& ActorA_StartVector, bool Result, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_GetActorBounds_Origin_1, const struct FVector& CallFunc_GetActorBounds_BoxExtent_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_FClamp_ReturnValue_1, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool Temp_bool_Variable_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, double K2Node_FunctionResult_Distance_ImplicitCast, float CallFunc_LineTraceSingle_DrawTime_ImplicitCast);
	void NPC_LockThenRotateInPlace(bool LockedInPlace, class UFortPlayerPawn* PlayerPawn, class UFortAIPawn* SurvivorPawn, class UObject* __WorldContext, const struct FStruct_SurvivorScriptedAbilities& Survivor_Abilities, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1);
	void GetControllersNearActorThatRequireQuestObjective(double Distance, class UActor* Actor, class UFortQuestItemDefinition* Quest_Item, class FName Quest_Item_Backend_Objective_Name, class UObject* __WorldContext, TArray<class UFortPlayerController*>* PlayerControllersNearbyThatRequireQuest, bool* SuccessfullyFoundPlayer, class FName LocalBackendName, class UFortQuestItemDefinition* LocalQuestItem, const TArray<class UFortPlayerController*>& ControllersWhoRequireQuestObjective, const TArray<class UFortPlayerController*>& ControllersNearbyArray, bool FoundPlayer, bool CallFunc_AnyPlayerNearActor_IsPlayerNearActor, TArray<class UFortPlayerPawn*>& CallFunc_AnyPlayerNearActor_PlayersNearActor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UFortPlayerPawn* CallFunc_Array_Get_Item, class UController* CallFunc_GetController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UFortPlayerController* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_DoesPlayerHaveQuest_QuestValid, class UFortPlayerController* CallFunc_DoesPlayerHaveQuest_PlayerControllerRef, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void HaveAllPlayersCompletedQuest(class UFortQuestItemDefinition* QuestItem, class UObject* __WorldContext, bool* AllPlayersCompletedQuest, bool NotCompleted, int32 Temp_int_Array_Index_Variable, TArray<class UFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HasPlayerCompletedQuestObjectiveHandle(class UFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, const struct FDataTableRowHandle& QuestBackendObjectiveHandle, class UObject* __WorldContext, class UFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective, bool HasCompletedObjective, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasCompletedObjective_ReturnValue);
	void DoesAnyPlayerRequireQuestObjective(class UFortQuestItemDefinition* QuestReference, const struct FDataTableRowHandle& QuestObjectiveHandle, class UObject* __WorldContext, TArray<class UFortPlayerController*>* PlayerControllersWhoRequireObjective, bool* SomebodyRequiresObjective, const TArray<class UFortPlayerController*>& ControllersWhoRequireObjective, bool SomebodyNeededTheObjective, int32 Temp_int_Array_Index_Variable, TArray<class UFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasCompletedObjective_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HideParticleComponentsAttachedToMesh(class UStaticMeshComponent* MeshComponent, class UObject* __WorldContext, bool* SuccessfullyDeactivatedParticle, bool FoundParticle, bool CallFunc_IsValid_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* K2Node_DynamicCast_AsCascade_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HasPlayerCompletedQuestObjective(class UFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, class FName QuestBackendObjectiveName, class UObject* __WorldContext, class UFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective, bool HasCompletedObjective, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue);
	void GetContributingControllersNearActor(double Distance, class UActor* Actor, class UObject* __WorldContext, TArray<class UFortPlayerController*>* PlayerControllersNearby, bool* SuccessfullyFoundPlayer, const TArray<class UFortPlayerController*>& ControllersNearbyArray, bool FoundPlayer, bool CallFunc_AnyPlayerNearActor_IsPlayerNearActor, TArray<class UFortPlayerPawn*>& CallFunc_AnyPlayerNearActor_PlayersNearActor, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortPlayerPawn* CallFunc_Array_Get_Item, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PointLocationsBetweenTwoVectors(const struct FVector& Vector_1, const struct FVector& Vector_2, int32 HowManyPoints, class UObject* __WorldContext, TArray<struct FVector>* VectorPoints, bool* SuccessfullyFoundPoints, bool WasSuccessful, const TArray<struct FVector>& ResultVectorArray, const struct FVector& DifferenceVector, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void GetCurrentDifficulty(class UObject* __WorldContext, double* Difficulty, bool* Success, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameDifficulty_ReturnValue, double K2Node_FunctionResult_Difficulty_ImplicitCast);
	void ApplyDifficultyOffset(class FName RowName, double BaseDifficulty, class UObject* __WorldContext, bool* Success, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, double CallFunc_GetCurrentDifficulty_Difficulty, bool CallFunc_GetCurrentDifficulty_Success, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_AdjustWaveBasedGameDifficulty_fDifficultyAddMod_ImplicitCast);
	void DistanceBetweenTwoVectors(const struct FVector& Vector1, const struct FVector& Vector2, class UObject* __WorldContext, double* Distance, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue);
	void HasPlayerCompletedQuest(class UFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, class FName QuestBackendName, class UObject* __WorldContext, class UFortPlayerController** PlayerControllerOut, bool* CompletedQuest, bool HasCompletedQuest, TScriptInterface<class UQuestInstanceInterface> Temp_interface_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasCompletedObjectiveInstance_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasComponentForWorldProcessingUpdates_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortPlayerStateComponent_Quests* CallFunc_GetComponentByClass_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, TScriptInterface<class UQuestInstanceManagerInterface> K2Node_DynamicCast_AsQuest_Instance_Manager_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class UQuestInstanceInterface> CallFunc_FindQuestInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4);
	void SeperatePlayersWhoNeedQuest(class UFortQuestItemDefinition* QuestItemReference, class FName QuestObjectiveBackendName, class UObject* __WorldContext, TArray<class UFortPlayerController*>* PlayersWhoNeedQuest, TArray<class UFortPlayerController*>* PlayersWhoDoNotNeedQuest, const TArray<class UFortPlayerController*>& NotRequireQuest, const TArray<class UFortPlayerController*>& RequireQuest, int32 Temp_int_Array_Index_Variable, TArray<class UFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void BasicBuildingItemDrop(enum class EnumEventWorldItemDrop Item_Drop_Level, const struct FVector& LootDropLocation, class UObject* __WorldContext, int32 ItemsToSpawnPerRoll, const struct FVector& SpawnVector, double CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_4, double CallFunc_RandomFloatInRange_ReturnValue_5, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_5, class UFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, double CallFunc_Add_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_7, double CallFunc_Add_DoubleDouble_ReturnValue_8, const struct FVector& CallFunc_MakeVector_ReturnValue_2, class UFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue_2);
	void GetBuildingRecommendation(class FName RowName, class UObject* __WorldContext, int32* BuildingCount, bool* RowFound, double CallFunc_GetCurrentDifficulty_Difficulty, bool CallFunc_GetCurrentDifficulty_Success, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, int32 CallFunc_Round_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast, double CallFunc_Round_A_ImplicitCast);
	void Random_360_VectorInRange(double MinDistance, double MaxDistance, class UObject* __WorldContext, struct FVector* Random_Vector_Result_, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast);
	void AnyPawnNearActor(double DistanceToCheck, class UActor* Actor, class UObject* __WorldContext, bool* IsPawnNearActor, TArray<class UFortPawn*>* PawnsNearActor, const TArray<class UFortPawn*>& Pawns, int32 Temp_int_Array_Index_Variable, TArray<class UFortPawn*>& CallFunc_GetAllActorsOfClass_OutActors, class UFortPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* Quest_Reference, class FName Quest_Objective_Backend_Name, const struct FDataTableRowHandle& ObjectiveStatEvent, TArray<class UFortPlayerController*>& PlayerControllersForUpdate, class UObject* __WorldContext, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void DropChance(double DropPercentChance, class UObject* __WorldContext, bool* DropResult, double CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue);
	void AnyPlayerNearActor(double DistanceToCheck, class UActor* Actor, class UObject* __WorldContext, bool* IsPlayerNearActor, TArray<class UFortPlayerPawn*>* PlayersNearActor, const TArray<class UFortPlayerPawn*>& PlayerPawns, TArray<class UFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void FlashObjectiveUI(class UFortObjectiveBase* Objective_Reference, class UObject* __WorldContext, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue);
	void NPC_DroneStopRescue(class UActor* Actor, class UActor* Instigator, class UObject* __WorldContext, const struct FStruct_SurvivorScriptedAbilities& SurvivorAbilityStruct, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	void NPC_DroneStartRescue(class UActor* Actor, class UActor* Instigator, class UObject* __WorldContext, const struct FStruct_SurvivorScriptedAbilities& SurvivorAbilityStruct, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	void ListPlayersWhoNeedQuest(class UFortQuestItemDefinition* Quest_Reference, class FName Quest_Backend_Name, class UObject* __WorldContext, TArray<class UFortPlayerController*>* Player_Controllers_Who_Require_The_Quest, bool* DoesAnyoneRequireTheQuest, bool PlayerNeededTheQuest, const TArray<class UFortPlayerController*>& PlayersWhoRequireQuest, TArray<class UFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1);
	void DoesAnyoneRequireQuest(class UFortQuestItemDefinition* QuestReference, class FName Quest_Backend_Name, class UObject* __WorldContext, bool* SomePlayerNeedsTheQuest, bool PlayerNeedsQuest, int32 Temp_int_Array_Index_Variable, TArray<class UFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void QuestObjectiveCountAchieved(class UFortPlayerController* PlayerControllerReference, class UFortQuestItemDefinition* Quest_Item_Reference, const struct FDataTableRowHandle& ObjectiveStatHandle, class UObject* __WorldContext, int32* Quest_Count_Achieved, int32* Quest_Count_Required, bool* SuccessfullyFoundCount, int32 LocalRequiredCount, int32 LocalAchievedCount, bool bSuccessfullyFoundStage, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_GetObjectiveInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void HighlightQuestActor(class UActor* ActorToHighlight, bool HighlightEnabled, class UObject* __WorldContext, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetScalarParameterValue_ReturnValue, class UBuildingSMActor* K2Node_DynamicCast_AsBuilding_Static_Mesh, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_FTrunc_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue_1, float CallFunc_GetScalarParameterValue_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1);
	void DoesPlayerHaveQuest(class UFortPlayerController* PlayerController, class UFortQuestItemDefinition* Quest_Item_Reference, class FName Quest_Item_Objective_Backend_Name, class UObject* __WorldContext, bool* QuestValid, class UFortPlayerController** PlayerControllerRef, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void GetObjectiveBadgeIconBrush(class UFortObjectiveBase* Objective, const struct FGameplayTag& RewardTag, class UObject* __WorldContext, struct FSlateBrush* IconBrush, class UFortBadgeItemDefinition* BadgeItem, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UFortWorldItemDefinition*>& CallFunc_GetRewardItemsByTag_OutRewardItems, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, class UFortBadgeItemDefinition* K2Node_DynamicCast_AsFort_Badge_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UnRegisterUI_UpdatesWithDamageEvents(class UActor* ActorToUnRegisterWith, class UFortMissionState* MissionState, class UObject* __WorldContext, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1);
	void RegisterUI_UpdatesWithDamageEvents(class UActor* ActorToRegisterWith, class UFortMissionState* MissionState, class UObject* __WorldContext, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1);
};

}


