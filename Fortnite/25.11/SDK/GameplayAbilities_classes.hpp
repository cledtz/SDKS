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

// 0x0 (0x378 - 0x378)
// Class GameplayAbilities.AbilitySystemDebugHUD
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemDebugHUD");
		return Clss;
	}

};

// 0x920 (0x948 - 0x28)
// Class GameplayAbilities.GameplayEffect
class UGameplayEffect : public UObject
{
public:
	uint8                                        Pad_10A0[0x8];                                     // Fixing Size After Last Property..
	enum class EGameplayEffectDurationType       DurationPolicy;                                    // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A1[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayEffectModifierMagnitude      DurationMagnitude;                                 // 0x38(0x1D8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Period;                                            // 0x210(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bExecutePeriodicEffectOnApplication;               // 0x238(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy;                          // 0x239(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A2[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayModifierInfo>         Modifiers;                                         // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionDefinition> Executions;                                        // 0x250(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ChanceToApplyToTarget;                             // 0x260(0x28)(Deprecated, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;                           // 0x288(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FConditionalGameplayEffect>    ConditionalGameplayEffects;                        // 0x298(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OverflowEffects;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bDenyOverflowApplication;                          // 0x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearStackOnOverflow;                             // 0x2B9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A3[0x6];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class UGameplayEffect>>   PrematureExpirationEffectClasses;                  // 0x2C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   RoutineExpirationEffectClasses;                    // 0x2D0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bRequireModifierSuccessToTriggerCues;              // 0x2E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressStackingCues;                             // 0x2E1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A4[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayEffectCue>            GameplayCues;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UGameplayEffectUIData*                 UIData;                                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableGameplayEffectTags;                     // 0x300(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableOwnedTagsContainer;                     // 0x360(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableBlockedAbilityTagsContainer;            // 0x3C0(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              OngoingTagRequirements;                            // 0x420(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              ApplicationTagRequirements;                        // 0x460(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              RemovalTagRequirements;                            // 0x4A0(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                RemoveGameplayEffectsWithTags;                     // 0x4E0(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              GrantedApplicationImmunityTags;                    // 0x540(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayEffectQuery                  GrantedApplicationImmunityQuery;                   // 0x580(0x198)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A5[0x8];                                     // Fixing Size After Last Property..
	struct FGameplayEffectQuery                  RemoveGameplayEffectQuery;                         // 0x720(0x198)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A6[0x1];                                     // Fixing Size After Last Property..
	enum class EGameplayEffectStackingType       StackingType;                                      // 0x8B9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A7[0x2];                                     // Fixing Size After Last Property..
	int32                                        StackLimitCount;                                   // 0x8BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;                        // 0x8C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;                            // 0x8C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;                             // 0x8C2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A8[0x5];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayAbilitySpecDef>       GrantedAbilities;                                  // 0x8C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A9[0x60];                                    // Fixing Size After Last Property..
	TArray<class UGameplayEffectComponent*>      GEComponents;                                      // 0x938(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEffect");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectComponent
class UGameplayEffectComponent : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEffectComponent");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class GameplayAbilities.AdditionalEffectsGameplayEffectComponent
class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	bool                                         bOnApplicationCopyDataFromOriginalSpec;            // 0x28(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AA[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FConditionalGameplayEffect>    OnApplicationGameplayEffects;                      // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OnCompleteAlways;                                  // 0x40(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OnCompleteNormal;                                  // 0x50(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OnCompletePrematurely;                             // 0x60(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AdditionalEffectsGameplayEffectComponent");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class GameplayAbilities.AssetTagsGameplayEffectComponent
class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FInheritedTagContainer                InheritableAssetTags;                              // 0x28(0x60)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AssetTagsGameplayEffectComponent");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FInheritedTagContainer                InheritableBlockedAbilityTagsContainer;            // 0x28(0x60)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlockAbilityTagsGameplayEffectComponent");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class GameplayAbilities.ChanceToApplyGameplayEffectComponent
class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FScalableFloat                        ChanceToApplyToTarget;                             // 0x28(0x28)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChanceToApplyGameplayEffectComponent");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.CustomCanApplyGameplayEffectComponent
class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<TSubclassOf<class UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;                           // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CustomCanApplyGameplayEffectComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData
class UGameplayEffectUIData : public UGameplayEffectComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEffectUIData");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData_TextOnly
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEffectUIData_TextOnly");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.ImmunityGameplayEffectComponent
class UImmunityGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<struct FGameplayEffectQuery>          ImmunityQueries;                                   // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImmunityGameplayEffectComponent");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.RemoveOtherGameplayEffectComponent
class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<struct FGameplayEffectQuery>          RemoveGameplayEffectQueries;                       // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RemoveOtherGameplayEffectComponent");
		return Clss;
	}

};

// 0xC0 (0xE8 - 0x28)
// Class GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FGameplayTagRequirements              ApplicationTagRequirements;                        // 0x28(0x40)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              OngoingTagRequirements;                            // 0x68(0x40)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              RemovalTagRequirements;                            // 0xA8(0x40)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetTagRequirementsGameplayEffectComponent");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class GameplayAbilities.TargetTagsGameplayEffectComponent
class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FInheritedTagContainer                InheritableGrantedTagsContainer;                   // 0x28(0x60)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TargetTagsGameplayEffectComponent");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class GameplayAbilities.AbilityAsync
class UAbilityAsync : public UCancellableAsyncAction
{
public:
	uint8                                        Pad_10AB[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityAsync");
		return Clss;
	}

	void EndAction();
};

