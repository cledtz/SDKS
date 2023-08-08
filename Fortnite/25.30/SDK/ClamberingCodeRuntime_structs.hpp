#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EClamberingType : uint8
{
	Invalid                        = 0,
	Ledge                          = 1,
	Window                         = 2,
	EClamberingType_MAX            = 3,
};

enum class EClamberingState : uint8
{
	Inactive                       = 0,
	Targeting                      = 1,
	Ledge_Moving                   = 2,
	Ledge_Failed                   = 3,
	Window_Moving                  = 4,
	Window_Failed                  = 5,
	EClamberingState_MAX           = 6,
};

enum class EClamberingFailedReason : uint8
{
	None                           = 0,
	Unknown                        = 1,
	DebugForced                    = 2,
	OwnerDied                      = 3,
	OwnerDBNO                      = 4,
	OwnerLaunched                  = 5,
	SynchedActionNotStarted        = 6,
	OwnerTeleported                = 7,
	Ledge_PlayerTooFar             = 8,
	Ledge_TargetLocationInvalid    = 9,
	Ledge_TargetActorInvalid       = 10,
	Ledge_TargetActorDestroyed     = 11,
	Ledge_BlockerEncountered       = 12,
	EClamberingFailedReason_MAX    = 13,
};

enum class EClamberingActivationMode : uint8
{
	ClientPreference               = 0,
	ForceAutoClambering            = 1,
	ForceManualClambering          = 2,
	EClamberingActivationMode_MAX  = 3,
};

