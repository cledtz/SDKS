#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x9A8 - 0x978)
// BlueprintGeneratedClass BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C
class UBGA_LinkedActorWithGravity_Parent_C : public UBuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x978(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*        FortWaterInteraction;                              // 0x980(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     FallingCollisionCapsule;                           // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortLinkToActorComponent*             FortLinkToActor;                                   // 0x990(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*      FortProjectileMovement;                            // 0x998(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         SimulateOnBeginPlay;                               // 0x9A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideOnDeath;                                       // 0x9A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAttached;                                         // 0x9A2(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_33A9[0x1];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          GC_Death;                                          // 0x9A4(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBGA_LinkedActorWithGravity_Parent_C* GetDefaultObj();

	void ShouldStopSimulationOnEnterWater(class UWaterBody* WaterBody, bool* ShouldStop);
	void ShouldStopSimulationOnHit(const struct FHitResult& HitResult, bool* ShouldStop);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class UActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnSimulationResumed();
	void BeginSimulation();
	void BndEvt__BGA_LinkedActorWithGravity_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(class UActor* DamageCauser);
	void OnSimulationStopped(const struct FHitResult& StoppedHit);
	void PlayDeathGC();
	void ReceiveBeginPlay();
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UController* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__BGA_LinkedActorWithGravity_Parent_FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(class UFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void BndEvt__BGA_LinkedActorWithGravity_Parent_FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void BndEvt__BGA_LinkedActorWithGravity_Parent_FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedPhysicsObjectWake__DelegateSignature(class UActor* PhysicsObject);
	void ExecuteUbergraph_BGA_LinkedActorWithGravity_Parent(int32 EntryPoint, class UActor* K2Node_ComponentBoundEvent_PhysicsObject, bool CallFunc_Not_PreBool_ReturnValue, class UActor* K2Node_ComponentBoundEvent_DamageCauser, const struct FHitResult& K2Node_CustomEvent_StoppedHit, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class UController* K2Node_Event_InstigatedBy, class UActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class UFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsFirstBody, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_ShouldStopSimulationOnEnterWater_ShouldStop, class UPrimitiveComponent* K2Node_Event_MyComp, class UActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_ShouldStopSimulationOnHit_ShouldStop, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult);
};

}


