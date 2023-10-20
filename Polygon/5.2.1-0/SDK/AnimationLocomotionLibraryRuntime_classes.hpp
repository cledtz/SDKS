#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
class UAnimCharacterMovementLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimCharacterMovementLibrary* GetDefaultObj();

	struct FVector PredictGroundMovementStopLocation(struct FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking);
	struct FVector PredictGroundMovementPivotLocation(struct FVector& Acceleration, struct FVector& Velocity, float GroundFriction);
};

// 0x0 (0x28 - 0x28)
// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimDistanceMatchingLibrary* GetDefaultObj();

	struct FSequencePlayerReference SetPlayrateToMatchSpeed(struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, const struct FVector2D& PlayRateClamp);
	struct FSequenceEvaluatorReference DistanceMatchToTarget(struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, class FName DistanceCurveName);
	struct FSequenceEvaluatorReference AdvanceTimeByDistanceMatching(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, class FName DistanceCurveName, const struct FVector2D& PlayRateClamp);
};

}


