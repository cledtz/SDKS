#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x600 (0x2100 - 0x1B00)
// Class NevadaRuntime.FortNevadaVehicle
class UFortNevadaVehicle : public UFortAthenaSKVehicle
{
public:
	struct FNevadaState                          ServerReplicatedState;                             // 0x1B00(0x14)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4206[0x4];                                     // Fixing Size After Last Property 
	class UFortNevadaVehicleConfigs*             FortNevadaVehicleConfigs;                          // 0x1B18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortNevadaAudioController> FortNevadaAudioControllerClass;                    // 0x1B20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChildActorComponent*                  AudioControllerActor;                              // 0x1B28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortNevadaAudioController*            FortNevadaAudioController;                         // 0x1B30(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleGamepadLiftInputs             LiftInputs;                                        // 0x1B38(0x8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        LastBatteryRegenTickTime;                          // 0x1B40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostThrust;                                      // 0x1B44(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostDrag;                                        // 0x1B45(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostInputReleased;                               // 0x1B46(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseTractorBeamUprightForce;                       // 0x1B47(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeadBattery;                                      // 0x1B48(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_420D[0x3];                                     // Fixing Size After Last Property 
	float                                        TractorBeamExtraLengthForExtents;                  // 0x1B4C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CrashingDesiredUp;                                 // 0x1B50(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostStartTime;                                    // 0x1B68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostPitchAlpha;                                   // 0x1B6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostChargeProgress;                               // 0x1B70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BoostChargesAvailable;                             // 0x1B74(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CachedBoostMoveDir;                                // 0x1B78(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentStateStartTime;                             // 0x1B90(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeightAtLandingTime;                               // 0x1B94(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CrashingScrapingTime;                              // 0x1B98(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CrashingNotMovingTimer;                            // 0x1B9C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AltimeterTraceHitDistance;                         // 0x1BA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TractorBeamAppliedForceMagnitude;                  // 0x1BA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimParamDriverSeatLeftRight;                      // 0x1BA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimParamDriverSeatForwardBack;                    // 0x1BAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceNegativeLift;                                // 0x1BB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForcePositiveLift;                                // 0x1BB1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInitialLift;                                      // 0x1BB2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENevadaFlightStates               CurrentVehicleState;                               // 0x1BB3(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4213[0x4C];                                    // Fixing Size After Last Property 
	TWeakObjectPtr<class ULandscapeProxy>        CachedLandscapeProxy;                              // 0x1C00(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode_AthenaVehicle> PassengerCameraModeClass;                          // 0x1C08(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeamChargeStarted;                         // 0x1C10(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4215[0x7];                                     // Fixing Size After Last Property 
	struct FTowhookParams                        TowhookParams;                                     // 0x1C18(0xD0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAthenaVehicle>        AttachedPawnHiddenVehicle;                         // 0x1CE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>    TractorBeamAttachedPrimitive;                      // 0x1CF0(0x8)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaVehicle*                    SpawnedTractorBeamVictimVehicle;                   // 0x1CF8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>    PreviousTractorBeamAttachedPrimitive;              // 0x1D00(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UActor*>                        TractorBeamTargetedActors;                         // 0x1D08(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UActor*>                        PreviouslyTargetedActors;                          // 0x1D18(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UActor*                                TractorBeamAttachedActor;                          // 0x1D28(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                TractorBeamTargetedActor;                          // 0x1D30(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TractorBeamTargetPosition;                         // 0x1D38(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4219[0x1];                                     // Fixing Size After Last Property 
	bool                                         bBeamButtonReleased;                               // 0x1D51(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_421A[0x6];                                     // Fixing Size After Last Property 
	TArray<enum class EObjectTypeQuery>          TractorBeamObjectsTypes;                           // 0x1D58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 DisallowedBeamTags;                                // 0x1D68(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 AlwaysAllowedBeamTags;                             // 0x1D88(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4220[0x98];                                    // Fixing Size After Last Property 
	class UNiagaraSystem*                        TractorBeamFX_Unattached;                          // 0x1E40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        TractorBeamFX_Attached;                            // 0x1E48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     BeamPSC;                                           // 0x1E50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4223[0x50];                                    // Fixing Size After Last Property 
	enum class ETractorBeamState                 TractorBeamState;                                  // 0x1EA8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4225[0x27];                                    // Fixing Size After Last Property 
	float                                        TractorBeamDeactivationTimestamp;                  // 0x1ED0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TractorBeamDisruptedTimestamp;                     // 0x1ED4(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4227[0x80];                                    // Fixing Size After Last Property 
	float                                        CockpitHealth;                                     // 0x1F58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Native_CockpitEnabled;                             // 0x1F5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastCockpitHealthTickTime;                         // 0x1F60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastCockpitDamageTime;                             // 0x1F64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CockpitDissolveStartTime;                          // 0x1F68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4228[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        CockpitMaxHealth;                                  // 0x1F70(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitHealthTickRate;                             // 0x1F98(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitHealthPerTick;                              // 0x1FC0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitRegenDelay;                                 // 0x1FE8(0x28)(Edit, NativeAccessSpecifierPublic)
	class UCurveFloat*                           CockpitHitMaterialWobble;                          // 0x2010(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastDamageAlpha;                                   // 0x2018(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDissolvingCockpit;                                // 0x201C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestoringCockpit;                                 // 0x201D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCockpitWobble;                                    // 0x201E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_422D[0x1];                                     // Fixing Size After Last Property 
	class UStaticMeshComponent*                  NativeComp_ShieldMesh;                             // 0x2020(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Native_CockpitMaterial;                            // 0x2028(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Native_EnergyRingMatInstance;                      // 0x2030(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Native_EnergyFieldMatInstance;                     // 0x2038(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       NativeComp_DamageStateLastLife;                    // 0x2040(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       NativeComp_DamageState;                            // 0x2048(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Native_LastHitLocation;                            // 0x2050(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Native_LastHitNormal;                              // 0x2068(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     NativeComp_DamageStateFX;                          // 0x2080(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     NativeComp_HologramScreen;                         // 0x2088(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     NativeComp_SpeedLines;                             // 0x2090(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Native_EnergyRingMat;                              // 0x2098(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Native_EnergyFieldMat;                             // 0x20A0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NativeSys_DamageStateFX;                           // 0x20A8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NativeSys_CockpitDestroyed;                        // 0x20B0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            CockpitDamagedSound;                               // 0x20B8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            CockpitDestroyedSound;                             // 0x20C0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            CockpitRespawnSound;                               // 0x20C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Native_DamageStateSound;                           // 0x20D0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Native_DamageStateLastLifeSound;                   // 0x20D8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackEffect*                  CockpitDeactivatedForceFeedback;                   // 0x20E0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULegacyCameraShake>        CockpitDestroyedCamShake;                          // 0x20E8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UActor>>            TractorBeamDisallowedClasses;                      // 0x20F0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortNevadaVehicle* GetDefaultObj();

