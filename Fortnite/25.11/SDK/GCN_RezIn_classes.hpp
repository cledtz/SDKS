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

// 0x1C8 (0x6F0 - 0x528)
// BlueprintGeneratedClass GCN_RezIn.GCN_RezIn_C
class AGCN_RezIn_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x528(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C; // 0x530(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C; // 0x534(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C; // 0x538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C; // 0x53C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EF8[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    TFX_ResOutCharacterMesh;                           // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028; // 0x548(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028; // 0x54C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EF9[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    TFX_GlowCharacterMesh;                             // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         DEBUG_ANIMATION;                                   // 0x558(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnDrone;                                        // 0x559(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_8EFA[0x6];                                     // Fixing Size After Last Property..
	class UClass*                                Teleportation_Drone;                               // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Teleport_Bot_AnimPlayRate;                         // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Teleport_Bot_Lifespan;                             // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Teleportation_Point_Light;                         // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               Teleportation_Light_Offset;                        // 0x580(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Teleportation_Light_Color;                         // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      DissolveMIDs;                                      // 0x5A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	class UMaterialInterface*                    Mat_Chracter_Dissolve;                             // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  Pawn;                                              // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TSet<class USkeletalMeshComponent*>          Dissolve;                                          // 0x5C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class FName                                  Socket_Mesh_Top;                                   // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_8EFB[0x4];                                     // Fixing Size After Last Property..
	double                                       Max_Light_Intensity;                               // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Socket_Mesh_Bottom;                                // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_8EFC[0x4];                                     // Fixing Size After Last Property..
	TArray<class USkeletalMeshComponent*>        Meshes_to_Dissolve;                                // 0x630(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class ABP_TeleportationDrone_C*              Drone;                                             // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         DEBUG_CHILDCOMPONENTS;                             // 0x648(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EFD[0x7];                                     // Fixing Size After Last Property..
	TArray<class UFXSystemComponent*>            Particle_Components;                               // 0x650(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class UNiagaraComponent*                     Spawned_Teleport_VFX;                              // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UNiagaraSystem*                        Teleport_In_Visual_Effect;                         // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Teleport_In_VFX_Attach_Point_Name;                 // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cur_Dissolve_Setup_Attempt;                        // 0x674(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        AmountOfTimesToAttemptRestoreMats;                 // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         Spawn_VFX_Attached;                                // 0x67C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EFE[0x3];                                     // Fixing Size After Last Property..
	double                                       Dissolve_Timeline_Playrate;                        // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Glow_Timeline_Playrate;                            // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        Drone_Visual_Effect;                               // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DEBUG_TESTJANUSFX;                                 // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EFF[0x3];                                     // Fixing Size After Last Property..
	class FName                                  Drone_VFX_Attach_Point;                            // 0x69C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 Material_Override_ID;                              // 0x6A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPawnMaterialOverrideCopiedParameters Copied_Parameters;                                 // 0x6B0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDelegateHandleController             Delegate_Handle_Controller;                        // 0x6E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_RezIn_C");
		return Clss;
	}

	void Spawn_Drone_VFX(class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
	void Set_Timelines__Playrates(float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1);
	void Spawn_Teleport_In_VFX(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
	void Restore_Character_Materials(bool* Fully_Completed, int32 CurrentReplacementIndex, int32 Itr, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* Temp_object_Variable, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Clean_Up_Teleportation_Light(bool CallFunc_IsValid_ReturnValue);
	void Spawn_Teleportation_Light(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UPointLightComponent* CallFunc_AddComponent_ReturnValue);
	void Spawn_Teleportation_Drone(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_TeleportationDrone_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast);
	void Stop_Looping_Audio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void TFX_GlowCharacterMesh__FinishedFunc();
	void TFX_GlowCharacterMesh__UpdateFunc();
	void TFX_ResOutCharacterMesh__FinishedFunc();
	void TFX_ResOutCharacterMesh__UpdateFunc();
	void OnBurstGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Pre_Sequence_Change();
	void Set_Additional_Niagara_Parameters_on_Spawned_FX(class UNiagaraComponent* Spawned_Teleport_In_FX);
	void EndVFX();
	void Set_Additional_Niagara_Parameter_on_Drone_FX(class UNiagaraComponent* Drone_FX);
	void OnCosmeticPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, enum class EFortCustomPartType PartType);
	void TriggerVFX();
	void ExecuteUbergraph_GCN_RezIn(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDelegateHandleController& CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* K2Node_CustomEvent_Spawned_Teleport_In_FX, class UNiagaraComponent* K2Node_CustomEvent_Drone_FX, TSoftObjectPtr<class UMaterialInterface> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FGuid& CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue, bool CallFunc_RemoveMaterialOverrideLocal_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array, class AFortPlayerPawn* K2Node_CustomEvent_Pawn, class UCustomCharacterPart* K2Node_CustomEvent_Part, class USkeletalMeshComponent* K2Node_CustomEvent_MeshPart, enum class EFortCustomPartType K2Node_CustomEvent_PartType, float CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
