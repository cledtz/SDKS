#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x9D0 - 0x978)
// Class TankRuntime.FortTankVehicleConfigs
class UFortTankVehicleConfigs : public UFortTreadVehicleConfigs
{
public:
	TArray<struct FTankWeaponAimingData>         TankWeaponAimingData;                              // 0x978(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  SecondInteractText;                                // 0x988(0x18)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class ETInteractionType                 SecondInteractType;                                // 0x9A0(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AEF[0x7];                                      // Fixing Size After Last Property
	struct FScalableFloat                        SecondInteractDuration;                            // 0x9A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTankVehicleConfigs");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class TankRuntime.FortTankAnimFunctionLibrary
class UFortTankAnimFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTankAnimFunctionLibrary");
		return Clss;
	}

};

// 0x190 (0x1C00 - 0x1A70)
// Class TankRuntime.FortTankVehicle
class UFortTankVehicle : public UFortTreadVehicle
{
public:
	uint8                                        Pad_AF0[0x70];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnTankRepairedDelegate;                            // 0x1AE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class FName                                  BarrelSocketName;                                  // 0x1AF0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF1[0x4];                                      // Fixing Size After Last Property
	class UCapsuleComponent*                     BarrelCollision;                                   // 0x1AF8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  UnderVehicleCollision;                             // 0x1B00(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FServerSocketTransformOverride> SocketOverrideArray;                               // 0x1B08(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FTransform>         SocketTransformOverrideMap;                        // 0x1B18(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                CachedSkeletalMeshComponent;                       // 0x1B68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortVehicleAudioController*           CachedVehicleAudioController;                      // 0x1B70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVisibilityBasedAnimTickOption    DefaultServerVisibilityBasedAnimTickOption;        // 0x1B78(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         DefaultServerSkeletalMeshTickEnabled;              // 0x1B79(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF3[0x2];                                      // Fixing Size After Last Property
	class FName                                  YawPivotSocketName;                                // 0x1B7C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PitchPivotSocketName;                              // 0x1B80(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF4[0x4];                                      // Fixing Size After Last Property
	class ULegacyCameraShake*                    DriverCameraShakeInstance;                         // 0x1B88(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULegacyCameraShake*                    AcceleratingCameraShakeInstance;                   // 0x1B90(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF6[0x8];                                      // Fixing Size After Last Property
	class UNiagaraComponent*                     CachedNiagaraComponentRoadAndExhaust;              // 0x1BA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RoadAndExhaustNiagaraComponentName;                // 0x1BA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustPeelOutLeftName;                     // 0x1BB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustPeelOutRightName;                    // 0x1BBC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustVehicleSpeedName;                    // 0x1BC0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustSlideDirectionName;                  // 0x1BC4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RoadAndExhaustMinSpeedForDust;                     // 0x1BC8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustDustColorLerpName;                   // 0x1BCC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RoadAndExhaustDustColorLerpOffRoad;                // 0x1BD0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RoadAndExhaustDustColorLerpOnRoad;                 // 0x1BD4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustDustAlphaMultiplierName;             // 0x1BD8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RoadAndExhaustDustAlphaMultiplierOffRoad;          // 0x1BDC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RoadAndExhaustDustAlphaMultiplierOnRoad;           // 0x1BE0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustDustFrontLeftName;                   // 0x1BE4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustDustFrontRightName;                  // 0x1BE8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustDustMiddleLeftName;                  // 0x1BEC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustDustMiddleRightName;                 // 0x1BF0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustDustRearLeftName;                    // 0x1BF4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustDustRearRightName;                   // 0x1BF8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RoadAndExhaustIsOnDirtName;                        // 0x1BFC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTankVehicle");
		return Clss;
	}

};

// 0x118 (0x7E0 - 0x6C8)
// Class TankRuntime.FortTankVehicleAnimInstance
class UFortTankVehicleAnimInstance : public UFortTreadVehicleAnimInstance
{
public:
	class UFortTankVehicle*                      TankVehicle;                                       // 0x6C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              CurrentAimRotation;                                // 0x6D0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              CurrentTurretAimRotation;                          // 0x6E8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              SmoothedTurretDeltaRotation;                       // 0x700(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        InterpolationRate;                                 // 0x718(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEngineOverheated;                                 // 0x71C(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasPassenger;                                     // 0x71D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsFired;                                          // 0x71E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsReady;                                          // 0x71F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDriverCoverOnCooldown;                            // 0x720(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AFF[0x3];                                      // Fixing Size After Last Property
	float                                        LeftTreadPower;                                    // 0x724(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RightTreadPower;                                   // 0x728(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TurretYawAlpha;                                    // 0x72C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TurretYawAlphaSmoothingRate;                       // 0x730(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CannonYaw;                                         // 0x734(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CannonPitch;                                       // 0x738(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TurretYaw;                                         // 0x73C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TurretPitch;                                       // 0x740(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          MIDTreadPositionColor;                             // 0x744(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MIDTreadDamageLeft;                                // 0x754(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MIDTreadDamageRight;                               // 0x758(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MIDExhaustShakeSpeed;                              // 0x75C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MIDExhaustShakeAmp;                                // 0x760(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MIDEngineBoostGlow;                                // 0x764(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MIDEngineHealthRatio;                              // 0x768(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B03[0x4];                                      // Fixing Size After Last Property
	TMap<enum class EVehicleSeats, struct FTankAnimAimingData> AimingData;                                        // 0x770(0x50)(Transient, NativeAccessSpecifierPrivate)
	struct FRotator                              PreviousTurretAimRotation;                         // 0x7C0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B04[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTankVehicleAnimInstance");
		return Clss;
	}

	void UpdateMIDEngineProperties(float DeltaSeconds, float EngineHealthRatio);
};

// 0x400 (0x6F0 - 0x2F0)
// Class TankRuntime.FortTankVehicleAudioController
class UFortTankVehicleAudioController : public UFortVehicleAudioController
{
public:
	struct FFortAudioFloatParameter              SpeedParam;                                        // 0x2F0(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              TurnPowerParam;                                    // 0x328(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              OutOfFuelParam;                                    // 0x360(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              IdleParam;                                         // 0x398(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              TurningParam;                                      // 0x3D0(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              ForwardParam;                                      // 0x408(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              ReverseParam;                                      // 0x440(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              SurfaceParam;                                      // 0x478(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              IsInWaterParam;                                    // 0x4B0(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              IsInAirParam;                                      // 0x4E8(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              BoostParam;                                        // 0x520(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              CannonHorizontalMovementParam;                     // 0x558(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              CannonVerticalMovementParam;                       // 0x590(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              TurretHorizontalMovementParam;                     // 0x5C8(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortAudioFloatParameter              TurretVerticalMovementParam;                       // 0x600(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTankAudioUpdateContext               Context;                                           // 0x638(0xB8)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTankVehicleAudioController");
		return Clss;
	}

	void PlayTurningOneShot();
	void PlayDecelOneShot();
	void PlayAccelOneShot();
	class UFortTankVehicle* GetTankVehicleActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
