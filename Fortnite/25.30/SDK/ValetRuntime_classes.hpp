#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x560 - 0x540)
// Class ValetRuntime.FortValetMountedGunAnimInstance
class UFortValetMountedGunAnimInstance : public UFortAnimInstance
{
public:
	class UFortDagwoodVehicle*                   VehicleActor;                                      // 0x538(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsingMountedGun;                                // 0x540(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390E[0x3];                                     // Fixing Size After Last Property
	int32                                        SeatIndexCached;                                   // 0x544(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimingYaw;                                         // 0x548(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimingPitch;                                       // 0x54C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeaponRangedForVehicle*           MountedWeapon;                                     // 0x550(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3911[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortValetMountedGunAnimInstance");
		return Clss;
	}

};

// 0x70 (0x880 - 0x810)
// Class ValetRuntime.FortValetPassengerAnimInstance
class UFortValetPassengerAnimInstance : public UFortVehicleOccupantAnimInstance
{
public:
	struct FCachedAnimRelevancyData              IntoVehicleCachedData;                             // 0x810(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedAnimRelevancyData              OutOfVehicleCachedData;                            // 0x824(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortDagwoodVehicle>    DagwoodVehicleInstance;                            // 0x838(0x28)(BlueprintVisible, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurnYaw;                                           // 0x860(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InTime;                                            // 0x864(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutTime;                                           // 0x868(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeTurnYaw;                                   // 0x86C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReloading;                                      // 0x870(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargeting;                                      // 0x871(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFiring;                                         // 0x872(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsingConsumable;                                // 0x873(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInAction;                                       // 0x874(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPassengerBackLeft;                              // 0x875(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsThrowConsumable;                                // 0x876(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargetingOrThrowingConsumable;                  // 0x877(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3917[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortValetPassengerAnimInstance");
		return Clss;
	}

};

// 0x18 (0x610 - 0x5F8)
// Class ValetRuntime.FortValetSedanAnimInstance
class UFortValetSedanAnimInstance : public UFortVehicleAnimInstance
{
public:
	uint8                                        Pad_391A[0x4];                                     // Fixing Size After Last Property
	bool                                         bHasTireMod;                                       // 0x5FC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391D[0x3];                                     // Fixing Size After Last Property
	float                                        TrunkDamageAlpha;                                  // 0x600(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MirrorLeftDamageAlpha;                             // 0x604(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MirrorRightDamageAlpha;                            // 0x608(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3920[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortValetSedanAnimInstance");
		return Clss;
	}

};

// 0xDB0 (0xE50 - 0xA0)
// Class ValetRuntime.DagwoodNetworkPhysicsComponent
class UDagwoodNetworkPhysicsComponent : public UActorComponent
{
public:
	struct FNetworkPhysicsState                  NetworkPhysicsState;                               // 0xA0(0x90)(Net, Transient, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGeneratedLocalInputCmd;                          // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDagwoodManagedState                  ReplicatedManagedState;                            // 0x140(0x458)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	struct FDagwoodManagedState                  InManagedState;                                    // 0x598(0x458)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FDagwoodManagedState                  OutManagedState;                                   // 0x9F0(0x458)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3932[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DagwoodNetworkPhysicsComponent");
		return Clss;
	}

	void SetState_GT(struct FDagwoodInPersistent& In);
	void SetPendingInputCmd(struct FFortDagwoodCmd& In);
	void OnGeneratedLocalInputCmd__DelegateSignature();
	struct FDagwoodState_PT GetState_PT();
	struct FDagwoodInPersistent GetState_GT();
	struct FFortDagwoodCmd GetPendingInputCmd();
};

// 0x60E8 (0x6118 - 0x30)
// Class ValetRuntime.NetworkPhysicsManager
class UNetworkPhysicsManager : public UWorldSubsystem
{
public:
	uint8                                        Pad_3936[0x60E8];                                  // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetworkPhysicsManager");
		return Clss;
	}

};

