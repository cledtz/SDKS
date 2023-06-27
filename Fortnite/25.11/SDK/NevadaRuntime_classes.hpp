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

// 0x600 (0x20C0 - 0x1AC0)
// Class NevadaRuntime.FortNevadaVehicle
class AFortNevadaVehicle : public AFortAthenaSKVehicle
{
public:
	struct FNevadaState                          ServerReplicatedState;                             // 0x1AC0(0x14)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13EA[0x4];                                     // Fixing Size After Last Property..
	class UFortNevadaVehicleConfigs*             FortNevadaVehicleConfigs;                          // 0x1AD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortNevadaAudioController> FortNevadaAudioControllerClass;                    // 0x1AE0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChildActorComponent*                  AudioControllerActor;                              // 0x1AE8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortNevadaAudioController*            FortNevadaAudioController;                         // 0x1AF0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleGamepadLiftInputs             LiftInputs;                                        // 0x1AF8(0x8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        LastBatteryRegenTickTime;                          // 0x1B00(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostThrust;                                      // 0x1B04(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostDrag;                                        // 0x1B05(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostInputReleased;                               // 0x1B06(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseTractorBeamUprightForce;                       // 0x1B07(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeadBattery;                                      // 0x1B08(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13EB[0x3];                                     // Fixing Size After Last Property..
	float                                        TractorBeamExtraLengthForExtents;                  // 0x1B0C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CrashingDesiredUp;                                 // 0x1B10(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostStartTime;                                    // 0x1B28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostPitchAlpha;                                   // 0x1B2C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostChargeProgress;                               // 0x1B30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BoostChargesAvailable;                             // 0x1B34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CachedBoostMoveDir;                                // 0x1B38(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentStateStartTime;                             // 0x1B50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeightAtLandingTime;                               // 0x1B54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CrashingScrapingTime;                              // 0x1B58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CrashingNotMovingTimer;                            // 0x1B5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AltimeterTraceHitDistance;                         // 0x1B60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TractorBeamAppliedForceMagnitude;                  // 0x1B64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimParamDriverSeatLeftRight;                      // 0x1B68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimParamDriverSeatForwardBack;                    // 0x1B6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceNegativeLift;                                // 0x1B70(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForcePositiveLift;                                // 0x1B71(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInitialLift;                                      // 0x1B72(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENevadaFlightStates               CurrentVehicleState;                               // 0x1B73(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13EC[0x4C];                                    // Fixing Size After Last Property..
	TWeakObjectPtr<class ALandscapeProxy>        CachedLandscapeProxy;                              // 0x1BC0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode_AthenaVehicle> PassengerCameraModeClass;                          // 0x1BC8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeamChargeStarted;                         // 0x1BD0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13ED[0x7];                                     // Fixing Size After Last Property..
	struct FTowhookParams                        TowhookParams;                                     // 0x1BD8(0xD0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortAthenaVehicle>        AttachedPawnHiddenVehicle;                         // 0x1CA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>    TractorBeamAttachedPrimitive;                      // 0x1CB0(0x8)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAthenaVehicle*                    SpawnedTractorBeamVictimVehicle;                   // 0x1CB8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>    PreviousTractorBeamAttachedPrimitive;              // 0x1CC0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        TractorBeamTargetedActors;                         // 0x1CC8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        PreviouslyTargetedActors;                          // 0x1CD8(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class AActor*                                TractorBeamAttachedActor;                          // 0x1CE8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TractorBeamTargetedActor;                          // 0x1CF0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TractorBeamTargetPosition;                         // 0x1CF8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13EE[0x1];                                     // Fixing Size After Last Property..
	bool                                         bBeamButtonReleased;                               // 0x1D11(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13EF[0x6];                                     // Fixing Size After Last Property..
	TArray<enum class EObjectTypeQuery>          TractorBeamObjectsTypes;                           // 0x1D18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 DisallowedBeamTags;                                // 0x1D28(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 AlwaysAllowedBeamTags;                             // 0x1D48(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F0[0x98];                                    // Fixing Size After Last Property..
	class UNiagaraSystem*                        TractorBeamFX_Unattached;                          // 0x1E00(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        TractorBeamFX_Attached;                            // 0x1E08(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     BeamPSC;                                           // 0x1E10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F1[0x50];                                    // Fixing Size After Last Property..
	enum class ETractorBeamState                 TractorBeamState;                                  // 0x1E68(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F2[0x27];                                    // Fixing Size After Last Property..
	float                                        TractorBeamDeactivationTimestamp;                  // 0x1E90(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TractorBeamDisruptedTimestamp;                     // 0x1E94(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F3[0x80];                                    // Fixing Size After Last Property..
	float                                        CockpitHealth;                                     // 0x1F18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Native_CockpitEnabled;                             // 0x1F1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastCockpitHealthTickTime;                         // 0x1F20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastCockpitDamageTime;                             // 0x1F24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CockpitDissolveStartTime;                          // 0x1F28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F4[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        CockpitMaxHealth;                                  // 0x1F30(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitHealthTickRate;                             // 0x1F58(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitHealthPerTick;                              // 0x1F80(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitRegenDelay;                                 // 0x1FA8(0x28)(Edit, NativeAccessSpecifierPublic)
	class UCurveFloat*                           CockpitHitMaterialWobble;                          // 0x1FD0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastDamageAlpha;                                   // 0x1FD8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDissolvingCockpit;                                // 0x1FDC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestoringCockpit;                                 // 0x1FDD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCockpitWobble;                                    // 0x1FDE(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F5[0x1];                                     // Fixing Size After Last Property..
	class UStaticMeshComponent*                  NativeComp_ShieldMesh;                             // 0x1FE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Native_CockpitMaterial;                            // 0x1FE8(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Native_EnergyRingMatInstance;                      // 0x1FF0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Native_EnergyFieldMatInstance;                     // 0x1FF8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       NativeComp_DamageStateLastLife;                    // 0x2000(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       NativeComp_DamageState;                            // 0x2008(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Native_LastHitLocation;                            // 0x2010(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Native_LastHitNormal;                              // 0x2028(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     NativeComp_DamageStateFX;                          // 0x2040(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     NativeComp_HologramScreen;                         // 0x2048(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     NativeComp_SpeedLines;                             // 0x2050(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Native_EnergyRingMat;                              // 0x2058(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Native_EnergyFieldMat;                             // 0x2060(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NativeSys_DamageStateFX;                           // 0x2068(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NativeSys_CockpitDestroyed;                        // 0x2070(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            CockpitDamagedSound;                               // 0x2078(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            CockpitDestroyedSound;                             // 0x2080(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            CockpitRespawnSound;                               // 0x2088(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Native_DamageStateSound;                           // 0x2090(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Native_DamageStateLastLifeSound;                   // 0x2098(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackEffect*                  CockpitDeactivatedForceFeedback;                   // 0x20A0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULegacyCameraShake>        CockpitDestroyedCamShake;                          // 0x20A8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AActor>>            TractorBeamDisallowedClasses;                      // 0x20B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNevadaVehicle");
		return Clss;
	}

	void SetTractorBeamInactive();
	void SetTractorBeamEnabled(bool bEnabled);
	void SetCannonEnabled(bool bEnabled);
	void SetAttachedPawnAddedVelocity(struct FVector& AddedVelocity);
	void OnTractorBeamDetached(class AActor* DetachedActor, struct FVector& LastBeamPosition);
	void OnTractorBeamDeactivated(struct FVector& LastBeamPosition);
	void OnTractorBeamChargeStarted();
	void OnTractorBeamAttached();
	void OnTractorBeamActivated();
	void OnTargetedActorChanged(class AActor* NewTargetedActor);
	void OnStartDescend();
	void OnStartAscend();
	void OnRep_TractorBeamState(enum class ETractorBeamState PreviousState);
	void OnRep_TractorBeamChargeStarted();
	void OnRep_TractorBeamAttached();
	void OnRep_TargetedActorChanged();
	void OnRep_ReplicatedTargetedActors();
	void OnRep_NevadaState(struct FNevadaState& PrevState);
	void OnRebootStarted();
	void OnRebootFinished();
	void OnOutOfBattery();
	void OnNewVehicleState(enum class ENevadaFlightStates NewVehicleState);
	void OnCrashingStarted();
	void OnCrashedImpact();
	void OnBoostStarted();
	void OnBoostFinished();
	void OnBoostChargeRefilled();
	void OnBatteryRegen(float Newcharge);
	void OnAttachedActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnAttachedActorDestroyed(class AActor* DestroyedActor);
	void NativeToggleCockpit(bool bEnable);
	bool IsTractorBeamDisrupted();
	bool IsTractorBeamAttached();
	bool IsTractorBeamActive();
	struct FVector GetTractorBeamAttachLocation();
	int32 GetNumRebootsAvailable();
	float GetEnergyCanonChargePercent();
	void GetDriverSeatRotationAnimParams(float* OutLeftRight, float* OutForwardBack);
	enum class ENevadaFlightStates GetCurrentVehicleState();
	float GetBoostChargeTimeRemaining();
	int32 GetBoostChargesAvailable();
	float GetBoostChargeProgress();
	float GetBatteryCharge();
	class AFortNevadaAudioController* GetAudioController();
	void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled);
	void DisruptTractorBeam();
	void AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector& Impulse, class FName BoneName, bool bVelChange);
};

