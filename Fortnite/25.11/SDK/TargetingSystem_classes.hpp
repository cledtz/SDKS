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

// 0x30 (0xA8 - 0x78)
// Class TargetingSystem.AbilityTask_PerformTargeting
class UAbilityTask_PerformTargeting : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnTargetReady;                                     // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_364C[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_PerformTargeting");
		return Clss;
	}

	class UAbilityTask_PerformTargeting* PerformTargetingRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* InTargetingPreset, bool bAllowAsync);
	class UAbilityTask_PerformTargeting* PerformFilteringRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* TargetingPreset, const TArray<class AActor*>& InTargets, bool bAllowAsync);
};

// 0x38 (0x68 - 0x30)
// Class TargetingSystem.AsyncAction_PerformTargeting
class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Targeted;                                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTargetingPreset*                      TargetingPreset;                                   // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AActor>                 WeakSourceActor;                                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        InitialTargets;                                    // 0x50(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x60(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        bUseAsyncTargeting : 1;                            // Mask: 0x1, PropSize: 0x10x64(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_364F[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AsyncAction_PerformTargeting");
		return Clss;
	}

	class UAsyncAction_PerformTargeting* PerformTargetingRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting);
	class UAsyncAction_PerformTargeting* PerformFilteringRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting, const TArray<class AActor*>& InTargets);
	struct FTargetingRequestHandle GetTargetingHandle();
};

// 0x0 (0x28 - 0x28)
// Class TargetingSystem.TargetingTask
class UTargetingTask : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingTask");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class TargetingSystem.TargetingFilterTask_BasicFilterTemplate
class UTargetingFilterTask_BasicFilterTemplate : public UTargetingTask
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingFilterTask_BasicFilterTemplate");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class TargetingSystem.TargetingFilterTask_ActorClass
class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate
{
public:
	TArray<TSubclassOf<class UObject>>           RequiredActorClassFilters;                         // 0x28(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UObject>>           IgnoredActorClassFilters;                          // 0x38(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingFilterTask_ActorClass");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class TargetingSystem.TargetingPreset
class UTargetingPreset : public UDataAsset
{
public:
	struct FTargetingTaskSet                     TargetingTaskSet;                                  // 0x30(0x10)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingPreset");
		return Clss;
	}

};

// 0xA8 (0xD0 - 0x28)
// Class TargetingSystem.TargetingSelectionTask_AOE
class UTargetingSelectionTask_AOE : public UTargetingTask
{
public:
	enum class ETargetingAOEShape                ShapeType;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 CollisionChannel;                                  // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3652[0x2];                                     // Fixing Size After Last Property..
	struct FCollisionProfileName                 CollisionProfileName;                              // 0x2C(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<enum class EObjectTypeQuery>          CollisionObjectTypes;                              // 0x30(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               DefaultSourceOffset;                               // 0x40(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseRelativeOffset : 1;                            // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreSourceActor : 1;                            // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreInstigatorActor : 1;                        // Mask: 0x4, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_227 : 5;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_3653[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               HalfExtent;                                        // 0x60(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        Radius;                                            // 0x78(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HalfHeight;                                        // 0xA0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	class FName                                  ComponentTag;                                      // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3654[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingSelectionTask_AOE");
		return Clss;
	}

	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle);
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle);
};

// 0x0 (0x28 - 0x28)
// Class TargetingSystem.TargetingSelectionTask_SourceActor
class UTargetingSelectionTask_SourceActor : public UTargetingTask
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingSelectionTask_SourceActor");
		return Clss;
	}

};

// 0x90 (0xB8 - 0x28)
// Class TargetingSystem.TargetingSelectionTask_Trace
class UTargetingSelectionTask_Trace : public UTargetingTask
{
public:
	enum class ETargetingTraceType               TraceType;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3659[0x2];                                     // Fixing Size After Last Property..
	struct FCollisionProfileName                 CollisionProfileName;                              // 0x2C(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DefaultSweptTraceRadius;                           // 0x30(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DefaultTraceLength;                                // 0x58(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FVector                               DefaultSourceOffset;                               // 0x80(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ExplicitTraceDirection;                            // 0x98(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bComplexTrace : 1;                                 // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreSourceActor : 1;                            // Mask: 0x2, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreInstigatorActor : 1;                        // Mask: 0x4, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_365A[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingSelectionTask_Trace");
		return Clss;
	}

	float GetTraceLength(struct FTargetingRequestHandle& TargetingHandle);
	struct FVector GetTraceDirection(struct FTargetingRequestHandle& TargetingHandle);
	float GetSweptTraceRadius(struct FTargetingRequestHandle& TargetingHandle);
	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle);
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle);
	void GetAdditionalActorsToIgnore(struct FTargetingRequestHandle& TargetingHandle, TArray<class AActor*>* OutAdditionalActorsToIgnore);
};

// 0x8 (0x30 - 0x28)
// Class TargetingSystem.TargetingSortTask_Base
class UTargetingSortTask_Base : public UTargetingTask
{
public:
	uint8                                        bAscending : 1;                                    // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_365B[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingSortTask_Base");
		return Clss;
	}

};

// 0x48 (0x78 - 0x30)
// Class TargetingSystem.TargetingSubsystem
class UTargetingSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_3661[0x10];                                    // Fixing Size After Last Property..
	TArray<struct FTargetingRequestHandle>       AsyncTargetingRequests;                            // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3662[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingSubsystem");
		return Clss;
	}

	struct FTargetingRequestHandle StartAsyncTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, FDelegateProperty_ CompletionDynamicDelegate);
	void RemoveAsyncTargetingRequestWithHandle(struct FTargetingRequestHandle* TargetingHandle);
	void OverrideCollisionQueryTaskData(const struct FTargetingRequestHandle& TargetingHandle, struct FCollisionQueryTaskData& CollisionQueryDataOverride);
	struct FTargetingSourceContext GetTargetingSourceContext(const struct FTargetingRequestHandle& TargetingHandle);
	void GetTargetingResultsActors(const struct FTargetingRequestHandle& TargetingHandle, TArray<class AActor*>* Targets);
	void GetTargetingResults(const struct FTargetingRequestHandle& TargetingHandle, TArray<struct FHitResult>* OutTargets);
	void ExecuteTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, FDelegateProperty_ CompletionDynamicDelegate);
};

// 0x0 (0x30 - 0x30)
// Class TargetingSystem.TargetingFilterTask_SortByDistance
class UTargetingFilterTask_SortByDistance : public UTargetingSortTask_Base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetingFilterTask_SortByDistance");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