// 0x50 (0x388 - 0x338)
// Class ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
class UFortAthenaMutator_OverrideValetVehicleParameters : public UFortAthenaMutator
{
public:
	struct FScalableFloat                        MinInitialVehicleFuelPercent;                      // 0x338(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxInitialVehicleFuelPercent;                      // 0x360(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_OverrideValetVehicleParameters");
		return Clss;
	}

	void OnPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContainerTags);
};

// 0x40 (0x1B80 - 0x1B40)
// Class ValetRuntime.FortCameraMode_Dagwood
class UFortCameraMode_Dagwood : public UFortCameraMode_AthenaVehicle
{
public:
	float                                        HorizontalCameraSpaceOffsetWhileTurning;           // 0x1B40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteeringAngleForMaxHorizontalOffset;               // 0x1B44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InAirVerticalOffset;                               // 0x1B48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AirOffsetDampFactor;                               // 0x1B4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedAlphaDampFactor;                              // 0x1B50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInAirRequiredForVertOffset;                    // 0x1B54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VehicleBasePitch;                                  // 0x1B58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizOffsetInterpSpeed;                            // 0x1B5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizOffsetInterpSpeedRecovery;                    // 0x1B60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentSpeedAlpha;                                 // 0x1B64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentVerticalOffset;                             // 0x1B68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentHorizontalOffset;                           // 0x1B6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInAir;                                         // 0x1B70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousSpeed;                                     // 0x1B74(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AppliedPitch;                                      // 0x1B78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394C[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCameraMode_Dagwood");
		return Clss;
	}

};

// 0x8 (0x100 - 0xF8)
// Class ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
class UFortContextualTutorial_VehicleValetLowFuel : public UFortContextualTutorial
{
public:
	uint8                                        Pad_3955[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortContextualTutorial_VehicleValetLowFuel");
		return Clss;
	}

	void HandleVehicleStateChanged(class UFortPlayerPawn* PlayerPawn, class UActor* NewVehicle, class UActor* OldVehicle);
	void HandleStartSkydivingForActivation();
};

// 0x0 (0x28 - 0x28)
// Class ValetRuntime.FortDagwoodModsConfigs
class UFortDagwoodModsConfigs : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDagwoodModsConfigs");
		return Clss;
	}

};

