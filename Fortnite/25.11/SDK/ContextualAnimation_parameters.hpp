#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function ContextualAnimation.ContextualAnimActorInterface.GetMesh
struct UContextualAnimActorInterface_GetMesh_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimManager.TryStopSceneWithActor
struct UContextualAnimManager_TryStopSceneWithActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF3[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function ContextualAnimation.ContextualAnimManager.OnSceneInstanceEnded
struct UContextualAnimManager_OnSceneInstanceEnded_Params
{
public:
	class UContextualAnimSceneInstance*          SceneInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimManager.IsActorInAnyScene
struct UContextualAnimManager_IsActorInAnyScene_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF4[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimManager.GetSceneWithActor
struct UContextualAnimManager_GetSceneWithActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UContextualAnimSceneInstance*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimManager.GetContextualAnimManager
struct UContextualAnimManager_GetContextualAnimManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UContextualAnimManager*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ContextualAnimation.ContextualAnimManager.BP_TryStartScene
struct UContextualAnimManager_BP_TryStartScene_Params
{
public:
	class UContextualAnimSceneAsset*             SceneAsset;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualAnimStartSceneParams       Params;                                            // 0x8(0x68)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UContextualAnimSceneInstance*          ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.TransitionSingleActor
struct UContextualAnimSceneActorComponent_TransitionSingleActor_Params
{
public:
	int32                                        SectionIdx;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AnimSetIdx;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF6[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.TransitionContextualAnimScene
struct UContextualAnimSceneActorComponent_TransitionContextualAnimScene_Params
{
public:
	class FName                                  SectionName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF7[0x3];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.StartContextualAnimScene
struct UContextualAnimSceneActorComponent_StartContextualAnimScene_Params
{
public:
	struct FContextualAnimSceneBindings          InBindings;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF8[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.ServerStartContextualAnimScene
struct UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Params
{
public:
	struct FContextualAnimSceneBindings          InBindings;                                        // 0x0(0x28)(ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.ServerEarlyOutContextualAnimScene
struct UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnTickPose
struct UContextualAnimSceneActorComponent_OnTickPose_Params
{
public:
	class USkinnedMeshComponent*                 SkinnedMeshComponent;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeedsValidRootMotion;                             // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF9[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_TransitionData
struct UContextualAnimSceneActorComponent_OnRep_TransitionData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_RepTransitionSingleActor
struct UContextualAnimSceneActorComponent_OnRep_RepTransitionSingleActor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_LateJoinData
struct UContextualAnimSceneActorComponent_OnRep_LateJoinData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_Bindings
struct UContextualAnimSceneActorComponent_OnRep_Bindings_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnPlayMontageNotifyBegin
struct UContextualAnimSceneActorComponent_OnPlayMontageNotifyBegin_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFA[0x4];                                     // Fixing Size After Last Property..
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnMontageBlendingOut
struct UContextualAnimSceneActorComponent_OnMontageBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFB[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnLeftScene
struct UContextualAnimSceneActorComponent_OnLeftScene_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.OnJoinedScene
struct UContextualAnimSceneActorComponent_OnJoinedScene_Params
{
public:
	struct FContextualAnimSceneBindings          InBindings;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.LateJoinContextualAnimScene
struct UContextualAnimSceneActorComponent_LateJoinContextualAnimScene_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Role;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFC[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargets
struct UContextualAnimSceneActorComponent_GetIKTargets_Params
{
public:
	TArray<struct FContextualAnimIKTarget>       ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargetByGoalName
struct UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Params
{
public:
	class FName                                  GoalName;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFD[0xC];                                     // Fixing Size After Last Property..
	struct FContextualAnimIKTarget               ReturnValue;                                       // 0x10(0x70)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneAsset.Query
struct UContextualAnimSceneAsset_Query_Params
{
public:
	class FName                                  Role;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D01[0xC];                                     // Fixing Size After Last Property..
	struct FContextualAnimQueryResult            OutResult;                                         // 0x10(0xE0)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FContextualAnimQueryParams            QueryParams;                                       // 0xF0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ToWorldTransform;                                  // 0x170(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1D0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D02[0xF];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneAsset.GetRoles
struct UContextualAnimSceneAsset_GetRoles_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria
struct UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Params
{
public:
	enum class EContextualAnimPointType          Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D03[0x3];                                     // Fixing Size After Last Property..
	int32                                        SectionIdx;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D04[0x8];                                     // Fixing Size After Last Property..
	struct FContextualAnimSceneBindingContext    Primary;                                           // 0x10(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FContextualAnimSceneBindingContext    Querier;                                           // 0xE0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EContextualAnimCriterionToConsider CriterionToConsider;                               // 0x1B0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D05[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FContextualAnimPoint>          OutResult;                                         // 0x1B8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D06[0x8];                                     // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRole
struct UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Params
{
public:
	enum class EContextualAnimPointType          Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D07[0x3];                                     // Fixing Size After Last Property..
	int32                                        SectionIdx;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D08[0x8];                                     // Fixing Size After Last Property..
	struct FContextualAnimSceneBindingContext    Primary;                                           // 0x10(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FContextualAnimPoint>          OutResult;                                         // 0xE0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneAsset.BP_GetStartAndEndTimeForWarpSection
struct UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Params
{
public:
	int32                                        SectionIdx;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AnimSetIdx;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Role;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WarpSectionName;                                   // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutStartTime;                                      // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutEndTime;                                        // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneAsset.BP_GetIKTargetTransformForRoleAtTime
struct UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Params
{
public:
	int32                                        SectionIdx;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AnimSetIdx;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Role;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TrackName;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D09[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            ReturnValue;                                       // 0x20(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneAsset.BP_GetAlignmentTransformForRoleRelativeToWarpPoint
struct UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToWarpPoint_Params
{
public:
	int32                                        SectionIdx;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AnimSetIdx;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Role;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimSetIndexByAnimation
struct UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Params
{
public:
	int32                                        SectionIdx;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0A[0x4];                                     // Fixing Size After Last Property..
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0B[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimationForRole
struct UContextualAnimSceneAsset_BP_FindAnimationForRole_Params
{
public:
	int32                                        SectionIdx;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AnimSetIdx;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Role;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0C[0x4];                                     // Fixing Size After Last Property..
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneInstance.OnNotifyEndReceived
struct UContextualAnimSceneInstance_OnNotifyEndReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D10[0x4];                                     // Fixing Size After Last Property..
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneInstance.OnNotifyBeginReceived
struct UContextualAnimSceneInstance_OnNotifyBeginReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D11[0x4];                                     // Fixing Size After Last Property..
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneInstance.OnMontageBlendingOut
struct UContextualAnimSceneInstance_OnMontageBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D12[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimSceneInstance.GetActorByRole
struct UContextualAnimSceneInstance_GetActorByRole_Params
{
public:
	class FName                                  Role;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D13[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.GetSceneAsset
struct UContextualAnimSelectionCriterion_Blueprint_GetSceneAsset_Params
{
public:
	class UContextualAnimSceneAsset*             ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// Function ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.BP_DoesQuerierPassCondition
struct UContextualAnimSelectionCriterion_Blueprint_BP_DoesQuerierPassCondition_Params
{
public:
	struct FContextualAnimSceneBindingContext    Primary;                                           // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FContextualAnimSceneBindingContext    Querier;                                           // 0xD0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1A0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D16[0xF];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function ContextualAnimation.ContextualAnimTransition.CanEnterTransition
struct UContextualAnimTransition_CanEnterTransition_Params
{
public:
	class UContextualAnimSceneInstance*          SceneInstance;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FromSection;                                       // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ToSection;                                         // 0xC(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1B[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSectionAndAnimSetIndices
struct UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        SectionIdx;                                        // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AnimSetIdx;                                        // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSceneAsset
struct UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UContextualAnimSceneAsset*             ReturnValue;                                       // 0x28(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindings
struct UContextualAnimUtilities_BP_SceneBindings_GetBindings_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FContextualAnimSceneBinding>   ReturnValue;                                       // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByRole
struct UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  Role;                                              // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1C[0x4];                                     // Fixing Size After Last Property..
	struct FContextualAnimSceneBinding           ReturnValue;                                       // 0x30(0xE0)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByActor
struct UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualAnimSceneBinding           ReturnValue;                                       // 0x30(0xE0)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformFromBinding
struct UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1D[0x8];                                     // Fixing Size After Last Property..
	struct FContextualAnimSceneBinding           Binding;                                           // 0x30(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FContextualAnimWarpPoint              WarpPoint;                                         // 0x110(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x180(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint
struct UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  Role;                                              // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1E[0x4];                                     // Fixing Size After Last Property..
	struct FContextualAnimWarpPoint              WarpPoint;                                         // 0x30(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0xA0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1F[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            ReturnValue;                                       // 0xB0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole
struct UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  Role;                                              // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RelativeToRole;                                    // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D20[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            ReturnValue;                                       // 0x40(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_CalculateWarpPoints
struct UContextualAnimUtilities_BP_SceneBindings_CalculateWarpPoints_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FContextualAnimWarpPoint>      OutWarpPoints;                                     // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_AddOrUpdateWarpTargetsForBindings
struct UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActorWithExternalTransform
struct UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D21[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            ExternalTransform;                                 // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualAnimSceneBindingContext    ReturnValue;                                       // 0x70(0xD0)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActor
struct UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D22[0x8];                                     // Fixing Size After Last Property..
	struct FContextualAnimSceneBindingContext    ReturnValue;                                       // 0x10(0xD0)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetVelocity
struct UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Params
{
public:
	struct FContextualAnimSceneBindingContext    BindingContext;                                    // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xD0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D23[0x8];                                     // Fixing Size Of Struct..
};

// 0x130 (0x130 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetTransform
struct UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Params
{
public:
	struct FContextualAnimSceneBindingContext    BindingContext;                                    // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0xD0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetActor
struct UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Params
{
public:
	struct FContextualAnimSceneBindingContext    BindingContext;                                    // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0xD0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D24[0x8];                                     // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetSkeletalMesh
struct UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Params
{
public:
	struct FContextualAnimSceneBinding           Binding;                                           // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                ReturnValue;                                       // 0xE0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D25[0x8];                                     // Fixing Size Of Struct..
};

// 0x120 (0x120 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetRoleFromBinding
struct UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D26[0x8];                                     // Fixing Size After Last Property..
	struct FContextualAnimSceneBinding           Binding;                                           // 0x30(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x110(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D27[0xC];                                     // Fixing Size Of Struct..
};

// 0x120 (0x120 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetAnimationFromBinding
struct UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Params
{
public:
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D28[0x8];                                     // Fixing Size After Last Property..
	struct FContextualAnimSceneBinding           Binding;                                           // 0x30(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x110(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D29[0x8];                                     // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetActor
struct UContextualAnimUtilities_BP_SceneBinding_GetActor_Params
{
public:
	struct FContextualAnimSceneBinding           Binding;                                           // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0xE0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2A[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionTimeLeftFromPos
struct UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Position;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionStartAndEndTime
struct UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SectionIndex;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutStartTime;                                      // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutEndTime;                                        // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2B[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionLength
struct UContextualAnimUtilities_BP_Montage_GetSectionLength_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SectionIndex;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_DrawDebugPose
struct UContextualAnimUtilities_BP_DrawDebugPose_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2C[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            LocalToWorldTransform;                             // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x80(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeTime;                                          // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x94(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2D[0x8];                                     // Fixing Size Of Struct..
};

// 0x1E0 (0x1E0 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindingsForTwoActors
struct UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Params
{
public:
	class UContextualAnimSceneAsset*             SceneAsset;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2E[0x8];                                     // Fixing Size After Last Property..
	struct FContextualAnimSceneBindingContext    Primary;                                           // 0x10(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FContextualAnimSceneBindingContext    Secondary;                                         // 0xE0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FContextualAnimSceneBindings          OutBindings;                                       // 0x1B0(0x28)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1D8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2F[0x7];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// Function ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindings
struct UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Params
{
public:
	class UContextualAnimSceneAsset*             SceneAsset;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FContextualAnimSceneBindingContext> Params;                                            // 0x8(0x50)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FContextualAnimSceneBindings          OutBindings;                                       // 0x58(0x28)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D30[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
