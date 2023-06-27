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

// 0xF3 (0xB73 - 0xA80)
// BlueprintGeneratedClass BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C
class ABGA_Athena_SCMachine_Pickup_C : public ABuildingGameplayActorSpawnChip
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     OverlapCollision;                                  // 0xA88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ParentMesh;                                        // 0xA90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortLinkToActorComponent*             FortLinkToActor;                                   // 0xA98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SC_Machine_Memory_Card_Loop_Cue;                   // 0xAA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpawnInEffect;                                     // 0xAA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BackgroundGlow;                                    // 0xAB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Card;                                              // 0xAB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        UnHide;                                            // 0xAC0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E77[0x4];                                     // Fixing Size After Last Property..
	double                                       DelayBeforeUnhide;                                 // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        OwnerTeam;                                         // 0xAD0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3E78[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          Timer_DestroyPickup;                               // 0xAD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_PickupLife;                                    // 0xAE0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  InteractText;                                      // 0xB08(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                       SpawnOutParticle;                                  // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PickupSound;                                       // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnSoundPlayed;                                  // 0xB30(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E79[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            SpawnInSound;                                      // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPendingKill;                                     // 0xB40(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideAndKill;                                       // 0xB41(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E7A[0x6];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        Row_PickUpInteractTime;                            // 0xB48(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsDelayingDeath;                                   // 0xB70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OwnerDiedInVortex;                                 // 0xB71(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CollectedPickup;                                   // 0xB72(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BGA_Athena_SCMachine_Pickup_C");
		return Clss;
	}

	bool BuildDataRegistryResolverScope(TArray<class FName>* InOutResolverScopes, int32* InOutPriority, class AFortMinigame* CallFunc_GetMinigame_ReturnValue, class FName CallFunc_GetSpatialGameplayInterfaceFNameForActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array);
	class UObject* GetCacheContextOverride();
	void OnRep_CollectedPickup();
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, float* OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted, float CallFunc_GetValueAtLevelWithContext_ReturnValue);
	bool CanHandleCleanupEvents(bool CallFunc_IsActorBeingDestroyed_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue);
	void OnRep_HideAndKill();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_UnHide(bool CallFunc_Conv_IntToBool_ReturnValue, int32 Temp_int_Array_Index_Variable, double CallFunc_GetGameTimeInSeconds_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AFortPlayerController* CallFunc_Array_Get_Item, uint8 CallFunc_GetActorTeam_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DestroyPickup();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void CollectPickup();
	void OnDestroyPickup();
	void SpawnSound();
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void HideAndKillPickup();
	void DelayDestroyPickup();
	void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser);
	void ExecuteUbergraph_BGA_Athena_SCMachine_Pickup(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPawn* K2Node_Event_InteractingPawn, enum class EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, bool CallFunc_IsVisible_ReturnValue, float CallFunc_GetValueAtLevelWithContext_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue_1, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AFortPlayerController* CallFunc_Array_Get_Item_1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetValueAtLevelWithContext_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue_2, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsInVortex_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool CallFunc_WakeUp_ReturnValue, bool CallFunc_WakeUp_ReturnValue_1, class APlayspace* CallFunc_GetPlayspaceForActor_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
