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

enum class EGameplayTaskActuationResult : uint8
{
	None                           = 0,
	RequestFailed                  = 1,
	Failed                         = 2,
	Succeeded                      = 3,
	EGameplayTaskActuationResult_MAX = 4,
};

enum class EGameplayInteractionAbortReason : uint8
{
	Unset                          = 0,
	ExternalAbort                  = 1,
	InternalAbort                  = 2,
	EGameplayInteractionAbortReason_MAX = 3,
};

enum class EGameplayInteractionModifyGameplayTagOperation : uint8
{
	Add                            = 0,
	Remove                         = 1,
	EGameplayInteractionModifyGameplayTagOperation_MAX = 2,
};

enum class EGameplayInteractionTaskModify : uint8
{
	OnEnterStateUndoOnExitState    = 0,
	OnEnterState                   = 1,
	OnExitState                    = 2,
	OnExitStateFailed              = 3,
	OnExitStateSucceeded           = 4,
	EGameplayInteractionTaskModify_MAX = 5,
};

enum class EGameplayInteractionTaskTrigger : uint8
{
	OnEnterState                   = 0,
	OnExitState                    = 1,
	OnExitStateSucceeded           = 2,
	OnExitStateFailed              = 3,
	EGameplayInteractionTaskTrigger_MAX = 4,
};

enum class EGameplayInteractionMatchSlotTagSource : uint8
{
	ActivityTags                   = 0,
	RuntimeTags                    = 1,
	EGameplayInteractionMatchSlotTagSource_MAX = 2,
};

enum class EGameplayInteractionSlotReferenceType : uint8
{
	ByActivityTag                  = 0,
	ByLinkTag                      = 1,
	EGameplayInteractionSlotReferenceType_MAX = 2,
};

enum class EGameplayInteractionSyncSlotTransitionState : uint8
{
	WaitingForFromTag              = 0,
	WaitingForToTag                = 1,
	Completed                      = 2,
	EGameplayInteractionSyncSlotTransitionState_MAX = 3,
};

