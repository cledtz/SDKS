#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Mover.MoverBackendLiaisonInterface
class UMoverBackendLiaisonInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UMoverBackendLiaisonInterface* GetDefaultObj();

};

// 0x10 (0x328 - 0x318)
// Class Mover.MoverBasePawn
class UMoverBasePawn : public UPawn
{
public:
	class UKinematicMoverComponent*              CharacterMotionComponent;                          // 0x318(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26FA[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMoverBasePawn* GetDefaultObj();

	struct FKinematicMoverInputCmdContext OnProduceInputInBlueprint(float DeltaMs, const struct FKinematicMoverInputCmdContext& InputCmd);
	class UKinematicMoverComponent* GetMoverComponent();
};

// 0x50 (0x78 - 0x28)
// Class Mover.MoverBlackboard
class UMoverBlackboard : public UObject
{
public:
	uint8                                        Pad_26FD[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMoverBlackboard* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Mover.MoverDataModelBlueprintLibrary
class UMoverDataModelBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMoverDataModelBlueprintLibrary* GetDefaultObj();

	struct FVector GetVelocityFromSyncState(struct FMoverDefaultSyncState& SyncState);
	struct FRotator GetOrientationFromSyncState(struct FMoverDefaultSyncState& SyncState);
	struct FVector GetMoveDirectionIntentFromSyncState(struct FMoverDefaultSyncState& SyncState);
	struct FVector GetMoveDirectionIntentFromInputs(struct FKinematicDefaultInputs& Inputs);
	struct FVector GetLocationFromSyncState(struct FMoverDefaultSyncState& SyncState);
};

// 0x98 (0x138 - 0xA0)
// Class Mover.MoverNetworkPhysicsLiaisonComponent
class UMoverNetworkPhysicsLiaisonComponent : public UActorComponent
{
public:
	uint8                                        Pad_2722[0x98];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMoverNetworkPhysicsLiaisonComponent* GetDefaultObj();

};

// 0x10 (0x2A0 - 0x290)
// Class Mover.MoverNetworkPredictionLiaisonComponent
class UMoverNetworkPredictionLiaisonComponent : public UNetworkPredictionComponent
{
public:
	uint8                                        Pad_2726[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMoverNetworkPredictionLiaisonComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Mover.MoverDataCollectionLibrary
class UMoverDataCollectionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMoverDataCollectionLibrary* GetDefaultObj();

	void K2_GetDataFromCollection(bool* DidSucceed, struct FMoverDataCollection& Collection, int32* TargetAsRawBytes);
	void K2_AddDataToCollection(struct FMoverDataCollection& Collection, int32& SourceAsRawBytes);
};

// 0x0 (0x28 - 0x28)
// Class Mover.PhysicsCharacterMovementModeInterface
class UPhysicsCharacterMovementModeInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UPhysicsCharacterMovementModeInterface* GetDefaultObj();

};

// 0x1D8 (0x278 - 0xA0)
// Class Mover.KinematicMoverComponent
class UKinematicMoverComponent : public UActorComponent
{
public:
	uint8                                        Pad_277A[0x10];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnPreSimulationTick;                               // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostSimulationTick;                              // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostSimulationRollback;                          // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UActorComponent>           BackendClass;                                      // 0xE0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKinematicMoverAuxStateContext        InitialAuxState;                                   // 0xE8(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMap<class FName, class UBaseMovementMode*>  MovementModes;                                     // 0x128(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class FName                                  StartingMovementMode;                              // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HistoryTrackingSeconds;                            // 0x17C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HistorySamplesPerSecond;                           // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_277F[0x1C];                                    // Fixing Size After Last Property 
	class USceneComponent*                       UpdatedComponent;                                  // 0x1A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x1A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2781[0xA8];                                    // Fixing Size After Last Property 
	class UMovementModeStateMachine*             ModeFSM;                                           // 0x258(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoverBlackboard*                      SimBlackboard;                                     // 0x260(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2782[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UKinematicMoverComponent* GetDefaultObj();

