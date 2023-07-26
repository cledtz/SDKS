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

// 0x8 (0x30 - 0x28)
// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition
class UGameplayBehaviorSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{
public:
	class UGameplayBehaviorConfig*               GameplayBehaviorConfig;                            // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehaviorSmartObjectBehaviorDefinition");
		return Clss;
	}

};

// 0x68 (0xD0 - 0x68)
// Class GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
class UAITask_UseGameplayBehaviorSmartObject : public UAITask
{
public:
	FMulticastInlineDelegateProperty_            OnSucceeded;                                       // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnMoveToFailed;                                    // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAITask_MoveTo*                        MoveToTask;                                        // 0x98(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayBehavior*                     GameplayBehavior;                                  // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4607[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AITask_UseGameplayBehaviorSmartObject");
		return Clss;
	}

	class UAITask_UseGameplayBehaviorSmartObject* UseGameplayBehaviorSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic);
	class UAITask_UseGameplayBehaviorSmartObject* UseClaimedGameplayBehaviorSmartObject(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic);
};

// 0xA8 (0x118 - 0x70)
// Class GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject
class UBTTask_FindAndUseGameplayBehaviorSmartObject : public UBTTaskNode
{
public:
	struct FGameplayTagQuery                     ActivityRequirements;                              // 0x70(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0xB8(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4608[0x14];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_FindAndUseGameplayBehaviorSmartObject");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayBehaviorSmartObjectsBlueprintFunctionLibrary");
		return Clss;
	}

	bool UseGameplayBehaviorSmartObject(class AActor* Avatar, class AActor* SmartObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