// 0x58 (0x90 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitAttributeChanged
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            Changed;                                           // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AD[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityAsync_WaitAttributeChanged");
		return Clss;
	}

	class UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(class AActor* TargetActor, const struct FGameplayAttribute& Attribute, bool OnlyTriggerOnce);
	void AsyncWaitAttributeChangedDelegate__DelegateSignature(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue);
};

// 0xC0 (0xF8 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AF[0xB0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityAsync_WaitGameplayEffectApplied");
		return Clss;
	}

	class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect);
	void OnAppliedDelegate__DelegateSignature(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
};

// 0x20 (0x58 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B1[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityAsync_WaitGameplayEvent");
		return Clss;
	}

	class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, const struct FGameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
	void EventReceivedDelegate__DelegateSignature(const struct FGameplayEventData& Payload);
};

// 0x18 (0x50 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{
public:
	uint8                                        Pad_10B2[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityAsync_WaitGameplayTag");
		return Clss;
	}

};

// 0x10 (0x60 - 0x50)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Added;                                             // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityAsync_WaitGameplayTagAdded");
		return Clss;
	}

	class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);
};

// 0x10 (0x60 - 0x50)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Removed;                                           // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityAsync_WaitGameplayTagRemoved");
		return Clss;
	}

	class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);
};

// 0xD0 (0x108 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{
public:
	uint8                                        Pad_10B6[0xC0];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            Triggered;                                         // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityAsync_WaitGameplayTagQuery");
		return Clss;
	}

	class UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(class AActor* TargetActor, const struct FGameplayTagQuery& TagQuery, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce);
};

// 0x390 (0x3B8 - 0x28)
// Class GameplayAbilities.GameplayAbility
class UGameplayAbility : public UObject
{
public:
	uint8                                        Pad_10C9[0x80];                                    // Fixing Size After Last Property..
	struct FGameplayTagContainer                 AbilityTags;                                       // 0xA8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bReplicateInputDirectly;                           // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoteInstanceEnded;                               // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CA[0x4];                                     // Fixing Size After Last Property..
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy;                                 // 0xCE(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityInstancingPolicy  InstancingPolicy;                                  // 0xCF(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bServerRespectsRemoteAbilityCancellation;          // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRetriggerInstancedAbility;                        // 0xD1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10CB[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityActivationInfo        CurrentActivationInfo;                             // 0xD8(0x20)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayEventData                    CurrentEventData;                                  // 0xF8(0xB0)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy;                                // 0x1A8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy;                                 // 0x1A9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10CC[0x6];                                     // Fixing Size After Last Property..
	TSubclassOf<class UGameplayEffect>           CostGameplayEffectClass;                           // 0x1B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAbilityTriggerData>           AbilityTriggers;                                   // 0x1B8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           CooldownGameplayEffectClass;                       // 0x1C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 CancelAbilitiesWithTag;                            // 0x1D0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BlockAbilitiesWithTag;                             // 0x1F0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActivationOwnedTags;                               // 0x210(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActivationRequiredTags;                            // 0x230(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActivationBlockedTags;                             // 0x250(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 SourceRequiredTags;                                // 0x270(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 SourceBlockedTags;                                 // 0x290(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetRequiredTags;                                // 0x2B0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetBlockedTags;                                 // 0x2D0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_10CD[0x20];                                    // Fixing Size After Last Property..
	TArray<class UGameplayTask*>                 ActiveTasks;                                       // 0x310(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_10CE[0x10];                                    // Fixing Size After Last Property..
	class UAnimMontage*                          CurrentMontage;                                    // 0x330(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10CF[0x60];                                    // Fixing Size After Last Property..
	bool                                         bIsActive;                                         // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAbilityEnding;                                  // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsCancelable;                                     // 0x39A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBlockingOtherAbilities;                         // 0x39B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10D0[0x14];                                    // Fixing Size After Last Property..
	bool                                         bMarkPendingKillOnAbilityEnd;                      // 0x3B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10D1[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbility");
		return Clss;
	}

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(class FName FromSectionName, class FName ToSectionName);
	void MontageJumpToSection(class FName SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(class FName SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility(bool bWasCancelled);
	bool K2_HasAuthority();
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbilityLocally();
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	void K2_CancelAbility();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	bool IsLocallyControlled();
	void InvalidateClientPredictionKey();
	class UObject* GetSourceObject_BP(const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayAbilityActorInfo& ActorInfo);
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCooldownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();
	int32 GetAbilityLevel_BP(const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayAbilityActorInfo& ActorInfo);
	int32 GetAbilityLevel();
	void EndTaskByInstanceName(class FName InstanceName);
	void EndAbilityState(class FName OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(class FName InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(class FName InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int32 StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int32 StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
};

// 0x10 (0x40 - 0x30)
// Class GameplayAbilities.GameplayAbilitySet
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>      Abilities;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilitySet");
		return Clss;
	}

};

// 0x148 (0x3D0 - 0x288)
// Class GameplayAbilities.GameplayAbilityTargetActor
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                         ShouldProduceTargetDataOnServer;                   // 0x288(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D2[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetingLocationInfo StartLocation;                                     // 0x290(0xA0)(BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D3[0x30];                                    // Fixing Size After Last Property..
	class APlayerController*                     PrimaryPC;                                         // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      OwningAbility;                                     // 0x368(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyOnConfirmation;                            // 0x370(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D4[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                SourceActor;                                       // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldReticleParameters               ReticleParams;                                     // 0x380(0x18)(BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameplayAbilityWorldReticle> ReticleClass;                                      // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       Filter;                                            // 0x3A0(0x10)(BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bDebug;                                            // 0x3B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D5[0x17];                                    // Fixing Size After Last Property..
	class UAbilitySystemComponent*               GenericDelegateBoundASC;                           // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilityTargetActor");
		return Clss;
	}

	void ConfirmTargeting();
	void CancelTargeting();
};

