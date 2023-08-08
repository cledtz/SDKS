#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x218 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Harvest
class UFortAthenaAIBotEvaluator_Harvest : public UFortAthenaAIBotEvaluator_Movement
{
public:
	uint8                                        Pad_365E[0x20];                                    // Fixing Size After Last Property
	TSubclassOf<class UNavigationQueryFilter>    ProjectionNavigationQueryFilterClass;              // 0x1C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UNavigationQueryFilter>    ValidNavigationQueryFilterClassOverride;           // 0x1D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaximumTimeToHelpFromLastPlayerDamage;             // 0x1D8(0x28)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  HarvestTargetKeyName;                              // 0x200(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_365F[0x4];                                     // Fixing Size After Last Property
	class FName                                  HarvestTargetHitPointKeyName;                      // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3660[0x4];                                     // Fixing Size After Last Property
	class FName                                  HarvestDestinationKeyName;                         // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3661[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Harvest");
		return Clss;
	}

	void HandleUnconverted(class UFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason);
	void HandleConverted(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn);
};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_MovementStyle
class UFortAthenaBTService_MovementStyle : public UBTService
{
public:
	enum class EFortMovementStyle                MovementStyle;                                     // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3663[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_MovementStyle");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class FortniteAIServer.FortBTWorldConditionSchema
class UFortBTWorldConditionSchema : public UWorldConditionSchema
{
public:
	uint8                                        Pad_3665[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTWorldConditionSchema");
		return Clss;
	}

};

// 0x68 (0xD8 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_WorldCondition
class UFortAthenaBTService_WorldCondition : public UBTService
{
public:
	struct FWorldConditionQueryDefinition        Conditions;                                        // 0x70(0x18)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  ConditionsResultName;                              // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3668[0x4];                                     // Fixing Size After Last Property
	struct FWorldConditionQueryState             QueryState;                                        // 0x90(0x30)(NativeAccessSpecifierPrivate)
	class UAIController*                         CachedOwnerController;                             // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                CachedOwnerPawn;                                   // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3669[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_WorldCondition");
		return Clss;
	}

};

// 0x28 (0x98 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_Harvest
class UFortAthenaBTTask_Harvest : public UBTTaskNode
{
public:
	class FName                                  HarvestExecutionStatusKeyName;                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_366C[0x4];                                     // Fixing Size After Last Property
	class FName                                  HarvestTargetKeyName;                              // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_366E[0x4];                                     // Fixing Size After Last Property
	class FName                                  HarvestTargetHitPointKeyName;                      // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3670[0x4];                                     // Fixing Size After Last Property
	class FName                                  HarvestDestinationKeyName;                         // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3672[0x4];                                     // Fixing Size After Last Property
	class FName                                  WeaponTriggerMeleeKeyName;                         // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3673[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_Harvest");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_VehicleSwitchSeat
class UFortAthenaBTTask_VehicleSwitchSeat : public UBTTaskNode
{
public:
	enum class ESwitchSeatType                   SwitchSeatType;                                    // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3675[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_VehicleSwitchSeat");
		return Clss;
	}

};

// 0x18 (0x50 - 0x38)
// Class FortniteAIServer.FortStateTreeConditionSchema
class UFortStateTreeConditionSchema : public UWorldConditionSchema
{
public:
	uint8                                        Pad_3678[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStateTreeConditionSchema");
		return Clss;
	}

};

// 0x8 (0x70 - 0x68)
// Class FortniteAIServer.FortBTDecorator_AIBotVehicleSeatStatus
class UFortBTDecorator_AIBotVehicleSeatStatus : public UBTDecorator
{
public:
	enum class ESeatStatusType                   SeatType;                                          // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_367C[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_AIBotVehicleSeatStatus");
		return Clss;
	}

};

// 0x20 (0x90 - 0x70)
// Class FortniteAIServer.FortBTService_AIEvaluatorsInjector
class UFortBTService_AIEvaluatorsInjector : public UBTService
{
public:
	TArray<class UObject*>                       ReferenceHolder;                                   // 0x70(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FFortBTService_InjectionTagKey> InjectionTagsKeys;                                 // 0x80(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTService_AIEvaluatorsInjector");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class FortniteAIServer.FortBTService_ClearGoalAndAssignment
class UFortBTService_ClearGoalAndAssignment : public UBTService
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTService_ClearGoalAndAssignment");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class FortniteAIServer.FortGameFeatureAction_InjectAIBehavior
class UFortGameFeatureAction_InjectAIBehavior : public UFortGameInstanceGameFeatureAction
{
public:
	TArray<struct FFortAISpawnerTagQueryInjectedBehavior> InjectedBehaviors;                                 // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameFeatureAction_InjectAIBehavior");
		return Clss;
	}

};

// 0x50 (0xF0 - 0xA0)
// Class FortniteAIServer.FortInjectedBehaviorsComponent
class UFortInjectedBehaviorsComponent : public UFortGameStateComponent
{
public:
	uint8                                        Pad_3684[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortInjectedBehaviorsComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_PlayspaceVolume
class UFortQueryContext_PlayspaceVolume : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_PlayspaceVolume");
		return Clss;
	}

};

// 0xB0 (0x138 - 0x88)
// Class FortniteAIServer.FortQueryGenerator_GridInBox
class UFortQueryGenerator_GridInBox : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             BoxWidth;                                          // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             BoxLength;                                         // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0x130(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_GridInBox");
		return Clss;
	}

};

// 0x40 (0xC8 - 0x88)
// Class FortniteAIServer.FortQueryGenerator_GridInVolume
class UFortQueryGenerator_GridInVolume : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UEnvQueryContext>          GenerateInVolume;                                  // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_GridInVolume");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class FortniteAIServer.FortWorldConditionTimeOfDayState
class UFortWorldConditionTimeOfDayState : public UObject
{
public:
	uint8                                        Pad_3690[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortWorldConditionTimeOfDayState");
		return Clss;
	}

	void HandleTimeOfDayPhaseChange(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
};

// 0x10 (0x38 - 0x28)
// Class FortniteAIServer.FortGameFeatureAction_InjectAIEvaluators
class UFortGameFeatureAction_InjectAIEvaluators : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureFortAIEvaluatorEntry> AIEvaluatorList;                                   // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameFeatureAction_InjectAIEvaluators");
		return Clss;
	}

};

// 0x8 (0x90 - 0x88)
// Class FortniteAIServer.FortEnvQueryGenerator_ProjectedPoints
class UFortEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class FName                                  OverridenAgentNameForNavmesh;                      // 0x88(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3692[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEnvQueryGenerator_ProjectedPoints");
		return Clss;
	}

};

// 0x78 (0x108 - 0x90)
// Class FortniteAIServer.FortEnvQueryGenerator_SimpleGrid
class UFortEnvQueryGenerator_SimpleGrid : public UFortEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             GridSize;                                          // 0x90(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xC8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0x100(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEnvQueryGenerator_SimpleGrid");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class FortniteAIServer.FortBTService_ContextOverride
class UFortBTService_ContextOverride : public UBTService
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTService_ContextOverride");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortBTContext_MoveUrgency
class UFortBTContext_MoveUrgency : public UFortBTService_ContextOverride
{
public:
	enum class EFortMovementUrgency              MoveUrgency;                                       // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3699[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTContext_MoveUrgency");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class FortniteAIServer.FortBTContext_SkipNotPerceivedGoals
class UFortBTContext_SkipNotPerceivedGoals : public UFortBTService_ContextOverride
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTContext_SkipNotPerceivedGoals");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortBTContext_SuppressGoalUpdate
class UFortBTContext_SuppressGoalUpdate : public UFortBTService_ContextOverride
{
public:
	bool                                         bUnregisterFromGoalManager;                        // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_369C[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTContext_SuppressGoalUpdate");
		return Clss;
	}

};

// 0x0 (0x90 - 0x90)
// Class FortniteAIServer.FortBTDecorator_CanBeConsideredAirborne
class UFortBTDecorator_CanBeConsideredAirborne : public UBTDecorator_BlackboardBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_CanBeConsideredAirborne");
		return Clss;
	}

};

// 0x68 (0xD0 - 0x68)
// Class FortniteAIServer.FortBTDecorator_DistanceBetween
class UFortBTDecorator_DistanceBetween : public UBTDecorator
{
public:
	enum class EArithmeticKeyOperation           Operator;                                          // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369E[0x7];                                     // Fixing Size After Last Property
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x70(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x98(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        SpecifiedDistance;                                 // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSelf : 1;                                      // Mask: 0x1, PropSize: 0x10xC4(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCalculateAs2D : 1;                                // Mask: 0x2, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FA : 6;                                    // Fixing Bit-Field Size
	uint8                                        Pad_36A1[0x3];                                     // Fixing Size After Last Property
	float                                        DistanceCalculationUpdateRate;                     // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A2[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_DistanceBetween");
		return Clss;
	}

};

// 0x0 (0x100 - 0x100)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_CanActivate
class UFortBTDecorator_GameplayAbility_CanActivate : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_CanActivate");
		return Clss;
	}

};

// 0x8 (0x108 - 0x100)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_CanHitTarget
class UFortBTDecorator_GameplayAbility_CanHitTarget : public UFortBTDecorator_QueryGameplayAbility
{
public:
	uint8                                        UseIdealYawRotationToTarget : 1;                   // Mask: 0x1, PropSize: 0x10x100(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A6[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_CanHitTarget");
		return Clss;
	}

};

// 0x10 (0x110 - 0x100)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_CompareDistance
class UFortBTDecorator_GameplayAbility_CompareDistance : public UFortBTDecorator_QueryGameplayAbility
{
public:
	TArray<struct FDistanceToTargetComparison>   DistanceComparisons;                               // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_CompareDistance");
		return Clss;
	}

};

// 0x0 (0x100 - 0x100)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags");
		return Clss;
	}

};

// 0x78 (0xE0 - 0x68)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_HasGameplayAbility
class UFortBTDecorator_GameplayAbility_HasGameplayAbility : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                AbilityOwningActorKey;                             // 0x68(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayAbilityTag;                                // 0x90(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                GameplayAbilityTagBlackboardKey;                   // 0xB0(0x28)(Edit, NativeAccessSpecifierPublic)
	bool                                         bOnlyTestActiveAbility;                            // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A8[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_HasGameplayAbility");
		return Clss;
	}

};

// 0x8 (0x108 - 0x100)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_HasNearbyPawns
class UFortBTDecorator_GameplayAbility_HasNearbyPawns : public UFortBTDecorator_QueryGameplayAbility
{
public:
	float                                        NearbyPawnDistance;                                // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilterAIPawns;                                    // 0x104(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilterPlayerPawns;                                // 0x105(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A9[0x2];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_HasNearbyPawns");
		return Clss;
	}

};

// 0x8 (0x108 - 0x100)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsClosestPawnInRange
class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange : public UFortBTDecorator_QueryGameplayAbility
{
public:
	float                                        NearbyPawnDistance;                                // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilterAIPawns;                                    // 0x104(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilterPlayerPawns;                                // 0x105(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AD[0x2];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_IsClosestPawnInRange");
		return Clss;
	}

};

// 0x0 (0x100 - 0x100)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsOnCooldown
class UFortBTDecorator_GameplayAbility_IsOnCooldown : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_IsOnCooldown");
		return Clss;
	}

};

// 0x0 (0x100 - 0x100)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget");
		return Clss;
	}

};

// 0x0 (0x100 - 0x100)
// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange");
		return Clss;
	}

};

// 0x0 (0x90 - 0x90)
// Class FortniteAIServer.FortBTDecorator_IsGoalPawn
class UFortBTDecorator_IsGoalPawn : public UBTDecorator_BlackboardBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_IsGoalPawn");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class FortniteAIServer.FortBTDecorator_IsInBotEndGame
class UFortBTDecorator_IsInBotEndGame : public UBTDecorator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_IsInBotEndGame");
		return Clss;
	}

};

// 0x48 (0x148 - 0x100)
// Class FortniteAIServer.FortBTDecorator_IsMoving
class UFortBTDecorator_IsMoving : public UFortBTDecorator_QueryGameplayAbility
{
public:
	float                                        UpdateInterval;                                    // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTime;                                           // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMinDist;                                       // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B2[0x3];                                     // Fixing Size After Last Property
	float                                        MinDistMinTime;                                    // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistanceToTargetComparison           MinDistanceComparison;                             // 0x110(0x38)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_IsMoving");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class FortniteAIServer.FortBTDecorator_IsTakerAirborne
class UFortBTDecorator_IsTakerAirborne : public UBTDecorator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_IsTakerAirborne");
		return Clss;
	}

};

// 0x30 (0x98 - 0x68)
// Class FortniteAIServer.FortBTDecorator_WeaponStatus
class UFortBTDecorator_WeaponStatus : public UBTDecorator
{
public:
	float                                        WeaponStatusUpdateRate;                            // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTestIfCurrentWeaponIsValid : 1;                   // Mask: 0x1, PropSize: 0x10x6C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCurrentWeaponShouldBeValid : 1;                   // Mask: 0x2, PropSize: 0x10x6C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTestAllowedCurrentWeaponTags : 1;                 // Mask: 0x4, PropSize: 0x10x6C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1FB : 5;                                    // Fixing Bit-Field Size
	uint8                                        Pad_36B6[0x3];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 AllowedCurrentWeaponTags;                          // 0x70(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        bTestIfCurrentWeaponIsReloading : 1;               // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCurrentWeaponShouldBeReloading : 1;               // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTestIfCurrentWeaponHasAmmoInMagazine : 1;         // Mask: 0x4, PropSize: 0x10x90(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCurrentWeaponShouldHaveAmmoInMagazine : 1;        // Mask: 0x8, PropSize: 0x10x90(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTestIfCurrentWeaponHasExtraAmmo : 1;              // Mask: 0x10, PropSize: 0x10x90(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCurrentWeaponShouldHaveExtraAmmo : 1;             // Mask: 0x20, PropSize: 0x10x90(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllInterestedTestsMustPass : 1;                   // Mask: 0x40, PropSize: 0x10x90(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36B8[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTDecorator_WeaponStatus");
		return Clss;
	}

};

// 0x60 (0xD0 - 0x70)
// Class FortniteAIServer.FortBTService_ActivateAbility
class UFortBTService_ActivateAbility : public UBTService
{
public:
	struct FGameplayTagContainer                 AbilityTags;                                       // 0x70(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bRequireCanHitTargetWithAbility;                   // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPawnTargetsOnly;                                  // 0x91(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36B9[0x6];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 ProhibitedTargetTags;                              // 0x98(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanActivateWhenMoving;                            // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36BA[0x7];                                     // Fixing Size After Last Property
	TArray<struct FDistanceToTargetComparison>   DistanceChecks;                                    // 0xC0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTService_ActivateAbility");
		return Clss;
	}

};

// 0x50 (0xC0 - 0x70)
// Class FortniteAIServer.FortBTService_UpdateBotMissionBuilding
class UFortBTService_UpdateBotMissionBuilding : public UBTService
{
public:
	struct FBlackboardKeySelector                InterestLocationKey;                               // 0x70(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                BuildOrderKey;                                     // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTService_UpdateBotMissionBuilding");
		return Clss;
	}

};

// 0x8 (0xA0 - 0x98)
// Class FortniteAIServer.FortBTService_UpdateBotMissionGoal
class UFortBTService_UpdateBotMissionGoal : public UBTService_BlackboardBase
{
public:
	uint8                                        bRequireInteraction : 1;                           // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequireInteractionOrLocator : 1;                  // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequireEncounter : 1;                             // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPickClosest : 1;                                  // Mask: 0x8, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BD[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTService_UpdateBotMissionGoal");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class FortniteAIServer.FortBTTask_BotMissionBuild
class UFortBTTask_BotMissionBuild : public UBTTask_BlackboardBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_BotMissionBuild");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class FortniteAIServer.FortBTTask_BotMissionInteract
class UFortBTTask_BotMissionInteract : public UBTTask_BlackboardBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_BotMissionInteract");
		return Clss;
	}

};

// 0x50 (0xC8 - 0x78)
// Class FortniteAIServer.FortBTTask_ExecuteGameplayAbility
class UFortBTTask_ExecuteGameplayAbility : public UBTTask_GameplayTaskBase
{
public:
	struct FGameplayTagContainer                 GameplayAbilityTag;                                // 0x78(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                GameplayAbilityTagBlackboardKey;                   // 0x98(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseBlackboardTag;                                 // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36C0[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_ExecuteGameplayAbility");
		return Clss;
	}

};

// 0x70 (0x120 - 0xB0)
// Class FortniteAIServer.FortBTTask_GameMoveTo
class UFortBTTask_GameMoveTo : public UBTTask_MoveTo
{
public:
	struct FBlackboardKeySelector                FocalPointWhileMoving;                             // 0xB0(0x28)(Edit, NativeAccessSpecifierPublic)
	enum class EPathObstacleAction               PathObstacleAction;                                // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C1[0x7];                                     // Fixing Size After Last Property
	TSubclassOf<class UFortPawn>                 PushBumpedPawnClass;                               // 0xE0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NavFilterTag;                                      // 0xE8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDetectUnexpectedPathBlockingObstacles : 1;        // Mask: 0x1, PropSize: 0x10xEC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableSlowdownAtGoal : 1;                         // Mask: 0x2, PropSize: 0x10xEC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopAtGoal : 1;                                   // Mask: 0x4, PropSize: 0x10xEC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFinishMoveOnOverlap : 1;                          // Mask: 0x8, PropSize: 0x10xEC(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FC : 4;                                    // Fixing Bit-Field Size
	uint8                                        Pad_36C4[0x3];                                     // Fixing Size After Last Property
	struct FBlackboardKeySelector                AcceptableRadiusKey;                               // 0xF0(0x28)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bDeimosFlavor : 1;                                 // Mask: 0x1, PropSize: 0x10x118(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C5[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_GameMoveTo");
		return Clss;
	}

};