// 0x648 (0x2180 - 0x1B38)
// Class ValetRuntime.FortDagwoodVehicle
class UFortDagwoodVehicle : public UFortAthenaSKMotorVehicle
{
public:
	FMulticastInlineDelegateProperty_            OnStartHandbrakeDelegate;                          // 0x1B38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStopHandbrakeDelegate;                           // 0x1B48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStartHandBrakeCatchupForceDelegate;              // 0x1B58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class ULegacyCameraShake>        HardLandingCameraShake;                            // 0x1B68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULegacyCameraShake>        DriverCamShakeClass;                               // 0x1B70(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULegacyCameraShake>        HandBrakeCamShakeClass;                            // 0x1B78(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVehicleClass                     VehicleClass;                                      // 0x1B80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F8[0x3];                                     // Fixing Size After Last Property
	float                                        FadeDelay;                                         // 0x1B84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeDuration;                                      // 0x1B88(0x4)(Edit, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinBrakeForceForSkid;                              // 0x1B8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinForwardSpeedForSkid;                            // 0x1B90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SpeedLinesCueTag;                                  // 0x1B94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeStartTime;                                     // 0x1B98(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39FB[0x4];                                     // Fixing Size After Last Property
	class UDagwoodNetworkPhysicsComponent*       NetworkPhysicsComponent;                           // 0x1BA0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39FD[0x78];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnTireModHealthChanged;                            // 0x1C20(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        RechargeableBoostPercent;                          // 0x1C30(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39FE[0x4];                                     // Fixing Size After Last Property
	class UFortSplatterSourceComponent*          SplatterSourceComp;                                // 0x1C38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableNativizedTick;                              // 0x1C40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39FF[0x7];                                     // Fixing Size After Last Property
	TArray<class FName>                          PassengerLeanSockets;                              // 0x1C48(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector>                       PassngerLeanRelativeOffsets;                       // 0x1C58(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode_AthenaVehicle> PassengerCameraModeClass;                          // 0x1C68(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode>           PassengerCameraModeClass_ADS;                      // 0x1C70(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          WheelSocketNames;                                  // 0x1C78(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortDagwoodVehicleConfigs*            FortDagwoodVehicleConfigs;                         // 0x1C88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                RearShocks;                                        // 0x1C90(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 OffroadEnvironmentDamageTags;                      // 0x1CA0(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 FireDamageTags;                                    // 0x1CC0(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FVector                               NativeWheelScaleRear;                              // 0x1CE0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               NativeWheelScaleFront;                             // 0x1CF8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               NativeTireScaleRear;                               // 0x1D10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               NativeTireScaleFront;                              // 0x1D28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTireSmokeActive;                                  // 0x1D40(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostFailed;                                      // 0x1D41(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanBoostPitch;                                    // 0x1D42(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWasBrakeSkidding;                                 // 0x1D43(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A06[0x4];                                     // Fixing Size After Last Property
	uint64                                       AccelForceFeedbackHandle;                          // 0x1D48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint64                                       SkidForceFeedbackHandle;                           // 0x1D50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint64                                       BrakeForceFeedbackHandle;                          // 0x1D58(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint64                                       HandBrakeForceFeedbackHandle;                      // 0x1D60(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSpeedLinesActive;                                 // 0x1D68(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A09[0x1F];                                    // Fixing Size After Last Property
	struct FDagwoodRuntimeModifiers              DagwoodRuntimeModifiedProperties;                  // 0x1D88(0x70)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAttachedWheel>                ServerRepWheelData;                                // 0x1DF8(0x10)(Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A0C[0x50];                                    // Fixing Size After Last Property
	struct FVector                               FlipYawForwardTargetDirection;                     // 0x1E58(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               FlipYawOriginalForward;                            // 0x1E70(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETireLocations                    LastPoppedTire;                                    // 0x1E88(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A0F[0x3];                                     // Fixing Size After Last Property
	float                                        RoadTopSpeedMultiplier;                            // 0x1E8C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentBumpiness;                                  // 0x1E90(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentForwardAcceleration;                        // 0x1E94(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PreviousTurnAlpha;                                 // 0x1E98(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentCameraAssistStrength;                       // 0x1E9C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LostGripTime;                                      // 0x1EA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LostGripRightAlpha;                                // 0x1EA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HandbrakeTime;                                     // 0x1EA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HandbrakeStartTime;                                // 0x1EAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlipYawMult;                                       // 0x1EB0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlipTimer;                                         // 0x1EB4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlipExplodeTimer;                                  // 0x1EB8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlipPushForceTimer;                                // 0x1EBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlipAirTimer;                                      // 0x1EC0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlipLanding;                                       // 0x1EC4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FlipStartTime;                                     // 0x1EC8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastFlipDamageTime;                                // 0x1ECC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PreFlipControlLossTimer;                           // 0x1ED0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDidCinematicFlip;                                 // 0x1ED4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanCinematicFlip;                                 // 0x1ED5(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInPopTireVeer;                                    // 0x1ED6(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInFlipRecovery;                                   // 0x1ED7(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExplodeAfterFlip;                                 // 0x1ED8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLostGrip;                                         // 0x1ED9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyHandbrakeCatchupForce;                       // 0x1EDA(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDidHandbrakeCatchup;                              // 0x1EDB(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInFlipRoll;                                       // 0x1EDC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInFlipYaw;                                        // 0x1EDD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInFlipPitch;                                      // 0x1EDE(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFlipDidLeaveGround;                               // 0x1EDF(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBreakBuildingsIfBlockingLeaningPassenger;         // 0x1EE0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A21[0x3];                                     // Fixing Size After Last Property
	float                                        LeanBreakTimeAccumulator;                          // 0x1EE4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LeanBreakCheckInterval;                            // 0x1EE8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A22[0x4];                                     // Fixing Size After Last Property
	TArray<class FName>                          SeatToWindowShapeNames;                            // 0x1EF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class ULegacyCameraShake*                    OffroadCameraShakeInstance;                        // 0x1F00(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULegacyCameraShake*                    DriverCameraShakeInstance;                         // 0x1F08(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULegacyCameraShake*                    AccelCameraShakeInstance;                          // 0x1F10(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULegacyCameraShake*                    HandBrakeCameraShakeInstance;                      // 0x1F18(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     NativeComp_RoadAndExhaust;                         // 0x1F20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     NativeComp_TireSkid;                               // 0x1F28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     NativeComp_Damage;                                 // 0x1F30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     NativeComp_SpeedLines;                             // 0x1F38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        NativeSys_TireExhaust;                             // 0x1F40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        NativeSys_SpeedLines;                              // 0x1F48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        NativeSys_TireSkid;                                // 0x1F50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EPhysicalSurface>          RoadAndExhaustSurfaceTypeArrayForFX;               // 0x1F58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustPeelOutColorIndexName;               // 0x1F68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A26[0x1C];                                    // Fixing Size After Last Property
	TArray<enum class ETireStates>               FakeTireStates;                                    // 0x1F88(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	enum class EPoppedTireReactionStates         ActivePoppedTireReaction;                          // 0x1F98(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EPoppedTireReactionStates         ReplicatedPoppedTireReaction;                      // 0x1F99(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A27[0x2];                                     // Fixing Size After Last Property
	TWeakObjectPtr<class UFortValetAudioController> ValetAudio;                                        // 0x1F9C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A28[0x4];                                     // Fixing Size After Last Property
	TArray<class UStaticMeshComponent*>          TireMeshes;                                        // 0x1FA8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UStaticMeshComponent*>          FakeTireMeshes;                                    // 0x1FB8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A2A[0x4];                                     // Fixing Size After Last Property
	bool                                         bIsInoperable;                                     // 0x1FCC(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A2B[0x3];                                     // Fixing Size After Last Property
	int32                                        RandomSeed;                                        // 0x1FD0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRandomStream                         RandStream;                                        // 0x1FD4(0x8)(ZeroConstructor, Transient, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bHasTraction;                                      // 0x1FDC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStartHandBrakeCatchupForce;                       // 0x1FDD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A2D[0x102];                                   // Fixing Size After Last Property
	uint8                                        bSelfDestructEnabled : 1;                          // Mask: 0x1, PropSize: 0x10x20E0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bClientUsesSelfDestructTimer : 1;                  // Mask: 0x2, PropSize: 0x10x20E0(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_211 : 6;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3A2E[0x7];                                     // Fixing Size After Last Property
	class UStaticMesh*                           TireBootMesh;                                      // 0x20E8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, struct FDagwoodActionDefForUI>   MapSelfDestructActionDefForUI;                     // 0x20F0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        MinimumTimeBetweenSelfDestructPromptChanges;       // 0x2140(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A30[0x3C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDagwoodVehicle");
		return Clss;
	}

	void StartFade();
	void SetValetAudioController(class UFortValetAudioController* ValetAudio);
	void SetRuntimeSpringsInfoOnServer(struct FRuntimeSpringsInfo& SpringsInfo);
	void SetRuntimeGravityOnServer(float GravMult);
	void SetRuntimeFuelInfoOnServer(struct FRuntimeFuelInfo& FuelInfo);
	void SetRuntimeDriveInfoOnServer(float MaxIncline, float MaxTilt);
	void SetRuntimeBoostInfoOnServer(struct FRuntimeBoostInfo& BoostInfo);
	void SetDamageInfoOnServer(bool bInDamageFriendlyVehicles, bool bInDamageOtherVehicles, bool bInDamageOwnVehicle, bool bInDamageAllowedFromOtherVehicle);
	void ServerSetFadeDuration(float NewFadeDuration);
	void ServerSelfDestructActivated();
	void SelfDestructCleanup();
	void OnTickAudioFade(float FadeParam);
	void OnTickAudioController(float DeltaTime);
	void OnStopHandbrake();
	void OnStartHandbrake();
	void OnServerAltInteract(class UFortPawn* Pawn);
	void OnRep_ServerRepWheelData(TArray<struct FAttachedWheel>& PrevWheelData);
	void OnRep_RandSeed();
	void OnRep_PoppedTireReaction();
	void OnRep_IsInoperable();
	void OnRep_FakeTires(TArray<enum class ETireStates>& PrevTireStates);
	void OnRep_DagwoodRuntimeModifiers(struct FDagwoodRuntimeModifiers& PrevMods);
	void OnInoperableChanged(bool bInoperable);
	void OnHoldSelfDestructStopped(class UFortPawn* DriverPawn);
	void OnHoldSelfDestructStarted(class UFortPawn* DriverPawn, float ExitDuration);
	void OnFlipImpactDamage();
	void OnDestroyedPropFromCollision(class UBuildingActor* BuildingHitActor);
	void OnClientBeginAltInteract(class UFortPawn* Pawn);
	void OnBoostReady();
	void OnBoostFailed();
	float NativeCalculateAccelRumbleIntensity(float MaxIntensity);
	void MakeOperable(bool bAddGas);
	void MakeInoperable();
	bool IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking);
	bool IsOnLandscape();
	bool IsNativeBPTickEnabled();
	void HandleCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	enum class ETireSurfaces GetTireSurface(enum class ETireLocations TireIndex);
	float GetTireHealthPercent(enum class ETireLocations TireIndex);
	float GetMiddleAxleForwardAdjust();
	struct FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties();
	float GetBumpiness();
	bool ForwardOrReverseInputPressed();
	void CleanupLoopingPooledFX();
	void ApplyRuntimeModifiers();
	void AddRuntimeGearsInfoOnServer(struct FRuntimeGearInfo& GearInfo);
};

