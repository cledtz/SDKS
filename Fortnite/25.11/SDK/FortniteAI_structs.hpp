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

enum class EAlertLevel : uint8
{
	Unaware                        = 0,
	Suspicious                     = 1,
	LostTarget                     = 2,
	Threatened                     = 3,
	Count                          = 4,
	EAlertLevel_MAX                = 5,
};

enum class EConvertedType : uint8
{
	NPC                            = 0,
	Creature                       = 1,
	All                            = 2,
	Unknown                        = 3,
	EConvertedType_MAX             = 4,
};

enum class EPingCommandType : uint8
{
	GoTo                           = 0,
	BackToMe                       = 1,
	BackToDefault                  = 2,
	HoldPosition                   = 3,
	Revive                         = 4,
	Dismiss                        = 5,
	Item                           = 6,
	Attack                         = 7,
	Invalid                        = 8,
	MAX                            = 9,
};

enum class ENavigationObstacleOverride : uint8
{
	UseMeshSettings                = 0,
	ForceEnabled                   = 1,
	ForceDisabled                  = 2,
	ExportAsPrimitive              = 3,
	ENavigationObstacleOverride_MAX = 4,
};

enum class EUnconvertReason : uint8
{
	StealByOtherPlayer             = 0,
	ConverterDeath                 = 1,
	ConvertedDeath                 = 2,
	TooManyConverted               = 3,
	TooFarFromConverter            = 4,
	GameplayTagBlockConvert        = 5,
	EndPlay                        = 6,
	Dismiss                        = 7,
	Unknown                        = 8,
	EUnconvertReason_MAX           = 9,
};

enum class ELootElementType : uint8
{
	Pickup                         = 0,
	Chest                          = 1,
	SupplyDrop                     = 2,
	Invalid                        = 255,
	ELootElementType_MAX           = 256,
};

enum class EBotNamingMode : uint8
{
	RealName                       = 0,
	SkinName                       = 1,
	Anonymous                      = 2,
	Custom                         = 3,
	CharacterDataDisplayName       = 4,
	CustomIncremental              = 5,
	EBotNamingMode_MAX             = 6,
};

enum class EFortEncounterUtilityDesire : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	VeryHigh                       = 3,
	Max_None                       = 4,
	EFortEncounterUtilityDesire_MAX = 5,
};

enum class EAIHotSpotSlotFilter : uint8
{
	All                            = 0,
	AvailableOnly                  = 1,
	UnavailableOnly                = 2,
	EAIHotSpotSlotFilter_MAX       = 3,
};

enum class EAIHotSpotAssignmentFilter : uint8
{
	All                            = 0,
	WithSlots                      = 1,
	WaitingList                    = 2,
	EAIHotSpotAssignmentFilter_MAX = 3,
};

enum class EAIHotSpotSlot : uint8
{
	Free                           = 0,
	Claimed                        = 1,
	Occupied                       = 2,
	Blocked                        = 3,
	Disabled                       = 4,
	EAIHotSpotSlot_MAX             = 5,
};

enum class EAthenaPathFollowingFocus : uint8
{
	TowardsNextPathPoint           = 0,
	AlignWithSmoothedVelocity      = 1,
	EAthenaPathFollowingFocus_MAX  = 2,
};

enum class EAthenaAITelemetryEventType : uint8
{
	Spawn                          = 0,
	Despawn                        = 1,
	EAthenaAITelemetryEventType_MAX = 2,
};

enum class EAICustomTargetRequestType : uint8
{
	Movement                       = 1,
	MeleeAttack                    = 2,
	RangedAttack                   = 4,
	EAICustomTargetRequestType_MAX = 5,
};

enum class EDespawnAIType : uint8
{
	Relevancy                      = 0,
	Distance                       = 1,
	EDespawnAIType_MAX             = 2,
};

enum class EFortAIDirectorEventContribution : uint8
{
	Increment                      = 0,
	Set                            = 1,
	EFortAIDirectorEventContribution_MAX = 2,
};

enum class EFortAIDirectorFactorContribution : uint8
{
	Direct                         = 0,
	Inverse                        = 1,
	EFortAIDirectorFactorContribution_MAX = 2,
};

enum class EFortEncounterPacingState : uint8
{
	Ramp                           = 0,
	Peak                           = 1,
	Fade                           = 2,
	Rest                           = 3,
	Max_None                       = 4,
	EFortEncounterPacingState_MAX  = 5,
};

enum class EFortEncounterState : uint8
{
	Uninitialized                  = 0,
	InitializingProperties         = 1,
	InitializingRiftManager        = 2,
	AwaitingActivation             = 3,
	Active                         = 4,
	ReplacingRifts                 = 5,
	Max_None                       = 6,
	EFortEncounterState_MAX        = 7,
};

enum class EFortAIWaveProgressSection : uint8
{
	SectionOne                     = 0,
	SectionTwo                     = 1,
	Max_None                       = 2,
	EFortAIWaveProgressSection_MAX = 3,
};

enum class EFortEncounterSequenceResult : uint8
{
	Success                        = 0,
	FailedEncounterInProgress      = 1,
	Failed                         = 2,
	EFortEncounterSequenceResult_MAX = 3,
};

enum class EAssignmentCreationResult : uint8
{
	AssignmentNotFoundOrCreated    = 0,
	AssignmentCreated              = 1,
	AssignmentFound                = 2,
	EAssignmentCreationResult_MAX  = 3,
};

enum class ECorePerceptionTypes : uint8
{
	Sight                          = 0,
	Hearing                        = 1,
	Damage                         = 2,
	Touch                          = 3,
	Team                           = 4,
	Prediction                     = 5,
	MAX                            = 6,
};

enum class EFortAILODLevel : uint8
{
	Invalid                        = 0,
	MIN                            = 0,
	Dormant                        = 1,
	BelowLower                     = 2,
	Lower                          = 3,
	AboveLower                     = 4,
	BelowNormal                    = 5,
	Normal                         = 6,
	AboveNormal                    = 7,
	MAX                            = 8,
};

enum class EAssignmentType : uint8
{
	Invalid                        = 0,
	Encounter                      = 1,
	World                          = 2,
	Enemy                          = 3,
	NumAssignmentTypes             = 4,
	EAssignmentType_MAX            = 5,
};

enum class EBuildingWallArea : uint8
{
	Regular                        = 0,
	Flat                           = 1,
	Special                        = 2,
	EBuildingWallArea_MAX          = 3,
};

enum class EBuildingStairsRailing : uint8
{
	None                           = 0,
	Partial                        = 1,
	Full                           = 2,
	EBuildingStairsRailing_MAX     = 3,
};

enum class EBuildingFloorRailing : uint8
{
	None                           = 0,
	Balcony                        = 1,
	EBuildingFloorRailing_MAX      = 2,
};

enum class EFortHotSpotSlot : uint8
{
	Melee                          = 0,
	MeleeHuge                      = 1,
	Ranged                         = 2,
	None                           = 3,
	EFortHotSpotSlot_MAX           = 4,
};

enum class EFortHotSpotDirection : uint8
{
	PositiveX                      = 0,
	NegativeX                      = 1,
	PositiveY                      = 2,
	NegativeY                      = 3,
	PositiveZ                      = 4,
	NegativeZ                      = 5,
	Any                            = 6,
	EFortHotSpotDirection_MAX      = 7,
};

enum class EFortHotSpotPreview : uint8
{
	None                           = 0,
	Smashing                       = 1,
	Shooting                       = 2,
	EFortHotSpotPreview_MAX        = 3,
};

enum class EHotspotTypeConfigMode : uint8
{
	AlwaysAdd                      = 0,
	WhenNotDefined                 = 1,
	WhenNotValid                   = 2,
	EHotspotTypeConfigMode_MAX     = 3,
};

enum class EFortPartialPathUsage : uint8
{
	Always                         = 0,
	OnlyGoalsOnDestructible        = 1,
	Never                          = 2,
	EFortPartialPathUsage_MAX      = 3,
};

enum class ETargetDistanceComparisonType : uint8
{
	TwoDimensions                  = 0,
	ThreeDimensions                = 1,
	CollisionHalfHeightMultiplier  = 2,
	ETargetDistanceComparisonType_MAX = 3,
};

enum class EAIScalableFloatScalingType : uint8
{
	Disabled                       = 0,
	ReceivedDamageByTarget         = 1,
	EAIScalableFloatScalingType_MAX = 2,
};

enum class ETeleportReason : uint8
{
	AgentNotOnNavmesh              = 0,
	AgentDestinationNotOnNavMesh   = 1,
	AgentStuckInRepetitivePartialPaths = 2,
	AgentBlocked                   = 3,
	Unknown                        = 4,
	ETeleportReason_MAX            = 5,
};

enum class EObstacleType : uint8
{
	IncomingSmashable              = 0,
	BlockingSmashable              = 1,
	BlockingDetectedTrap           = 2,
	Unknown                        = 3,
	Count                          = 3,
	EObstacleType_MAX              = 4,
};

enum class EHarvestResult : uint8
{
	None                           = 0,
	InProgress                     = 1,
	Success                        = 2,
	Fail                           = 3,
	EHarvestResult_MAX             = 4,
};

enum class EReachLocationValidationMode : uint8
{
	None                           = 0,
	Storm                          = 1,
	Leash                          = 2,
	SoftLeash                      = 3,
	EReachLocationValidationMode_MAX = 4,
};

enum class EBlackboardUpdateType : uint8
{
	NoUpdate                       = 0,
	UpdateNow                      = 1,
	UpdateNextTick                 = 2,
	EBlackboardUpdateType_MAX      = 3,
};

enum class EBotControllerClamberStatus : uint8
{
	Invalid                        = 0,
	MoveStarted                    = 1,
	MoveDone                       = 2,
	MoveFailed                     = 3,
	EBotControllerClamberStatus_MAX = 4,
};

enum class EDefensivePlayerStyleSource : uint8
{
	Unknown                        = 0,
	Escape                         = 1,
	MAX                            = 2,
};

enum class ETwoPointSolverRotationA : uint8
{
	PointAToQuerier                = 0,
	QuerierToPointA                = 1,
	PointAToQuerierWithRandomOffset = 2,
	QuerierToPointAWithRandomOffset = 3,
	Custom                         = 4,
	ETwoPointSolverRotationA_MAX   = 5,
};

enum class EFortIntensityCurveSequenceType : uint8
{
	Sequence                       = 0,
	Loop                           = 1,
	Random                         = 2,
	Max_None                       = 3,
	EFortIntensityCurveSequenceType_MAX = 4,
};

enum class EFortNavLinkPattern : uint8
{
	Floor                          = 0,
	Stairs                         = 1,
	Roof                           = 2,
	Manual                         = 3,
	EFortNavLinkPattern_MAX        = 4,
};

enum class EFortNamedNavmesh : uint8
{
	Husk                           = 0,
	Smasher                        = 1,
	MAX                            = 2,
};

enum class EPathObstacleAction : uint8
{
	Melee                          = 0,
	Ignore                         = 1,
	AbortMoveAsFailed              = 2,
	FinishMoveAsSucceeded          = 3,
	EPathObstacleAction_MAX        = 4,
};

enum class EPathUndermineEvent : uint8
{
	Predicted                      = 0,
	Started                        = 1,
	Finished                       = 2,
	EPathUndermineEvent_MAX        = 3,
};

enum class EWardAffectType : uint8
{
	AffectsBothStartAndEndPoints   = 0,
	AffectsOnlyStartPoints         = 1,
	AffectsOnlyEndPoints           = 2,
	EWardAffectType_MAX            = 3,
};

enum class ETagGoalScoringCategory : uint8
{
	Ignore                         = 0,
	HighInterest                   = 1,
	NumCategories                  = 2,
	ETagGoalScoringCategory_MAX    = 3,
};

enum class EBoundingBoxSlotDirectionCalculation : uint8
{
	Auto                           = 0,
	FaceWall                       = 1,
	FaceAwayFromWall               = 2,
	FaceCenter                     = 3,
	EBoundingBoxSlotDirectionCalculation_MAX = 4,
};

enum class EFortAreaFlag : uint8
{
	Default                        = 0,
	Obstacle                       = 1,
	Smashable                      = 2,
	Unwalkable                     = 3,
	Interactable                   = 4,
	EFortAreaFlag_MAX              = 5,
};

enum class EInBoundsState : uint8
{
	NoBounds                       = 0,
	NotInBounds                    = 1,
	InBounds                       = 2,
	EInBoundsState_MAX             = 3,
};

enum class ENavPathRendererStatus : uint8
{
	INVALID                        = 0,
	CALCULATING                    = 1,
	SUCCESS                        = 2,
	FAILED                         = 3,
	ENavPathRendererStatus_MAX     = 4,
};

enum class EFortThreatDeactivationType : uint8
{
	Off                            = 0,
	Dormant                        = 1,
	EFortThreatDeactivationType_MAX = 2,
};

