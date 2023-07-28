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
// BlueprintGeneratedClass Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C
class UCreative_CommonDeviceFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Creative_CommonDeviceFunctionLibrary_C");
		return Clss;
	}

	void Current_Material_Matches_Base(class UStaticMeshComponent* Static_Mesh_Component, int32 MatId, class UObject* __WorldContext, bool* Material_Matches, class UMaterialInterface** Base_Material, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FStaticMaterial>& CallFunc_GetStaticMaterials_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FStaticMaterial& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void GenerateUniqueMaterialName(class UPrimitiveComponent* PrimitiveComponent, const class FString& Name, class UObject* __WorldContext, class FName* UniqueName, int32 Max_Length, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FGuid& CallFunc_GenerateGuidFromObject_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FGuid& CallFunc_GenerateGuidFromObject_ReturnValue_1, const class FString& CallFunc_Right_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Right_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Left_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void IsInEditor(class UObject* __WorldContext, bool* TURR, bool CallFunc_InEditor_ReturnValue);
	void Get_Team_Color_For_Team_Option(class UActor* ContextActor, const struct FCreativeTeamOption& TeamOption, class UObject* __WorldContext, struct FLinearColor* Base_Color, struct FLinearColor* Light_Color, struct FLinearColor* Bold_Color, int32 ColorIndex, TArray<struct FLinearColor>& Temp_struct_Variable, enum class EFortTeam CallFunc_ConvertToTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UFortMinigame* CallFunc_GetMinigame_ReturnValue, TArray<struct FLinearColor>& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetTeamColorIndex_ReturnValue, TArray<struct FLinearColor>& Temp_struct_Variable_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_Array_Get_Item_1, const struct FLinearColor& CallFunc_Array_Get_Item_2);
	void Apply_Vent_Recently_Launched_Tag_or_Abort_Launch(class UActor* Actor_To_Launch, class UActor* Vent_Actor, class UObject* __WorldContext, bool* ShouldLaunch, bool Temp_bool_Variable, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<TSubclassOf<class UGameplayEffect>>& K2Node_MakeArray_Array);
	void Simple_Apply_Gameplay_Effect_to_Actor(class UClass* GameplayEffect, class UActor* Actor, class UObject* __WorldContext, class UAbilitySystemComponent* PlayerAbilitySystemComp, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<TSubclassOf<class UGameplayEffect>>& K2Node_MakeArray_Array);
	void Give_Ammo_To_Inventory_Owner(FInterfaceProperty_ Inventory_Owner, class UFortWorldItemDefinition* World_Item_Definition, int32 Pickup_Instigator_Handle, TMap<TSoftObjectPtr<class UFortWorldItemDefinition>, int32>& AmmoToGiveItemDefinitionMap, int32 DefaultAmmoToGive, class UObject* __WorldContext, int32 NumAmmoToGive, class UFortPlayerController* PlayerController, class UFortWorldItemDefinition* TargetAmmoDef, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UFortGameplayAbility> CallFunc_GetReloadAbility_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class UFortWorldItemDefinition* CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue, TSoftObjectPtr<class UFortWorldItemDefinition> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, class UFortWorldItem* CallFunc_GiveItemToInventoryOwner_ReturnValue, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void MatchesTagReturnMatch(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool ExactMatch, class UObject* __WorldContext, bool* TagFound, struct FGameplayTag* FirstMatchingTag, const struct FGameplayTag& FoundTag, int32 Temp_int_Array_Index_Variable, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_PlayerState_from_NetID(struct FUniqueNetIdRepl& Unique_Net_Id, class UObject* __WorldContext, class UFortPlayerState** Fort_Player_State, class UGameStateBase* CallFunc_GetGameState_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPlayerState* CallFunc_Array_Get_Item, class UFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetPlayerUniqueNetID_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Is_Matching_Channel_ID(class UFortGameplayMessageComponentBase* A, class UFortGameplayMessageComponentBase* B, class UObject* __WorldContext, bool* Matches, const struct FGameplayTagContainer& CallFunc_GetChannelId_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetChannelId_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue);
	void Bool_to_Bool_with_Unset(bool Input, class UObject* __WorldContext, enum class EBoolWithUnset* Output, bool Temp_bool_Variable, enum class EBoolWithUnset Temp_byte_Variable, enum class EBoolWithUnset Temp_byte_Variable_1, enum class EBoolWithUnset K2Node_Select_Default);
	void Reattach_or_Create_MID(class UPrimitiveComponent* Mesh, class UMaterialInstanceDynamic*& Target_MID, int32 MatId, class UObject* __WorldContext, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_GenerateUniqueMaterialName_UniqueName, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void Wrapping_Modulo(int32 A, int32 B, class UObject* __WorldContext, int32* Out, int32 __Result, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Animate_Float_Curve(double Delta_Time, double& Current_Time, class UCurveFloat* FCurve, double Animation_Time, bool Invert_Time, class UObject* __WorldContext, double* Value, bool* bIsComplete, double EndTime, double CurveFloatResult, double TimeAlpha, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double K2Node_Select_Default, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double Temp_real_Variable, bool Temp_bool_Variable_1, double K2Node_Select_Default_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_VariableSet_CurveFloatResult_ImplicitCast);
	void TeamToIndex(uint8 Team, class UObject* __WorldContext, int32* Index, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_Subtract_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void IndexToTeam(int32 Index, class UObject* __WorldContext, uint8* Team, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue);
	void IsLogicInPlayMode(class UFortMinigameLogicComponent*& Logic, class UObject* __WorldContext, bool* Play_Mode, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInPlayMode_ReturnValue);
	void Get_Dynamic_Team_Color(class UActor* Actor, class UFortMinigame* Minigame, enum class ECreativeColorSetType Color_Type, class UObject* __WorldContext, int32* Array_Index, const TArray<struct FGameplayTag>& GameplayTags, const TArray<struct FGameplayTag>& GameplayColorTags, enum class ECreativeTeamColor Temp_byte_Variable, class UFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ECreativeTeamColor Temp_byte_Variable_1, enum class ECreativeTeamColor Temp_byte_Variable_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, enum class EFortTeamAffiliation Temp_byte_Variable_3, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, uint8 CallFunc_GetActorPvPTeamIndex_TeamIndex, bool CallFunc_GetActorPvPTeamIndex_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, enum class ECreativeTeamColor K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_GetTeamColorIndex_ReturnValue);
	void Get_Team_Color_Index_from_Tag(class UActor* Actor_with_Tag, class UFortMinigame* Minigame, class UObject* __WorldContext, int32* Array_Index, enum class ECreativeColorSetType* Color_Type_Out, const struct FGameplayTag& Check_Tag, const TArray<struct FGameplayTag>& GameplayTags, const TArray<struct FGameplayTag>& GameplayColorTags, const struct FGameplayTagContainer& Temp_struct_Variable, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Get_Dynamic_Team_Color_Array_Index, int32 CallFunc_Get_Dynamic_Team_Color_Array_Index_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer);
	int32 Get_Team_Color_Index_or_Team_Index(class UFortMinigameLogicComponent* Minigame_Logic, int32 Team_Index, class UObject* __WorldContext, bool Temp_bool_Variable, uint8 CallFunc_IndexToTeam_Team, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetTeamColorIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void IsLocalPawn(class UActor* Actor, class UObject* __WorldContext, bool* IsLocalPawn, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class UFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UFortPlayerController* CallFunc_Array_Get_Item, class UPawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IsInPlayMode(class UActor*& Actor, class UObject* __WorldContext, bool* Play_Mode, class UFortMinigame* Minigame, bool CallFunc_IsInPlayMode_ReturnValue);
	void Get_Driver_or_Pawn_Controller(class UActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid_Controller, class UController** Controller, const struct FGameplayTagContainer& DeviceDontTriggerTags, class UController* _Controller, class UFortPlayerPawn* Temp_object_Variable, class UController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FInterfaceProperty_ K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_1, class UFortPlayerPawn* CallFunc_GetDriver_ReturnValue);
	void GetMID_FromMaterial(class UPrimitiveComponent* Target, int32 Index, class UMaterialInterface* SourceMaterial, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_GenerateUniqueMaterialName_UniqueName, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Refresh_Team_Change_Binding(class UFortMinigameLogicComponent* Minigame_Logic, bool Unbind, FDelegateProperty_& Event, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Update_Team_Color(class UFortMinigameLogicComponent* Minigame_Logic, class UPrimitiveComponent* Mesh, int32 Team, class UObject* __WorldContext, class UMaterialInstanceDynamic* CallFunc_GetMID_MID, int32 CallFunc_Get_Team_Color_Index_or_Team_Index_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void GetMID(class UPrimitiveComponent* Target, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_GenerateUniqueMaterialName_UniqueName, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void ActorCanTrigger(class UActor* Actor_To_Check, class UPrimitiveComponent* Overlap_Component, class UObject* __WorldContext, bool* CanTrigger, class UController** Controller, bool Local_CanTrigger, const struct FGameplayTagContainer& DeviceDontTriggerTags, class UController* Local_controller, class UFortPlayerPawn* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FInterfaceProperty_ K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess, class UFortPlayerPawn* CallFunc_GetDriver_ReturnValue, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void IsActivatedOnPhase(enum class EFortMinigameState State, int32 PhaseIndex, class UActor* Actor, class UObject* __WorldContext, bool* Enabled, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsInPlayMode_Play_Mode, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void IsEnabledPhaseMatch(enum class EFortMinigameState State, int32 PhaseIndex, class UActor* Actor, class UObject* __WorldContext, bool* Enabled, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_InEditor_ReturnValue, bool CallFunc_IsInPlayMode_Play_Mode, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsInPlayMode_Play_Mode_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Less_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4);
	void IsValidTeam(int32 Team_to_Check, class UActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetActorPvPTeamIndex_TeamIndex, bool CallFunc_GetActorPvPTeamIndex_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void AwardScore(class UActor* Actor, int32 Score, enum class EAwardScoreType Type, class UController* Controller, class UFortMinigameLogicComponent* Minigame_Logic, const struct FGameplayTagContainer& TargetTags, class UObject* __WorldContext, int32 Local_Score, class UFortMinigameManager* Local_MinigameManager, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, enum class EAwardScoreType Temp_byte_Variable, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortMinigameManager* CallFunc_GetMinigameManager_ReturnValue, class UFortMinigameStatsComponent* CallFunc_GetMinigameStatsComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortMinigameStatFilter* CallFunc_GetLoadedStatFromClass_ReturnValue, class UFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetStatForPlayer_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetSourceAndContextTags_OutSourceTags, const struct FGameplayTagContainer& CallFunc_GetSourceAndContextTags_OutContextTags, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void IsOnUnpublishedIsland(class UActor* Actor, class UObject* __WorldContext, bool* Edit_Mode, enum class EFortVolumeType CallFunc_GetExperienceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