// 0x18 (0x3E8 - 0x3D0)
// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	float                                        MaxRange;                                          // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCollisionProfileName                 TraceProfile;                                      // 0x3D4(0x4)(Edit, BlueprintVisible, Config, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bTraceAffectsAimPitch;                             // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D6[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilityTargetActor_Trace");
		return Clss;
	}

};

// 0x20 (0x408 - 0x3E8)
// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	float                                        CollisionRadius;                                   // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionHeight;                                   // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D7[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilityTargetActor_GroundTrace");
		return Clss;
	}

};

// 0x18 (0x420 - 0x408)
// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	TSubclassOf<class UObject>                   PlacedActorClass;                                  // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    PlacedActorMaterial;                               // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D8[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilityTargetActor_ActorPlacement");
		return Clss;
	}

};

// 0x10 (0x3E0 - 0x3D0)
// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	float                                        Radius;                                            // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D9[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilityTargetActor_Radius");
		return Clss;
	}

};

// 0x8 (0x3F0 - 0x3E8)
// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	uint8                                        Pad_10DA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilityTargetActor_SingleLineTrace");
		return Clss;
	}

};

// 0x30 (0x2B8 - 0x288)
// Class GameplayAbilities.GameplayAbilityWorldReticle
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters               Parameters;                                        // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bFaceOwnerFlat;                                    // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToTargetedActor;                              // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargetValid;                                    // 0x2A2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTargetAnActor;                                  // 0x2A3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10DC[0x4];                                     // Fixing Size After Last Property..
	class APlayerController*                     PrimaryPC;                                         // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TargetingActor;                                    // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilityWorldReticle");
		return Clss;
	}

	void SetReticleMaterialParamVector(class FName ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(class FName ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};

// 0x18 (0x2D0 - 0x2B8)
// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                     CollisionComponent;                                // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActorComponent*>               VisualizationComponents;                           // 0x2C0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilityWorldReticle_ActorVisualization");
		return Clss;
	}

};

// 0x0 (0x3B8 - 0x3B8)
// Class GameplayAbilities.GameplayAbility_CharacterJump
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbility_CharacterJump");
		return Clss;
	}

};

// 0x30 (0x3E8 - 0x3B8)
// Class GameplayAbilities.GameplayAbility_Montage
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x3B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x3C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x3C4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectClassesWhileAnimating;               // 0x3C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGameplayEffect*>               GameplayEffectsWhileAnimating;                     // 0x3D8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbility_Montage");
		return Clss;
	}

};

// 0x18 (0x78 - 0x60)
// Class GameplayAbilities.AbilityTask
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                      Ability;                                           // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;                            // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DD[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask");
		return Clss;
	}

};

// 0x40 (0xB8 - 0x78)
// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	class FName                                  ForceName;                                         // 0x78(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionFinishVelocityMode     FinishVelocityMode;                                // 0x7C(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10DE[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               FinishSetVelocity;                                 // 0x80(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FinishClampVelocity;                               // 0x98(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10DF[0x4];                                     // Fixing Size After Last Property..
	class UCharacterMovementComponent*           MovementComponent;                                 // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E0[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotion_Base");
		return Clss;
	}

};

// 0x48 (0x100 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               WorldDirection;                                    // 0xC8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0xE0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xE4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAdditive;                                       // 0xE8(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E5[0x7];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           StrengthOverTime;                                  // 0xF0(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableGravity;                                    // 0xF8(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E6[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionConstantForce");
		return Clss;
	}

	class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity);
};

// 0x68 (0x120 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLanded;                                          // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xD8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        Distance;                                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Height;                                            // 0xF4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xF8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimumLandedTriggerTime;                          // 0xFC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFinishOnLanded;                                   // 0x100(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10EA[0x7];                                     // Fixing Size After Last Property..
	class UCurveVector*                          PathOffsetCurve;                                   // 0x108(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x110(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10EB[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionJumpForce");
		return Clss;
	}

	void OnLandedCallback(struct FHitResult& Hit);
	void Finish();
	class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};

// 0xA0 (0x158 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F6[0x8];                                     // Fixing Size After Last Property..
	struct FVector                               StartLocation;                                     // 0xD0(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xE8(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TargetActor;                                       // 0x100(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocationOffset;                              // 0x108(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                                   // 0x120(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10F7[0x3];                                     // Fixing Size After Last Property..
	float                                        Duration;                                          // 0x124(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableDestinationReachedInterrupt;               // 0x128(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0x129(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0x12A(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0x12B(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10F8[0x4];                                     // Fixing Size After Last Property..
	class UCurveVector*                          PathOffsetCurve;                                   // 0x130(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x138(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedHorizontalCurve;                    // 0x140(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedVerticalCurve;                      // 0x148(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10F9[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionMoveToActorForce");
		return Clss;
	}

	void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
	void OnRep_TargetLocation();
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};

// 0x68 (0x120 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnTimedOut;                                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnTimedOutAndDestinationReached;                   // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FVector                               StartLocation;                                     // 0xD8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xF0(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0x108(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0x10C(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0x10D(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0x10E(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10FE[0x1];                                     // Fixing Size After Last Property..
	class UCurveVector*                          PathOffsetCurve;                                   // 0x110(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10FF[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionMoveToForce");
		return Clss;
	}

	class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x70 (0x128 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                LocationActor;                                     // 0xE0(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0xE8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xEC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPush;                                           // 0xF4(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAdditive;                                       // 0xF5(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNoZForce;                                         // 0xF6(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1105[0x1];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           StrengthDistanceFalloff;                           // 0xF8(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           StrengthOverTime;                                  // 0x100(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFixedWorldDirection;                           // 0x108(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1106[0x7];                                     // Fixing Size After Last Property..
	struct FRotator                              FixedWorldDirection;                               // 0x110(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotionRadialForce");
		return Clss;
	}

	class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x68 (0xE0 - 0x78)
