#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x248 (0x2E8 - 0xA0)
// Class EnergyRuntime.FortComponent_Energy
class UFortComponent_Energy : public UPawnComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEnergyCompletelyDrained;                         // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnergyRechargeComplete;                          // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     RechargeDisabledQuery;                             // 0xC0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E52[0x10];                                    // Fixing Size After Last Property
	struct FGameplayTagQuery                     EnergyUseDisabledQuery;                            // 0x118(0x48)(NativeAccessSpecifierPrivate)
	struct FTimerHandle                          BeginRechargeTimerHandle;                          // 0x160(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 EnergyTypeIdentifierTagContainer;                  // 0x168(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        CurrentEnergy;                                     // 0x188(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        NetEnergyDeltaPerSecond;                           // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E56[0x8];                                     // Fixing Size After Last Property
	struct FScalableFloat                        MaxEnergy;                                         // 0x198(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinEnergyForUsing;                                 // 0x1C0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RechargeAmountPerSecond;                           // 0x1E8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RechargeDelayInSeconds;                            // 0x210(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RechargePercentageLimit;                           // 0x238(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FEnergyChannelingData>         ActiveEnergyChannels;                              // 0x260(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FEnergyChannelingData>         NewActiveEnergyChannels;                           // 0x270(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FEnergyRegenOverrideData>      EnergyRegenOverrides;                              // 0x280(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnCurrentEnergyChanged;                            // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnEnergyRechargeBegun;                             // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnEnergyRechargeInterrupted;                       // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnEnergyReachedMax;                                // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnEnergyReachedMinForUsing;                        // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        bRechargingEnabled : 1;                            // Mask: 0x1, PropSize: 0x10x2E0(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsRecharging : 1;                                 // Mask: 0x2, PropSize: 0x10x2E0(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsUsingEnergy : 1;                                // Mask: 0x4, PropSize: 0x10x2E0(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E5B[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortComponent_Energy");
		return Clss;
	}

	bool UseEnergy(float* OutAmountOfEnergyUsed, float AmountOfEnergyToUse, bool bUseEnergyEvenOnFailure, class UObject* OptionalEnergyUser, bool bBroadcastEnergyPercentChanged);
	bool StopUsingEnergy(struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser);
	bool StopAddingEnergy(struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergySource);
	bool StartUsingEnergy(float EnergyToUseToStart, float EnergyToUsePerSecond, struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser);
	bool StartAddingEnergy(float EnergyToAddPerSecond, struct FGameplayTag& EnergySourceIdentifier, class UObject* OptionalEnergySource);
	bool SetAllEnergyUsageFree(bool bShouldEnergyUsageBeFree);
	bool RemoveRegenDataOverride(struct FGameplayTag& RegenOverrideIdentifier);
	void RegisterMutatorUpdatedDelegate(class UPawn* AffectedPawn);
	void OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn);
	void OnMutatorUpdated();
	bool HasSufficientEnergy(float EnergyAmountToTest);
	void HandleAbilitySystemComponentInvalidated();
	void HandleAbilitySystemComponentInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class UFortPlayerPawn* PlayerPawn);
	float GetCurrentEnergyPercentage();
	void ApplyRegenDataOverride(struct FGameplayTag& RegenOverrideIdentifier, float NewRechargeAmountPerSecond, float NewRechargeDelayInSeconds, float NewRechargePercentageLimit);
	bool AddEnergy(float* OutAmountOfEnergyAdded, float AmountOfEnergyToAdd, class UObject* OptionalEnergySource, bool bBroadcastEnergyPercentChanged);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
