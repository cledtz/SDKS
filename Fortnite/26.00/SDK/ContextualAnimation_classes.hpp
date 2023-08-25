#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class ContextualAnimation.AnimNotifyState_EarlyOutContextualAnimWindow
class UAnimNotifyState_EarlyOutContextualAnimWindow : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UAnimNotifyState_EarlyOutContextualAnimWindow* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class ContextualAnimation.AnimNotifyState_IKWindow
class UAnimNotifyState_IKWindow : public UAnimNotifyState
{
public:
	class FName                                  GoalName;                                          // 0x30(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2399[0x4];                                     // Fixing Size After Last Property 
	struct FAlphaBlend                           BlendIn;                                           // 0x38(0x30)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FAlphaBlend                           BlendOut;                                          // 0x68(0x30)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x98(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239A[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAnimNotifyState_IKWindow* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ContextualAnimation.ContextualAnimActorInterface
class UContextualAnimActorInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UContextualAnimActorInterface* GetDefaultObj();

	class USkeletalMeshComponent* GetMesh();
};

// 0x68 (0x90 - 0x28)
// Class ContextualAnimation.ContextualAnimManager
class UContextualAnimManager : public UObject
{
public:
	uint8                                        Pad_23BF[0x8];                                     // Fixing Size After Last Property 
	TSet<class UContextualAnimSceneActorComponent*> SceneActorCompContainer;                           // 0x30(0x50)(ExportObject, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UContextualAnimSceneInstance*>  Instances;                                         // 0x80(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UContextualAnimManager* GetDefaultObj();

	bool TryStopSceneWithActor(class UActor* Actor);
	void OnSceneInstanceEnded(class UContextualAnimSceneInstance* SceneInstance);
	bool IsActorInAnyScene(class UActor* Actor);
	class UContextualAnimSceneInstance* GetSceneWithActor(class UActor* Actor);
	class UContextualAnimManager* GetContextualAnimManager(class UObject* WorldContextObject);
	class UContextualAnimSceneInstance* BP_TryStartScene(class UContextualAnimSceneAsset* SceneAsset, struct FContextualAnimStartSceneParams& Params);
};