// Class GameplayAbilities.AbilityTask_MoveToLocation
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnTargetLocationReached;                           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1109[0x8];                                     // Fixing Size After Last Property..
	struct FVector                               StartLocation;                                     // 0x90(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xA8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DurationOfMovement;                                // 0xC0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_110A[0xC];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           LerpCurve;                                         // 0xD0(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          LerpCurveVector;                                   // 0xD8(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_MoveToLocation");
		return Clss;
	}

	class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};

// 0x18 (0x90 - 0x78)
// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnSync;                                            // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_110C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_NetworkSyncPoint");
		return Clss;
	}

	class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType);
	void OnSignalCallback();
};

// 0x88 (0x100 - 0x78)
// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelled;                                       // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1112[0x28];                                    // Fixing Size After Last Property..
	class UAnimMontage*                          MontageToPlay;                                     // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Rate;                                              // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StartSection;                                      // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimRootMotionTranslationScale;                    // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartTimeSeconds;                                  // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStopWhenAbilityEnds;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1113[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_PlayMontageAndWait");
		return Clss;
	}

	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds);
};

// 0x38 (0xB0 - 0x78)
// Class GameplayAbilities.AbilityTask_Repeat
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnPerformAction;                                   // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1114[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_Repeat");
		return Clss;
	}

	class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount);
};

// 0x48 (0xC0 - 0x78)
// Class GameplayAbilities.AbilityTask_SpawnActor
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1116[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_SpawnActor");
		return Clss;
	}

	class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class, class AActor** SpawnedActor);
};

// 0x38 (0xB0 - 0x78)
// Class GameplayAbilities.AbilityTask_StartAbilityState
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnStateEnded;                                      // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateInterrupted;                                // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1118[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_StartAbilityState");
		return Clss;
	}

	class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, class FName StateName, bool bEndCurrentState);
};

// 0x28 (0xA0 - 0x78)
// Class GameplayAbilities.AbilityTask_VisualizeTargeting
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            TimeElapsed;                                       // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_111A[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_VisualizeTargeting");
		return Clss;
	}

	class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, class FName TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class FName TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// 0xB0 (0x128 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnActivate;                                        // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_111E[0xA0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitAbilityActivate");
		return Clss;
	}

	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};

// 0x70 (0xE8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCommit;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1121[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitAbilityCommit");
		return Clss;
	}

	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce);
	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};

// 0x70 (0xE8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitAttributeChange
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1125[0x58];                                    // Fixing Size After Last Property..
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitAttributeChange");
		return Clss;
	}

	class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);
	class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);
};

// 0xC0 (0x138 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1128[0xA8];                                    // Fixing Size After Last Property..
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitAttributeChangeRatioThreshold");
		return Clss;
	}

	class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// 0x70 (0xE8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_112B[0x58];                                    // Fixing Size After Last Property..
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitAttributeChangeThreshold");
		return Clss;
	}

	class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// 0x18 (0x90 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitCancel
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_112C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitCancel");
		return Clss;
	}

	class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};

// 0x20 (0x98 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitConfirm
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnConfirm;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_112D[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitConfirm");
		return Clss;
	}

	class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};

// 0x28 (0xA0 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnConfirm;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_112E[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitConfirmCancel");
		return Clss;
	}

	class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};

// 0x18 (0x90 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitDelay
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1130[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitDelay");
		return Clss;
	}

	class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};

// 0x138 (0x1B0 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	uint8                                        Pad_1131[0x128];                                   // Fixing Size After Last Property..
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x1A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1132[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectApplied");
		return Clss;
	}

	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};

// 0x20 (0x1D0 - 0x1B0)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1137[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectApplied_Self");
		return Clss;
	}

	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

// 0x20 (0x1D0 - 0x1B0)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_113C[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectApplied_Target");
		return Clss;
	}

	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

// 0xA8 (0x120 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            bLocked;                                           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_113E[0x88];                                    // Fixing Size After Last Property..
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x110(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_113F[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectBlockedImmunity");
		return Clss;
	}

	class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x40 (0xB8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnRemoved;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InvalidHandle;                                     // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1140[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectRemoved");
		return Clss;
	}

	class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};

// 0x38 (0xB0 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InvalidHandle;                                     // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1141[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEffectStackChange");
		return Clss;
	}

	class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32 NewCount, int32 OldCount);
};

// 0x30 (0xA8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1144[0x8];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1145[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayEvent");
		return Clss;
	}

	class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
};

// 0x20 (0x98 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayTag
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	uint8                                        Pad_1146[0x8];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1147[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayTag");
		return Clss;
	}

	void GameplayTagCallback(const struct FGameplayTag& Tag, int32 NewCount);
};

// 0x10 (0xA8 - 0x98)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Added;                                             // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayTagAdded");
		return Clss;
	}

	class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x10 (0xA8 - 0x98)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Removed;                                           // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayTagRemoved");
		return Clss;
	}

	class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0xE0 (0x158 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagQuery
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{
public:
	uint8                                        Pad_114D[0xC0];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            Triggered;                                         // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_114E[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitGameplayTagQuery");
		return Clss;
	}

	class UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& TagQuery, class AActor* InOptionalExternalTarget, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce);
	void UpdateTargetTags(const struct FGameplayTag& Tag, int32 NewCount);
};

// 0x20 (0x98 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitInputPress
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnPress;                                           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1150[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitInputPress");
		return Clss;
	}

	class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};

