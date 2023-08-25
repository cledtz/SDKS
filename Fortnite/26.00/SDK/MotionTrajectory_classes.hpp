#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x130 - 0xA0)
// Class MotionTrajectory.CharacterTrajectoryComponent
class UCharacterTrajectoryComponent : public UActorComponent
{
public:
	struct FPoseSearchQueryTrajectory            Trajectory;                                        // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        HistoryLengthSeconds;                              // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HistorySamplesPerSecond;                           // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PredictionLengthSeconds;                           // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PredictionSamplesPerSecond;                        // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RotateTowardsMovementSpeed;                        // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoUpdateTrajectory;                             // 0xC4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BA[0x3];                                      // Fixing Size After Last Property 
	float                                        MaxControllerRotationRate;                         // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BC[0x4];                                      // Fixing Size After Last Property 
	class USkeletalMeshComponent*                SkelMeshComponent;                                 // 0xD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCharacterMovementComponent*           CharacterMovementComponent;                        // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BE[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCharacterTrajectoryComponent* GetDefaultObj();

	void UpdateTrajectory(float DeltaSeconds);
	void OnMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	struct FRotator GetFacingFromMeshComponent(class USkeletalMeshComponent* MeshComponent);
};

// 0x0 (0x28 - 0x28)
// Class MotionTrajectory.CharacterMovementTrajectoryLibrary
class UCharacterMovementTrajectoryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCharacterMovementTrajectoryLibrary* GetDefaultObj();

	void StepCharacterMovementGroundPrediction(float InDeltaTime, struct FVector& InVelocity, struct FVector& InAcceleration, class UCharacterMovementComponent* InCharacterMovementComponent, struct FVector* OutVelocity);
};

}


