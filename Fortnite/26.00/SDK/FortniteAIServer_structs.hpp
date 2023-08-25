#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESwitchSeatType : uint8
{
	ToDriver                       = 0,
	ToPassenger                    = 1,
	ToGunner                       = 2,
	ToSpotter                      = 3,
	SwitchSeatType_MAX             = 4,
};

enum class EFortAthenaStateTreeTaskFeatureExecutionMode : int32
{
	DoNotExecute                   = 0,
	ExecuteOnEnter                 = 1,
	ExecuteOnExit                  = 2,
	EFortAthenaStateTreeTaskFeatureExecutionMode_MAX = 3,
};

enum class ESeatStatusType : uint8
{
	Driver                         = 0,
	Passenger                      = 1,
	Gunner                         = 2,
	Spotter                        = 3,
	SeatStatusType_MAX             = 4,
};

enum class EFortWorldConditionPlayerHasConvertedNPCCondition : uint8
{
	HasReachedConvertedNPCLimit    = 0,
	HasAnotherConvertedNPC         = 1,
	EFortWorldConditionPlayerHasConvertedNPCCondition_MAX = 2,
};

enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8
{
	AllGoalsInRange                = 0,
	AnyGoalInRange                 = 1,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX = 2,
};

enum class EFortTestGoalActorDot : uint8
{
	Dot3D                          = 0,
	Dot2D                          = 1,
	EFortTestGoalActorDot_MAX      = 2,
};

enum class EDistanceMode : uint8
{
	DistItemToContext              = 0,
	DistItemGoalActorToContext     = 1,
	DistItemToItemGoalActor        = 2,
	EDistanceMode_MAX              = 3,
};

enum class ECountAIAssignedToType : uint8
{
	Goal                           = 0,
	Actor                          = 1,
	Assignment                     = 2,
	ECountAIAssignedToType_MAX     = 3,
};

enum class EFortAthenaAICanMoveState : uint8
{
	None                           = 0,
	Failed_AgentOffNavmesh         = 1,
	Failed_GoalOffNavmesh          = 2,
	Failed_Falling                 = 3,
	Success                        = 4,
	Success_Partial                = 5,
	EFortAthenaAICanMoveState_MAX  = 6,
};

enum class EEvasiveManeuverType : uint8
{
	Crouch                         = 0,
	Dodge                          = 1,
	Jump                           = 2,
	JetpackStrafe                  = 3,
	None                           = 4,
	EEvasiveManeuverType_MAX       = 5,
};

enum class EFreeFallingMode : uint8
{
	Idle                           = 0,
	Random                         = 1,
	TowardNearestAlly              = 2,
	PatrolPath                     = 3,
	EFreeFallingMode_MAX           = 4,
};

enum class EFocusingBehavior : uint8
{
	FocusCurrentTarget             = 0,
	IgnoreThreatAfterTimer         = 1,
	IgnoreThreatAlways             = 2,
	IgnoreThreatToFlee             = 3,
	LookAtInvestigate              = 4,
	LookAtAmbush                   = 5,
	LookAtHeardSound               = 6,
	LookAtScanAround               = 7,
	LookAtScanAroundOnly           = 8,
	Invalid                        = 9,
	EFocusingBehavior_MAX          = 10,
};

enum class EPathTestQueryType : uint8
{
	NavmeshRaycast2D               = 0,
	HierarchicalQuery              = 1,
	RegularPathFinding             = 2,
	EPathTestQueryType_MAX         = 3,
};

enum class EBTSetBlackboardBoolExitActions : uint8
{
	Invert                         = 0,
	Revert                         = 1,
	Keep                           = 2,
	EBTSetBlackboardBoolExitActions_MAX = 3,
};

enum class EGlideBehavior : uint8
{
	GlideFocusOnDestination        = 0,
	GlideSurveyArea                = 1,
	EGlideBehavior_MAX             = 2,
};

enum class EGlideMovementType : uint8
{
	GlideMovementLinear            = 0,
	GlideMovementSpiral            = 1,
	GlideMovementSerpentine        = 2,
	EGlideMovementType_MAX         = 3,
};

enum class EActionState : uint8
{
	TryingToEquip                  = 0,
	EquippingItem                  = 1,
	UsingItem                      = 2,
	WaitingItemTermination         = 3,
	WaitBeforeEquippingNextItem    = 4,
	ActionEndedWithNoError         = 5,
	ActionEndedWithError           = 6,
	EActionState_MAX               = 7,
};

enum class EEncampmentRole : uint8
{
	Guard                          = 0,
	Build                          = 1,
	Count                          = 2,
	EEncampmentRole_MAX            = 3,
};

enum class EHasMatchingGameplayTagContainerTestType : uint8
{
	Any                            = 0,
	All                            = 1,
	EHasMatchingGameplayTagContainerTestType_MAX = 2,
};