// 0x20 (0x98 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitInputRelease
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnRelease;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1152[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitInputRelease");
		return Clss;
	}

	class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};

// 0x20 (0x98 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1155[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitMovementModeChange");
		return Clss;
	}

	void OnMovementModeChange(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, enum class EMovementMode NewMode);
};

// 0x10 (0x88 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitOverlap
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnOverlap;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitOverlap");
		return Clss;
	}

	class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
};

// 0x40 (0xB8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitTargetData
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            ValidData;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Cancelled;                                         // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameplayAbilityTargetActor> TargetClass;                                       // 0x98(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGameplayAbilityTargetActor*           TargetActor;                                       // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_115A[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitTargetData");
		return Clss;
	}

	class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// 0x38 (0xB0 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitVelocityChange
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnVelocityChage;                                   // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMovementComponent*                    CachedMovementComponent;                           // 0x88(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_115C[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_WaitVelocityChange");
		return Clss;
	}

	class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemBlueprintLibrary
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemBlueprintLibrary");
		return Clss;
	}

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FGameplayEffectSpecHandle SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	struct FGameplayEffectSpecHandle SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32 StackCount);
	struct FGameplayEffectSpecHandle SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	void SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	bool RemoveLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate);
	bool NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	bool NotEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B);
	bool NotEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B);
	struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayTag& MatchedTagName, const struct FGameplayTag& OriginalTag, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FVector& Location, const struct FVector& Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy);
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	bool IsValid(const struct FGameplayAttribute& Attribute);
	bool IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	bool IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	bool HasHitResult(const struct FGameplayCueParameters& Parameters);
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FVector GetOrigin(const struct FGameplayCueParameters& Parameters);
	float GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
	struct FTransform GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	class AActor* GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
	struct FHitResult GetHitResult(const struct FGameplayCueParameters& Parameters);
	class UGameplayEffectUIData* GetGameplayEffectUIData(TSubclassOf<class UGameplayEffect> EffectClass, TSubclassOf<class UGameplayEffectUIData> DataType);
	class UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle);
	bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	bool GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	class UGameplayAbility* GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool* bIsInstance);
	float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	struct FGameplayEffectContextHandle GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
	class FString GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& Attribute);
	int32 GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);
	TArray<class AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<class AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	int32 GetActorCount(const struct FGameplayCueParameters& Parameters);
	class AActor* GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32 Index);
	float GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class FString GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
	void ForwardGameplayCueToTarget(FInterfaceProperty_ TargetCueInterface, enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess);
	float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool* bSuccess);
	bool EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	bool EqualEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B);
	bool EqualEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B);
	void EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
	bool EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
	bool EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	bool EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class UObject* EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FVector EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FHitResult EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	void EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index, class AActor* Actor);
	bool DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs);
	struct FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);
	void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTag* MatchedTagName, struct FGameplayTag* OriginalTag, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTagContainer* AggregatedTargetTags, struct FVector* Location, struct FVector* Normal, class AActor** Instigator, class AActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int32* GameplayEffectLevel, int32* AbilityLevel, class USceneComponent** TargetAttachComponent, bool* bReplicateLocationWhenUsingMinimalRepProxy);
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude);
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, class FName DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	bool AddLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect);
	struct FGameplayEffectSpecHandle AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayEffectSpecHandle AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class AActor*>& ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
};