// 0x128 (0x690 - 0x568)
// Class ContextualAnimation.ContextualAnimSceneActorComponent
class UContextualAnimSceneActorComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_2418[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnJoinedSceneDelegate;                             // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeftSceneDelegate;                               // 0x580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayMontageNotifyBeginDelegate;                  // 0x590(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UContextualAnimSceneAsset*             SceneAsset;                                        // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebug;                                      // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2419[0x7];                                     // Fixing Size After Last Property 
	struct FContextualAnimRepBindingsData        RepBindings;                                       // 0x5B0(0x40)(Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FContextualAnimRepLateJoinData        RepLateJoinData;                                   // 0x5F0(0x28)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FContextualAnimRepTransitionData      RepTransitionData;                                 // 0x618(0x18)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FContextualAnimRepTransitionData      RepTransitionSingleActorData;                      // 0x630(0x18)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x648(0x28)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FContextualAnimIKTarget>       IKTargets;                                         // 0x670(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_241D[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UContextualAnimSceneActorComponent* GetDefaultObj();

	bool TransitionSingleActor(int32 SectionIdx, int32 AnimSetIdx);
	bool TransitionContextualAnimScene(class FName SectionName);
	bool StartContextualAnimScene(struct FContextualAnimSceneBindings& InBindings);
	void ServerStartContextualAnimScene(struct FContextualAnimSceneBindings& InBindings);
	void ServerEarlyOutContextualAnimScene();
	void OnTickPose(class USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion);
	void OnRep_TransitionData();
	void OnRep_RepTransitionSingleActor();
	void OnRep_LateJoinData();
	void OnRep_Bindings();
	void OnPlayMontageNotifyBegin(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void OnLeftScene();
	void OnJoinedScene(struct FContextualAnimSceneBindings& InBindings);
	bool LateJoinContextualAnimScene(class UActor* Actor, class FName Role);
	TArray<struct FContextualAnimIKTarget> GetIKTargets();
	struct FContextualAnimIKTarget GetIKTargetByGoalName(class FName GoalName);
};

// 0x10 (0x40 - 0x30)
// Class ContextualAnimation.ContextualAnimRolesAsset
class UContextualAnimRolesAsset : public UDataAsset
{
public:
	TArray<struct FContextualAnimRoleDefinition> Roles;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UContextualAnimRolesAsset* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class ContextualAnimation.ContextualAnimSceneAsset
class UContextualAnimSceneAsset : public UDataAsset
{
public:
	class UContextualAnimRolesAsset*             RolesAsset;                                        // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PrimaryRole;                                       // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2443[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FContextualAnimActorPreviewData> OverridePreviewData;                               // 0x40(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FContextualAnimSceneSection>   Sections;                                          // 0x50(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2444[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class UContextualAnimSceneInstance> SceneInstanceClass;                                // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableCollisionBetweenActors;                    // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPrecomputeAlignmentTracks;                        // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2445[0x2];                                     // Fixing Size After Last Property 
	int32                                        SampleRate;                                        // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UContextualAnimSceneAsset* GetDefaultObj();

	bool Query(class FName Role, struct FContextualAnimQueryResult* OutResult, struct FContextualAnimQueryParams& QueryParams, struct FTransform& ToWorldTransform);
	TArray<class FName> GetRoles();
	void GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(enum class EContextualAnimPointType Type, int32 SectionIdx, struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Querier, enum class EContextualAnimCriterionToConsider CriterionToConsider, TArray<struct FContextualAnimPoint>* OutResult);
	void GetAlignmentPointsForSecondaryRole(enum class EContextualAnimPointType Type, int32 SectionIdx, struct FContextualAnimSceneBindingContext& Primary, TArray<struct FContextualAnimPoint>* OutResult);
	void BP_GetStartAndEndTimeForWarpSection(int32 SectionIdx, int32 AnimSetIdx, class FName Role, class FName WarpSectionName, float* OutStartTime, float* OutEndTime);
	struct FTransform BP_GetIKTargetTransformForRoleAtTime(int32 SectionIdx, int32 AnimSetIdx, class FName Role, class FName TrackName, float Time);
	struct FTransform BP_GetAlignmentTransformForRoleRelativeToWarpPoint(int32 SectionIdx, int32 AnimSetIdx, class FName Role, float Time);
	int32 BP_FindAnimSetIndexByAnimation(int32 SectionIdx, class UAnimSequenceBase* Animation);
	class UAnimSequenceBase* BP_FindAnimationForRole(int32 SectionIdx, int32 AnimSetIdx, class FName Role);
};

// 0xA8 (0xD0 - 0x28)
// Class ContextualAnimation.ContextualAnimSceneInstance
class UContextualAnimSceneInstance : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSectionEndTimeReached;                           // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSceneEnded;                                      // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorJoined;                                     // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorLeft;                                       // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotifyBegin;                                     // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotifyEnd;                                       // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UContextualAnimSceneAsset*             SceneAsset;                                        // 0x88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FContextualAnimSceneBindings          Bindings;                                          // 0x90(0x28)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_244E[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UContextualAnimSceneInstance* GetDefaultObj();

	void OnNotifyEndReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UActor* GetActorByRole(class FName Role);
};

// 0x8 (0x30 - 0x28)
// Class ContextualAnimation.ContextualAnimSelectionCriterion
class UContextualAnimSelectionCriterion : public UObject
{
public:
	enum class EContextualAnimCriterionType      Type;                                              // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244F[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UContextualAnimSelectionCriterion* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint
class UContextualAnimSelectionCriterion_Blueprint : public UContextualAnimSelectionCriterion
{
public:

	static class UClass* StaticClass();
	static class UContextualAnimSelectionCriterion_Blueprint* GetDefaultObj();

	class UContextualAnimSceneAsset* GetSceneAsset();
	bool BP_DoesQuerierPassCondition(struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Querier);
};

// 0x18 (0x48 - 0x30)
// Class ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea
class UContextualAnimSelectionCriterion_TriggerArea : public UContextualAnimSelectionCriterion
{
public:
	TArray<struct FVector>                       PolygonPoints;                                     // 0x30(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2457[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UContextualAnimSelectionCriterion_TriggerArea* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class ContextualAnimation.ContextualAnimSelectionCriterion_Cone
class UContextualAnimSelectionCriterion_Cone : public UContextualAnimSelectionCriterion
{
public:
	enum class EContextualAnimCriterionConeMode  Mode;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2458[0x3];                                     // Fixing Size After Last Property 
	float                                        Distance;                                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HalfAngle;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UContextualAnimSelectionCriterion_Cone* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class ContextualAnimation.ContextualAnimSelectionCriterion_Distance
class UContextualAnimSelectionCriterion_Distance : public UContextualAnimSelectionCriterion
{
public:
	enum class EContextualAnimCriterionDistanceMode Mode;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2459[0x3];                                     // Fixing Size After Last Property 
	float                                        MinDistance;                                       // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_245A[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UContextualAnimSelectionCriterion_Distance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ContextualAnimation.ContextualAnimTransition
class UContextualAnimTransition : public UObject
{
public:

	static class UClass* StaticClass();
	static class UContextualAnimTransition* GetDefaultObj();

	bool CanEnterTransition(class UContextualAnimSceneInstance* SceneInstance, class FName& FromSection, class FName& ToSection);
};

// 0x0 (0x28 - 0x28)
// Class ContextualAnimation.ContextualAnimUtilities
class UContextualAnimUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UContextualAnimUtilities* GetDefaultObj();

	void BP_SceneBindings_GetSectionAndAnimSetIndices(struct FContextualAnimSceneBindings& Bindings, int32* SectionIdx, int32* AnimSetIdx);
	class UContextualAnimSceneAsset* BP_SceneBindings_GetSceneAsset(struct FContextualAnimSceneBindings& Bindings);
	TArray<struct FContextualAnimSceneBinding> BP_SceneBindings_GetBindings(struct FContextualAnimSceneBindings& Bindings);
	struct FContextualAnimSceneBinding BP_SceneBindings_GetBindingByRole(struct FContextualAnimSceneBindings& Bindings, class FName Role);
	struct FContextualAnimSceneBinding BP_SceneBindings_GetBindingByActor(struct FContextualAnimSceneBindings& Bindings, class UActor* Actor);
	struct FTransform BP_SceneBindings_GetAlignmentTransformFromBinding(struct FContextualAnimSceneBindings& Bindings, struct FContextualAnimSceneBinding& Binding, struct FContextualAnimWarpPoint& WarpPoint);
	struct FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint(struct FContextualAnimSceneBindings& Bindings, class FName Role, struct FContextualAnimWarpPoint& WarpPoint, float Time);
	struct FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(struct FContextualAnimSceneBindings& Bindings, class FName Role, class FName RelativeToRole, float Time);
	void BP_SceneBindings_CalculateWarpPoints(struct FContextualAnimSceneBindings& Bindings, TArray<struct FContextualAnimWarpPoint>* OutWarpPoints);
	void BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(struct FContextualAnimSceneBindings& Bindings);
	struct FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActorWithExternalTransform(class UActor* Actor, const struct FTransform& ExternalTransform);
	struct FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActor(class UActor* Actor);
	bool BP_SceneBindingContext_HasMatchingGameplayTag(struct FContextualAnimSceneBindingContext& BindingContext, struct FGameplayTag& TagToCheck);
	bool BP_SceneBindingContext_HasAnyMatchingGameplayTags(struct FContextualAnimSceneBindingContext& BindingContext, struct FGameplayTagContainer& TagContainer);
	bool BP_SceneBindingContext_HasAllMatchingGameplayTags(struct FContextualAnimSceneBindingContext& BindingContext, struct FGameplayTagContainer& TagContainer);
	struct FVector BP_SceneBindingContext_GetVelocity(struct FContextualAnimSceneBindingContext& BindingContext);
	struct FTransform BP_SceneBindingContext_GetTransform(struct FContextualAnimSceneBindingContext& BindingContext);
	struct FGameplayTagContainer BP_SceneBindingContext_GetGameplayTags(struct FContextualAnimSceneBindingContext& BindingContext);
	class UActor* BP_SceneBindingContext_GetActor(struct FContextualAnimSceneBindingContext& BindingContext);
	class USkeletalMeshComponent* BP_SceneBinding_GetSkeletalMesh(struct FContextualAnimSceneBinding& Binding);
	class FName BP_SceneBinding_GetRoleFromBinding(struct FContextualAnimSceneBindings& Bindings, struct FContextualAnimSceneBinding& Binding);
	class UAnimSequenceBase* BP_SceneBinding_GetAnimationFromBinding(struct FContextualAnimSceneBindings& Bindings, struct FContextualAnimSceneBinding& Binding);
	class UActor* BP_SceneBinding_GetActor(struct FContextualAnimSceneBinding& Binding);
	float BP_Montage_GetSectionTimeLeftFromPos(class UAnimMontage* Montage, float Position);
	void BP_Montage_GetSectionStartAndEndTime(class UAnimMontage* Montage, int32 SectionIndex, float* OutStartTime, float* OutEndTime);
	float BP_Montage_GetSectionLength(class UAnimMontage* Montage, int32 SectionIndex);
	void BP_DrawDebugPose(class UObject* WorldContextObject, class UAnimSequenceBase* Animation, float Time, const struct FTransform& LocalToWorldTransform, const struct FLinearColor& Color, float Lifetime, float Thickness);
	bool BP_CreateContextualAnimSceneBindingsForTwoActors(class UContextualAnimSceneAsset* SceneAsset, struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Secondary, struct FContextualAnimSceneBindings* OutBindings);
	bool BP_CreateContextualAnimSceneBindings(class UContextualAnimSceneAsset* SceneAsset, TMap<class FName, struct FContextualAnimSceneBindingContext>& Params, struct FContextualAnimSceneBindings* OutBindings);
};

}