// 0x0 (0x120 - 0x120)
// Class FortniteAIServer.FortBTTask_GameMoveDirectlyToward
class UFortBTTask_GameMoveDirectlyToward : public UFortBTTask_GameMoveTo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_GameMoveDirectlyToward");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class FortniteAIServer.FortBTTask_RequestUndermining
class UFortBTTask_RequestUndermining : public UBTTaskNode
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_RequestUndermining");
		return Clss;
	}

};

// 0x20 (0xC0 - 0xA0)
// Class FortniteAIServer.FortBTTask_RotateToFaceBBEntryWithTags
class UFortBTTask_RotateToFaceBBEntryWithTags : public UBTTask_RotateToFaceBBEntry
{
public:
	struct FGameplayTagContainer                 TagsToApply;                                       // 0xA0(0x20)(Edit, Config, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_RotateToFaceBBEntryWithTags");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortBTTask_SetFrustrationDiscouragement
class UFortBTTask_SetFrustrationDiscouragement : public UBTTaskNode
{
public:
	float                                        DiscouragementDuration;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36C7[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_SetFrustrationDiscouragement");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class FortniteAIServer.FortBTTask_Sleep
class UFortBTTask_Sleep : public UBTTaskNode
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_Sleep");
		return Clss;
	}

};

// 0x0 (0xB0 - 0xB0)
// Class FortniteAIServer.FortBTTask_TakerMoveToNavmesh
class UFortBTTask_TakerMoveToNavmesh : public UBTTask_MoveTo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTTask_TakerMoveToNavmesh");
		return Clss;
	}

};

// 0x38 (0x2C8 - 0x290)
// Class FortniteAIServer.FortEQSPrevisActor
class UFortEQSPrevisActor : public UActor
{
public:
	uint8                                        Pad_36CD[0x10];                                    // Fixing Size After Last Property
	class USceneComponent*                       SceneRoot;                                         // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x2A8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEQSPrevisActor");
		return Clss;
	}

	void SetQueryTemplate(class UEnvQuery* InPrevisQueryTemplate);
	void PrepForPrevis();
};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_AIPawnSpawnLocation
class UFortQueryContext_AIPawnSpawnLocation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_AIPawnSpawnLocation");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class FortniteAIServer.FortQueryContext_AllBots
class UFortQueryContext_AllBots : public UEnvQueryContext
{
public:
	bool                                         bIncludeOnlyAthenaGameParticipantBots;             // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36D1[0x7];                                     // Fixing Size After Last Property
	struct FGameplayTagQuery                     BotTagQuery;                                       // 0x30(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_AllBots");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_AllEnemies
class UFortQueryContext_AllEnemies : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_AllEnemies");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_AllGoals
class UFortQueryContext_AllGoals : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_AllGoals");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_AllPlayers
class UFortQueryContext_AllPlayers : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_AllPlayers");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class FortniteAIServer.FortQueryContext_AllPOIVolumes
class UFortQueryContext_AllPOIVolumes : public UEnvQueryContext
{
public:
	struct FGameplayTagQuery                     VolumeLocationTagQuery;                            // 0x28(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_AllPOIVolumes");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneCenter
class UFortQueryContext_AthenaCurrentSafeZoneCenter : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_AthenaCurrentSafeZoneCenter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_BlackboardKeyLeader
class UFortQueryContext_BlackboardKeyLeader : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_BlackboardKeyLeader");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_BuildingRifts
class UFortQueryContext_BuildingRifts : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_BuildingRifts");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_EncounterFallbackTarget
class UFortQueryContext_EncounterFallbackTarget : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_EncounterFallbackTarget");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_EncounterGoalsCenterLocation
class UFortQueryContext_EncounterGoalsCenterLocation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_EncounterGoalsCenterLocation");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_EncounterGoalsOnGround
class UFortQueryContext_EncounterGoalsOnGround : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_EncounterGoalsOnGround");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_EncounterPrimaryAssignmentGoals
class UFortQueryContext_EncounterPrimaryAssignmentGoals : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_EncounterPrimaryAssignmentGoals");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_EncounterProvidedQueryLocations
class UFortQueryContext_EncounterProvidedQueryLocations : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_EncounterProvidedQueryLocations");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_EncounterQueryActor
class UFortQueryContext_EncounterQueryActor : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_EncounterQueryActor");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_EncounterRandomDirection
class UFortQueryContext_EncounterRandomDirection : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_EncounterRandomDirection");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_EncounterTargetObjective
class UFortQueryContext_EncounterTargetObjective : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_EncounterTargetObjective");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_Goal
class UFortQueryContext_Goal : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_Goal");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_GoalProviderRootAssignmentGoals
class UFortQueryContext_GoalProviderRootAssignmentGoals : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_GoalProviderRootAssignmentGoals");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_Goal_SpawnLocation
class UFortQueryContext_Goal_SpawnLocation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_Goal_SpawnLocation");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_NearbyAIPawns
class UFortQueryContext_NearbyAIPawns : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_NearbyAIPawns");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_NearbyAIPawnsMoveDestinations
class UFortQueryContext_NearbyAIPawnsMoveDestinations : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_NearbyAIPawnsMoveDestinations");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawns
class UFortQueryContext_NearbyFriendlyAIPawns : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_NearbyFriendlyAIPawns");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_NearbyFriends
class UFortQueryContext_NearbyFriends : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_NearbyFriends");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_RandomDirectionXY
class UFortQueryContext_RandomDirectionXY : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_RandomDirectionXY");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_StWStormShield
class UFortQueryContext_StWStormShield : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_StWStormShield");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_TwoPointSolverPointA
class UFortQueryContext_TwoPointSolverPointA : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_TwoPointSolverPointA");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class FortniteAIServer.FortQueryContext_TwoPointSolverRotationA
class UFortQueryContext_TwoPointSolverRotationA : public UEnvQueryContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_TwoPointSolverRotationA");
		return Clss;
	}

};

// 0x70 (0xA0 - 0x30)
// Class FortniteAIServer.FortQueryData_CurvesAroundLine
class UFortQueryData_CurvesAroundLine : public UDataAsset
{
public:
	struct FFortPointsOnCurve                    PointsOnSideA;                                     // 0x30(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortPointsOnCurve                    PointsOnSideB;                                     // 0x68(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryData_CurvesAroundLine");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class FortniteAIServer.FortQueryGenerator_ActorsAround
class UFortQueryGenerator_ActorsAround : public UEnvQueryGenerator_ActorsOfClass
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_ActorsAround");
		return Clss;
	}

};

// 0x0 (0x50 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_Allies
class UFortQueryGenerator_Allies : public UEnvQueryGenerator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_Allies");
		return Clss;
	}

};

// 0x0 (0x50 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_AssignmentGoal
class UFortQueryGenerator_AssignmentGoal : public UEnvQueryGenerator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_AssignmentGoal");
		return Clss;
	}

};

// 0x0 (0x50 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_BuildingRifts
class UFortQueryGenerator_BuildingRifts : public UEnvQueryGenerator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_BuildingRifts");
		return Clss;
	}

};

// 0x1D8 (0x228 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_Buildings
class UFortQueryGenerator_Buildings : public UEnvQueryGenerator
{
public:
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x50(0x30)(Edit, NativeAccessSpecifierPrivate)
	class UFortAIAssignmentSettings*             AssignmentSettings;                                // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UEnvQueryContext>          BuildingGridVolumeCenter;                          // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIDataProviderIntValue               HorizontalBuildingCellRadius;                      // 0x90(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderIntValue               BuildingCellsAbove;                                // 0xC8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderIntValue               BuildingCellsBelow;                                // 0x100(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bIncludeWalls;                                     // 0x138(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bIncludeFloors;                                    // 0x170(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<enum class EFloorPatternType>         FloorPatternsToIgnore;                             // 0x1A8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bIncludeCenterCell;                                // 0x1B8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderIntValue               MaxBuildingActorsPerVolumeCenterToCollect;         // 0x1F0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_Buildings");
		return Clss;
	}

};

// 0xB0 (0x100 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_BuildingsOnCachedPath
class UFortQueryGenerator_BuildingsOnCachedPath : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>          CachedPathSource;                                  // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bIncludeWalls;                                     // 0x58(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bIncludeFloors;                                    // 0x90(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bIncludeCenterCell;                                // 0xC8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_BuildingsOnCachedPath");
		return Clss;
	}

};

// 0x0 (0x50 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_EncounterTargets
class UFortQueryGenerator_EncounterTargets : public UEnvQueryGenerator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_EncounterTargets");
		return Clss;
	}

};

// 0x80 (0xD0 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_Enemies
class UFortQueryGenerator_Enemies : public UEnvQueryGenerator
{
public:
	bool                                         bPerceivedEnemiesOnly;                             // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSleepCapableAIUsePerceivedEnemiesOnly;            // 0x51(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreDBNOPawns;                                  // 0x52(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreSleepingAIs;                                // 0x53(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAddEnemiesFromAbilityRange;                       // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36F6[0x3];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 AbilityTags;                                       // 0x58(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 DistanceTags;                                      // 0x78(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             MaxTimeSincePerceived;                             // 0x98(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_Enemies");
		return Clss;
	}

};

// 0x48 (0x98 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_GoalActorsOfClass
class UFortQueryGenerator_GoalActorsOfClass : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UActor>                    SearchedActorClass;                                // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x58(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          SearchCenter;                                      // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_GoalActorsOfClass");
		return Clss;
	}

};

// 0x40 (0x260 - 0x220)
// Class FortniteAIServer.FortQueryGenerator_GoalOnCircle
class UFortQueryGenerator_GoalOnCircle : public UEnvQueryGenerator_OnCircle
{
public:
	bool                                         bIncludeCenterActorInGeneratedGoals;               // 0x220(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36F9[0x7];                                     // Fixing Size After Last Property
	class UFortAIAssignmentSettings*             OptionalAssignmentSettings;                        // 0x228(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortAIAssignmentIdentifier           OptionalAssignmentIdentifier;                      // 0x230(0x30)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_GoalOnCircle");
		return Clss;
	}

};

// 0x8 (0x58 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_GoalPlayerPawns
class UFortQueryGenerator_GoalPlayerPawns : public UEnvQueryGenerator
{
public:
	bool                                         bOnlyAthenaGameParticipants;                       // 0x50(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36FA[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_GoalPlayerPawns");
		return Clss;
	}

};

// 0x80 (0xD0 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_GoalTrackableAIObjects
class UFortQueryGenerator_GoalTrackableAIObjects : public UEnvQueryGenerator
{
public:
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x50(0x30)(Edit, NativeAccessSpecifierPublic)
	TSubclassOf<class UActor>                    SearchedActorClass;                                // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RequiredTag;                                       // 0x88(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36FC[0x4];                                     // Fixing Size After Last Property
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x90(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          SearchCenter;                                      // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_GoalTrackableAIObjects");
		return Clss;
	}

};

// 0x50 (0xA0 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_HotspotSlots
class UFortQueryGenerator_HotspotSlots : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             Radius;                                            // 0x58(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bUseTetherZone : 1;                                // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FD : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_36FF[0x7];                                     // Fixing Size After Last Property
	TSubclassOf<class UFortAIHotSpot>            HotspotClass;                                      // 0x98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_HotspotSlots");
		return Clss;
	}

};

// 0x48 (0xD0 - 0x88)
// Class FortniteAIServer.FortQueryGenerator_InfluenceMapPoints
class UFortQueryGenerator_InfluenceMapPoints : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderIntValue               Density;                                           // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bOnlyFlatSurface : 1;                              // Mask: 0x1, PropSize: 0x10xC0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FE : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3702[0x7];                                     // Fixing Size After Last Property
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_InfluenceMapPoints");
		return Clss;
	}

};

// 0xD8 (0x128 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_LootGoalsAthena
class UFortQueryGenerator_LootGoalsAthena : public UEnvQueryGenerator
{
public:
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x50(0x30)(Edit, NativeAccessSpecifierPublic)
	class UFortAIAssignmentSettings*             AssignmentSettings;                                // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             HorizontalHalfExtents;                             // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             VerticalHalfExtents;                               // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          SearchCenter;                                      // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAvailableLootOnly : 1;                            // Mask: 0x1, PropSize: 0x10x100(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FF : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3706[0x7];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 ExcludedAILootGameplayTags;                        // 0x108(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_LootGoalsAthena");
		return Clss;
	}

};

// 0x48 (0x98 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_MissionPlacementActors
class UFortQueryGenerator_MissionPlacementActors : public UEnvQueryGenerator
{
public:
	struct FGameplayTagQuery                     MissionPlacementActorTagQuery;                     // 0x50(0x48)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_MissionPlacementActors");
		return Clss;
	}

};

// 0x0 (0x50 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_MutatorActorQueryResults
class UFortQueryGenerator_MutatorActorQueryResults : public UEnvQueryGenerator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_MutatorActorQueryResults");
		return Clss;
	}

};

// 0x0 (0x50 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_MutatorBaseQueryResults
class UFortQueryGenerator_MutatorBaseQueryResults : public UEnvQueryGenerator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_MutatorBaseQueryResults");
		return Clss;
	}

};

// 0xD8 (0x128 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_PerceivedActors
class UFortQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{
public:
	bool                                         bGenerateHostileActorGoal;                         // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3708[0x7];                                     // Fixing Size After Last Property
	struct FFortQueryGenerator_PerceivedActors_Settings HostileActorSettings;                              // 0x58(0x40)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bGenerateNeutralActorGoal;                         // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3709[0x7];                                     // Fixing Size After Last Property
	struct FFortQueryGenerator_PerceivedActors_Settings NeutralActorSettings;                              // 0xA0(0x40)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bGenerateFriendlyActorGoal;                        // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_370B[0x7];                                     // Fixing Size After Last Property
	struct FFortQueryGenerator_PerceivedActors_Settings FriendlyActorSettings;                             // 0xE8(0x40)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_PerceivedActors");
		return Clss;
	}

};

// 0xA0 (0x128 - 0x88)
// Class FortniteAIServer.FortQueryGenerator_PointsAroundLine
class UFortQueryGenerator_PointsAroundLine : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAIDataProviderIntValue               MaxPointsPerClusterLocation;                       // 0x90(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             ClusterRadius;                                     // 0xC8(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UFortQueryData_CurvesAroundLine> CurvesAroundLineAsset;                             // 0x100(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_PointsAroundLine");
		return Clss;
	}

};

// 0x150 (0x1D8 - 0x88)
// Class FortniteAIServer.FortQueryGenerator_PointsFromNavGraph
class UFortQueryGenerator_PointsFromNavGraph : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             MinPathDistance;                                   // 0x88(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             MaxPathDistance;                                   // 0xC0(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               Density;                                           // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ExploreDirectionYaw;                               // 0x130(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvDirection                         ExploreDirection;                                  // 0x168(0x20)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ExploreAngleDot;                                   // 0x188(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_370D[0x4];                                     // Fixing Size After Last Property
	struct FAIDataProviderFloatValue             ExploreInnerRadius;                                // 0x190(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bLimitExplorationDirection : 1;                    // Mask: 0x1, PropSize: 0x10x1C8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyFlatSurface : 1;                              // Mask: 0x2, PropSize: 0x10x1C8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseParameterizedDirection : 1;                    // Mask: 0x4, PropSize: 0x10x1C8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseHeightCheck : 1;                               // Mask: 0x8, PropSize: 0x10x1C8(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterAllowTerrain : 1;                           // Mask: 0x10, PropSize: 0x10x1C8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterAllowBuildings : 1;                         // Mask: 0x20, PropSize: 0x10x1C8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterAllowDropdown : 1;                          // Mask: 0x40, PropSize: 0x10x1C8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterAllowClimbup : 1;                           // Mask: 0x80, PropSize: 0x10x1C8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterAllowSmash : 1;                             // Mask: 0x1, PropSize: 0x10x1C9(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_200 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3710[0x2];                                     // Fixing Size After Last Property
	enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator PathDistanceFilterOperator;                        // 0x1CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3711[0x3];                                     // Fixing Size After Last Property
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0x1D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_PointsFromNavGraph");
		return Clss;
	}

};

// 0x48 (0x98 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_PointsInVolume
class UFortQueryGenerator_PointsInVolume : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderIntValue               NumberOfPoints;                                    // 0x50(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EFortNamedNavmesh                 NavMeshToUse;                                      // 0x88(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3718[0x7];                                     // Fixing Size After Last Property
	TSubclassOf<class UEnvQueryContext>          GenerateIn;                                        // 0x90(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_PointsInVolume");
		return Clss;
	}

};

// 0x1C8 (0x250 - 0x88)
// Class FortniteAIServer.FortQueryGenerator_PointsOnBuildingActors
class UFortQueryGenerator_PointsOnBuildingActors : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             BoundingBoxExtentXY;                               // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             BoundingBoxExtentZ;                                // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             PointDensity;                                      // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               MaxGeneratedPoints;                                // 0x130(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFortTaggedActorOctreeFilter          ActorLookupFilter;                                 // 0x168(0xA8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             RandomChanceToSkip;                                // 0x210(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0x248(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_PointsOnBuildingActors");
		return Clss;
	}

};

