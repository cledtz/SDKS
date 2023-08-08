#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x790 - 0x6A0)
// BlueprintGeneratedClass ItemOnPawnPreview.ItemOnPawnPreview_C
class UItemOnPawnPreview_C : public UFortItemPreviewOnPawnActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow1;                                            // 0x6A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*            Directional_Light_For_Atmosphere_PC;               // 0x6B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLightPC;                                        // 0x6B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x6C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLightLowMobile;                                 // 0x6C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*            DirectionalLightMobile;                            // 0x6D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   KeyLight_StandaloneForSwitch;                      // 0x6D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   KeyLight5;                                         // 0x6E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   KeyLight6;                                         // 0x6E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   KeyLigh3;                                          // 0x6F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   KeyLight2;                                         // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   BounceRear1;                                       // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   RimLowerRight1;                                    // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   RimLeft1;                                          // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   RimTopRight1;                                      // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   RimBottomLeft1;                                    // 0x720(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   Bounce1;                                           // 0x728(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LightTransform;                                    // 0x730(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Plane;                                             // 0x738(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Sample_Mesh;                                       // 0x740(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysOn;                                          // 0x748(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x749(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugConstructionLighting;                         // 0x74A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D3D[0x5];                                     // Fixing Size After Last Property
	class UParticleSystemComponent*              ObscuringLoopEmitter;                              // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ToonLightRotatio;                                  // 0x758(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsBattlePassReward;                               // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D3E[0x7];                                     // Fixing Size After Last Property
	struct FTimerHandle                          LOD_StreamingSafetyTimer;                          // 0x778(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    DefaultFloorMaterial;                              // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CustomFloorMaterial;                               // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemOnPawnPreview_C");
		return Clss;
	}

	void Get_LOD_Streaming_Safety_Duration();
	void SwitchErebusLighting(bool Visibility, const TArray<class USpotLightComponent*>& L_lights);
	void SetFloorEnabled(bool Show_Floor, bool CallFunc_Not_PreBool_ReturnValue);
	void LightControl(bool Active, bool CallFunc_IsErebus_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsInPerformanceMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsErebus_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
	void SwitchPCLighting(bool Visibility);
	void SwitchMobileLighting(bool NewParam);
	void UpdateSettings();
	void OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance);
	void OnAllLODStreamingComplete();
	void OnCurrentVisualsCleanedUp();
	void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);
	void OnUpdateFloorMaterial(bool bEnableAutotestBackground);
	void Backup_LODStreamingFailed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ItemOnPawnPreview(int32 EntryPoint, float CallFunc_GetStreamingSafetyDuration_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Event_InMaterialInstance, const struct FVector& CallFunc_GetPawnLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, bool Temp_bool_Variable_1, class UAthenaSkyDiveContrailItemDefinition* K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool K2Node_Event_bUseSecondaryTransitionEffects, bool K2Node_Event_bShowFloor, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool K2Node_Event_bEnableAutotestBackground, bool CallFunc_IsInPerformanceMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default_1, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