	void SetHistoryTracking(float SecondsToTrack, float SamplesPerSecond);
	void PhysicsVolumeChanged(class UPhysicsVolume* NewVolume);
	void OnHistoryTrackingRollback(struct FMoverTimeStep& NewTimeStep, struct FMoverTimeStep& InvalidatedTimeStep);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class UActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void K2_QueueLayeredMove(int32& MoveAsRawData);
	bool IsOnGround();
	bool IsFalling();
	bool IsAirborne();
	bool HasValidCachedState();
	bool HasValidCachedInputCmd();
	struct FVector GetVelocity();
	struct FRotator GetTargetOrientation();
	struct FKinematicMoverSyncState GetSyncState();
	TArray<struct FTrajectorySampleInfo> GetPastTrajectory();
	class FName GetMovementModeName();
	struct FVector GetMovementIntent();
	class FName GetMovementBaseBoneName();
	class UPrimitiveComponent* GetMovementBase();
	struct FKinematicMoverInputCmdContext GetLastInputCmd();
	TArray<struct FTrajectorySampleInfo> GetFutureTrajectory(float FutureSeconds, float SamplesPerSecond);
};

// 0x8 (0x30 - 0x28)
// Class Mover.BaseMovementMode
class UBaseMovementMode : public UObject
{
public:
	uint8                                        Pad_2790[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBaseMovementMode* GetDefaultObj();

	void K2_OnUnregistered();
	struct FKinematicMoverTickEndData K2_OnSimulationTick(struct FSimulationTickParams& Params);
	void K2_OnRegistered(class FName ModeName);
	struct FProposedMove K2_OnGenerateMove(struct FKinematicMoverTickStartData& StartState, struct FMoverTimeStep& TimeStep);
	class UMoverBlackboard* GetBlackboard_Mutable();
	class UMoverBlackboard* GetBlackboard();
};

// 0x30 (0x60 - 0x30)
// Class Mover.FallingMode
class UFallingMode : public UBaseMovementMode
{
public:
	float                                        AirControlPercentage;                              // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallingDeceleration;                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverTerminalSpeedFallingDeceleration;              // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TerminalMovementPlaneSpeed;                        // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalFallingDeceleration;                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TerminalVerticalSpeed;                             // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GravityAcceleration;                               // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFallingMode* GetDefaultObj();

	void OnSimulationTick(struct FSimulationTickParams& Params, struct FKinematicMoverTickEndData* OutputState);
	void OnGenerateMove(struct FKinematicMoverTickStartData& StartState, struct FMoverTimeStep& TimeStep, struct FProposedMove* OutProposedMove);
};

// 0x0 (0x30 - 0x30)
// Class Mover.FlyingMode
class UFlyingMode : public UBaseMovementMode
{
public:

	static class UClass* StaticClass();
	static class UFlyingMode* GetDefaultObj();

	void OnSimulationTick(struct FSimulationTickParams& Params, struct FKinematicMoverTickEndData* OutputState);
	void OnGenerateMove(struct FKinematicMoverTickStartData& StartState, struct FMoverTimeStep& TimeStep, struct FProposedMove* OutProposedMove);
};

// 0x0 (0x30 - 0x30)
// Class Mover.WalkingMode
class UWalkingMode : public UBaseMovementMode
{
public:

	static class UClass* StaticClass();
	static class UWalkingMode* GetDefaultObj();

	void OnSimulationTick(struct FSimulationTickParams& Params, struct FKinematicMoverTickEndData* OutputState);
	void OnGenerateMove(struct FKinematicMoverTickStartData& StartState, struct FMoverTimeStep& TimeStep, struct FProposedMove* OutProposedMove);
};

// 0x0 (0x28 - 0x28)
// Class Mover.MovementBaseUtils
class UMovementBaseUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovementBaseUtils* GetDefaultObj();

