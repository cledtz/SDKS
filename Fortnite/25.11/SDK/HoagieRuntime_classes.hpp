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

// 0x80 (0x890 - 0x810)
// Class HoagieRuntime.FortHoagieDriverAnimInstance
class UFortHoagieDriverAnimInstance : public UFortVehicleOccupantAnimInstance
{
public:
	struct FVector                               LeftHandIKPositionOffset;                          // 0x810(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RightHandIKPositionOffset;                         // 0x828(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              LeftHandIKRotationOffset;                          // 0x840(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RightHandIKRotationOffset;                         // 0x858(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortCardinalDirection            BoostCardinalDirection;                            // 0x870(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF2[0x3];                                     // Fixing Size After Last Property..
	float                                        NormalizedAcceleration;                            // 0x874(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VehicleRoll;                                       // 0x878(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VehicleYaw;                                        // 0x87C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardSpeed;                                      // 0x880(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMovingAnyDirection;                             // 0x884(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMovingFastAnyDirection;                         // 0x885(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldReverse;                                    // 0x886(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldGoBackToIdle;                               // 0x887(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_Default_ReverseStart;                  // 0x888(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_BoostLoop_Reverse;                     // 0x889(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF3[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHoagieDriverAnimInstance");
		return Clss;
	}

};

// 0x1F8 (0x7F0 - 0x5F8)
// Class HoagieRuntime.FortHoagieVehicleAnimInstance
class UFortHoagieVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	uint8                                        Pad_7DF4[0x130];                                   // Fixing Size After Last Property..
	struct FRotator                              EngineRotation;                                    // 0x728(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MainRotorRotation;                                 // 0x740(0x18)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              TailRotorRotaton;                                  // 0x758(0x18)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              BoosterFanRotation;                                // 0x770(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortCardinalDirection            BoostCardinalDirection;                            // 0x788(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF5[0x1B];                                    // Fixing Size After Last Property..
	float                                        EngineRotationInterpSpeed;                         // 0x7A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineRotationDuringBoostInterpSpeed;              // 0x7A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineFlipSpeedThreshold;                          // 0x7AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostDirectionDeadzone;                            // 0x7B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EngineFlipDeadzone;                                // 0x7B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriverRoll;                                        // 0x7B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriverYaw;                                         // 0x7BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalSpeed;                                     // 0x7C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FwdSpeed;                                          // 0x7C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalBoostDirection;                               // 0x7C8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawBlendSpaceInput;                                // 0x7CC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedAcceleration;                            // 0x7D0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF6[0x1];                                     // Fixing Size After Last Property..
	bool                                         bShouldHideBlades;                                 // 0x7D5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoostOnCD;                                      // 0x7D6(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoostReady;                                     // 0x7D7(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMovingForward;                                  // 0x7D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReversing;                                      // 0x7D9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMovingAnyDirection;                             // 0x7DA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoosting;                                       // 0x7DB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldReverse;                                    // 0x7DC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldGoBackToIdle;                               // 0x7DD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldApplyBoostAdditive;                         // 0x7DE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEngineShuttingOff;                              // 0x7DF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_Default_ReverseStart;                  // 0x7E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_BoostLoop_Reverse;                     // 0x7E1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DF7[0xE];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHoagieVehicleAnimInstance");
		return Clss;
	}

};

// 0x70 (0x1BB0 - 0x1B40)
// Class HoagieRuntime.FortCameraMode_Hoagie
class UFortCameraMode_Hoagie : public UFortCameraMode_AthenaVehicle
{
public:
	float                                        CurrentRollMultiplier;                             // 0x1B40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentPitchMultiplier;                            // 0x1B44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LastOrigin;                                        // 0x1B48(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CurrentInterpSpeed;                                // 0x1B60(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               BoostInterpSpeed;                                  // 0x1B78(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseRollMultiplier;                                // 0x1B90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BasePitchMultiplier;                               // 0x1B94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostRollMultiplier;                               // 0x1B98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostPitchMultiplier;                              // 0x1B9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostRollDampFactor;                               // 0x1BA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostRollRecoveryDampFactor;                       // 0x1BA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostRecoveryInterpSpeed;                          // 0x1BA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DF8[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCameraMode_Hoagie");
		return Clss;
	}

};

