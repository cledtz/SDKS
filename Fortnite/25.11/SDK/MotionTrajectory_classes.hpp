#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x190 - 0xA0)
// Class MotionTrajectory.CharacterTrajectoryComponent
class UCharacterTrajectoryComponent : public UActorComponent
{
public:
	struct FPoseSearchQueryTrajectory            Trajectory;                                        // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	float                                        HistoryLengthSeconds;                              // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HistorySamplesPerSecond;                           // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PredictionLengthSeconds;                           // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PredictionSamplesPerSecond;                        // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RotateTowardsMovementSpeed;                        // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoUpdateTrajectory;                             // 0xC4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_804A[0x3];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                SkelMeshComponent;                                 // 0xC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCharacterMovementComponent*           CharacterMovementComponent;                        // 0xD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_804B[0xB8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CharacterTrajectoryComponent");
		return Clss;
	}

	void UpdateTrajectory(float DeltaSeconds);
	void OnMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
};

// 0x0 (0x28 - 0x28)
// Class MotionTrajectory.CharacterMovementTrajectoryLibrary
class UCharacterMovementTrajectoryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CharacterMovementTrajectoryLibrary");
		return Clss;
	}

	void StepCharacterMovementGroundPrediction(float InDeltaTime, struct FVector& InVelocity, struct FVector& InAcceleration, class UCharacterMovementComponent* InCharacterMovementComponent, struct FVector* OutVelocity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