// 0x1110 (0x1228 - 0x118)
// Class GameplayAbilities.AbilitySystemComponent
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	uint8                                        Pad_11C2[0x10];                                    // Fixing Size After Last Property..
	TArray<struct FAttributeDefaults>            DefaultStartingData;                               // 0x128(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  AffectedAnimInstanceTag;                           // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C3[0x1AC];                                   // Fixing Size After Last Property..
	float                                        OutgoingDuration;                                  // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingDuration;                                  // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C4[0x20];                                    // Fixing Size After Last Property..
	TArray<class FString>                        ClientDebugStrings;                                // 0x310(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	TArray<class FString>                        ServerDebugStrings;                                // 0x320(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C5[0x60];                                    // Fixing Size After Last Property..
	bool                                         UserAbilityActivationInhibited;                    // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReplicationProxyEnabled;                           // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressGrantAbility;                             // 0x392(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressGameplayCues;                             // 0x393(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C6[0x4];                                     // Fixing Size After Last Property..
	TArray<class AGameplayAbilityTargetActor*>   SpawnedTargetActors;                               // 0x398(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C7[0x28];                                    // Fixing Size After Last Property..
	class AActor*                                OwnerActor;                                        // 0x3D0(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                AvatarActor;                                       // 0x3D8(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11C8[0x10];                                    // Fixing Size After Last Property..
	struct FGameplayAbilitySpecContainer         ActivatableAbilities;                              // 0x3F0(0x120)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C9[0x30];                                    // Fixing Size After Last Property..
	TArray<class UGameplayAbility*>              AllReplicatedInstancedAbilities;                   // 0x540(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CA[0x210];                                   // Fixing Size After Last Property..
	struct FGameplayAbilityRepAnimMontage        RepAnimMontageInfo;                                // 0x760(0x38)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bCachedIsNetSimulated;                             // 0x798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingMontageRep;                                // 0x799(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CB[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityLocalAnimMontage      LocalAnimMontageInfo;                              // 0x7A0(0x30)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CC[0xA0];                                    // Fixing Size After Last Property..
	struct FActiveGameplayEffectsContainer       ActiveGameplayEffects;                             // 0x870(0x2F8)(Net, Protected, NativeAccessSpecifierProtected)
	struct FActiveGameplayCueContainer           ActiveGameplayCues;                                // 0xB68(0x128)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FActiveGameplayCueContainer           MinimalReplicationGameplayCues;                    // 0xC90(0x128)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CD[0x128];                                   // Fixing Size After Last Property..
	TArray<uint8>                                BlockedAbilityBindings;                            // 0xEE0(0x10)(Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11CE[0x128];                                   // Fixing Size After Last Property..
	struct FMinimalReplicationTagCountMap        MinimalReplicationTags;                            // 0x1018(0x60)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UAttributeSet*>                 SpawnedAttributes;                                 // 0x1078(0x10)(ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11CF[0x10];                                    // Fixing Size After Last Property..
	struct FMinimalReplicationTagCountMap        ReplicatedLooseTags;                               // 0x1098(0x60)(Net, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11D0[0x8];                                     // Fixing Size After Last Property..
	struct FReplicatedPredictionKeyMap           ReplicatedPredictionKeyMap;                        // 0x1100(0x118)(Net, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D1[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemComponent");
		return Clss;
	}

	void UpdateActiveGameplayEffectSetByCallerMagnitudes(const struct FActiveGameplayEffectHandle& ActiveHandle, TMap<struct FGameplayTag, float>& NewSetByCallerValues);
	void UpdateActiveGameplayEffectSetByCallerMagnitude(const struct FActiveGameplayEffectHandle& ActiveHandle, const struct FGameplayTag& SetByCallerTag, float NewValue);
	bool TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int32 NewLevel);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int32 NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerPrintDebug_RequestWithStrings(TArray<class FString>& Strings);
	void ServerPrintDebug_Request();
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, class FName SectionName, class FName NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, class FName SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ServerAbilityRPCBatch(const struct FServerAbilityRPCBatch& BatchInfo);
	void RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove);
	int32 RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
	void ReleaseInputID(int32 InputID);
	void PressInputID(int32 InputID);
	void OnSpawnedAttributesEndPlayed(class AActor* InActor, enum class EEndPlayReason EndPlayReason);
	void OnRep_SpawnedAttributes(TArray<class UAttributeSet*>& PreviousSpawnedAttributes);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void OnOwnerActorDestroyed(class AActor* InActor);
	void OnAvatarActorDestroyed(class AActor* InActor);
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FGameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(TSubclassOf<class UAttributeSet> Attributes, class UDataTable* DataTable);
	struct FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID);
	struct FGameplayAbilitySpecHandle K2_GiveAbility(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	void InputConfirm();
	void InputCancel();
	bool GetUserAbilityActivationInhibited();
	int32 GetGameplayTagCount(const struct FGameplayTag& GameplayTag);
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int32 GetGameplayEffectCount_IfLoaded(TSoftClassPtr<class UGameplayEffect> SoftSourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	int32 GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	float GetGameplayAttributeValue(const struct FGameplayAttribute& Attribute, bool* bFound);
	class UAttributeSet* GetAttributeSet(TSubclassOf<class UAttributeSet> AttributeSetClass);
	void GetAllAttributes(TArray<struct FGameplayAttribute>* OutAttributes);
	void GetAllAbilities(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles);
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(const struct FGameplayTagContainer& Tags);
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery& Query);
	void FindAllAbilitiesWithTags(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles, const struct FGameplayTagContainer& Tags, bool bExactMatch);
	void FindAllAbilitiesWithInputID(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles, int32 InputID);
	void FindAllAbilitiesMatchingQuery(TArray<struct FGameplayAbilitySpecHandle>* OutAbilityHandles, const struct FGameplayTagQuery& Query);
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<class FString>& Strings, int32 GameFlags);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16 PredictionKey);
	void ClearAllAbilitiesWithInputID(int32 InputID);
	void ClearAllAbilities();
	void ClearAbility(struct FGameplayAbilitySpecHandle& Handle);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int32 InputID);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension
