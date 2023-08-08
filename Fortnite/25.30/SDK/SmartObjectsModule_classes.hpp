#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x170 - 0x50)
// Class SmartObjectsModule.EnvQueryGenerator_SmartObjects
class UEnvQueryGenerator_SmartObjects : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>          QueryOriginContext;                                // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F89[0x8];                                     // Fixing Size After Last Property
	struct FSmartObjectRequestFilter             SmartObjectRequestFilter;                          // 0x60(0xF0)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FVector                               QueryBoxExtent;                                    // 0x150(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOnlyClaimable;                                    // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F8A[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryGenerator_SmartObjects");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class SmartObjectsModule.EnvQueryItemType_SmartObject
class UEnvQueryItemType_SmartObject : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvQueryItemType_SmartObject");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class SmartObjectsModule.SmartObjectSettings
class USmartObjectSettings : public UDeveloperSettings
{
public:
	enum class ESmartObjectTagFilteringPolicy    DefaultUserTagsFilteringPolicy;                    // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESmartObjectTagMergingPolicy      DefaultActivityTagsMergingPolicy;                  // 0x31(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F8F[0x6];                                     // Fixing Size After Last Property
	TSubclassOf<class USmartObjectWorldConditionSchema> DefaultWorldConditionSchemaClass;                  // 0x38(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectSettings");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class SmartObjectsModule.BlackboardKeyType_SOClaimHandle
class UBlackboardKeyType_SOClaimHandle : public UBlackboardKeyType
{
public:
	struct FSmartObjectClaimHandle               Handle;                                            // 0x30(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlackboardKeyType_SOClaimHandle");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class SmartObjectsModule.GenericSmartObject
class UGenericSmartObject : public UActor
{
public:
	class USmartObjectComponent*                 SOComponent;                                       // 0x290(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GenericSmartObject");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectBlueprintFunctionLibrary");
		return Clss;
	}

	void SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName, const struct FSmartObjectClaimHandle& Value);
	bool SetSmartObjectEnabled(class UActor* SmartObjectActor, bool bEnabled);
	bool SetMultipleSmartObjectsEnabled(TArray<class UActor*>& SmartObjectActors, bool bEnabled);
	void SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FSmartObjectClaimHandle& Value);
	bool RemoveSmartObject(class UActor* SmartObjectActor);
	bool RemoveMultipleSmartObjects(TArray<class UActor*>& SmartObjectActors);
	bool IsValidSmartObjectClaimHandle(const struct FSmartObjectClaimHandle& Handle);
	struct FSmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName);
	struct FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
	bool AddSmartObject(class UActor* SmartObjectActor);
	bool AddOrRemoveSmartObject(class UActor* SmartObject, bool bEnabled);
	bool AddOrRemoveMultipleSmartObjects(TArray<class UActor*>& SmartObjectActors, bool bAdd);
	bool AddMultipleSmartObjects(TArray<class UActor*>& SmartObjectActors);
};

// 0xB0 (0x340 - 0x290)
// Class SmartObjectsModule.SmartObjectCollection
class USmartObjectCollection : public UActor
{
public:
	struct FBox                                  Bounds;                                            // 0x290(0x38)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSmartObjectCollectionEntry>   CollectionEntries;                                 // 0x2C8(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct FSmartObjectHandle, struct FSoftObjectPath> RegisteredIdToObjectMap;                           // 0x2D8(0x50)(Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectDefinition*>        Definitions;                                       // 0x328(0x10)(Edit, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2FE2[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectCollection");
		return Clss;
	}

};

// 0x50 (0x2F0 - 0x2A0)
// Class SmartObjectsModule.SmartObjectComponent
class USmartObjectComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnSmartObjectEvent;                                // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2FE8[0x18];                                    // Fixing Size After Last Property
	class USmartObjectDefinition*                DefinitionAsset;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectHandle                    RegisteredHandle;                                  // 0x2D0(0x8)(Edit, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2FED[0x10];                                    // Fixing Size After Last Property
	bool                                         bCanBePartOfCollection;                            // 0x2E8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2FEE[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectComponent");
		return Clss;
	}

	void ReceiveOnEvent(struct FSmartObjectEventData& EventData, class UActor* Interactor);
};

// 0x8 (0x570 - 0x568)
// Class SmartObjectsModule.SmartObjectContainerRenderingComponent
class USmartObjectContainerRenderingComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_2FEF[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectContainerRenderingComponent");
		return Clss;
	}

};

