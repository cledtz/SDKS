#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBA (0xC82 - 0xBC8)
// BlueprintGeneratedClass BP_SprayDecal.BP_SprayDecal_C
class UBP_SprayDecal_C : public UFortSprayDecalInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       DecalFadeoutTime;                                  // 0xBD0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       EmissiveDecal;                                     // 0xBD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              EmissiveDecalMID;                                  // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DecalSize;                                         // 0xBE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInterface*                    EmissiveMatSource;                                 // 0xBF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DecalDepth;                                        // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSprayItemDefinition*            SprayAsset;                                        // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        LoadsOutstanding;                                  // 0xC08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_807B[0x4];                                     // Fixing Size After Last Property
	TSoftObjectPtr<class UTexture2D>             DecalTextureOverrideSoft;                          // 0xC10(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UTexture2D*                            DecalTextureOverride;                              // 0xC38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BannerPrimaryColor;                                // 0xC40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BannerSecondaryColor;                              // 0xC50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerController*                 SpawningPlayerController;                          // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UActor*>                        NearbyBuildingActors;                              // 0xC68(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       SpawnStartTimeDelay;                               // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFrontEndPreview;                                // 0xC80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bDestroyOnTrapPlaced;                              // 0xC81(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SprayDecal_C");
		return Clss;
	}

	void Initialize_Spray_Spawned_from_Gameplay(double InDecalSize, class UAthenaSprayItemDefinition* InSprayAsset, class UFortPlayerController* InSpawningPlayerController, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void AddBoxCollisionForCreative(double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UBoxComponent* CallFunc_AddComponent_ReturnValue);
	void FindNearbyBuildingActorsAndBindDelegates(int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_Athena_CheckCreativeMode_CanCompleteQuest, TArray<class UActor*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UActor* CallFunc_Array_Get_Item, class UBP_SprayDecal_C* K2Node_DynamicCast_AsBP_Spray_Decal, bool K2Node_DynamicCast_bSuccess, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBuildingSMActor* K2Node_DynamicCast_AsBuilding_Static_Mesh, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, TArray<class UActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue);
	void UnbindAndClearNearbyBuildingActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_Length_ReturnValue, class UActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, class UBuildingSMActor* K2Node_DynamicCast_AsBuilding_Static_Mesh, bool K2Node_DynamicCast_bSuccess_1);
	void OnRep_DecalFadeoutTime(bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetFadeOut_Duration_ImplicitCast);
	struct FUniqueNetIdRepl GetInstigatorPlayerId(class UFortPlayerController* TestController, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue);
	void CreateDecalComponents(const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_GetRealTimeSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTransform& Temp_struct_Variable, class UDecalComponent* CallFunc_AddComponent_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_ShouldUseBannerAsTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void UserConstructionScript();
	void OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA(class UObject* Loaded);
	void OnLoaded_F925FF00475A018319C73E9FB1540BC6(class UObject* Loaded);
	void OnReady_B252FED346EAB98D54D786BD15C1CC7B(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveBeginPlay();
	void OnSprayAssetReplicatedDown();
	void OnSprayInfoReady();
	void StartSprayFadeOutDueToNewPlacement();
	void OnNearbyWallDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnNearbyWallDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnBounceOccurs();
	void OnNearbyTrapPlaced(class UBuildingTrap* Trap, bool bDetatched);
	void PostLevelSaveSpawnCleanup();
	void OnWallDestoryed(class UActor* DestroyedActor);
	void ExecuteUbergraph_BP_SprayDecal(int32 EntryPoint, class UFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class UFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCreativeModePlaylist_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, class UObject* Temp_object_Variable_2, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_1, TSoftObjectPtr<class UMaterialInterface> CallFunc_GetDecalMaterial_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* Temp_object_Variable_3, TSoftObjectPtr<class UTexture2D> CallFunc_GetDecalTexture_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShouldUseBannerAsTexture_ReturnValue, const struct FHomebaseBannerColor& CallFunc_GetBannerColorFromRowName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetPrimaryColor_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded, int32 Temp_int_Variable_1, class UActor* K2Node_CustomEvent_DamagedActor_1, float K2Node_CustomEvent_Damage_1, class UController* K2Node_CustomEvent_InstigatedBy_1, class UActor* K2Node_CustomEvent_DamageCauser_1, const struct FVector& K2Node_CustomEvent_HitLocation_1, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent_1, class FName K2Node_CustomEvent_BoneName_1, const struct FVector& K2Node_CustomEvent_Momentum_1, class UActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UController* K2Node_CustomEvent_InstigatedBy, class UActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UBuildingTrap* K2Node_CustomEvent_Trap, bool K2Node_CustomEvent_bDetatched, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class UActor* K2Node_CustomEvent_DestroyedActor, bool Temp_bool_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_HasPermissionToEditWorld_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