// 0x68 (0x2F0 - 0x288)
// Class HoagieRuntime.FortHoagieAudioController
class AFortHoagieAudioController : public AActor
{
public:
	bool                                         bHighQualityOverride;                              // 0x288(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLocalPlayerInHoagie;                              // 0x289(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCriticalDamageNative;                             // 0x28A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRotorHitNative;                                   // 0x28B(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsRotorWashActiveNative;                          // 0x28C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DF9[0x3];                                     // Fixing Size After Last Property..
	float                                        RotorWashRelativeZOffset;                          // 0x290(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AFortHoagieVehicle>     Vehicle;                                           // 0x294(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DFA[0x4];                                     // Fixing Size After Last Property..
	class UFortLayeredAudioComponent*            EngineAudio;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLayeredAudioComponent*            RotorAudio;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DFB[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHoagieAudioController");
		return Clss;
	}

	void Update();
	void CacheHoagieVehicle(class AFortHoagieVehicle* InVehicle);
	void CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor);
};

// 0x620 (0x20E0 - 0x1AC0)
// Class HoagieRuntime.FortHoagieVehicle
class AFortHoagieVehicle : public AFortAthenaSKVehicle
{
public:
	class FName                                  PassengerCollision;                                // 0x1AC0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBoomDistance;                                // 0x1AC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraBoomHeight;                                  // 0x1AC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E01[0x4];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnBoostStateChanged;                               // 0x1AD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAltimeterTraceUpdated;                           // 0x1AE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCrashingStateEntered;                            // 0x1AF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bEngineAudioDisabled;                              // 0x1B00(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E02[0x3];                                     // Fixing Size After Last Property..
	float                                        LiftRumbleTimer;                                   // 0x1B04(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLiftUp;                                           // 0x1B08(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E03[0x7];                                     // Fixing Size After Last Property..
	uint64                                       LiftForceFeedbackHandle;                           // 0x1B10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint64                                       PassiveForceFeedbackHandle;                        // 0x1B18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Theta_Native;                                      // 0x1B20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WashAltAlpha_Native;                               // 0x1B24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RotorWashTickTimer;                                // 0x1B28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E04[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FVector>                       RotorTraceArray;                                   // 0x1B30(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<enum class EObjectTypeQuery>          RotorWashObjectsTypes;                             // 0x1B40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UFortHoagieVehicleConfigs*             FortHoagieVehicleConfigs;                          // 0x1B50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           RumbleIntensity;                                   // 0x1B58(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortHeliFlightModel                  FlightModel;                                       // 0x1B60(0x1E8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bClearPitchInput;                                  // 0x1D48(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E05[0x3];                                     // Fixing Size After Last Property..
	float                                        BoostTimeLeft;                                     // 0x1D4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostBrakingTimeLeft;                              // 0x1D50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostCooldown;                                     // 0x1D54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ShutdownTimer;                                     // 0x1D58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FoliageDestructionTimer;                           // 0x1D5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CrashingScrapingTimer;                             // 0x1D60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CrashingNotMovingTimer;                            // 0x1D64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanSleep;                                         // 0x1D68(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasAppliedCrashDamage;                            // 0x1D69(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOrientedForLanding;                               // 0x1D6A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceNegativeLift;                                // 0x1D6B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AltimeterTraceTimer;                               // 0x1D6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastRotorImpulseTime;                              // 0x1D70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CriticalExplodeTimer;                              // 0x1D74(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCriticalExplosionPlayed;                          // 0x1D78(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E06[0x3];                                     // Fixing Size After Last Property..
	float                                        TimeWhileCritical;                                 // 0x1D7C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeWhileLanding;                                  // 0x1D80(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LiftFromOverrideButton;                            // 0x1D84(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               BoostDirection;                                    // 0x1D88(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LastRotorSweepDirection;                           // 0x1DA0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHitResult                            AltimeterTraceResult;                              // 0x1DB8(0xE0)(Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        HoagieStateRep;                                    // 0x1E98(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoagieState                      CurrentHoagieState;                                // 0x1E9C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentRotorSpeed;                                 // 0x1EA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentRotorAngle;                                 // 0x1EA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RotorImpactTraceAngle;                             // 0x1EA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleGamepadLiftInputs             LiftInputs;                                        // 0x1EAC(0x8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E07[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRotorHit>                     RotorHits;                                         // 0x1EB8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCachedSeatCollision>          CachedSeatCollision;                               // 0x1EC8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FVector                               RotorHitLinearImpulse;                             // 0x1ED8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               RotorHitAngularImpulse;                            // 0x1EF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     HoagieIdleFX_Native;                               // 0x1F08(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     DamageFX_Native;                                   // 0x1F10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     RotorWashFX_Native;                                // 0x1F18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoagieVehicleAnimInstance*        HoagieAnimBP_Native;                               // 0x1F20(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AltimeterTraceSocketName;                          // 0x1F28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  RotorDamageTraceSocketName;                        // 0x1F2C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MainRotorCritSocketName;                           // 0x1F30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TailRotorCritSocketName;                           // 0x1F34(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                          SeatTransition_ToDriver;                           // 0x1F38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                          SeatTransition_ToPassenger;                        // 0x1F40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  RotorTraceProfile;                                 // 0x1F48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FoliageOverlapsBoxTag;                             // 0x1F4C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FReplicatedHeliControlState           ControlState;                                      // 0x1F50(0x30)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        CurrentViewDistanceScale;                          // 0x1F80(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentHLODDistanceOverrideScale;                  // 0x1F84(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentHLODMaxDrawDistanceScale;                   // 0x1F88(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E08[0xC];                                     // Fixing Size After Last Property..
	struct FHoagieDeathEffectInfo                CachedDeathEffectInfo;                             // 0x1F98(0x148)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHoagieVehicle");
		return Clss;
	}

	void UpdateHoagieAnimBP();
	void UpdateDamageStateNative(float Damage);
	void ShowCooldownCue(class AFortPlayerPawn* Pawn, float Duration);
	void SetTailRotorRotation(float Degrees);
	void SetRotorWashActive(bool bActive);
	void SetMainRotorRotation(float Degrees);
	void ServerUpdateControlState(const struct FReplicatedHeliControlState& InControlState);
	void OnTickRotors(float RotorAngleDegrees);
	void OnStartupEnd();
	void OnStartupBegin();
	void OnRotorsStop();
	void OnRotorDamagePlayer(struct FHitResult& Impact);
	void OnRotorDamageDealtOuter(struct FHitResult& Impact);
	void OnRotorDamageDealtInner(struct FHitResult& Impact);
	void OnRotorDamageDealt(struct FHitResult& Impact, bool bInner);
	void OnRep_HoagieState();
	void OnRep_ControlState();
	void OnRefueledFromEmpty();
	void OnImpactWhileCritical();
	void OnImpactOtherHoagie(struct FVector& HitLocation, struct FVector& NormalImpulse);
	void OnCritRotor(float Damage, struct FVector& ImpactLocation, class AController* DamageInstigator, class AActor* DamageCauser, bool bMainRotor);
	void OnBoostStarted();
	void OnBoostReady();
	void OnBoostFinished();
	void OnBoostFailed();
	void MulticastRotorImpulse(struct FHitResult& RotorHit);
	bool IsStartingUp();
	bool IsShuttingDown();
	bool IsScrapingBottom();
	void HoagieOnDisabledChanged(bool bDisabled);
	float GetVerticalSpeedKmh();
	struct FVector GetThrustDirection(bool bWorldSpace);
	float GetStrafeAlpha();
	float GetSteerAlpha();
	float GetShutdownTimeLeft();
	float GetRotorSpeedPercent();
	float GetRotorSpeed();
	struct FVector GetRotorCenterPosition();
	float GetRotorAngleDegrees();
	float GetMaxBoostCooldown();
	float GetMaxAltitude();
	float GetLiftAlpha();
	bool GetIsEngineOn();
	float GetForwardAlpha();
	float GetDistanceToGround();
	float GetBoostTimeLeft();
	float GetBoostDuration();
	struct FVector GetBoostDirection();
	float GetBoostCooldown();
	float GetAltitude();
};

