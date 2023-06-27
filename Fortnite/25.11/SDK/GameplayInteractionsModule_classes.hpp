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

// 0x18 (0x40 - 0x28)
// Class GameplayInteractionsModule.GameplayInteractionSmartObjectBehaviorDefinition
class UGameplayInteractionSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{
public:
	struct FStateTreeReference                   StateTreeReference;                                // 0x28(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayInteractionSmartObjectBehaviorDefinition");
		return Clss;
	}

};

// 0x78 (0xE0 - 0x68)
// Class GameplayInteractionsModule.AITask_UseGameplayInteraction
class UAITask_UseGameplayInteraction : public UAITask
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FGameplayInteractionContext           GameplayInteractionContext;                        // 0x78(0x48)(Protected, NativeAccessSpecifierProtected)
	struct FSmartObjectClaimHandle               ClaimedHandle;                                     // 0xC0(0x18)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayInteractionAbortContext      AbortContext;                                      // 0xD8(0x1)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1704[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AITask_UseGameplayInteraction");
		return Clss;
	}

	class UAITask_UseGameplayInteraction* UseClaimedGameplayInteractionSmartObject(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic);
	void RequestAbort();
};

// 0x20 (0x48 - 0x28)
// Class GameplayInteractionsModule.GameplayInteractionStateTreeSchema
class UGameplayInteractionStateTreeSchema : public UStateTreeSchema
{
public:
	TSubclassOf<class AActor>                    ContextActorClass;                                 // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AActor>                    SmartObjectActorClass;                             // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FStateTreeExternalDataDesc>    ContextDataDescs;                                  // 0x38(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayInteractionStateTreeSchema");
		return Clss;
	}

};

// 0x78 (0xA0 - 0x28)
// Class GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData
class UStateTreeTask_PlayContextualAnim_InstanceData : public UObject
{
public:
	class AActor*                                PrimaryActor;                                      // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SecondaryActor;                                    // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SecondaryRole;                                     // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1707[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                TertiaryActor;                                     // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TertiaryRole;                                      // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1708[0x4];                                     // Fixing Size After Last Property..
	class UContextualAnimSceneAsset*             SceneAsset;                                        // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayContextualAnimExecutionMethod ExecutionMethod;                                   // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitForNotifyEventToEnd;                          // 0x5D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1709[0x2];                                     // Fixing Size After Last Property..
	class FName                                  NotifyEventNameToEnd;                              // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoopsToRun;                                        // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopForever;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170A[0x3];                                     // Fixing Size After Last Property..
	float                                        DelayBetweenLoops;                                 // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomDeviationBetweenLoops;                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170B[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FContextualAnimWarpTarget>     WarpTargets;                                       // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_170C[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StateTreeTask_PlayContextualAnim_InstanceData");
		return Clss;
	}

	void OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