	void SetTractorBeamInactive();
	void SetTractorBeamEnabled(bool bEnabled);
	void SetCannonEnabled(bool bEnabled);
	void SetAttachedPawnAddedVelocity(struct FVector& AddedVelocity);
	void OnTractorBeamDetached(class UActor* DetachedActor, struct FVector& LastBeamPosition);
	void OnTractorBeamDeactivated(struct FVector& LastBeamPosition);
	void OnTractorBeamChargeStarted();
	void OnTractorBeamAttached();
	void OnTractorBeamActivated();
	void OnTargetedActorChanged(class UActor* NewTargetedActor);
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
	void OnAttachedActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnAttachedActorDestroyed(class UActor* DestroyedActor);
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
	class UFortNevadaAudioController* GetAudioController();
	void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled);
	void DisruptTractorBeam();
	void AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector& Impulse, class FName BoneName, bool bVelChange);
};

// 0xE8 (0x6E0 - 0x5F8)
// Class NevadaRuntime.FortNevadaVehicleAnimInstance
class UFortNevadaVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	class UFortNevadaVehicle*                    NevadaVehicle;                                     // 0x5F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsAttached;                           // 0x600(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsCharging;                           // 0x601(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsActive;                             // 0x602(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsInactive;                           // 0x603(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsOn;                                 // 0x604(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_HasTarget;                            // 0x605(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_ShouldApplyCustomAO;                  // 0x606(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_423A[0x1];                                     // Fixing Size After Last Property 
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
	uint8                                        Pad_423E[0x2];                                     // Fixing Size After Last Property 
	int32                                        PreviousBoostCount;                                // 0x630(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoostCount;                                        // 0x634(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoostingAgain;                                  // 0x638(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x639(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_423F[0x2];                                     // Fixing Size After Last Property 
	float                                        WingsPlayRate;                                     // 0x63C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamAlpha;                                  // 0x640(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimPitch;                                          // 0x644(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimYaw;                                            // 0x648(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFiringCannon;                                   // 0x64C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4240[0x3];                                     // Fixing Size After Last Property 
	float                                        DistanceFromGround;                                // 0x650(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLanding;                                        // 0x654(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasLanded;                                        // 0x655(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4241[0x2];                                     // Fixing Size After Last Property 
	float                                        LandingAlpha;                                      // 0x658(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotLandingMode;                                   // 0x65C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHadBattery;                                       // 0x65D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutOfBattery;                                     // 0x65E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJustGotBattery;                                   // 0x65F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLaunchToDepart;                                   // 0x660(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLaunchToIdle;                                     // 0x661(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPartsLanding;                                   // 0x662(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4244[0x1];                                     // Fixing Size After Last Property 
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
	TSoftObjectPtr<class UAnimMontage>           CannonFiringMontage;                               // 0x690(0x20)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingGearTraceLength;                            // 0x6B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4247[0x2C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNevadaVehicleAnimInstance* GetDefaultObj();

};