// 0x238 (0xAE0 - 0x8A8)
// Class HoagieRuntime.FortHoagieVehicleConfigs
class UFortHoagieVehicleConfigs : public UFortPhysicsVehicleConfigs
{
public:
	float                                        StrafeForce;                                       // 0x8A8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrafeForceMin;                                    // 0x8AC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStrafeSpeedKmh;                                 // 0x8B0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrafeTooFastBrakeForce;                           // 0x8B4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedBrakeForce;                                  // 0x8B8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftForce;                                         // 0x8BC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLiftSpeedKmh;                                   // 0x8C0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftTooFastBrakeForce;                             // 0x8C4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LateralDragCoefficient;                            // 0x8C8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LateralDragCoefficient2;                           // 0x8CC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftDragCoefficient;                               // 0x8D0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftDragCoefficient2;                              // 0x8D4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPitchForCameraYaw;                              // 0x8D8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCameraYawAngle;                                 // 0x8DC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraYawStiff;                                    // 0x8E0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraYawDamp;                                     // 0x8E4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraYawStrength;                                 // 0x8E8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UprightStiff;                                      // 0x8EC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UprightDamp;                                       // 0x8F0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseVehiclePivotForCameraPitch;                    // 0x8F4(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E09[0x3];                                     // Fixing Size After Last Property..
	float                                        ThrustTorqueAnglePercent;                          // 0x8F8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostThrustTorqueAnglePercent;                     // 0x8FC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrustTorqueStiff;                                 // 0x900(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrustTorqueDamp;                                  // 0x904(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrustTorqueMaxAccel;                              // 0x908(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrustTorque;                                      // 0x90C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawTorque;                                         // 0x910(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawTorqueDampingSpeed;                             // 0x914(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostForce;                                        // 0x918(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostMaxSpeedKmh;                                  // 0x91C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostDuration;                                     // 0x920(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostCooldown;                                     // 0x924(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostTorqueStiff;                                  // 0x928(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostTorqueDamp;                                   // 0x92C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AfterBoostBrakingForce;                            // 0x930(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AfterBoostBrakingDuration;                         // 0x934(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AfterBoostBrakingMinSpeed;                         // 0x938(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchAngleRequiredForFullThrust;                   // 0x93C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceToGroundForLanding;                        // 0x940(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartupDelay;                                      // 0x944(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingSequenceDelay;                              // 0x948(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorsRadius;                                      // 0x94C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorsRadiusInner;                                 // 0x950(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoDriverBrakeForce;                                // 0x954(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenRotorDamageTicks;                       // 0x958(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoLandingForce;                                  // 0x95C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorDamageBoxSweepLength;                         // 0x960(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalStateLiftForce;                            // 0x964(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdleRotationMultiplier;                            // 0x968(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftPitchDegrees;                                  // 0x96C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAltitudeForIdleNoise;                           // 0x970(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultLinearDamp;                                 // 0x974(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultAngularDamp;                                // 0x978(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingLinearDamp;                                 // 0x97C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingAngularDamp;                                // 0x980(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingLiftAlpha;                                  // 0x984(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalStateThrustMultiplier;                     // 0x988(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyUpDotThresholdForLanding;                      // 0x98C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CriticalHealthThreshold;                           // 0x990(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamagePerImpulseWhileCritical;                     // 0x994(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorImpulseLinear;                                // 0x998(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorImpulseAngular;                               // 0x99C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorImpulseCooldown;                              // 0x9A0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartupLift;                                       // 0x9A4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartupLiftTime;                                   // 0x9A8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAltitude;                                       // 0x9AC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AltitudeForSpinning;                               // 0x9B0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorMaxSpeed;                                     // 0x9B4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorAccel;                                        // 0x9B8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorDecel;                                        // 0x9BC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplodeRotorDecel;                                 // 0x9C0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRotorSpeedForSkippingStartup;                   // 0x9C4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorSpeedForStartupLift;                          // 0x9C8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalLiftForceDecay;                            // 0x9CC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalYawTorqueMin;                              // 0x9D0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalYawTorqueMax;                              // 0x9D4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalYawTorqueRampDuration;                     // 0x9D8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorTraceRotationSpeed;                           // 0x9DC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorTraceBoxSize;                                 // 0x9E0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorTraceBoxHeight;                               // 0x9E4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCriticalFallForce;                              // 0x9E8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostFOV;                                          // 0x9EC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GentleCrashTimeToExplode;                          // 0x9F0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalTimeForGentleCrash;                        // 0x9F4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoLandingYawTorque;                              // 0x9F8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHeightForAutoLandingYawTorque;                  // 0x9FC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeedForScrapingBottom;                         // 0xA00(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallDamageHeightBuffer;                            // 0xA04(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenRotorPlayerDamage;                      // 0xA08(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorMoveSpeedRequiredToUpdateTraceDirSqr;         // 0xA0C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoliageTraceRate;                                  // 0xA10(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotorWashTicksPerFrame;                            // 0xA14(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalHitRadius;                                 // 0xA18(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleNormalUpForLockMovement;                      // 0xA1C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAutoLandingTime;                                // 0xA20(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedThresholdForCrashed;                          // 0xA24(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CritMultiplier;                                    // 0xA28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AltitudeForSprings;                                // 0xA2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingTime;                                   // 0xA30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingScrapingTime;                           // 0xA34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingTimeSpentNotMoving;                     // 0xA38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandscapeRotorImpulseMag;                          // 0xA3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthThresholdForLandscapeRotorImpulse;           // 0xA40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHeightBuffer;                                   // 0xA44(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImpulseOnOuterRotorHitLandscape;                  // 0xA48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipRotorImpulses;                                // 0xA49(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCVarScaling;                                // 0xA4A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E0A[0x1];                                     // Fixing Size After Last Property..
	float                                        CVarScalingInterp;                                 // 0xA4C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FoliageTraceBoxSize;                               // 0xA50(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaterBoxSize;                                      // 0xA68(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaterBoxOffset;                                    // 0xA80(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotorOffsetFromActorLocationOnServer;              // 0xA98(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipContactRotations;                             // 0xAB0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E0B[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        MaxAutoLandHeightWhenOutOfFuel;                    // 0xAB8(0x28)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHoagieVehicleConfigs");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