// 0xE8 (0x6E0 - 0x5F8)
// Class NevadaRuntime.FortNevadaVehicleAnimInstance
class UFortNevadaVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	class AFortNevadaVehicle*                    NevadaVehicle;                                     // 0x5F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsAttached;                           // 0x600(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsCharging;                           // 0x601(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsActive;                             // 0x602(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsInactive;                           // 0x603(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsOn;                                 // 0x604(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_HasTarget;                            // 0x605(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_ShouldApplyCustomAO;                  // 0x606(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F6[0x1];                                     // Fixing Size After Last Property..
	float                                        TractorBeam_LookAtPitch;                           // 0x608(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeam_LookAtYaw;                             // 0x60C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanLeftRight;                                     // 0x610(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanForwardBackward;                               // 0x614(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanValue;                                         // 0x618(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousLeanValue;                                 // 0x61C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityZValue;                                    // 0x620(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanDelta;                                         // 0x624(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTurnAgain;                                        // 0x628(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHadDriver;                                        // 0x629(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJustGotDriver;                                    // 0x62A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJustLostDriver;                                   // 0x62B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasBoosting;                                      // 0x62C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoosting;                                       // 0x62D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F7[0x2];                                     // Fixing Size After Last Property..
	int32                                        PreviousBoostCount;                                // 0x630(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoostCount;                                        // 0x634(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoostingAgain;                                  // 0x638(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x639(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F8[0x2];                                     // Fixing Size After Last Property..
	float                                        WingsPlayRate;                                     // 0x63C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamAlpha;                                  // 0x640(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimPitch;                                          // 0x644(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimYaw;                                            // 0x648(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFiringCannon;                                   // 0x64C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F9[0x3];                                     // Fixing Size After Last Property..
	float                                        DistanceFromGround;                                // 0x650(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLanding;                                        // 0x654(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasLanded;                                        // 0x655(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FA[0x2];                                     // Fixing Size After Last Property..
	float                                        LandingAlpha;                                      // 0x658(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotLandingMode;                                   // 0x65C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHadBattery;                                       // 0x65D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutOfBattery;                                     // 0x65E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJustGotBattery;                                   // 0x65F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLaunchToDepart;                                   // 0x660(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLaunchToIdle;                                     // 0x661(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPartsLanding;                                   // 0x662(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FB[0x1];                                     // Fixing Size After Last Property..
	class FName                                  TractorBeamSocketName;                             // 0x664(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TractorBeamAimCurveName;                           // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NevadaVehicleInterruptName;                        // 0x66C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LandingTraceRightName;                             // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LandingTraceLeftName;                              // 0x674(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLeanDeltaInterruptMagnitude;                    // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinForwardSpeedToBeMoving;                         // 0x67C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinForwardSpeedToPlayWings;                        // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinWingsPlayRate;                                  // 0x684(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWingsPlayRate;                                  // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WingsPlayRateInterpSpeed;                          // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           CannonFiringMontage;                               // 0x690(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingGearTraceLength;                            // 0x6B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FC[0x24];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNevadaVehicleAnimInstance");
		return Clss;
	}

};

