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

// 0x38 (0x60 - 0x28)
// Class GameplayTasks.GameplayTask
class UGameplayTask : public UObject
{
public:
	uint8                                        Pad_3778[0x8];                                     // Fixing Size After Last Property..
	class FName                                  InstanceName;                                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3779[0x2];                                     // Fixing Size After Last Property..
	enum class ETaskResourceOverlapPolicy        ResourceOverlapPolicy;                             // 0x36(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_377A[0x21];                                    // Fixing Size After Last Property..
	class UGameplayTask*                         ChildTask;                                         // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask");
		return Clss;
	}

	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// 0x0 (0x28 - 0x28)
// Class GameplayTasks.GameplayTaskOwnerInterface
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTaskOwnerInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayTasks.GameplayTaskResource
class UGameplayTaskResource : public UObject
{
public:
	int32                                        ManualResourceID;                                  // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8                                         AutoResourceID;                                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_377B[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bManuallySetID : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_377C[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTaskResource");
		return Clss;
	}

};

// 0x78 (0x118 - 0xA0)
// Class GameplayTasks.GameplayTasksComponent
class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                        Pad_377F[0x14];                                    // Fixing Size After Last Property..
	uint8                                        BitPad_229 : 1;                                    // Fixing Bit-Field Size..
	uint8                                        bIsNetDirty : 1;                                   // Mask: 0x2, PropSize: 0x10xB4(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_22A : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_3780[0x3];                                     // Fixing Size After Last Property..
	TArray<class UGameplayTask*>                 TaskPriorityQueue;                                 // 0xB8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_3781[0x10];                                    // Fixing Size After Last Property..
	TArray<class UGameplayTask*>                 TickingTasks;                                      // 0xD8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                 KnownTasks;                                        // 0xE8(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnClaimedResourcesChange;                          // 0xF8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TArray<class UGameplayTask*>                 SimulatedTasks;                                    // 0x108(0x10)(Net, ZeroConstructor, RepNotify, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTasksComponent");
		return Clss;
	}

	void OnRep_SimulatedTasks(TArray<class UGameplayTask*>& PreviousSimulatedTasks);
	enum class EGameplayTaskRunResult K2_RunGameplayTask(FInterfaceProperty_ TaskOwner, class UGameplayTask* Task, uint8 Priority, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalRequiredResources, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalClaimedResources);
};

// 0x0 (0x60 - 0x60)
// Class GameplayTasks.GameplayTask_ClaimResource
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_ClaimResource");
		return Clss;
	}

	class UGameplayTask_ClaimResource* ClaimResources(FInterfaceProperty_ InTaskOwner, const TArray<TSubclassOf<class UGameplayTaskResource>>& ResourceClasses, uint8 Priority, class FName TaskInstanceName);
	class UGameplayTask_ClaimResource* ClaimResource(FInterfaceProperty_ InTaskOwner, TSubclassOf<class UGameplayTaskResource> ResourceClass, uint8 Priority, class FName TaskInstanceName);
};

// 0x58 (0xB8 - 0x60)
// Class GameplayTasks.GameplayTask_SpawnActor
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3786[0x30];                                    // Fixing Size After Last Property..
	TSubclassOf<class UActor>                    ClassToSpawn;                                      // 0xB0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_SpawnActor");
		return Clss;
	}

	class UGameplayTask_SpawnActor* SpawnActor(FInterfaceProperty_ TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, TSubclassOf<class UActor> Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class UActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class UActor** SpawnedActor);
};

// 0x38 (0x98 - 0x60)
// Class GameplayTasks.GameplayTask_TimeLimitedExecution
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimeExpired;                                     // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3787[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_TimeLimitedExecution");
		return Clss;
	}

};

// 0x20 (0x80 - 0x60)
// Class GameplayTasks.GameplayTask_WaitDelay
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3789[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_WaitDelay");
		return Clss;
	}

	class UGameplayTask_WaitDelay* TaskWaitDelay(FInterfaceProperty_ TaskOwner, float Time, uint8 Priority);
	void TaskDelayDelegate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
