#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x150 - 0x100)
// Class RocketRamGameplayRuntime.AbilityTask_ApplyRootMotion_RocketRam
class UAbilityTask_ApplyRootMotion_RocketRam : public UAbilityTask_ApplyRootMotionConstantForce
{
public:
	struct FVector                               InitialDirection;                                  // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               EndingDirection;                                   // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinSpeed;                                          // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxSpeed;                                          // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                           SpeedCurve;                                        // 0x138(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FloorTraceHeight;                                  // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D4B[0x4];                                     // Fixing Size After Last Property 
	class UCurveVector*                          PathOffsetCurve;                                   // 0x148(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotion_RocketRam* GetDefaultObj();

	class UAbilityTask_ApplyRootMotion_RocketRam* ApplyRootMotion_RocketRam(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, float InDuration, const struct FVector& InInitialDirection, const struct FVector& InEndingDirection, float InMinSpeed, float InMaxSpeed, class UCurveFloat* InSpeedCurve, float InFloorTraceHeight, class UCurveVector* InPathOffsetCurve, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish);
};

}