// 0x180 (0x1980 - 0x1800)
// Class NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver
{
public:
	class AFortNevadaVehicle*                    NevadaVehicle;                                     // 0x1800(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimLeftRight;                                     // 0x1808(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimForwardBackward;                               // 0x180C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RootAttachmentLoc;                                 // 0x1810(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RootAttachmentRot;                                 // 0x1828(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BoostCount;                                        // 0x1840(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviousBoostCount;                                // 0x1844(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoostingAgain;                                  // 0x1848(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x1849(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FD[0x2];                                     // Fixing Size After Last Property..
	float                                        MinVehicleVelocityToBeMoving;                      // 0x184C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DriverSocketName;                                  // 0x1850(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightHandAttachmentSocketName;                     // 0x1854(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftHandAttachmentSocketName;                      // 0x1858(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightFootAttachmentSocketName;                     // 0x185C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftFootAttachementSocketName;                     // 0x1860(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FE[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              RightHandRotationOffset;                           // 0x1868(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              LeftHandRotationOffset;                            // 0x1880(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RightFootRotationOffset;                           // 0x1898(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              LeftFootRotationOffset;                            // 0x18B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RootAttachmentOffset;                              // 0x18C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FF[0xA0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAnimInstance_NevadaDriver");
		return Clss;
	}

};