class UAbilitySystemDebugHUDExtension : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemDebugHUDExtension");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension
{
public:
	uint8                                        Pad_11D2[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemDebugHUDExtension_Tags");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension
{
public:
	uint8                                        Pad_11D3[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemDebugHUDExtension_Attributes");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension
{
public:
	uint8                                        Pad_11D4[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemDebugHUDExtension_BlockedAbilityTags");
		return Clss;
	}

};

// 0x1F0 (0x218 - 0x28)
// Class GameplayAbilities.AbilitySystemGlobals
class UAbilitySystemGlobals : public UObject
{
public:
	struct FSoftClassPath                        AbilitySystemGlobalsClassName;                     // 0x28(0x18)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D5[0x28];                                    // Fixing Size After Last Property..
	bool                                         bUseDebugTargetFromHud;                            // 0x68(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D6[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          ActivateFailIsDeadTag;                             // 0x6C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailIsDeadName;                            // 0x70(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailCooldownTag;                           // 0x74(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailCooldownName;                          // 0x78(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailCostTag;                               // 0x7C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailCostName;                              // 0x80(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailTagsBlockedTag;                        // 0x84(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailTagsBlockedName;                       // 0x88(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailTagsMissingTag;                        // 0x8C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailTagsMissingName;                       // 0x90(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailNetworkingTag;                         // 0x94(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailNetworkingName;                        // 0x98(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimalReplicationTagCountBits;                    // 0x9C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNetSerializeScriptStructCache        TargetDataStructCache;                             // 0xA0(0x10)(NativeAccessSpecifierPublic)
	struct FNetSerializeScriptStructCache        EffectContextStructCache;                          // 0xB0(0x10)(NativeAccessSpecifierPublic)
	bool                                         bAllowGameplayModEvaluationChannels;               // 0xC0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayModEvaluationChannel     DefaultGameplayModEvaluationChannel;               // 0xC1(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D7[0x2];                                     // Fixing Size After Last Property..
	class FName                                  GameplayModEvaluationChannelAliases[0xA];          // 0xC4(0x28)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D8[0x4];                                     // Fixing Size After Last Property..
	struct FSoftObjectPath                       GlobalCurveTableName;                              // 0xF0(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           GlobalCurveTable;                                  // 0x108(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalAttributeMetaDataTableName;                  // 0x110(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            GlobalAttributeMetaDataTable;                      // 0x128(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalAttributeSetDefaultsTableName;               // 0x130(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSoftObjectPath>               GlobalAttributeSetDefaultsTableNames;              // 0x148(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<class UCurveTable*>                   GlobalAttributeDefaultsTables;                     // 0x158(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalGameplayCueManagerClass;                     // 0x168(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalGameplayCueManagerName;                      // 0x180(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        GameplayCueNotifyPaths;                            // 0x198(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GameplayTagResponseTableName;                      // 0x1A8(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTagReponseTable*              GameplayTagResponseTable;                          // 0x1C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PredictTargetGameplayEffects;                      // 0x1C8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ReplicateActivationOwnedTags;                      // 0x1C9(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D9[0x6];                                     // Fixing Size After Last Property..
	class UGameplayCueManager*                   GlobalGameplayCueManager;                          // 0x1D0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11DA[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemGlobals");
		return Clss;
	}

	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
	void ServerEndPlayerAbility(const class FString& AbilityNameMatch);
	void ServerCancelPlayerAbility(const class FString& AbilityNameMatch);
	void ServerActivatePlayerAbility(const class FString& AbilityNameMatch);
	void ListPlayerAbilities();
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemInterface
class UAbilitySystemInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
class UAbilitySystemReplicationProxyInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemReplicationProxyInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class GameplayAbilities.AttributeSet
class UAttributeSet : public UObject
{
public:
	uint8                                        Pad_11DB[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AttributeSet");
		return Clss;
	}

};

// 0x40 (0x70 - 0x30)
// Class GameplayAbilities.AbilitySystemTestAttributeSet
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                        MaxHealth;                                         // 0x30(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Health;                                            // 0x34(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mana;                                              // 0x38(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxMana;                                           // 0x3C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpellDamage;                                       // 0x44(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhysicalDamage;                                    // 0x48(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CritChance;                                        // 0x4C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CritMultiplier;                                    // 0x50(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorDamageReduction;                              // 0x54(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DodgeChance;                                       // 0x58(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeSteal;                                         // 0x5C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x60(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StackingAttribute1;                                // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StackingAttribute2;                                // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoStackAttribute;                                  // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemTestAttributeSet");
		return Clss;
	}

};

// 0x20 (0x358 - 0x338)
// Class GameplayAbilities.AbilitySystemTestPawn
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	uint8                                        Pad_11DC[0x18];                                    // Fixing Size After Last Property..
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitySystemTestPawn");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.AnimNotify_GameplayCue
class UAnimNotify_GameplayCue : public UAnimNotify
{
public:
	struct FGameplayCueTag                       GameplayCue;                                       // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11DD[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_GameplayCue");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class GameplayAbilities.AnimNotify_GameplayCueState
class UAnimNotify_GameplayCueState : public UAnimNotifyState
{
public:
	struct FGameplayCueTag                       GameplayCue;                                       // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11DE[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_GameplayCueState");
		return Clss;
	}

};

// 0x0 (0xA8 - 0xA8)
// Class GameplayAbilities.GameplayAbilityBlueprint
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayAbilityBlueprint");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueFunctionLibrary
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueFunctionLibrary");
		return Clss;
	}

	void RemoveGameplayCueOnActor(class AActor* Target, const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters);
	struct FGameplayCueParameters MakeGameplayCueParametersFromHitResult(struct FHitResult& HitResult);
	void ExecuteGameplayCueOnActor(class AActor* Target, const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters);
	void AddGameplayCueOnActor(class AActor* Target, const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueInterface
class UGameplayCueInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueInterface");
		return Clss;
	}

	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
};

// 0x2E0 (0x310 - 0x30)
// Class GameplayAbilities.GameplayCueManager
class UGameplayCueManager : public UDataAsset
{
public:
	uint8                                        Pad_11E3[0x18];                                    // Fixing Size After Last Property..
	struct FGameplayCueObjectLibrary             RuntimeGameplayCueObjectLibrary;                   // 0x48(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueObjectLibrary             EditorGameplayCueObjectLibrary;                    // 0x98(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11E4[0x1C8];                                   // Fixing Size After Last Property..
	TArray<TSubclassOf<class UObject>>           LoadedGameplayCueNotifyClasses;                    // 0x2B0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class AGameplayCueNotify_Actor>> GameplayCueClassesForPreallocation;                // 0x2C0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FGameplayCuePendingExecute>    PendingExecuteCues;                                // 0x2D0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        GameplayCueSendContextCount;                       // 0x2E0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11E5[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FPreallocationInfo>            PreallocationInfoList_Internal;                    // 0x2E8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11E6[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueManager");
		return Clss;
	}

};

