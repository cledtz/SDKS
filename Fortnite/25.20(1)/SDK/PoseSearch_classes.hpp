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

// 0x0 (0x28 - 0x28)
// Class PoseSearch.MotionMatchingAnimNodeLibrary
class UMotionMatchingAnimNodeLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MotionMatchingAnimNodeLibrary");
		return Clss;
	}

	void SetDatabaseToSearch(struct FMotionMatchingAnimNodeReference& MotionMatchingNode, class UPoseSearchDatabase* Database, bool bForceInterruptIfNew);
	void SetDatabasesToSearch(struct FMotionMatchingAnimNodeReference& MotionMatchingNode, TArray<class UPoseSearchDatabase*>& Databases, bool bForceInterruptIfNew);
	void ResetDatabasesToSearch(struct FMotionMatchingAnimNodeReference& MotionMatchingNode, bool bForceInterrupt);
	void ForceInterruptNextUpdate(struct FMotionMatchingAnimNodeReference& MotionMatchingNode);
	void ConvertToMotionMatchingNodePure(struct FAnimNodeReference& Node, struct FMotionMatchingAnimNodeReference* MotionMatchingNode, bool* Result);
	struct FMotionMatchingAnimNodeReference ConvertToMotionMatchingNode(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
};

// 0xF0 (0x120 - 0x30)
// Class PoseSearch.PoseSearchDatabase
class UPoseSearchDatabase : public UDataAsset
{
public:
	class UPoseSearchSchema*                     Schema;                                            // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSearchExcludeFromDatabaseParameters ExcludeFromDatabaseParameters;                     // 0x38(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FInstancedStruct>              AnimationAssets;                                   // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EPoseSearchMode                   PoseSearchMode;                                    // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfPrincipalComponents;                       // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KDTreeMaxLeafSize;                                 // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KDTreeQueryNumNeighbors;                           // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipSearchIfPossible;                             // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E10[0x7];                                     // Fixing Size After Last Property..
	class UPoseSearchNormalizationSet*           NormalizationSet;                                  // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSearchIndex                      SearchIndexPrivate;                                // 0x70(0xB0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchDatabase");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class PoseSearch.PoseSearchFeatureChannel
class UPoseSearchFeatureChannel : public UObject
{
public:
	uint8                                        Pad_3E11[0x10];                                    // Fixing Size After Last Property..
	int32                                        ChannelDataOffset;                                 // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ChannelCardinality;                                // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel");
		return Clss;
	}

};

// 0x40 (0x80 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs
class UPoseSearchFeatureChannel_FilterCrashingLegs : public UPoseSearchFeatureChannel
{
public:
	struct FBoneReference                        LeftThigh;                                         // 0x40(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RightThigh;                                        // 0x4C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LeftFoot;                                          // 0x58(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RightFoot;                                         // 0x64(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         LeftThighIdx;                                      // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         RightThighIdx;                                     // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         LeftFootIdx;                                       // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         RightFootIdx;                                      // 0x77(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputQueryPose                   InputQueryPose;                                    // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E12[0x3];                                     // Fixing Size After Last Property..
	float                                        AllowedTolerance;                                  // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_FilterCrashingLegs");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_GroupBase
class UPoseSearchFeatureChannel_GroupBase : public UPoseSearchFeatureChannel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_GroupBase");
		return Clss;
	}

};

// 0x10 (0x50 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_Group
class UPoseSearchFeatureChannel_Group : public UPoseSearchFeatureChannel_GroupBase
{
public:
	TArray<class UPoseSearchFeatureChannel*>     SubChannels;                                       // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Group");
		return Clss;
	}

};

// 0x30 (0x70 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_Heading
class UPoseSearchFeatureChannel_Heading : public UPoseSearchFeatureChannel
{
public:
	struct FBoneReference                        bone;                                              // 0x40(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SampleTimeOffset;                                  // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeadingAxis                      HeadingAxis;                                       // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         SchemaBoneIdx;                                     // 0x55(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E13[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          DebugColor;                                        // 0x58(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputQueryPose                   InputQueryPose;                                    // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentStrippingVector         ComponentStripping;                                // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E14[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Heading");
		return Clss;
	}

};

// 0x8 (0x48 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_PermutationTime
class UPoseSearchFeatureChannel_PermutationTime : public UPoseSearchFeatureChannel
{
public:
	float                                        Weight;                                            // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E15[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_PermutationTime");
		return Clss;
	}

};

// 0x28 (0x68 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_Phase
class UPoseSearchFeatureChannel_Phase : public UPoseSearchFeatureChannel
{
public:
	struct FBoneReference                        bone;                                              // 0x40(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         SchemaBoneIdx;                                     // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E16[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          DebugColor;                                        // 0x54(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputQueryPose                   InputQueryPose;                                    // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E17[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Phase");
		return Clss;
	}

};