// 0x8 (0x5C0 - 0x5B8)
// Class SmartObjectsModule.SmartObjectDebugRenderingComponent
class USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_2FF0[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectDebugRenderingComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectBehaviorDefinition
class USmartObjectBehaviorDefinition : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectBehaviorDefinition");
		return Clss;
	}

};

// 0xB0 (0xE0 - 0x30)
// Class SmartObjectsModule.SmartObjectDefinition
class USmartObjectDefinition : public UDataAsset
{
public:
	TArray<struct FSmartObjectSlotDefinition>    Slots;                                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions;                        // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     UserTagFilter;                                     // 0x50(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FWorldConditionQueryDefinition        Preconditions;                                     // 0x98(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ActivityTags;                                      // 0xB0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class USmartObjectWorldConditionSchema> WorldConditionSchemaClass;                         // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESmartObjectTagMergingPolicy      ActivityTagsMergingPolicy;                         // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESmartObjectTagFilteringPolicy    UserTagsFilteringPolicy;                           // 0xD9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2FF4[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectDefinition");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectSpacePartition
class USmartObjectSpacePartition : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectSpacePartition");
		return Clss;
	}

};

// 0xA8 (0xD0 - 0x28)
// Class SmartObjectsModule.SmartObjectHashGrid
class USmartObjectHashGrid : public USmartObjectSpacePartition
{
public:
	uint8                                        Pad_2FFB[0xA8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectHashGrid");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class SmartObjectsModule.SmartObjectOctree
class USmartObjectOctree : public USmartObjectSpacePartition
{
public:
	uint8                                        Pad_2FFC[0xC8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectOctree");
		return Clss;
	}

};

// 0xB8 (0x348 - 0x290)
// Class SmartObjectsModule.SmartObjectPersistentCollection
class USmartObjectPersistentCollection : public UActor
{
public:
	struct FSmartObjectContainer                 SmartObjectContainer;                              // 0x290(0xB0)(Edit, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2FFE[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectPersistentCollection");
		return Clss;
	}

};

// 0x8 (0x570 - 0x568)
// Class SmartObjectsModule.SmartObjectRenderingComponent
class USmartObjectRenderingComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_3000[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectRenderingComponent");
		return Clss;
	}

};