enum class EClamberingDebugTextAlign : uint8
{
	Left                           = 0,
	Right                          = 1,
	Center                         = 2,
	EClamberingDebugTextAlign_MAX  = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x210 (0x210 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ClamberingInputConfig
struct FClamberingInputConfig
{
public:
	struct FScalableFloat                        ClamberActivationHorizontalRange;                  // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ClamberActivationVerticalRange;                    // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        EnableInputDelay;                                  // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        QueuedInputWindow;                                 // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        HeldInputDuration;                                 // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EClamberingActivationMode         ActivationMode;                                    // 0xC8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B55[0x7];                                     // Fixing Size After Last Property
	struct FScalableFloat                        AutoStartMovementThreshold;                        // 0xD0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AutoStartLookAtThreshold;                          // 0xF8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AutoStartWallCheckCastRadius;                      // 0x120(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AutoStartWallCheckHorizontalRange;                 // 0x148(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AutoStartWallCheckLookAtThresholdMultiplier;       // 0x170(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TargetInvalidateDistance;                          // 0x198(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TargetAimInvalidateAngle;                          // 0x1C0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TargetActorMovementInvalidateDistance;             // 0x1E8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x378 (0x378 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
struct FClamberingTargetingConfig_Ledge
{
public:
	struct FScalableFloat                        ForwardCastDistance;                               // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ForwardCastRadius;                                 // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FowardCast2D;                                      // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        VerticalSurfaceThreshold;                          // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        HorizontalSurfaceThreshold;                        // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        UpwardDistanceCapsuleHeightMultiplier;             // 0xC8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        UpwardStartDistanceCapsuleHeightMultiplier;        // 0xF0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DownwardDistanceCapsuleHeightMultiplier;           // 0x118(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinimumLedgeHeight;                                // 0x140(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinimumLedgeHeightWater;                           // 0x168(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FallingSpeedThreshold;                             // 0x190(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinimumLedgeFallingHeight;                         // 0x1B8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinimumLedgeFallingWaterHeight;                    // 0x1E0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ForwardSphereCastRadius;                           // 0x208(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DownwardSphereCastRadius;                          // 0x230(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AllowNonWalkableSurfaces;                          // 0x258(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TargetValidationEnabled;                           // 0x280(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TargetValidationCapsuleRadiusModifier;             // 0x2A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TargetValidationCapsuleHalfHeightModifier;         // 0x2D0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TargetValidationCapsuleBottomVerticalOffset;       // 0x2F8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortReleaseVersion                   ContextualActionPrototypeVersion;                  // 0x320(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B59[0x4];                                     // Fixing Size After Last Property
	struct FScalableFloat                        MinimumLedgeDepth;                                 // 0x328(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DownwardSweepOffset;                               // 0x350(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ClamberingInputConfig_CachedValues
struct FClamberingInputConfig_CachedValues
{
public:
	uint8                                        Pad_3B5A[0x38];                                    // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
struct FClamberingTargetingConfig_Ledge_CachedContextualValues
{
public:
	uint8                                        Pad_3B5D[0x60];                                    // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
struct FClamberingTargetingDebugDrawData
{
public:
	uint8                                        Pad_3B5E[0x28];                                    // Fixing Size Of Struct
};

// 0x28 (0x50 - 0x28)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
struct FClamberingTargetingDebugDrawData_Capsule : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                        Pad_3B5F[0x28];                                    // Fixing Size Of Struct
};

// 0x18 (0x40 - 0x28)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
struct FClamberingTargetingDebugDrawData_Line : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                        Pad_3B61[0x18];                                    // Fixing Size Of Struct
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
struct FClamberingTargetingDebugDrawData_Sphere : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                        Pad_3B62[0x8];                                     // Fixing Size Of Struct
};

// 0x20 (0x48 - 0x28)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
struct FClamberingTargetingDebugDrawData_DirectionalArrow : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                        Pad_3B64[0x20];                                    // Fixing Size Of Struct
};

// 0x20 (0x70 - 0x50)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
struct FClamberingTargetingDebugDrawData_CapsuleCast : public FClamberingTargetingDebugDrawData_Capsule
{
public:
	uint8                                        Pad_3B65[0x20];                                    // Fixing Size Of Struct
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
struct FClamberingTargetingDebugDrawData_SphereCast : public FClamberingTargetingDebugDrawData_Sphere
{
public:
	uint8                                        Pad_3B68[0x18];                                    // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugData
struct FClamberingTargetingDebugData
{
public:
	uint8                                        Pad_3B69[0x1];                                     // Fixing Size Of Struct
};

// 0x0 (0x1 - 0x1)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
struct FClamberingTargetingDebugData_Ledge : public FClamberingTargetingDebugData
{
public:
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ClamberingTargetingData
struct FClamberingTargetingData
{
public:
	enum class EClamberingType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bValid : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanStandOnLedge : 1;                              // Mask: 0x2, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_21A : 6;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3B6C[0x6];                                     // Fixing Size After Last Property
	class UActor*                                SourceActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceAim;                                         // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WallLocation;                                      // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WallNormal;                                        // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetNormal;                                      // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                TargetActor;                                       // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       TargetActorComponent;                              // 0xA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetActorComponentLocation;                      // 0xB0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetActorBoneName;                               // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6E[0x4];                                     // Fixing Size Of Struct
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ReplicatedClamberingTargetingData
struct FReplicatedClamberingTargetingData
{
public:
	enum class EClamberingType                   Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6F[0x7];                                     // Fixing Size After Last Property
	struct FVector_NetQuantize10                 SourceLocation;                                    // 0x8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                WallLocation;                                      // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       WallNormalYawQuantized;                            // 0x38(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       WallNormalPitchQuantized;                          // 0x3A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B71[0x4];                                     // Fixing Size After Last Property
	struct FVector_NetQuantize100                TargetLocation;                                    // 0x40(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TargetNormalYawQuantized;                          // 0x58(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TargetNormalPitchQuantized;                        // 0x5A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B72[0x4];                                     // Fixing Size After Last Property
	class UActor*                                TargetActor;                                       // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       TargetActorComponent;                              // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetActorBoneName;                               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         AnimationIndex;                                    // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B73[0x3];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
struct FReplicatedClamberingTargetingData_SimClient
{
public:
	enum class EClamberingType                   Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B75[0x1];                                     // Fixing Size After Last Property
	uint16                                       WallNormalYawQuantized;                            // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B76[0x4];                                     // Fixing Size After Last Property
	struct FVector_NetQuantize100                TargetLocation;                                    // 0x8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                TargetActor;                                       // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       TargetActorComponent;                              // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetActorBoneName;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         AnimationIndex;                                    // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B77[0x3];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
struct FClamberingMovementConfig_Ledge
{
public:
	struct FScalableFloat                        Duration;                                          // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BlockCheckTickRate;                                // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
struct FClamberingAnalytics_ClamberEvent
{
public:
	int32                                        MatchTime;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClamberingType                   ClamberType;                                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7B[0x3];                                     // Fixing Size After Last Property
	struct FVector                               ClamberLocation;                                   // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClamberingFailedReason           FailureReason;                                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7C[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ClamberingCodeRuntime.ClamberingAnimationEntry
struct FClamberingAnimationEntry : public FTableRowBase
{
public:
	class UAnimMontage*                          Montage;                                           // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinClamberHeight;                                  // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLedgeLaunch;                                      // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B81[0x3];                                     // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