// 0x80 (0x108 - 0x88)
// Class FortniteAIServer.FortQueryGenerator_PointsOnBuildingGrid
class UFortQueryGenerator_PointsOnBuildingGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderIntValue               HorizontalGridSize;                                // 0x88(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               VerticalGridSize;                                  // 0xC0(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bStartGridFromBottom;                              // 0xF8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePointInVerticalCenterOfCell;                   // 0xF9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_371B[0x6];                                     // Fixing Size After Last Property
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0x100(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_PointsOnBuildingGrid");
		return Clss;
	}

};

// 0x30 (0xB8 - 0x88)
// Class FortniteAIServer.FortQueryGenerator_PointsOnWaterShoreLine
class UFortQueryGenerator_PointsOnWaterShoreLine : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TSubclassOf<class UEnvQueryContext>          GenerateAround;                                    // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UFortQueryData_CurvesAroundLine> CurvesAroundLineAsset;                             // 0x90(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_PointsOnWaterShoreLine");
		return Clss;
	}

};

// 0x40 (0xC8 - 0x88)
// Class FortniteAIServer.FortQueryGenerator_RandomPointsInBoundingVolume
class UFortQueryGenerator_RandomPointsInBoundingVolume : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TSubclassOf<class UEnvQueryContext>          GenerateIn;                                        // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             RandomPointsCount;                                 // 0x90(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_RandomPointsInBoundingVolume");
		return Clss;
	}

};

// 0x40 (0x90 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_SpecificAssignmentGoals
class UFortQueryGenerator_SpecificAssignmentGoals : public UEnvQueryGenerator
{
public:
	struct FFortAIAssignmentIdentifier           AssignmentIdentifier;                              // 0x50(0x30)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortAIAssignmentSettings*             AssignmentSettings;                                // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAIGoalProvider>       GoalProvider;                                      // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_SpecificAssignmentGoals");
		return Clss;
	}

};

// 0x118 (0x168 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_SquadMembers
class UFortQueryGenerator_SquadMembers : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderBoolValue              LookingForHumanPlayers;                            // 0x50(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue              LookingForPlayerBots;                              // 0x88(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue              LookingForNpcs;                                    // 0xC0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue              LookingForAiPawns;                                 // 0xF8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue              IncludeSelf;                                       // 0x130(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_SquadMembers");
		return Clss;
	}

};

// 0xF0 (0x140 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_TerrainDonut
class UFortQueryGenerator_TerrainDonut : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>          Center;                                            // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             Radius;                                            // 0x58(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             RadiusWidth;                                       // 0x90(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             SpacingArc;                                        // 0xC8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue               NumRings;                                          // 0x100(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bFilterAllowTerrain : 1;                           // Mask: 0x1, PropSize: 0x10x138(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterAllowBuildings : 1;                         // Mask: 0x2, PropSize: 0x10x138(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_371F[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_TerrainDonut");
		return Clss;
	}

};

// 0x38 (0x88 - 0x50)
// Class FortniteAIServer.FortQueryGenerator_ValidSpawnRiftActors
class UFortQueryGenerator_ValidSpawnRiftActors : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderIntValue               NumAIForGroup;                                     // 0x50(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryGenerator_ValidSpawnRiftActors");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class FortniteAIServer.FortQueryItemType_PointOrSlot
class UFortQueryItemType_PointOrSlot : public UEnvQueryItemType_Point
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryItemType_PointOrSlot");
		return Clss;
	}

};

// 0x70 (0x268 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_GoalBase
class UFortQueryTest_GoalBase : public UEnvQueryTest
{
public:
	uint8                                        bScoreEnemies : 1;                                 // Mask: 0x1, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bScoreEncounterGoals : 1;                          // Mask: 0x2, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bScoreWorldGoals : 1;                              // Mask: 0x4, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bScoreSpecificAssignments : 1;                     // Mask: 0x8, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_201 : 4;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3721[0x7];                                     // Fixing Size After Last Property
	TArray<struct FFortAIAssignmentIdentifier>   AssignmentIDs;                                     // 0x200(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAIAssignmentIdentifier>   ProhibitedAssignmentIDs;                           // 0x210(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     GoalActorTagQuery;                                 // 0x220(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalBase");
		return Clss;
	}

};

// 0x1C0 (0x428 - 0x268)
// Class FortniteAIServer.FortQueryTest_AssignmentTypeInterest
class UFortQueryTest_AssignmentTypeInterest : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue             InvalidTypeStartInterest;                          // 0x268(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             InvalidTypeEndInterest;                            // 0x2A0(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             InvalidTypeTimeBeforeLerp;                         // 0x2D8(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             InvalidTypeLerpDuration;                           // 0x310(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             ValidTypeStartInterest;                            // 0x348(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             ValidTypeEndInterest;                              // 0x380(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             ValidTypeTimeBeforeLerp;                           // 0x3B8(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             ValidTypeLerpDuration;                             // 0x3F0(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_AssignmentTypeInterest");
		return Clss;
	}

};

// 0x650 (0x8B8 - 0x268)
// Class FortniteAIServer.FortQueryTest_BuildingCriteria
class UFortQueryTest_BuildingCriteria : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue             ScoreForGroundSupportedFloor;                      // 0x268(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             ScoreForBeingGroundSupported;                      // 0x2A0(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             ScoreForTraps;                                     // 0x2D8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             ScoreForWalls;                                     // 0x310(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             ScoreForNavigableOpening;                          // 0x348(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortAIAssignmentIdentifier           RootAssignmentID;                                  // 0x380(0x30)(Edit, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bPreferCloserToRootAssignment;                     // 0x3B0(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             ScoreForDistanceFromClosestRootAssignmentGoal;     // 0x3E8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             MinDistanceForDistanceScoring;                     // 0x420(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             MaxDistanceForDistanceScoring;                     // 0x458(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             MaxHealthScore;                                    // 0x490(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bPreferHigherHealth;                               // 0x4C8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             ClampMaxHealthValue;                               // 0x500(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             ClampMinHealthValue;                               // 0x538(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bPreferHigherHealthPercentage;                     // 0x570(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             MaxHealthPercentageScore;                          // 0x5A8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bWantsBuildingRepairableByOwner;                   // 0x5E0(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             RepairableBuildingScore;                           // 0x618(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             NotRepairableBuildingScore;                        // 0x650(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             NeedsRepairBuildingScore;                          // 0x688(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             DoesntNeedsRepairBuildingScore;                    // 0x6C0(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bWantsDamagedByFriendly;                           // 0x6F8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             DamagedByFriendlyMaxLifespan;                      // 0x730(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             DamagedByFriendlyMinDamage;                        // 0x768(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             DamagedByFriendlyScore;                            // 0x7A0(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              bWantsDamagedByEnemy;                              // 0x7D8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             DamagedByEnemyMaxLifespan;                         // 0x810(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             DamagedByEnemyMinDamage;                           // 0x848(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             DamagedByEnemyScore;                               // 0x880(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_BuildingCriteria");
		return Clss;
	}

};

// 0x0 (0x268 - 0x268)
// Class FortniteAIServer.FortQueryTest_CanAttackTarget
class UFortQueryTest_CanAttackTarget : public UFortQueryTest_GoalBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_CanAttackTarget");
		return Clss;
	}

};

// 0x0 (0x268 - 0x268)
// Class FortniteAIServer.FortQueryTest_CanBeDamaged
class UFortQueryTest_CanBeDamaged : public UFortQueryTest_GoalBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_CanBeDamaged");
		return Clss;
	}

};

// 0x30 (0x228 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_CanHitWithGameplayAbility
class UFortQueryTest_CanHitWithGameplayAbility : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          AIsUsingAbility;                                   // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          AbilityTargets;                                    // 0x200(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayAbilityTag;                                // 0x208(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_CanHitWithGameplayAbility");
		return Clss;
	}

};

// 0x48 (0x240 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_CurieState
class UFortQueryTest_CurieState : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                     CurieStateQuery;                                   // 0x1F8(0x48)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_CurieState");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_DecoyDistance
class UFortQueryTest_DecoyDistance : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          DistanceTo;                                        // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_DecoyDistance");
		return Clss;
	}

};

// 0x10 (0x208 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_DeltaDistance
class UFortQueryTest_DeltaDistance : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          LocationProviderContext;                           // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDistance2D;                                    // 0x200(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3725[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_DeltaDistance");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_DistanceToActorBound
class UFortQueryTest_DistanceToActorBound : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          DistanceTo;                                        // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_DistanceToActorBound");
		return Clss;
	}

};

// 0x0 (0x1F8 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_DistanceToIndestructibleBuilding
class UFortQueryTest_DistanceToIndestructibleBuilding : public UEnvQueryTest
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_DistanceToIndestructibleBuilding");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_EnvironmentalDanger
class UFortQueryTest_EnvironmentalDanger : public UEnvQueryTest
{
public:
	bool                                         bUse3DBoundsCheck;                                 // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3728[0x3];                                     // Fixing Size After Last Property
	struct FGameplayTag                          DangerSourceActorRegistryTag;                      // 0x1FC(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_EnvironmentalDanger");
		return Clss;
	}

};

// 0x10 (0x208 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_GameplayTagsPerDifficulty
class UFortQueryTest_GameplayTagsPerDifficulty : public UEnvQueryTest
{
public:
	TArray<struct FFortGameplayTagQueryPerDifficulty> TagQueriesPerDifficulty;                           // 0x1F8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GameplayTagsPerDifficulty");
		return Clss;
	}

};

// 0x18 (0x280 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalActorDot
class UFortQueryTest_GoalActorDot : public UFortQueryTest_GoalBase
{
public:
	TSubclassOf<class UEnvQueryContext>          LineATo;                                           // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UEnvQueryContext>          LineBTo;                                           // 0x270(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortTestGoalActorDot             TestMode;                                          // 0x278(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAbsoluteValue;                                    // 0x279(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3729[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalActorDot");
		return Clss;
	}

};

// 0x0 (0x268 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalActorTimeSinceSpawn
class UFortQueryTest_GoalActorTimeSinceSpawn : public UFortQueryTest_GoalBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalActorTimeSinceSpawn");
		return Clss;
	}

};

// 0x38 (0x2A0 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalDiscouragement
class UFortQueryTest_GoalDiscouragement : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderBoolValue              DisableDiscouragementWhenUndermining;              // 0x268(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalDiscouragement");
		return Clss;
	}

};

// 0x18 (0x280 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalDistance
class UFortQueryTest_GoalDistance : public UFortQueryTest_GoalBase
{
public:
	enum class EDistanceMode                     DistanceMode;                                      // 0x268(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_372A[0x7];                                     // Fixing Size After Last Property
	TSubclassOf<class UEnvQueryContext>          DistanceTo;                                        // 0x270(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEnvTestDistance                  TestMode;                                          // 0x278(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_372B[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalDistance");
		return Clss;
	}

};

// 0x28 (0x290 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalDistanceRanges
class UFortQueryTest_GoalDistanceRanges : public UFortQueryTest_GoalBase
{
public:
	enum class EDistanceMode                     DistanceMode;                                      // 0x268(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_372D[0x7];                                     // Fixing Size After Last Property
	TSubclassOf<class UEnvQueryContext>          DistanceTo;                                        // 0x270(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEnvTestDistance                  ScreeningTestMode;                                 // 0x278(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEnvTestDistance                  TestMode;                                          // 0x279(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_372E[0x6];                                     // Fixing Size After Last Property
	TArray<struct FGoalDistanceData>             GoalDistanceDataRanges;                            // 0x280(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalDistanceRanges");
		return Clss;
	}

};

// 0x0 (0x268 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalFrustrationDiscouragement
class UFortQueryTest_GoalFrustrationDiscouragement : public UFortQueryTest_GoalBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalFrustrationDiscouragement");
		return Clss;
	}

};

// 0x58 (0x2C0 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalGameplayTags
class UFortQueryTest_GoalGameplayTags : public UFortQueryTest_GoalBase
{
public:
	bool                                         bShouldLookupQueryByTag;                           // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_372F[0x7];                                     // Fixing Size After Last Property
	struct FGameplayTagQuery                     TagQueryToMatch;                                   // 0x270(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          QueryLookupTag;                                    // 0x2B8(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldPassWhenQueryNotFound;                      // 0x2BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireAllProvidedTagQueriesPass;                 // 0x2BD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3730[0x2];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalGameplayTags");
		return Clss;
	}

};

// 0x80 (0x2E8 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalMarkedByPlayer
class UFortQueryTest_GoalMarkedByPlayer : public UFortQueryTest_GoalBase
{
public:
	struct FGameplayTagQuery                     OwnerTagQuery;                                     // 0x268(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderBoolValue              OnlyConverterMarkedTargets;                        // 0x2B0(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalMarkedByPlayer");
		return Clss;
	}

};

// 0x8 (0x270 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalNumberOfAIAssigned
class UFortQueryTest_GoalNumberOfAIAssigned : public UFortQueryTest_GoalBase
{
public:
	enum class ECountAIAssignedToType            TypeOfMatchToCount;                                // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3731[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalNumberOfAIAssigned");
		return Clss;
	}

};

// 0x0 (0x268 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalOverallDamageCaused
class UFortQueryTest_GoalOverallDamageCaused : public UFortQueryTest_GoalBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalOverallDamageCaused");
		return Clss;
	}

};

// 0x8 (0x270 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalPickupFilter
class UFortQueryTest_GoalPickupFilter : public UFortQueryTest_GoalBase
{
public:
	float                                        MaxLifetime;                                       // 0x268(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortPickupSpawnSource            RequiredPickupSpawnSource;                         // 0x26C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3734[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalPickupFilter");
		return Clss;
	}

};

// 0x38 (0x2A0 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalProject
class UFortQueryTest_GoalProject : public UFortQueryTest_GoalBase
{
public:
	struct FEnvTraceData                         ProjectionData;                                    // 0x268(0x38)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalProject");
		return Clss;
	}

};

// 0x118 (0x380 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalStickiness
class UFortQueryTest_GoalStickiness : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue             StartValueForGoal;                                 // 0x268(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             EndValueForGoal;                                   // 0x2A0(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             TimeBeforeValueLerp;                               // 0x2D8(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             ValueLerpDuration;                                 // 0x310(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderBoolValue              ApplyStickinessToAllGoalsWithSameActor;            // 0x348(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalStickiness");
		return Clss;
	}

};

// 0x0 (0x268 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalType
class UFortQueryTest_GoalType : public UFortQueryTest_GoalBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalType");
		return Clss;
	}

};

// 0x0 (0x268 - 0x268)
// Class FortniteAIServer.FortQueryTest_GoalWithinTetheredBounds
class UFortQueryTest_GoalWithinTetheredBounds : public UFortQueryTest_GoalBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_GoalWithinTetheredBounds");
		return Clss;
	}

};

// 0x10 (0x208 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_HasNearbyBuildings
class UFortQueryTest_HasNearbyBuildings : public UEnvQueryTest
{
public:
	uint8                                        bIncludeCenter : 1;                                // Mask: 0x1, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeFloors : 1;                                // Mask: 0x2, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeFloorsAbove : 1;                           // Mask: 0x4, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeWalls : 1;                                 // Mask: 0x8, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_202 : 4;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3736[0x3];                                     // Fixing Size After Last Property
	int32                                        ExtentXY;                                          // 0x1FC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExtentZ;                                           // 0x200(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3737[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_HasNearbyBuildings");
		return Clss;
	}

};

// 0x40 (0x238 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_HasNearbyEncounterGoals
class UFortQueryTest_HasNearbyEncounterGoals : public UEnvQueryTest
{
public:
	uint8                                        bOnlyActiveEncounters : 1;                         // Mask: 0x1, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_203 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_3738[0x7];                                     // Fixing Size After Last Property
	struct FAIDataProviderFloatValue             TestDistance;                                      // 0x200(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_HasNearbyEncounterGoals");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_Health
class UFortQueryTest_Health : public UEnvQueryTest
{
public:
	bool                                         bUsePercentHealth;                                 // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3739[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_Health");
		return Clss;
	}

};

// 0xF8 (0x2F0 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_HealthAndShield
class UFortQueryTest_HealthAndShield : public UEnvQueryTest
{
public:
	bool                                         bConsiderHealth;                                   // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_373A[0x7];                                     // Fixing Size After Last Property
	struct FAIDataProviderFloatValue             HealthMin;                                         // 0x200(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             HealthMax;                                         // 0x238(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHealthAsPercent;                                  // 0x270(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsiderShield;                                   // 0x271(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_373B[0x6];                                     // Fixing Size After Last Property
	struct FAIDataProviderFloatValue             ShieldMin;                                         // 0x278(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ShieldMax;                                         // 0x2B0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bShieldAsPercent;                                  // 0x2E8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_373C[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_HealthAndShield");
		return Clss;
	}

};

// 0x40 (0x238 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_HotspotSlotOrientation
class UFortQueryTest_HotspotSlotOrientation : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          FaceToward;                                        // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             DotThreshold;                                      // 0x200(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_HotspotSlotOrientation");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_HotspotSlotState
class UFortQueryTest_HotspotSlotState : public UEnvQueryTest
{
public:
	enum class EAIHotSpotSlot                    SlotState;                                         // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_373D[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_HotspotSlotState");
		return Clss;
	}

};

// 0x0 (0x1F8 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_InfluenceScore
class UFortQueryTest_InfluenceScore : public UEnvQueryTest
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_InfluenceScore");
		return Clss;
	}

};