	bool TransformWorldRotatorToBased(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FRotator& WorldSpaceRotator, struct FRotator* OutLocalRotator);
	bool TransformWorldLocationToBased(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FVector& WorldSpaceLocation, struct FVector* OutLocalLocation);
	bool TransformWorldDirectionToBased(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FVector& WorldSpaceDirection, struct FVector* OutLocalDirection);
	void TransformRotatorToWorld(const struct FQuat& BaseQuat, const struct FRotator& LocalRotator, struct FRotator* OutWorldSpaceRotator);
	void TransformRotatorToLocal(const struct FQuat& BaseQuat, const struct FRotator& WorldSpaceRotator, struct FRotator* OutLocalRotator);
	void TransformLocationToWorld(const struct FVector& BasePos, const struct FQuat& BaseQuat, const struct FVector& LocalLocation, struct FVector* OutLocationWorldSpace);
	void TransformLocationToLocal(const struct FVector& BasePos, const struct FQuat& BaseQuat, const struct FVector& WorldSpaceLocation, struct FVector* OutLocalLocation);
	void TransformDirectionToWorld(const struct FQuat& BaseQuat, const struct FVector& LocalDirection, struct FVector* OutDirectionWorldSpace);
	void TransformDirectionToLocal(const struct FQuat& BaseQuat, const struct FVector& WorldSpaceDirection, struct FVector* OutLocalDirection);
	bool TransformBasedRotatorToWorld(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FRotator& LocalRotator, struct FRotator* OutWorldSpaceRotator);
	bool TransformBasedLocationToWorld(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FVector& LocalLocation, struct FVector* OutLocationWorldSpace);
	bool TransformBasedDirectionToWorld(class UPrimitiveComponent* MovementBase, class FName BoneName, const struct FVector& LocalDirection, struct FVector* OutDirectionWorldSpace);
	bool IsADynamicBase(class UPrimitiveComponent* MovementBase);
	bool GetMovementBaseTransform(class UPrimitiveComponent* MovementBase, class FName BoneName, struct FVector* OutLocation, struct FQuat* OutQuat);
};

// 0x0 (0x28 - 0x28)
// Class Mover.MovementUtils
class UMovementUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovementUtils* GetDefaultObj();

