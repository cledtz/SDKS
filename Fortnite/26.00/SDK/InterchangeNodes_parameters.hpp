#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetNode.SetCustomFrameRate
struct UInterchangeAnimationTrackSetNode_SetCustomFrameRate_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51C3[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetNode.RemoveCustomAnimationTrackUid
struct UInterchangeAnimationTrackSetNode_RemoveCustomAnimationTrackUid_Params
{
public:
	class FString                                AnimationTrackUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51C6[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomFrameRate
struct UInterchangeAnimationTrackSetNode_GetCustomFrameRate_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51CA[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUids
struct UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUids_Params
{
public:
	TArray<class FString>                        OutAnimationTrackUids;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUidCount
struct UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUidCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUid
struct UInterchangeAnimationTrackSetNode_GetCustomAnimationTrackUid_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51D5[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutAnimationTrackUid;                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetNode.AddCustomAnimationTrackUid
struct UInterchangeAnimationTrackSetNode_AddCustomAnimationTrackUid_Params
{
public:
	class FString                                AnimationTrackUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51DB[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackBaseNode.SetCustomCompletionMode
struct UInterchangeAnimationTrackBaseNode_SetCustomCompletionMode_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51E1[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackBaseNode.GetCustomCompletionMode
struct UInterchangeAnimationTrackBaseNode_GetCustomCompletionMode_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51FA[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTrackSetDependencyUid
struct UInterchangeAnimationTrackSetInstanceNode_SetCustomTrackSetDependencyUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5212[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTimeScale
struct UInterchangeAnimationTrackSetInstanceNode_SetCustomTimeScale_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_521A[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomStartFrame
struct UInterchangeAnimationTrackSetInstanceNode_SetCustomStartFrame_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5222[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomDuration
struct UInterchangeAnimationTrackSetInstanceNode_SetCustomDuration_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5228[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTrackSetDependencyUid
struct UInterchangeAnimationTrackSetInstanceNode_GetCustomTrackSetDependencyUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_522E[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTimeScale
struct UInterchangeAnimationTrackSetInstanceNode_GetCustomTimeScale_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5235[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomStartFrame
struct UInterchangeAnimationTrackSetInstanceNode_GetCustomStartFrame_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5238[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomDuration
struct UInterchangeAnimationTrackSetInstanceNode_GetCustomDuration_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_523E[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomTargetedProperty
struct UInterchangeAnimationTrackNode_SetCustomTargetedProperty_Params
{
public:
	int32                                        TargetedProperty;                                  // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5246[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomFrameCount
struct UInterchangeAnimationTrackNode_SetCustomFrameCount_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_524D[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomAnimationPayloadKey
struct UInterchangeAnimationTrackNode_SetCustomAnimationPayloadKey_Params
{
public:
	class FString                                InUniqueId;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeAnimationPayLoadType  InType;                                            // 0x10(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5253[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomActorDependencyUid
struct UInterchangeAnimationTrackNode_SetCustomActorDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5257[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomTargetedProperty
struct UInterchangeAnimationTrackNode_GetCustomTargetedProperty_Params
{
public:
	int32                                        TargetedProperty;                                  // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5259[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomFrameCount
struct UInterchangeAnimationTrackNode_GetCustomFrameCount_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_525E[0x3];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomAnimationPayloadKey
struct UInterchangeAnimationTrackNode_GetCustomAnimationPayloadKey_Params
{
public:
	struct FInterchangeAnimationPayLoadKey       AnimationPayLoadKey;                               // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5263[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomActorDependencyUid
struct UInterchangeAnimationTrackNode_GetCustomActorDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5265[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeTransformAnimationTrackNode.SetCustomUsedChannels
struct UInterchangeTransformAnimationTrackNode_SetCustomUsedChannels_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_526E[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeTransformAnimationTrackNode.GetCustomUsedChannels
struct UInterchangeTransformAnimationTrackNode_GetCustomUsedChannels_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5277[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomSkeletonNodeUid
struct UInterchangeSkeletalAnimationTrackNode_SetCustomSkeletonNodeUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5281[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStopTime
struct UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStopTime_Params
{
public:
	double                                       StopTime;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5285[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStartTime
struct UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationStartTime_Params
{
public:
	double                                       StartTime;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_528B[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationSampleRate
struct UInterchangeSkeletalAnimationTrackNode_SetCustomAnimationSampleRate_Params
{
public:
	double                                       SampleRate;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_528E[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForSceneNodeUid
struct UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForSceneNodeUid_Params
{
public:
	class FString                                SceneNodeUid;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InUniqueId;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeAnimationPayLoadType  InType;                                            // 0x20(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_529B[0x6];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForMorphTargetNodeUid
struct UInterchangeSkeletalAnimationTrackNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Params
{
public:
	class FString                                MorphTargetNodeUid;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InUniqueId;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeAnimationPayLoadType  InType;                                            // 0x20(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A9[0x6];                                     // Fixing Size Of Struct
};

// 0xA0 (0xA0 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetSceneNodeAnimationPayloadKeys
struct UInterchangeSkeletalAnimationTrackNode_GetSceneNodeAnimationPayloadKeys_Params
{
public:
	TMap<class FString, class FString>           OutSceneNodeAnimationPayloadKeyUids;               // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	TMap<class FString, uint8>                   OutSceneNodeAnimationPayloadKeyTypes;              // 0x50(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetMorphTargetNodeAnimationPayloadKeys
struct UInterchangeSkeletalAnimationTrackNode_GetMorphTargetNodeAnimationPayloadKeys_Params
{
public:
	TMap<class FString, class FString>           OutMorphTargetNodeAnimationPayloadKeyUids;         // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	TMap<class FString, uint8>                   OutMorphTargetNodeAnimationPayloadKeyTypes;        // 0x50(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomSkeletonNodeUid
struct UInterchangeSkeletalAnimationTrackNode_GetCustomSkeletonNodeUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C9[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStopTime
struct UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStopTime_Params
{
public:
	double                                       StopTime;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52D2[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStartTime
struct UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationStartTime_Params
{
public:
	double                                       StartTime;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52DA[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationSampleRate
struct UInterchangeSkeletalAnimationTrackNode_GetCustomAnimationSampleRate_Params
{
public:
	double                                       SampleRate;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52E3[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorWidth
struct UInterchangePhysicalCameraNode_SetCustomSensorWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52EE[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorHeight
struct UInterchangePhysicalCameraNode_SetCustomSensorHeight_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52F7[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomFocalLength
struct UInterchangePhysicalCameraNode_SetCustomFocalLength_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52FA[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomEnableDepthOfField
struct UInterchangePhysicalCameraNode_SetCustomEnableDepthOfField_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorWidth
struct UInterchangePhysicalCameraNode_GetCustomSensorWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5303[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorHeight
struct UInterchangePhysicalCameraNode_GetCustomSensorHeight_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5308[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomFocalLength
struct UInterchangePhysicalCameraNode_GetCustomFocalLength_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_530C[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomEnableDepthOfField
struct UInterchangePhysicalCameraNode_GetCustomEnableDepthOfField_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomWidth
struct UInterchangeStandardCameraNode_SetCustomWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5324[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomProjectionMode
struct UInterchangeStandardCameraNode_SetCustomProjectionMode_Params
{
public:
	enum class EInterchangeCameraProjectionType  AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomNearClipPlane
struct UInterchangeStandardCameraNode_SetCustomNearClipPlane_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5333[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomFieldOfView
struct UInterchangeStandardCameraNode_SetCustomFieldOfView_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5339[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomFarClipPlane
struct UInterchangeStandardCameraNode_SetCustomFarClipPlane_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_533E[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomAspectRatio
struct UInterchangeStandardCameraNode_SetCustomAspectRatio_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5345[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomWidth
struct UInterchangeStandardCameraNode_GetCustomWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_534A[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomProjectionMode
struct UInterchangeStandardCameraNode_GetCustomProjectionMode_Params
{
public:
	enum class EInterchangeCameraProjectionType  AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomNearClipPlane
struct UInterchangeStandardCameraNode_GetCustomNearClipPlane_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5357[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomFieldOfView
struct UInterchangeStandardCameraNode_GetCustomFieldOfView_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5360[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomFarClipPlane
struct UInterchangeStandardCameraNode_GetCustomFarClipPlane_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5363[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomAspectRatio
struct UInterchangeStandardCameraNode_GetCustomAspectRatio_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5369[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeBaseLightNode.SetCustomUseTemperature
struct UInterchangeBaseLightNode_SetCustomUseTemperature_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeBaseLightNode.SetCustomTemperature
struct UInterchangeBaseLightNode_SetCustomTemperature_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5373[0x3];                                     // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// Function InterchangeNodes.InterchangeBaseLightNode.SetCustomLightColor
struct UInterchangeBaseLightNode_SetCustomLightColor_Params
{
public:
	struct FLinearColor                          AttributeValue;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5376[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeBaseLightNode.SetCustomIntensity
struct UInterchangeBaseLightNode_SetCustomIntensity_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_537D[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeBaseLightNode.GetCustomUseTemperature
struct UInterchangeBaseLightNode_GetCustomUseTemperature_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeBaseLightNode.GetCustomTemperature
struct UInterchangeBaseLightNode_GetCustomTemperature_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_538B[0x3];                                     // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// Function InterchangeNodes.InterchangeBaseLightNode.GetCustomLightColor
struct UInterchangeBaseLightNode_GetCustomLightColor_Params
{
public:
	struct FLinearColor                          AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5392[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeBaseLightNode.GetCustomIntensity
struct UInterchangeBaseLightNode_GetCustomIntensity_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_539A[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeLightNode.SetCustomIntensityUnits
struct UInterchangeLightNode_SetCustomIntensityUnits_Params
{
public:
	enum class EInterchangeLightUnits            AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeLightNode.SetCustomIESTexture
struct UInterchangeLightNode_SetCustomIESTexture_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53AC[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeLightNode.SetCustomAttenuationRadius
struct UInterchangeLightNode_SetCustomAttenuationRadius_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53B3[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeLightNode.GetCustomIntensityUnits
struct UInterchangeLightNode_GetCustomIntensityUnits_Params
{
public:
	enum class EInterchangeLightUnits            AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeLightNode.GetCustomIESTexture
struct UInterchangeLightNode_GetCustomIESTexture_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53C1[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeLightNode.GetCustomAttenuationRadius
struct UInterchangeLightNode_GetCustomAttenuationRadius_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53CC[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangePointLightNode.SetCustomUseInverseSquaredFalloff
struct UInterchangePointLightNode_SetCustomUseInverseSquaredFalloff_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangePointLightNode.SetCustomLightFalloffExponent
struct UInterchangePointLightNode_SetCustomLightFalloffExponent_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53E0[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangePointLightNode.GetCustomUseInverseSquaredFalloff
struct UInterchangePointLightNode_GetCustomUseInverseSquaredFalloff_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangePointLightNode.GetCustomLightFalloffExponent
struct UInterchangePointLightNode_GetCustomLightFalloffExponent_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53E5[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeSpotLightNode.SetCustomOuterConeAngle
struct UInterchangeSpotLightNode_SetCustomOuterConeAngle_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53E9[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeSpotLightNode.SetCustomInnerConeAngle
struct UInterchangeSpotLightNode_SetCustomInnerConeAngle_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53ED[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeSpotLightNode.GetCustomOuterConeAngle
struct UInterchangeSpotLightNode_GetCustomOuterConeAngle_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53F4[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeSpotLightNode.GetCustomInnerConeAngle
struct UInterchangeSpotLightNode_GetCustomInnerConeAngle_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53F7[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeRectLightNode.SetCustomSourceWidth
struct UInterchangeRectLightNode_SetCustomSourceWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53F9[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeRectLightNode.SetCustomSourceHeight
struct UInterchangeRectLightNode_SetCustomSourceHeight_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53FB[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeRectLightNode.GetCustomSourceWidth
struct UInterchangeRectLightNode_GetCustomSourceWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53FE[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeRectLightNode.GetCustomSourceHeight
struct UInterchangeRectLightNode_GetCustomSourceHeight_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5406[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeTextureNode.SetPayLoadKey
struct UInterchangeTextureNode_SetPayLoadKey_Params
{
public:
	class FString                                PayloadKey;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTextureNode.SetCustomSRGB
struct UInterchangeTextureNode_SetCustomSRGB_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTextureNode.SetCustomFilter
struct UInterchangeTextureNode_SetCustomFilter_Params
{
public:
	enum class EInterchangeTextureFilterMode     AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTextureNode.SetCustombFlipGreenChannel
struct UInterchangeTextureNode_SetCustombFlipGreenChannel_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTextureNode.GetCustomSRGB
struct UInterchangeTextureNode_GetCustomSRGB_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTextureNode.GetCustomFilter
struct UInterchangeTextureNode_GetCustomFilter_Params
{
public:
	enum class EInterchangeTextureFilterMode     AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTextureNode.GetCustombFlipGreenChannel
struct UInterchangeTextureNode_GetCustombFlipGreenChannel_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeVariantSetNode.SetCustomVariantsPayloadKey
struct UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Params
{
public:
	class FString                                PayloadKey;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_544A[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeVariantSetNode.SetCustomDisplayText
struct UInterchangeVariantSetNode_SetCustomDisplayText_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_544F[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeVariantSetNode.RemoveCustomDependencyUid
struct UInterchangeVariantSetNode_RemoveCustomDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5453[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomVariantsPayloadKey
struct UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Params
{
public:
	class FString                                PayloadKey;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5459[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDisplayText
struct UInterchangeVariantSetNode_GetCustomDisplayText_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5460[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUids
struct UInterchangeVariantSetNode_GetCustomDependencyUids_Params
{
public:
	TArray<class FString>                        OutDependencyUids;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUidCount
struct UInterchangeVariantSetNode_GetCustomDependencyUidCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUid
struct UInterchangeVariantSetNode_GetCustomDependencyUid_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5465[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutDependencyUid;                                  // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeVariantSetNode.AddCustomDependencyUid
struct UInterchangeVariantSetNode_AddCustomDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_546A[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneVariantSetsNode.RemoveCustomVariantSetUid
struct UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Params
{
public:
	class FString                                VariantUid;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_546E[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUids
struct UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Params
{
public:
	TArray<class FString>                        OutVariantUids;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUidCount
struct UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUid
struct UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5476[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutVariantUid;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneVariantSetsNode.AddCustomVariantSetUid
struct UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Params
{
public:
	class FString                                VariantUid;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_547A[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.SetCustomParent
struct UInterchangeMaterialInstanceNode_SetCustomParent_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_547E[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetVectorParameterValue
struct UInterchangeMaterialInstanceNode_GetVectorParameterValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AttributeValue;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5485[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetTextureParameterValue
struct UInterchangeMaterialInstanceNode_GetTextureParameterValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttributeValue;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_548D[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetStaticSwitchParameterValue
struct UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttributeValue;                                    // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5490[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetScalarParameterValue
struct UInterchangeMaterialInstanceNode_GetScalarParameterValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttributeValue;                                    // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_549B[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.GetCustomParent
struct UInterchangeMaterialInstanceNode_GetCustomParent_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_549F[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.AddVectorParameterValue
struct UInterchangeMaterialInstanceNode_AddVectorParameterValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AttributeValue;                                    // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54A7[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.AddTextureParameterValue
struct UInterchangeMaterialInstanceNode_AddTextureParameterValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttributeValue;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54AD[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.AddStaticSwitchParameterValue
struct UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttributeValue;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54B5[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMaterialInstanceNode.AddScalarParameterValue
struct UInterchangeMaterialInstanceNode_AddScalarParameterValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttributeValue;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54B9[0x3];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetSlotMaterialDependencyUid
struct UInterchangeMeshNode_SetSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MaterialDependencyUid;                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54C3[0x7];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetSkinnedMesh
struct UInterchangeMeshNode_SetSkinnedMesh_Params
{
public:
	bool                                         bIsSkinnedMesh;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetSkeletonDependencyUid
struct UInterchangeMeshNode_SetSkeletonDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54CA[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetSceneInstanceUid
struct UInterchangeMeshNode_SetSceneInstanceUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54CB[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetPayLoadKey
struct UInterchangeMeshNode_SetPayLoadKey_Params
{
public:
	class FString                                PayloadKey;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeMeshPayLoadType       PayloadType;                                       // 0x10(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54D1[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetMorphTargetName
struct UInterchangeMeshNode_SetMorphTargetName_Params
{
public:
	class FString                                MorphTargetName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54D5[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetMorphTargetDependencyUid
struct UInterchangeMeshNode_SetMorphTargetDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54D7[0x7];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetMorphTarget
struct UInterchangeMeshNode_SetMorphTarget_Params
{
public:
	bool                                         bIsMorphTarget;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetCustomVertexCount
struct UInterchangeMeshNode_SetCustomVertexCount_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54DC[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetCustomUVCount
struct UInterchangeMeshNode_SetCustomUVCount_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54E1[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetCustomPolygonCount
struct UInterchangeMeshNode_SetCustomPolygonCount_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54E2[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexTangent
struct UInterchangeMeshNode_SetCustomHasVertexTangent_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexNormal
struct UInterchangeMeshNode_SetCustomHasVertexNormal_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexColor
struct UInterchangeMeshNode_SetCustomHasVertexColor_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexBinormal
struct UInterchangeMeshNode_SetCustomHasVertexBinormal_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetCustomHasSmoothGroup
struct UInterchangeMeshNode_SetCustomHasSmoothGroup_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.SetCustomBoundingBox
struct UInterchangeMeshNode_SetCustomBoundingBox_Params
{
public:
	struct FBox                                  AttributeValue;                                    // 0x0(0x38)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54EB[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.RemoveSlotMaterialDependencyUid
struct UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54F0[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.RemoveSkeletonDependencyUid
struct UInterchangeMeshNode_RemoveSkeletonDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54F3[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.RemoveSceneInstanceUid
struct UInterchangeMeshNode_RemoveSceneInstanceUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54F6[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.RemoveMorphTargetDependencyUid
struct UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54F9[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.IsSkinnedMesh
struct UInterchangeMeshNode_IsSkinnedMesh_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.IsMorphTarget
struct UInterchangeMeshNode_IsMorphTarget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencyUid
struct UInterchangeMeshNode_GetSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutMaterialDependency;                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5500[0x7];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencies
struct UInterchangeMeshNode_GetSlotMaterialDependencies_Params
{
public:
	TMap<class FString, class FString>           OutMaterialDependencies;                           // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependency
struct UInterchangeMeshNode_GetSkeletonDependency_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5505[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutDependency;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependencies
struct UInterchangeMeshNode_GetSkeletonDependencies_Params
{
public:
	TArray<class FString>                        OutDependencies;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependeciesCount
struct UInterchangeMeshNode_GetSkeletonDependeciesCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUidsCount
struct UInterchangeMeshNode_GetSceneInstanceUidsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUids
struct UInterchangeMeshNode_GetSceneInstanceUids_Params
{
public:
	TArray<class FString>                        OutDependencies;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUid
struct UInterchangeMeshNode_GetSceneInstanceUid_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5510[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutDependency;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetName
struct UInterchangeMeshNode_GetMorphTargetName_Params
{
public:
	class FString                                OutMorphTargetName;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5514[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependency
struct UInterchangeMeshNode_GetMorphTargetDependency_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5518[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutDependency;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependencies
struct UInterchangeMeshNode_GetMorphTargetDependencies_Params
{
public:
	TArray<class FString>                        OutDependencies;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependeciesCount
struct UInterchangeMeshNode_GetMorphTargetDependeciesCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetCustomVertexCount
struct UInterchangeMeshNode_GetCustomVertexCount_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_551A[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetCustomUVCount
struct UInterchangeMeshNode_GetCustomUVCount_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_551C[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetCustomPolygonCount
struct UInterchangeMeshNode_GetCustomPolygonCount_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_551D[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexTangent
struct UInterchangeMeshNode_GetCustomHasVertexTangent_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexNormal
struct UInterchangeMeshNode_GetCustomHasVertexNormal_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexColor
struct UInterchangeMeshNode_GetCustomHasVertexColor_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexBinormal
struct UInterchangeMeshNode_GetCustomHasVertexBinormal_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetCustomHasSmoothGroup
struct UInterchangeMeshNode_GetCustomHasSmoothGroup_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function InterchangeNodes.InterchangeMeshNode.GetCustomBoundingBox
struct UInterchangeMeshNode_GetCustomBoundingBox_Params
{
public:
	struct FBox                                  AttributeValue;                                    // 0x0(0x38)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_552D[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.SetSlotMaterialDependencyUid
struct UInterchangeSceneNode_SetSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MaterialDependencyUid;                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5533[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.SetMorphTargetCurveWeight
struct UInterchangeSceneNode_SetMorphTargetCurveWeight_Params
{
public:
	class FString                                MorphTargetName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5536[0x3];                                     // Fixing Size Of Struct
};

// 0x80 (0x80 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.SetCustomTimeZeroLocalTransform
struct UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_553E[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            AttributeValue;                                    // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetCache;                                       // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x71(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_553F[0xE];                                     // Fixing Size Of Struct
};

// 0x80 (0x80 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.SetCustomLocalTransform
struct UInterchangeSceneNode_SetCustomLocalTransform_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5542[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            AttributeValue;                                    // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetCache;                                       // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x71(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5544[0xE];                                     // Fixing Size Of Struct
};

// 0x70 (0x70 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.SetCustomGeometricTransform
struct UInterchangeSceneNode_SetCustomGeometricTransform_Params
{
public:
	struct FTransform                            AttributeValue;                                    // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5548[0xF];                                     // Fixing Size Of Struct
};

// 0x80 (0x80 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.SetCustomBindPoseLocalTransform
struct UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_554C[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            AttributeValue;                                    // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetCache;                                       // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x71(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_554F[0xE];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.SetCustomAssetInstanceUid
struct UInterchangeSceneNode_SetCustomAssetInstanceUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5552[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.SetCustomAnimationAssetUidToPlay
struct UInterchangeSceneNode_SetCustomAnimationAssetUidToPlay_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5559[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.RemoveSpecializedType
struct UInterchangeSceneNode_RemoveSpecializedType_Params
{
public:
	class FString                                SpecializedType;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_555F[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.RemoveSlotMaterialDependencyUid
struct UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5565[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.IsSpecializedTypeContains
struct UInterchangeSceneNode_IsSpecializedTypeContains_Params
{
public:
	class FString                                SpecializedType;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5568[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetSpecializedTypes
struct UInterchangeSceneNode_GetSpecializedTypes_Params
{
public:
	TArray<class FString>                        OutSpecializedTypes;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetSpecializedTypeCount
struct UInterchangeSceneNode_GetSpecializedTypeCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetSpecializedType
struct UInterchangeSceneNode_GetSpecializedType_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5570[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutSpecializedType;                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencyUid
struct UInterchangeSceneNode_GetSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutMaterialDependency;                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5575[0x7];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencies
struct UInterchangeSceneNode_GetSlotMaterialDependencies_Params
{
public:
	TMap<class FString, class FString>           OutMaterialDependencies;                           // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetMorphTargetCurveWeights
struct UInterchangeSceneNode_GetMorphTargetCurveWeights_Params
{
public:
	TMap<class FString, float>                   OutMorphTargetCurveWeights;                        // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroLocalTransform
struct UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Params
{
public:
	struct FTransform                            AttributeValue;                                    // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_557F[0xF];                                     // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroGlobalTransform
struct UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5582[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            GlobalOffsetTransform;                             // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            AttributeValue;                                    // 0x70(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRecache;                                     // 0xD0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5583[0xE];                                     // Fixing Size Of Struct
};

// 0x70 (0x70 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetCustomLocalTransform
struct UInterchangeSceneNode_GetCustomLocalTransform_Params
{
public:
	struct FTransform                            AttributeValue;                                    // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5588[0xF];                                     // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetCustomGlobalTransform
struct UInterchangeSceneNode_GetCustomGlobalTransform_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_558D[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            GlobalOffsetTransform;                             // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            AttributeValue;                                    // 0x70(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRecache;                                     // 0xD0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_558E[0xE];                                     // Fixing Size Of Struct
};

// 0x70 (0x70 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetCustomGeometricTransform
struct UInterchangeSceneNode_GetCustomGeometricTransform_Params
{
public:
	struct FTransform                            AttributeValue;                                    // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_558F[0xF];                                     // Fixing Size Of Struct
};

// 0x70 (0x70 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseLocalTransform
struct UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Params
{
public:
	struct FTransform                            AttributeValue;                                    // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5592[0xF];                                     // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseGlobalTransform
struct UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5594[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            GlobalOffsetTransform;                             // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            AttributeValue;                                    // 0x70(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRecache;                                     // 0xD0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5596[0xE];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetCustomAssetInstanceUid
struct UInterchangeSceneNode_GetCustomAssetInstanceUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5599[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.GetCustomAnimationAssetUidToPlay
struct UInterchangeSceneNode_GetCustomAnimationAssetUidToPlay_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_559D[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeSceneNode.AddSpecializedType
struct UInterchangeSceneNode_AddSpecializedType_Params
{
public:
	class FString                                SpecializedType;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55A1[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputValueKey
struct UInterchangeShaderPortsAPI_MakeInputValueKey_Params
{
public:
	class FString                                InputName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputName
struct UInterchangeShaderPortsAPI_MakeInputName_Params
{
public:
	class FString                                InputKey;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputConnectionKey
struct UInterchangeShaderPortsAPI_MakeInputConnectionKey_Params
{
public:
	class FString                                InputName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.IsAnInput
struct UInterchangeShaderPortsAPI_IsAnInput_Params
{
public:
	class FString                                AttributeKey;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55B0[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.HasInput
struct UInterchangeShaderPortsAPI_HasInput_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InInputName;                                       // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55B5[0x3];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.GetInputConnection
struct UInterchangeShaderPortsAPI_GetInputConnection_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InputName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutExpressionUid;                                  // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55BA[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.GatherInputs
struct UInterchangeShaderPortsAPI_GatherInputs_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutInputNames;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByName
struct UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InputName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExpressionUid;                                     // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55BE[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByIndex
struct UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InputName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExpressionUid;                                     // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutputIndex;                                       // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55C1[0x3];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectDefaultOuputToInput
struct UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InputName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExpressionUid;                                     // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55C4[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeShaderNode.SetCustomShaderType
struct UInterchangeShaderNode_SetCustomShaderType_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55C7[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeShaderNode.GetCustomShaderType
struct UInterchangeShaderNode_GetCustomShaderType_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55CC[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeFunctionCallShaderNode.SetCustomMaterialFunction
struct UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55D4[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeNodes.InterchangeFunctionCallShaderNode.GetCustomMaterialFunction
struct UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55DB[0x7];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSidedTransmission
struct UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSided
struct UInterchangeShaderGraphNode_SetCustomTwoSided_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomScreenSpaceReflections
struct UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomOpacityMaskClipValue
struct UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55EC[0x2];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomIsAShaderFunction
struct UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSidedTransmission
struct UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSided
struct UInterchangeShaderGraphNode_GetCustomTwoSided_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomScreenSpaceReflections
struct UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomOpacityMaskClipValue
struct UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5612[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomIsAShaderFunction
struct UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapV
struct UInterchangeTexture2DNode_SetCustomWrapV_Params
{
public:
	enum class EInterchangeTextureWrapMode       AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapU
struct UInterchangeTexture2DNode_SetCustomWrapU_Params
{
public:
	enum class EInterchangeTextureWrapMode       AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function InterchangeNodes.InterchangeTexture2DNode.GetSourceBlocks
struct UInterchangeTexture2DNode_GetSourceBlocks_Params
{
public:
	TMap<int32, class FString>                   ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapV
struct UInterchangeTexture2DNode_GetCustomWrapV_Params
{
public:
	enum class EInterchangeTextureWrapMode       AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapU
struct UInterchangeTexture2DNode_GetCustomWrapU_Params
{
public:
	enum class EInterchangeTextureWrapMode       AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


