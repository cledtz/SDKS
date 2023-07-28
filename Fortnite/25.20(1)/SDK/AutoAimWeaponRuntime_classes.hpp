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

// 0x0 (0x28 - 0x28)
// Class AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary
class UAutoAimWeaponKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutoAimWeaponKismetLibrary");
		return Clss;
	}

	class UAutoAimWeaponPawnComponent* GetAutoAimWeaponPawnComponent(class UFortPawn* SourcePawn);
	void FindBestAutoAimTarget(class UFortPawn** OutTargetPawn, float* OutReticleDistance, class UFortPlayerPawn* SourcePawn, float ReticleSize, float Range);
	bool DoesAutoAimWeaponReticleIntersectTarget(float* OutReticleDistance, class UFortPawn* SourcePawn, class UFortPawn* TargetPawn, float ReticleSize);
	bool DoesAutoAimWeaponHaveLineOfSight(class UFortPawn* SourcePawn, class UFortPawn* TargetPawn);
};

// 0xE0 (0x188 - 0xA8)
// Class AutoAimWeaponRuntime.AutoAimWeaponPawnComponent
class UAutoAimWeaponPawnComponent : public UFortPawnComponent
{
public:
	struct FGameplayTagContainer                 UseSingleLocationTargetingPawnTags;                // 0xA8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 LowPriorityTargetPawnTags;                         // 0xC8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FAutoAimWeaponBoneSegmentData> MultiSocketTargetingBoneSegmentDatas;              // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        LockOnTimeReticleCenter;                           // 0xF8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        LockOnTimeReticleEdge;                             // 0x120(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxLockOns;                                        // 0x148(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        ProgressTowardNextLockOn;                          // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentLockOnCount;                                // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TargetToReticleDistanceNormalized;                 // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortPawn>              LockOnTarget;                                      // 0x17C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_43CE[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutoAimWeaponPawnComponent");
		return Clss;
	}

	float GetTargetToReticleDistanceNormalized();
	bool GetLockOnTargetLocation(struct FVector* OutLockTargetLocation);
	float GetLockOnProgress();
	int32 GetCurrentLockOnCount();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
