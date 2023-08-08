#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortDagwoodSimEvent : uint8
{
	EnterLandscape                 = 0,
	ExitLandscape                  = 1,
	EnterRoad                      = 2,
	ExitRoad                       = 3,
	Explode                        = 4,
	FlipImpact                     = 5,
	StartBoost                     = 6,
	FinishBoost                    = 7,
	EFortDagwoodSimEvent_MAX       = 8,
};

enum class EControlsPrototypes : uint8
{
	CameraSteering                 = 0,
	NonCameraSteering              = 1,
	HybridCameraSteering           = 2,
	MaxCount                       = 3,
	EControlsPrototypes_MAX        = 4,
};

enum class EPoppedTireReactionStates : uint8
{
	None                           = 0,
	VeerLeft                       = 1,
	VeerRight                      = 2,
	Wiggle                         = 3,
	Yaw90                          = 4,
	FlipPitch                      = 5,
	FlipRoll                       = 6,
	EPoppedTireReactionStates_MAX  = 7,
};

enum class ETireLocations : uint8
{
	FrontRight                     = 0,
	FrontLeft                      = 1,
	BackRight                      = 2,
	BackLeft                       = 3,
	ETireLocations_MAX             = 4,
};

enum class EVehicleClass : uint8
{
	Sedan                          = 0,
	Sport                          = 1,
	PickupTruck                    = 2,
	SemiTruck                      = 3,
	EVehicleClass_MAX              = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct ValetRuntime.FortDagwoodCmd
struct FFortDagwoodCmd
{
public:
	float                                        ForwardAlpha;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightAlpha;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelerationAlpha;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB0[0x4];                                     // Fixing Size After Last Property
	struct FVector_NetQuantize100                MovementDir;                                       // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBoost : 1;                                        // Mask: 0x1, PropSize: 0x10x28(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHandbrake : 1;                                    // Mask: 0x2, PropSize: 0x10x28(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB2[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ValetRuntime.RuntimeBoostInfo
struct FRuntimeBoostInfo
{
public:
	uint8                                        bCanBoost : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesRechargeableBoost : 1;                        // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_217 : 6;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3AB5[0x3];                                     // Fixing Size After Last Property
	float                                        BoostPushForce;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostTopSpeedForceMultiplier;                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostTopSpeedMultiplier;                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RechargeableBoostRateOfRegen;                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RechargeableBoostRateOfUse;                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ValetRuntime.RuntimeFuelInfo
struct FRuntimeFuelInfo
{
public:
	float                                        MaxFuel;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FuelPerSecondDriving;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FuelPerSecondBoosting;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ValetRuntime.RuntimeGearInfo
struct FRuntimeGearInfo
{
public:
	int32                                        GearIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopSpeed;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PushForce;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ValetRuntime.DagwoodRuntimeModifiers
struct FDagwoodRuntimeModifiers
{
public:
	struct FRuntimeBoostInfo                     BoostInfo;                                         // 0x0(0x18)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFuelInfo                      FuelInfo;                                          // 0x18(0xC)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeSpringsInfo                   SpringsInfo;                                       // 0x24(0x20)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDamageFriendlyVehicles;                           // 0x44(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageOtherVehicles;                              // 0x45(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageOwnVehicle;                                 // 0x46(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageAllowedFromOtherVehicle;                    // 0x47(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityMultiplier;                                 // 0x48(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxInclineAngle;                                   // 0x4C(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTiltAngle;                                      // 0x50(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABE[0x4];                                     // Fixing Size After Last Property
	TArray<struct FRuntimeGearInfo>              GearInfos;                                         // 0x58(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TireModTag;                                        // 0x68(0x4)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TireModVersion;                                    // 0x6C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTireModAdjustsPosition;                           // 0x6D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DataVersion;                                       // 0x6E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABF[0x1];                                     // Fixing Size Of Struct
};

// 0xC0 (0x248 - 0x188)
// ScriptStruct ValetRuntime.DagwoodInPersistent
struct FDagwoodInPersistent : public FFortVehicleInPersistent
{
public:
	class UFortDagwoodVehicleConfigs*            FortDagwoodVehicleConfigs;                         // 0x188(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDagwoodRuntimeModifiers              DagwoodRuntimeModifiedProperties;                  // 0x190(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC0[0x48];                                    // Fixing Size Of Struct
};

// 0xB8 (0x138 - 0x80)
// ScriptStruct ValetRuntime.DagwoodInternal
struct FDagwoodInternal : public FFortVehicleInternalPersistent
{
public:
	uint8                                        Pad_3AC2[0xB8];                                    // Fixing Size Of Struct
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ValetRuntime.DagwoodOutPersistent
struct FDagwoodOutPersistent : public FFortVehicleOutPersistent
{
public:
	bool                                         bHasTraction;                                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartHandBrakeCatchupForce;                       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC3[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x48 - 0x38)
// ScriptStruct ValetRuntime.DagwoodOutContinuous
struct FDagwoodOutContinuous : public FFortVehicleOutContinuous
{
public:
	uint8                                        Pad_3AC4[0x10];                                    // Fixing Size Of Struct
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct ValetRuntime.DagwoodState_PT
struct FDagwoodState_PT
{
public:
	struct FDagwoodInternal                      Internal;                                          // 0x0(0x138)(NativeAccessSpecifierPublic)
	struct FDagwoodOutPersistent                 OutPersistent;                                     // 0x138(0x30)(NativeAccessSpecifierPublic)
	struct FDagwoodOutContinuous                 OutContinuous;                                     // 0x168(0x48)(RepSkip, NativeAccessSpecifierPublic)
	bool                                         bOutValid;                                         // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC5[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ValetRuntime.DagwoodFutureClientInput
struct FDagwoodFutureClientInput
{
public:
	int32                                        Frame;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC7[0x4];                                     // Fixing Size After Last Property
	struct FFortDagwoodCmd                       InputCmd;                                          // 0x8(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x458 (0x458 - 0x0)
// ScriptStruct ValetRuntime.DagwoodManagedState
struct FDagwoodManagedState
{
public:
	int32                                        Frame;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACA[0x4];                                     // Fixing Size After Last Property
	struct FFortDagwoodCmd                       InputCmd;                                          // 0x8(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct FDagwoodInPersistent                  GT_State;                                          // 0x38(0x248)(NativeAccessSpecifierPublic)
	struct FDagwoodState_PT                      PT_State;                                          // 0x280(0x1B8)(NativeAccessSpecifierPublic)
	class UPlayerController*                     PC;                                                // 0x438(0x8)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACB[0x8];                                     // Fixing Size After Last Property
	TArray<struct FDagwoodFutureClientInput>     FutureInputs;                                      // 0x448(0x10)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ValetRuntime.NetworkPhysicsState
struct FNetworkPhysicsState
{
public:
	uint8                                        Pad_3ACC[0x90];                                    // Fixing Size Of Struct
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ValetRuntime.NetworkPhysicsStateNetSerializerState
struct FNetworkPhysicsStateNetSerializerState
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocity;                                    // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ACE[0x8];                                     // Fixing Size After Last Property
	struct FQuat                                 Rotation;                                          // 0x50(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NetworkHandle;                                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Frame;                                             // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ObjectState;                                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD0[0x7];                                     // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ValetRuntime.NetworkPhysicsStateNetSerializerDebugData
struct FNetworkPhysicsStateNetSerializerDebugData
{
public:
	struct FVector                               Force;                                             // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Torque;                                            // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearImpulse;                                     // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularImpulse;                                    // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct ValetRuntime.NetworkPhysicsStateNetSerializerDebugState
struct FNetworkPhysicsStateNetSerializerDebugState
{
public:
	struct FNetworkPhysicsStateNetSerializerDebugData DebugData[0x3];                                    // 0x0(0x120)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ValetRuntime.NetworkPhysicsStateNetSerializerConfig
struct FNetworkPhysicsStateNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ValetRuntime.VehicleAttachment
struct FVehicleAttachment
{
public:
	class FName                                  ModName;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ValetRuntime.DagwoodActionDefForUI
struct FDagwoodActionDefForUI
{
public:
	TArray<struct FActionDefForUI>               ActionDefForUI;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ValetRuntime.TireSimulationRuntimeData
struct FTireSimulationRuntimeData
{
public:
	struct FRuntimeTerrainHandlingInfo           HandlingInfo;                                      // 0x0(0x14)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PoppedTireSpringLength;                            // 0x14(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireSpringStiff;                             // 0x18(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireSpringDamp;                              // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ValetRuntime.ValetUpdateContext
struct FValetUpdateContext
{
public:
	uint8                                        Pad_3AD4[0x18];                                    // Fixing Size Of Struct
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ValetRuntime.VehiclePropReplacementData
struct FVehiclePropReplacementData
{
public:
	TSoftObjectPtr<class UFortVehicleItemDefinition> FortVehicleItemDefinition;                         // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TransOffset;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotOffset;                                         // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