enum class EFortCreativePatrolPathGroup : uint8
{
	Group_None                     = 0,
	Group_1                        = 1,
	Group_2                        = 2,
	Group_3                        = 3,
	Group_4                        = 4,
	Group_5                        = 5,
	Group_6                        = 6,
	Group_7                        = 7,
	Group_8                        = 8,
	Group_9                        = 9,
	Group_10                       = 10,
	Group_11                       = 11,
	Group_12                       = 12,
	Group_13                       = 13,
	Group_14                       = 14,
	Group_15                       = 15,
	Group_16                       = 16,
	Group_17                       = 17,
	Group_18                       = 18,
	Group_19                       = 19,
	Group_20                       = 20,
	Group_21                       = 21,
	Group_22                       = 22,
	Group_23                       = 23,
	Group_24                       = 24,
	Group_25                       = 25,
	Group_26                       = 26,
	Group_27                       = 27,
	Group_28                       = 28,
	Group_29                       = 29,
	Group_30                       = 30,
	Group_31                       = 31,
	Group_32                       = 32,
	Group_33                       = 33,
	Group_34                       = 34,
	Group_35                       = 35,
	Group_36                       = 36,
	Group_37                       = 37,
	Group_38                       = 38,
	Group_39                       = 39,
	Group_40                       = 40,
	Group_41                       = 41,
	Group_42                       = 42,
	Group_43                       = 43,
	Group_44                       = 44,
	Group_45                       = 45,
	Group_46                       = 46,
	Group_47                       = 47,
	Group_48                       = 48,
	Group_49                       = 49,
	Group_50                       = 50,
	Group_51                       = 51,
	Group_52                       = 52,
	Group_53                       = 53,
	Group_54                       = 54,
	Group_55                       = 55,
	Group_56                       = 56,
	Group_57                       = 57,
	Group_58                       = 58,
	Group_59                       = 59,
	Group_60                       = 60,
	Group_61                       = 61,
	Group_62                       = 62,
	Group_63                       = 63,
	Group_64                       = 64,
	Group_65                       = 65,
	Group_66                       = 66,
	Group_67                       = 67,
	Group_68                       = 68,
	Group_69                       = 69,
	Group_70                       = 70,
	Group_71                       = 71,
	Group_72                       = 72,
	Group_73                       = 73,
	Group_74                       = 74,
	Group_75                       = 75,
	Group_76                       = 76,
	Group_77                       = 77,
	Group_78                       = 78,
	Group_79                       = 79,
	Group_80                       = 80,
	Group_81                       = 81,
	Group_82                       = 82,
	Group_83                       = 83,
	Group_84                       = 84,
	Group_85                       = 85,
	Group_86                       = 86,
	Group_87                       = 87,
	Group_88                       = 88,
	Group_89                       = 89,
	Group_90                       = 90,
	Group_91                       = 91,
	Group_92                       = 92,
	Group_93                       = 93,
	Group_94                       = 94,
	Group_95                       = 95,
	Group_96                       = 96,
	Group_97                       = 97,
	Group_98                       = 98,
	Group_99                       = 99,
	Group_100                      = 100,
	Group_MAX                      = 101,
};

enum class EAIBotBuildingTemplate : uint8
{
	SingleWall                     = 0,
	SingleRamp                     = 1,
	SingleRoof                     = 2,
	SingleBrace                    = 3,
	SingleWallWindow               = 4,
	MAX                            = 5,
};

enum class EBotDataOverrideCosmeticMode : uint8
{
	SpecificLoadout                = 0,
	CosmeticLibrary                = 1,
	BotDataOverrideCosmeticMode_MAX = 2,
};

enum class EAILootExcludeListReason : uint8
{
	Invalid                        = 0,
	ExecutionError                 = 1,
	CannotReachLootLocation        = 2,
	OutsideSafeZoneRadius          = 3,
	NoInventorySpace               = 4,
	LootStateUnavailable           = 5,
	PathNotFound                   = 6,
	GoalOffNavmesh                 = 7,
	AgentBlocked                   = 8,
	IsolatedIsland                 = 9,
	UnsupportedItem                = 10,
	Count                          = 11,
	EAILootExcludeListReason_MAX   = 12,
};

enum class EBotMovementState : uint8
{
	None                           = 0,
	InProgress                     = 1,
	Failed_NoPathFound             = 2,
	Failed_Aborted                 = 3,
	Failed_AgentOffNavmesh         = 4,
	Failed_GoalOffNavmesh          = 5,
	Failed_Blocked                 = 6,
	Failed_OffPath                 = 7,
	Failed_Falling                 = 8,
	Success                        = 9,
	Success_Partial                = 10,
	Success_AlreadyAtGoal          = 11,
	EBotMovementState_MAX          = 12,
};

enum class EBotUnstuckSteeringReason : uint8
{
	Unknown                        = 0,
	OffNavMesh                     = 1,
	IsolatedIsland                 = 2,
	EBotUnstuckSteeringReason_MAX  = 3,
};

enum class EExecutionStatus : uint8
{
	ExecutionError                 = 0,
	ExecutionDenied                = 1,
	ExecutionSuccess               = 2,
	ExecutionPending               = 3,
	ExecutionAllowed               = 4,
	EExecutionStatus_MAX           = 5,
};

enum class EFortAthenaAIObjectTrackerQueryOrder : uint8
{
	None                           = 0,
	Distance                       = 1,
	EFortAthenaAIObjectTrackerQueryOrder_MAX = 2,
};

enum class EFortAthenaSmartObjectPriority : uint8
{
	Lowest                         = 0,
	Lower                          = 1,
	Low                            = 2,
	BelowNormal                    = 3,
	Normal                         = 4,
	AboveNormal                    = 5,
	High                           = 6,
	Higher                         = 7,
	Highest                        = 8,
	MIN                            = 0,
	MAX                            = 8,
};

enum class EFortAthenaSmartObjectUrgency : uint8
{
	Low                            = 0,
	Normal                         = 1,
	High                           = 2,
	EFortAthenaSmartObjectUrgency_MAX = 3,
};

enum class EFortAthenaAISpawnerDataComponentTriBool : uint8
{
	Yes                            = 0,
	No                             = 1,
	DoNotModify                    = 2,
	EFortAthenaAISpawnerDataComponentTriBool_MAX = 3,
};

enum class EBehaviorTreeBranches : uint8
{
	CanUseDiving                   = 0,
	CanUseGliding                  = 1,
	CanReactToProjectile           = 2,
	CanReactToTraps                = 3,
	CanAvoidDangerArea             = 4,
	CanBeConverted                 = 5,
	CanPropagateAwareness          = 6,
	CanUseThreatenedBehaviors      = 7,
	CanUseLastKnownPositionBehavior = 8,
	CanUseAlertedBehavior          = 9,
	CanUseSmartObjects             = 10,
	CanReviveDBNOTeammates         = 11,
	CanPlayEmote                   = 12,
	CanConverse                    = 13,
	CanPatrolOnPath                = 14,
	CanPatrolAround                = 15,
	CanTeleportWhenStuck           = 16,
	CanEmoteWhenStuck              = 17,
	Count                          = 18,
	EBehaviorTreeBranches_MAX      = 19,
};

enum class EBehaviorTreeBranchesBitmask : uint8
{
	CanUseDiving                   = 0,
	CanUseGliding                  = 1,
	CanReactToProjectile           = 2,
	CanReactToTraps                = 3,
	CanAvoidDangerArea             = 4,
	CanBeConverted                 = 5,
	CanPropagateAwareness          = 6,
	CanUseThreatenedBehaviors      = 7,
	CanUseLastKnownPositionBehavior = 8,
	CanUseAlertedBehavior          = 9,
	CanUseSmartObjects             = 10,
	CanReviveDBNOTeammates         = 11,
	CanPlayEmote                   = 12,
	CanConverse                    = 13,
	CanPatrolOnPath                = 14,
	CanPatrolAround                = 15,
	CanTeleportWhenStuck           = 16,
	CanEmoteWhenStuck              = 17,
	Count                          = 18,
	EBehaviorTreeBranchesBitmask_MAX = 19,
};

enum class EPatrollingMode : uint8
{
	BackAndForth                   = 0,
	Loop                           = 1,
	StopAtEnd                      = 2,
	EPatrollingMode_MAX            = 3,
};

enum class EDBNOPlayStyle : uint8
{
	Thirsty                        = 0,
	Default                        = 1,
	Passive                        = 2,
	ThristyButPassiveOnPlayers     = 3,
	DefaultButPassiveOnPlayers     = 4,
	EDBNOPlayStyle_MAX             = 5,
};

enum class EStimType : uint8
{
	Seeing                         = 0,
	Seen                           = 1,
	MightHaveSeen                  = 2,
	Hurt                           = 3,
	Heard                          = 4,
	Obstacle                       = 5,
	Enemy                          = 6,
	Unknown                        = 7,
	Count                          = 7,
	EStimType_MAX                  = 8,
};

enum class EPerceptionState : uint8
{
	Threat_Seeing                  = 0,
	Threat_LKP                     = 1,
	Threat_Alerted                 = 2,
	ObstacleIncoming               = 3,
	ObstacleBlockedBy              = 4,
	ObstacleDetectedTrap           = 5,
	Unknown                        = 6,
	Count                          = 6,
	Threat_Count                   = 3,
	EPerceptionState_MAX           = 7,
};

enum class ETrackingOffsetModifierCurve : uint8
{
	Default                        = 0,
	CombatStart                    = 1,
	TargetLowHealth                = 2,
	MAX                            = 3,
};

enum class EPerceptionSoundType : uint8
{
	Default                        = 0,
	Explosion                      = 1,
	ProjectileFlyBy                = 2,
	ProjectileImpact               = 3,
	WeaponFiring                   = 4,
	Building                       = 5,
	MeleeImpact                    = 6,
	MAX                            = 7,
};

enum class ELookAtType : uint8
{
	ScanAround                     = 0,
	Investigate                    = 1,
	HeardSound                     = 2,
	Ambush                         = 3,
	MAX                            = 4,
};

enum class ELeashReturnLocationMode : uint8
{
	Closest                        = 0,
	Random                         = 1,
	ReturnToCenter                 = 2,
	ReturnToCenterAvoidObstacle    = 3,
	ELeashReturnLocationMode_MAX   = 4,
};

enum class EOrientedConstructionBuildingType : uint8
{
	WallX                          = 0,
	WallY                          = 1,
	Floor                          = 2,
	StairsUpX                      = 3,
	StairsUpY                      = 4,
	StairsDownX                    = 5,
	StairsDownY                    = 6,
	Roof                           = 7,
	BraceLeftX                     = 8,
	BraceRightX                    = 9,
	BraceLeftY                     = 10,
	BraceRightY                    = 11,
	WallWindowX                    = 12,
	WallWindowY                    = 13,
	Count                          = 14,
	EOrientedConstructionBuildingType_MAX = 15,
};

enum class EConstructionBuildingType : uint8
{
	Wall                           = 0,
	Floor                          = 1,
	Stairs                         = 2,
	Roof                           = 3,
	Brace                          = 4,
	WallWindow                     = 5,
	Count                          = 6,
	EConstructionBuildingType_MAX  = 7,
};

enum class EAthenaAIServicePOIList : uint8
{
	MainBusDrop                    = 0,
	SecondaryBusDrop               = 1,
	OnGround                       = 2,
	EAthenaAIServicePOIList_MAX    = 3,
};

enum class EAthenaAITrackedZoneType : uint8
{
	Occluder                       = 0,
	Danger                         = 1,
	EAthenaAITrackedZoneType_MAX   = 2,
};

enum class EBotPOIType : uint8
{
	Unknown                        = 0,
	ClusterLoot                    = 1,
	MidMatchObjective              = 2,
	EBotPOIType_MAX                = 3,
};

enum class EBotPOIUsageBitmask : uint8
{
	None                           = 0,
	BotJumpOffBus                  = 1,
	BotNavigation                  = 2,
	EBotPOIUsageBitmask_MAX        = 3,
};

enum class ERatingsEnforcementType : uint8
{
	Default                        = 0,
	IgnoreMaximums                 = 1,
	IgnoreParty                    = 2,
	IgnorePartyMaximum             = 3,
	ERatingsEnforcementType_MAX    = 4,
};