// 0x0 (0x1F8 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_InsideAIBotLeash
class UFortQueryTest_InsideAIBotLeash : public UEnvQueryTest
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_InsideAIBotLeash");
		return Clss;
	}

};

// 0x0 (0x1F8 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_InsideAthenaLeash
class UFortQueryTest_InsideAthenaLeash : public UEnvQueryTest
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_InsideAthenaLeash");
		return Clss;
	}

};

// 0x48 (0x240 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_InsideAthenaSafeZone
class UFortQueryTest_InsideAthenaSafeZone : public UEnvQueryTest
{
public:
	bool                                         bUseCurrentSafeZoneIndicatorRadius;                // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_373E[0x7];                                     // Fixing Size After Last Property
	struct FAIDataProviderIntValue               SafeZoneIndex;                                     // 0x200(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bNextSafeZone;                                     // 0x238(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_373F[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_InsideAthenaSafeZone");
		return Clss;
	}

};

// 0x0 (0x1F8 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_InsideBuilding
class UFortQueryTest_InsideBuilding : public UEnvQueryTest
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_InsideBuilding");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_InsideWater
class UFortQueryTest_InsideWater : public UEnvQueryTest
{
public:
	float                                        TestRadius;                                        // 0x1F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3741[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_InsideWater");
		return Clss;
	}

};

// 0x48 (0x240 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_IsCloseToHotspotSlot
class UFortQueryTest_IsCloseToHotspotSlot : public UEnvQueryTest
{
public:
	TSubclassOf<class UFortAIHotSpot>            HotspotClass;                                      // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             Radius;                                            // 0x200(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bIgnoreItemsWithSlotData;                          // 0x238(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3743[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_IsCloseToHotspotSlot");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_IsCloseToPatrolWard
class UFortQueryTest_IsCloseToPatrolWard : public UEnvQueryTest
{
public:
	enum class EWardAffectType                   WardEffectTypeFilter;                              // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3744[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_IsCloseToPatrolWard");
		return Clss;
	}

};

// 0x38 (0x230 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_IsGoalForAssignment
class UFortQueryTest_IsGoalForAssignment : public UEnvQueryTest
{
public:
	bool                                         bRetrieveRootAssignmentFromOwner;                  // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3745[0x7];                                     // Fixing Size After Last Property
	struct FFortAIAssignmentIdentifier           RootAssignmentID;                                  // 0x200(0x30)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_IsGoalForAssignment");
		return Clss;
	}

};

// 0xB8 (0x320 - 0x268)
// Class FortniteAIServer.FortQueryTest_IsGoalHostile
class UFortQueryTest_IsGoalHostile : public UFortQueryTest_GoalBase
{
public:
	struct FGameplayTagQuery                     OwnerTagQuery;                                     // 0x268(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     EnemyPawnTagsToConsider;                           // 0x2B0(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BuildingTagsToConsider;                            // 0x2F8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bConsiderDefenders;                                // 0x318(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3746[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_IsGoalHostile");
		return Clss;
	}

};

// 0x58 (0x250 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_IsInLeaderLOS
class UFortQueryTest_IsInLeaderLOS : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                     OwnerTagQuery;                                     // 0x1F8(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bRequireLOSRayCast;                                // 0x240(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3747[0x3];                                     // Fixing Size After Last Property
	float                                        RayCastLeaderVerticalOffset;                       // 0x244(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RayCastItemVerticalOffset;                         // 0x248(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDotProduct;                                     // 0x24C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_IsInLeaderLOS");
		return Clss;
	}

};

// 0xA8 (0x388 - 0x2E0)
// Class FortniteAIServer.FortQueryTest_IsObstructed
class UFortQueryTest_IsObstructed : public UEnvQueryTest_Trace
{
public:
	struct FAIDataProviderBoolValue              OverrideContextLocationXWithItemLocationX;         // 0x2E0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              OverrideContextLocationYWithItemLocationY;         // 0x318(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              OverrideContextLocationZWithItemLocationZ;         // 0x350(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_IsObstructed");
		return Clss;
	}

};

// 0xA8 (0x388 - 0x2E0)
// Class FortniteAIServer.FortQueryTest_IsObstructedOverlap
class UFortQueryTest_IsObstructedOverlap : public UEnvQueryTest_Trace
{
public:
	struct FAIDataProviderBoolValue              OverrideContextLocationXWithItemLocationX;         // 0x2E0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              OverrideContextLocationYWithItemLocationY;         // 0x318(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              OverrideContextLocationZWithItemLocationZ;         // 0x350(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_IsObstructedOverlap");
		return Clss;
	}

};

// 0x68 (0x260 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_MissionGameplayTagMatch
class UFortQueryTest_MissionGameplayTagMatch : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                     MissionPlacementActorTagQuery;                     // 0x1F8(0x48)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 GameplayTagsToMatch;                               // 0x240(0x20)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_MissionGameplayTagMatch");
		return Clss;
	}

};

// 0x48 (0x240 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_MissionSameMap
class UFortQueryTest_MissionSameMap : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                     MissionPlacementActorTagQuery;                     // 0x1F8(0x48)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_MissionSameMap");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_NavGraphDistance
class UFortQueryTest_NavGraphDistance : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          DistanceTo;                                        // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_NavGraphDistance");
		return Clss;
	}

};

// 0x10 (0x208 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_OnFlatSurface
class UFortQueryTest_OnFlatSurface : public UEnvQueryTest
{
public:
	float                                        Radius;                                            // 0x1F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToleranceZ;                                        // 0x1FC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceOffsetUp;                                     // 0x200(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceOffsetDown;                                   // 0x204(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_OnFlatSurface");
		return Clss;
	}

};

// 0x20 (0x218 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_OnFlatSurfaceNoNavMesh
class UFortQueryTest_OnFlatSurfaceNoNavMesh : public UEnvQueryTest
{
public:
	float                                        Radius;                                            // 0x1F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZTolerance;                                        // 0x1FC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalTolerance;                                   // 0x200(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceOffset;                                       // 0x204(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UActor>>            ActorClassesToIgnoreInTrace;                       // 0x208(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_OnFlatSurfaceNoNavMesh");
		return Clss;
	}

};

// 0x8 (0x2C0 - 0x2B8)
// Class FortniteAIServer.FortQueryTest_PathfindingBatch
class UFortQueryTest_PathfindingBatch : public UEnvQueryTest_PathfindingBatch
{
public:
	struct FGameplayTag                          NavFilterTag;                                      // 0x2B8(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374A[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_PathfindingBatch");
		return Clss;
	}

};

// 0x8 (0x270 - 0x268)
// Class FortniteAIServer.FortQueryTest_PawnHealth
class UFortQueryTest_PawnHealth : public UFortQueryTest_GoalBase
{
public:
	bool                                         bUsePercentHealth;                                 // 0x268(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_374B[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_PawnHealth");
		return Clss;
	}

};

// 0x0 (0x268 - 0x268)
// Class FortniteAIServer.FortQueryTest_PawnIsDBNO
class UFortQueryTest_PawnIsDBNO : public UFortQueryTest_GoalBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_PawnIsDBNO");
		return Clss;
	}

};

// 0x10 (0x208 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_PerceptionAge
class UFortQueryTest_PerceptionAge : public UEnvQueryTest
{
public:
	enum class ECorePerceptionTypes              Sense;                                             // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374C[0x7];                                     // Fixing Size After Last Property
	TSubclassOf<class UAISense>                  SenseClass;                                        // 0x200(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_PerceptionAge");
		return Clss;
	}

};

// 0x210 (0x478 - 0x268)
// Class FortniteAIServer.FortQueryTest_PerceptionAll
class UFortQueryTest_PerceptionAll : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue             SenseScores[0x6];                                  // 0x268(0x150)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UAISense>, struct FAIDataProviderFloatValue> AdditionalSenseScores;                             // 0x3B8(0x50)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             MinSenseAge;                                       // 0x408(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             MaxSenseAge;                                       // 0x440(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_PerceptionAll");
		return Clss;
	}

};

// 0x10 (0x208 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_PerceptionExists
class UFortQueryTest_PerceptionExists : public UEnvQueryTest
{
public:
	enum class ECorePerceptionTypes              Sense;                                             // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374E[0x7];                                     // Fixing Size After Last Property
	TSubclassOf<class UAISense>                  SenseClass;                                        // 0x200(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_PerceptionExists");
		return Clss;
	}

};

// 0x118 (0x380 - 0x268)
// Class FortniteAIServer.FortQueryTest_PickupDropper
class UFortQueryTest_PickupDropper : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue             ValueConverterDroppedPickup;                       // 0x268(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             ValueOtherDroppedPickupInitial;                    // 0x2A0(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             ValueOtherDroppedPickupFinal;                      // 0x2D8(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             TimeOtherDroppedPickupFinal;                       // 0x310(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderBoolValue              LerpFromInitialToFinal;                            // 0x348(0x38)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_PickupDropper");
		return Clss;
	}

};

// 0x28 (0x220 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_PointInBuildingFoundation
class UFortQueryTest_PointInBuildingFoundation : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          BuildingFoundationContext;                         // 0x1F8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UBuildingFoundation>       BuildingFoundationClass;                           // 0x200(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               BoundingBoxScale;                                  // 0x208(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_PointInBuildingFoundation");
		return Clss;
	}

};

// 0x120 (0x388 - 0x268)
// Class FortniteAIServer.FortQueryTest_PrimaryAssignment
class UFortQueryTest_PrimaryAssignment : public UFortQueryTest_GoalBase
{
public:
	bool                                         bUseItemActorLocation;                             // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3751[0x7];                                     // Fixing Size After Last Property
	struct FAIDataProviderFloatValue             DistanceClose;                                     // 0x270(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             DistanceFar;                                       // 0x2A8(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             PercentValueClose;                                 // 0x2E0(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             PercentValueRegular;                               // 0x318(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             PercentValueFar;                                   // 0x350(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_PrimaryAssignment");
		return Clss;
	}

};

// 0x0 (0x1F8 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_ProjectOnNavMesh
class UFortQueryTest_ProjectOnNavMesh : public UEnvQueryTest
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_ProjectOnNavMesh");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_Random
class UFortQueryTest_Random : public UEnvQueryTest
{
public:
	uint8                                        bUseRandomSeedForAI : 1;                           // Mask: 0x1, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseRandomSeedForOthers : 1;                       // Mask: 0x2, PropSize: 0x10x1F8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3755[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_Random");
		return Clss;
	}

};

// 0x58 (0x250 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_TowardNextAthenaSafeZone
class UFortQueryTest_TowardNextAthenaSafeZone : public UEnvQueryTest
{
public:
	struct FAIDataProviderIntValue               SafeZoneIndex;                                     // 0x1F8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bCheckAcceptanceAngleTowardNextCenter;             // 0x230(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3757[0x3];                                     // Fixing Size After Last Property
	float                                        AcceptanceAngleTowardNextCenter;                   // 0x234(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                ExclusionSafeZoneIndex;                            // 0x238(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3758[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_TowardNextAthenaSafeZone");
		return Clss;
	}

};

// 0x120 (0x318 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_ValidSurface
class UFortQueryTest_ValidSurface : public UEnvQueryTest
{
public:
	struct FAIDataProviderFloatValue             Radius;                                            // 0x1F8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             TraceOffsetUp;                                     // 0x230(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             TraceOffsetDown;                                   // 0x268(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceCollisionChannel;                             // 0x2A0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_375B[0x7];                                     // Fixing Size After Last Property
	struct FAIDataProviderFloatValue             FlatSurfaceToleranceZ;                             // 0x2A8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPhysicalMaterial>> SurfaceMaterials;                                  // 0x2E0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAreSurfaceMaterialsValid;                         // 0x2F0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_375D[0x7];                                     // Fixing Size After Last Property
	TArray<TSoftClassPtr<class UActor>>          ValidHitActorClasses;                              // 0x2F8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UActor>>          InvalidHitActorClasses;                            // 0x308(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_ValidSurface");
		return Clss;
	}

};

// 0x28 (0x220 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_WithinHotfixVolumeBounds
class UFortQueryTest_WithinHotfixVolumeBounds : public UEnvQueryTest
{
public:
	class UDataTable*                            BoundsTable;                                       // 0x1F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               BoundsExtentBuffer;                                // 0x200(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bXYOnly;                                           // 0x218(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3760[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_WithinHotfixVolumeBounds");
		return Clss;
	}

};

// 0x68 (0x260 - 0x1F8)
// Class FortniteAIServer.FortQueryTest_WithinTaggedArea
class UFortQueryTest_WithinTaggedArea : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x1F8(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector                               AreaExtentBuffer;                                  // 0x240(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAssumeInfiniteHeightForArea;                      // 0x258(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3762[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_WithinTaggedArea");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class FortniteAIServer.FortGameplayInteractionSmartObjectBehaviorDefinition
class UFortGameplayInteractionSmartObjectBehaviorDefinition : public UGameplayInteractionSmartObjectBehaviorDefinition
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameplayInteractionSmartObjectBehaviorDefinition");
		return Clss;
	}

	bool CanBeUsedBy(class UActor* User, class UActor* SmartObjectActor);
};

// 0x90 (0x108 - 0x78)
// Class FortniteAIServer.FortAthenaBTTask_BotAmbushPlayer
class UFortAthenaBTTask_BotAmbushPlayer : public UBTTask_Wait
{
public:
	float                                        FacingPrecision;                                   // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WeaponCooldown;                                    // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClearBlackboardOnFinished;                        // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3769[0x7];                                     // Fixing Size After Last Property
	struct FBlackboardKeySelector                TargetedPlayerKeySelector;                         // 0x88(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                MaxLocationErrorKeySelector;                       // 0xB0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                MinLocationErrorKeySelector;                       // 0xD8(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_376A[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_BotAmbushPlayer");
		return Clss;
	}

};

// 0x8 (0x70 - 0x68)
// Class FortniteAIServer.FortAthenaBTDecorator_BehaviorControls
class UFortAthenaBTDecorator_BehaviorControls : public UBTDecorator
{
public:
	enum class EBehaviorTreeBranches             BehaviorTreeBranch;                                // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_376B[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTDecorator_BehaviorControls");
		return Clss;
	}

};

// 0x30 (0xD8 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_AimDownSight
class UFortAthenaAIBotEvaluator_AimDownSight : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  WeaponKeyName;                                     // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ThrowableAttacksName;                              // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TargetActorName;                                   // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  UrgentMovementName;                                // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSkipTargetChecks;                                 // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_376D[0x7];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;                       // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_376E[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_AimDownSight");
		return Clss;
	}

};

// 0x68 (0x210 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Ambush
class UFortAthenaAIBotEvaluator_Ambush : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  LastKnownPositionName;                             // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DestinationKeyName;                                // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MoveToDestinationKeyName;                          // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AggressivenessName;                                // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3771[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Ambush");
		return Clss;
	}

};

// 0x18 (0x1C0 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Attack
class UFortAthenaAIBotEvaluator_Attack : public UFortAthenaAIBotEvaluator_Movement
{
public:
	uint8                                        Pad_3773[0x4];                                     // Fixing Size After Last Property
	class FName                                  WeaponKeyName;                                     // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MoveToDestinationKeyName;                          // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TargetActorName;                                   // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3774[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Attack");
		return Clss;
	}

};

// 0x28 (0x1D0 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_AvoidThreat
class UFortAthenaAIBotEvaluator_AvoidThreat : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  AvoidThreatKeyName;                                // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AvoidThreatMovementStateKeyName;                   // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AvoidThreatDestinationKeyName;                     // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3776[0xC];                                     // Fixing Size After Last Property
	class UActor*                                CurrentThreatActorAvoiding;                        // 0x1C0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;                           // 0x1C8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_AvoidThreat");
		return Clss;
	}

};

// 0xB8 (0x260 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Bunker
class UFortAthenaAIBotEvaluator_Bunker : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  BuildExecutionStatusKeyName;                       // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  HealingStatusKeyName;                              // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 DangerTags;                                        // 0x1B0(0x20)(Edit, AdvancedDisplay, NativeAccessSpecifierPrivate)
	uint8                                        Pad_377A[0x90];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Bunker");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_CanMove
class UFortAthenaAIBotEvaluator_CanMove : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  CanMoveKeyName;                                    // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_377B[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_CanMove");
		return Clss;
	}

};

// 0x40 (0xE8 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched
class UFortAthenaAIBotEvaluator_CharacterLaunched : public UFortAthenaAIBotEvaluator
{
public:
	bool                                         bSteerInSameDirectionAsLaunchVelocity;             // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3780[0x3];                                     // Fixing Size After Last Property
	class FName                                  CharacterLaunchedExecutionStatusKeyName;           // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SteerDirectionKeyName;                             // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3781[0x4];                                     // Fixing Size After Last Property
	struct FVector                               LastLaunchVelocity;                                // 0xB8(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet;                            // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3782[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_CharacterLaunched");
		return Clss;
	}

	void OnZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* FortPlayerPawn);
};

// 0x168 (0x210 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Conversation
class UFortAthenaAIBotEvaluator_Conversation : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  IsInConversationStateName;                         // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3789[0x4];                                     // Fixing Size After Last Property
	TArray<class FName>                          ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames; // 0xB0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPrivate)
	uint8                                        Pad_378A[0x10];                                    // Fixing Size After Last Property
	TArray<class FName>                          MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames; // 0xD0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPrivate)
	uint8                                        Pad_378B[0x10];                                    // Fixing Size After Last Property
	bool                                         bForceStopIfNoPlayerNearby;                        // 0xF0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_378C[0x7];                                     // Fixing Size After Last Property
	class UFortAthenaAIRuntimeParameters_Conversation* ConversationRuntimeParameters;                     // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                ActorToFocus;                                      // 0x100(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_378D[0x108];                                   // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Conversation");
		return Clss;
	}

	void OnPlayerPawnSpawned(class UFortAthenaAIBotController* BotController, class UFortPlayerPawnAthena* BotPawn);
};