// 0x58 (0x2E0 - 0x288)
// Class GameplayAbilities.GameplayCueNotify_Actor
class AGameplayCueNotify_Actor : public AActor
{
public:
	bool                                         bAutoDestroyOnRemove;                              // 0x288(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EC[0x3];                                     // Fixing Size After Last Property..
	float                                        AutoDestroyDelay;                                  // 0x28C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfTimelineIsStillRunning;                      // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfLatentActionIsStillRunning;                  // 0x291(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11ED[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          GameplayCueTag;                                    // 0x294(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GameplayCueName;                                   // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAttachToOwner;                                // 0x29C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverride;                                        // 0x29D(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerInstigator;                      // 0x29E(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerSourceObject;                    // 0x29F(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleOnActiveEvents;                      // 0x2A0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleWhileActiveEvents;                   // 0x2A1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EE[0x2];                                     // Fixing Size After Last Property..
	int32                                        NumPreallocatedInstances;                          // 0x2A4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EF[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueNotify_Actor");
		return Clss;
	}

	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void K2_EndGameplayCue();
};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.GameplayCueNotify_Static
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x28(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GameplayCueName;                                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverride;                                        // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F5[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueNotify_Static");
		return Clss;
	}

	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
};

// 0x310 (0x348 - 0x38)
// Class GameplayAbilities.GameplayCueNotify_Burst
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{
public:
	struct FGameplayCueNotify_SpawnCondition     DefaultSpawnCondition;                             // 0x38(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_PlacementInfo      DefaultPlacementInfo;                              // 0x70(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       BurstEffects;                                      // 0xB0(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueNotify_Burst");
		return Clss;
	}

	void OnBurst(class AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
};

// 0x368 (0x648 - 0x2E0)
// Class GameplayAbilities.GameplayCueNotify_BurstLatent
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{
public:
	struct FGameplayCueNotify_SpawnCondition     DefaultSpawnCondition;                             // 0x2E0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_PlacementInfo      DefaultPlacementInfo;                              // 0x318(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       BurstEffects;                                      // 0x358(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        BurstSpawnResults;                                 // 0x5F0(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueNotify_BurstLatent");
		return Clss;
	}

	void OnBurst(class AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
};

// 0x10 (0x48 - 0x38)
// Class GameplayAbilities.GameplayCueNotify_HitImpact
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                            Sound;                                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleSystem;                                    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueNotify_HitImpact");
		return Clss;
	}

};

// 0xB98 (0xE78 - 0x2E0)
// Class GameplayAbilities.GameplayCueNotify_Looping
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{
public:
	struct FGameplayCueNotify_SpawnCondition     DefaultSpawnCondition;                             // 0x2E0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_PlacementInfo      DefaultPlacementInfo;                              // 0x318(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       ApplicationEffects;                                // 0x358(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        ApplicationSpawnResults;                           // 0x5F0(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_LoopingEffects     LoopingEffects;                                    // 0x648(0x1F0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        LoopingSpawnResults;                               // 0x838(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       RecurringEffects;                                  // 0x890(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        RecurringSpawnResults;                             // 0xB28(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       RemovalEffects;                                    // 0xB80(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        RemovalSpawnResults;                               // 0xE18(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11F6[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueNotify_Looping");
		return Clss;
	}

	void OnRemoval(class AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnRecurring(class AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnLoopingStart(class AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnApplication(class AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
};

// 0x60 (0x90 - 0x30)
// Class GameplayAbilities.GameplayCueSet
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>        GameplayCueData;                                   // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F7[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueSet");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator
class UGameplayCueTranslator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueTranslator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator_Test
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayCueTranslator_Test");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.GameplayEffectCalculation
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEffectCalculation");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEffectCustomApplicationRequirement");
		return Clss;
	}

	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayEffectExecutionCalculation
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bRequiresPassedInTags;                             // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11F9[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayEffectExecutionCalculation");
		return Clss;
	}

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayModMagnitudeCalculation
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bAllowNonNetAuthorityDependencyRegistration;       // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11FC[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayModMagnitudeCalculation");
		return Clss;
	}

	float K2_GetCapturedAttributeMagnitude(struct FGameplayEffectSpec& EffectSpec, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags);
	struct FGameplayTagContainer GetTargetSpecTags(struct FGameplayEffectSpec& EffectSpec);
	struct FGameplayTagContainer GetTargetAggregatedTags(struct FGameplayEffectSpec& EffectSpec);
	struct FGameplayTagContainer GetTargetActorTags(struct FGameplayEffectSpec& EffectSpec);
	struct FGameplayTagContainer GetSourceSpecTags(struct FGameplayEffectSpec& EffectSpec);
	struct FGameplayTagContainer GetSourceAggregatedTags(struct FGameplayEffectSpec& EffectSpec);
	struct FGameplayTagContainer GetSourceActorTags(struct FGameplayEffectSpec& EffectSpec);
	float GetSetByCallerMagnitudeByTag(struct FGameplayEffectSpec& EffectSpec, struct FGameplayTag& Tag);
	float GetSetByCallerMagnitudeByName(struct FGameplayEffectSpec& EffectSpec, class FName& MagnitudeName);
	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec);
};

// 0x200 (0x230 - 0x30)
// Class GameplayAbilities.GameplayTagReponseTable
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry> Entries;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_11FE[0x1F0];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTagReponseTable");
		return Clss;
	}

	void TagResponseEvent(const struct FGameplayTag& Tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 Idx);
};

// 0xF8 (0x200 - 0x108)
// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{
public:
	struct FMovieSceneGameplayCueChannel         Channel;                                           // 0x108(0xF8)(AssetRegistrySearchable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneGameplayCueTriggerSection");
		return Clss;
	}

};

// 0x88 (0x190 - 0x108)
// Class GameplayAbilities.MovieSceneGameplayCueSection
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{
public:
	struct FMovieSceneGameplayCueKey             Cue;                                               // 0x108(0x88)(Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneGameplayCueSection");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class GameplayAbilities.MovieSceneGameplayCueTrack
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneGameplayCueTrack");
		return Clss;
	}

	void SetSequencerTrackHandler(FDelegateProperty_ InGameplayCueTrackHandler);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.TickableAttributeSetInterface
class UTickableAttributeSetInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TickableAttributeSetInterface");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
