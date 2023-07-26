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

enum class EPoseSearchMode : uint8
{
	BruteForce                     = 0,
	PCAKDTree                      = 1,
	PCAKDTree_Validate             = 2,
	PCAKDTree_Compare              = 3,
	Num                            = 4,
	Invalid                        = 4,
	EPoseSearchMode_MAX            = 5,
};

enum class EPoseSearchMirrorOption : uint8
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

enum class EPoseSearchBooleanRequest : uint8
{
	FalseValue                     = 0,
	TrueValue                      = 1,
	Indifferent                    = 2,
	Num                            = 3,
	Invalid                        = 3,
	EPoseSearchBooleanRequest_MAX  = 4,
};

enum class EPoseSearchDataPreprocessor : uint8
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
	uint8                                        Pad_3E49[0x8];                                     // Fixing Size Of Struct..
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PoseSearch.PoseSearchDatabaseSequence
struct FPoseSearchDatabaseSequence : public FPoseSearchDatabaseAnimationAssetBase
{
public:
	class UAnimSequence*                         Sequence;                                          // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4A[0x3];                                     // Fixing Size After Last Property..
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
	uint8                                        Pad_3E4B[0x2];                                     // Fixing Size After Last Property..
	int32                                        NumberOfHorizontalSamples;                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfVerticalSamples;                           // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendParamX;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendParamY;                                       // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4C[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PoseSearch.PoseSearchDatabaseAnimComposite
struct FPoseSearchDatabaseAnimComposite : public FPoseSearchDatabaseAnimationAssetBase
{
public:
	class UAnimComposite*                        AnimComposite;                                     // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4D[0x3];                                     // Fixing Size After Last Property..
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
	uint8                                        Pad_3E4E[0x3];                                     // Fixing Size After Last Property..
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

// 0x8 (0x8 - 0x0)
// ScriptStruct PoseSearch.PoseSearchPoseMetadata
struct FPoseSearchPoseMetadata
{
public:
	uint32                                       Data;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CostAddend;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct PoseSearch.PoseSearchIndexAsset
struct FPoseSearchIndexAsset
{
public:
	int32                                        SourceAssetIdx;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrored;                                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4F[0x3];                                     // Fixing Size After Last Property..
	struct FFloatInterval                        SamplingInterval;                                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PermutationIdx;                                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E50[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               BlendParameters;                                   // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FirstPoseIdx;                                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPoses;                                          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PoseSearch.PoseSearchStats
struct FPoseSearchStats
{
public:
	float                                        AverageSpeed;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AverageAcceleration;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAcceleration;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct PoseSearch.PoseSearchIndexBase
struct FPoseSearchIndexBase
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseSearchPoseMetadata>       PoseMetadata;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAnyBlockTransition;                               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E51[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FPoseSearchIndexAsset>         Assets;                                            // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MinCostAddend;                                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSearchStats                      Stats;                                             // 0x3C(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E52[0x4];                                     // Fixing Size Of Struct..
};

// 0x60 (0xB0 - 0x50)
// ScriptStruct PoseSearch.PoseSearchIndex
struct FPoseSearchIndex : public FPoseSearchIndexBase
{
public:
	TArray<float>                                WeightsSqrt;                                       // 0x50(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<float>                                PCAValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                PCAProjectionMatrix;                               // 0x70(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<float>                                Mean;                                              // 0x80(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E53[0x18];                                    // Fixing Size After Last Property..
	float                                        PCAExplainedVariance;                              // 0xA8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E54[0x4];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct PoseSearch.PoseSearchQueryTrajectorySample
struct FPoseSearchQueryTrajectorySample
{
public:
	struct FQuat                                 Facing;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedSeconds;                                // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E55[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PoseSearch.PoseSearchQueryTrajectory
struct FPoseSearchQueryTrajectory
{
public:
	TArray<struct FPoseSearchQueryTrajectorySample> Samples;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x228 (0x228 - 0x0)
// ScriptStruct PoseSearch.PoseSearchAnimPlayer
struct FPoseSearchAnimPlayer
{
public:
	uint8                                        Pad_3E56[0x228];                                   // Fixing Size Of Struct..
};

// 0x20 (0x58 - 0x38)
// ScriptStruct PoseSearch.AnimNode_BlendStack_Standalone
struct FAnimNode_BlendStack_Standalone : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_3E57[0x20];                                    // Fixing Size Of Struct..
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
	uint8                                        Pad_3E58[0x2];                                     // Fixing Size After Last Property..
	float                                        WantedPlayRate;                                    // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootBoneBlendTime;                                 // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAnimationDeltaTime;                             // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxActiveBlends;                                   // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E59[0x4];                                     // Fixing Size After Last Property..
	class UBlendProfile*                         BlendProfile;                                      // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5A[0x7];                                     // Fixing Size After Last Property..
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
	uint8                                        Pad_3E5B[0x4];                                     // Fixing Size After Last Property..
	class UBlendProfile*                         BlendProfile;                                      // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E5C[0x3];                                     // Fixing Size After Last Property..
	float                                        PoseJumpThresholdTime;                             // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PoseReselectHistory;                               // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SearchThrottleTime;                                // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatInterval                        PlayRate;                                          // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bResetOnBecomingRelevant;                          // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldSearch;                                     // 0x91(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E5D[0x2];                                     // Fixing Size After Last Property..
	float                                        YawFromAnimationTrajectoryBlendTime;               // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        YawFromAnimation;                                  // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E5E[0xF4];                                    // Fixing Size After Last Property..
	TArray<class UPoseSearchDatabase*>           DatabasesToSearch;                                 // 0x190(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E5F[0x8];                                     // Fixing Size Of Struct..
};

// 0x90 (0xA0 - 0x10)
// ScriptStruct PoseSearch.AnimNode_PoseSearchHistoryCollector_Base
struct FAnimNode_PoseSearchHistoryCollector_Base : public FAnimNode_Base
{
public:
	int32                                        PoseCount;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoseDuration;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                CollectedBones;                                    // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E60[0x78];                                    // Fixing Size Of Struct..
};

// 0x10 (0xB0 - 0xA0)
// ScriptStruct PoseSearch.AnimNode_PoseSearchHistoryCollector
struct FAnimNode_PoseSearchHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{
public:
	struct FPoseLink                             Source;                                            // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0xB0 - 0xA0)
// ScriptStruct PoseSearch.AnimNode_PoseSearchComponentSpaceHistoryCollector
struct FAnimNode_PoseSearchComponentSpaceHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{
public:
	struct FComponentSpacePoseLink               Source;                                            // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct PoseSearch.MotionMatchingState
struct FMotionMatchingState
{
public:
	uint8                                        Pad_3E61[0x20];                                    // Fixing Size After Last Property..
	float                                        ElapsedPoseSearchTime;                             // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WantedPlayRate;                                    // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJumpedToPose;                                     // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E62[0x5F];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
