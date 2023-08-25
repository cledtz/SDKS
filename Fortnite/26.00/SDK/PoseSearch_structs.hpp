#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPoseSearchMode : int32
{
	BruteForce                     = 0,
	PCAKDTree                      = 1,
	PCAKDTree_Validate             = 2,
	PCAKDTree_Compare              = 3,
	Num                            = 4,
	Invalid                        = 4,
	EPoseSearchMode_MAX            = 5,
};

enum class EPoseSearchMirrorOption : int32
{
	UnmirroredOnly                 = 0,
	MirroredOnly                   = 1,
	UnmirroredAndMirrored          = 2,
	Num                            = 3,
	Invalid                        = 3,
	EPoseSearchMirrorOption_MAX    = 4,
};

enum class EComponentStrippingVector : uint8
{
	None                           = 0,
	StripXY                        = 1,
	StripZ                         = 2,
	EComponentStrippingVector_MAX  = 3,
};

enum class EInputQueryPose : uint8
{
	UseCharacterPose               = 0,
	UseContinuingPose              = 1,
	UseInterpolatedContinuingPose  = 2,
	EInputQueryPose_MAX            = 3,
};

enum class EPermutationTimeType : uint8
{
	UseSampleTime                  = 0,
	UsePermutationTime             = 1,
	UseSampleToPermutationTime     = 2,
	EPermutationTimeType_MAX       = 3,
};

enum class EHeadingAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	Num                            = 3,
	Invalid                        = 3,
	EHeadingAxis_MAX               = 4,
};

enum class EPoseSearchBoneFlags : uint8
{
	Velocity                       = 1,
	Position                       = 2,
	Rotation                       = 4,
	Phase                          = 8,
	EPoseSearchBoneFlags_MAX       = 9,
};

enum class EPoseSearchTrajectoryFlags : uint8
{
	Velocity                       = 1,
	Position                       = 2,
	VelocityDirection              = 4,
	FacingDirection                = 8,
	VelocityXY                     = 16,
	PositionXY                     = 32,
	VelocityDirectionXY            = 64,
	FacingDirectionXY              = 128,
	EPoseSearchTrajectoryFlags_MAX = 129,
};

enum class EPoseSearchDataPreprocessor : int32
{
	None                           = 0,
	Normalize                      = 1,
	NormalizeOnlyByDeviation       = 2,
	Num                            = 3,
	Invalid                        = 3,
	EPoseSearchDataPreprocessor_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x10 - 0x10)
// ScriptStruct PoseSearch.MotionMatchingAnimNodeReference
struct FMotionMatchingAnimNodeReference : public FAnimNodeReference
{
public:
};