// 0x1C8 (0x1F8 - 0x30)
// Class SmartObjectsModule.SmartObjectSubsystem
class USmartObjectSubsystem : public UWorldSubsystem
{
public:
	struct FSoftClassPath                        SpacePartitionClassName;                           // 0x30(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USmartObjectSpacePartition> SpacePartitionClass;                               // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmartObjectSpacePartition*            SpacePartition;                                    // 0x50(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmartObjectSubsystemRenderingActor*   RenderingActor;                                    // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectContainer                 SmartObjectContainer;                              // 0x60(0xB0)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3080[0x20];                                    // Fixing Size After Last Property
	TMap<struct FSmartObjectHandle, struct FSmartObjectRuntime> RuntimeSmartObjects;                               // 0x130(0x50)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<struct FSmartObjectSlotHandle, struct FSmartObjectRuntimeSlot> RuntimeSlots;                                      // 0x180(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectComponent*>         RegisteredSOComponents;                            // 0x1D0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class USmartObjectComponent*>         PendingSmartObjectRegistration;                    // 0x1E0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_3082[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectSubsystem");
		return Clss;
	}

	class USmartObjectBehaviorDefinition* Use(struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	bool SetSlotEnabled(const struct FSmartObjectSlotHandle& SlotHandle, bool bEnabled);
	bool SetEnabled(const struct FSmartObjectHandle& Handle, bool bEnabled);
	bool RemoveTagFromSlot(const struct FSmartObjectSlotHandle& SlotHandle, struct FGameplayTag& Tag);
	void RemoveTagFromInstance(const struct FSmartObjectHandle& Handle, struct FGameplayTag& Tag);
	bool Release(struct FSmartObjectClaimHandle& ClaimHandle);
	class USmartObjectComponent* GetSmartObjectComponentByRequestResult(struct FSmartObjectRequestResult& Result);
	class USmartObjectComponent* GetSmartObjectComponent(struct FSmartObjectClaimHandle& ClaimHandle);
	bool GetSlotTransformFromRequestResult(struct FSmartObjectRequestResult& RequestResult, struct FTransform* OutSlotTransform);
	bool GetSlotTransform(struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform* OutSlotTransform);
	struct FGameplayTagContainer GetSlotTags(const struct FSmartObjectSlotHandle& SlotHandle);
	bool GetSlotLocation(struct FSmartObjectClaimHandle& ClaimHandle, struct FVector* OutSlotLocation);
	struct FGameplayTagContainer GetInstanceTags(const struct FSmartObjectHandle& Handle);
	class USmartObjectBehaviorDefinition* GetBehaviorDefinitionByRequestResult(struct FSmartObjectRequestResult& RequestResult, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	class USmartObjectBehaviorDefinition* GetBehaviorDefinition(struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	bool FindSmartObjects_BP(struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults, class UActor* UserActor);
	bool FindSmartObjects(struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults, class UActor* UserActor);
	struct FSmartObjectRequestResult FindSmartObject(struct FSmartObjectRequest& Request, class UActor* UserActor);
	struct FSmartObjectClaimHandle Claim(struct FSmartObjectRequestResult& RequestResult, class UActor* UserActor);
	void AddTagToSlot(const struct FSmartObjectSlotHandle& SlotHandle, struct FGameplayTag& Tag);
	void AddTagToInstance(const struct FSmartObjectHandle& Handle, struct FGameplayTag& Tag);
};

// 0x0 (0x5C0 - 0x5C0)
// Class SmartObjectsModule.SmartObjectSubsystemRenderingComponent
class USmartObjectSubsystemRenderingComponent : public USmartObjectDebugRenderingComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectSubsystemRenderingComponent");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class SmartObjectsModule.SmartObjectSubsystemRenderingActor
class USmartObjectSubsystemRenderingActor : public UActor
{
public:
	class USmartObjectSubsystemRenderingComponent* RenderingComponent;                                // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectSubsystemRenderingActor");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class SmartObjectsModule.SmartObjectTest
class USmartObjectTest : public UObject
{
public:
	class USmartObjectTestingActor*              SmartObjectTestingActor;                           // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectTest");
		return Clss;
	}

};

// 0x140 (0x170 - 0x30)
// Class SmartObjectsModule.SmartObjectSimpleQueryTest
class USmartObjectSimpleQueryTest : public USmartObjectTest
{
public:
	struct FSmartObjectRequest                   Request;                                           // 0x30(0x130)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSmartObjectRequestResult>     Results;                                           // 0x160(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectSimpleQueryTest");
		return Clss;
	}

};

// 0x0 (0x5C0 - 0x5C0)
// Class SmartObjectsModule.SmartObjectTestRenderingComponent
class USmartObjectTestRenderingComponent : public USmartObjectDebugRenderingComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectTestRenderingComponent");
		return Clss;
	}

};

// 0x28 (0x2B8 - 0x290)
// Class SmartObjectsModule.SmartObjectTestingActor
class USmartObjectTestingActor : public UActor
{
public:
	TArray<class USmartObjectTest*>              Tests;                                             // 0x290(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class USmartObjectTestRenderingComponent*    RenderingComponent;                                // 0x2A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmartObjectSubsystem*                 SmartObjectSubsystem;                              // 0x2A8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRunTestsEachFrame;                                // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3098[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectTestingActor");
		return Clss;
	}

	void RunTests();
	void ResetTests();
};

// 0xE8 (0x110 - 0x28)
// Class SmartObjectsModule.SmartObjectSlotValidationFilter
class USmartObjectSlotValidationFilter : public UObject
{
public:
	struct FSmartObjectSlotValidationParams      EntryParameters;                                   // 0x28(0x70)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseEntryParametersForExit;                        // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_309C[0x7];                                     // Fixing Size After Last Property
	struct FSmartObjectSlotValidationParams      ExitParameters;                                    // 0xA0(0x70)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectSlotValidationFilter");
		return Clss;
	}

};

// 0x8 (0xA8 - 0xA0)
// Class SmartObjectsModule.SmartObjectUserComponent
class USmartObjectUserComponent : public UActorComponent
{
public:
	TSubclassOf<class USmartObjectSlotValidationFilter> ValidationFilter;                                  // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectUserComponent");
		return Clss;
	}

};

// 0x28 (0x60 - 0x38)
// Class SmartObjectsModule.SmartObjectWorldConditionSchema
class USmartObjectWorldConditionSchema : public UWorldConditionSchema
{
public:
	uint8                                        Pad_30A4[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmartObjectWorldConditionSchema");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