enum class EPlayContextualAnimExecutionMethod : uint8
{
	StartInteraction               = 0,
	JoinInteraction                = 1,
	TransitionAllActors            = 2,
	TransitionSingleActor          = 3,
	EPlayContextualAnimExecutionMethod_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionAbortContext
struct FGameplayInteractionAbortContext
{
public:
	enum class EGameplayInteractionAbortReason   Reason;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionContext
struct FGameplayInteractionContext
{
public:
	struct FStateTreeInstanceData                StateTreeInstanceData;                             // 0x0(0x10)(Protected, NativeAccessSpecifierProtected)
	struct FSmartObjectClaimHandle               ClaimedHandle;                                     // 0x10(0x18)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayInteractionAbortContext      AbortContext;                                      // 0x28(0x1)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1614[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                ContextActor;                                      // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                SmartObjectActor;                                  // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayInteractionSmartObjectBehaviorDefinition* Definition;                                        // 0x40(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSlotUserData
struct FGameplayInteractionSlotUserData : public FSmartObjectSlotStateData
{
public:
	uint8                                        Pad_1615[0x8];                                     // Fixing Size Of Struct..
};

// 0x0 (0x20 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionStateTreeTask
struct FGameplayInteractionStateTreeTask : public FStateTreeTaskBase
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionStateTreeCondition
struct FGameplayInteractionStateTreeCondition : public FStateTreeConditionBase
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionMatchSlotTagsConditionInstanceData
struct FGameplayInteractionMatchSlotTagsConditionInstanceData
{
public:
	struct FSmartObjectSlotHandle                Slot;                                              // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagsToMatch;                                       // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSlotTagsMatchCondition
struct FGameplayInteractionSlotTagsMatchCondition : public FGameplayInteractionStateTreeCondition
{
public:
	enum class EGameplayInteractionMatchSlotTagSource Source;                                            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayContainerMatchType       MatchType;                                         // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExactMatch;                                       // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x23(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1616[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionQuerySlotTagsConditionInstanceData
struct FGameplayInteractionQuerySlotTagsConditionInstanceData
{
public:
	struct FSmartObjectSlotHandle                Slot;                                              // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x78 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionQuerySlotTagCondition
struct FGameplayInteractionQuerySlotTagCondition : public FGameplayInteractionStateTreeCondition
{
public:
	enum class EGameplayInteractionMatchSlotTagSource Source;                                            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1617[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     TagQuery;                                          // 0x28(0x48)(Edit, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1618[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidConditionInstanceData
struct FGameplayInteractionIsSlotHandleValidConditionInstanceData
{
public:
	struct FSmartObjectSlotHandle                Slot;                                              // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidCondition
struct FGameplayInteractionIsSlotHandleValidCondition : public FGameplayInteractionStateTreeCondition
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1619[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionFindSlotTaskInstanceData
struct FGameplayInteractionFindSlotTaskInstanceData
{
public:
	struct FSmartObjectSlotHandle                ReferenceSlot;                                     // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectSlotHandle                ResultSlot;                                        // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionFindSlotTask
struct FGameplayInteractionFindSlotTask : public FGameplayInteractionStateTreeTask
{
public:
	enum class EGameplayInteractionSlotReferenceType ReferenceType;                                     // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_161A[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          FindByTag;                                         // 0x24(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_161B[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionGetSlotActorTaskInstanceData
struct FGameplayInteractionGetSlotActorTaskInstanceData
{
public:
	struct FSmartObjectSlotHandle                TargetSlot;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ResultActor;                                       // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionGetSlotActorTask
struct FGameplayInteractionGetSlotActorTask : public FGameplayInteractionStateTreeTask
{
public:
	bool                                         bFailIfNotFound;                                   // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_161C[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionListenSlotEventsTaskInstanceData
struct FGameplayInteractionListenSlotEventsTaskInstanceData
{
public:
	struct FSmartObjectSlotHandle                TargetSlot;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161D[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionListenSlotEventsTask
struct FGameplayInteractionListenSlotEventsTask : public FGameplayInteractionStateTreeTask
{
public:
	uint8                                        Pad_161E[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionModifySlotTagTaskInstanceData
struct FGameplayInteractionModifySlotTagTaskInstanceData
{
public:
	struct FSmartObjectSlotHandle                TargetSlot;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTagRemoved;                                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161F[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x30 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionModifySlotTagTask
struct FGameplayInteractionModifySlotTagTask : public FGameplayInteractionStateTreeTask
{
public:
	enum class EGameplayInteractionTaskModify    Modify;                                            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayInteractionModifyGameplayTagOperation Operation;                                         // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1620[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Tag;                                               // 0x24(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1621[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSendSlotEventTaskInstanceData
struct FGameplayInteractionSendSlotEventTaskInstanceData
{
public:
	struct FSmartObjectSlotHandle                TargetSlot;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSendSlotEventTask
struct FGameplayInteractionSendSlotEventTask : public FGameplayInteractionStateTreeTask
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x20(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1622[0x4];                                     // Fixing Size After Last Property..
	struct FInstancedStruct                      Payload;                                           // 0x28(0x10)(Edit, Protected, NativeAccessSpecifierProtected)
	enum class EGameplayInteractionTaskTrigger   Trigger;                                           // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldTriggerOnReselect;                          // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1623[0x6];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSetSlotEnabledInstanceData
struct FGameplayInteractionSetSlotEnabledInstanceData
{
public:
	struct FSmartObjectSlotHandle                TargetSlot;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitialState;                                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1624[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSetSlotEnabledTask
struct FGameplayInteractionSetSlotEnabledTask : public FGameplayInteractionStateTreeTask
{
public:
	enum class EGameplayInteractionTaskModify    Modify;                                            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableSlot;                                       // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1625[0x6];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateInstanceData
struct FGameplayInteractionSyncSlotTagStateInstanceData
{
public:
	struct FSmartObjectSlotHandle                TargetSlot;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1626[0x10];                                    // Fixing Size Of Struct..
};

// 0x10 (0x30 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateTask
struct FGameplayInteractionSyncSlotTagStateTask : public FGameplayInteractionStateTreeTask
{
public:
	struct FGameplayTag                          TagToMonitor;                                      // 0x20(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          BreakEventTag;                                     // 0x24(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1627[0x8];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionInstanceData
struct FGameplayInteractionSyncSlotTagTransitionInstanceData
{
public:
	struct FSmartObjectSlotHandle                TargetSlot;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1628[0x10];                                    // Fixing Size Of Struct..
};

// 0x10 (0x30 - 0x20)
// ScriptStruct GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionTask
struct FGameplayInteractionSyncSlotTagTransitionTask : public FGameplayInteractionStateTreeTask
{
public:
	struct FGameplayTag                          TransitionFromTag;                                 // 0x20(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          TransitionToTag;                                   // 0x24(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          TransitionEventTag;                                // 0x28(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1629[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayInteractionsModule.PlayMontageStateTreeTaskInstanceData
struct FPlayMontageStateTreeTaskInstanceData
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ComputedDuration;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayInteractionsModule.PlayMontageStateTreeTask
struct FPlayMontageStateTreeTask : public FGameplayInteractionStateTreeTask
{
public:
	class UAnimMontage*                          Montage;                                           // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation_InstanceData
struct FStateTreeTask_FindSlotEntranceLocation_InstanceData
{
public:
	class AActor*                                UserActor;                                         // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectSlotHandle                ReferenceSlot;                                     // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            EntryTransform;                                    // 0x10(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EntryTag;                                          // 0x70(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162A[0xC];                                     // Fixing Size Of Struct..
};

// 0x18 (0x38 - 0x20)
// ScriptStruct GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation
struct FStateTreeTask_FindSlotEntranceLocation : public FGameplayInteractionStateTreeTask
{
public:
	enum class EFSmartObjectSlotEntrySelectionMethod SelectMethod;                                      // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProjectNavigationLocation;                        // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTraceGroundLocation;                              // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCheckTransitionTrajectory;                        // 0x23(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCheckEntranceLocationOverlap;                     // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCheckSlotLocationOverlap;                         // 0x25(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseSlotLocationAsFallbackCandidate;               // 0x26(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESmartObjectSlotNavigationLocationType LocationType;                                      // 0x27(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USmartObjectSlotValidationFilter> ValidationFilter;                                  // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_162B[0x8];                                     // Fixing Size Of Struct..
};

// 0x0 (0x20 - 0x20)
// ScriptStruct GameplayInteractionsModule.StateTreeTask_PlayContextualAnim
struct FStateTreeTask_PlayContextualAnim : public FStateTreeTaskCommonBase
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