// 0x180 (0x1980 - 0x1800)
// Class NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver
{
public:
	class UFortNevadaVehicle*                    NevadaVehicle;                                     // 0x1800(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimLeftRight;                                     // 0x1808(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimForwardBackward;                               // 0x180C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RootAttachmentLoc;                                 // 0x1810(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RootAttachmentRot;                                 // 0x1828(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BoostCount;                                        // 0x1840(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviousBoostCount;                                // 0x1844(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoostingAgain;                                  // 0x1848(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x1849(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4249[0x2];                                     // Fixing Size After Last Property 
	float                                        MinVehicleVelocityToBeMoving;                      // 0x184C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DriverSocketName;                                  // 0x1850(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightHandAttachmentSocketName;                     // 0x1854(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftHandAttachmentSocketName;                      // 0x1858(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightFootAttachmentSocketName;                     // 0x185C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftFootAttachementSocketName;                     // 0x1860(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_424A[0x4];                                     // Fixing Size After Last Property 
	struct FRotator                              RightHandRotationOffset;                           // 0x1868(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              LeftHandRotationOffset;                            // 0x1880(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RightFootRotationOffset;                           // 0x1898(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              LeftFootRotationOffset;                            // 0x18B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RootAttachmentOffset;                              // 0x18C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_424D[0xA0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPlayerAnimInstance_NevadaDriver* GetDefaultObj();

};

// 0x70 (0x1BC0 - 0x1B50)
// Class NevadaRuntime.FortCameraMode_Nevada
class UFortCameraMode_Nevada : public UFortCameraMode_AthenaVehicle
{
public:
	uint8                                        Pad_424E[0x28];                                    // Fixing Size After Last Property 
	struct FVector                               TractorBeamCameraOffset;                           // 0x1B78(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamCameraLerpTime;                         // 0x1B90(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamCameraExtraPitch;                       // 0x1B94(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamInactiveCameraExtraPitch;               // 0x1B98(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamCameraPositionResetDelay;               // 0x1B9C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinPitchForOffset;                                 // 0x1BA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxPitchForOffset;                                 // 0x1BA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               ExtraOffset;                                       // 0x1BA8(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCameraMode_Nevada* GetDefaultObj();

};

// 0xC8 (0x358 - 0x290)
// Class NevadaRuntime.FortNevadaAudioController
class UFortNevadaAudioController : public UActor
{
public:
	struct FVector2D                             SpeedRangeMap;                                     // 0x290(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TurningRangeMap;                                   // 0x2A0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AcceleratingRangeMap;                              // 0x2B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BrakingRangeMap;                                   // 0x2C0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PassByRangeMap;                                    // 0x2D0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LFORangeMap;                                       // 0x2E0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortNevadaVehicle*                    Vehicle;                                           // 0x2F0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLayeredAudioComponent*            LayeredAudioComponent;                             // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedParamValue;                                   // 0x300(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedParamValuePrev;                               // 0x304(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AcceleratingParamValue;                            // 0x308(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BrakingParamValue;                                 // 0x30C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ForwardVector;                                     // 0x310(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ForwardVectorPrev;                                 // 0x328(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TurningParamValue;                                 // 0x340(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PassByParamValue;                                  // 0x344(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LocallyControlledParamValue;                       // 0x348(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LFOParamValue;                                     // 0x34C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_425B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortNevadaAudioController* GetDefaultObj();

	void Update();
	void Init(class UFortNevadaVehicle* InVehicle);
	class UFortNevadaVehicle* GetVehicleActor();
	void CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent);
	void BP_Update();
	void BP_Init();
};