// 0x68 (0x660 - 0x5F8)
// Class ValetRuntime.FortDagwoodVehicleAnimInstance
class UFortDagwoodVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	class UFortDagwoodVehicle*                   Dagwood;                                           // 0x5F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GlassScale_FR;                                     // 0x600(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GlassScale_FL;                                     // 0x618(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GlassScale_BR;                                     // 0x630(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GlassScale_BL;                                     // 0x648(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDagwoodVehicleAnimInstance");
		return Clss;
	}

};

// 0x240 (0xAE8 - 0x8A8)
// Class ValetRuntime.FortDagwoodVehicleConfigs
class UFortDagwoodVehicleConfigs : public UFortPhysicsVehicleConfigs
{
public:
	float                                        BoostMinPushForce;                                 // 0x8A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostTopSpeedForceMultiplier;                      // 0x8AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostTopSpeedMultiplier;                           // 0x8B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostWaterMultiplier;                              // 0x8B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VehiclePowerSlideFrontMultiplier;                  // 0x8B8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VehiclePowerSlideRearMultiplier;                   // 0x8BC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IceVehiclePowerSlideFrontMultiplier;               // 0x8C0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IceVehiclePowerSlideRearMultiplier;                // 0x8C4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MudVehiclePowerSlideFrontMultiplier;               // 0x8C8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MudVehiclePowerSlideRearMultiplier;                // 0x8CC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAccelerationLean;                              // 0x8D0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A43[0x3];                                     // Fixing Size After Last Property
	float                                        HandbrakeGripAngle;                                // 0x8D4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandbrakeGripAngleRecovery;                        // 0x8D8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandbrakeSpeedForGripLoss;                         // 0x8DC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSlipDuration;                                   // 0x8E0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandbrakeLateralFriction;                          // 0x8E4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandbrakeSteeringMultiplier;                       // 0x8E8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandbrakeFrictionDampFactor;                       // 0x8EC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RestoreTractionDampFactor;                         // 0x8F0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandBrakeForce;                                    // 0x8F4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandbrakeForceNoAccel;                             // 0x8F8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHandbrakeToDrift;                              // 0x8FC(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A45[0x3];                                     // Fixing Size After Last Property
	float                                        DriftMinSpeedSteeringAngle;                        // 0x900(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriftMaxSpeedSteeringAngle;                        // 0x904(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriftFrontLateralFrictionMultiplier;               // 0x908(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriftRearLateralFrictionMultiplier;                // 0x90C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostSteeringMultiplier;                           // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirtRoadTopSpeedMultiplier;                        // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirtRoadFrontLateralFriction;                      // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirtRoadRearLateralFriction;                       // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirtRoadAccelForceMultiplier;                      // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffRoadTopSpeedMultiplier;                         // 0x924(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffRoadFrontLateralFriction;                       // 0x928(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffRoadRearLateralFriction;                        // 0x92C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffRoadPushForceMultiplier;                        // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffroadDamageImpactForceMin;                       // 0x934(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffroadDamageImpactForceMax;                       // 0x938(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffroadImpactDamageMin;                            // 0x93C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffroadImpactDamageMax;                            // 0x940(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeedForOffroadHandling;                        // 0x944(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowFrontLateralFriction;                          // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowRearLateralFriction;                           // 0x94C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IceFrontLateralFriction;                           // 0x950(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IceRearLateralFriction;                            // 0x954(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MudFrontLateralFriction;                           // 0x958(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MudRearLateralFriction;                            // 0x95C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IcePushForceMultiplier;                            // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IceBrakeForceMultiplier;                           // 0x964(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireHealthPercentThreshold;                        // 0x968(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffroadRumbleIntensity;                            // 0x96C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirtRoadRumbleIntensity;                           // 0x970(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffroadDamageScaleExponent;                        // 0x974(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HardLandingThresholdMin;                           // 0x978(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HardLandingThresholdMax;                           // 0x97C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HardLandingShakeZAmplitudeMin;                     // 0x980(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HardLandingShakeZAmplitudeMax;                     // 0x984(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedLinesThreshold;                               // 0x988(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropDestructionImpulse;                            // 0x98C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DestructionAngle;                                  // 0x990(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpNormalMinProtected;                              // 0x994(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpForwardMinProtected;                             // 0x998(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NonCameraSteeringAngleMultiplier;                  // 0x99C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraAssistStrengthMax;                           // 0x9A0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraAssistStrengthMin;                           // 0x9A4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraAssistStrengthRecovery;                      // 0x9A8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraAssistInterpSpeed;                           // 0x9AC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverseChangeDirectionBrakeForceMultiplier;        // 0x9B0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverseChangeDirectionSpeedThreshold;              // 0x9B4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriftExitPushForce;                                // 0x9B8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriftExitCatchupSpeed;                             // 0x9BC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandbrakeDurationRequiredForCatchup;               // 0x9C0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactMagnitudeToEndCatchup;                       // 0x9C4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireSpringLength;                            // 0x9C8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireSpringStiff;                             // 0x9CC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireSpringDamp;                              // 0x9D0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireScrapeFrictionMultiplier;                // 0x9D4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RimScrapeFlipRollMagnitude;                        // 0x9D8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RimScrapeFlipPitchMagnitude;                       // 0x9DC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedForRimFlip;                                   // 0x9E0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthPercentForFlip;                              // 0x9E4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipYawDuration;                                   // 0x9E8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipRollDuration;                                  // 0x9EC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipPitchDuration;                                 // 0x9F0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipExplodeDuration_Yaw;                           // 0x9F4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipExplodeDuration_Pitch;                         // 0x9F8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipPushForceDuration_Yaw;                         // 0x9FC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipPushForceDuration_Pitch;                       // 0xA00(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipPushForcMultiplier;                            // 0xA04(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipPushForce_UpComponentPitch;                    // 0xA08(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipPushForce_UpComponentRoll;                     // 0xA0C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeInAirRequiredForExplodeLanding;             // 0xA10(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipYawSpringStiff;                                // 0xA14(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipYawSpringDamp;                                 // 0xA18(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipYawSpringMaxAccel;                             // 0xA1C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthPercentForExplode;                           // 0xA20(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipRecoveryTime;                                  // 0xA24(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipMaxDuration;                                   // 0xA28(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipWiggleDuration;                                // 0xA2C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireVeerDuration;                            // 0xA30(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireVeerSteeringAngle;                       // 0xA34(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipWiggleFrequency;                               // 0xA38(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipWiggleSteeringAngle;                           // 0xA3C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipYawAngleThreshold;                             // 0xA40(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesBoost;                                        // 0xA44(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A64[0x3];                                     // Fixing Size After Last Property
	float                                        RechargeableBoostRateOfUse;                        // 0xA48(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RechargeableBoostRateOfRegen;                      // 0xA4C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostRateOfRegenMinMultiplier;                     // 0xA50(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostRateOfRegenMaxMultiplier;                     // 0xA54(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostRegenMaxMultiplyTime;                         // 0xA58(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RechargeableBoostRequiredPercentToActivate;        // 0xA5C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RechargeableBoostMaxPercent;                       // 0xA60(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RechargeableBoostMinPercent;                       // 0xA64(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnalogDriftStickThreshold;                         // 0xA68(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TireBootRightSocketName;                           // 0xA6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TireBootLeftSocketName;                            // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TireBootRelativeDistance;                          // 0xA74(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostForceInAir;                                   // 0xA78(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostAirMaxSpeed;                                  // 0xA7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          TireSocketNames;                                   // 0xA80(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          TireBoneNames;                                     // 0xA90(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<int32>                                RearTireIndices;                                   // 0xAA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<int32>                                RightSideTires;                                    // 0xAB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<int32>                                FakeTireIndices;                                   // 0xAC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bNoWheels;                                         // 0xAD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6E[0x3];                                     // Fixing Size After Last Property
	float                                        NoWheelsSpringLenMult;                             // 0xAD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          NoWheelsBonesToHide;                               // 0xAD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDagwoodVehicleConfigs");
		return Clss;
	}

};

