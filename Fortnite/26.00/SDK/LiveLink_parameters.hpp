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

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
struct ULiveLinkBlueprintLibrary_TransformNames_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FName>                          TransformNames;                                    // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
struct ULiveLinkBlueprintLibrary_TransformName_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A2[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x0(0x14)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A8[0x3];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
struct ULiveLinkBlueprintLibrary_RemoveSource_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B3[0x7];                                      // Fixing Size Of Struct
};

// 0x80 (0x80 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
struct ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x20(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
struct ULiveLinkBlueprintLibrary_NumberOfTransforms_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C4[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x0(0x14)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForThisFrame;                                     // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CB[0x2];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
struct ULiveLinkBlueprintLibrary_IsSourceStillValid_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CF[0x7];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DB[0x3];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
struct ULiveLinkBlueprintLibrary_HasParent_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DE[0x7];                                      // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
struct ULiveLinkBlueprintLibrary_GetTransformByName_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  TransformName;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E6[0x4];                                      // Fixing Size After Last Property 
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x20(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
struct ULiveLinkBlueprintLibrary_GetTransformByIndex_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        TransformIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EC[0x4];                                      // Fixing Size After Last Property 
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x20(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
struct ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x0(0x14)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F4[0x4];                                      // Fixing Size After Last Property 
	TSubclassOf<class ULiveLinkRole>             ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid
struct ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid_Params
{
public:
	struct FGuid                                 SourceGuid;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
struct ULiveLinkBlueprintLibrary_GetSourceType_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
struct ULiveLinkBlueprintLibrary_GetSourceStatus_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
struct ULiveLinkBlueprintLibrary_GetSourceMachineName_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
struct ULiveLinkBlueprintLibrary_GetRootTransform_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x18(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
struct ULiveLinkBlueprintLibrary_GetPropertyValue_Params
{
public:
	struct FLiveLinkBasicBlueprintData           BasicData;                                         // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0xB8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xBC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A58[0x7];                                      // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
struct ULiveLinkBlueprintLibrary_GetParent_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkTransform                    Parent;                                            // 0x20(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
struct ULiveLinkBlueprintLibrary_GetMetadata_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSubjectMetadata                      MetaData;                                          // 0x18(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params
{
public:
	bool                                         bIncludeDisabledSubject;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeVirtualSubject;                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A60[0x6];                                      // Fixing Size After Last Property 
	TArray<struct FLiveLinkSubjectKey>           ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A73[0x4];                                      // Fixing Size After Last Property 
	TSubclassOf<class ULiveLinkRole>             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
struct ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params
{
public:
	bool                                         bIncludeVirtualSubject;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A89[0x7];                                      // Fixing Size After Last Property 
	TArray<struct FLiveLinkSubjectName>          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
struct ULiveLinkBlueprintLibrary_GetCurves_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     Curves;                                            // 0x18(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
struct ULiveLinkBlueprintLibrary_GetChildren_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkTransform>            Children;                                          // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
struct ULiveLinkBlueprintLibrary_GetBasicData_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkBasicBlueprintData           BasicBlueprintData;                                // 0x18(0xB8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
struct ULiveLinkBlueprintLibrary_GetAnimationStaticData_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkSkeletonStaticData           AnimationStaticData;                               // 0x18(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9D[0x7];                                      // Fixing Size Of Struct
};

// 0xD0 (0xD0 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
struct ULiveLinkBlueprintLibrary_GetAnimationFrameData_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkAnimationFrameData           AnimationFrameData;                                // 0x18(0xB0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA0[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA4[0x4];                                      // Fixing Size After Last Property 
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x10(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA6[0x7];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAA[0x4];                                      // Fixing Size After Last Property 
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldTimeOffset;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAB[0x4];                                      // Fixing Size After Last Property 
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x18(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAC[0x7];                                      // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB2[0x4];                                      // Fixing Size After Last Property 
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimecode                             SceneTime;                                         // 0x10(0x14)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB5[0x4];                                      // Fixing Size After Last Property 
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x28(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB6[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params
{
public:
	struct FLiveLinkSubjectRepresentation        SubjectRepresentation;                             // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x10(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABF[0x7];                                      // Fixing Size Of Struct
};

// 0x80 (0x80 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
struct ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x20(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
struct ULiveLinkBlueprintLibrary_ChildCount_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC3[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
struct ULiveLinkComponent_GetSubjectDataAtWorldTime_Params
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldTime;                                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD3[0x7];                                      // Fixing Size After Last Property 
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
struct ULiveLinkComponent_GetSubjectDataAtSceneTime_Params
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimecode                             SceneTime;                                         // 0x4(0x14)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADE[0x7];                                      // Fixing Size After Last Property 
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkComponent.GetSubjectData
struct ULiveLinkComponent_GetSubjectData_Params
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEC[0x3];                                      // Fixing Size After Last Property 
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
struct ULiveLinkComponent_GetAvailableSubjectNames_Params
{
public:
	TArray<class FName>                          SubjectNames;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
struct ULiveLinkMessageBusFinder_GetAvailableProviders_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF9[0x4];                                      // Fixing Size After Last Property 
	TArray<struct FProviderPollResult>           AvailableProviders;                                // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
struct ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params
{
public:
	class ULiveLinkMessageBusFinder*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
struct ULiveLinkMessageBusFinder_ConnectToProvider_Params
{
public:
	struct FProviderPollResult                   Provider;                                          // 0x0(0x40)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x40(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LiveLink.LiveLinkPreset.BuildFromClient
struct ULiveLinkPreset_BuildFromClient_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkPreset.ApplyToClientLatent
struct ULiveLinkPreset_ApplyToClientLatent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LiveLink.LiveLinkPreset.ApplyToClient
struct ULiveLinkPreset_ApplyToClient_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function LiveLink.LiveLinkPreset.AddToClient
struct ULiveLinkPreset_AddToClient_Params
{
public:
	bool                                         bRecreatePresets;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
struct ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Params
{
public:
	struct FLiveLinkBaseStaticData               InStruct;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B54[0x7];                                      // Fixing Size Of Struct
};

// 0xA8 (0xA8 - 0x0)
// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
struct ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Params
{
public:
	struct FLiveLinkBaseFrameData                InStruct;                                          // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bInShouldStampCurrentTime;                         // 0xA0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5E[0x6];                                      // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
struct ULiveLinkBlueprintVirtualSubject_OnUpdate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
struct ULiveLinkBlueprintVirtualSubject_OnInitialize_Params
{
public:
};

}
}