// 0x4A8 (0xD58 - 0x8B0)
// Class NevadaRuntime.FortNevadaVehicleConfigs
class UFortNevadaVehicleConfigs : public UFortPhysicsVehicleConfigs
{
public:
	struct FNevadaMoveModeConfig                 BaseMovement;                                      // 0x8B0(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FNevadaMoveModeConfig                 BoostMovement;                                     // 0x8C4(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FNevadaMoveModeConfig                 ChargingMovement;                                  // 0x8D8(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FDampedSpringConfig                   UprightSpringForce;                                // 0x8EC(0xC)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DebaseLaunchspeed;                                 // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHeight;                                         // 0x8FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHeight;                                         // 0x900(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OnEnterPitchAlpha;                                 // 0x904(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallDamageHeightBuffer;                            // 0x908(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningForce;                                      // 0x90C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrustRotationAlpha;                               // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchDrag;                                         // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawDrag;                                           // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollDrag;                                          // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostThrustDuration;                               // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostDragDuration;                                 // 0x924(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBoostCharges;                                   // 0x928(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostChargeDuration;                               // 0x92C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostChargeDelay;                                  // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostDragFinishSpeed;                              // 0x934(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamRadius;                                 // 0x938(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamWithTargetRadius;                       // 0x93C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamSweepLength;                            // 0x940(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamChargeTime;                             // 0x968(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamDurationTime;                           // 0x990(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamTossImpulseStrengthForward;             // 0x9B8(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamTossImpulseStrengthUpward;              // 0x9E0(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	float                                        TractorBeamShutdownTime;                           // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4260[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        TractorBeamTurnOffDamage;                          // 0xA10(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AllowTractorBeamAIPawns;                           // 0xA38(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	float                                        TractorBeamBreakForceMagnitude;                    // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4263[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        TractorBeamActive;                                 // 0xA68(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamCooldown;                               // 0xA90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamDisruptionCooldown;                     // 0xAB8(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	class FName                                  TractorBeamSocket;                                 // 0xAE0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4264[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               TractorBeamAttachPositionOffset;                   // 0xAE8(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigidBodyErrorCorrection             TractorBeamTargetOverridenErrorCorrection;         // 0xB00(0x34)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        VictimPitchDrag;                                   // 0xB34(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VictimYawDrag;                                     // 0xB38(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VictimRollDrag;                                    // 0xB3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDampedSpringConfig                   TractorBeamVictimUprightForce;                     // 0xB40(0xC)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumReboots;                                        // 0xB4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRebootsDefault;                                 // 0xB50(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingTime;                                   // 0xB54(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingScrapingTime;                           // 0xB58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingTimeSpentNotMoving;                     // 0xB5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedThresholdForCrashed;                          // 0xB60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4266[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        RebootDuration;                                    // 0xB68(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        RebootDelay;                                       // 0xB90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	float                                        LandingTraceRange;                                 // 0xBB8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredLandingDistance;                            // 0xBBC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingDelay_Max;                                  // 0xBC0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingDelay_Min;                                  // 0xBC4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightForMinLandingDelay;                          // 0xBC8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightForMaxLandingDelay;                          // 0xBCC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingPitchAlphaMax;                              // 0xBD0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingPitchAlphaMin;                              // 0xBD4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriverSeatRotationAnimBlendSpeed;                  // 0xBD8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrashingDesiredUpLerpFactor;                       // 0xBDC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrashedLinearDrag;                                 // 0xBE0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedDragCoef;                                    // 0xBE4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedDragCoef2;                                   // 0xBE8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedMaxDragSpeed;                                // 0xBEC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrashedAngularDragMultiplier;                      // 0xBF0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostFOV;                                          // 0xBF4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraTraceInteractRange;                           // 0xBF8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AntiGravityMult;                                   // 0xBFC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialLiftDuration;                               // 0xC00(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4269[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        BatteryCostDuringFlight;                           // 0xC08(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BatteryRegenDelay;                                 // 0xC30(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BatteryRegenTickRate;                              // 0xC58(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BatteryRegenAmount;                                // 0xC80(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxBattery;                                        // 0xCA8(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinBatteryForFlight;                               // 0xCD0(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          CockpitShapeNames;                                 // 0xCF8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitDamageMult;                                 // 0xD08(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitHealth;                                     // 0xD30(0x28)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortNevadaVehicleConfigs* GetDefaultObj();

};

}