// 0x70 (0x1BB0 - 0x1B40)
// Class NevadaRuntime.FortCameraMode_Nevada
class UFortCameraMode_Nevada : public UFortCameraMode_AthenaVehicle
{
public:
	uint8                                        Pad_1400[0x28];                                    // Fixing Size After Last Property..
	struct FVector                               TractorBeamCameraOffset;                           // 0x1B68(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamCameraLerpTime;                         // 0x1B80(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamCameraExtraPitch;                       // 0x1B84(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamInactiveCameraExtraPitch;               // 0x1B88(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamCameraPositionResetDelay;               // 0x1B8C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinPitchForOffset;                                 // 0x1B90(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxPitchForOffset;                                 // 0x1B94(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               ExtraOffset;                                       // 0x1B98(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCameraMode_Nevada");
		return Clss;
	}

};

// 0xC8 (0x350 - 0x288)
// Class NevadaRuntime.FortNevadaAudioController
class AFortNevadaAudioController : public AActor
{
public:
	struct FVector2D                             SpeedRangeMap;                                     // 0x288(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TurningRangeMap;                                   // 0x298(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AcceleratingRangeMap;                              // 0x2A8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BrakingRangeMap;                                   // 0x2B8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PassByRangeMap;                                    // 0x2C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LFORangeMap;                                       // 0x2D8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortNevadaVehicle*                    Vehicle;                                           // 0x2E8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLayeredAudioComponent*            LayeredAudioComponent;                             // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedParamValue;                                   // 0x2F8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedParamValuePrev;                               // 0x2FC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AcceleratingParamValue;                            // 0x300(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BrakingParamValue;                                 // 0x304(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ForwardVector;                                     // 0x308(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ForwardVectorPrev;                                 // 0x320(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TurningParamValue;                                 // 0x338(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PassByParamValue;                                  // 0x33C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LocallyControlledParamValue;                       // 0x340(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LFOParamValue;                                     // 0x344(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1401[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNevadaAudioController");
		return Clss;
	}

	void Update();
	void Init(class AFortNevadaVehicle* InVehicle);
	class AFortNevadaVehicle* GetVehicleActor();
	void CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent);
	void BP_Update();
	void BP_Init();
};