// 0x70 (0x218 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Converted
class UFortAthenaAIBotEvaluator_Converted : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  ShouldMoveTowardsConverterName;                    // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ShouldTeleportTowardsConverterName;                // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ConvertedAllowPatrolAroundName;                    // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ConvertedAllowScanAroundWhenWaitingName;           // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ConvertedDestinationName;                          // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  CrouchExecutionStatusName;                         // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               TeleportLocationProjectionExtent;                  // 0x1C0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               MovingFromLosLocationProjectionExtent;             // 0x1D8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3794[0x8];                                     // Fixing Size After Last Property
	class UFortPawn*                             ConverterPawn;                                     // 0x1F8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIRuntimeParameters_AIBotConvert* CachedAIBotConvertParameters;                      // 0x200(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3796[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Converted");
		return Clss;
	}

	void OnUnconvertedEvent(class UFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason);
	void OnConvertedEvent(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn);
};

// 0x28 (0xD0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_DanceOnKill
class UFortAthenaAIBotEvaluator_DanceOnKill : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  LastKillPositionKeyName;                           // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LastKillTimeKeyName;                               // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LastKillWasABotKeyName;                            // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  PlayEmoteExecutionStatusKeyName;                   // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_379A[0x10];                                    // Fixing Size After Last Property
	class UFortAthenaAIBotEmoteDigestedSkillSet* CacheEmoteDigestedSkillSet;                        // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_DanceOnKill");
		return Clss;
	}

};

// 0x50 (0xF8 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_TagQuery
class UFortAthenaAIBotEvaluator_TagQuery : public UFortAthenaAIBotEvaluator
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0xA8(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	class UAbilitySystemComponent*               CachedAbilitySystemComponent;                      // 0xF0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_TagQuery");
		return Clss;
	}

};

// 0x50 (0x148 - 0xF8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_DangerDetection
class UFortAthenaAIBotEvaluator_DangerDetection : public UFortAthenaAIBotEvaluator_TagQuery
{
public:
	uint8                                        Pad_379D[0x10];                                    // Fixing Size After Last Property
	TSubclassOf<class UFortNavArea>              DangerNavAreaClass;                                // 0x108(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeToCheckForDangerAfterValidQuery;               // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRadiusToSearchForSafePlace;                     // 0x114(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DangerZoneDetectedExecutionStatusName;             // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DangerZoneDetectedSafeLocationKeyName;             // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_379F[0x8];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet;                            // 0x128(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaAIServiceZoneManager*           CacheZoneManager;                                  // 0x130(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_37A0[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_DangerDetection");
		return Clss;
	}

};

// 0x58 (0x200 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_DBNO
class UFortAthenaAIBotEvaluator_DBNO : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  DBNODestinationKeyName;                            // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37A7[0x2];                                     // Fixing Size After Last Property
	uint8                                        bAllowReachSquadmates : 1;                         // Mask: 0x1, PropSize: 0x10x1AE(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAllowReachSameFactionNPCs : 1;                    // Mask: 0x2, PropSize: 0x10x1AE(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_204 : 6;                                    // Fixing Bit-Field Size
	uint8                                        Pad_37A8[0x1];                                     // Fixing Size After Last Property
	TArray<class UFortPlayerPawnAthena*>         AllyPawns;                                         // 0x1B0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FVector                               CachedCurrentDestination;                          // 0x1C0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotDBNODigestedSkillSet*  DBNOSkillSet;                                      // 0x1D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAICoverComponent*           CachedCoverComponent;                              // 0x1E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIRuntimeParameters_DBNOBehavior* DBNOBehaviorRuntimeParameters;                     // 0x1E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37AB[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_DBNO");
		return Clss;
	}

	void OnAllyPawnDBNOStateChanged(class UFortPawn* InPlayer, bool bInIsDBNO);
};

// 0x18 (0xC0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_DefensiveBuilding
class UFortAthenaAIBotEvaluator_DefensiveBuilding : public UFortAthenaAIBotEvaluator
{
public:
	uint8                                        Pad_37AD[0x8];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotBuildingDigestedSkillSet* CachedBuildingDigestedSkillSet;                    // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotBuildingComponent*     CachedBuildingComponent;                           // 0xB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_DefensiveBuilding");
		return Clss;
	}

};

// 0x30 (0x1D8 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Escape
class UFortAthenaAIBotEvaluator_Escape : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FGameplayTagContainer                 EscapeTags;                                        // 0x1A8(0x20)(Edit, NativeAccessSpecifierPrivate)
	float                                        CooldownBetweenAggressivenessChanges;              // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AggressivenessName;                                // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37B2[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Escape");
		return Clss;
	}

};

// 0x1E8 (0x290 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers
class UFortAthenaAIBotEvaluator_EvasiveManeuvers : public UFortAthenaAIBotEvaluator
{
public:
	uint8                                        Pad_37BC[0xA8];                                    // Fixing Size After Last Property
	class FName                                  CrouchExecutionStatusName;                         // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  JumpExecutionStatusName;                           // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  JetpackStrafeExecutionStatusName;                  // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DodgeName;                                         // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DestinationKeyName;                                // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  UrgentMoveKeyName;                                 // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37BD[0xC];                                     // Fixing Size After Last Property
	bool                                         bDoCrouching;                                      // 0x174(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDoDodging;                                        // 0x175(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDoJumping;                                        // 0x176(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDoJumpingDistanceCheck;                           // 0x177(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDoJetpackStrafing;                                // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDoJetpackStrafingDistanceCheck;                   // 0x179(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37BF[0x2];                                     // Fixing Size After Last Property
	float                                        JetpackStrafingRequiredFuelPercent;                // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        JetpackStrafeNavPadding;                           // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37C0[0x4];                                     // Fixing Size After Last Property
	struct FGameplayTagQuery                     RequiredTagQuery;                                  // 0x188(0x48)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     JetpackRequiredTagQuery;                           // 0x1D0(0x48)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     JumpRequiredTagQuery;                              // 0x218(0x48)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaAIPerk_EvasiveManeuvers> ForcedPerkClass;                                   // 0x260(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;                           // 0x268(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37C1[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_EvasiveManeuvers");
		return Clss;
	}

	void OnMoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult MovementResult);
};

// 0x78 (0x220 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Flanking
class UFortAthenaAIBotEvaluator_Flanking : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class UFortAIDirector*                       CachedAIDirector;                                  // 0x1A8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CachedRangeAttackDigestedSkillSet;                 // 0x1B0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FlankingExecutionStatusKeyName;                    // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FlankingMovementStateKeyName;                      // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FlankingDestinationKeyName;                        // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37C5[0xC];                                     // Fixing Size After Last Property
	TArray<struct FFlankingLocationInfo>         LocationsToEvaluate;                               // 0x1D0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FFlankingLocationInfo>         BestLocations;                                     // 0x1E0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UActor>>         ActorsInArea;                                      // 0x1F0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37C6[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Flanking");
		return Clss;
	}

};

// 0x38 (0x1E0 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Flee
class UFortAthenaAIBotEvaluator_Flee : public UFortAthenaAIBotEvaluator_Movement
{
public:
	float                                        MinDistanceFromTarget;                             // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinValidDistanceForFleeLocation;                   // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FleeDistance;                                      // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDistanceFromTargetWhenFleeing;                  // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinDistanceHysteresisWhenChangingTarget;           // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FleeKeyName;                                       // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FleeMovementStateKeyName;                          // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FleeDestinationKeyName;                            // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FleeActorKeyName;                                  // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37CB[0xC];                                     // Fixing Size After Last Property
	class UActor*                                CurrentActorFleeingFrom;                           // 0x1D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Flee");
		return Clss;
	}

};

// 0x108 (0x1B0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_FreeFalling
class UFortAthenaAIBotEvaluator_FreeFalling : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  DiveExecutionStatusKeyName;                        // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DiveDestinationKeyName;                            // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  GlideExecutionStatusKeyName;                       // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  GlideDestinationKeyName;                           // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  JumpOffBusDestinationName;                         // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37D1[0xA];                                     // Fixing Size After Last Property
	bool                                         bRandomlySelectFreeFallingMode;                    // 0xC6(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37D2[0x1];                                     // Fixing Size After Last Property
	struct FScalableFloat                        IdleWeight;                                        // 0xC8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RandomWeight;                                      // 0xF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TowardNearestAllyWeight;                           // 0x118(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	enum class EFreeFallingMode                  FreeFallingMode;                                   // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37D4[0x3];                                     // Fixing Size After Last Property
	float                                        MaxOffsetRangeFromNearestAlly;                     // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldRecomputeDestinationWhenTowardNearestAlly : 1; // Mask: 0x1, PropSize: 0x10x148(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldSearchAllyInSquad : 1;                      // Mask: 0x2, PropSize: 0x10x148(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldSearchAllyInTeam : 1;                       // Mask: 0x4, PropSize: 0x10x148(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bGlideAllowed : 1;                                 // Mask: 0x8, PropSize: 0x10x148(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_205 : 4;                                    // Fixing Bit-Field Size
	uint8                                        Pad_37D5[0x3];                                     // Fixing Size After Last Property
	float                                        SkyTubeDivingStuckTimeThreshold;                   // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37D7[0x20];                                    // Fixing Size After Last Property
	class UFortPlayerStateAthena*                NearestAlly;                                       // 0x170(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               CachedLatestDestination;                           // 0x178(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;                     // 0x190(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37D8[0x8];                                     // Fixing Size After Last Property
	class UFortSkyTube*                          CachedSkyTube;                                     // 0x1A0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37D9[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_FreeFalling");
		return Clss;
	}

};

// 0x88 (0x130 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Ground
class UFortAthenaAIBotEvaluator_Ground : public UFortAthenaAIBotEvaluator
{
public:
	struct FVector                               SurfaceTypeRaycastDir;                             // 0xA8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37DA[0x68];                                    // Fixing Size After Last Property
	class UFortAthenaAIRuntimeParameters_Behavior* CachedBehaviorRuntimeParameters;                   // 0x128(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Ground");
		return Clss;
	}

};

// 0xA8 (0x150 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_HandleFocusing
class UFortAthenaAIBotEvaluator_HandleFocusing : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  TargetActorName;                                   // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractActorName;                                 // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TargetLocationName;                                // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FocusActorName;                                    // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FocalPointName;                                    // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponFireName;                                    // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  RangeAttackIsReadyToFireName;                      // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponTriggerMeleeName;                            // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LastKnownPositionName;                             // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TacticalSprintExecutionStatusName;                 // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37DD[0x14];                                    // Fixing Size After Last Property
	enum class EFocusingBehavior                 FocusingBehavior;                                  // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFocusingBehavior                 NoRangedWeaponFocusBehavior;                       // 0xE5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPrioritizeThreatOverCurrentTarget;                // 0xE6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseTargetActorKeyAsFocusTarget;                   // 0xE7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFocusOnTargetLocation;                            // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37E0[0x3];                                     // Fixing Size After Last Property
	float                                        AmbushMaxLKPLookAtAngleDegree;                     // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopFocusingWhenMoving;                           // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37E1[0x3];                                     // Fixing Size After Last Property
	float                                        ResumeFocusingWhenMovingDist;                      // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StopFocusingWhenMovingDist;                        // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bResumeFocusWhileSliding;                          // 0xFC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37E3[0x3];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;                       // 0x100(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;                     // 0x108(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                LastTargetedThreat;                                // 0x110(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37E4[0x8];                                     // Fixing Size After Last Property
	class UActor*                                FocusActor;                                        // 0x120(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37E5[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_HandleFocusing");
		return Clss;
	}

};

// 0x70 (0x118 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Heal
class UFortAthenaAIBotEvaluator_Heal : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  HealingObjectKeyName;                              // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37E7[0xC];                                     // Fixing Size After Last Property
	struct FGameplayTagQuery                     RequiredTagQuery;                                  // 0xB8(0x48)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bAllowEvaluationRetry;                             // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37E8[0x7];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotHealingDigestedSkillSet* HealingSkillSet;                                   // 0x108(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37E9[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Heal");
		return Clss;
	}

	void HandlePlayerHealthOrShieldChanged();
};

// 0xF8 (0x2A0 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_HitAndRun
class UFortAthenaAIBotEvaluator_HitAndRun : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FScalableFloat                        AttackDurationBeforeEvade;                         // 0x1A8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MeleeAttackMaxDistToEvade;                         // 0x1D0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ClampEvadeDistanceEnable;                          // 0x1F8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinDistanceToEvade;                                // 0x220(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxDistanceToEvade;                                // 0x248(0x28)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  EvadeKeyName;                                      // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EvadeMovementStateKeyName;                         // 0x274(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EvadeDestinationKeyName;                           // 0x278(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponTriggerMeleeName;                            // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37EB[0x10];                                    // Fixing Size After Last Property
	float                                        MeleeAttackMaxDistToEvadeSqr;                      // 0x290(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDistanceToEvadeSqr;                             // 0x294(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37ED[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_HitAndRun");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_HolsterWeapon
class UFortAthenaAIBotEvaluator_HolsterWeapon : public UFortAthenaAIBotEvaluator
{
public:
	class UFortAthenaAIRuntimeParameters_NPCBehavior* CachedNPCBehaviorParameters;                       // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_HolsterWeapon");
		return Clss;
	}

};

// 0xC0 (0x268 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Investigate
class UFortAthenaAIBotEvaluator_Investigate : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  LastKnownPositionName;                             // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DestinationKeyName;                                // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MoveToDestinationKeyName;                          // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AggressivenessName;                                // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  CautiousKeyName;                                   // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37F3[0x4];                                     // Fixing Size After Last Property
	TSubclassOf<class UNavigationQueryFilter>    SearchQueryFilterClass;                            // 0x1C0(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37F5[0x10];                                    // Fixing Size After Last Property
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;                       // 0x1D8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet;                    // 0x1E0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotUnstuckDigestedSkillSet* CachedUnstuckSkillSet;                             // 0x1E8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37F7[0x48];                                    // Fixing Size After Last Property
	class UActor*                                InvestigatingSupportingActor;                      // 0x238(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBuildingSMActor*                      UnderminingBuildingActor;                          // 0x240(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                ExcludeReachingTarget;                             // 0x248(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37F9[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Investigate");
		return Clss;
	}

};

// 0x48 (0xF0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_JumpOffBus
class UFortAthenaAIBotEvaluator_JumpOffBus : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  JumpOffBusDestinationName;                         // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  JumpOffBusDestinationVolumeKeyName;                // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37FF[0x20];                                    // Fixing Size After Last Property
	class UFortPoiVolume*                        BusDroppingVolume;                                 // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGameStateAthena*                  CachedAthenaGameState;                             // 0xD8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;                     // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3800[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_JumpOffBus");
		return Clss;
	}

};

// 0x28 (0x1E8 - 0x1C0)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_MeleeAttack
class UFortAthenaAIBotEvaluator_MeleeAttack : public UFortAthenaAIBotEvaluator_Attack
{
public:
	uint8                                        Pad_3801[0x4];                                     // Fixing Size After Last Property
	class FName                                  WeaponTriggerMeleeName;                            // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ThrowableAttacksAllowedName;                       // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TraversalBlockMeleeAttackName;                     // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3802[0x8];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet;                                 // 0x1D8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3803[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_MeleeAttack");
		return Clss;
	}

};

// 0x20 (0xC8 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Observe
class UFortAthenaAIBotEvaluator_Observe : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  AggressivenessName;                                // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ObserveDestinationKeyName;                         // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3806[0x4];                                     // Fixing Size After Last Property
	bool                                         bContinueMovementOnStart;                          // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3807[0x3];                                     // Fixing Size After Last Property
	float                                        MaxMovementDuration;                               // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3808[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Observe");
		return Clss;
	}

};

// 0x20 (0xC8 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_PathExists
class UFortAthenaAIBotEvaluator_PathExists : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  PathExistsKeyName;                                 // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_380C[0x4];                                     // Fixing Size After Last Property
	class FName                                  GoalKeyName;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AcceptableRadius;                                  // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPathTestQueryType                PathQueryType;                                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_380E[0x3];                                     // Fixing Size After Last Property
	uint8                                        bProjectGoalLocation : 1;                          // Mask: 0x1, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReachTestIncludesAgentRadius : 1;                 // Mask: 0x2, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReachTestIncludesGoalRadius : 1;                  // Mask: 0x4, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3811[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_PathExists");
		return Clss;
	}

};

// 0x90 (0x238 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_PatrolAround
class UFortAthenaAIBotEvaluator_PatrolAround : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0x1A8(0x48)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UNavigationQueryFilter>    NavigationQueryFilterClass;                        // 0x1F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFallbackToPointWithNoCustomNavigationQueryFilter; // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3813[0x3];                                     // Fixing Size After Last Property
	class FName                                  PatrolDestinationName;                             // 0x1FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  PatrolExecutionStatusName;                         // 0x200(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  PatrolMovementStateName;                           // 0x204(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  BestTargetActorName;                               // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3815[0x4];                                     // Fixing Size After Last Property
	class UFortGameModeAthena*                   CacheAthenaGameMode;                               // 0x210(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3816[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_PatrolAround");
		return Clss;
	}

};

