#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERockBoostLogic : uint8
{
	Standard                       = 0,
	Recharge                       = 1,
	Infinite                       = 2,
	ERockBoostLogic_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct RockVehicleRuntime.RockRuntimeConfigOverrides
struct FRockRuntimeConfigOverrides
{
public:
	bool                                         bDamageFriendlyVehicles;                           // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageOtherVehicles;                              // 0x1(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageOwnVehicle;                                 // 0x2(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageAllowedFromOtherVehicle;                    // 0x3(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct RockVehicleRuntime.RockScalableFloat
struct FRockScalableFloat : public FScalableFloat
{
public:
	float                                        CachedValue;                                       // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_82EA[0x4];                                     // Fixing Size Of Struct..
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleState
struct FRockVehicleState
{
public:
	struct FReplicatedPhysicsPawnState           RigidBodyState;                                    // 0x0(0x80)(NoDestructor, NativeAccessSpecifierPublic)
	struct FFortAthenaVehicleInputState          PrevDriverInput;                                   // 0x80(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWheelsOnGround;                                   // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnyWheelsOnGround;                                // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82EB[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               AverageSpringNormal;                               // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RockVehicleRuntime.BouncyChassisState
struct FBouncyChassisState
{
public:
	float                                        PitchDegrees;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollDegrees;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationZ;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct RockVehicleRuntime.AnimNode_RockVehicleController
struct FAnimNode_RockVehicleController : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        ChassisBone;                                       // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBouncyChassisState                   BouncyChassis;                                     // 0xD4(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RockVehicleRuntime.RockBoxSpringSetup
struct FRockBoxSpringSetup
{
public:
	struct FVector                               Strength;                                          // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Damping;                                           // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxDisplacement;                                   // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct RockVehicleRuntime.RockBoxSpring
struct FRockBoxSpring
{
public:
	struct FRockBoxSpringSetup                   Setup;                                             // 0x0(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_82EC[0x60];                                    // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RockVehicleRuntime.SpringSettings
struct FSpringSettings
{
public:
	float                                        Strength;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct RockVehicleRuntime.BouncyChassisSetup
struct FBouncyChassisSetup
{
public:
	struct FSpringSettings                       PitchSpring;                                       // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PitchMaxAngleDegrees;                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpringSettings                       RollSpring;                                        // 0xC(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RollMaxAngleDegrees;                               // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpringSettings                       ZSpring;                                           // 0x18(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ZMaxDrop;                                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZMaxRaise;                                         // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxDisplacement;                                   // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MassOffset;                                        // 0x40(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct RockVehicleRuntime.BouncyChassisInstance
struct FBouncyChassisInstance
{
public:
	struct FRockBoxSpring                        Spring;                                            // 0x0(0xB0)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_82ED[0x68];                                    // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent
struct FRockVehicleAbilityInPersistent
{
public:
	uint8                                        Pad_82EE[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_AirControl
struct FRockVehicleAbilityInPersistent_AirControl : public FRockVehicleAbilityInPersistent
{
public:
	struct FVector                               TorqueAccel;                                       // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TorqueDamping;                                     // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisableForDodgeTime;                               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82EF[0x4];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous
struct FRockVehicleAbilityInContinuous
{
public:
	struct FFortAthenaVehicleInputState          InputState;                                        // 0x0(0x40)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x48 - 0x40)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_AirControl
struct FRockVehicleAbilityInContinuous_AirControl : public FRockVehicleAbilityInContinuous
{
public:
	bool                                         bAnyWheelsOnGround;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDodgeActive;                                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoUprightActive;                                // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F0[0x5];                                     // Fixing Size Of Struct..
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_AutoUpright
struct FRockVehicleAbilityInPersistent_AutoUpright : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                        Pad_82F1[0x10];                                    // Fixing Size Of Struct..
};

// 0x10 (0x50 - 0x40)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_AutoUpright
struct FRockVehicleAbilityInContinuous_AutoUpright : public FRockVehicleAbilityInContinuous
{
public:
	int32                                        LastWorldContactFrame;                             // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWheelsOnGround;                                   // 0x44(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnyWheelsOnGround;                                // 0x45(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDodgeActive;                                      // 0x46(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBodyContact;                                      // 0x47(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSinceLastBodyContact;                          // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F2[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_Boost
struct FRockVehicleAbilityInPersistent_Boost : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                        Pad_82F3[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x48 - 0x40)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_Boost
struct FRockVehicleAbilityInContinuous_Boost : public FRockVehicleAbilityInContinuous
{
public:
	bool                                         bHasBoost;                                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F4[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RockVehicleRuntime.RockDodgeImpulse_PhysicsThread
struct FRockDodgeImpulse_PhysicsThread
{
public:
	uint8                                        Pad_82F5[0x8];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct RockVehicleRuntime.RockDodgeImpulse
struct FRockDodgeImpulse
{
public:
	struct FRockScalableFloat                    VelocityChange;                                    // 0x0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    MaxSpeedScale;                                     // 0x30(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_Dodge
struct FRockVehicleAbilityInPersistent_Dodge : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                        Pad_82F6[0x40];                                    // Fixing Size Of Struct..
};

// 0x8 (0x48 - 0x40)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_Dodge
struct FRockVehicleAbilityInContinuous_Dodge : public FRockVehicleAbilityInContinuous
{
public:
	bool                                         bWheelsOnGround;                                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F7[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_DoubleJump
struct FRockVehicleAbilityInPersistent_DoubleJump : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                        Pad_82F8[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_Flip
struct FRockVehicleAbilityInPersistent_Flip : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                        Pad_82F9[0x10];                                    // Fixing Size Of Struct..
};

// 0x8 (0x48 - 0x40)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInContinuous_Flip
struct FRockVehicleAbilityInContinuous_Flip : public FRockVehicleAbilityInContinuous
{
public:
	bool                                         bWheelsOnGround;                                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82FA[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RockVehicleRuntime.GroundTrailsData
struct FGroundTrailsData
{
public:
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82FB[0x7];                                     // Fixing Size After Last Property..
	class UNiagaraSystem*                        NiagaraFX;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RockVehicleRuntime.GroundTrailsMap
struct FGroundTrailsMap
{
public:
	class UNiagaraSystem*                        DefaultTrails;                                     // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGroundTrailsData>             GroundTrails;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityInPersistent_Jump
struct FRockVehicleAbilityInPersistent_Jump : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                        Pad_82FC[0x10];                                    // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityOutContinuous
struct FRockVehicleAbilityOutContinuous
{
public:
	bool                                         bShouldStayActive;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleAbilityOutPersistent
struct FRockVehicleAbilityOutPersistent
{
public:
	float                                        ActiveSeconds;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x60 - 0x40)
// ScriptStruct RockVehicleRuntime.RockVehileAbilityInContinous_StickyWheels
struct FRockVehileAbilityInContinous_StickyWheels : public FRockVehicleAbilityInContinuous
{
public:
	struct FVector                               ContactNormal;                                     // 0x40(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnyWheelsOnGround;                                // 0x5C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82FD[0x3];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleAnalyticsSession
struct FRockVehicleAnalyticsSession
{
public:
	class UFortPlayerController*                 DriverPC;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82FE[0x20];                                    // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleWheelAnimInfo
struct FRockVehicleWheelAnimInfo
{
public:
	float                                        SpringToWheelOffsetZ;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        SpringTravelRange;                                 // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRadius;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82FF[0x4];                                     // Fixing Size Of Struct..
};

// 0x1C (0x1C - 0x0)
// ScriptStruct RockVehicleRuntime.RockCameraSettings
struct FRockCameraSettings
{
public:
	float                                        FOV;                                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwivelSpeed;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionSpeed;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RockVehicleRuntime.RockThrottledValue
struct FRockThrottledValue
{
public:
	float                                        RiseRate;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallRate;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x510 (0x510 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleDriveConfig
struct FRockVehicleDriveConfig
{
public:
	struct FRockScalableFloat                    DriveAccel;                                        // 0x0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    DriveTopSpeed;                                     // 0x30(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    BrakeAccel;                                        // 0x60(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockScalableFloat                    StopSpeed;                                         // 0x90(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        IdleBrakeFactor;                                   // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8300[0x4];                                     // Fixing Size After Last Property..
	struct FRuntimeFloatCurve                    DriveAccelCurve;                                   // 0xC8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SteerAngleCurve;                                   // 0x150(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    LatFrictionCurve;                                  // 0x1D8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    LongFrictionCurve;                                 // 0x260(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WallFrictionCurve;                                 // 0x2E8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HandbrakeSteerAngleCurve;                          // 0x370(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HandbrakeLatFrictionCurve;                         // 0x3F8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HandbrakeLongFrictionCurve;                        // 0x480(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRockThrottledValue                   HandbrakeRate;                                     // 0x508(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleSuspensionConfig
struct FRockVehicleSuspensionConfig
{
public:
	float                                        MaxRaise;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDrop;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DampingCompression;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DampingRelaxation;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RockDampingCompression;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RockDampingRelaxation;                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleAxleConfig
struct FRockVehicleAxleConfig
{
public:
	float                                        TranslateX;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslateY;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslateZ;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRadius;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RestDistanceZ;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRockVehicleSuspensionConfig          Suspension;                                        // 0x14(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RockVehicleRuntime.RockVehicleDemoConfig
struct FRockVehicleDemoConfig
{
public:
	struct FGameplayTagContainer                 VehiclesThatCanBeDemolished;                       // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        DemolishAngleYaw;                                  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DemolishAnglePitch;                                // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
