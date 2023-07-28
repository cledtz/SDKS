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

// 0x1F0 (0x720 - 0x530)
// BlueprintGeneratedClass GCN_RezOut.GCN_RezOut_C
class UGCN_RezOut_C : public UFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x530(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC; // 0x538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC; // 0x53C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC; // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC; // 0x544(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD1[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    TFX_ResOutCharacterMesh;                           // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776; // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776; // 0x554(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD2[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    TFX_GlowCharacterMesh;                             // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         DEBUG_ANIMATION;                                   // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnDrone;                                        // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_9CD3[0x6];                                     // Fixing Size After Last Property..
	class UClass*                                Teleportation_Drone;                               // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Teleport_Bot_AnimPlayRate;                         // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Teleport_Bot_Lifespan;                             // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Teleportation_Point_Light;                         // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Teleportation_Light_Offset;                        // 0x588(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Teleportation_Light_Color;                         // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      DissolveMIDs;                                      // 0x5B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	class UMaterialInterface*                    Mat_Chracter_Dissolve;                             // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerPawn_Athena_C*                  Pawn;                                              // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TSet<class USkeletalMeshComponent*>          Dissolve;                                          // 0x5D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class FName                                  Socket_Mesh_Top;                                   // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_9CD4[0x4];                                     // Fixing Size After Last Property..
	double                                       Max_Light_Intensity;                               // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Socket_Mesh_Bottom;                                // 0x630(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_9CD5[0x4];                                     // Fixing Size After Last Property..
	TArray<class USkeletalMeshComponent*>        Meshes_to_Dissolve;                                // 0x638(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class UBP_TeleportationDrone_C*              Drone;                                             // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         DEBUG_CHILDCOMPONENTS;                             // 0x650(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD6[0x7];                                     // Fixing Size After Last Property..
	TArray<class UFXSystemComponent*>            Particle_Components;                               // 0x658(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class UNiagaraComponent*                     Spawned_Death_VFX;                                 // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UNiagaraSystem*                        Dissolve_Visual_Effect;                            // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Dissolve_VFX_Spawn_Point_Name;                     // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD7[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          Base_Elimination_Montage;                          // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          DBNO_Elimination_Montage;                          // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Skydiving_Elimination_Montage;                     // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Swimming_Elimination_Montage;                      // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          DBNO_Swimming_Elimination_Montage;                 // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawn_VFX_Attached;                                // 0x6A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD8[0x7];                                     // Fixing Size After Last Property..
	double                                       Dissolve_Timeline_Playrate;                        // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Glow_Timeline_Playrate;                            // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DEBUG_REMOVESPAWNVFX;                              // 0x6C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         DEBUG_REMOVESPAWNEDPOINTLIGHT;                     // 0x6C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_9CD9[0x6];                                     // Fixing Size After Last Property..
	class UNiagaraSystem*                        Drone_Visual_Effect;                               // 0x6C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Drone_VFX_Attach_Point;                            // 0x6D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DEBUG_FXSYSTEMCOMPONENTS;                          // 0x6D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldDelayBetweenAnimAndVFX;                      // 0x6D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDA[0x2];                                     // Fixing Size After Last Property..
	double                                       DelayBetweenAnimAndVFX;                            // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 Material_Override_ID;                              // 0x6E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPawnMaterialOverrideCopiedParameters Copied_Parameters;                                 // 0x6F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_RezOut_C");
		return Clss;
	}

	void Spawn_Drone_VFX(class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
	void Set_Timeline_Playrates(float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1);
	void Dissolve_Material_Setup(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Spawn_Dissolve_VFX(const struct FVector& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool Temp_bool_Variable, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void Clean_Up_Teleportation_Light(bool CallFunc_IsValid_ReturnValue);
	void Spawn_Teleportation_Light(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UPointLightComponent* CallFunc_AddComponent_ReturnValue);
	void Spawn_Teleportation_Drone(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_TeleportationDrone_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast);
	void Stop_Looping_Audio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Play_Elmination_AnimMontage(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_IsSurfaceSwimming_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_WasDBNOOnDeath_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimMontage* K2Node_Select_Default, class UAnimMontage* K2Node_Select_Default_1, class UAnimMontage* K2Node_Select_Default_2, class UAnimMontage* K2Node_Select_Default_3, float CallFunc_PlayLocalAnimMontage_ReturnValue);
	void TFX_GlowCharacterMesh__FinishedFunc();
	void TFX_GlowCharacterMesh__UpdateFunc();
	void TFX_ResOutCharacterMesh__FinishedFunc();
	void TFX_ResOutCharacterMesh__UpdateFunc();
	void EndVFX();
	void OnBurstGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void Pre_Sequence_Change();
	void Set_Additional_Niagara_Parameters_on_Spawned_FX(class UNiagaraComponent* Spawned_Death_FX);
	void Set_Additional_Niagara_Parameters_on_Drone_FX(class UNiagaraComponent* Drone_FX);
	void TriggerVFX();
	void ExecuteUbergraph_GCN_RezOut(int32 EntryPoint, TSoftObjectPtr<class UMaterialInterface> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_Set_ToArray_Result, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* K2Node_CustomEvent_Spawned_Death_FX, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* K2Node_CustomEvent_Drone_FX, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_Array_Get_Item, class UFXSystemComponent* K2Node_DynamicCast_AsFXSystem_Component, bool K2Node_DynamicCast_bSuccess_1, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array, const struct FGuid& CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array_1, float CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