// 0x20 (0x1C8 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_PlayEmote
class UFortAthenaAIBotEvaluator_PlayEmote : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  PlayEmoteExecutionStatusKeyName;                   // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  PlayEmoteDestinationKeyName;                       // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3819[0x8];                                     // Fixing Size After Last Property
	class UActor*                                ExcludeReachingTarget;                             // 0x1B8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_381A[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_PlayEmote");
		return Clss;
	}

};

// 0x88 (0x130 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_PropagateAwareness
class UFortAthenaAIBotEvaluator_PropagateAwareness : public UFortAthenaAIBotEvaluator
{
public:
	struct FGameplayTagQuery                     AwarenessTagQuery;                                 // 0xA8(0x48)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGameplayEffect>           AwarenessGameplayEffectClass;                      // 0xF0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortPlayerPawnAthena*>         AwareAllyPawns;                                    // 0xF8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortPlayerPawnAthena*>         AlreadyTestedPawns;                                // 0x108(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* PropagateAwarenessSkillSet;                        // 0x118(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIRuntimeParameters_BehaviorTreeControl* BehaviorControlsRuntimeParameters;                 // 0x120(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIRuntimeParameters_AffiliationBase* AffiliationRuntimeParameters;                      // 0x128(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_PropagateAwareness");
		return Clss;
	}

};

// 0x148 (0x308 - 0x1C0)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack
class UFortAthenaAIBotEvaluator_RangeAttack : public UFortAthenaAIBotEvaluator_Attack
{
public:
	uint8                                        Pad_3823[0x18];                                    // Fixing Size After Last Property
	class FName                                  WeaponReloadName;                                  // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponFireName;                                    // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  RangeAttackIsReadyToFireName;                      // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponTargetingName;                               // 0x1E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AggressivenessName;                                // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  HasLoSOnThreatName;                                // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  UrgentMovementKeyName;                             // 0x1F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3827[0xE];                                     // Fixing Size After Last Property
	bool                                         bAlwaysAllowTargetingEvaluation;                   // 0x202(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSkipADSEvaluation;                                // 0x203(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bConsiderLoF;                                      // 0x204(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3828[0x3];                                     // Fixing Size After Last Property
	float                                        RangeReachHysteresisRatio;                         // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3829[0x1C];                                    // Fixing Size After Last Property
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;                  // 0x228(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;                       // 0x230(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet;                   // 0x238(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet;                    // 0x240(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaAIServiceZoneManager*           CacheZoneManager;                                  // 0x248(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                ExcludeReachingTarget;                             // 0x250(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_382A[0xB0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_RangeAttack");
		return Clss;
	}

};

// 0x20 (0x1C8 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_ReachBeacon
class UFortAthenaAIBotEvaluator_ReachBeacon : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  ReachBeaconStatusKeyName;                          // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ReachBeaconMovementStateKeyName;                   // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ReachBeaconTargetKeyName;                          // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_382B[0x8];                                     // Fixing Size After Last Property
	TWeakObjectPtr<class UFortAthenaBeaconComponent> CurrentBeacon;                                     // 0x1BC(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_382C[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_ReachBeacon");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_ReloadWeapon
class UFortAthenaAIBotEvaluator_ReloadWeapon : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  WeaponKeyName;                                     // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_382D[0x2];                                     // Fixing Size After Last Property
	bool                                         bCanReloadWeaponsInInventory;                      // 0xAE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_382E[0x1];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_ReloadWeapon");
		return Clss;
	}

};

// 0x28 (0x1D0 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Retreat
class UFortAthenaAIBotEvaluator_Retreat : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  RetreatDestinationName;                            // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3831[0x4];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet;                    // 0x1B0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAICoverComponent*           CachedCoverComponent;                              // 0x1B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3832[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Retreat");
		return Clss;
	}

	void HandlePlayerHealthOrShieldChanged();
};

// 0x68 (0x210 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Revive
class UFortAthenaAIBotEvaluator_Revive : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FScalableFloat                        LastReviveTargetExpiration;                        // 0x1A8(0x28)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  ReviveTargetKeyName;                               // 0x1D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ReviveLastTargetKeyName;                           // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIRuntimeParameters_ReviveBehavior* ReviveBehaviorRuntimeParameters;                   // 0x1D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPlayerPawnAthena*                 CurrentReviveTarget;                               // 0x1E0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortPlayerPawnAthena*>         DBNOAllyPawns;                                     // 0x1E8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotReviveDigestedSkillSet* ReviveSkillSet;                                    // 0x1F8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3837[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Revive");
		return Clss;
	}

	void OnCurrentTargetRevived(class UFortPlayerPawn* RevivedPawn);
};

// 0x78 (0x170 - 0xF8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel
class UFortAthenaAIBotEvaluator_SandTunnel : public UFortAthenaAIBotEvaluator_TagQuery
{
public:
	class FName                                  JumpExecutionStatusName;                           // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LootInteractionExecutionStatusName;                // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponTriggerMeleeName;                            // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponFireName;                                    // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3840[0x8];                                     // Fixing Size After Last Property
	struct FGameplayTagQuery                     BuriedTagQuery;                                    // 0x110(0x48)(Edit, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;                     // 0x158(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3841[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SandTunnel");
		return Clss;
	}

	void OnBotControllerAlertLevelChanged(class UFortAthenaAIBotController* BotController, enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel);
	void Jump();
};

// 0x78 (0x220 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI
class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  DynamicPOIExecutionStatusKeyName;                  // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DynamicPOILocationKeyName;                         // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3848[0x8];                                     // Fixing Size After Last Property
	class UFortTeamInfoAthena*                   CachedTeamInfo;                                    // 0x1B8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGameStateComponent_BattleRoyaleGamePhaseLogic* CachedGamePhaseLogic;                              // 0x1C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_384B[0x38];                                    // Fixing Size After Last Property
	struct FTimerHandle                          NextSearchTimerHandle;                             // 0x200(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFailedToReachPOI>             FailedBotPOIList;                                  // 0x208(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int32                                        CachedSelectedBotPOIID;                            // 0x218(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_384E[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SelectNextDynamicPOI");
		return Clss;
	}

	void OnSafeZonePhaseChanged(struct FFortSafeZonePhaseUpdatedEvent& Event);
	void OnGamePhaseLogicReady(struct FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event);
};

// 0x38 (0x1E0 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextPOI
class UFortAthenaAIBotEvaluator_SelectNextPOI : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  NextPOIKeyName;                                    // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MarkerLocationKeyName;                             // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_384F[0x8];                                     // Fixing Size After Last Property
	class UFortPoiVolume*                        StartingGroundPOI;                                 // 0x1B8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCheckForStartingGroundPOI;                        // 0x1C0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3851[0x3];                                     // Fixing Size After Last Property
	float                                        CurrentPOICompletionTime;                          // 0x1C4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DurationInsideCurrentPOI;                          // 0x1C8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3852[0x4];                                     // Fixing Size After Last Property
	class UFortTeamInfoAthena*                   CachedTeamInfo;                                    // 0x1D0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotLootingDigestedSkillSet* CachedLootingSkillSet;                             // 0x1D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SelectNextPOI");
		return Clss;
	}

};

// 0xE0 (0x288 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_SelectVehicle
class UFortAthenaAIBotEvaluator_SelectVehicle : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  VehicleDestinationKeyName;                         // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SelectVehicleMovementStateKeyName;                 // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SelectVehicleStatusKeyName;                        // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SelectedVehicleKeyName;                            // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3854[0x8];                                     // Fixing Size After Last Property
	struct FScalableFloat                        Enabled;                                           // 0x1C0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        VehicleSearchRadius;                               // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanEnterOnlyWithHisConverter;                     // 0x1EC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanEnterAsDriver;                                 // 0x1ED(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanEnterVehiclesInWater;                          // 0x1EE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanEnterOutOfFuelVehicles;                        // 0x1EF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanEnterWithPlayerDriver;                         // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanEnterOnlyMatchingPatrols;                      // 0x1F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3855[0x6];                                     // Fixing Size After Last Property
	struct FGameplayTagQuery                     VehiclesFilterTagQuery;                            // 0x1F8(0x48)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     SeatsFilterTagQuery;                               // 0x240(0x48)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SelectVehicle");
		return Clss;
	}

};

// 0x58 (0x200 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjects
class UFortAthenaAIBotEvaluator_SmartObjects : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters;                      // 0x1A8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USmartObjectSubsystem*                 SmartObjectSubsystem;                              // 0x1B0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3856[0x8];                                     // Fixing Size After Last Property
	bool                                         bEvaluateSOValidityAfterChosen;                    // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableEntryLocationsSupport;                      // 0x1C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3857[0x6];                                     // Fixing Size After Last Property
	class UCurveFloat*                           DistanceToWeightCurveForSlotPicking;               // 0x1C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class USmartObjectSlotValidationFilter> OverridenFilterClassForEntryPoints;                // 0x1D0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SmartObjectExecutionStatusKeyName;                 // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SmartObjectMovementStateKeyName;                   // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SmartObjectDestinationKeyName;                     // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SmartObjectDestinationRotationKeyName;             // 0x1E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SmartObjectShouldMoveKeyName;                      // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SmartObjectUrgencyKeyName;                         // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3859[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SmartObjects");
		return Clss;
	}

};

// 0x80 (0x128 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Sprinting
class UFortAthenaAIBotEvaluator_Sprinting : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  AllowSprintKeyName;                                // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AllowSlideKeyName;                                 // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  JumpExecutionStatusName;                           // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TacticalSprintExecutionStatusName;                 // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SlideExecutionStatusName;                          // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  UrgentMovementKeyName;                             // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  RangeAttackExecutionStatusName;                    // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MeleeAttackExecutionStatusName;                    // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ThrowableAttackExecutionStatusName;                // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_385C[0x12];                                    // Fixing Size After Last Property
	bool                                         bSprintOnlyInWater;                                // 0xDE(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSprintOnlyInUrgentMode;                           // 0xDF(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotMovementDigestedSkillSet* MovementSkillSet;                                  // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet;                                    // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TacticalSprintTriggerChance;                       // 0xF0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TacticalSprintTriggerChanceInUrgentMovement;       // 0xF4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TacticalSprintJumpTriggerChance;                   // 0xF8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3860[0x2C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Sprinting");
		return Clss;
	}

};

// 0xA8 (0x150 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_StealWall
class UFortAthenaAIBotEvaluator_StealWall : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  StealWallBuildTypeName;                            // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  StealWallBuildGridCoordName;                       // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TargetActorName;                                   // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3861[0xC];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotBuildingDigestedSkillSet* CacheBuildingDigestedSkillSet;                     // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBuildingActor*                        CurrentBuildingTarget;                             // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3863[0x80];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_StealWall");
		return Clss;
	}

};

// 0x30 (0x1D8 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_StepBack
class UFortAthenaAIBotEvaluator_StepBack : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CachedRangeAttackDigestedSkillSet;                 // 0x1A8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaAIServiceCover*                 CachedAIServiceCover;                              // 0x1B0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3866[0x8];                                     // Fixing Size After Last Property
	class FName                                  StepBackExecutionStatusKeyName;                    // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  StepBackMovementStateKeyName;                      // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  StepBackDestinationKeyName;                        // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3868[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_StepBack");
		return Clss;
	}

};

// 0x40 (0x1E8 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Storm
class UFortAthenaAIBotEvaluator_Storm : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  StormDestinationName;                              // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3872[0xC];                                     // Fixing Size After Last Property
	class UFortGameModeAthena*                   CacheAthenaGameMode;                               // 0x1B8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBehaviorTreeComponent*                CachedBTComp;                                      // 0x1C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3874[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Storm");
		return Clss;
	}

	void OnSafeZoneStateChanged(enum class EFortSafeZoneState NewState);
	void OnSafeZonePhaseChanged();
};

// 0x8 (0x100 - 0xF8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_TagQueryToBBKey
class UFortAthenaAIBotEvaluator_TagQueryToBBKey : public UFortAthenaAIBotEvaluator_TagQuery
{
public:
	class FName                                  LinkedBBKeyName;                                   // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3878[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_TagQueryToBBKey");
		return Clss;
	}

};

// 0x90 (0x238 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_TakeCover
class UFortAthenaAIBotEvaluator_TakeCover : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;                  // 0x1A8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;                       // 0x1B0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaAIServiceCover*                 CachedAIServiceCover;                              // 0x1B8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DestinationKeyName;                                // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MoveToDestinationKeyName;                          // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  HealingStatusKeyName;                              // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponFireName;                                    // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TargetActorName;                                   // 0x1D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  BunkerStatusKeyName;                               // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_387C[0x10];                                    // Fixing Size After Last Property
	class UBuildingActor*                        CachedCoverBuildingActor;                          // 0x1E8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBuildingActor*>                ExcludedBuildingActors;                            // 0x1F0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_387D[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_TakeCover");
		return Clss;
	}

};

// 0x50 (0x210 - 0x1C0)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_ThrowableAttack
class UFortAthenaAIBotEvaluator_ThrowableAttack : public UFortAthenaAIBotEvaluator_Attack
{
public:
	class FName                                  WeaponTriggerThrowableName;                        // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ThrowableAttackIsReadyToThrowName;                 // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3880[0x8];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet;                                 // 0x1D0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* RangeAttackSkillSet;                               // 0x1D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet;                                    // 0x1E0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortWorldItem*                        ChosenWeapon;                                      // 0x1E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPawn*                             CachedFortPawn;                                    // 0x1F0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3882[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_ThrowableAttack");
		return Clss;
	}

};

// 0x30 (0xD8 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_TrapOnPathDetected
class UFortAthenaAIBotEvaluator_TrapOnPathDetected : public UFortAthenaAIBotEvaluator
{
public:
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;                       // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TrapOnPathKeyName;                                 // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TrapActorOnPathKeyName;                            // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TargetActorName;                                   // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AlertLevelName;                                    // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RangeAttackExecutionStatusName;                    // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3889[0xC];                                     // Fixing Size After Last Property
	class UBuildingTrap*                         CurrentTrapTarget;                                 // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_TrapOnPathDetected");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_VehicleLeaveSeat
class UFortAthenaAIBotEvaluator_VehicleLeaveSeat : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  LeaveSeatStatusKeyName;                            // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_388C[0x2];                                     // Fixing Size After Last Property
	bool                                         bLeaveSeatWhenPlayerInVehicle;                     // 0xAE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLeaveSeatWhenConverterLeave;                      // 0xAF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_VehicleLeaveSeat");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_VehicleSwitchSeat
class UFortAthenaAIBotEvaluator_VehicleSwitchSeat : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  SwitchSeatStatusKeyName;                           // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3890[0x2];                                     // Fixing Size After Last Property
	bool                                         bSwitchToEmptyDriverSeat;                          // 0xAE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3892[0x1];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_VehicleSwitchSeat");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_WaitForPassengers
class UFortAthenaAIBotEvaluator_WaitForPassengers : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  WaitForPassengersStatusKeyName;                    // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3893[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_WaitForPassengers");
		return Clss;
	}

};

// 0x30 (0xD8 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Warmup
class UFortAthenaAIBotEvaluator_Warmup : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  WarmupPlayEmoteExecutionStatusKeyName;             // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WarmupLootAndShootExecutionStatusKeyName;          // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WarmupIdleExecutionStatusKeyName;                  // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3897[0xC];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotWarmupDigestedSkillSet* CacheWarmupDigestedSkillSet;                       // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3898[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Warmup");
		return Clss;
	}

};

// 0x38 (0xE0 - 0xA8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_WeaponSelection
class UFortAthenaAIBotEvaluator_WeaponSelection : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                  ThrowableAttackIsReadyToThrowName;                 // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponKeyName;                                     // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TargetActorName;                                   // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_389E[0x14];                                    // Fixing Size After Last Property
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;                  // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet;                    // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;                       // 0xD8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_WeaponSelection");
		return Clss;
	}

};

// 0xA0 (0x248 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIBotEvaluator_Zipline
class UFortAthenaAIBotEvaluator_Zipline : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  CurrentDestinationKeyName;                         // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ZiplineTargetKeyName;                              // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  LastZiplineUsedName;                               // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ZiplineMoveExecutionStatusKeyName;                 // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ZiplineEntryLocationKeyName;                       // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ZiplineExitLocationKeyName;                        // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ZiplineLastUsageTimeName;                          // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ZiplineUsageExecutionStatusName;                   // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WaitTimeBetweenZiplineRandomChoices;               // 0x1C8(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ProbabilityToUseZipline;                           // 0x1F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_38A8[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Zipline");
		return Clss;
	}

	void OnZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* FortPlayerPawn);
};

// 0x30 (0xD8 - 0xA8)
// Class FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase
class UFortAthenaAIEvaluator_BlueprintBase : public UFortAthenaAIBotEvaluator
{
public:
	bool                                         bBlockWeaponActions;                               // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGameplayAbilityEvaluator;                         // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38B0[0x6];                                     // Fixing Size After Last Property
	struct FGameplayAbilityEvaluatorModule       GameplayAbilityEvaluatorModule;                    // 0xB0(0x28)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIEvaluator_BlueprintBase");
		return Clss;
	}

	void OnExit(class UBehaviorTreeComponent* OwnerComp);
	void OnEnter(class UBehaviorTreeComponent* OwnerComp);
	bool EvaluateStartingConditions(class UBehaviorTreeComponent* OwnerComp);
	bool EvaluateOngoingConditions(class UBehaviorTreeComponent* OwnerComp);
};

