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

enum class EBoneModificationMode : uint8
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,
};

enum class ERefPoseType : uint8
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,
};

enum class EEasingFuncType : uint8
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Cubic                          = 2,
	QuadraticInOut                 = 3,
	CubicInOut                     = 4,
	HermiteCubic                   = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	CustomCurve                    = 14,
	EEasingFuncType_MAX            = 15,
};

enum class ERotationComponent : uint8
{
	EulerX                         = 0,
	EulerY                         = 1,
	EulerZ                         = 2,
	QuaternionAngle                = 3,
	SwingAngle                     = 4,
	TwistAngle                     = 5,
	ERotationComponent_MAX         = 6,
};

enum class EBlendListTransitionType : uint8
{
	StandardBlend                  = 0,
	Inertialization                = 1,
	EBlendListTransitionType_MAX   = 2,
};

enum class EAnimFunctionCallSite : uint8
{
	OnInitialize                   = 0,
	OnUpdate                       = 1,
	OnBecomeRelevant               = 2,
	OnEvaluate                     = 3,
	OnInitializePostRecursion      = 4,
	OnUpdatePostRecursion          = 5,
	OnBecomeRelevantPostRecursion  = 6,
	OnEvaluatePostRecursion        = 7,
	OnStartedBlendingOut           = 8,
	OnStartedBlendingIn            = 9,
	OnFinishedBlendingOut          = 10,
	OnFinishedBlendingIn           = 11,
	EAnimFunctionCallSite_MAX      = 12,
};

enum class ELayeredBoneBlendMode : uint8
{
	BranchFilter                   = 0,
	BlendMask                      = 1,
	ELayeredBoneBlendMode_MAX      = 2,
};

enum class EModifyCurveApplyMode : uint8
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	WeightedMovingAverage          = 3,
	RemapCurve                     = 4,
	EModifyCurveApplyMode_MAX      = 5,
};

enum class EPoseDriverType : uint8
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3,
};

enum class EPoseDriverSource : uint8
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2,
};

enum class EPoseDriverOutput : uint8
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2,
};

enum class ESnapshotSourceMode : uint8
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2,
};

enum class ESequenceEvalReinit : uint8
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3,
};

enum class ESwapRootBone : uint8
{
	SwapRootBone_Component         = 0,
	SwapRootBone_Actor             = 1,
	SwapRootBone_None              = 2,
	SwapRootBone_MAX               = 3,
};

enum class EAnimPhysAngularConstraintType : uint8
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EAnimPhysLinearConstraintType : uint8
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EAnimPhysSimSpaceType : uint8
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5,
};

enum class ESphericalLimitType : uint8
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2,
};

enum class EDrivenBoneModificationMode : uint8
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EDrivenDestinationMode : uint8
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3,
};

enum class EConstraintOffsetOption : uint8
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2,
};

enum class ECopyBoneDeltaMode : uint8
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2,
};

enum class EInterpolationBlend : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
};

enum class ESimulationSpace : uint8
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3,
};

enum class ESimulationTiming : uint8
{
	Default                        = 0,
	Synchronous                    = 1,
	Deferred                       = 2,
	ESimulationTiming_MAX          = 3,
};

enum class EScaleChainInitialLength : uint8
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3,
};

enum class ESplineBoneAxis : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4,
};

enum class EWarpingEvaluationMode : uint8
{
	Manual                         = 0,
	Graph                          = 1,
	EWarpingEvaluationMode_MAX     = 2,
};

enum class EWarpingVectorMode : uint8
{
	ComponentSpaceVector           = 0,
	ActorSpaceVector               = 1,
	WorldSpaceVector               = 2,
	IKFootRootLocalSpaceVector     = 3,
	EWarpingVectorMode_MAX         = 4,
};

enum class ERBFSolverType : uint8
{
	Additive                       = 0,
	Interpolative                  = 1,
	ERBFSolverType_MAX             = 2,
};

enum class ERBFFunctionType : uint8
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	DefaultFunction                = 5,
	ERBFFunctionType_MAX           = 6,
};

enum class ERBFDistanceMethod : uint8
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	DefaultMethod                  = 4,
	ERBFDistanceMethod_MAX         = 5,
};