// 0x40 (0x80 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_Pose
class UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel_GroupBase
{
public:
	float                                        Weight;                                            // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E18[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FPoseSearchBone>               SampledBones;                                      // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int8>                                 SchemaBoneIdx;                                     // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EInputQueryPose                   InputQueryPose;                                    // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCharacterSpaceVelocities;                      // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E19[0x6];                                     // Fixing Size After Last Property..
	TArray<class UPoseSearchFeatureChannel*>     SubChannels;                                       // 0x70(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Pose");
		return Clss;
	}

};

// 0x38 (0x78 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_Position
class UPoseSearchFeatureChannel_Position : public UPoseSearchFeatureChannel
{
public:
	struct FBoneReference                        bone;                                              // 0x40(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        OriginBone;                                        // 0x4C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SampleTimeOffset;                                  // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         SchemaBoneIdx;                                     // 0x60(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         SchemaOriginBoneIdx;                               // 0x61(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1A[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          DebugColor;                                        // 0x64(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputQueryPose                   InputQueryPose;                                    // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentStrippingVector         ComponentStripping;                                // 0x75(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPermutationTimeType              PermutationTimeType;                               // 0x76(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1B[0x1];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Position");
		return Clss;
	}

};

// 0x8 (0x48 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_SamplingTime
class UPoseSearchFeatureChannel_SamplingTime : public UPoseSearchFeatureChannel
{
public:
	float                                        Weight;                                            // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToMatch;                                       // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_SamplingTime");
		return Clss;
	}

};

// 0x28 (0x68 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_Trajectory
class UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel_GroupBase
{
public:
	float                                        Weight;                                            // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1C[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FPoseSearchTrajectorySample>   Samples;                                           // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPoseSearchFeatureChannel*>     SubChannels;                                       // 0x58(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Trajectory");
		return Clss;
	}

};

// 0x30 (0x70 - 0x40)
// Class PoseSearch.PoseSearchFeatureChannel_Velocity
class UPoseSearchFeatureChannel_Velocity : public UPoseSearchFeatureChannel
{
public:
	struct FBoneReference                        bone;                                              // 0x40(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SampleTimeOffset;                                  // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         SchemaBoneIdx;                                     // 0x54(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1D[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          DebugColor;                                        // 0x58(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputQueryPose                   InputQueryPose;                                    // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCharacterSpaceVelocities;                      // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalize;                                        // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentStrippingVector         ComponentStripping;                                // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1E[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchFeatureChannel_Velocity");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class PoseSearch.PoseSearchNormalizationSet
class UPoseSearchNormalizationSet : public UDataAsset
{
public:
	TArray<class UPoseSearchDatabase*>           Databases;                                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchNormalizationSet");
		return Clss;
	}

};

// 0x88 (0xB8 - 0x30)
// Class PoseSearch.PoseSearchSchema
class UPoseSearchSchema : public UDataAsset
{
public:
	uint8                                        Pad_3E1F[0x8];                                     // Fixing Size After Last Property..
	class USkeleton*                             Skeleton;                                          // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SampleRate;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E20[0x4];                                     // Fixing Size After Last Property..
	TArray<class UPoseSearchFeatureChannel*>     Channels;                                          // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UPoseSearchFeatureChannel*>     FinalizedChannels;                                 // 0x58(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseSearchDataPreprocessor       DataPreprocessor;                                  // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SchemaCardinality;                                 // 0x74(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                BoneReferences;                                    // 0x78(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<uint16>                               BoneIndicesWithParents;                            // 0x88(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	float                                        ContinuingPoseCostBias;                            // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseCostBias;                                      // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MirrorMismatchCostBias;                            // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoopingCostBias;                                   // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfPermutations;                              // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PermutationsSampleRate;                            // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PermutationsTimeOffset;                            // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInjectAdditionalDebugChannels;                    // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E21[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchSchema");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class PoseSearch.AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchBase : public UAnimNotifyState
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchBase");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase
class UAnimNotifyState_PoseSearchExcludeFromDatabase : public UAnimNotifyState_PoseSearchBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchExcludeFromDatabase");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class PoseSearch.AnimNotifyState_PoseSearchBlockTransition
class UAnimNotifyState_PoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchBlockTransition");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class PoseSearch.AnimNotifyState_PoseSearchModifyCost
class UAnimNotifyState_PoseSearchModifyCost : public UAnimNotifyState_PoseSearchBase
{
public:
	float                                        CostAddend;                                        // 0x30(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E22[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchModifyCost");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : public UAnimNotifyState_PoseSearchBase
{
public:
	float                                        CostAddend;                                        // 0x30(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E23[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class PoseSearch.PoseSearchLibrary
class UPoseSearchLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PoseSearchLibrary");
		return Clss;
	}

	void MotionMatch(class UAnimInstance* AnimInstance, class UPoseSearchDatabase* Database, const struct FPoseSearchQueryTrajectory& Trajectory, float TrajectorySpeedMultiplier, class FName PoseHistoryName, class UAnimationAsset** SelectedAnimation, float* SelectedTime, bool* bLoop, bool* bIsMirrored, struct FVector* BlendParameters, float* SearchCost, class UAnimationAsset* FutureAnimation, float FutureAnimationStartTime, float TimeToFutureAnimationStart, int32 DebugSessionUniqueIdentifier);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