// 0x90 (0x130 - 0xA0)
// Class FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase
class UFortAthenaAIEvaluator_DormantUntilPhase : public UFortAthenaAIEvaluator
{
public:
	struct FScalableFloat                        bIsEnabled;                                        // 0xA0(0x28)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bDisabledInCreative;                               // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAthenaGamePhaseStep              RequiredGamePhaseStep;                             // 0xC9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38B8[0x6];                                     // Fixing Size After Last Property
	struct FScalableFloat                        DelayAfterPhase;                                   // 0xD0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RandomDeviationAfterPhase;                         // 0xF8(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38B9[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIEvaluator_DormantUntilPhase");
		return Clss;
	}

	void HandleGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
};

// 0x28 (0xC8 - 0xA0)
// Class FortniteAIServer.FortAthenaAIEvaluator_FleeEnvDanger
class UFortAthenaAIEvaluator_FleeEnvDanger : public UFortAthenaAIEvaluator
{
public:
	float                                        MaximumCheckDistance;                              // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AdditionalFleeDistance;                            // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  EnvironmentalDangerExecutionStatusName;            // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  EnvironmentalDangerFleeDirectionFromKeyName;       // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  EnvironmentalDangerFleeDirectionToKeyName;         // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  EnvironmentalDangerFleeDistanceKeyName;            // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38BB[0x8];                                     // Fixing Size After Last Property
	class UAIController*                         CachedController;                                  // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIEvaluator_FleeEnvDanger");
		return Clss;
	}

};

// 0x20 (0x1C8 - 0x1A8)
// Class FortniteAIServer.FortAthenaAIEvaluator_FollowGroupLeader
class UFortAthenaAIEvaluator_FollowGroupLeader : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  FollowGroupLeaderStatusKeyName;                    // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FollowGroupLeaderMovementStateKeyName;             // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FollowGroupLeaderDestinationKeyName;               // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TooFarFromLeaderKeyName;                           // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38C0[0x8];                                     // Fixing Size After Last Property
	class UFortPawnComponent_AIGroup*            CachedAIGroupComponent;                            // 0x1C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIEvaluator_FollowGroupLeader");
		return Clss;
	}

};

// 0x20 (0xC0 - 0xA0)
// Class FortniteAIServer.FortAthenaAIEvaluator_Leash
class UFortAthenaAIEvaluator_Leash : public UFortAthenaAIEvaluator
{
public:
	class FName                                  GoalIsInsideLeashKeyName;                          // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AIIsInsideLeashKeyName;                            // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38C3[0x8];                                     // Fixing Size After Last Property
	class UFortAthenaLeashComponent*             CachedLeashComponent;                              // 0xB0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAIGoalComponent*                  CachedAIGoalComponent;                             // 0xB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIEvaluator_Leash");
		return Clss;
	}

};

// 0x1A8 (0x248 - 0xA0)
// Class FortniteAIServer.FortAthenaAIEvaluator_NearbyActorsPerception
class UFortAthenaAIEvaluator_NearbyActorsPerception : public UFortAthenaAIEvaluator
{
public:
	class FName                                  FoundNearbyActorKeyName;                           // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38C5[0x4];                                     // Fixing Size After Last Property
	struct FScalableFloat                        MinimumUpdateInterval;                             // 0xA8(0x28)(Edit, NativeAccessSpecifierPrivate)
	int32                                        RequiredTypes;                                     // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38C6[0x4];                                     // Fixing Size After Last Property
	struct FScalableFloat                        MinimumDistanceToActors;                           // 0xD8(0x28)(Edit, NativeAccessSpecifierPrivate)
	TArray<enum class ETeamAttitude>             RequiredAttitudes;                                 // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bRequireLoS;                                       // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38C8[0x7];                                     // Fixing Size After Last Property
	struct FGameplayTagQuery                     RequiredTagsQuery;                                 // 0x118(0x48)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38C9[0xE8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIEvaluator_NearbyActorsPerception");
		return Clss;
	}

};

// 0x8 (0x250 - 0x248)
// Class FortniteAIServer.FortAthenaAIEvaluator_SpeechBubble
class UFortAthenaAIEvaluator_SpeechBubble : public UFortAthenaAIEvaluator_NearbyActorsPerception
{
public:
	class UFortPawnComponent_SpeechBubble*       CachedSpeechBubbleComponent;                       // 0x248(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIEvaluator_SpeechBubble");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class FortniteAIServer.FortAthenaBTContext_SuppressAutomaticAttackCheck
class UFortAthenaBTContext_SuppressAutomaticAttackCheck : public UFortBTService_ContextOverride
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTContext_SuppressAutomaticAttackCheck");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_AIEvaluator
class UFortAthenaBTService_AIEvaluator : public UBTService
{
public:
	struct FGameplayTag                          InjectionTag;                                      // 0x70(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38CE[0x4];                                     // Fixing Size After Last Property
	TSubclassOf<class UFortAthenaAIEvaluator>    AIEvaluatorClass;                                  // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_AIEvaluator");
		return Clss;
	}

};

// 0x20 (0x90 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_ApplyGameplayTags
class UFortAthenaBTService_ApplyGameplayTags : public UBTService
{
public:
	struct FGameplayTagContainer                 GameplayTagsToApply;                               // 0x70(0x20)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_ApplyGameplayTags");
		return Clss;
	}

};

// 0x18 (0x88 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_BuildConstruction
class UFortAthenaBTService_BuildConstruction : public UBTService
{
public:
	class FName                                  StealWallBuildName;                                // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  StealWallBuildTypeName;                            // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  StealWallBuildGridCoordName;                       // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38D1[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_BuildConstruction");
		return Clss;
	}

};

// 0x30 (0xA0 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Clamber
class UFortAthenaBTService_Clamber : public UBTService
{
public:
	class FName                                  ClamberExecutionStatusName;                        // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ClamberOriginLocationName;                         // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ClamberDestinationLocationName;                    // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ClamberAbilityStatusName;                          // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  JumpExecutionStatusName;                           // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CrouchExecutionStatusName;                         // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38D6[0xC];                                     // Fixing Size After Last Property
	uint32                                       FirstJumpRetryMaxCount;                            // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FirstJumpRetryDelay;                               // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FirstJumpClamberMaxStartDelay;                     // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Clamber");
		return Clss;
	}

};

// 0x58 (0xC8 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_CopyBlackboardVariable
class UFortAthenaBTService_CopyBlackboardVariable : public UBTService
{
public:
	struct FBlackboardKeySelector                SourceBlackboardKey;                               // 0x70(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                DestinationBlackboardKey;                          // 0x98(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        bCopyOnBecomeRelevant : 1;                         // Mask: 0x1, PropSize: 0x10xC0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCopyOnCeaseRelevant : 1;                          // Mask: 0x2, PropSize: 0x10xC0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCopyWhenSourceValueChange : 1;                    // Mask: 0x4, PropSize: 0x10xC0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38D7[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_CopyBlackboardVariable");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Crouch
class UFortAthenaBTService_Crouch : public UBTService
{
public:
	class FName                                  CrouchExecutionStatusName;                         // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38D9[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Crouch");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Escape
class UFortAthenaBTService_Escape : public UBTService
{
public:
	class FName                                  EscapeKeyName;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38DA[0x4];                                     // Fixing Size After Last Property
	class FName                                  EscapeFromStormKeyName;                            // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38DB[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Escape");
		return Clss;
	}

};

// 0xD0 (0x140 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Interact
class UFortAthenaBTService_Interact : public UBTService
{
public:
	struct FBlackboardKeySelector                InteractExecutionStatusKeySelector;                // 0x70(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                InteractContextInfoKeySelector;                    // 0x98(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                InteractObjectKeySelector;                         // 0xC0(0x28)(Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                ExecutionStatusKeySelector;                        // 0xE8(0x28)(Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                MovementStateKeySelector;                          // 0x110(0x28)(Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireDistanceCheck;                             // 0x139(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireBlockedCheck;                              // 0x13A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38DE[0x5];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Interact");
		return Clss;
	}

};

// 0x18 (0x88 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Jump
class UFortAthenaBTService_Jump : public UBTService
{
public:
	class FName                                  JumpExecutionStatusName;                           // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38E0[0x4];                                     // Fixing Size After Last Property
	class FName                                  CrouchExecutionStatusName;                         // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38E1[0x4];                                     // Fixing Size After Last Property
	float                                        JumpInputReleaseDelay;                             // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38E2[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Jump");
		return Clss;
	}

};

// 0x10 (0x98 - 0x88)
// Class FortniteAIServer.FortAthenaBTService_JetpackStrafe
class UFortAthenaBTService_JetpackStrafe : public UFortAthenaBTService_Jump
{
public:
	class FName                                  JetpackStrafeExecutionStatusName;                  // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38E5[0x4];                                     // Fixing Size After Last Property
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;                           // 0x90(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_JetpackStrafe");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_JumpOffBus
class UFortAthenaBTService_JumpOffBus : public UBTService
{
public:
	class FName                                  JumpOffBusExecutionStatusName;                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38E7[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_JumpOffBus");
		return Clss;
	}

};

// 0x40 (0xB0 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_ManageWeapon
class UFortAthenaBTService_ManageWeapon : public UBTService
{
public:
	class FName                                  WeaponFireName;                                    // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponTriggerMeleeName;                            // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponTriggerThrowableName;                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponReloadName;                                  // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponName;                                        // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponTargetingName;                               // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SprintExecutionStatusName;                         // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TacticalSprintExecutionStatusName;                 // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  HealingStatusKeyName;                              // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  BlockWeaponActionsKeyName;                         // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38EB[0x14];                                    // Fixing Size After Last Property
	bool                                         bEndChargeOnFireStop;                              // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38EC[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_ManageWeapon");
		return Clss;
	}

	void ManageWeaponTargeting(class UBehaviorTreeComponent* OwnerComp);
};

// 0x0 (0xB0 - 0xB0)
// Class FortniteAIServer.FortAthenaBTService_ManageVehicleWeapon
class UFortAthenaBTService_ManageVehicleWeapon : public UFortAthenaBTService_ManageWeapon
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_ManageVehicleWeapon");
		return Clss;
	}

};

// 0x70 (0xE0 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween : public UBTService
{
public:
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x70(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x98(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        MinDistance;                                       // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDistance;                                       // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinDistanceSpeed;                                  // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDistanceSpeed;                                  // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCalculateAs2D;                                    // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38F1[0xF];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween");
		return Clss;
	}

};

// 0x20 (0x90 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Patrolling
class UFortAthenaBTService_Patrolling : public UBTService
{
public:
	class FName                                  PatrollingAppendDestinationKeyName;                // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38F4[0x4];                                     // Fixing Size After Last Property
	float                                        AcceptableRadius;                                  // 0x78(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38F5[0x4];                                     // Fixing Size After Last Property
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bProjectGoalLocation : 1;                          // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38F8[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Patrolling");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_PauseVehicle
class UFortAthenaBTService_PauseVehicle : public UBTService
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_PauseVehicle");
		return Clss;
	}

};

// 0x20 (0x90 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_PickUpLoot
class UFortAthenaBTService_PickUpLoot : public UBTService
{
public:
	class FName                                  LootObjectKeyName;                                 // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ExecutionStatusName;                               // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractionExecutionStatusName;                    // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractionContextInfoName;                        // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MovementStateKeyName;                              // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38F9[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_PickUpLoot");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_PropagatePatrolProgressToPassengers
class UFortAthenaBTService_PropagatePatrolProgressToPassengers : public UBTService
{
public:
	class FName                                  PatrollingAppendDestinationKeyName;                // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38FA[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_PropagatePatrolProgressToPassengers");
		return Clss;
	}

};

// 0x20 (0x90 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Revive
class UFortAthenaBTService_Revive : public UBTService
{
public:
	class FName                                  ReviveTargetKeyName;                               // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ExecutionStatusName;                               // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MoveToPathMovementStateName;                       // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractionExecutionStatusName;                    // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractionContextInfoName;                        // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisableLeash;                                     // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38FE[0xB];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Revive");
		return Clss;
	}

};

// 0x30 (0xA0 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_SetBlackboardBool
class UFortAthenaBTService_SetBlackboardBool : public UBTService
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x70(0x28)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bBlackboardValue;                                  // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EBTSetBlackboardBoolExitActions   ExitAction;                                        // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3901[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_SetBlackboardBool");
		return Clss;
	}

};

// 0x8 (0xA0 - 0x98)
// Class FortniteAIServer.FortAthenaBTService_SetExecutionStatus
class UFortAthenaBTService_SetExecutionStatus : public UBTService_BlackboardBase
{
public:
	enum class EExecutionStatus                  ExecutionStatus;                                   // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3903[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_SetExecutionStatus");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Slide
class UFortAthenaBTService_Slide : public UBTService
{
public:
	class FName                                  SlideExecutionStatusName;                          // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3906[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Slide");
		return Clss;
	}

	void OnStopSliding(class UFortPlayerPawn* Pawn);
};

// 0x10 (0x80 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_SmartObject
class UFortAthenaBTService_SmartObject : public UBTService
{
public:
	class FName                                  SmartObjectStatusKeyName;                          // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SmartObjectDestinationKeyName;                     // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_390B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_SmartObject");
		return Clss;
	}

};

// 0x58 (0xC8 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Sprinting
class UFortAthenaBTService_Sprinting : public UBTService
{
public:
	uint8                                        Pad_390D[0x40];                                    // Fixing Size After Last Property
	class FName                                  SprintExecutionStatusName;                         // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TacticalSprintExecutionStatusName;                 // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TacticalSprintOverridenName;                       // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3910[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Sprinting");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_UpdateTarget
class UFortAthenaBTService_UpdateTarget : public UBTService
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_UpdateTarget");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_WaitForPassengers
class UFortAthenaBTService_WaitForPassengers : public UBTService
{
public:
	class FName                                  WaitForPassengersStatusKeyName;                    // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3912[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_WaitForPassengers");
		return Clss;
	}

};

// 0x48 (0xB8 - 0x70)
// Class FortniteAIServer.FortAthenaBTService_Zipline
class UFortAthenaBTService_Zipline : public UBTService
{
public:
	class FName                                  ZiplineTargetName;                                 // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractionExecutionStatusName;                    // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractionContextInfoName;                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  UsageExecutionStatusName;                          // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ZiplineEntryLocationName;                          // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ZiplineExitLocationKeyName;                        // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MoveToPathMovementStateName;                       // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MoveExecutionStatusName;                           // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FocalPointName;                                    // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3915[0x24];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTService_Zipline");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_ActivateVehicleBoost
class UFortAthenaBTTask_ActivateVehicleBoost : public UBTTaskNode
{
public:
	bool                                         bActivateBoost;                                    // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3916[0x3];                                     // Fixing Size After Last Property
	float                                        BoostLength;                                       // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreMinimumDistanceLeft;                        // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3918[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_ActivateVehicleBoost");
		return Clss;
	}

};

// 0x10 (0xC0 - 0xB0)
// Class FortniteAIServer.FortAthenaBTTask_MoveTo
class UFortAthenaBTTask_MoveTo : public UBTTask_MoveTo
{
public:
	class FName                                  MovementResultKeyName;                             // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ExecutionStatusKeyName;                            // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_391F[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_MoveTo");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class FortniteAIServer.FortAthenaBTTask_BotMoveTo
class UFortAthenaBTTask_BotMoveTo : public UFortAthenaBTTask_MoveTo
{
public:
	class FName                                  NoSmashMoveGoalActorKeyName;                       // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3922[0x2];                                     // Fixing Size After Last Property
	uint8                                        bAllowRandomWobble : 1;                            // Mask: 0x1, PropSize: 0x10xC6(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsUrgentMovement : 1;                             // Mask: 0x2, PropSize: 0x10xC6(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3923[0x1];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_BotMoveTo");
		return Clss;
	}

};

// 0x80 (0xF0 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_BotUnstuckTeleport
class UFortAthenaBTTask_BotUnstuckTeleport : public UBTTaskNode
{
public:
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0x70(0x48)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  CanReachDestinationKeyName;                        // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TeleportExecutionStatusKeyName;                    // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LastPartialPathTimeKeyName;                        // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LastPartialPathCountKeyName;                       // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3924[0x20];                                    // Fixing Size After Last Property
	class UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet;                                   // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_BotUnstuckTeleport");
		return Clss;
	}

};