// 0x4A8 (0xD50 - 0x8A8)
// Class NevadaRuntime.FortNevadaVehicleConfigs
class UFortNevadaVehicleConfigs : public UFortPhysicsVehicleConfigs
{
public:
	struct FNevadaMoveModeConfig                 BaseMovement;                                      // 0x8A8(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FNevadaMoveModeConfig                 BoostMovement;                                     // 0x8BC(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FNevadaMoveModeConfig                 ChargingMovement;                                  // 0x8D0(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FDampedSpringConfig                   UprightSpringForce;                                // 0x8E4(0xC)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DebaseLaunchspeed;                                 // 0x8F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHeight;                                         // 0x8F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHeight;                                         // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OnEnterPitchAlpha;                                 // 0x8FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallDamageHeightBuffer;                            // 0x900(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningForce;                                      // 0x904(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrustRotationAlpha;                               // 0x908(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchDrag;                                         // 0x90C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawDrag;                                           // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollDrag;                                          // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostThrustDuration;                               // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostDragDuration;                                 // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBoostCharges;                                   // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostChargeDuration;                               // 0x924(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostChargeDelay;                                  // 0x928(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostDragFinishSpeed;                              // 0x92C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamRadius;                                 // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamWithTargetRadius;                       // 0x934(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamSweepLength;                            // 0x938(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamChargeTime;                             // 0x960(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamDurationTime;                           // 0x988(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamTossImpulseStrengthForward;             // 0x9B0(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamTossImpulseStrengthUpward;              // 0x9D8(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	float                                        TractorBeamShutdownTime;                           // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1402[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        TractorBeamTurnOffDamage;                          // 0xA08(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AllowTractorBeamAIPawns;                           // 0xA30(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	float                                        TractorBeamBreakForceMagnitude;                    // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1403[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        TractorBeamActive;                                 // 0xA60(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamCooldown;                               // 0xA88(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamDisruptionCooldown;                     // 0xAB0(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	class FName                                  TractorBeamSocket;                                 // 0xAD8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1404[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               TractorBeamAttachPositionOffset;                   // 0xAE0(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigidBodyErrorCorrection             TractorBeamTargetOverridenErrorCorrection;         // 0xAF8(0x34)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        VictimPitchDrag;                                   // 0xB2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VictimYawDrag;                                     // 0xB30(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VictimRollDrag;                                    // 0xB34(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDampedSpringConfig                   TractorBeamVictimUprightForce;                     // 0xB38(0xC)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumReboots;                                        // 0xB44(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRebootsDefault;                                 // 0xB48(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingTime;                                   // 0xB4C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingScrapingTime;                           // 0xB50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingTimeSpentNotMoving;                     // 0xB54(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedThresholdForCrashed;                          // 0xB58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1405[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        RebootDuration;                                    // 0xB60(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        RebootDelay;                                       // 0xB88(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	float                                        LandingTraceRange;                                 // 0xBB0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredLandingDistance;                            // 0xBB4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingDelay_Max;                                  // 0xBB8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingDelay_Min;                                  // 0xBBC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightForMinLandingDelay;                          // 0xBC0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightForMaxLandingDelay;                          // 0xBC4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingPitchAlphaMax;                              // 0xBC8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingPitchAlphaMin;                              // 0xBCC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriverSeatRotationAnimBlendSpeed;                  // 0xBD0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrashingDesiredUpLerpFactor;                       // 0xBD4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrashedLinearDrag;                                 // 0xBD8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedDragCoef;                                    // 0xBDC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedDragCoef2;                                   // 0xBE0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedMaxDragSpeed;                                // 0xBE4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrashedAngularDragMultiplier;                      // 0xBE8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostFOV;                                          // 0xBEC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraTraceInteractRange;                           // 0xBF0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AntiGravityMult;                                   // 0xBF4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialLiftDuration;                               // 0xBF8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1406[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        BatteryCostDuringFlight;                           // 0xC00(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BatteryRegenDelay;                                 // 0xC28(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BatteryRegenTickRate;                              // 0xC50(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BatteryRegenAmount;                                // 0xC78(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxBattery;                                        // 0xCA0(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinBatteryForFlight;                               // 0xCC8(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          CockpitShapeNames;                                 // 0xCF0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitDamageMult;                                 // 0xD00(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitHealth;                                     // 0xD28(0x28)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNevadaVehicleConfigs");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