	float TryWalkToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Delta, float PctOfDeltaToMove, const struct FQuat& Rotation, struct FVector& Normal, struct FHitResult* Hit, bool bHandleImpact, struct FMovementRecord* MoveRecord, float MaxWalkSlopeCosine);
	bool TrySafeMoveUpdatedComponent(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Delta, struct FQuat& NewRotation, bool bSweep, struct FHitResult* OutHit, enum class ETeleportType Teleport, struct FMovementRecord* MoveRecord);
	float TryMoveToSlideAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Delta, float PctOfDeltaToMove, const struct FQuat& Rotation, struct FVector& Normal, struct FHitResult* Hit, bool bHandleImpact, struct FMovementRecord* MoveRecord);
	float TryMoveToFallAlongSurface(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Delta, float PctOfDeltaToMove, const struct FQuat& Rotation, struct FVector& Normal, struct FHitResult* Hit, bool bHandleImpact, float FloorSweepDistance, float MaxWalkSlopeCosine, struct FFloorCheckResult* OutFloorResult, struct FMovementRecord* MoveRecord);
	bool IsValidLandingSpot(class USceneComponent* UpdatedComponent, class UPrimitiveComponent* UpdatedPrimitive, struct FVector& Location, struct FHitResult& Hit, float FloorSweepDistance, float MaxWalkSlopeCosine, struct FFloorCheckResult* OutFloorResult);
	bool IsHitSurfaceWalkable(struct FHitResult& Hit, float MaxWalkSlopeCosine);
	bool IsExceedingMaxSpeed(struct FVector& Velocity, float InMaxSpeed);
	struct FVector ConstrainToPlane(struct FVector& Vector, struct FPlane& MovementPlane, bool bMaintainMagnitude);
	struct FVector ComputeVelocityFromPositions(struct FVector& FromPos, struct FVector& ToPos, float DeltaSeconds);
	struct FVector ComputeVelocityFromGravity(struct FVector& GravityAccel, float DeltaSeconds);
	struct FVector ComputeVelocity(struct FComputeVelocityParams& InParams);
	struct FVector ComputeSlideDelta(struct FVector& Delta, float PctOfDeltaToMove, struct FVector& Normal, struct FHitResult& Hit);
	struct FVector ComputeDirectionIntent(struct FVector& MoveInput, enum class EMoveInputType MoveInputType);
	struct FVector ComputeDeflectedMoveOntoRamp(struct FVector& OrigMoveDelta, struct FHitResult& RampHitResult, float MaxWalkSlopeCosine, bool bHitFromLineTrace);
	struct FProposedMove ComputeControlledGroundMove(struct FGroundMoveParams& InParams);
	struct FProposedMove ComputeControlledFreeMove(struct FFreeMoveParams& InParams);
	struct FRotator ComputeAngularVelocity(struct FRotator& From, struct FRotator& To, float DeltaSeconds, float TurningRateLimit);
	bool CanStepUpOnHitSurface(struct FHitResult& Hit);
	void AdjustProposedMoveForRootMotion(struct FProposedMove* MoveToAdjust, class USkeletalMeshComponent* SkeletalMesh, struct FVector& GroundNormal, float DeltaSeconds);
};

// 0x0 (0xA8 - 0xA8)
// Class Mover.PlayMoverMontageCallbackProxy
class UPlayMoverMontageCallbackProxy : public UPlayMontageCallbackProxy
{
public:

	static class UClass* StaticClass();
	static class UPlayMoverMontageCallbackProxy* GetDefaultObj();

	void OnMoverMontageEnded(class FName IgnoredNotifyName);
	class UPlayMoverMontageCallbackProxy* CreateProxyObjectForPlayMoverMontage(class UKinematicMoverComponent* InMoverComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
};

// 0x0 (0x30 - 0x30)
// Class Mover.NullMovementMode
class UNullMovementMode : public UBaseMovementMode
{
public:

	static class UClass* StaticClass();
	static class UNullMovementMode* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class Mover.MovementModeStateMachine
class UMovementModeStateMachine : public UObject
{
public:
	TMap<class FName, class UBaseMovementMode*>  Modes;                                             // 0x28(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2966[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMovementModeStateMachine* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class Mover.PhysicsDrivenFallingMode
class UPhysicsDrivenFallingMode : public UFallingMode
{
public:
	uint8                                        Pad_2969[0x8];                                     // Fixing Size After Last Property 
	float                                        TwistTorqueLimit;                                  // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwingTorqueLimit;                                  // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetHeight;                                      // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloorSweepDistance;                                // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloorSweepRadius;                                  // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_296C[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPhysicsDrivenFallingMode* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class Mover.PhysicsDrivenWalkingMode
class UPhysicsDrivenWalkingMode : public UWalkingMode
{
public:
	uint8                                        Pad_296F[0x8];                                     // Fixing Size After Last Property 
	float                                        RadialForceLimit;                                  // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrictionForceLimit;                                // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistTorqueLimit;                                  // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwingTorqueLimit;                                  // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetHeight;                                      // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloorSweepDistance;                                // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloorSweepRadius;                                  // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterRadius;                                   // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundDamping;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FractionalVelocityToTarget;                        // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPhysicsDrivenWalkingMode* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class Mover.PhysicsMoverManager
class UPhysicsMoverManager : public UWorldSubsystem
{
public:
	uint8                                        Pad_2972[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPhysicsMoverManager* GetDefaultObj();

};

}