// 0x28 (0xA0 - 0x78)
// Class FortniteAIServer.FortAthenaBTTask_BotWait
class UFortAthenaBTTask_BotWait : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                WaitCompleteKeySelector;                           // 0x78(0x28)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_BotWait");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_Build
class UFortAthenaBTTask_Build : public UBTTaskNode
{
public:
	class FName                                  ExecutionStatusKeyName;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FocalPointName;                                    // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3926[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_Build");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_Conversation
class UFortAthenaBTTask_Conversation : public UBTTaskNode
{
public:
	class FName                                  ConversationStatusKeyName;                         // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3929[0x2];                                     // Fixing Size After Last Property
	bool                                         bResetEvaluatorStatusKeyOnFinish;                  // 0x76(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_392A[0x1];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_Conversation");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_Dive
class UFortAthenaBTTask_Dive : public UBTTaskNode
{
public:
	class FName                                  ExecutionStatusKeyName;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DiveDestinationKeyName;                            // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_392B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_Dive");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_EnterVehicle
class UFortAthenaBTTask_EnterVehicle : public UBTTaskNode
{
public:
	class FName                                  SelectedVehicleKeyName;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_392C[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_EnterVehicle");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_Glide
class UFortAthenaBTTask_Glide : public UBTTaskNode
{
public:
	class FName                                  ExecutionStatusKeyName;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  GlideDestinationKeyName;                           // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_392D[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_Glide");
		return Clss;
	}

};

// 0x70 (0xE0 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_Interact
class UFortAthenaBTTask_Interact : public UBTTaskNode
{
public:
	bool                                         bShouldFocusOnInteraction;                         // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3930[0x7];                                     // Fixing Size After Last Property
	struct FBlackboardKeySelector                InteractExecutionStatusKeySelector;                // 0x78(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                InteractContextInfoKeySelector;                    // 0xA0(0x28)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  FocalPointName;                                    // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractActorName;                                 // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  JumpExecutionStatusName;                           // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeaponTriggerMeleeName;                            // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3933[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_Interact");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_LeaveVehicle
class UFortAthenaBTTask_LeaveVehicle : public UBTTaskNode
{
public:
	bool                                         bWaitVehicleStop;                                  // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3935[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_LeaveVehicle");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_ModulateVehicleSpeed
class UFortAthenaBTTask_ModulateVehicleSpeed : public UBTTaskNode
{
public:
	float                                        NewDrivingSpeed;                                   // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3937[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_ModulateVehicleSpeed");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_PauseVehicle
class UFortAthenaBTTask_PauseVehicle : public UBTTaskNode
{
public:
	bool                                         bPausePathFollow;                                  // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3939[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_PauseVehicle");
		return Clss;
	}

};

// 0x18 (0x88 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_PlayEmote
class UFortAthenaBTTask_PlayEmote : public UBTTaskNode
{
public:
	class FName                                  PlayEmoteExecutionStatusKeyName;                   // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_393A[0x4];                                     // Fixing Size After Last Property
	TArray<class UAthenaDanceItemDefinition*>    BespokeEmotes;                                     // 0x78(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_PlayEmote");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_ReverseVehicle
class UFortAthenaBTTask_ReverseVehicle : public UBTTaskNode
{
public:
	bool                                         bReverseVehicle;                                   // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_393B[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_ReverseVehicle");
		return Clss;
	}

};

// 0x8 (0x90 - 0x88)
// Class FortniteAIServer.FortAthenaBTTask_RunDynamicSubtree
class UFortAthenaBTTask_RunDynamicSubtree : public UBTTask_RunBehaviorDynamic
{
public:
	uint8                                        bCallParentOnInstanceCreated : 1;                  // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bUpdateBlackboardAsset : 1;                        // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3942[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_RunDynamicSubtree");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_SetAggressiveDriving
class UFortAthenaBTTask_SetAggressiveDriving : public UBTTaskNode
{
public:
	bool                                         bAggressiveDriving;                                // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3943[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_SetAggressiveDriving");
		return Clss;
	}

};

// 0x30 (0xA8 - 0x78)
// Class FortniteAIServer.FortAthenaBTTask_ShootTrap
class UFortAthenaBTTask_ShootTrap : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                TargetActorKey;                                    // 0x78(0x28)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  TrapOnPathKeyName;                                 // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3947[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_ShootTrap");
		return Clss;
	}

};

// 0x30 (0xA0 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_SteerMovement
class UFortAthenaBTTask_SteerMovement : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                SteerDirectionKeySelector;                         // 0x70(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        bSetControlRotation : 1;                           // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_394B[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_SteerMovement");
		return Clss;
	}

};

// 0x18 (0x88 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_Undermine
class UFortAthenaBTTask_Undermine : public UBTTaskNode
{
public:
	class FName                                  UndermineTargetKeyName;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  UndermineLocationImpactName;                       // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  UndermineExecutionStatusKeyName;                   // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_394D[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_Undermine");
		return Clss;
	}

};

// 0x18 (0x88 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_UseItem
class UFortAthenaBTTask_UseItem : public UBTTaskNode
{
public:
	class FName                                  ActionObjectKeyName;                               // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ExecutionStatusKeyName;                            // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinWaitTimeBetweenUses;                            // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxWaitTimeBetweenUses;                            // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bValidateAbility;                                  // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetActionObjectKey;                             // 0x81(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_394F[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_UseItem");
		return Clss;
	}

};

// 0x80 (0xF0 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_UseSmartObject
class UFortAthenaBTTask_UseSmartObject : public UBTTaskNode
{
public:
	class FName                                  SmartObjectsStatusKeyName;                         // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3952[0x4];                                     // Fixing Size After Last Property
	class FName                                  SmartObjectDestinationRotationKeyName;             // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3953[0x2];                                     // Fixing Size After Last Property
	bool                                         bHandleAbortWithSoftDisable;                       // 0x7E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3954[0x29];                                    // Fixing Size After Last Property
	struct FGameplayInteractionContext           GameplayInteractionContext;                        // 0xA8(0x48)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_UseSmartObject");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_VehicleHonk
class UFortAthenaBTTask_VehicleHonk : public UBTTaskNode
{
public:
	float                                        MaxHonkTime;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinHonkTime;                                       // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxFlickerTime;                                    // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinFlickerTime;                                    // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_VehicleHonk");
		return Clss;
	}

};

// 0x8 (0xA0 - 0x98)
// Class FortniteAIServer.FortAthenaBTTask_VehicleTurnTo
class UFortAthenaBTTask_VehicleTurnTo : public UBTTask_BlackboardBase
{
public:
	float                                        Precision;                                         // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395B[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_VehicleTurnTo");
		return Clss;
	}

};

// 0x18 (0xD8 - 0xC0)
// Class FortniteAIServer.FortAthenaBTTask_VerseNPCMoveTo
class UFortAthenaBTTask_VerseNPCMoveTo : public UFortAthenaBTTask_MoveTo
{
public:
	class FName                                  AcceptableRadiusKeyName;                           // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AllowStrafeKeyName;                                // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AllowPartialPathName;                              // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_395D[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_VerseNPCMoveTo");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class FortniteAIServer.FortAthenaBTTask_Zipline
class UFortAthenaBTTask_Zipline : public UBTTaskNode
{
public:
	class FName                                  UsageExecutionStatusName;                          // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3964[0x4];                                     // Fixing Size After Last Property
	class FName                                  ZiplineTargetName;                                 // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3965[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_Zipline");
		return Clss;
	}

	void OnZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* FortPlayerPawn);
};

// 0x2A8 (0x450 - 0x1A8)
// Class FortniteAIServer.FortAthenaNpcEvaluator_Encampment
class UFortAthenaNpcEvaluator_Encampment : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FScalableFloat                        EncampmentEnable;                                  // 0x1A8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EncampmentTentativeDelayMin;                       // 0x1D0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EncampmentTentativeDelayMax;                       // 0x1F8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EncampmentDurationMin;                             // 0x220(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EncampmentDurationMax;                             // 0x248(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BuilderPercentage;                                 // 0x270(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BuilderMinDistance;                                // 0x298(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BuilderMaxDistance;                                // 0x2C0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        GuardMinDistance;                                  // 0x2E8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        GuardMaxDistance;                                  // 0x310(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AllowInSwimming;                                   // 0x338(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AllowInFalling;                                    // 0x360(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinSquadMembersCountToBuild;                       // 0x388(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FName                                  EncampmentStatusKeyName;                           // 0x3B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_396C[0x4];                                     // Fixing Size After Last Property
	class FName                                  EncampmentMovementStateKeyName;                    // 0x3B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_396D[0x4];                                     // Fixing Size After Last Property
	class FName                                  EncampmentCenterLocationKeyName;                   // 0x3C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_396F[0x4];                                     // Fixing Size After Last Property
	class FName                                  EncampmentDestinationKeyName;                      // 0x3C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3970[0x4];                                     // Fixing Size After Last Property
	class FName                                  EncampmentAroundCampFireLocationKeyName;           // 0x3D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3972[0x4];                                     // Fixing Size After Last Property
	class FName                                  EncampmentRoleKeyName;                             // 0x3D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3974[0x4];                                     // Fixing Size After Last Property
	class FName                                  DefensiveBuildName;                                // 0x3E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3975[0x6C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_Encampment");
		return Clss;
	}

};

// 0x38 (0x1E0 - 0x1A8)
// Class FortniteAIServer.FortAthenaNpcEvaluator_FollowPatrolPath
class UFortAthenaNpcEvaluator_FollowPatrolPath : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  FollowPatrolPathKeyName;                           // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FollowPatrolPathMovementStateKeyName;              // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FollowPatrolPathDestinationKeyName;                // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_397B[0x8];                                     // Fixing Size After Last Property
	float                                        ChanceToTakeABreak;                                // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BreakDurationMin;                                  // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BreakDurationMax;                                  // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_397C[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_FollowPatrolPath");
		return Clss;
	}

};

// 0x150 (0x2F8 - 0x1A8)
// Class FortniteAIServer.FortAthenaNpcEvaluator_FollowSquadLeader
class UFortAthenaNpcEvaluator_FollowSquadLeader : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FScalableFloat                        FormationOffsetRadiusMin;                          // 0x1A8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        FormationOffsetRadiusMax;                          // 0x1D0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TooFarFromSquadLeaderDistance;                     // 0x1F8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxNoiseRadius;                                    // 0x220(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinDurationNoiseEvaluate;                          // 0x248(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxDurationNoiseEvaluate;                          // 0x270(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FName                                  FollowSquadLeaderStatusKeyName;                    // 0x298(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3980[0x4];                                     // Fixing Size After Last Property
	class FName                                  FollowSquadLeaderMovementStateKeyName;             // 0x2A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3981[0x4];                                     // Fixing Size After Last Property
	class FName                                  FollowSquadLeaderDestinationKeyName;               // 0x2A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3982[0x4];                                     // Fixing Size After Last Property
	class FName                                  TooFarFromLeaderKeyName;                           // 0x2B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3984[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CachedSquadFormationOffset;                        // 0x2B8(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               CachedNoiseOffset;                                 // 0x2D0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CachedTooFarFromSquadLeaderDistanceSqr;            // 0x2E8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LastNoiseOffsetUpdateTime;                         // 0x2EC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DurationNoiseEvaluate;                             // 0x2F0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3985[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_FollowSquadLeader");
		return Clss;
	}

};

// 0x38 (0x1E0 - 0x1A8)
// Class FortniteAIServer.FortAthenaNpcEvaluator_Leash
class UFortAthenaNpcEvaluator_Leash : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  LeashKeyName;                                      // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LeashMovementStateKeyName;                         // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LeashDestinationKeyName;                           // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LeashLocationKeyName;                              // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LeashOuterRadiusKeyName;                           // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAlwaysForceMoveToLeashCenter;                     // 0x1BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3987[0x3];                                     // Fixing Size After Last Property
	TSubclassOf<class UNavigationQueryFilter>    AvoidObstaclesFilterClass;                         // 0x1C0(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_398A[0x10];                                    // Fixing Size After Last Property
	class UFortAthenaAIRuntimeParameters_Leash*  LeashRuntimeParameters;                            // 0x1D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_Leash");
		return Clss;
	}

};

// 0x50 (0x1F8 - 0x1A8)
// Class FortniteAIServer.FortAthenaNpcEvaluator_Patrolling
class UFortAthenaNpcEvaluator_Patrolling : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                  PatrollingKeyName;                                 // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PatrollingMovementStateKeyName;                    // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PatrollingDestinationKeyName;                      // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DynamicBlueprintStatusKeyName;                     // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DynamicBlueprintActorKeyName;                      // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PatrollingShouldMoveKeyName;                       // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PatrollingAppendDestinationKeyName;                // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_398C[0x10];                                    // Fixing Size After Last Property
	float                                        DistanceToTestPoint;                               // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanDisablePatrolling;                             // 0x1D8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanReenablePatrolling;                            // 0x1D9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_398D[0x2];                                     // Fixing Size After Last Property
	float                                        ReenableTimer;                                     // 0x1DC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanSelectNearestPatrolPointAtStart;               // 0x1E0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_398E[0x7];                                     // Fixing Size After Last Property
	class UFortAthenaNpcPatrollingComponent*     CachedNpcPatrollingComponent;                      // 0x1E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_398F[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_Patrolling");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class FortniteAIServer.FortQueryContext_BotPOIVolume
class UFortQueryContext_BotPOIVolume : public UEnvQueryContext
{
public:
	bool                                         bSetProjectedToNavmeshLocationAsContext;           // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3990[0x7];                                     // Fixing Size After Last Property
	struct FVector                               ProjectionExtent;                                  // 0x30(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryContext_BotPOIVolume");
		return Clss;
	}

};

// 0x48 (0x90 - 0x48)
// Class FortniteAIServer.FortAthenaAttachToActorStateTreeTask
class UFortAthenaAttachToActorStateTreeTask : public UStateTreeTaskBlueprintBase
{
public:
	class UActor*                                Actor;                                             // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                TargetActor;                                       // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortAthenaStateTreeTaskFeatureExecutionMode AttachExecutionMode;                               // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHandleAthenaMovComponent;                         // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetPhysicsToQueryOnlyWhileAttached;               // 0x5D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTryToAttachToSkeletalMeshOnTargetActor;           // 0x5E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bChangeBaseToSkeletalMeshOnTargetActor;            // 0x5F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAttachmentRule                   AttachmentLocationRule;                            // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAttachmentRule                   AttachmentRotationRule;                            // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAttachmentRule                   AttachmentScaleRule;                               // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWeldSimulatedBodiesOnAttach;                      // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AttachmentSocketName;                              // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortAthenaStateTreeTaskFeatureExecutionMode DetachExecutionMode;                               // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceChangeBaseOnDetach;                          // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDetachmentRule                   DetachmentLocationRule;                            // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDetachmentRule                   DetachmentRotationRule;                            // 0x6E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDetachmentRule                   DetachmentScaleRule;                               // 0x6F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCallModifyOnDetach;                               // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHandleLaunchCharacter;                            // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasHandledLaunchCharacter;                        // 0x72(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3997[0x5];                                     // Fixing Size After Last Property
	class UFortPawn*                             FortPawnActor;                                     // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3998[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAttachToActorStateTreeTask");
		return Clss;
	}

};

// 0x78 (0xA0 - 0x28)
// Class FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData
class UFortAthenaPlayContextualAnimTaskInstanceData : public UObject
{
public:
	class UActor*                                PrimaryActor;                                      // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                SecondaryActor;                                    // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SecondaryRole;                                     // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A5[0x4];                                     // Fixing Size After Last Property
	class UActor*                                TertiaryActor;                                     // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TertiaryRole;                                      // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A6[0x4];                                     // Fixing Size After Last Property
	class UContextualAnimSceneAsset*             SceneAsset;                                        // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAthenaPlayContextualAnimExecutionMethod ExecutionMethod;                                   // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitForNotifyEventToEnd;                          // 0x5D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A7[0x2];                                     // Fixing Size After Last Property
	class FName                                  NotifyEventNameToEnd;                              // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoopsToRun;                                        // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopForever;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A8[0x3];                                     // Fixing Size After Last Property
	float                                        DelayBetweenLoops;                                 // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomDeviationBetweenLoops;                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39AB[0x4];                                     // Fixing Size After Last Property
	TArray<struct FContextualAnimWarpTarget>     WarpTargets;                                       // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_39AC[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaPlayContextualAnimTaskInstanceData");
		return Clss;
	}

	void OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);
};

// 0x80 (0xC8 - 0x48)
// Class FortniteAIServer.FortAthenaPlayInteractionStateTreeTask
class UFortAthenaPlayInteractionStateTreeTask : public UStateTreeTaskBlueprintBase
{
public:
	class UActor*                                InteractorActor;                                   // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                InteractableActor;                                 // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                          InteractorMontage;                                 // 0x58(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                          InteractableMontage;                               // 0x60(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bWaitForNotifyEventToEnd;                          // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39B7[0x3];                                     // Fixing Size After Last Property
	class FName                                  NotifyEventNameToEnd;                              // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAddMotionWarpingTargets;                          // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisableCollisionBetweenActors;                    // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSetMovementModeToFlying;                          // 0x72(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39B8[0x1];                                     // Fixing Size After Last Property
	int32                                        LoopsToRun;                                        // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLoopForever;                                      // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39B9[0x3];                                     // Fixing Size After Last Property
	float                                        DelayBetweenLoops;                                 // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RandomDeviationBetweenLoops;                       // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopInteractorAnimMontageOnExit;                  // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopInteractableAnimMontageOnExit;                // 0x85(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39BB[0x42];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaPlayInteractionStateTreeTask");
		return Clss;
	}

	void OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);
};

// 0x48 (0x90 - 0x48)
// Class FortniteAIServer.FortAthenaPlayMontageStateTreeTask
class UFortAthenaPlayMontageStateTreeTask : public UStateTreeTaskBlueprintBase
{
public:
	class UActor*                                Actor;                                             // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                          Montage;                                           // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bWaitForNotifyEventToEnd;                          // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39C7[0x3];                                     // Fixing Size After Last Property
	class FName                                  NotifyEventNameToEnd;                              // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSetMovementModeToFlying;                          // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39C8[0x3];                                     // Fixing Size After Last Property
	int32                                        LoopsToRun;                                        // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLoopForever;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39CA[0x3];                                     // Fixing Size After Last Property
	float                                        DelayBetweenLoops;                                 // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RandomDeviationBetweenLoops;                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopAnimMontageOnExit;                            // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39CB[0x1B];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaPlayMontageStateTreeTask");
		return Clss;
	}

	void HandleNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void HandleMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