enum class ERBFNormalizeMethod : uint8
{
	OnlyNormalizeAboveOne          = 0,
	AlwaysNormalize                = 1,
	NormalizeWithinMedian          = 2,
	NoNormalization                = 3,
	ERBFNormalizeMethod_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x60 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
struct FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
{
public:
	float                                        X;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Y;                                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  GroupName;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1381[0x3];                                     // Fixing Size After Last Property..
	class UBlendSpace*                           BlendSpace;                                        // 0x20(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPoseLink>                     SamplePoseLinks;                                   // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1382[0x28];                                    // Fixing Size Of Struct..
};

// 0x0 (0x60 - 0x60)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraph
struct FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
struct FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root
{
public:
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1383[0x2];                                     // Fixing Size After Last Property..
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x38(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x84(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1384[0x14];                                    // Fixing Size Of Struct..
};

// 0x60 (0x128 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1385[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Translation;                                       // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x108(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             TranslationMode;                                   // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x122(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x123(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x124(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x125(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1386[0x2];                                     // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
struct FAnimNode_RefPose : public FAnimNode_Base
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
public:
};

// 0x20 (0xE8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        TargetBone;                                        // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        SourceBone;                                        // 0xD4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         RotationAxisToRefer;                               // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditive;                                       // 0xE5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1387[0x2];                                     // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendSpaceReference
struct FBlendSpaceReference : public FAnimNodeReference
{
public:
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
struct FRotationRetargetingInfo
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1388[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            Source;                                            // 0x10(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Target;                                            // 0x70(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotationComponent                RotationComponent;                                 // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1389[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               TwistAxis;                                         // 0xD8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAbsoluteAngle;                                 // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138A[0x3];                                     // Fixing Size After Last Property..
	float                                        SourceMinimum;                                     // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFuncType                   EasingType;                                        // 0x104(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138B[0x3];                                     // Fixing Size After Last Property..
	struct FRuntimeFloatCurve                    CustomCurve;                                       // 0x108(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         bFlipEasing;                                       // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138C[0x3];                                     // Fixing Size After Last Property..
	float                                        EasingWeight;                                      // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138D[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.PositionHistory
struct FPositionHistory
{
public:
	TArray<struct FVector>                       Positions;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138E[0x1C];                                    // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimationStateResultReference
struct FAnimationStateResultReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimationStateMachineReference
struct FAnimationStateMachineReference : public FAnimNodeReference
{
public:
};

// 0x30 (0x68 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
struct FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_138F[0x28];                                    // Fixing Size After Last Property..
	class UBlendSpace*                           PreviousBlendSpace;                                // 0x60(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x70 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase
{
public:
	class UBlendSpace*                           BlendSpace;                                        // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x150 (0x1C0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
public:
	uint8                                        Pad_1390[0xC0];                                    // Fixing Size After Last Property..
	struct FPoseLink                             BasePose;                                          // 0x130(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocketName;                                  // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PivotSocketName;                                   // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1391[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               LookAtLocation;                                    // 0x150(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SocketAxis;                                        // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1392[0x3C];                                    // Fixing Size Of Struct..
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             Additive;                                          // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x34(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x40(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x8C(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1393[0x4];                                     // Fixing Size After Last Property..
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1394[0x6];                                     // Fixing Size Of Struct..
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
struct FBlendBoneByChannelEntry
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0xC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBlendTranslation;                                 // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendRotation;                                    // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendScale;                                       // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1395[0x1];                                     // Fixing Size Of Struct..
};

// 0x58 (0x68 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             B;                                                 // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBlendBoneByChannelEntry>      BoneDefinitions;                                   // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1396[0x10];                                    // Fixing Size After Last Property..
	float                                        Alpha;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1397[0x4];                                     // Fixing Size After Last Property..
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TransformsSpace;                                   // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1398[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     BlendPose;                                         // 0x10(0x10)(Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1399[0x28];                                    // Fixing Size Of Struct..
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
public:
};

// 0x8 (0x78 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
public:
	float                                        NormalizedTime;                                    // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleportToNormalizedTime;                         // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139A[0x3];                                     // Fixing Size Of Struct..
};

// 0x28 (0x90 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
struct FAnimNode_BlendSpacePlayer_Standalone : public FAnimNode_BlendSpacePlayerBase
{
public:
	class FName                                  GroupName;                                         // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimSyncMethod                   Method;                                            // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreForRelevancyTest;                           // 0x6E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_139B[0x1];                                     // Fixing Size After Last Property..
	float                                        X;                                                 // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Y;                                                 // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLoop;                                             // 0x7C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bResetPlayTimeWhenBlendSpaceChanges;               // 0x7D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_139C[0x2];                                     // Fixing Size After Last Property..
	float                                        StartPosition;                                     // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_139D[0x4];                                     // Fixing Size After Last Property..
	class UBlendSpace*                           BlendSpace;                                        // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CallFunction
struct FAnimNode_CallFunction : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_139E[0x14];                                    // Fixing Size After Last Property..
	enum class EAnimFunctionCallSite             CallSite;                                          // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x1D0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseAttachedParent : 1;                            // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCopyCurves : 1;                                   // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_18E : 6;                                    // Fixing Bit-Field Size..
	bool                                         bCopyCustomAttributes;                             // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMeshPose : 1;                                  // Mask: 0x1, PropSize: 0x10x1A(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_18F : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_139F[0x1];                                     // Fixing Size After Last Property..
	class FName                                  RootBoneToCopy;                                    // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A0[0x1B0];                                   // Fixing Size Of Struct..
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
struct FAnimNode_CurveSource : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SourceBinding;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          CurveSource;                                       // 0x28(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xE0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                     BlendPoses;                                        // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ELayeredBoneBlendMode             BlendMode;                                         // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A1[0x7];                                     // Fixing Size After Last Property..
	TArray<class UBlendProfile*>                 BlendMasks;                                        // 0x38(0x10)(Edit, EditFixedSize, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FInputBlendPose>               LayerSetup;                                        // 0x48(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendWeights;                                      // 0x58(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceRotationBlend;                           // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceScaleBlend;                              // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECurveBlendOption                 CurveBlendOption;                                  // 0x6A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendRootMotionBasedOnRootBone;                   // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A2[0x4];                                     // Fixing Size After Last Property..
	int32                                        LODThreshold;                                      // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A3[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FPerBoneBlendWeight>           PerBoneBlendWeights;                               // 0x78(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 SkeletonGuid;                                      // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 VirtualBoneGuid;                                   // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13A4[0x38];                                    // Fixing Size Of Struct..
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             Additive;                                          // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceAdditive;                                // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A5[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MirrorBase
struct FAnimNode_MirrorBase : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13A6[0x28];                                    // Fixing Size Of Struct..
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_Mirror
struct FAnimNode_Mirror : public FAnimNode_MirrorBase
{
public:
};

// 0x18 (0x60 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_Mirror_Standalone
struct FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase
{
public:
	bool                                         bMirror;                                           // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13A7[0x7];                                     // Fixing Size After Last Property..
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlendTime;                                         // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetChild;                                       // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoneMirroring;                                    // 0x5D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCurveMirroring;                                   // 0x5E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAttributeMirroring;                               // 0x5F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     CurveMap;                                          // 0x20(0x50)(Edit, BlueprintVisible, EditFixedSize, NativeAccessSpecifierPublic)
	TArray<float>                                CurveValues;                                       // 0x70(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          CurveNames;                                        // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A8[0x64];                                    // Fixing Size After Last Property..
	float                                        Alpha;                                             // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModifyCurveApplyMode             ApplyMode;                                         // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A9[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x50 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     Poses;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DesiredAlphas;                                     // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AA[0x10];                                    // Fixing Size After Last Property..
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAdditiveNode;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeAlpha;                                   // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AB[0x6];                                     // Fixing Size Of Struct..
};

// 0x60 (0x98 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
public:
	class UPoseAsset*                            PoseAsset;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AC[0x58];                                    // Fixing Size Of Struct..
};

// 0x20 (0xB8 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x98(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AD[0x7];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           CustomCurve;                                       // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xA8 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
public:
	class FName                                  PoseName;                                          // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoseWeight;                                        // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AE[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTransform
struct FPoseDriverTransform
{
public:
	struct FVector                               TargetTranslation;                                 // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTarget
struct FPoseDriverTarget
{
public:
	TArray<struct FPoseDriverTransform>          BoneTransforms;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TargetScale;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCustomCurve;                                 // 0x2E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AF[0x1];                                     // Fixing Size After Last Property..
	struct FRichCurve                            CustomCurve;                                       // 0x30(0x80)(Edit, NativeAccessSpecifierPublic)
	class FName                                  DrivenName;                                        // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B0[0x8];                                     // Fixing Size After Last Property..
	bool                                         bIsHidden;                                         // 0xBC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B1[0x3];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFParams
struct FRBFParams
{
public:
	int32                                        TargetDimensions;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFSolverType                    SolverType;                                        // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B2[0x3];                                     // Fixing Size After Last Property..
	float                                        Radius;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutomaticRadius;                                  // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  Function;                                          // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         TwistAxis;                                         // 0xF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightThreshold;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFNormalizeMethod               NormalizeMethod;                                   // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B3[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               MedianReference;                                   // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MedianMin;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MedianMax;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0x188 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x98(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                SourceBones;                                       // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                OnlyDriveBones;                                    // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseDriverTarget>             PoseTargets;                                       // 0xC8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B4[0x30];                                    // Fixing Size After Last Property..
	struct FBoneReference                        EvalSpaceBone;                                     // 0x108(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEvalFromRefPose;                                  // 0x114(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B5[0x3];                                     // Fixing Size After Last Property..
	struct FRBFParams                            RBFParams;                                         // 0x118(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EPoseDriverSource                 DriveSource;                                       // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseDriverOutput                 DriveOutput;                                       // 0x151(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyDriveSelectedBones : 1;                       // Mask: 0x1, PropSize: 0x10x152(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_190 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_13B6[0x1];                                     // Fixing Size After Last Property..
	int32                                        LODThreshold;                                      // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B7[0x30];                                    // Fixing Size Of Struct..
};

// 0x70 (0x80 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
public:
	class FName                                  SnapshotName;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B8[0x4];                                     // Fixing Size After Last Property..
	struct FPoseSnapshot                         Snapshot;                                          // 0x18(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESnapshotSourceMode               Mode;                                              // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B9[0x37];                                    // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct FRandomPlayerSequenceEntry
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToPlay;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLoopCount;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLoopCount;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPlayRate;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPlayRate;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BA[0x4];                                     // Fixing Size After Last Property..
	struct FAlphaBlend                           BlendIn;                                           // 0x20(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x78 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
struct FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase
{
public:
	TArray<struct FRandomPlayerSequenceEntry>    Entries;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BB[0x50];                                    // Fixing Size After Last Property..
	float                                        BlendWeight;                                       // 0x70(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShuffleMode;                                      // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BC[0x3];                                     // Fixing Size Of Struct..
};

// 0xA0 (0xB0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  PitchScaleBiasClamp;                               // 0x28(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  YawScaleBiasClamp;                                 // 0x58(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MeshToComponent;                                   // 0x88(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRotateRootMotionAttribute;                        // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BD[0xF];                                     // Fixing Size Of Struct..
};

// 0xA8 (0x118 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
public:
	struct FPoseLink                             BasePose;                                          // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x88(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x90(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xDC(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BE[0x4];                                     // Fixing Size After Last Property..
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BF[0x6];                                     // Fixing Size Of Struct..
};

// 0xA8 (0x108 - 0x60)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
struct FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
public:
	struct FPoseLink                             BasePose;                                          // 0x60(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	int32                                        LODThreshold;                                      // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Alpha;                                             // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x78(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x80(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  AlphaCurveName;                                    // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xCC(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13C0[0x4];                                     // Fixing Size After Last Property..
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAlphaBoolEnabled;                                 // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13C1[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x40 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
struct FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_13C2[0x8];                                     // Fixing Size Of Struct..
};

// 0x0 (0x40 - 0x40)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
struct FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase
{
public:
};

// 0x20 (0x60 - 0x40)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
struct FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase
{
public:
	class FName                                  GroupName;                                         // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimSyncMethod                   Method;                                            // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreForRelevancyTest;                           // 0x46(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13C3[0x1];                                     // Fixing Size After Last Property..
	class UAnimSequenceBase*                     Sequence;                                          // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExplicitTime;                                      // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldLoop;                                       // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTeleportToExplicitTime;                           // 0x55(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESequenceEvalReinit               ReinitializationBehavior;                          // 0x56(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13C4[0x1];                                     // Fixing Size After Last Property..
	float                                        StartPosition;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13C5[0x4];                                     // Fixing Size Of Struct..
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
struct FAnimNode_Slot : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysUpdateSourcePose;                           // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C6[0x23];                                    // Fixing Size Of Struct..
};

// 0x18 (0x28 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_Sync
struct FAnimNode_Sync : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  GroupName;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13C7[0x3];                                     // Fixing Size Of Struct..
};

// 0xB0 (0xC0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             B;                                                 // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x31(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_191 : 2;                                    // Fixing Bit-Field Size..
	uint8                                        bResetChildOnActivation : 1;                       // Mask: 0x8, PropSize: 0x10x31(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_192 : 4;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_13C8[0x2];                                     // Fixing Size After Last Property..
	float                                        Alpha;                                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x40(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x8C(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C9[0x4];                                     // Fixing Size Of Struct..
};

// 0x458 (0xB50 - 0x6F8)
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_13CA[0x458];                                   // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendListBaseReference
struct FBlendListBaseReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendSpacePlayerReference
struct FBlendSpacePlayerReference : public FAnimNodeReference
{
public:
};

// 0x88 (0x88 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct FAnimPhysConstraintSetup
{
public:
	enum class EAnimPhysLinearConstraintType     LinearXLimitType;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearYLimitType;                                  // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearZLimitType;                                  // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CB[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               LinearAxesMin;                                     // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearAxesMax;                                     // 0x20(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysAngularConstraintType    AngularConstraintType;                             // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                TwistAxis;                                         // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                AngularTargetAxis;                                 // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CC[0x1];                                     // Fixing Size After Last Property..
	float                                        ConeAngle;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularLimitsMin;                                  // 0x40(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularLimitsMax;                                  // 0x58(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularTarget;                                     // 0x70(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct FAnimPhysPlanarLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CD[0x4];                                     // Fixing Size After Last Property..
	struct FTransform                            PlaneTransform;                                    // 0x10(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct FAnimPhysSphericalLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CE[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               SphereLocalOffset;                                 // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimitRadius;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESphericalLimitType               LimitType;                                         // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CF[0x3];                                     // Fixing Size Of Struct..
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysBodyDefinition
struct FAnimPhysBodyDefinition
{
public:
	struct FBoneReference                        BoundBone;                                         // 0x0(0xC)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D0[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               BoxExtents;                                        // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalJointOffset;                                  // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimPhysConstraintSetup              ConstraintSetup;                                   // 0x40(0x88)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimPhysCollisionType            CollisionType;                                     // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D1[0x3];                                     // Fixing Size After Last Property..
	float                                        SphereCollisionRadius;                             // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x448 (0x510 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
public:
	float                                        LinearDampingOverride;                             // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularDampingOverride;                            // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D2[0xC0];                                    // Fixing Size After Last Property..
	struct FBoneReference                        RelativeSpaceBone;                                 // 0x190(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        BoundBone;                                         // 0x19C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ChainEnd;                                          // 0x1A8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D3[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FAnimPhysBodyDefinition>       PhysicsBodyDefinitions;                            // 0x1B8(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D4[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               GravityOverride;                                   // 0x1D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearSpringConstant;                              // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularSpringConstant;                             // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindScale;                                         // 0x1F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D5[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ComponentLinearAccScale;                           // 0x1F8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentLinearVelScale;                           // 0x210(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentAppliedLinearAccClamp;                    // 0x228(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularBiasOverride;                               // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSolverIterationsPreUpdate;                      // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSolverIterationsPostUpdate;                     // 0x248(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D6[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FAnimPhysSphericalLimit>       SphericalLimits;                                   // 0x250(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               ExternalForce;                                     // 0x260(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x278(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAnimPhysSimSpaceType             SimulationSpace;                                   // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D7[0x2];                                     // Fixing Size After Last Property..
	uint8                                        bUseSphericalLimits : 1;                           // Mask: 0x1, PropSize: 0x10x28B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x2, PropSize: 0x10x28B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoUpdate : 1;                                     // Mask: 0x4, PropSize: 0x10x28B(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoEval : 1;                                       // Mask: 0x8, PropSize: 0x10x28B(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideLinearDamping : 1;                        // Mask: 0x10, PropSize: 0x10x28B(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAngularBias : 1;                          // Mask: 0x20, PropSize: 0x10x28B(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAngularDamping : 1;                       // Mask: 0x40, PropSize: 0x10x28B(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableWind : 1;                                   // Mask: 0x80, PropSize: 0x10x28B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_193 : 1;                                    // Fixing Bit-Field Size..
	uint8                                        bUseGravityOverride : 1;                           // Mask: 0x2, PropSize: 0x10x28C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGravityOverrideInSimSpace : 1;                    // Mask: 0x4, PropSize: 0x10x28C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLinearSpring : 1;                                 // Mask: 0x8, PropSize: 0x10x28C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAngularSpring : 1;                                // Mask: 0x10, PropSize: 0x10x28C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bChain : 1;                                        // Mask: 0x20, PropSize: 0x10x28C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_194 : 2;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_13D8[0x3];                                     // Fixing Size After Last Property..
	struct FRotationRetargetingInfo              RetargetingSettings;                               // 0x290(0x1A0)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D9[0xE0];                                    // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.AngularRangeLimit
struct FAngularRangeLimit
{
public:
	struct FVector                               LimitMin;                                          // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LimitMax;                                          // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        bone;                                              // 0x30(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DA[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0xE8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FAngularRangeLimit>            AngularRangeLimits;                                // 0xC8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       AngularOffsets;                                    // 0xD8(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x120 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DB[0x4];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           DrivingCurve;                                      // 0xD8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DC[0x4];                                     // Fixing Size After Last Property..
	double                                       RangeMin;                                          // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RangeMax;                                          // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RemappedMin;                                       // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RemappedMax;                                       // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0x10C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EDrivenDestinationMode            DestinationMode;                                   // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrivenBoneModificationMode       ModificationMode;                                  // 0x119(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentType                    SourceComponent;                                   // 0x11A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseRange : 1;                                     // Mask: 0x1, PropSize: 0x10x11B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationX : 1;                     // Mask: 0x2, PropSize: 0x10x11B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationY : 1;                     // Mask: 0x4, PropSize: 0x10x11B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationZ : 1;                     // Mask: 0x8, PropSize: 0x10x11B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationX : 1;                        // Mask: 0x10, PropSize: 0x10x11B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationY : 1;                        // Mask: 0x20, PropSize: 0x10x11B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationZ : 1;                        // Mask: 0x40, PropSize: 0x10x11B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleX : 1;                           // Mask: 0x80, PropSize: 0x10x11B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleY : 1;                           // Mask: 0x1, PropSize: 0x10x11C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleZ : 1;                           // Mask: 0x2, PropSize: 0x10x11C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DD[0x3];                                     // Fixing Size Of Struct..
};

// 0xE8 (0x1B0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FVector                               EffectorLocation;                                  // 0xC8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DE[0xF];                                     // Fixing Size After Last Property..
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0xF0(0x80)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TipBone;                                           // 0x170(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0x17C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x188(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotationLimit;                              // 0x191(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DF[0x6];                                     // Fixing Size After Last Property..
	TArray<float>                                RotationLimitPerJoints;                            // 0x198(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13E0[0x8];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AnimGraphRuntime.Constraint
struct FConstraint
{
public:
	struct FBoneReference                        TargetBone;                                        // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EConstraintOffsetOption           OffsetOption;                                      // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformConstraintType          TransformType;                                     // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  PerAxis;                                           // 0xE(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E1[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x108 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E2[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FConstraint>                   ConstraintSetup;                                   // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ConstraintWeights;                                 // 0xE8(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E3[0x10];                                    // Fixing Size Of Struct..
};

// 0x20 (0xE8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0xD4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ControlSpace;                                      // 0xE3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E4[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0xD4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECopyBoneDeltaMode                CopyMode;                                          // 0xE3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationMultiplier;                             // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationMultiplier;                                // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x1E0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_13E5[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            EffectorTransform;                                 // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0x130(0x80)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TipBone;                                           // 0x1B0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0x1BC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorTransformSpace;                            // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneRotationSource               EffectorRotationSource;                            // 0x1D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E6[0xE];                                     // Fixing Size Of Struct..
};

// 0x48 (0x110 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        RightHandFK;                                       // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LeftHandFK;                                        // 0xD4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RightHandIK;                                       // 0xE0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LeftHandIK;                                        // 0xEC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                IKBonesToMove;                                     // 0xF8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        HandFKWeight;                                      // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E7[0x4];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChainLink
struct FIKChainLink
{
public:
	uint8                                        Pad_13E8[0x70];                                    // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChain
struct FIKChain
{
public:
	uint8                                        Pad_13E9[0x50];                                    // Fixing Size Of Struct..
};

// 0x24 (0x24 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct FAnimLegIKDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKFootBone;                                        // 0xC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRotationAngle;                                  // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             FootBoneForwardAxis;                               // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             HingeRotationAxis;                                 // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotationLimit;                              // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableKneeTwistCorrection;                        // 0x23(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKData
struct FAnimLegIKData
{
public:
	uint8                                        Pad_13EA[0xE0];                                    // Fixing Size Of Struct..
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
public:
	float                                        ReachPrecision;                                    // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKDefinition>          LegsDefinition;                                    // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EB[0x18];                                    // Fixing Size Of Struct..
};

// 0x170 (0x238 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EC[0xC];                                     // Fixing Size After Last Property..
	struct FBoneSocketTarget                     LookAtTarget;                                      // 0xE0(0x80)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LookAtLocation;                                    // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                 LookAt_Axis;                                       // 0x178(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLookUpAxis;                                    // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpolationBlend               InterpolationType;                                 // 0x199(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13ED[0x6];                                     // Fixing Size After Last Property..
	struct FAxis                                 LookUp_Axis;                                       // 0x1A0(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LookAtClamp;                                       // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTime;                                 // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTriggerThreashold;                    // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EE[0x6C];                                    // Fixing Size Of Struct..
};

// 0x58 (0x120 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToObserve;                                     // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 DisplaySpace;                                      // 0xD4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeToRefPose;                                // 0xD5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EF[0x2];                                     // Fixing Size After Last Property..
	struct FVector                               Translation;                                       // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_13F0[0x10];                                    // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AnimGraphRuntime.SimSpaceSettings
struct FSimSpaceSettings
{
public:
	float                                        WorldAlpha;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityScaleZ;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLinearVelocity;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngularVelocity;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLinearAcceleration;                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngularAcceleration;                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalLinearDragV;                               // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalLinearVelocity;                            // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalAngularVelocity;                           // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8D8 (0x9A0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
public:
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0xC8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F1[0x128];                                   // Fixing Size After Last Property..
	struct FVector                               OverrideWorldGravity;                              // 0x1F8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalForce;                                     // 0x210(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentLinearAccScale;                           // 0x228(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentLinearVelScale;                           // 0x240(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentAppliedLinearAccClamp;                    // 0x258(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimSpaceSettings                     SimSpaceSettings;                                  // 0x270(0x60)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CachedBoundsScale;                                 // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        BaseBoneRef;                                       // 0x2D4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x2E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESimulationSpace                  SimulationSpace;                                   // 0x2E1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDisableCollisionBetweenConstraintBodies;     // 0x2E2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExternalClothCollision;                        // 0x2E3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F2[0x1];                                     // Fixing Size After Last Property..
	uint8                                        bEnableWorldGeometry : 1;                          // Mask: 0x1, PropSize: 0x10x2E5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideWorldGravity : 1;                         // Mask: 0x2, PropSize: 0x10x2E5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransferBoneVelocities : 1;                       // Mask: 0x4, PropSize: 0x10x2E5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFreezeIncomingPoseOnStart : 1;                    // Mask: 0x8, PropSize: 0x10x2E5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClampLinearTranslationLimitToRefPose : 1;         // Mask: 0x10, PropSize: 0x10x2E5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_195 : 3;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_13F3[0x2];                                     // Fixing Size After Last Property..
	float                                        WorldSpaceMinimumScale;                            // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EvaluationResetTime;                               // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F4[0x1];                                     // Fixing Size After Last Property..
	enum class ESimulationTiming                 SimulationTiming;                                  // 0x2F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F5[0x6AE];                                   // Fixing Size Of Struct..
};

// 0x70 (0x80 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DefaultChainLength;                                // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        ChainStartBone;                                    // 0x24(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ChainEndBone;                                      // 0x30(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F6[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               TargetLocation;                                    // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F7[0x4];                                     // Fixing Size After Last Property..
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x60(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EScaleChainInitialLength          ChainInitialLength;                                // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F8[0x17];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct FSplineIKCachedBoneData
{
public:
	struct FBoneReference                        bone;                                              // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RefSkeletonIndex;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x268 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        StartBone;                                         // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        EndBone;                                           // 0xD4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESplineBoneAxis                   BoneAxis;                                          // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCalculateSpline;                              // 0xE1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F9[0x2];                                     // Fixing Size After Last Property..
	int32                                        PointCount;                                        // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ControlPoints;                                     // 0xE8(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistStart;                                        // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistEnd;                                          // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FA[0x4];                                     // Fixing Size After Last Property..
	struct FAlphaBlend                           TwistBlend;                                        // 0x108(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Stretch;                                           // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FB[0x128];                                   // Fixing Size Of Struct..
};

// 0xA0 (0x168 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SpringBone;                                        // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FC[0x4];                                     // Fixing Size After Last Property..
	double                                       MaxDisplacement;                                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SpringStiffness;                                   // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SpringDamping;                                     // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ErrorResetThresh;                                  // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FD[0x6C];                                    // Fixing Size After Last Property..
	uint8                                        bLimitDisplacement : 1;                            // Mask: 0x1, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTranslateX : 1;                                   // Mask: 0x2, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTranslateY : 1;                                   // Mask: 0x4, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTranslateZ : 1;                                   // Mask: 0x8, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRotateX : 1;                                      // Mask: 0x10, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRotateY : 1;                                      // Mask: 0x20, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRotateZ : 1;                                      // Mask: 0x40, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FE[0x3];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationLimit
struct FRotationLimit
{
public:
	struct FVector                               LimitMin;                                          // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LimitMax;                                          // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x2A0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_13FF[0x68];                                    // Fixing Size After Last Property..
	struct FBoneReference                        TrailBone;                                         // 0x130(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ChainLength;                                       // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             ChainBoneAxis;                                     // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInvertChainBoneAxis : 1;                          // Mask: 0x1, PropSize: 0x10x141(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitStretch : 1;                                 // Mask: 0x2, PropSize: 0x10x141(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitRotation : 1;                                // Mask: 0x4, PropSize: 0x10x141(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x8, PropSize: 0x10x141(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bActorSpaceFakeVel : 1;                            // Mask: 0x10, PropSize: 0x10x141(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReorientParentToChild : 1;                        // Mask: 0x20, PropSize: 0x10x141(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_196 : 2;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1400[0x2];                                     // Fixing Size After Last Property..
	float                                        MaxDeltaTime;                                      // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelaxationSpeedScale;                              // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1401[0x4];                                     // Fixing Size After Last Property..
	struct FRuntimeFloatCurve                    TrailRelaxationSpeed;                              // 0x150(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  RelaxationSpeedScaleInputProcessor;                // 0x1D8(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FRotationLimit>                RotationLimits;                                    // 0x208(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       RotationOffsets;                                   // 0x218(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x228(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        StretchLimit;                                      // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1402[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               FakeVelocity;                                      // 0x240(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        BaseJoint;                                         // 0x258(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LastBoneRotationAnimAlphaBlend;                    // 0x264(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1403[0x38];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct FReferenceBoneFrame
{
public:
	struct FBoneReference                        bone;                                              // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1404[0x4];                                     // Fixing Size After Last Property..
	struct FAxis                                 Axis;                                              // 0x10(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0x168 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
public:
	struct FReferenceBoneFrame                   BaseFrame;                                         // 0xC8(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FReferenceBoneFrame                   TwistFrame;                                        // 0xF8(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                 TwistPlaneNormalAxis;                              // 0x128(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMin;                                       // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMax;                                       // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimCurveParam                       Curve;                                             // 0x154(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1405[0xC];                                     // Fixing Size Of Struct..
};

// 0x198 (0x260 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        IKBone;                                            // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1406[0x4];                                     // Fixing Size After Last Property..
	double                                       StartStretchRatio;                                 // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MaxStretchScale;                                   // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EffectorLocation;                                  // 0xE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1407[0x10];                                    // Fixing Size After Last Property..
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0x110(0x80)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               JointTargetLocation;                               // 0x190(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1408[0x8];                                     // Fixing Size After Last Property..
	struct FBoneSocketTarget                     JointTarget;                                       // 0x1B0(0x80)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                 TwistAxis;                                         // 0x230(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 JointTargetLocationSpace;                          // 0x251(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowStretching : 1;                              // Mask: 0x1, PropSize: 0x10x252(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTakeRotationFromEffectorSpace : 1;                // Mask: 0x2, PropSize: 0x10x252(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMaintainEffectorRelRot : 1;                       // Mask: 0x4, PropSize: 0x10x252(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowTwist : 1;                                   // Mask: 0x8, PropSize: 0x10x252(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1409[0xD];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// ScriptStruct AnimGraphRuntime.IKFootPelvisPullDownSolver
struct FIKFootPelvisPullDownSolver
{
public:
	struct FVectorRK4SpringInterpolator          PelvisAdjustmentInterp;                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140A[0x58];                                    // Fixing Size After Last Property..
	double                                       PelvisAdjustmentInterpAlpha;                       // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       PelvisAdjustmentMaxDistance;                       // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       PelvisAdjustmentErrorTolerance;                    // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PelvisAdjustmentMaxIter;                           // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140B[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimGraphRuntime.WarpingVectorValue
struct FWarpingVectorValue
{
public:
	enum class EWarpingVectorMode                Mode;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140C[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.LayeredBoneBlendReference
struct FLayeredBoneBlendReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.LinkedAnimGraphReference
struct FLinkedAnimGraphReference : public FAnimNodeReference
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFEntry
struct FRBFEntry
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0xA0 - 0x10)
// ScriptStruct AnimGraphRuntime.RBFTarget
struct FRBFTarget : public FRBFEntry
{
public:
	float                                        ScaleFactor;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCustomCurve;                                 // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140D[0x3];                                     // Fixing Size After Last Property..
	struct FRichCurve                            CustomCurve;                                       // 0x18(0x80)(Edit, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140E[0x6];                                     // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SequenceEvaluatorReference
struct FSequenceEvaluatorReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SequencePlayerReference
struct FSequencePlayerReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SkeletalControlReference
struct FSkeletalControlReference : public FAnimNodeReference
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