enum class EFortAthenaArithmeticOperation : uint8
{
	Add                            = 0,
	Subtract                       = 1,
	Multiply                       = 2,
	Divide                         = 3,
	EFortAthenaArithmeticOperation_MAX = 4,
};

enum class EFortAthenaPlayContextualAnimExecutionMethod : uint8
{
	StartInteraction               = 0,
	JoinInteraction                = 1,
	TransitionAllActors            = 2,
	TransitionSingleActor          = 3,
	EFortAthenaPlayContextualAnimExecutionMethod_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData
struct FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData
{
public:
	struct FStateTreeStructRef                   SoftDisableStateReference;                         // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UActor*>                        ActorsToTeleportOnFailure;                         // 0x10(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTask
struct FFortAthenaHandleSoftDisableGuardStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaSoftDisableStateTreeParameter
struct FFortAthenaSoftDisableStateTreeParameter
{
public:
	TArray<class UActor*>                        ActorsToTeleportOnExit;                            // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTaskInstanceData
struct FFortAthenaHandleSoftDisableStateTreeTaskInstanceData
{
public:
	TArray<class UActor*>                        ActorsToCleanup;                                   // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bHasReceivedSoftDisableEvent;                      // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3246[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          ReceivedSoftDisableEvent;                          // 0x14(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAthenaSoftDisableStateTreeParameter OutState;                                          // 0x18(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x48 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTask
struct FFortAthenaHandleSoftDisableStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	struct FGameplayTag                          StateTreeEventTag;                                 // 0x20(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3248[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               TeleportOnNavmeshQueryBoxExtents;                  // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxTeleportToTryPerActor;                          // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3249[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaPickRandomMontageConfig
struct FFortAthenaPickRandomMontageConfig
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RandomWeight;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_324B[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaPickRandomMontageStateTreeTaskInstanceData
struct FFortAthenaPickRandomMontageStateTreeTaskInstanceData
{
public:
	TArray<struct FFortAthenaPickRandomMontageConfig> PossibleMontages;                                  // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimMontage*                          PickedMontage;                                     // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaPickRandomMontageStateTreeTask
struct FFortAthenaPickRandomMontageStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskInstanceData
struct FFortAthenaToggleAllowInteractStateTreeTaskInstanceData
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                TargetActor;                                       // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskTreeTask
struct FFortAthenaToggleAllowInteractStateTreeTaskTreeTask : public FStateTreeTaskCommonBase
{
public:
	enum class EFortAthenaStateTreeTaskFeatureExecutionMode AddExecutionMode;                                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortAthenaStateTreeTaskFeatureExecutionMode RemoveExecutionMode;                               // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTaskInstanceData
struct FFortAthenaTrackEventConsumeStateTreeTaskInstanceData
{
public:
	struct FStateTreeStructRef                   ReferencedEvent;                                   // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTask
struct FFortAthenaTrackEventConsumeStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaTrackEventStateTreeTaskStateTreeParameter
struct FFortAthenaTrackEventStateTreeTaskStateTreeParameter
{
public:
	bool                                         bHasReceivedTrackedEvent;                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_324E[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          ReceivedEventTag;                                  // 0x4(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaTrackEventStateTreeTaskInstanceData
struct FFortAthenaTrackEventStateTreeTaskInstanceData
{
public:
	struct FFortAthenaTrackEventStateTreeTaskStateTreeParameter OutParameter;                                      // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x70 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaTrackEventStateTreeTask
struct FFortAthenaTrackEventStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	struct FGameplayTagQuery                     EventTagQuery;                                     // 0x20(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StateTreeEventTag;                                 // 0x68(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3251[0x4];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaWorldConditionInstanceData
struct FFortAthenaWorldConditionInstanceData
{
public:
	class UActor*                                ActorA;                                            // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                ActorB;                                            // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                ActorC;                                            // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutResult;                                        // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3252[0x7];                                     // Fixing Size After Last Property 
	struct FWorldConditionQueryState             QueryState;                                        // 0x20(0x30)(NativeAccessSpecifierPublic)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaWorldConditionInstanceDataStateTreeTask
struct FFortAthenaWorldConditionInstanceDataStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	struct FWorldConditionQueryDefinition        Conditions;                                        // 0x20(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          StateTreeEventTag;                                 // 0x38(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3254[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAIServer.FortBTService_InjectionTagKey
struct FFortBTService_InjectionTagKey
{
public:
	struct FGameplayTag                          InjectionTag;                                      // 0x0(0x4)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InjectionKeyName;                                  // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAIServer.FortWorldConditionGameplayTagActorQueryState
struct FFortWorldConditionGameplayTagActorQueryState
{
public:
	uint8                                        Pad_3255[0x8];                                     // Fixing Size Of Struct
};

// 0x30 (0x40 - 0x10)
// ScriptStruct FortniteAIServer.FortWorldConditionGameplayTagActor
struct FFortWorldConditionGameplayTagActor : public FWorldConditionCommonBase
{
public:
	struct FWorldConditionContextDataRef         ActorContextRef;                                   // 0x10(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TagContainerToCheck;                               // 0x18(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	enum class EHasMatchingGameplayTagContainerTestType TestType;                                          // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3256[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x20 - 0x10)
// ScriptStruct FortniteAIServer.FortWorldConditionPlayerHasConvertedNPC
struct FFortWorldConditionPlayerHasConvertedNPC : public FWorldConditionCommonActorBase
{
public:
	struct FWorldConditionContextDataRef         ActorRef;                                          // 0x10(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortWorldConditionPlayerHasConvertedNPCCondition ConditionToCheck;                                  // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3257[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x20 - 0x10)
// ScriptStruct FortniteAIServer.FortWorldConditionTimeOfDay
struct FFortWorldConditionTimeOfDay : public FWorldConditionCommonBase
{
public:
	struct FWorldConditionContextDataRef         ActorContextRef;                                   // 0x10(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        ValidTimesOfDay;                                   // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3259[0x4];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAIServer.GameFeatureFortAIEvaluatorEntry
struct FGameFeatureFortAIEvaluatorEntry
{
public:
	TSoftObjectPtr<class UBehaviorTree>          TreeAsset;                                         // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InjectionTag;                                      // 0x20(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_325A[0x4];                                     // Fixing Size After Last Property 
	TSoftClassPtr<class UFortAthenaAIEvaluator>  AIEvaluatorClass;                                  // 0x28(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAIServer.FortPointOnCurveRange
struct FFortPointOnCurveRange
{
public:
	float                                        MinPercentage;                                     // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPercentage;                                     // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAIServer.FortPointsOnCurve
struct FFortPointsOnCurve
{
public:
	TSoftObjectPtr<class UCurveFloat>            Curve;                                             // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortPointOnCurveRange>        RangesForPointsOnCurve;                            // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAIServer.FortQueryGenerator_PerceivedActors_Settings
struct FFortQueryGenerator_PerceivedActors_Settings
{
public:
	bool                                         bIgnoreDBNOPawns;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreSleepingAIs;                                // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_325C[0x6];                                     // Fixing Size After Last Property 
	struct FAIDataProviderFloatValue             MaxTimeSincePerceived;                             // 0x8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteAIServer.FortGameplayTagQueryPerDifficulty
struct FFortGameplayTagQueryPerDifficulty
{
public:
	struct FDataTableRowHandle                   DifficultyInfo;                                    // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     TagQueryToMatch;                                   // 0x10(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        Difficulty;                                        // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_325D[0x4];                                     // Fixing Size Of Struct
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteAIServer.GoalDistanceData
struct FGoalDistanceData
{
public:
	bool                                         bIgnoreScreeningDistance;                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_325E[0x7];                                     // Fixing Size After Last Property 
	struct FAIDataProviderFloatValue             ScreeningTestMaxDistance;                          // 0x8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveFloat>            TestScoreCurve;                                    // 0x40(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             CurveDistanceScale;                                // 0x60(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAIServer.FlankingLocationInfo
struct FFlankingLocationInfo
{
public:
	uint8                                        Pad_325F[0x20];                                    // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAIServer.FailedToReachPOI
struct FFailedToReachPOI
{
public:
	int32                                        BotPOIID;                                          // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FailCount;                                         // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAIServer.SmartObjectActivityResult
struct FSmartObjectActivityResult
{
public:
	uint8                                        Pad_3260[0x10];                                    // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAIServer.GameplayAbilityEvaluatorModule
struct FGameplayAbilityEvaluatorModule
{
public:
	struct FGameplayTagContainer                 GameplayAbilityTag;                                // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               CachedAbilitySystemComponent;                      // 0x20(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAIServer.GameplayTagActorHasMatchingGameplayTagInstanceData
struct FGameplayTagActorHasMatchingGameplayTagInstanceData
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TagToCheck;                                        // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3265[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x28 - 0x20)
// ScriptStruct FortniteAIServer.GameplayTagActorHasMatchingGameplayTagCondition
struct FGameplayTagActorHasMatchingGameplayTagCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3266[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAIServer.GameplayTagActorHasMatchingGameplayTagContainerInstanceData
struct FGameplayTagActorHasMatchingGameplayTagContainerInstanceData
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagContainerToCheck;                               // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct FortniteAIServer.GameplayTagActorHasMatchingGameplayContainerTagCondition
struct FGameplayTagActorHasMatchingGameplayContainerTagCondition : public FStateTreeConditionCommonBase
{
public:
	enum class EHasMatchingGameplayTagContainerTestType TestType;                                          // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3268[0x6];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTaskInstanceData
struct FFortAthenaAddGameplayTagsStateTreeTaskInstanceData
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTask
struct FFortAthenaAddGameplayTagsStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	bool                                         bReplicateChange;                                  // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3269[0x3];                                     // Fixing Size After Last Property 
	enum class EFortAthenaStateTreeTaskFeatureExecutionMode AddExecutionMode;                                  // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortAthenaStateTreeTaskFeatureExecutionMode RemoveExecutionMode;                               // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_326B[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x28 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaArithmeticStateTreeTask
struct FFortAthenaArithmeticStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	enum class EGameplayInteractionTaskTrigger   OperationTrigger;                                  // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortAthenaArithmeticOperation    Operation;                                         // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_326D[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaIntArithmeticStateTreeTaskInstanceData
struct FFortAthenaIntArithmeticStateTreeTaskInstanceData
{
public:
	int32                                        FirstOperand;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondOperand;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeStructRef                   ReferencedResult;                                  // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x28 - 0x28)
// ScriptStruct FortniteAIServer.FortAthenaIntArithmeticStateTreeTask
struct FFortAthenaIntArithmeticStateTreeTask : public FFortAthenaArithmeticStateTreeTask
{
public:
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaFocusAtStateTreeTaskInstanceData
struct FFortAthenaFocusAtStateTreeTaskInstanceData
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                FocusActor;                                        // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FocusActorOffset;                                  // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FocusWorldPoint;                                   // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetBackOnExit;                                    // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3271[0x4F];                                    // Fixing Size Of Struct
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaFocusAtStateTreeTask
struct FFortAthenaFocusAtStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaIntStateTreeParameter
struct FFortAthenaIntStateTreeParameter
{
public:
	int32                                        Int;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaMakeIntVariableStateTreeTaskInstanceData
struct FFortAthenaMakeIntVariableStateTreeTaskInstanceData
{
public:
	int32                                        DefaultIntValue;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAthenaIntStateTreeParameter      OutInt;                                            // 0x4(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaMakeIntVariableStateTreeTask
struct FFortAthenaMakeIntVariableStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	bool                                         bResetOnReselect;                                  // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3273[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaPlayContextualAnimStateTreeTask
struct FFortAthenaPlayContextualAnimStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaPlayInteractionStateTreeTaskActorInfo
struct FFortAthenaPlayInteractionStateTreeTaskActorInfo
{
public:
	uint8                                        Pad_3275[0x24];                                    // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaStateTreeCrouchTaskInstanceData
struct FFortAthenaStateTreeCrouchTaskInstanceData
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaStateTreeCrouchTask
struct FFortAthenaStateTreeCrouchTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaStateTreeInteractTaskInstanceData
struct FFortAthenaStateTreeInteractTaskInstanceData
{
public:
	enum class ETInteractionType                 InteractType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3278[0x7];                                     // Fixing Size After Last Property 
	class UActor*                                Actor;                                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                InteractTargetActor;                               // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractDuration;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timer;                                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaStateTreeInteractTask
struct FFortAthenaStateTreeInteractTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaStateTreeLookAroundTaskInstanceData
struct FFortAthenaStateTreeLookAroundTaskInstanceData
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtDurationMin;                                 // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtDurationMax;                                 // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtDuration;                                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timer;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaStateTreeLookAroundTask
struct FFortAthenaStateTreeLookAroundTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaTeleportToActorStateTreeTaskInstanceData
struct FFortAthenaTeleportToActorStateTreeTaskInstanceData
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                TargetActor;                                       // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TeleportRelativeLocation;                          // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TeleportRelativeRotation;                          // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaTeleportToActorStateTreeTask
struct FFortAthenaTeleportToActorStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTaskInstanceData
struct FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                TargetActor;                                       // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectClassesToAdd;                        // 0x10(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAutomaticallyRemoveAddedEffectsOnExit;            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3281[0x7];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectClassesToRemove;                     // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayEffectsByTagsToRemove;                     // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayEffectsBySourceTagsToRemove;               // 0x58(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayEffectsByAppliedTagsToRemove;              // 0x78(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayEffectsByGrantedTagsToRemove;              // 0x98(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_3282[0x10];                                    // Fixing Size Of Struct
};

// 0x8 (0x28 - 0x20)
// ScriptStruct FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTask
struct FFortAthenaToggleGameplayEffectStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	enum class EFortAthenaStateTreeTaskFeatureExecutionMode AddExecutionMode;                                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortAthenaStateTreeTaskFeatureExecutionMode RemoveExecutionMode;                               // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

}


