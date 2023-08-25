#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELayeredMove_ConstantVelocitySettingsFlags : uint8
{
	NoFlags                        = 0,
	VelocityStartRelative          = 1,
	VelocityAlwaysRelative         = 2,
	ELayeredMove_MAX               = 3,
};

enum class EMoveMixMode : uint8
{
	AdditiveVelocity               = 0,
	OverrideVelocity               = 1,
	OverrideAll                    = 2,
	EMoveMixMode_MAX               = 3,
};

enum class EMoveInputType : uint8
{
	Invalid                        = 0,
	DirectionalIntent              = 1,
	Velocity                       = 2,
	EMoveInputType_MAX             = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Mover.MoverTimeStep
struct FMoverTimeStep
{
public:
	uint8                                        Pad_2973[0x10];                                    // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Mover.MoverDataCollection
struct FMoverDataCollection
{
public:
	uint8                                        Pad_2974[0x18];                                    // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Mover.KinematicMoverInputCmdContext
struct FKinematicMoverInputCmdContext
{
public:
	struct FMoverDataCollection                  InputCollection;                                   // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Mover.LayeredMoveBase
struct FLayeredMoveBase
{
public:
	uint8                                        Pad_2977[0x8];                                     // Fixing Size After Last Property 
	enum class EMoveMixMode                      MixMode;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2978[0x3];                                     // Fixing Size After Last Property 
	float                                        DurationMs;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartSimTimeMs;                                    // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2979[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Mover.LayeredMove_AnimRootMotion
struct FLayeredMove_AnimRootMotion : public FLayeredMoveBase
{
public:
	class UAnimMontage*                          Montage;                                           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingMontagePosition;                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x38 - 0x18)
// ScriptStruct Mover.LayeredMove_LinearVelocity
struct FLayeredMove_LinearVelocity : public FLayeredMoveBase
{
public:
	struct FVector                               Velocity;                                          // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SettingsFlags;                                     // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297C[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Mover.LayeredMove_JumpImpulse
struct FLayeredMove_JumpImpulse : public FLayeredMoveBase
{
public:
	float                                        UpwardsSpeed;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297D[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Mover.LayeredMove_Teleport
struct FLayeredMove_Teleport : public FLayeredMoveBase
{
public:
	struct FVector                               TargetLocation;                                    // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Mover.MovementModeTickEndState
struct FMovementModeTickEndState
{
public:
	float                                        RemainingMs;                                       // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NextModeName;                                      // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Mover.KinematicMoverSyncState
struct FKinematicMoverSyncState
{
public:
	struct FMoverDataCollection                  SyncStateCollection;                               // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Mover.KinematicMoverAuxStateContext
struct FKinematicMoverAuxStateContext
{
public:
	struct FVector                               UpDir;                                             // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningBoost;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Deceleration;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningRate;                                       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWalkSlopeCosine;                                // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloorSweepDistance;                                // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStepHeight;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JumpUpwardsSpeed;                                  // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Mover.KinematicMoverTickStartData
struct FKinematicMoverTickStartData
{
public:
	struct FKinematicMoverInputCmdContext        InputCmd;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKinematicMoverSyncState              SyncState;                                         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKinematicMoverAuxStateContext        AuxState;                                          // 0x30(0x40)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Mover.KinematicMoverTickEndData
struct FKinematicMoverTickEndData
{
public:
	struct FKinematicMoverSyncState              SyncState;                                         // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FKinematicMoverAuxStateContext        AuxState;                                          // 0x18(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovementModeTickEndState             MovementEndState;                                  // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2985[0x48];                                    // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Mover.LayeredMoveGroup
struct FLayeredMoveGroup
{
public:
	uint8                                        Pad_2986[0x28];                                    // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Mover.MovementSubstep
struct FMovementSubstep
{
public:
	uint8                                        Pad_2987[0x28];                                    // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Mover.MovementRecord
struct FMovementRecord
{
public:
	uint8                                        Pad_2988[0x48];                                    // Fixing Size Of Struct
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Mover.ProposedMove
struct FProposedMove
{
public:
	uint8                                        Pad_2989[0x80];                                    // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Mover.MoverDataStructBase
struct FMoverDataStructBase
{
public:
	uint8                                        Pad_298A[0x8];                                     // Fixing Size Of Struct
};

// 0x68 (0x70 - 0x8)
// ScriptStruct Mover.KinematicDefaultInputs
struct FKinematicDefaultInputs : public FMoverDataStructBase
{
public:
	enum class EMoveInputType                    MoveInputType;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_298C[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               MoveInput;                                         // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               OrientationIntent;                                 // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ControlRotation;                                   // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SuggestedMovementMode;                             // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsingMovementBase;                                // 0x5C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298E[0x3];                                     // Fixing Size After Last Property 
	class UPrimitiveComponent*                   MovementBase;                                      // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MovementBaseBoneName;                              // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsJumpJustPressed;                                // 0x6C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsJumpPressed;                                    // 0x6D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2990[0x2];                                     // Fixing Size Of Struct
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct Mover.MoverDefaultSyncState
struct FMoverDefaultSyncState : public FMoverDataStructBase
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              Orientation;                                       // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               Velocity;                                          // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               MoveDirectionIntent;                               // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MovementMode;                                      // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2993[0x4];                                     // Fixing Size After Last Property 
	class UPrimitiveComponent*                   MovementBase;                                      // 0x70(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MovementBaseBoneName;                              // 0x78(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2994[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               MovementBasePos;                                   // 0x80(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2996[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 MovementBaseQuat;                                  // 0xA0(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLayeredMoveGroup                     LayeredMoves;                                      // 0xC0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_2997[0x8];                                     // Fixing Size Of Struct
};

// 0x18 (0x30 - 0x18)
// ScriptStruct Mover.NetworkPhysicsMoverInputs
struct FNetworkPhysicsMoverInputs : public FNetworkPhysicsDatas
{
public:
	struct FKinematicMoverInputCmdContext        InputCmdContext;                                   // 0x18(0x18)(NativeAccessSpecifierPublic)
};

// 0x58 (0x70 - 0x18)
// ScriptStruct Mover.NetworkPhysicsMoverState
struct FNetworkPhysicsMoverState : public FNetworkPhysicsDatas
{
public:
	struct FKinematicMoverSyncState              SyncStateContext;                                  // 0x18(0x18)(NativeAccessSpecifierPublic)
	struct FKinematicMoverAuxStateContext        AuxStateContext;                                   // 0x30(0x40)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Mover.RelativeBaseInfo
struct FRelativeBaseInfo
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299B[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Location;                                          // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299C[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ContactLocalPosition;                              // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299F[0x8];                                     // Fixing Size Of Struct
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Mover.FloorCheckResult
struct FFloorCheckResult
{
public:
	uint8                                        bBlockingHit : 1;                                  // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWalkableFloor : 1;                                // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLineTrace : 1;                                    // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_180 : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_29A1[0x3];                                     // Fixing Size After Last Property 
	float                                        LineDist;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloorDist;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A2[0x4];                                     // Fixing Size After Last Property 
	struct FHitResult                            HitResult;                                         // 0x10(0xE0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Mover.TrajectorySampleInfo
struct FTrajectorySampleInfo
{
public:
	uint8                                        Pad_29A4[0xB0];                                    // Fixing Size Of Struct
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Mover.GroundMoveParams
struct FGroundMoveParams
{
public:
	enum class EMoveInputType                    MoveInputType;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A6[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               MoveInput;                                         // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OrientationIntent;                                 // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PriorVelocity;                                     // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              PriorOrientation;                                  // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKinematicMoverAuxStateContext        AuxState;                                          // 0x68(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               GroundNormal;                                      // 0xA8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29AC[0x4];                                     // Fixing Size Of Struct
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Mover.FreeMoveParams
struct FFreeMoveParams
{
public:
	enum class EMoveInputType                    MoveInputType;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29AE[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               MoveInput;                                         // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OrientationIntent;                                 // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PriorVelocity;                                     // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              PriorOrientation;                                  // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKinematicMoverAuxStateContext        AuxState;                                          // 0x68(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B6[0x4];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Mover.ComputeVelocityParams
struct FComputeVelocityParams
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B8[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               InitialVelocity;                                   // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MoveDirectionIntent;                               // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningBoost;                                      // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Deceleration;                                      // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct Mover.SimulationTickParams
struct FSimulationTickParams
{
public:
	class USceneComponent*                       UpdatedComponent;                                  // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKinematicMoverTickStartData          StartState;                                        // 0x10(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMoverTimeStep                        TimeStep;                                          // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FProposedMove                         ProposedMove;                                      // 0x90(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

}


