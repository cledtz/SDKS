#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D0 (0x380 - 0xB0)
// Class StateDrivenActorRuntime.FortActorComponent_StateDriven
class UFortActorComponent_StateDriven : public UFortActorComponent_FortInteractExtension
{
public:
	float                                        OverlapRadius;                                     // 0xB0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_47F0[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               SlottedItemPopOffset;                              // 0xB8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTagQuery>             VariableTagQueries;                                // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                VariableFloats;                                    // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_47F2[0xE0];                                    // Fixing Size After Last Property 
	TWeakObjectPtr<class UStaticMeshComponent>   MeshComponentPtr;                                  // 0x1D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class USphereComponent>       OverlapComponentPtr;                               // 0x1D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortItemEntry                        SlottedItemEntry;                                  // 0x1E0(0x198)(Net, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_47F3[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActorComponent_StateDriven* GetDefaultObj();

	void TriggerCustomEvent(struct FGameplayTag& EventTag);
	void SetCurrentState(struct FStateDrivenState& InCurrentState);
	void PopSlottedItem();
	void PlayBurstGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void OnSetupOverlapEventSettings();
	void OnSetupInteractionEventSettings();
	void OnSetupDamageEventSettings();
	void OnResetCollisionSettings();
	void OnMulticastStateTreeEvent(const struct FGameplayTag& TransitionTag, const struct FGameplayCueTag& BurstGameplayCueTag);
	void OnHandleStateTreeEvent(const struct FGameplayTag& TransitionTag, const struct FGameplayCueTag& BurstGameplayCueTag);
	void HandleInteraction(class UBuildingActor* SelfActor, class UFortPawn* InteractingPawn);
	void HandleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void HandleDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	struct FFortItemEntry GetSlottedItemEntry();
	class FText GetSlottedItemDisplayName();
	class FText GetInteractionString(class UFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	class FText GetFailedInteractionString(class UFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
};

}


