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

// 0x378 (0x418 - 0xA0)
// Class SuperstormRuntime.TempestLightningComponent
class UTempestLightningComponent : public UGameFrameworkComponent
{
public:
	TSubclassOf<class AFortGameplayEffectDeliveryActor> LightningBoltClass;                                // 0xA0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTempestLightningBoltEffectContainer> LightningBoltTargetEffectContainers;               // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UTargetingPreset*                      LightningBoltTargetingPreset;                      // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             FindTargetablePawnsQuery;                          // 0xC0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             FindTargetableLocationQuery;                       // 0xC8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EnvironmentQueryParamName_LightningRadius;         // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EnvironmentQueryParamName_MinLightningTargetDistance; // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningCloudHeight;                              // 0xD8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningRadius;                                   // 0x100(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinLightningTargetDistance;                        // 0x128(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningFrequencyMin;                             // 0x150(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningFrequencyMax;                             // 0x178(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltsMin;                                 // 0x1A0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltsMax;                                 // 0x1C8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltIntervalMin;                          // 0x1F0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltIntervalMax;                          // 0x218(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltSeparationDistance;                   // 0x240(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningStruckPawnReselectionInterval;            // 0x268(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltTelegraphDuration;                    // 0x290(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltImpactIgnitionRadius;                 // 0x2B8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltGrassIgnitionRadius;                  // 0x2E0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltGrassFirePropagationFuel;             // 0x308(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          LightningAreaTargetTelegraphCue;                   // 0x330(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          LightningBoltTargetTelegraphCue;                   // 0x334(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTempestLightningBoltData>     LightningBoltData;                                 // 0x338(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_858C[0xD0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TempestLightningComponent");
		return Clss;
	}

	float GetLightningRadius();
	float GetCloudHeight();
};

// 0x490 (0x530 - 0xA0)
// Class SuperstormRuntime.TempestTornadoForcesComponent
class UTempestTornadoForcesComponent : public UGameFrameworkComponent
{
public:
	FMulticastInlineDelegateProperty_            OnActorAddedToTornadoForces;                       // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorRemovedFromTornadoForces;                   // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ConfigHandle;                                      // 0xC0(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                  PhysicsPresetTagsAngularDampingToOverride;         // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AngularDampingOverride;                            // 0xE0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           PawnInGE;                                          // 0x108(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EFortPhysicsObjectType, struct FScalableFloat> ObjectTypeToMaxCapCount;                           // 0x110(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TagsToIgnore;                                      // 0x160(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           RecentlyRemovedGE;                                 // 0x180(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTargetingPreset*                      TargetingPreset;                                   // 0x188(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          DamageSetByCallerTag;                              // 0x190(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_858E[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UGameplayEffect>           PeriodicDamageGE;                                  // 0x198(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           BurstDamageGE;                                     // 0x1A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          TornadoActiveCue;                                  // 0x1A8(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          PlayerNearCue;                                     // 0x1AC(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          PawnInCue;                                         // 0x1B0(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_858F[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        PlayerNearRange;                                   // 0x1B8(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BlockAbilitiesWithTag;                             // 0x1E0(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FTornadoClientSimulationArray         ActorsToClientSimulate;                            // 0x200(0x118)(Net, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8590[0x118];                                   // Fixing Size After Last Property..
	struct FTargetingRequestHandle               AsyncTargetingHandle;                              // 0x430(0x4)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8591[0x4];                                     // Fixing Size After Last Property..
	TSet<class AFortPlayerPawn*>                 PreviouslyNearPlayers;                             // 0x438(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8592[0xA8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TempestTornadoForcesComponent");
		return Clss;
	}

	void OnVehicleInTornadoPlayerExit(class AFortPlayerControllerAthena* PlayerController, class AFortAthenaVehicle* Vehicle);
	bool IsActorInTornado(class AActor* Actor);
};

// 0x38 (0x2C8 - 0x290)
// Class SuperstormRuntime.TornadoRadialForce
class ATornadoRadialForce : public AFieldSystemActor
{
public:
	float                                        Radius;                                            // 0x290(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x294(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x298(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StopTime;                                          // 0x29C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingDuration;                                  // 0x2A0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutgoingDuration;                                  // 0x2A4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8593[0x8];                                     // Fixing Size After Last Property..
	class URadialVector*                         RadialVector;                                      // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URadialFalloff*                        RadialFalloff;                                     // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOperatorField*                        OperatorField;                                     // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TornadoRadialForce");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