// 0x4 (0x4 - 0x0)
// ScriptStruct PoseSearch.PoseSearchCost
struct FPoseSearchCost
{
public:
	float                                        TotalCost;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PoseSearch.PoseSearchExcludeFromDatabaseParameters
struct FPoseSearchExcludeFromDatabaseParameters
{
public:
	float                                        SequenceStartInterval;                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SequenceEndInterval;                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PoseSearch.PoseSearchDatabaseAnimationAssetBase
struct FPoseSearchDatabaseAnimationAssetBase
{
public:
	uint8                                        Pad_51F3[0x8];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PoseSearch.PoseSearchDatabaseSequence
struct FPoseSearchDatabaseSequence : public FPoseSearchDatabaseAnimationAssetBase
{
public:
	class UAnimSequence*                         Sequence;                                          // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51F4[0x3];                                     // Fixing Size After Last Property 
	struct FFloatInterval                        SamplingRange;                                     // 0x14(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseSearchMirrorOption           MirrorOption;                                      // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PoseSearch.PoseSearchDatabaseBlendSpace
struct FPoseSearchDatabaseBlendSpace : public FPoseSearchDatabaseAnimationAssetBase
{
public:
	class UBlendSpace*                           BlendSpace;                                        // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseSearchMirrorOption           MirrorOption;                                      // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSingleSample;                                  // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGridForSampling;                               // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51F7[0x2];                                     // Fixing Size After Last Property 
	int32                                        NumberOfHorizontalSamples;                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfVerticalSamples;                           // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendParamX;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendParamY;                                       // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51F9[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PoseSearch.PoseSearchDatabaseAnimComposite
struct FPoseSearchDatabaseAnimComposite : public FPoseSearchDatabaseAnimationAssetBase
{
public:
	class UAnimComposite*                        AnimComposite;                                     // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51FE[0x3];                                     // Fixing Size After Last Property 
	struct FFloatInterval                        SamplingRange;                                     // 0x14(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseSearchMirrorOption           MirrorOption;                                      // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PoseSearch.PoseSearchDatabaseAnimMontage
struct FPoseSearchDatabaseAnimMontage : public FPoseSearchDatabaseAnimationAssetBase
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5201[0x3];                                     // Fixing Size After Last Property 
	struct FFloatInterval                        SamplingRange;                                     // 0x14(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseSearchMirrorOption           MirrorOption;                                      // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct PoseSearch.PoseSearchBone
struct FPoseSearchBone
{
public:
	struct FBoneReference                        Reference;                                         // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Flags;                                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DebugColor;                                        // 0x14(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct PoseSearch.PoseSearchTrajectorySample
struct FPoseSearchTrajectorySample
{
public:
	float                                        Offset;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Flags;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DebugColor;                                        // 0xC(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct PoseSearch.PoseSearchQueryTrajectorySample
struct FPoseSearchQueryTrajectorySample
{
public:
	struct FQuat                                 Facing;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedSeconds;                                // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5205[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PoseSearch.PoseSearchQueryTrajectory
struct FPoseSearchQueryTrajectory
{
public:
	TArray<struct FPoseSearchQueryTrajectorySample> Samples;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x218 (0x218 - 0x0)
// ScriptStruct PoseSearch.PoseSearchAnimPlayer
struct FPoseSearchAnimPlayer
{
public:
	uint8                                        Pad_5206[0x218];                                   // Fixing Size Of Struct
};

// 0x20 (0x58 - 0x38)
// ScriptStruct PoseSearch.AnimNode_BlendStack_Standalone
struct FAnimNode_BlendStack_Standalone : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_5208[0x20];                                    // Fixing Size Of Struct
};

// 0x58 (0xB0 - 0x58)
// ScriptStruct PoseSearch.AnimNode_BlendStack
struct FAnimNode_BlendStack : public FAnimNode_BlendStack_Standalone
{
public:
	class UAnimationAsset*                       AnimationAsset;                                    // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationTime;                                     // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrored;                                         // 0x65(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_520A[0x2];                                     // Fixing Size After Last Property 
	float                                        WantedPlayRate;                                    // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootBoneBlendTime;                                 // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAnimationDeltaTime;                             // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxActiveBlends;                                   // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_520C[0x4];                                     // Fixing Size After Last Property 
	class UBlendProfile*                         BlendProfile;                                      // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_520D[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               BlendParameters;                                   // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0xA8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x170 (0x1A8 - 0x38)
// ScriptStruct PoseSearch.AnimNode_MotionMatching
struct FAnimNode_MotionMatching : public FAnimNode_AssetPlayerBase
{
public:
	struct FPoseLink                             Source;                                            // 0x38(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	class UPoseSearchDatabase*                   Database;                                          // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPoseSearchQueryTrajectory            Trajectory;                                        // 0x50(0x10)(Edit, NativeAccessSpecifierPrivate)
	float                                        TrajectorySpeedMultiplier;                         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendTime;                                         // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxActiveBlends;                                   // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5217[0x4];                                     // Fixing Size After Last Property 
	class UBlendProfile*                         BlendProfile;                                      // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5219[0x3];                                     // Fixing Size After Last Property 
	float                                        PoseJumpThresholdTime;                             // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PoseReselectHistory;                               // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SearchThrottleTime;                                // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatInterval                        PlayRate;                                          // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bResetOnBecomingRelevant;                          // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldSearch;                                     // 0x91(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_521B[0x2];                                     // Fixing Size After Last Property 
	float                                        YawFromAnimationTrajectoryBlendTime;               // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        YawFromAnimationBlendRate;                         // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_521C[0xF4];                                    // Fixing Size After Last Property 
	TArray<class UPoseSearchDatabase*>           DatabasesToSearch;                                 // 0x190(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_521D[0x8];                                     // Fixing Size Of Struct
};

// 0x98 (0xA8 - 0x10)
// ScriptStruct PoseSearch.AnimNode_PoseSearchHistoryCollector_Base
struct FAnimNode_PoseSearchHistoryCollector_Base : public FAnimNode_Base
{
public:
	int32                                        PoseCount;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoseDuration;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                CollectedBones;                                    // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_521E[0x80];                                    // Fixing Size Of Struct
};

// 0x10 (0xB8 - 0xA8)
// ScriptStruct PoseSearch.AnimNode_PoseSearchHistoryCollector
struct FAnimNode_PoseSearchHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{
public:
	struct FPoseLink                             Source;                                            // 0xA8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0xB8 - 0xA8)
// ScriptStruct PoseSearch.AnimNode_PoseSearchComponentSpaceHistoryCollector
struct FAnimNode_PoseSearchComponentSpaceHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{
public:
	struct FComponentSpacePoseLink               Source;                                            // 0xA8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct PoseSearch.MotionMatchingState
struct FMotionMatchingState
{
public:
	uint8                                        Pad_5225[0x18];                                    // Fixing Size After Last Property 
	float                                        ElapsedPoseSearchTime;                             // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WantedPlayRate;                                    // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJumpedToPose;                                     // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5226[0x67];                                    // Fixing Size Of Struct
};

}