// 0x10 (0xB0 - 0xA0)
// Class ValetRuntime.FortDagwoodVehicleManager
class UFortDagwoodVehicleManager : public UGameStateComponent
{
public:
	bool                                         bHasUpdatedPropReplacement;                        // 0xA0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A81[0x3];                                     // Fixing Size After Last Property
	int32                                        NumVehiclesSpawnedWithTireMod;                     // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A83[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDagwoodVehicleManager");
		return Clss;
	}

	void UpdatePropReplacement();
	void OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition* VehicleItemDef, TArray<class UActor*>* SpawnedVehicles, int32 NewVehicleCount);
	void OnVehicleSpawned(class UFortAthenaVehicle* Vehicle);
	void CustomHandleActorStreamedInEditor(class UActor* SourceActor);
};

// 0x150 (0x3E0 - 0x290)
// Class ValetRuntime.FortValetAudioController
class UFortValetAudioController : public UActor
{
public:
	FMulticastInlineDelegateProperty_            OnEngineLoadChanged;                               // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShiftGearCompleted;                              // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShiftGearDelegate;                               // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        RPMResetTime_Native;                               // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JitterAmount_Native;                               // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShiftTimeThreshold_Native;                         // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSinceShift_Native;                             // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineRPMInterp_Native;                            // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineRPMLinear_Native;                            // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRPMRange_Native;                                // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRPMRange_Native;                                // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrentlyShifting_Native;                         // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A92[0x3];                                     // Fixing Size After Last Property
	float                                        CurrentAccelRateGearModifier_Native;               // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAccelRate_Native;                           // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentGear_Native;                                // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxGear_Native;                                    // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultAccelRateScalar_Native;                     // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GearAttackInterpSpeed_Native;                      // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GearReleaseInterpSpeed_Native;                     // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelRateScalarFirstGear_Native;                   // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelRateScalarMinGear_Native;                     // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelRateScalarMaxGear_Native;                     // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShiftToRPMStart_Native;                            // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShiftToRPMEnd_Native;                              // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShiftFromRPMStart_Native;                          // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShiftFromRPMEnd_Native;                            // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRPMSawtoothDecrement_Native;                    // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRPMSawtoothRepeatTime_Native;                   // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownhillAccelScalar_Native;                        // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UphillAccelScalar_Native;                          // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A98[0x4];                                     // Fixing Size After Last Property
	class UCurveFloat*                           RPMFloatCurveMapping;                              // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedSpeed_Native;                            // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspValue_Native;                                  // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHandbraking_Native;                             // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9C[0x3];                                     // Fixing Size After Last Property
	float                                        MotoSynthVolume_Native;                            // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MotoSynthInitialFadeInTime_Native;                 // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9D[0x4];                                     // Fixing Size After Last Property
	float                                        MotoSynthLogRPM_Native;                            // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFuel_Native;                                   // 0x354(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInWater_Native;                                 // 0x355(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalPlayerInVehicle_Native;                      // 0x356(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9E[0x1];                                     // Fixing Size After Last Property
	float                                        TimeLocalPlayerEnteredVehicle_Native;              // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttemptingDirectionChange_Native;                 // 0x35C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreDestroy_Native;                                // 0x35D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEngineLoad_Native;                                // 0x35E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A9F[0x1];                                     // Fixing Size After Last Property
	float                                        SkidAmount_Native;                                 // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSinceAwoken_Native;                            // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyed_Native;                                 // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA0[0x3];                                     // Fixing Size After Last Property
	float                                        TimeSinceSurfaceChange_Native;                     // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            OnInitialSuspensionSound;                          // 0x370(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleForSkidding_Native;                           // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringCompressionMultiplier;                       // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MotoSynthMaxVolume_Native;                         // 0x380(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA1[0x4];                                     // Fixing Size After Last Property
	struct FVector2D                             MotoSynthTimeInVehicleTimeRange;                   // 0x388(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MotoSynthTimeInVehicleVolumeRange;                 // 0x398(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortDagwoodVehicle>    ValetVehicle;                                      // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLayeredAudioComponent*            Engine_Native;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       BoostAudioComponent_Native;                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USynthComponentMoto*                   SynthComponentMoto_Native;                         // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollisionAudioComponent*          SuspensionCollisionComponent_Native;               // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3AA5[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortValetAudioController");
		return Clss;
	}

	void Update_Native();
	void OnTireModApplied(struct FTireInfo& AppliedTireMod);
	void OnSuspensionCollision_Native(bool* OutResult, float* OutMagnitude);
	void CacheValetVehicle(class UFortDagwoodVehicle* InVehicle);
};

// 0x80 (0x5A0 - 0x520)
// Class ValetRuntime.FortValetGameFeatureData
class UFortValetGameFeatureData : public UFortGameFeatureData
{
public:
	TMap<TSoftClassPtr<class UBuildingProp>, struct FVehiclePropReplacementData> PropReplacements;                                  // 0x520(0x50)(Edit, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortAthenaVehicleSpawner> VehicleSpawnerClass;                               // 0x570(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod;                 // 0x598(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AAE[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortValetGameFeatureData");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
