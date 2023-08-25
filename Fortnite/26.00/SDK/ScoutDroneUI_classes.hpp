#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA0 - 0x80)
// Class ScoutDroneUI.FortMobileActionButtonBehaviorExtension_ScoutDroneUse
class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse : public UFortMobileActionButtonBehaviorExtension
{
public:
	struct FGameplayTagContainer                 ContextTagToCheck;                                 // 0x80(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse* GetDefaultObj();

};

// 0x30 (0x78 - 0x48)
// Class ScoutDroneUI.FortMobileButtonBehaviorComponent_ScoutDronePickupItems
class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems : public UFortMobileButtonBehaviorComponent_Visibility
{
public:
	struct FGameplayTagContainer                 HoldingItemsTags;                                  // 0x48(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortControllerComponent_Interaction> InteractionComponent;                              // 0x68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D24[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems* GetDefaultObj();

};

// 0xB8 (0x158 - 0xA0)
// Class ScoutDroneUI.DronePickUpIndicatorComponent
class UDronePickUpIndicatorComponent : public UGameFrameworkComponent
{
public:
	TSubclassOf<class UFortActorIndicatorWidget> ItemIndicatorType;                                 // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortActorIndicatorWidget> DbnoIndicatorType;                                 // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUserWidgetPool                       IndicatorPool;                                     // 0xB0(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D2D[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDronePickUpIndicatorComponent* GetDefaultObj();

	void OnDroneDestroyed(class UActor* DestroyedActor);
	void Init(class UFortScoutDrone* Drone);
};

// 0x120 (0x3C8 - 0x2A8)
// Class ScoutDroneUI.ScoutDroneHUD
class UScoutDroneHUD : public UUserWidget
{
public:
	float                                        TimeToConfirmTargetCache;                          // 0x2A8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InitialHealth;                                     // 0x2AC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WarningRange;                                      // 0x2B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SignalLossRange;                                   // 0x2D8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        UpdateSignalInterval;                              // 0x300(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          MarkAbilityTag;                                    // 0x328(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          DismissAbilityTag;                                 // 0x32C(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          InteractAbilityTag;                                // 0x330(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          PickUpAbilityTag;                                  // 0x334(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          PickUpTargetsChangedTag;                           // 0x338(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          SpeedBoostAbilityTag;                              // 0x33C(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              Overlay_Health;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              Overlay_EnergyLevel;                               // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              Overlay_Reticle;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              Overlay_TetheringIndicator;                        // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxHealthCache;                                    // 0x360(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxEnergyCache;                                    // 0x364(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D58[0x48];                                    // Fixing Size After Last Property 
	struct FTimerHandle                          SignalDataTimerHandle;                             // 0x3B0(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FScoutDroneWidgetIdentifier>   HUDIdentifiers;                                    // 0x3B8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UScoutDroneHUD* GetDefaultObj();

	void OnTargetingStatusChanged(struct FScoutDroneStatusData& StatusData);
	void OnReticleChangeAbilityActivated(const struct FGameplayTag& UpdatedTag);
	void OnOwningPlayerDamaged();
	void OnDroneSpeedBoostAbilityUsed();
	void OnDroneSpeedBoostAbilityEnd();
	void OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage);
	void OnDronePickUpTargetsEmpty();
	void OnDronePickUpTargetsAvailable();
	void OnDronePickUpAbilityUsed();
	void OnDronePickUpAbilityEnd();
	void OnDroneMarkAbilityUsed();
	void OnDroneMarkAbilityEnd();
	void OnDroneInteractAbilityUsed();
	void OnDroneInteractAbilityEnd();
	void OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth);
	void OnDroneEnergyChanged(float EnergyPercentage);
	void OnDroneDismissAbilityUsed();
	float GetTargetConfirmationTime();
	class UFortScoutDrone* GetControlledDrone();
};

// 0x20 (0x2C8 - 0x2A8)
// Class ScoutDroneUI.ScoutDroneTetherIndicator
class UScoutDroneTetherIndicator : public UUserWidget
{
public:
	uint8                                        Pad_3D64[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UScoutDroneTetherIndicator* GetDefaultObj();

	class UFortScoutDrone* GetControlledDrone();
	void BP_WhileInWarningRange(float SignalIntensityPercentage);
	void BP_OnExitWarningRange();
	void BP_OnEnterWarningRange();
	void BP_OnEnterSignalLossRange();
};

// 0x20 (0x2D0 - 0x2B0)
// Class ScoutDroneUI.ScoutDroneUIDirector
class UScoutDroneUIDirector : public UDynamicUIDirectorBase
{
public:
	struct FGameplayTagContainer                 HUDTagsToHide;                                     // 0x2B0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UScoutDroneUIDirector* GetDefaultObj();

	void BP_OnScoutDroneDismissed();
	void BP_OnScoutDroneDeployed();
};

}


