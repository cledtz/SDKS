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

// 0x1C8 (0x268 - 0xA0)
// Class MotherGameplayRuntime.GravityGunTargetTrackingComponent
class UGravityGunTargetTrackingComponent : public UActorComponent
{
public:
	struct FScalableFloat                        AllowLargeObjects;                                 // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowMultipleGrabbers;                             // 0xC8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowVehicles;                                     // 0xF0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowPickups;                                      // 0x118(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowProjectiles;                                  // 0x140(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowForay;                                        // 0x168(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AllowWhileInVehicle;                               // 0x190(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  GrabbedByGravityGunTagName;                        // 0x1B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BB0[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 InvalidTargetTags;                                 // 0x1C0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetIsPlayerTag;                                 // 0x1E0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetIsAlreadyGrabbedTag;                         // 0x200(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetIsOwnVehicleTag;                             // 0x220(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            FoundTargetDelegate;                               // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            DeactivateReticleDelegate;                         // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BB1[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GravityGunTargetTrackingComponent");
		return Clss;
	}

	bool IsValidTarget(class UActor* OwningPlayer, class UActor* PotentialTarget, struct FGameplayTagContainer* ReasonForFailure);
	bool FindTargetProjectile(class UActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd, float TargetingRadius);
	void FindTargetActor(class UActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd);
};

// 0x0 (0x2600 - 0x2600)
// Class MotherGameplayRuntime.FortCabbageIglooVehicle
class UFortCabbageIglooVehicle : public UFortOctopusVehicle
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCabbageIglooVehicle");
		return Clss;
	}

};

// 0x178 (0x5B0 - 0x438)
// Class MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
class UFortBaseAnimInstance_CageSaddle : public UFortBaseAnimInstance
{
public:
	class UFortSphericalVehicle*                 AsFortSphericalVehicle;                            // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOnGround;                                       // 0x440(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BB2[0x3];                                     // Fixing Size After Last Property..
	float                                        RemappedPitch;                                     // 0x444(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentRoll;                                       // 0x448(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LockedRoll;                                        // 0x44C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeadShouldBend;                                   // 0x450(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootShouldBend;                                   // 0x451(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BB3[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               BodyGroundOffset;                                  // 0x458(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MinClampPitchInRange;                              // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MinClampPitchOutRange;                             // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaxClampPitchInRange;                              // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaxClampPitchOutRange;                             // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadAlphaInterpSpeed;                              // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BB4[0xFC];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBaseAnimInstance_CageSaddle");
		return Clss;
	}

};

// 0x40 (0x9A8 - 0x968)
// Class MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
class UFortGameplayCueNotifyLoop_Goop : public UFortGameplayCueNotify_Loop
{
public:
	class FName                                  SpeedParamName;                                    // 0x968(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  IsFallingParamName;                                // 0x96C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGoopAudioMapRangeClamped             SpeedMapRangeClamped;                              // 0x970(0x20)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        InterpSpeed;                                       // 0x990(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BB5[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       LoopingAudioComponent;                             // 0x998(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BB6[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameplayCueNotifyLoop_Goop");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MotherGameplayRuntime.PropGunFunctionLibrary
class UPropGunFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PropGunFunctionLibrary");
		return Clss;
	}

	void UpdatePropPreviewPosition(class USceneComponent* PropPreviewComponent, float DeltaTime, class UFortPawn* AttachPawn, class FName AttachSocket, class USkeletalMeshComponent* WeaponMesh, struct FVector& DesiredRelativeTransform, float MinimumZOffset, struct FRotator& RelativeRotation, struct FVector& CachedScale, float InterpSpeed);
	void UpdatePropIndexEventState(class UActor* ContextActor, struct FPaddleGingerPropData& Payload);
	void UpdatePropActivatedEventState(class UActor* ContextActor, struct FPaddleGingerPropActivatedData& Payload);
	void ClearPropIndexEventState(class UActor* ContextActor);
	void ClearPropActivatedEventState(class UActor* ContextActor);
};

// 0x88 (0x9F0 - 0x968)
// Class MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
class UReactorGradeGameplayCue_ChargeUp : public UFortGameplayCueNotify_Loop
{
public:
	class UFortPawn*                             Pawn;                                              // 0x968(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWeaponFxComponent_ChargeAimLocation* CachedAimLocationComponent;                        // 0x970(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               FoundEndPoint;                                     // 0x978(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinHitDistance;                                    // 0x990(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HitObjectsLimit;                                   // 0x9B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BBB[0x4];                                     // Fixing Size After Last Property..
	enum class ECollisionChannel                 TraceChannel;                                      // 0x9E4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BBC[0xB];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReactorGradeGameplayCue_ChargeUp");
		return Clss;
	}

	void UpdateAimEndPoint();
	void OnEndPointUpdated(struct FVector& FoundPoint);
	struct FVector GetFoundEndPoint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