enum class EClampType : uint8
{
	Minimum                        = 0,
	Maximum                        = 1,
	EClampType_MAX                 = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct FortniteAI.DebugMinimapData
struct FDebugMinimapData
{
public:
	bool                                         bIsOverridden;                                     // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7673[0xF];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           DebugMinimapIconBrush;                             // 0x10(0xC0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector2D                             DebugMinimapIconScale;                             // 0xD0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DebugCompassIconBrush;                             // 0xE0(0xC0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector2D                             DebugCompassIconScale;                             // 0x1A0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAI.FortInjectedBehaviorEntry
struct FFortInjectedBehaviorEntry
{
public:
	struct FGameplayTagContainer                 InjectionTags;                                     // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortInjectedBehavior>   InjectedBehavior;                                  // 0x20(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.FortAISpawnerTagQueryInjectedBehavior
struct FFortAISpawnerTagQueryInjectedBehavior
{
public:
	struct FGameplayTagQuery                     SpawnerTagsQuery;                                  // 0x0(0x48)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FFortInjectedBehaviorEntry>    InjectedBehaviors;                                 // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteAI.FortAISpawnGroupUpgradeUIData
struct FFortAISpawnGroupUpgradeUIData
{
public:
	bool                                         bAlwaysDisplayHealthBar;                           // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideHealthBarColor;                           // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7674[0x6];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UTexture2D>             UpgradeIconImage;                                  // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           UpgradeIconTintColor;                              // 0x30(0x14)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                          HealthBarColorOverride;                            // 0x44(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7675[0x4];                                     // Fixing Size After Last Property..
	class FText                                  UpgradeName;                                       // 0x58(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAILODSetting
struct FFortAthenaAILODSetting
{
public:
	bool                                         bIsValid;                                          // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x67 (0x68 - 0x1)
// ScriptStruct FortniteAI.FortAILODSetting_AIEvaluator
struct FFortAILODSetting_AIEvaluator : public FFortAthenaAILODSetting
{
public:
	uint8                                        Pad_7676[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        IntervalMultiplier;                                // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7677[0x8];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        RandomDeviationMultiplier;                         // 0x38(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7678[0x8];                                     // Fixing Size Of Struct..
};

// 0x187 (0x188 - 0x1)
// ScriptStruct FortniteAI.FortAILODSetting_CharacterMovement
struct FFortAILODSetting_CharacterMovement : public FFortAthenaAILODSetting
{
public:
	uint8                                        Pad_7679[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        Interval;                                          // 0x8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RandomDeviation;                                   // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinimumDynamicInterval;                            // 0x58(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaximumDotDifferenceBetweenInputVectors;           // 0x80(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bDisableAvoidance;                                 // 0xA8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bBotsEnableNavWalkingMode;                         // 0xD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bBotsEnablePhysNavWalkingPathFollowingMode;        // 0xF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bSweepWhileNavWalking;                             // 0x120(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bGenerateOverlapInNavWalking;                      // 0x148(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_767A[0x18];                                    // Fixing Size Of Struct..
};

// 0x67 (0x68 - 0x1)
// ScriptStruct FortniteAI.FortAILODSetting_FortWeaponRanged
struct FFortAILODSetting_FortWeaponRanged : public FFortAthenaAILODSetting
{
public:
	uint8                                        Pad_767B[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        Interval;                                          // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_767C[0x8];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        RandomDeviation;                                   // 0x38(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_767D[0x8];                                     // Fixing Size Of Struct..
};

// 0x37 (0x38 - 0x1)
// ScriptStruct FortniteAI.FortAILODSetting_GenericTickingObject
struct FFortAILODSetting_GenericTickingObject : public FFortAthenaAILODSetting
{
public:
	uint8                                        Pad_767E[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        TickMultiplier;                                    // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_767F[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct FortniteAI.FortItemInjectedBehaviorsDataTableRow
struct FFortItemInjectedBehaviorsDataTableRow : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortItemDefinition>    ItemDefinition;                                    // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortInjectedBehaviorEntry>    InjectedBehaviors;                                 // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct FortniteAI.PendingSpawnInfo
struct FPendingSpawnInfo
{
public:
	TSubclassOf<class AFortAIPawn>               PawnClassToSpawn;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SpawnPoint;                                        // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                SpawnSource;                                       // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnedFromExternalSpawner;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortressAIType                   AIType;                                            // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7680[0x6];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 TargetPlayer;                                      // 0x50(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIEncounterInfo*                  EncounterInfo;                                     // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DifficultyLevel;                                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7681[0x4];                                     // Fixing Size After Last Property..
	class UFortAISpawnGroup*                     SpawnGroup;                                        // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SpawnGroupGuid;                                    // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnemyIndexInSpawnGroup;                            // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToSpawn;                                       // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PendingSpawnInfoGuid;                              // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCollision;                                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillBuildingActorsAtSpawnLocation;                // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7682[0x2];                                     // Fixing Size After Last Property..
	float                                        EncounterAILifespan;                               // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScoreMultiplier;                                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugSpawnedAI;                                   // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7683[0x3];                                     // Fixing Size After Last Property..
	TArray<class UFortAbilitySet*>               AbilitySetsToGrantOnSpawn;                         // 0xA8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UFortGameplayModifierItemDefinition*> ModifiersToApplyOnSpawn;                           // 0xB8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FFortAISpawnGroupUpgradeUIData        UpgradeUIData;                                     // 0xC8(0x70)(NativeAccessSpecifierPublic)
	struct FFortAIPawnLootDropData               LootDropData;                                      // 0x138(0x10)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteAI.MMRSpawningBracketBaseDataTableRow
struct FMMRSpawningBracketBaseDataTableRow : public FTableRowBase
{
public:
	int32                                        MMRBracketLow;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MMRBracketHigh;                                    // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.MMRSpawningBaseRuntimeInfo
struct FMMRSpawningBaseRuntimeInfo
{
public:
	uint8                                        Pad_7684[0x10];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.MMRSpawningDataTableInfo
struct FMMRSpawningDataTableInfo
{
public:
	TSubclassOf<class UFortAthenaAISpawnerData>  AISpawnerData;                                     // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Skill;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawingItemIndex;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7685[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.MMRPhaseSpawningDataTableInfo
struct FMMRPhaseSpawningDataTableInfo
{
public:
	int32                                        GamePhaseIndexToSpawn;                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7686[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FMMRSpawningDataTableInfo>     SpawningItems;                                     // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct FortniteAI.MMRSpawningBracketBotDataTableRow
struct FMMRSpawningBracketBotDataTableRow : public FMMRSpawningBracketBaseDataTableRow
{
public:
	TArray<struct FMMRPhaseSpawningDataTableInfo> PhaseSpawningItems;                                // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.AIHotSpotSlotInfo
struct FAIHotSpotSlotInfo
{
public:
	class AAIHotSpot*                            HotSpot;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7687[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.AthenaMemoryBudgetInterfaces
struct FAthenaMemoryBudgetInterfaces
{
public:
	uint8                                        Pad_7688[0x10];                                    // Fixing Size Of Struct..
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct FortniteAI.ClientAILODMovementCompOptimizationConfiguration
struct FClientAILODMovementCompOptimizationConfiguration
{
public:
	struct FScalableFloat                        bEnable;                                           // 0x0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bEnableSimulationDataOptimizations;                // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinDistanceToApplyFrameSkippingWhenVisible;        // 0x50(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FrameSkippingOnLOD1;                               // 0x78(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bRequireHittingPawnThresholdForLOD1;               // 0xA0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FrameSkippingOnLOD2;                               // 0xC8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bRequireHittingPawnThresholdForLOD2;               // 0xF0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FrameSkippingOnLowestLOD;                          // 0x118(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FrameSkippingOnLowestLODWithSmallViewAngleRendered; // 0x140(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FrameSkippingOnLowestLODWithSmallViewAngleNotRendered; // 0x168(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FrameSkippingInvisible;                            // 0x190(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bForceInvisibleValueWhenNotRenderedForThreshold;   // 0x1B8(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x2F0 (0x2F0 - 0x0)
// ScriptStruct FortniteAI.ClientAILODSettings
struct FClientAILODSettings
{
public:
	struct FScalableFloat                        ScoreMultiplier;                                   // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PreloadingPriorityOverride;                        // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        bSupportCharacterMovementOptimization;             // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FClientAILODMovementCompOptimizationConfiguration MovementCompOptimizationConfiguration;             // 0x78(0x1E0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        bAIPawnOnlyTickMeshWhenRendered;                   // 0x258(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        bAIPawnApplyEffectOptimizations;                   // 0x280(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7689[0x48];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.DroppingAgentData
struct FDroppingAgentData
{
public:
	class AAthenaAIController*                   AIController;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABuildingActor*                        MovementBase;                                      // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_768A[0x8];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAI.AISpawnCountInfo
struct FAISpawnCountInfo
{
public:
	uint8                                        Pad_768B[0x20];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.PendingRequestManager
struct FPendingRequestManager
{
public:
	uint8                                        Pad_768C[0x30];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.GoalSelectionQueryInfo
struct FGoalSelectionQueryInfo
{
public:
	class UEnvQuery*                             GoalSelectionQuery;                                // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredGameplayTags;                              // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAI.AICustomTargetConfiguration
struct FAICustomTargetConfiguration
{
public:
	struct FVector                               Offset;                                            // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ValidRequestTypes;                                 // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_768D[0x7];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAI.IntensityContribution
struct FIntensityContribution
{
public:
	enum class EFortCombatFactors                CombatFactor;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorFactor             ContributingAIDirectorFactor;                      // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_768E[0x2];                                     // Fixing Size After Last Property..
	float                                        MaxContribution;                                   // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyContributionByCompletionPercentage;         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_768F[0x7];                                     // Fixing Size After Last Property..
	struct FCurveTableRowHandle                  CompletionPercentageInitialMultiplier;             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  CompletionPercentageToStartReducingMultiplier;     // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  CompletionPercentageToStopReducingMultiplier;      // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyByNumberOfCriticalEncounterGoals;           // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7690[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.IntensityData
struct FIntensityData
{
public:
	TArray<struct FIntensityContribution>        ContributingFactors;                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ContributionsTotal;                                // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7691[0x4];                                     // Fixing Size After Last Property..
	TArray<class UBuildingEditModeMetadata*>     ExceptionEditModes;                                // 0x18(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        ExceptionEditModeWeight;                           // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7692[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAI.UtilityTypeFloatPair
struct FUtilityTypeFloatPair
{
public:
	enum class EFortAIUtility                    Utility;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7693[0x3];                                     // Fixing Size After Last Property..
	float                                        Value;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAI.UtilityContribution
struct FUtilityContribution
{
public:
	float                                        MaxContribution;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCombatFactors                ContributingFactor;                                // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorFactor             ContributingAIDirectorFactor;                      // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFactorContributionType       ContributionType;                                  // 0x6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7694[0x1];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.UtilityData
struct FUtilityData
{
public:
	TArray<struct FUtilityContribution>          ContributingFactors;                               // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ContributionsTotal;                                // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyRecentSelectionPenalty;                      // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7695[0x3];                                     // Fixing Size After Last Property..
	float                                        RecentlySelectedPenaltyPercentage;                 // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenaltyFallOffRate;                                // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugGraphName;                                    // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DebugGraphColor;                                   // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterPIDControllerSettings
struct FFortAIEncounterPIDControllerSettings
{
public:
	struct FCurveTableRowHandle                  ProportionalGain;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  IntegralGain;                                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  DerivativeGain;                                    // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterPIDController
struct FFortAIEncounterPIDController
{
public:
	float                                        ProportionalGain;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntegralGain;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DerivativeGain;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7696[0x5C];                                    // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.FortPlayerPerformanceEstimateSettings
struct FFortPlayerPerformanceEstimateSettings
{
public:
	struct FCurveTableRowHandle                  PlayerPerformanceEstimateTransformMin;             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  PlayerPerformanceEstimateTransformOrigin;          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  PlayerPerformanceEstimateTransformMax;             // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EncounterPlayerPerformanceWeight;                  // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousWavePlayerPerformanceWeight;               // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CampaignPlayerPerformanceWeight;                   // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7697[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.FortEncounterPawnNumberCaps
struct FFortEncounterPawnNumberCaps
{
public:
	bool                                         bApplyPawnNumberCaps;                              // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7698[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FCurveTableRowHandle>          PawnCapsPerPlayerCount;                            // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterSpawnGroupCap
struct FFortAIEncounterSpawnGroupCap
{
public:
	struct FCurveTableRowHandle                  MinSpawnGroupNumberCap;                            // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  MaxSpawnGroupNumberCap;                            // 0x10(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterSpawnGroupCapsCategory
struct FFortAIEncounterSpawnGroupCapsCategory
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bApplyGroupPopulationCurveToCategoryMax;           // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7699[0x7];                                     // Fixing Size After Last Property..
	struct FCurveTableRowHandle                  InitialSpawnGroupAvailabilityDelaySeconds;         // 0x50(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  SpawnGroupAvailabilityDelaySeconds;                // 0x60(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     UnlockingTagQuery;                                 // 0x70(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterSpawnGroupCap> SpawnGroupCapsPerPlayerCount;                      // 0xB8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        InitialSpawnGroupAvailabilityTime;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NumActiveCategorySpawnGroups;                      // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                SpawnGroupAvailabilityTimes;                       // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSpawnGroupAvailable;                            // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_769A[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               CategorySource;                                    // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_769B[0x50];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterSpawnGroupCapsProfile
struct FFortAIEncounterSpawnGroupCapsProfile
{
public:
	struct FGameplayTagContainer                 EncounterTypeTags;                                 // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterSpawnGroupCapsCategory> PopulationCategories;                              // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterSpawnPointsProfile
struct FFortAIEncounterSpawnPointsProfile
{
public:
	struct FGameplayTagContainer                 EncounterTypeTags;                                 // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCurveTableRowHandle>          MaxSpawnPointsPerPlayerCount;                      // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCurveTableRowHandle>          MinSpawnPointsPerPlayerCount;                      // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.FortAIPawnUpgradeProbability
struct FFortAIPawnUpgradeProbability
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  UpgradeProbability;                                // 0x48(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteAI.FortAISpawnGroupUpgradeData
struct FFortAISpawnGroupUpgradeData
{
public:
	TSubclassOf<class UFortAISpawnGroupUpgrade>  SpawnGroupUpgrade;                                 // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAISpawnGroupUpgradeProbabilities> UpgradeProbabilities;                              // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAISpawnGroupCapsCategorySet> SpawnGroupCapsCategories;                          // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     EncounterTagRequirementsQuery;                     // 0x18(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterPawnDifficultyLevelModifier
struct FFortAIEncounterPawnDifficultyLevelModifier
{
public:
	struct FGameplayTagQuery                     EncounterTagRequirementsQuery;                     // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  DifficultyLevelModifierCurve;                      // 0x48(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.FortPendingStoppedEncounterData
struct FFortPendingStoppedEncounterData
{
public:
	class UFortAIEncounterInfo*                  Encounter;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortObjectiveStatus              ObjectiveStatus;                                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDestroyAI;                                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEncounterCompletedSuccessfully;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_769C[0x5];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteAI.FortEncounterGroupLimitData
struct FFortEncounterGroupLimitData
{
public:
	int32                                        DesiredPawnNumCap;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingDesiredLimit;                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentEncounterLimit;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterRequirements
struct FFortAIEncounterRequirements
{
public:
	enum class EFortMissionType                  AssociatedMissionType;                             // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_769D[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     TagQuery;                                          // 0x8(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct FortniteAI.FortAIBaseLootDropRow
struct FFortAIBaseLootDropRow : public FTableRowBase
{
public:
	int32                                        Priority;                                          // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemDropChance;                                    // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WorldItemLootTierGroup;                            // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WorldItemInstancedLootTierGroup;                   // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AccountItemLootTierGroup;                          // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_769E[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 AITagsContainer;                                   // 0x20(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct FortniteAI.FortAILootDropModifierRow
struct FFortAILootDropModifierRow : public FTableRowBase
{
public:
	int32                                        Priority;                                          // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemDropChanceMultiplier;                          // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WorldItemLootTierGroup;                            // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_769F[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 AITagsContainer;                                   // 0x18(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteAI.FortAILootDropModifiers
struct FFortAILootDropModifiers
{
public:
	struct FFortAIEncounterRequirements          Requirements;                                      // 0x0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           LootDropModifierRows;                              // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.LODAIUpdateInfo
struct FLODAIUpdateInfo
{
public:
	uint8                                        Pad_76A0[0x18];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterQueryData
struct FFortAIEncounterQueryData
{
public:
	TArray<struct FVector>                       QueryLocations;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        QueryActors;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteAI.PlayerLODViewConeConfig
struct FPlayerLODViewConeConfig
{
public:
	struct FScalableFloat                        ObserverVisionAngleDeg;                            // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ViewConeMaxRadius;                                 // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AlwaysVisibleRadius;                               // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EFortAILODLevel                   FortAILODLevel;                                    // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A1[0x7];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteAI.PlayerLODViewConeHysteresisConfig
struct FPlayerLODViewConeHysteresisConfig
{
public:
	struct FScalableFloat                        AdditionalObserverVisionAngleDeg;                  // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AdditionalRadius;                                  // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.FortAIDirectorPerLODConfig
struct FFortAIDirectorPerLODConfig
{
public:
	struct FScalableFloat                        MaxNPCCosts;                                       // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EFortAILODLevel                   FortAILODLevel;                                    // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A2[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.AIDirectorEventData
struct FAIDirectorEventData
{
public:
	enum class EFortAIDirectorEvent              Event;                                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A3[0x7];                                     // Fixing Size After Last Property..
	struct FCurveTableRowHandle                  DataMax;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  CoolDownRate;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorEventContribution  ContributionType;                                  // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorEventParticipant   OwnerParticipantType;                              // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A4[0x6];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteAI.FortAIDirectorFactorContribution
struct FFortAIDirectorFactorContribution
{
public:
	enum class EFortAIDirectorEvent              AIDirectorEvent;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A5[0x3];                                     // Fixing Size After Last Property..
	float                                        MaxContribution;                                   // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorFactorContribution ContributionType;                                  // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A6[0x3];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAI.FortAIDirectorFactorData
struct FFortAIDirectorFactorData
{
public:
	enum class EFortAIDirectorFactor             AIDirectorFactor;                                  // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A7[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFortAIDirectorFactorContribution> ContributingEvents;                                // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A8[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAI.SpawnGroupProgression
struct FSpawnGroupProgression
{
public:
	class UFortAISpawnGroup*                     SpawnGroup;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.AIEncounterSpawnGroupWeights
struct FAIEncounterSpawnGroupWeights
{
public:
	uint8                                        Pad_76A9[0x18];                                    // Fixing Size Of Struct..
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteAI.FortSpawnPointsPercentageCurve
struct FFortSpawnPointsPercentageCurve : public FTableRowBase
{
public:
	class UCurveTable*                           SpawnPointsPercentageCurveTable;                   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  SpawnPointsPercentageCurveTableRow;                // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxRampTime;                                       // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct FortniteAI.FortIntensityCurve
struct FFortIntensityCurve : public FTableRowBase
{
public:
	class UCurveTable*                           IntensityCurveTable;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  IntensityCurveTableRow;                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LowPlayerPerformancePeakIntensityThreshold;        // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NormalPlayerPerformancePeakIntensityThreshold;     // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HighPlayerPerformancePeakIntensityThreshold;       // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxRampTime;                                       // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FadeEndIntensityThreshold;                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartIntensityOffsetFloor;                         // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndIntensityOffsetFloor;                           // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartIntensityOffsetCeiling;                       // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndIntensityOffsetCeiling;                         // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.CurrentIntensityAnalyticsBucket
struct FCurrentIntensityAnalyticsBucket
{
public:
	uint8                                        Pad_76AA[0x38];                                    // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteAI.FortCurveSequenceInstanceInfo
struct FFortCurveSequenceInstanceInfo
{
public:
	uint8                                        Pad_76AB[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0x10 - 0x4)
// ScriptStruct FortniteAI.FortSpawnPointsPercentageCurveSequenceInstanceInfo
struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
public:
	uint8                                        Pad_76AC[0x4];                                     // Fixing Size After Last Property..
	class UFortSpawnPointsPercentageCurveSequence* SpawnPointsPercentageCurveSequence;                // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0x10 - 0x4)
// ScriptStruct FortniteAI.FortIntensityCurveSequenceInstanceInfo
struct FFortIntensityCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
public:
	uint8                                        Pad_76AD[0x4];                                     // Fixing Size After Last Property..
	class UFortIntensityCurveSequence*           IntensityCurveSequence;                            // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAI.FortAIPawnUpgradeData
struct FFortAIPawnUpgradeData
{
public:
	struct FCurveTableRowHandle                  SpawnPointsMultiplierCurve;                        // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCurveTableRowHandle                  LifespanMultiplierCurve;                           // 0x10(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCurveTableRowHandle                  ScoreMultiplierCurve;                              // 0x20(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortGameplayModifierItemDefinition*   ModifierDefinition;                                // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortGameplayModifierItemDefinition*> AdditionalModifiers;                               // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct FortniteAI.SpawnGroupInstanceInfo
struct FSpawnGroupInstanceInfo
{
public:
	class UFortAISpawnGroup*                     SpawnGroup;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumActiveAlive;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalGroupCost;                                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnPointsUsed;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumEngaged;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadyToSpawn;                                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFinishedSpawning;                                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76AE[0x2];                                     // Fixing Size After Last Property..
	struct FGuid                                 GroupGuid;                                         // 0x1C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnemySpawnDataIndex;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSelected;                                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NextEnemyToSpawnIndex;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UpgradeTags;                                       // 0x38(0x20)(NativeAccessSpecifierPublic)
	struct FFortAISpawnGroupUpgradeUIData        UpgradeUIData;                                     // 0x58(0x70)(NativeAccessSpecifierPublic)
	TArray<struct FFortAIPawnUpgradeData>        PawnUpgrades;                                      // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortGameplayModifierItemDefinition*> ModifiersForAllPawns;                              // 0xD8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class AFortAIPawn*>                   PawnList;                                          // 0xE8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class AFortAIPawn*>                   LifespanExpiredList;                               // 0xF8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteAI.FortSpawnAIRequest
struct FFortSpawnAIRequest
{
public:
	struct FGuid                                 SpawnGroupInstanceGuid;                            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnemyIndex;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76AF[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               SpawnLocation;                                     // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                SpawnPoint;                                        // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortAbilitySet*>               AbilitySetsToGrantOnSpawn;                         // 0x50(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCollisionWhenSpawning;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B0[0x3];                                     // Fixing Size After Last Property..
	float                                        SpawnDelay;                                        // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteAI.FortAISpawnerData
struct FFortAISpawnerData
{
public:
	struct FGuid                                 SpawnGroupInstanceGuid;                            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSpawnAIRequest                   ReservedSpawnRequest;                              // 0x10(0x68)(NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteAI.FortEncounterAIDirectorFactor
struct FFortEncounterAIDirectorFactor
{
public:
	float                                        CurrentValue;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedPeriodValue;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalPeriodTime;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.EncounterEnvironmentQueryInstance
struct FEncounterEnvironmentQueryInstance
{
public:
	struct FEncounterEnvironmentQueryInfo        EnvironmentQueryInfo;                              // 0x0(0x28)(NativeAccessSpecifierPublic)
	int32                                        QueryID;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsWaitingForQueryResults;                         // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterDirection           ChosenDirection;                                   // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B1[0x2];                                     // Fixing Size After Last Property..
	TArray<struct FVector>                       QueryLocations;                                    // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class ABuildingRift>>  FoundRifts;                                        // 0x40(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        NumTimesUsed;                                      // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B2[0x4];                                     // Fixing Size Of Struct..
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterWaveProgressEstimation
struct FFortAIEncounterWaveProgressEstimation
{
public:
	float                                        SectionProgressEstimate;                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectionStartTime;                                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastWaveProgressUpdateTime;                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeakAndFadeWavePercentage;                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAdjustmentPerSecond;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIWaveProgressSection        CurrentSection;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B3[0x3];                                     // Fixing Size After Last Property..
	int32                                        NumberOfWaveSegments;                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.FortGoalActorEncounterDataManagerPair
struct FFortGoalActorEncounterDataManagerPair
{
public:
	class AActor*                                GoalActor;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortAIDirectorDataManager*            EncounterDataManager;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterRift
struct FFortAIEncounterRift
{
public:
	int32                                        QueryID;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B4[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               RiftLocation;                                      // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABuildingRift*                         RiftActor;                                         // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortRiftReservationHandle            RiftReservationHandle;                             // 0x28(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B5[0x4];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterSpawnArea
struct FFortAIEncounterSpawnArea
{
public:
	TArray<struct FEncounterEnvironmentQueryInstance> QueryInstances;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterRift>          PendingRifts;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterRift>          Rifts;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       UsedRiftLocations;                                 // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortPathCostEstimator*>        PathEstimators;                                    // 0x40(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsingFallbackQuery;                               // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterSpawnLocationManagementMode SpawnLocationManagementMode;                       // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B6[0x5];                                     // Fixing Size Of Struct..
};

// 0x130 (0x130 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterRiftManagerInitializationData
struct FFortAIEncounterRiftManagerInitializationData
{
public:
	class UFortAIEncounterInfo*                  EncounterInfo;                                     // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortEncounterSettings                EncounterSettings;                                 // 0x8(0xC0)(NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        CurrentEnvironmentQueryInfo;                       // 0xC8(0x28)(NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        FallbackEnvironmentQueryInfo;                      // 0xF0(0x28)(NativeAccessSpecifierPublic)
	TSubclassOf<class ABuildingRift>             RiftClassTemplate;                                 // 0x118(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRiftsToUse;                                     // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRiftsToUse;                                     // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateIntervalTimeSeconds;                         // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B7[0x4];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAI.FortAIEncounterQueryDirectionTracker
struct FFortAIEncounterQueryDirectionTracker
{
public:
	bool                                         bHasTriedPreviousDirections;                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76B8[0x7];                                     // Fixing Size After Last Property..
	TArray<enum class EFortEncounterDirection>   PreviousQueryDirections;                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EFortEncounterDirection>   ChosenDirections;                                  // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EFortEncounterDirection>   FailedDirections;                                  // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EFortEncounterDirection>   AvailableDirections;                               // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.FortAIGoalInfo
struct FFortAIGoalInfo
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Location;                                          // 0x8(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bActorAlwaysPerceived;                             // 0x20(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76B9[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.AIDiscouragedGoalTimer
struct FAIDiscouragedGoalTimer
{
public:
	struct FFortAIGoalInfo                       DiscouragedGoalInfo;                               // 0x0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	double                                       ExpirationTime;                                    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfTimesMarkedForDiscouragement;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76BA[0x4];                                     // Fixing Size Of Struct..
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct FortniteAI.AIAssignmentInfo
struct FAIAssignmentInfo
{
public:
	TWeakObjectPtr<class UFortAIAssignment>      CurrentAssignment;                                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortAIGoalInfo                       CurrentGoal;                                       // 0x8(0x28)(NoDestructor, NativeAccessSpecifierPrivate)
	float                                        TimeCurrentGoalWasChosen;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeExitedLastAssignmentOfType[0x4];               // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortAIAssignment>      PreviousAssignment;                                // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76BB[0x4];                                     // Fixing Size After Last Property..
	struct FFortAIGoalInfo                       PreviousGoal;                                      // 0x50(0x28)(NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bWaitingForQueryResponse;                          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSuppressGoalUpdates;                              // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReportEnemyGoalSelection;                         // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76BC[0x7D];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.FortAIPawnMaterialDefinition
struct FFortAIPawnMaterialDefinition
{
public:
	TSoftObjectPtr<class UMaterialInterface>     Material;                                          // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireDynamicInstance;                           // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76BD[0x7];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteAI.FortAIPawnVariantDefinition
struct FFortAIPawnVariantDefinition
{
public:
	TSubclassOf<class AFortAIPawn>               PawnClass;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  VariantWeightCurve;                                // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentWeight;                                     // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76BE[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     RequiredTagsQuery;                                 // 0x20(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteAI.FortVariantSpawnPoints
struct FFortVariantSpawnPoints : public FTableRowBase
{
public:
	int32                                        BudgetPoints;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76BF[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.SpawnGroupEnemy
struct FSpawnGroupEnemy
{
public:
	TSubclassOf<class UFortAIPawnVariant>        EnemyVariantClass;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideVariantSpawnPointValue;                   // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76C0[0x3];                                     // Fixing Size After Last Property..
	int32                                        SpawnValue;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.FortSpawnGroupEncounterTypeData
struct FFortSpawnGroupEncounterTypeData
{
public:
	struct FGameplayTagContainer                 EncounterTypeTags;                                 // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  MaxGroupCategoryPopulationDensityCurve;            // 0x20(0x10)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  RespawnDelayCurve;                                 // 0x30(0x10)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.FortAIPawnUpgrade
struct FFortAIPawnUpgrade
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAIPawnUpgradeData>        PawnUpgradeDataPerPlayerCount;                     // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.FortAIAssignmentIdentifier
struct FFortAIAssignmentIdentifier
{
public:
	enum class EAssignmentType                   AssignmentType;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76C1[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 AssignmentGameplayTags;                            // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EFortTeam                         AssignmentTeam;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76C2[0x7];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteAI.BuildingActorNavArea
struct FBuildingActorNavArea
{
public:
	int32                                        AreaBits;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAI.FortNavLinkPattern
struct FFortNavLinkPattern
{
public:
	int32                                        PatternBits;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WildcardBits;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct FortniteAI.AIHotSpotUseInfo
struct FAIHotSpotUseInfo : public FAIHotSpotSlotInfo
{
public:
	uint8                                        Pad_76C3[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.DistanceToTargetComparison
struct FDistanceToTargetComparison
{
public:
	bool                                         bUseOverriddenValue;                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76C4[0x3];                                     // Fixing Size After Last Property..
	float                                        OverriddenValue;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DistanceDataTags;                                  // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUseAddedOffset;                                   // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76C5[0x3];                                     // Fixing Size After Last Property..
	float                                        AddedOffset;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EArithmeticKeyOperation           Operator;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETargetDistanceComparisonType     ComparisonType;                                    // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76C6[0x6];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.AIScalableFloat
struct FAIScalableFloat
{
public:
	struct FScalableFloat                        ScalableFloat;                                     // 0x0(0x28)(Edit, NativeAccessSpecifierPrivate)
	enum class EAIScalableFloatScalingType       ScalingType;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76C7[0xC];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.FortBotInventoryInfo
struct FFortBotInventoryInfo
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortWorldItem*                        FortItem;                                          // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76C8[0x18];                                    // Fixing Size Of Struct..
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteAI.FortAthenaAIBotNameDataTableRow
struct FFortAthenaAIBotNameDataTableRow : public FTableRowBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UniqueId;                                          // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIBotNameRegionData
struct FFortAthenaAIBotNameRegionData
{
public:
	class FString                                RegionId;                                          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             NameDataTable;                                     // 0x10(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.FortInstensityCurveSequenceProgression
struct FFortInstensityCurveSequenceProgression
{
public:
	class UFortIntensityCurveSequence*           CurveSequence;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  SelectionWeight;                                   // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x1E8 - 0x0)
// ScriptStruct FortniteAI.MetaNavCachedEntry
struct FMetaNavCachedEntry
{
public:
	uint8                                        Pad_76C9[0x1E8];                                   // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAI.ThreatGridIndex
struct FThreatGridIndex
{
public:
	int32                                        X;                                                 // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x7C (0x88 - 0xC)
// ScriptStruct FortniteAI.ThreatLocationInfo
struct FThreatLocationInfo : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_76CA[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CloudLocation;                                     // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  ThreatVolume;                                      // 0x28(0x38)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AFortThreatVisualsManager*             ThreatVisualsManager;                              // 0x60(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AThreatCloud>           CloudActor;                                        // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76CB[0x1];                                     // Fixing Size After Last Property..
	bool                                         bThreatActivated;                                  // 0x71(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortThreatDeactivationType       DeactivationType;                                  // 0x72(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76CC[0x15];                                    // Fixing Size Of Struct..
};

// 0x10 (0x118 - 0x108)
// ScriptStruct FortniteAI.ThreatLocationArray
struct FThreatLocationArray : public FFastArraySerializer
{
public:
	TArray<struct FThreatLocationInfo>           Locations;                                         // 0x108(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x5C (0x68 - 0xC)
// ScriptStruct FortniteAI.StormWind
struct FStormWind : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_76CD[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Location;                                          // 0x10(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x28(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortThreatVisualsManager*             ThreatVisualsManager;                              // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortAIEncounterInfo*>          Encounters;                                        // 0x50(0x10)(ZeroConstructor, Transient, RepSkip, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FFortWindImpulseHandle                WindHandle;                                        // 0x60(0x4)(Transient, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_76CE[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x118 - 0x108)
// ScriptStruct FortniteAI.StormWindArray
struct FStormWindArray : public FFastArraySerializer
{
public:
	TArray<struct FStormWind>                    StormWinds;                                        // 0x108(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAI.GoalUpdateSuppressionHandle
struct FGoalUpdateSuppressionHandle
{
public:
	uint8                                        Pad_76CF[0x8];                                     // Fixing Size Of Struct..
};

// 0x10 (0x38 - 0x28)
// ScriptStruct FortniteAI.FortAIGoal
struct FFortAIGoal : public FFortAIGoalInfo
{
public:
	uint8                                        Pad_76D0[0x10];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.GoalSelectionCriteria
struct FGoalSelectionCriteria
{
public:
	TSoftObjectPtr<class UEnvQuery>              GoalSelectionQuery;                                // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAI.EncounterGoalSelectionTableEntry
struct FEncounterGoalSelectionTableEntry
{
public:
	struct FGameplayTagContainer                 RequiredGameplayTags;                              // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGoalSelectionCriteria                GoalSelectionCriteria;                             // 0x20(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteAI.PawnGoalSelectionCriteria
struct FPawnGoalSelectionCriteria
{
public:
	struct FGameplayTagContainer                 IncludeEnemiesWithTags;                            // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ExcludeEnemiesWithTags;                            // 0x20(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FGoalSelectionCriteria>        GoalSelectionCriteria;                             // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteAI.PawnGoalSelectionTableEntry
struct FPawnGoalSelectionTableEntry
{
public:
	struct FGameplayTagContainer                 RequiredGameplayTags;                              // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FPawnGoalSelectionCriteria            PawnGoalSelectionCriteria;                         // 0x20(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.AIHotSpotSlotConfig
struct FAIHotSpotSlotConfig
{
public:
	struct FVector                               Offset;                                            // 0x0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x18(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortHotSpotSlot                  SlotType;                                          // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76D1[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.BuildingActorHotSpotDirection
struct FBuildingActorHotSpotDirection
{
public:
	class UAIHotSpotConfig*                      HotSpotConfig;                                     // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMirrorX : 1;                                      // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMirrorY : 1;                                      // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_3FB : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_76D2[0x3];                                     // Fixing Size After Last Property..
	enum class EFortHotSpotDirection             Direction;                                         // 0x24(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHotspotTypeConfigMode            TypeConfigUsage;                                   // 0x25(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76D3[0x2];                                     // Fixing Size Of Struct..
};

// 0x18 (0x28 - 0x10)
// ScriptStruct FortniteAI.AutoAcquireSlot
struct FAutoAcquireSlot : public FAIHotSpotSlotInfo
{
public:
	uint8                                        Pad_76D4[0x18];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.NavAgentData
struct FNavAgentData
{
public:
	class FName                                  AgentName;                                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76D5[0x4];                                     // Fixing Size After Last Property..
	struct FCurveTableRowHandle                  BuildingActorHealthToNavAreaStrengthHandle;        // 0x8(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  PlayerBuiltBuildingActorHealthToNavAreaStrengthHandle; // 0x18(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.UpdatedNavMeshTiles
struct FUpdatedNavMeshTiles
{
public:
	class AAthenaNavMesh*                        NavMesh;                                           // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76D6[0x10];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.NavMeshDetectedInfo
struct FNavMeshDetectedInfo
{
public:
	class AAthenaNavMesh*                        NavMesh;                                           // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76D7[0x28];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAI.BoxNavInvoker
struct FBoxNavInvoker
{
public:
	class AAthenaNavInvokerBox*                  Invoker;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76D8[0x18];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.NavDataSetVariantSettings
struct FNavDataSetVariantSettings
{
public:
	TSoftObjectPtr<class UWorld>                 Level;                                             // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       OceanFloodLevel;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76D9[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteAI.OverriddenSupportedAgentsByReleaseVersion
struct FOverriddenSupportedAgentsByReleaseVersion
{
public:
	struct FFortReleaseVersion                   StartVersion;                                      // 0x0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortReleaseVersion                   EndVersion;                                        // 0x4(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                     OverriddenSupportedAgentsMask;                     // 0x8(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.PathRendererDetails
struct FPathRendererDetails
{
public:
	TArray<struct FVector>                       PathPoints;                                        // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	enum class ENavPathRendererStatus            PathStatus;                                        // 0x10(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76DA[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.PathRendererInfo
struct FPathRendererInfo
{
public:
	FInterfaceProperty_                          PathRendererInterface;                             // 0x0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76DB[0x18];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.ClimbLinkData
struct FClimbLinkData
{
public:
	uint8                                        Pad_76DC[0x28];                                    // Fixing Size After Last Property..
	uint32                                       UniqueLinkId;                                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76DD[0x4];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.WeightedAIPerk
struct FWeightedAIPerk
{
public:
	TSubclassOf<class UFortAIPerkBase>           PerkClass;                                         // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        RandomWeight;                                      // 0x8(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.PerkAvailabilityContainer
struct FPerkAvailabilityContainer
{
public:
	TArray<struct FWeightedAIPerk>               AvailablePerks;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        DesiredPerkCount;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76DE[0x4];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.FortAIRuntimePerkInfo
struct FFortAIRuntimePerkInfo
{
public:
	uint8                                        Pad_76DF[0x40];                                    // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.FortMoveConfig
struct FFortMoveConfig
{
public:
	uint8                                        Pad_76E0[0x28];                                    // Fixing Size After Last Property..
	class AActor*                                FocusTarget;                                       // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AFortPawn>                 PushPawnClassOnBump;                               // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIBotBuildingQueue
struct FFortAthenaAIBotBuildingQueue
{
public:
	uint8                                        Pad_76E1[0x30];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIFormationSlotRuntime
struct FFortAthenaAIFormationSlotRuntime
{
public:
	struct FVector                               LocalLocation;                                     // 0x0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             UserPawn;                                          // 0x18(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct FortniteAI.FortPingInfo
struct FFortPingInfo
{
public:
	uint8                                        Pad_76E2[0x8];                                     // Fixing Size After Last Property..
	struct FFortWorldMarkerData                  MarkerData;                                        // 0x8(0x180)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_76E3[0x18];                                    // Fixing Size Of Struct..
};

// 0x160 (0x160 - 0x0)
// ScriptStruct FortniteAI.DigestedAimingCircleSettings
struct FDigestedAimingCircleSettings
{
public:
	bool                                         bUseAimingCircle;                                  // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76E4[0x3];                                     // Fixing Size After Last Property..
	float                                        CircleCenterOffsetZ;                               // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinCircleOpeningAngleVerticalCurve;                // 0x8(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxCircleOpeningAngleVerticalCurve;                // 0x30(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinCircleOpeningAngleHorizontalCurve;              // 0x58(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxCircleOpeningAngleHorizontalCurve;              // 0x80(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        MinCursorRotationSpeed;                            // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxCursorRotationSpeed;                            // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinCursorUpdateInterval;                           // 0xB0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxCursorUpdateInterval;                           // 0xB4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinCursorTrackingFrequency;                        // 0xB8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxCursorTrackingFrequency;                        // 0xBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CircleShrinkCurve;                                 // 0xC0(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        MinDistanceForTimeBetweenHits;                     // 0xE8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDistanceForTimeBetweenHits;                     // 0xEC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinTimeBetweenHitsAtMinRange;                      // 0xF0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxTimeBetweenHitsAtMinRange;                      // 0xF4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinTimeBetweenHitsAtMaxRange;                      // 0xF8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxTimeBetweenHitsAtMaxRange;                      // 0xFC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceMissEnabled;                                 // 0x100(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPreventHeadshots;                                 // 0x101(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76E5[0x6];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        WeaponSpreadContributionToClampCurve;              // 0x108(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        KillingBlowGracePeriodAtMinRange;                  // 0x130(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        KillingBlowGracePeriodAtMaxRange;                  // 0x134(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ExtraHitOddsCurve;                                 // 0x138(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x3E8 (0x3E8 - 0x0)
// ScriptStruct FortniteAI.AimingCircleSettings
struct FAimingCircleSettings
{
public:
	struct FScalableFloat                        UseAimingCircle;                                   // 0x0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CircleCenterOffsetZ;                               // 0x28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinCircleOpeningAngleVerticalCurve;                // 0x50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxCircleOpeningAngleVerticalCurve;                // 0x78(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinCircleOpeningAngleHorizontalCurve;              // 0xA0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxCircleOpeningAngleHorizontalCurve;              // 0xC8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinCursorRotationSpeed;                            // 0xF0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxCursorRotationSpeed;                            // 0x118(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinCursorUpdateInterval;                           // 0x140(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxCursorUpdateInterval;                           // 0x168(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinCursorTrackingFrequency;                        // 0x190(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxCursorTrackingFrequency;                        // 0x1B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CircleShrinkCurve;                                 // 0x1E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinDistanceForTimeBetweenHits;                     // 0x208(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDistanceForTimeBetweenHits;                     // 0x230(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinTimeBetweenHitsAtMinRange;                      // 0x258(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxTimeBetweenHitsAtMinRange;                      // 0x280(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinTimeBetweenHitsAtMaxRange;                      // 0x2A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxTimeBetweenHitsAtMaxRange;                      // 0x2D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForceMissEnabled;                                  // 0x2F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PreventHeadshots;                                  // 0x320(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WeaponSpreadContributionToClampCurve;              // 0x348(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        KillingBlowGracePeriodAtMinRange;                  // 0x370(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        KillingBlowGracePeriodAtMaxRange;                  // 0x398(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ExtraHitOddsCurve;                                 // 0x3C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct FortniteAI.TargetBasedAccuracy
struct FTargetBasedAccuracy
{
public:
	struct FScalableFloat                        AimTrackingOffsetErrorMultiplier;                  // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AimTrackingHeightOffsetErrorMultiplier;            // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AimTrackingDistanceErrorMultiplier;                // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AimTrackingReactionTimeMultiplier;                 // 0x78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AimTrackingInterpTimeMultiplier;                   // 0xA0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AimTrackingInAirVelocityThresholdMultiplier;       // 0xC8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AimTrackinginAirHeightDataThresholdMultiplier;     // 0xF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteAI.DigestedTargetBasedAccuracy
struct FDigestedTargetBasedAccuracy
{
public:
	float                                        AimTrackingOffsetErrorMultiplier;                  // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AimTrackingHeightOffsetErrorMultiplier;            // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AimTrackingDistanceErrorMultiplier;                // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AimTrackingReactionTimeMultiplier;                 // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AimTrackingInterpTimeMultiplier;                   // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AimTrackingInAirVelocityThresholdMultiplier;       // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AimTrackinginAirHeightDataThresholdMultiplier;     // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct FortniteAI.TargetBasedAccuracyCategory
struct FTargetBasedAccuracyCategory
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTargetBasedAccuracy                  TargetBasedAccuracy;                               // 0x20(0x118)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.DigestedTargetBasedAccuracyCategory
struct FDigestedTargetBasedAccuracyCategory
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FDigestedTargetBasedAccuracy          TargetBasedAccuracy;                               // 0x20(0x1C)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76E6[0x4];                                     // Fixing Size Of Struct..
};

// 0x738 (0x738 - 0x0)
// ScriptStruct FortniteAI.WeaponAccuracy
struct FWeaponAccuracy
{
public:
	struct FScalableFloat                        MaxTrackingOffsetError;                            // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingMaxTrackingOffsetError;                   // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxTrackingDistanceFarError;                       // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingMaxTrackingDistanceFarError;              // 0x78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxTrackingDistanceNearError;                      // 0xA0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingMaxTrackingDistanceNearError;             // 0xC8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TrackingDistanceNearErrorProbability;              // 0xF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingActivationProbability;                    // 0x118(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FiringRestrictedToTargetingActive;                 // 0x140(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinimumDistanceForAiming;                          // 0x168(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinimumDistanceForPawnAiming;                      // 0x190(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        IdealAttackRange;                                  // 0x1B8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingIdealAttackRange;                         // 0x1E0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxAttackRangeFactor;                              // 0x208(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldAimAtTargetsFeet;                            // 0x230(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldUseProjectileArcForAiming;                   // 0x258(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        KeepAimingOnSameSideWhileFiring;                   // 0x280(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxTrackingHeightOffsetError;                      // 0x2A8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinRotationInterpSpeed;                            // 0x2D0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxRotationInterpSpeed;                            // 0x2F8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ConsiderProjectileTravelTime;                      // 0x320(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                         bOverrideAimingCircleSettings;                     // 0x348(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76E7[0x7];                                     // Fixing Size After Last Property..
	struct FAimingCircleSettings                 AimingCircleSettingsOverride;                      // 0x350(0x3E8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x758 (0x758 - 0x0)
// ScriptStruct FortniteAI.WeaponAccuracyCategorySpecialization
struct FWeaponAccuracyCategorySpecialization
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FWeaponAccuracy                       WeaponAccuracy;                                    // 0x20(0x738)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x768 (0x768 - 0x0)
// ScriptStruct FortniteAI.WeaponAccuracyCategory
struct FWeaponAccuracyCategory
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FWeaponAccuracy                       WeaponAccuracy;                                    // 0x20(0x738)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FWeaponAccuracyCategorySpecialization> Specializations;                                   // 0x758(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x320 (0x320 - 0x0)
// ScriptStruct FortniteAI.DigestedWeaponAccuracy
struct FDigestedWeaponAccuracy
{
public:
	struct FScalableFloat                        TrackingOffsetError;                               // 0x0(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingTrackingOffsetError;                      // 0x28(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TrackingDistanceFarError;                          // 0x50(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingTrackingDistanceFarError;                 // 0x78(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TrackingDistanceNearError;                         // 0xA0(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingTrackingDistanceNearError;                // 0xC8(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TrackingDistanceNearErrorProbability;              // 0xF0(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingActivationProbability;                    // 0x118(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FiringRestrictedToTargetingActive;                 // 0x140(0x28)(Transient, NativeAccessSpecifierPrivate)
	float                                        MinimumDistanceForAiming;                          // 0x168(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinimumDistanceForPawnAiming;                      // 0x16C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        IdealAttackRange;                                  // 0x170(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TargetingIdealAttackRange;                         // 0x174(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxAttackRange;                                    // 0x178(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ChanceToAimAtTargetsFeet;                          // 0x17C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldUseProjectileArcForAiming;                   // 0x180(0x28)(Transient, NativeAccessSpecifierPrivate)
	bool                                         bKeepAimingOnSameSideWhileFiring;                  // 0x1A8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76E8[0x3];                                     // Fixing Size After Last Property..
	float                                        MaxTrackingHeightOffsetError;                      // 0x1AC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinRotationInterpSpeed;                            // 0x1B0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRotationInterpSpeed;                            // 0x1B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideAimingCircleSettings;                     // 0x1B8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bConsiderProjectileTravelTime;                     // 0x1B9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76E9[0x6];                                     // Fixing Size After Last Property..
	struct FDigestedAimingCircleSettings         AimingCircleSettingsOverride;                      // 0x1C0(0x160)(Transient, NativeAccessSpecifierPrivate)
};

// 0x340 (0x340 - 0x0)
// ScriptStruct FortniteAI.DigestedWeaponAccuracyCategorySpecialization
struct FDigestedWeaponAccuracyCategorySpecialization
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FDigestedWeaponAccuracy               WeaponAccuracy;                                    // 0x20(0x320)(Transient, NativeAccessSpecifierPrivate)
};

// 0x350 (0x350 - 0x0)
// ScriptStruct FortniteAI.DigestedWeaponAccuracyCategory
struct FDigestedWeaponAccuracyCategory
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FDigestedWeaponAccuracy               WeaponAccuracy;                                    // 0x20(0x320)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FDigestedWeaponAccuracyCategorySpecialization> Specializations;                                   // 0x340(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct FortniteAI.TrackingOffsetModifiers
struct FTrackingOffsetModifiers
{
public:
	struct FScalableFloat                        CombatStartDuration;                               // 0x0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TargetLowHealthThreshold;                          // 0x28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        Curves[0x3];                                       // 0x50(0x78)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DistanceCurves[0x3];                               // 0xC8(0x78)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        InAirHeightCurve;                                  // 0x140(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct FortniteAI.TrackingOffsetModifierInfo
struct FTrackingOffsetModifierInfo
{
public:
	struct FScalableFloat                        MinSkill;                                          // 0x0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxSkill;                                          // 0x28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FTrackingOffsetModifiers              Modifiers;                                         // 0x50(0x168)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.DigestedTrackingOffsetModifierCurves
struct FDigestedTrackingOffsetModifierCurves
{
public:
	int32                                        Values[0xA];                                       // 0x0(0x28)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct FortniteAI.DigestedTrackingOffsetModifiers
struct FDigestedTrackingOffsetModifiers
{
public:
	float                                        CombatStartDuration;                               // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetLowHealthThreshold;                          // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDigestedTrackingOffsetModifierCurves Curves[0x3];                                       // 0x8(0x78)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDigestedTrackingOffsetModifierCurves DistanceCurves[0x3];                               // 0x80(0x78)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDigestedTrackingOffsetModifierCurves InAirHeightCurve;                                  // 0xF8(0x28)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.LookAtDigestedSetting
struct FLookAtDigestedSetting
{
public:
	float                                        LookAtDuration;                                    // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LookAtDurationDeviation;                           // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LookAtDelay;                                       // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LookAtDelayDeviation;                              // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct FortniteAI.FocusSetting
struct FFocusSetting
{
public:
	struct FGameplayTagQuery                     WeaponTagQuery;                                    // 0x0(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bRequireAmmoToMatch;                               // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76EA[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        IgnoreThreatTimeWhenNotAttacking;                  // 0x50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        IgnoreThreatDeviationWhenNotAttacking;             // 0x78(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        IgnoreThreatDuration;                              // 0xA0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        IgnoreThreatDurationDeviation;                     // 0xC8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        IgnoreThreatDistanceWhenFleeing;                   // 0xF0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        IgnoreThreatDirectionAngleWhenFleeing;             // 0x118(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteAI.DigestedFocusSetting
struct FDigestedFocusSetting
{
public:
	struct FGameplayTagQuery                     WeaponTagQuery;                                    // 0x0(0x48)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bRequireAmmoToMatch;                               // 0x48(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76EB[0x3];                                     // Fixing Size After Last Property..
	float                                        IgnoreThreatTimeWhenNotAttacking;                  // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IgnoreThreatDeviationWhenNotAttacking;             // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IgnoreThreatDuration;                              // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IgnoreThreatDurationDeviation;                     // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IgnoreThreatDistanceWhenFleeing;                   // 0x5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IgnoreThreatDirectionCosAngleWhenFleeing;          // 0x60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76EC[0x4];                                     // Fixing Size Of Struct..
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteAI.LookAtSetting
struct FLookAtSetting
{
public:
	struct FScalableFloat                        LookAtDuration;                                    // 0x0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LookAtDurationDeviation;                           // 0x28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LookAtDelay;                                       // 0x50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LookAtDelayDeviation;                              // 0x78(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIBotBuildDescriptor
struct FFortAthenaAIBotBuildDescriptor
{
public:
	struct FIntVector                            Location;                                          // 0x0(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientedConstructionBuildingType BuildingType;                                      // 0xC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76ED[0x3];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.AthenaFortAIBotWeightedBuildingList
struct FAthenaFortAIBotWeightedBuildingList
{
public:
	struct FScalableFloat                        Weight;                                            // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAthenaAIBotBuildDescriptor> BuildDescriptors;                                  // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.AthenaFortAIBotDigestedWeightedBuildingList
struct FAthenaFortAIBotDigestedWeightedBuildingList
{
public:
	float                                        Weight;                                            // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76EE[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FFortAthenaAIBotBuildDescriptor> BuildDescriptors;                                  // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct FortniteAI.MMRSpawningBracketNPCDataTableRow
struct FMMRSpawningBracketNPCDataTableRow : public FMMRSpawningBracketBaseDataTableRow
{
public:
	float                                        Skill;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76EF[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIBotRunTimeCustomizationData
struct FFortAthenaAIBotRunTimeCustomizationData
{
public:
	struct FGameplayTag                          PredefinedCosmeticSetTag;                          // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CullDistanceSquared;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckForOverlaps;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasCustomSquadId;                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomSquadId;                                     // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76F0[0x1];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.DigestedEvasiveManeuverSkillSettings
struct FDigestedEvasiveManeuverSkillSettings
{
public:
	float                                        JumpDelay;                                         // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        JumpRandomDeviationDelay;                          // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrouchDelay;                                       // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrouchRandomDeviationDelay;                        // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DodgeDelay;                                        // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DodgeRandomDeviationDelay;                         // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrouchOverlayWeight;                               // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        JumpOverlayWeight;                                 // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        NoOverlayWeight;                                   // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DodgeWeight;                                       // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DodgeJumpWeight;                                   // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DodgeDistanceMax;                                  // 0x2C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DodgeDistanceMin;                                  // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrouchTimeMax;                                     // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrouchTimeMin;                                     // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76F1[0x4];                                     // Fixing Size After Last Property..
	class FString                                DebugName;                                         // 0x40(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76F2[0x8];                                     // Fixing Size Of Struct..
};

// 0x258 (0x258 - 0x0)
// ScriptStruct FortniteAI.EvasiveManeuverSkillSettings
struct FEvasiveManeuverSkillSettings
{
public:
	struct FScalableFloat                        CrouchOverlayWeight;                               // 0x0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JumpOverlayWeight;                                 // 0x28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NoOverlayWeight;                                   // 0x50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DodgeWeight;                                       // 0x78(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DodgeJumpWeight;                                   // 0xA0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JumpDelay;                                         // 0xC8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JumpRandomDeviationDelay;                          // 0xF0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CrouchDelay;                                       // 0x118(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CrouchRandomDeviationDelay;                        // 0x140(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DodgeDelay;                                        // 0x168(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DodgeRandomDeviationDelay;                         // 0x190(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DodgeDistanceMax;                                  // 0x1B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DodgeDistanceMin;                                  // 0x1E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CrouchTimeMax;                                     // 0x208(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CrouchTimeMin;                                     // 0x230(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteAI.DigestedEvasiveManeuverSkillSettingsSpecialization
struct FDigestedEvasiveManeuverSkillSettingsSpecialization
{
public:
	float                                        OddsToBeUsed;                                      // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDuration;                                       // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDurationRandomDeviation;                        // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Cooldown;                                          // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CooldownRandomDeviation;                           // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DistanceMinSquared;                                // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DistanceMaxSquared;                                // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76F3[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     WeaponTagQuery;                                    // 0x20(0x48)(Transient, NativeAccessSpecifierPrivate)
	struct FDigestedEvasiveManeuverSkillSettings EvasiveManeuverSkillSettings;                      // 0x68(0x58)(Transient, NativeAccessSpecifierPrivate)
};

// 0x3C8 (0x3C8 - 0x0)
// ScriptStruct FortniteAI.EvasiveManeuverSkillSettingsSpecialization
struct FEvasiveManeuverSkillSettingsSpecialization
{
public:
	struct FScalableFloat                        OddsToBeUsed;                                      // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxDuration;                                       // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxDurationRandomDeviation;                        // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        Cooldown;                                          // 0x78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CooldownRandomDeviation;                           // 0xA0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FString                                DebugName;                                         // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DistanceMin;                                       // 0xD8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DistanceMax;                                       // 0x100(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     WeaponTagQuery;                                    // 0x128(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FEvasiveManeuverSkillSettings         EvasiveManeuverSkillSettings;                      // 0x170(0x258)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAI.FortBotHealingItems
struct FFortBotHealingItems
{
public:
	struct FScalableFloat                        UseItemResourceThreshold;                          // 0x0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ItemTags;                                          // 0x28(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.FortBotDigestedHealingItems
struct FFortBotDigestedHealingItems
{
public:
	float                                        UseItemResourceThreshold;                          // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76F4[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 ItemTags;                                          // 0x8(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.FortBotHealingItemsList
struct FFortBotHealingItemsList
{
public:
	TArray<struct FFortBotHealingItems>          HealthItems;                                       // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.FortBotDigestedHealingItemsList
struct FFortBotDigestedHealingItemsList
{
public:
	TArray<struct FFortBotDigestedHealingItems>  HealthItems;                                       // 0x0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.FortBotHealingItemsSpec
struct FFortBotHealingItemsSpec
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortBotHealingItemsList              HealthItemsList;                                   // 0x48(0x10)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.FortBotDigestedHealingItemsSpec
struct FFortBotDigestedHealingItemsSpec
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FFortBotDigestedHealingItemsList      HealthItemsList;                                   // 0x48(0x10)(Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteAI.BotEquipWeaponInfo
struct FBotEquipWeaponInfo
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DistanceEffectivenessWithThreat;                   // 0x48(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DistanceEffectivenessNoThreat;                     // 0x70(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteAI.DigestedBotEquipWeaponInfo
struct FDigestedBotEquipWeaponInfo
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DistanceEffectivenessWithThreat;                   // 0x48(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DistanceEffectivenessNoThreat;                     // 0x70(0x28)(Transient, NativeAccessSpecifierPrivate)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.WeaponAmmoCheat
struct FWeaponAmmoCheat
{
public:
	struct FGameplayTag                          WeaponTag;                                         // 0x0(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76F5[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        HasInfiniteAmmo;                                   // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        CheckLoadedAmmoForInfiniteAmmo;                    // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteAI.BotKnockbackSettings
struct FBotKnockbackSettings
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldAllowCharacterToBeLaunched;                  // 0x48(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShouldStopActiveMovement;                          // 0x70(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        IgnoreMoveInputDuration;                           // 0x98(0x28)(Edit, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteAI.DigestedBotKnockbackSettings
struct FDigestedBotKnockbackSettings
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Transient, NativeAccessSpecifierPrivate)
	bool                                         bShouldAllowCharacterToBeLaunched;                 // 0x48(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldStopActiveMovement;                         // 0x49(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76F6[0x2];                                     // Fixing Size After Last Property..
	float                                        IgnoreMoveInputDuration;                           // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.AlertLevelInfo
struct FAlertLevelInfo
{
public:
	TArray<class UAISenseConfig*>                SensesConfig;                                      // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.DigestedPerceptionStateSettings
struct FDigestedPerceptionStateSettings
{
public:
	float                                        ForgetTime;                                        // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ForgetTimeDeviation;                               // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ForgetDistance;                                    // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ForgetDistanceDeviation;                           // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76F7[0x28];                                    // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteAI.SoundPerceptionDigestedSetting
struct FSoundPerceptionDigestedSetting
{
public:
	float                                        Loudness;                                          // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IgnoreTime;                                        // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideReactionDistanceSq;                        // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteAI.SightReactionSpecialization
struct FSightReactionSpecialization
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SightMinAdditionTime;                              // 0x20(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SightMaxAdditionTime;                              // 0x48(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteAI.DigestedSightReactionSpecialization
struct FDigestedSightReactionSpecialization
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SightMinAdditionTime;                              // 0x20(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SightMaxAdditionTime;                              // 0x48(0x28)(Transient, NativeAccessSpecifierPrivate)
};

// 0x190 (0x190 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIBotDigestedTargetHeuristicSettings
struct FFortAthenaAIBotDigestedTargetHeuristicSettings
{
public:
	struct FDigestedPerceptionStateSettings      PerceptionStateSettings[0x6];                      // 0x0(0x150)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        ThreatDamageWeight;                                // 0x150(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThreatDamageWeightMultiplier;                      // 0x154(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThreatTimeSinceLastDamageMultiplier;               // 0x158(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                        ThreatLoFWeight;                                   // 0x180(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DBNOWeightModifier;                                // 0x184(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GameParticipantWeightModifier;                     // 0x188(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76F8[0x4];                                     // Fixing Size Of Struct..
};

// 0x1D8 (0x1D8 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization
struct FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization
{
public:
	struct FGameplayTagQuery                     TargetTagQuery;                                    // 0x0(0x48)(Transient, NativeAccessSpecifierPrivate)
	struct FFortAthenaAIBotDigestedTargetHeuristicSettings Settings;                                          // 0x48(0x190)(Transient, NativeAccessSpecifierPrivate)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteAI.PerceptionStateSettings
struct FPerceptionStateSettings
{
public:
	struct FScalableFloat                        ForgetTime;                                        // 0x0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForgetTimeDeviation;                               // 0x28(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForgetDistance;                                    // 0x50(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForgetDistanceDeviation;                           // 0x78(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ThreatDistanceWeight;                              // 0xA0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteAI.SoundPerceptionSetting
struct FSoundPerceptionSetting
{
public:
	struct FScalableFloat                        Loudness;                                          // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        IgnoreTime;                                        // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        OverrideReactionDistance;                          // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x348 (0x348 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIBotTargetHeuristicSettings
struct FFortAthenaAIBotTargetHeuristicSettings
{
public:
	struct FPerceptionStateSettings              ThreatSeeingPerceptionSettings;                    // 0x0(0xC8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPerceptionStateSettings              ThreatLKPPerceptionSettings;                       // 0xC8(0xC8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPerceptionStateSettings              ThreatAlertedPerceptionSettings;                   // 0x190(0xC8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ThreatDamageWeight;                                // 0x258(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ThreatDamageWeightMultiplier;                      // 0x280(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ThreatTimeSinceLastDamageMultiplier;               // 0x2A8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ThreatLoFWeight;                                   // 0x2D0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DBNOWeightModifier;                                // 0x2F8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        GameParticipantWeightModifier;                     // 0x320(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x390 (0x390 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIBotTargetHeuristicSettingsSpecialization
struct FFortAthenaAIBotTargetHeuristicSettingsSpecialization
{
public:
	struct FGameplayTagQuery                     TargetTagQuery;                                    // 0x0(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortAthenaAIBotTargetHeuristicSettings Settings;                                          // 0x48(0x348)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.PlaystyleSwitchToAggressiveDataDigested
struct FPlaystyleSwitchToAggressiveDataDigested
{
public:
	struct FGameplayTagQuery                     TagQueryToMatch;                                   // 0x0(0x48)(Transient, NativeAccessSpecifierPrivate)
	float                                        TurnToAggressiveMinimumDistanceSquared;            // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TurnToAggressiveTime;                              // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DamageThresholdToSwitchToAggressive;               // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SwitchBackToDefensivePreventionTime;               // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct FortniteAI.PlaystyleSwitchToAggressiveData
struct FPlaystyleSwitchToAggressiveData
{
public:
	struct FGameplayTagQuery                     TagQueryToMatch;                                   // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TurnToAggressiveMinimumDistance;                   // 0x48(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TurnToAggressiveTime;                              // 0x70(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SwitchBackToDefensivePreventionTime;               // 0x98(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DamageThresholdToSwitchToAggressive;               // 0xC0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct FortniteAI.FiringPattern
struct FFiringPattern
{
public:
	struct FScalableFloat                        MinRange;                                          // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxRange;                                          // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        HoldTimeDeviation;                                 // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PreventFireTimeDeviation;                          // 0x78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FiringPatternHysteresis;                           // 0xA0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UCurveFloat*                           FiringPatternCurve;                                // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// ScriptStruct FortniteAI.RangedWeaponSkill
struct FRangedWeaponSkill
{
public:
	struct FScalableFloat                        DelayBetweenShots;                                 // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DelayDeviationTimeBetweenShots;                    // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TriggerHoldDuration;                               // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TriggerHoldDeviationTime;                          // 0x78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DelayBeforeFirstShot;                              // 0xA0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShotDelayAfterTargeting;                           // 0xC8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ShotDelayAfterIncomingLethality;                   // 0xF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFiringPattern>                TargetInAirFiringPatterns;                         // 0x118(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFiringPattern>                FiringPatterns;                                    // 0x128(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InterruptReloadToShootOdds;                        // 0x138(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAI.DigestedFiringPattern
struct FDigestedFiringPattern
{
public:
	float                                        MinRange;                                          // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRange;                                          // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        HoldTimeDeviation;                                 // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PreventFireTimeDeviation;                          // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FiringPatternHysteresis;                           // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76F9[0x4];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           FiringPatternCurve;                                // 0x18(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct FortniteAI.RangedWeaponSkillCategorySpecialization
struct FRangedWeaponSkillCategorySpecialization
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FRangedWeaponSkill                    WeaponSkill;                                       // 0x20(0x160)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x190 (0x190 - 0x0)
// ScriptStruct FortniteAI.RangedWeaponSkillCategory
struct FRangedWeaponSkillCategory
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FRangedWeaponSkill                    WeaponSkill;                                       // 0x20(0x160)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FRangedWeaponSkillCategorySpecialization> Specializations;                                   // 0x180(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.DigestedRangedWeaponSkill
struct FDigestedRangedWeaponSkill
{
public:
	float                                        DelayBetweenShots;                                 // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DelayDeviationTimeBetweenShots;                    // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TriggerHoldDuration;                               // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TriggerHoldDeviationTime;                          // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DelayBeforeFirstShot;                              // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ShotDelayAfterTargeting;                           // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ShotDelayAfterIncomingLethality;                   // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InterruptReloadToShootOdds;                        // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FDigestedFiringPattern>        TargetInAirFiringPatterns;                         // 0x20(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FDigestedFiringPattern>        FiringPatterns;                                    // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteAI.DigestedRangedWeaponSkillCategorySpecialization
struct FDigestedRangedWeaponSkillCategorySpecialization
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FDigestedRangedWeaponSkill            WeaponSkill;                                       // 0x20(0x40)(Transient, NativeAccessSpecifierPrivate)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteAI.DigestedRangedWeaponSkillCategory
struct FDigestedRangedWeaponSkillCategory
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FDigestedRangedWeaponSkill            WeaponSkill;                                       // 0x20(0x40)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FDigestedRangedWeaponSkillCategorySpecialization> Specializations;                                   // 0x60(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteAI.VehicleDigestedPIDController
struct FVehicleDigestedPIDController
{
public:
	float                                        KP;                                                // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KI;                                                // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KD;                                                // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteAI.VehiclePIDController
struct FVehiclePIDController
{
public:
	struct FScalableFloat                        KP;                                                // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        KI;                                                // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        KD;                                                // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAI.VehicleDigestedAppendToPath
struct FVehicleDigestedAppendToPath
{
public:
	float                                        MinimumPathLengthToEndOfPath;                      // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeSinceLastAppend;                            // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteAI.VehicleAppendToPath
struct FVehicleAppendToPath
{
public:
	struct FScalableFloat                        MinimumPathLengthToEndOfPath;                      // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinTimeSinceLastAppend;                            // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.VehicleDigestedTurnInPlace
struct FVehicleDigestedTurnInPlace
{
public:
	float                                        MovingAngleBegin;                                  // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovingAngleEnd;                                    // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdleAngleBegin;                                    // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdleAngleEnd;                                      // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinMovingSpeed;                                    // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMissedPathPointReverse;                           // 0x14(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76FA[0x3];                                     // Fixing Size Of Struct..
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct FortniteAI.VehicleTurnInPlace
struct FVehicleTurnInPlace
{
public:
	struct FScalableFloat                        MovingAngleBegin;                                  // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MovingAngleEnd;                                    // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        IdleAngleBegin;                                    // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        IdleAngleEnd;                                      // 0x78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinMovingSpeed;                                    // 0xA0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bMissedPathPointReverse;                           // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76FB[0x7];                                     // Fixing Size Of Struct..
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct FortniteAI.DigestedVehicleDriving
struct FDigestedVehicleDriving
{
public:
	bool                                         bCanTurnInPlace;                                   // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAvoidanceEnabled;                                 // 0x1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPreventTurningWhenStopping;                       // 0x2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76FC[0x5];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     AvoidanceTagQuery;                                 // 0x8(0x48)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bReverseSwapLeftAndRight;                          // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76FD[0x3];                                     // Fixing Size After Last Property..
	float                                        MinimumForwardPIDValueForStopping;                 // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimumDistanceLeftForBoosting;                    // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleDigestedPIDController         ForwardPIDController;                              // 0x5C(0xC)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVehicleDigestedPIDController         SteeringPIDController;                             // 0x68(0xC)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVehicleDigestedAppendToPath          AppendToPath;                                      // 0x74(0x8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVehicleDigestedTurnInPlace           TurnInPlace;                                       // 0x7C(0x18)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_76FE[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 ModsTags;                                          // 0x98(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct FortniteAI.DigestedVehicleDrivingCategory
struct FDigestedVehicleDrivingCategory
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Transient, NativeAccessSpecifierPrivate)
	struct FDigestedVehicleDriving               VehicleDriving;                                    // 0x20(0xB8)(Transient, NativeAccessSpecifierPrivate)
};

// 0x300 (0x300 - 0x0)
// ScriptStruct FortniteAI.VehicleDriving
struct FVehicleDriving
{
public:
	bool                                         bCanTurnInPlace;                                   // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76FF[0x7];                                     // Fixing Size After Last Property..
	struct FVehicleTurnInPlace                   TurnInPlace;                                       // 0x8(0xD0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ReverseSwapLeftAndRight;                           // 0xD8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinimumForwardPIDValueForStopping;                 // 0x100(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinimumDistanceLeftForBoosting;                    // 0x128(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVehiclePIDController                 ForwardPIDController;                              // 0x150(0x78)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVehiclePIDController                 SteeringPIDController;                             // 0x1C8(0x78)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                         bAvoidanceEnabled;                                 // 0x240(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPreventTurningWhenStopping;                       // 0x241(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7700[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     AvoidanceTagQuery;                                 // 0x248(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVehicleAppendToPath                  AppendToPath;                                      // 0x290(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ModsTags;                                          // 0x2E0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x320 (0x320 - 0x0)
// ScriptStruct FortniteAI.VehicleDrivingCategory
struct FVehicleDrivingCategory
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVehicleDriving                       VehicleDriving;                                    // 0x20(0x300)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.MovementEvaluatorInfo
struct FMovementEvaluatorInfo
{
public:
	uint8                                        Pad_7701[0x8];                                     // Fixing Size After Last Property..
	class UFortAthenaAIBotEvaluator_Movement*    MovementEval;                                      // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIObjectTrackerQuerySimplified
struct FFortAthenaAIObjectTrackerQuerySimplified
{
public:
	enum class EFortAthenaAIObjectTrackerQueryOrder PickOrder;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustBeUsable;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7702[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     RequiredTagsQuery;                                 // 0x8(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               MaximumDistance;                                   // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayspace*                        RequiredToBeInPlayspace;                           // 0x68(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7703[0x10];                                    // Fixing Size Of Struct..
};

// 0x18 (0x98 - 0x80)
// ScriptStruct FortniteAI.FortAthenaAIObjectTrackerQuery
struct FFortAthenaAIObjectTrackerQuery : public FFortAthenaAIObjectTrackerQuerySimplified
{
public:
	struct FVector                               StartLocation;                                     // 0x80(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct FortniteAI.AITrackedObjectsSet
struct FAITrackedObjectsSet
{
public:
	uint8                                        Pad_7704[0x100];                                   // Fixing Size Of Struct..
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteAI.FortSmartObjectSlotDefinitionData
struct FFortSmartObjectSlotDefinitionData : public FSmartObjectSlotDefinitionData
{
public:
	float                                        CooldownOnFinished;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CooldownOnInterrupted;                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Radius;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SlotCooldownOnFinished;                            // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SlotCooldownOnInterrupted;                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortAthenaSmartObjectPriority    Priority;                                          // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortAthenaSmartObjectUrgency     Urgency;                                           // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7705[0x2];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteAI.FortAthenaSmartObjectSlotStateData
struct FFortAthenaSmartObjectSlotStateData : public FSmartObjectSlotStateData
{
public:
	uint8                                        Pad_7706[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.SmartObjectRecentlyUsed
struct FSmartObjectRecentlyUsed
{
public:
	uint8                                        Pad_7707[0x18];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.SmartObjectBanned
struct FSmartObjectBanned
{
public:
	uint8                                        Pad_7708[0x10];                                    // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAI.AIRuntimeParametersSmartObjectActivityCondition
struct FAIRuntimeParametersSmartObjectActivityCondition
{
public:
	struct FGameplayTagQuery                     SmartObjectActivityConditionTagQuery;              // 0x0(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteAI.AIRuntimeParametersSmartObjectActivityConfig
struct FAIRuntimeParametersSmartObjectActivityConfig
{
public:
	struct FGameplayTagQuery                     ActivityRequirements;                              // 0x0(0x48)(Transient, NativeAccessSpecifierPublic)
	float                                        MaxDetectionRadius;                                // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDetectionRadiusSqr;                             // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActivityCooldownOnFinished;                        // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActivityCooldownOnInterrupted;                     // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteAI.AIRuntimeParametersSmartObjectActivity
struct FAIRuntimeParametersSmartObjectActivity
{
public:
	struct FAIRuntimeParametersSmartObjectActivityCondition SmartObjectActivityCondition;                      // 0x0(0x48)(Transient, NativeAccessSpecifierPublic)
	struct FAIRuntimeParametersSmartObjectActivityConfig SmartObjectActivityConfig;                         // 0x48(0x58)(Transient, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10xA0(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_3FC : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7709[0x3];                                     // Fixing Size After Last Property..
	int32                                        ActivityId;                                        // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastUseTimestamp;                                  // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cooldown;                                          // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAISmartObjectActivityCondition
struct FFortAthenaAISmartObjectActivityCondition
{
public:
	struct FGameplayTagQuery                     SmartObjectActivityConditionTagQuery;              // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAISmartObjectActivityConfig
struct FFortAthenaAISmartObjectActivityConfig
{
public:
	struct FGameplayTagQuery                     ActivityRequirements;                              // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxDetectionRadius;                                // 0x48(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ActivityCooldownOnFinished;                        // 0x70(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ActivityCooldownOnInterrupted;                     // 0x98(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.SpawnerDataComponentAffiliationSharedBBConfiguration
struct FSpawnerDataComponentAffiliationSharedBBConfiguration
{
public:
	struct FGameplayTag                          FactionTag;                                        // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_770A[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        MaximumDistance;                                   // 0x8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SharedBlackboardTag;                               // 0x30(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_770B[0x4];                                     // Fixing Size After Last Property..
	class UBlackboardData*                       SharedBlackboard;                                  // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.ConstructionBuildingInfo
struct FConstructionBuildingInfo
{
public:
	TSubclassOf<class ABuildingSMActor>          BuildingActorClass[0x3];                           // 0x0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteAI.ConstructionBuildingList
struct FConstructionBuildingList
{
public:
	struct FConstructionBuildingInfo             BuildingList[0x6];                                 // 0x0(0x90)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct FortniteAI.FortAthenaAIWeightedCosmeticLoadout
struct FFortAthenaAIWeightedCosmeticLoadout
{
public:
	struct FFortAthenaLoadout                    CosmeticLoadout;                                   // 0x0(0x178)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Weight;                                            // 0x178(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.InitialGameplayEffectInfo
struct FInitialGameplayEffectInfo
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_770C[0x4];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.TeleportSettings
struct FTeleportSettings
{
public:
	struct FScalableFloat                        CheckTeleportConditionsTimeInterval;               // 0x0(0x28)(Edit, NativeAccessSpecifierPublic)
	float                                        TeleportRange;                                     // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeNeededOutsideTeleportRange;                    // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TeleportAbilityTag;                                // 0x30(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_770D[0x4];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteAI.PickupTagConvertInfo
struct FPickupTagConvertInfo
{
public:
	struct FGameplayTagContainer                 PickupTags;                                        // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ConvertDamage;                                     // 0x20(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteAI.AILootInfoRowEntry
struct FAILootInfoRowEntry
{
public:
	struct FGameplayTagQuery                     OptionalTagQuery;                                  // 0x0(0x48)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bShouldDropInventoryOnDeath : 1;                   // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldDropLootOnDeath : 1;                        // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldGrantLootOnSpawn : 1;                       // Mask: 0x4, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_3FD : 5;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_770E[0x7];                                     // Fixing Size After Last Property..
	TArray<class FName>                          LootTiers;                                         // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteAI.FortAthenaAILootInfoDataTableRow
struct FFortAthenaAILootInfoDataTableRow : public FTableRowBase
{
public:
	TArray<struct FAILootInfoRowEntry>           LootDroppingBehaviors;                             // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.WeightedAIInventoryLoadout
struct FWeightedAIInventoryLoadout
{
public:
	struct FScalableFloat                        Weight;                                            // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FItemAndCount>                 Items;                                             // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct FortniteAI.FortBotTargetInfo
struct FFortBotTargetInfo
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_770F[0x8];                                     // Fixing Size After Last Property..
	class AActor*                                SupportingActor;                                   // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7710[0x18];                                    // Fixing Size After Last Property..
	class ABuildingActor*                        AlternateTargetingActor;                           // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7711[0x108];                                   // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.FortBotThreatActorInfo
struct FFortBotThreatActorInfo
{
public:
	class AActor*                                ThreatActor;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7712[0x10];                                    // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.FortBotTargetHandler
struct FFortBotTargetHandler
{
public:
	uint8                                        Pad_7713[0x18];                                    // Fixing Size After Last Property..
	TArray<struct FFortBotTargetInfo>            Targets;                                           // 0x18(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7714[0x18];                                    // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteAI.BotDelayedStimulus
struct FBotDelayedStimulus
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7715[0x60];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.BotPerceivedSound
struct FBotPerceivedSound
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7716[0x20];                                    // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteAI.PatrolPathLeash
struct FPatrolPathLeash
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteAI.TrapPerceptionSettings
struct FTrapPerceptionSettings
{
public:
	uint8                                        Pad_7717[0x14];                                    // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteAI.TrapDetectionState
struct FTrapDetectionState
{
public:
	uint8                                        Pad_7718[0x8];                                     // Fixing Size Of Struct..
};

// 0x28 (0x68 - 0x40)
// ScriptStruct FortniteAI.FortAIRuntimePerkInfo_Bunker
struct FFortAIRuntimePerkInfo_Bunker : public FFortAIRuntimePerkInfo
{
public:
	float                                        OddsToBeUsedAgainstUnknownThreat;                  // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OddsToUseRoofBuilding;                             // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OddsToBuildForwardRamp;                            // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InitialBuildDelay;                                 // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SamePieceBuildDelay;                               // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SamePieceBuildDelayRandomDeviation;                // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DifferentPieceBuildDelay;                          // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DifferentPieceBuildDelayRandomDeviation;           // 0x5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OddsToSelectRandomMaterial;                        // 0x60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7719[0x4];                                     // Fixing Size Of Struct..
};

// 0x60 (0xA0 - 0x40)
// ScriptStruct FortniteAI.FortAIRuntimePerkInfo_EvasiveManeuvers
struct FFortAIRuntimePerkInfo_EvasiveManeuvers : public FFortAIRuntimePerkInfo
{
public:
	uint8                                        Pad_771A[0x58];                                    // Fixing Size After Last Property..
	float                                        DistanceMinSquared;                                // 0x98(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceMaxSquared;                                // 0x9C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteAI.BotDebugInfo
struct FBotDebugInfo
{
public:
	int32                                        BotID;                                             // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadId;                                           // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BTActiveTasks;                                     // 0x8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlertLevel                       AlertLevel;                                        // 0x18(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_771B[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               Location;                                          // 0x20(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteAI.BotPOIDebugInfo
struct FBotPOIDebugInfo
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_771C[0x3];                                     // Fixing Size After Last Property..
	struct FBox                                  Box;                                               // 0x8(0x38)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBotPOIType                       Type;                                              // 0x44(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Usage;                                             // 0x45(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_771D[0x2];                                     // Fixing Size After Last Property..
	int32                                        NavMeshLocationsCount;                             // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMainPOI;                                        // 0x4C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_771E[0x3];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.BotPOIExcludedZonesDebugInfo
struct FBotPOIExcludedZonesDebugInfo
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        UsagesToExclude;                                   // 0x38(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_771F[0x7];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteAI.AIPopulationCountSnapshot
struct FAIPopulationCountSnapshot
{
public:
	int32                                        NumTotalSpawnedBots;                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAliveBots;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAlivePlayerBots;                                // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAliveNPCBots;                                   // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAliveAIPawns;                                   // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.AthenaAIServiceGroupInfo
struct FAthenaAIServiceGroupInfo
{
public:
	int32                                        GroupId;                                           // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7720[0x4];                                     // Fixing Size After Last Property..
	class UFortPawnComponent_AIGroup*            GroupLeader;                                       // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortPawnComponent_AIGroup*>    GroupMembers;                                      // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 GroupTags;                                         // 0x20(0x20)(Transient, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.CachedSupplyDrop
struct FCachedSupplyDrop
{
public:
	class AFortAthenaSupplyDrop*                 Supplydrop;                                        // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInOctree;                                         // 0x8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7721[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               LastLocation;                                      // 0x10(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.MovingLootInfo
struct FMovingLootInfo
{
public:
	struct FVector                               LastLocationInOctree;                              // 0x0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.ClusterLoot
struct FClusterLoot
{
public:
	struct FBox                                  ClusterBox;                                        // 0x0(0x38)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7722[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteAI.FortBotClusterLootWeightDataTableRow
struct FFortBotClusterLootWeightDataTableRow : public FTableRowBase
{
public:
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteAI.BattleBusPOI
struct FBattleBusPOI
{
public:
	struct FScalableFloat                        IsEnabled;                                         // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     POIFilterQuery;                                    // 0x28(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class AFortPoiVolume*>                ValidPOIVolumeList;                                // 0x70(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_7723[0x10];                                    // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteAI.NavigationPOI
struct FNavigationPOI
{
public:
	struct FScalableFloat                        IsEnabled;                                         // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     POIFilterQuery;                                    // 0x28(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class AFortPoiVolume*>                ValidPOIVolumeList;                                // 0x70(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteAI.CachedPOIVolumeLocations
struct FCachedPOIVolumeLocations
{
public:
	class AFortPoiVolume*                        POIVolume;                                         // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7724[0x18];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.FortServerBotInfo
struct FFortServerBotInfo
{
public:
	class AFortAthenaAIBotController*            BotController;                                     // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortPoiVolume*                        SelectedPoiVolume;                                 // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7725[0x8];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteAI.FortBotBackfillSpawnRequest
struct FFortBotBackfillSpawnRequest
{
public:
	uint8                                        Pad_7726[0x18];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteAI.MMRSpawningInfo
struct FMMRSpawningInfo
{
public:
	uint8                                        Pad_7727[0x28];                                    // Fixing Size Of Struct..
};

// 0x28 (0x38 - 0x10)
// ScriptStruct FortniteAI.MMRSpawningPlayerBotsRuntimeInfo
struct FMMRSpawningPlayerBotsRuntimeInfo : public FMMRSpawningBaseRuntimeInfo
{
public:
	uint8                                        Pad_7728[0x10];                                    // Fixing Size After Last Property..
	TArray<struct FMMRSpawningInfo>              SpawningInfos;                                     // 0x20(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_7729[0x8];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteAI.UpdateBotSkillInfo
struct FUpdateBotSkillInfo
{
public:
	uint8                                        Pad_772A[0xC];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteAI.FortBotDisablePOIRequest
struct FFortBotDisablePOIRequest
{
public:
	uint8                                        Pad_772B[0x8];                                     // Fixing Size After Last Property..
	class UAthenaAIServicePlayerBots*            CachedAIServicePlayerBots;                         // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteAI.AthenaAITrackedZone
struct FAthenaAITrackedZone
{
public:
	uint8                                        Pad_772C[0x30];                                    // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteAI.BotPOI
struct FBotPOI
{
public:
	int32                                        ID;                                                // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_772D[0x3];                                     // Fixing Size After Last Property..
	struct FBox                                  Box;                                               // 0x8(0x38)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBotPOIType                       Type;                                              // 0x44(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_772E[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FVector>                       NavMeshLocations;                                  // 0x48(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bIsMainPOI;                                        // 0x58(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Usage;                                             // 0x59(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_772F[0x6];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.BotPOIExcludedZone
struct FBotPOIExcludedZone
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        UsagesToExclude;                                   // 0x38(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7730[0x7];                                     // Fixing Size Of Struct..
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct FortniteAI.FortBotPOIExcludedZoneDataTableRow
struct FFortBotPOIExcludedZoneDataTableRow : public FTableRowBase
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoxHalfSize;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UsagesToExclude;                                   // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7731[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     PlaylistQuery;                                     // 0x40(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FString                                MapPath;                                           // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7732[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x18 - 0x10)
// ScriptStruct FortniteAI.FortWorldConditionAthenaGamePhase
struct FFortWorldConditionAthenaGamePhase : public FWorldConditionCommonBase
{
public:
	enum class EAthenaGamePhaseStep              PhaseStep;                                         // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7733[0x3];                                     // Fixing Size After Last Property..
	int32                                        SafeZonePhase;                                     // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct FortniteAI.FortWorldConditionInSafeZone
struct FFortWorldConditionInSafeZone : public FWorldConditionCommonActorBase
{
public:
	struct FWorldConditionContextDataRef         ActorRef;                                          // 0x10(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct FortniteAI.FortWorldConditionPerceivedHostilePlayer
struct FFortWorldConditionPerceivedHostilePlayer : public FWorldConditionCommonActorBase
{
public:
	struct FWorldConditionContextDataRef         ActorRef;                                          // 0x10(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct FortniteAI.GameDifficultyInfo
struct FGameDifficultyInfo : public FTableRowBase
{
public:
	bool                                         bIsOnboarding;                                     // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7734[0x3];                                     // Fixing Size After Last Property..
	float                                        Difficulty;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DifficultyMatchmakingMinOverride;                  // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DifficultyMatchmakingMaxOverride;                  // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootLevel;                                         // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERatingsEnforcementType           RatingsEnforcement;                                // 0x1C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7735[0x3];                                     // Fixing Size After Last Property..
	int32                                        RequiredRating;                                    // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumRating;                                     // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PvPRating;                                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecommendedRating;                                 // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScoreBonus;                                        // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7736[0x4];                                     // Fixing Size After Last Property..
	class FString                                LootTierGroup;                                     // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BonusLootTierGroup;                                // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DifficultyIncreaseLootTierGroup;                   // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumDifficultyIncreases;                            // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7737[0x4];                                     // Fixing Size After Last Property..
	class FText                                  ThreatDisplayName;                                 // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  ColorParamName;                                    // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultPlayerLives;                                // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlayerStatClampRowName;                            // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7738[0x4];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteAI.AttributeClamp
struct FAttributeClamp
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClampType                        ClampType;                                         // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7739[0x3];                                     // Fixing Size After Last Property..
	float                                        ClampValue;                                        // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteAI.PlayerClampInfo
struct FPlayerClampInfo : public FTableRowBase
{
public:
	TArray<struct FAttributeClamp>               AttributeClamps;                                   // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct FortniteAI.GameRewardOverridesInfo
struct FGameRewardOverridesInfo : public FTableRowBase
{
public:
	class FString                                MissionName;                                       // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OverrideRewardsTag;                                // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootLevel;                                         // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_773A[0x4];                                     // Fixing Size After Last Property..
	class FString                                LootTierGroup;                                     // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
