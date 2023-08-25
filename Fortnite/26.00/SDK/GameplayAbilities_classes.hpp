#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// Class GameplayAbilities.AbilitySystemDebugHUD
class UAbilitySystemDebugHUD : public UHUD
{
public:

	static class UClass* StaticClass();
	static class UAbilitySystemDebugHUD* GetDefaultObj();

};

// 0xA40 (0xA68 - 0x28)
// Class GameplayAbilities.GameplayEffect
class UGameplayEffect : public UObject
{
public:
	uint8                                        Pad_12C[0x8];                                      // Fixing Size After Last Property 
	enum class EGameplayEffectDurationType       DurationPolicy;                                    // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D[0x7];                                      // Fixing Size After Last Property 
	struct FGameplayEffectModifierMagnitude      DurationMagnitude;                                 // 0x38(0x1D8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Period;                                            // 0x210(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bExecutePeriodicEffectOnApplication;               // 0x238(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy;                          // 0x239(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E[0x6];                                      // Fixing Size After Last Property 
	TArray<struct FGameplayModifierInfo>         Modifiers;                                         // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionDefinition> Executions;                                        // 0x250(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ChanceToApplyToTarget;                             // 0x260(0x28)(Deprecated, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;                           // 0x288(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FConditionalGameplayEffect>    ConditionalGameplayEffects;                        // 0x298(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OverflowEffects;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bDenyOverflowApplication;                          // 0x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearStackOnOverflow;                             // 0x2B9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131[0x6];                                      // Fixing Size After Last Property 
	TArray<TSubclassOf<class UGameplayEffect>>   PrematureExpirationEffectClasses;                  // 0x2C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   RoutineExpirationEffectClasses;                    // 0x2D0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bRequireModifierSuccessToTriggerCues;              // 0x2E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressStackingCues;                             // 0x2E1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132[0x6];                                      // Fixing Size After Last Property 
	TArray<struct FGameplayEffectCue>            GameplayCues;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UGameplayEffectUIData*                 UIData;                                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableGameplayEffectTags;                     // 0x300(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableOwnedTagsContainer;                     // 0x360(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableBlockedAbilityTagsContainer;            // 0x3C0(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              OngoingTagRequirements;                            // 0x420(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              ApplicationTagRequirements;                        // 0x4A8(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              RemovalTagRequirements;                            // 0x530(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                RemoveGameplayEffectsWithTags;                     // 0x5B8(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              GrantedApplicationImmunityTags;                    // 0x618(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayEffectQuery                  GrantedApplicationImmunityQuery;                   // 0x6A0(0x198)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_133[0x8];                                      // Fixing Size After Last Property 
	struct FGameplayEffectQuery                  RemoveGameplayEffectQuery;                         // 0x840(0x198)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_136[0x1];                                      // Fixing Size After Last Property 
	enum class EGameplayEffectStackingType       StackingType;                                      // 0x9D9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137[0x2];                                      // Fixing Size After Last Property 
	int32                                        StackLimitCount;                                   // 0x9DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;                        // 0x9E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;                            // 0x9E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;                             // 0x9E2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139[0x5];                                      // Fixing Size After Last Property 
	TArray<struct FGameplayAbilitySpecDef>       GrantedAbilities;                                  // 0x9E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A[0x60];                                     // Fixing Size After Last Property 
	TArray<class UGameplayEffectComponent*>      GEComponents;                                      // 0xA58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayEffect* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectComponent
class UGameplayEffectComponent : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.AbilitiesGameplayEffectComponent
class UAbilitiesGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<struct FGameplayAbilitySpecConfig>    GrantAbilityConfigs;                               // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilitiesGameplayEffectComponent* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class GameplayAbilities.AdditionalEffectsGameplayEffectComponent
class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	bool                                         bOnApplicationCopyDataFromOriginalSpec;            // 0x28(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D[0x7];                                      // Fixing Size After Last Property 
	TArray<struct FConditionalGameplayEffect>    OnApplicationGameplayEffects;                      // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OnCompleteAlways;                                  // 0x40(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OnCompleteNormal;                                  // 0x50(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OnCompletePrematurely;                             // 0x60(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAdditionalEffectsGameplayEffectComponent* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayAbilities.AssetTagsGameplayEffectComponent
class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FInheritedTagContainer                InheritableAssetTags;                              // 0x28(0x60)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAssetTagsGameplayEffectComponent* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FInheritedTagContainer                InheritableBlockedAbilityTagsContainer;            // 0x28(0x60)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBlockAbilityTagsGameplayEffectComponent* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class GameplayAbilities.ChanceToApplyGameplayEffectComponent
class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FScalableFloat                        ChanceToApplyToTarget;                             // 0x28(0x28)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UChanceToApplyGameplayEffectComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.CustomCanApplyGameplayEffectComponent
class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<TSubclassOf<class UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;                           // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCustomCanApplyGameplayEffectComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData
class UGameplayEffectUIData : public UGameplayEffectComponent
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectUIData* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData_TextOnly
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayEffectUIData_TextOnly* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.ImmunityGameplayEffectComponent
class UImmunityGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<struct FGameplayEffectQuery>          ImmunityQueries;                                   // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UImmunityGameplayEffectComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.RemoveOtherGameplayEffectComponent
class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	TArray<struct FGameplayEffectQuery>          RemoveGameplayEffectQueries;                       // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URemoveOtherGameplayEffectComponent* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FGameplayTagRequirements              ApplicationTagRequirements;                        // 0x28(0x88)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              OngoingTagRequirements;                            // 0xB0(0x88)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              RemovalTagRequirements;                            // 0x138(0x88)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTargetTagRequirementsGameplayEffectComponent* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayAbilities.TargetTagsGameplayEffectComponent
class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent
{
public:
	struct FInheritedTagContainer                InheritableGrantedTagsContainer;                   // 0x28(0x60)(Edit, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTargetTagsGameplayEffectComponent* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GameplayAbilities.AbilityAsync
class UAbilityAsync : public UCancellableAsyncAction
{
public:
	uint8                                        Pad_14B[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityAsync* GetDefaultObj();

	void EndAction();
};

// 0x58 (0x90 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitAttributeChanged
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            Changed;                                           // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_154[0x48];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitAttributeChanged* GetDefaultObj();

	class UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(class UActor* TargetActor, const struct FGameplayAttribute& Attribute, bool OnlyTriggerOnce);
	void AsyncWaitAttributeChangedDelegate__DelegateSignature(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue);
};

// 0x150 (0x188 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_163[0x140];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayEffectApplied* GetDefaultObj();

	class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class UActor* TargetActor, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect);
	void OnAppliedDelegate__DelegateSignature(class UActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
};

// 0x20 (0x58 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayEvent* GetDefaultObj();

	class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class UActor* TargetActor, const struct FGameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
	void EventReceivedDelegate__DelegateSignature(const struct FGameplayEventData& Payload);
};

// 0x18 (0x50 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{
public:
	uint8                                        Pad_17E[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTag* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Added;                                             // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTagAdded* GetDefaultObj();

	class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class UActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);
};

// 0x10 (0x60 - 0x50)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Removed;                                           // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTagRemoved* GetDefaultObj();

	class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class UActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);
};

// 0xD0 (0x108 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{
public:
	uint8                                        Pad_19E[0xC0];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            Triggered;                                         // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTagQuery* GetDefaultObj();

	class UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(class UActor* TargetActor, const struct FGameplayTagQuery& TagQuery, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce);
};

// 0x390 (0x3B8 - 0x28)
// Class GameplayAbilities.GameplayAbility
class UGameplayAbility : public UObject
{
public:
	uint8                                        Pad_267[0x80];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 AbilityTags;                                       // 0xA8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bReplicateInputDirectly;                           // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoteInstanceEnded;                               // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_268[0x4];                                      // Fixing Size After Last Property 
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy;                                 // 0xCE(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityInstancingPolicy  InstancingPolicy;                                  // 0xCF(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bServerRespectsRemoteAbilityCancellation;          // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRetriggerInstancedAbility;                        // 0xD1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_269[0x6];                                      // Fixing Size After Last Property 
	struct FGameplayAbilityActivationInfo        CurrentActivationInfo;                             // 0xD8(0x20)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayEventData                    CurrentEventData;                                  // 0xF8(0xB0)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy;                                // 0x1A8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy;                                 // 0x1A9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26B[0x6];                                      // Fixing Size After Last Property 
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
	uint8                                        Pad_26C[0x20];                                     // Fixing Size After Last Property 
	TArray<class UGameplayTask*>                 ActiveTasks;                                       // 0x310(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_26D[0x10];                                     // Fixing Size After Last Property 
	class UAnimMontage*                          CurrentMontage;                                    // 0x330(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26E[0x60];                                     // Fixing Size After Last Property 
	bool                                         bIsActive;                                         // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAbilityEnding;                                  // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsCancelable;                                     // 0x39A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBlockingOtherAbilities;                         // 0x39B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_270[0x14];                                     // Fixing Size After Last Property 
	bool                                         bMarkPendingKillOnAbilityEnd;                      // 0x3B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_271[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayAbility* GetDefaultObj();

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
	class UActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCooldownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class UActor* GetAvatarActorFromActorInfo();
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

	static class UClass* StaticClass();
	static class UGameplayAbilitySet* GetDefaultObj();

};

// 0x150 (0x3E0 - 0x290)
// Class GameplayAbilities.GameplayAbilityTargetActor
class UGameplayAbilityTargetActor : public UActor
{
public:
	bool                                         ShouldProduceTargetDataOnServer;                   // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283[0xF];                                      // Fixing Size After Last Property 
	struct FGameplayAbilityTargetingLocationInfo StartLocation;                                     // 0x2A0(0xA0)(BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_285[0x30];                                     // Fixing Size After Last Property 
	class UPlayerController*                     PrimaryPC;                                         // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      OwningAbility;                                     // 0x378(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyOnConfirmation;                            // 0x380(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287[0x7];                                      // Fixing Size After Last Property 
	class UActor*                                SourceActor;                                       // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldReticleParameters               ReticleParams;                                     // 0x390(0x18)(BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayAbilityWorldReticle> ReticleClass;                                      // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       Filter;                                            // 0x3B0(0x10)(BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bDebug;                                            // 0x3C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A[0x17];                                     // Fixing Size After Last Property 
	class UAbilitySystemComponent*               GenericDelegateBoundASC;                           // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayAbilityTargetActor* GetDefaultObj();

	void ConfirmTargeting();
	void CancelTargeting();
};

// 0x18 (0x3F8 - 0x3E0)
// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
class UGameplayAbilityTargetActor_Trace : public UGameplayAbilityTargetActor
{
public:
	float                                        MaxRange;                                          // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCollisionProfileName                 TraceProfile;                                      // 0x3E4(0x4)(Edit, BlueprintVisible, Config, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bTraceAffectsAimPitch;                             // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E[0xF];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayAbilityTargetActor_Trace* GetDefaultObj();

};

// 0x20 (0x418 - 0x3F8)
// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
class UGameplayAbilityTargetActor_GroundTrace : public UGameplayAbilityTargetActor_Trace
{
public:
	float                                        CollisionRadius;                                   // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionHeight;                                   // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayAbilityTargetActor_GroundTrace* GetDefaultObj();

};

// 0x18 (0x430 - 0x418)
// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
class UGameplayAbilityTargetActor_ActorPlacement : public UGameplayAbilityTargetActor_GroundTrace
{
public:
	TSubclassOf<class UObject>                   PlacedActorClass;                                  // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    PlacedActorMaterial;                               // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayAbilityTargetActor_ActorPlacement* GetDefaultObj();

};

// 0x10 (0x3F0 - 0x3E0)
// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
class UGameplayAbilityTargetActor_Radius : public UGameplayAbilityTargetActor
{
public:
	float                                        Radius;                                            // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298[0xC];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayAbilityTargetActor_Radius* GetDefaultObj();

};

// 0x8 (0x400 - 0x3F8)
// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
class UGameplayAbilityTargetActor_SingleLineTrace : public UGameplayAbilityTargetActor_Trace
{
public:
	uint8                                        Pad_299[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayAbilityTargetActor_SingleLineTrace* GetDefaultObj();

};

// 0x30 (0x2C0 - 0x290)
// Class GameplayAbilities.GameplayAbilityWorldReticle
class UGameplayAbilityWorldReticle : public UActor
{
public:
	struct FWorldReticleParameters               Parameters;                                        // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bFaceOwnerFlat;                                    // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToTargetedActor;                              // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargetValid;                                    // 0x2AA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTargetAnActor;                                  // 0x2AB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2B1[0x4];                                      // Fixing Size After Last Property 
	class UPlayerController*                     PrimaryPC;                                         // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayAbilityTargetActor*           TargetingActor;                                    // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayAbilityWorldReticle* GetDefaultObj();

	void SetReticleMaterialParamVector(class FName ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(class FName ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};

// 0x18 (0x2D8 - 0x2C0)
// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
class UGameplayAbilityWorldReticle_ActorVisualization : public UGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                     CollisionComponent;                                // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActorComponent*>               VisualizationComponents;                           // 0x2C8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayAbilityWorldReticle_ActorVisualization* GetDefaultObj();

};

// 0x0 (0x3B8 - 0x3B8)
// Class GameplayAbilities.GameplayAbility_CharacterJump
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static class UClass* StaticClass();
	static class UGameplayAbility_CharacterJump* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class UGameplayAbility_Montage* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class GameplayAbilities.AbilityTask
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                      Ability;                                           // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;                            // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B9[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask* GetDefaultObj();

};

// 0x40 (0xB8 - 0x78)
// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	class FName                                  ForceName;                                         // 0x78(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionFinishVelocityMode     FinishVelocityMode;                                // 0x7C(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BB[0x3];                                      // Fixing Size After Last Property 
	struct FVector                               FinishSetVelocity;                                 // 0x80(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FinishClampVelocity;                               // 0x98(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BD[0x4];                                      // Fixing Size After Last Property 
	class UCharacterMovementComponent*           MovementComponent;                                 // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BE[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotion_Base* GetDefaultObj();

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
	uint8                                        Pad_2D2[0x7];                                      // Fixing Size After Last Property 
	class UCurveFloat*                           StrengthOverTime;                                  // 0xF0(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableGravity;                                    // 0xF8(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D4[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionConstantForce* GetDefaultObj();

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
	uint8                                        Pad_2EC[0x7];                                      // Fixing Size After Last Property 
	class UCurveVector*                          PathOffsetCurve;                                   // 0x108(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x110(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EE[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionJumpForce* GetDefaultObj();

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
	uint8                                        Pad_33A[0x8];                                      // Fixing Size After Last Property 
	struct FVector                               StartLocation;                                     // 0xD0(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xE8(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                TargetActor;                                       // 0x100(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocationOffset;                              // 0x108(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                                   // 0x120(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_341[0x3];                                      // Fixing Size After Last Property 
	float                                        Duration;                                          // 0x124(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableDestinationReachedInterrupt;               // 0x128(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0x129(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0x12A(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0x12B(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_347[0x4];                                      // Fixing Size After Last Property 
	class UCurveVector*                          PathOffsetCurve;                                   // 0x130(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x138(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedHorizontalCurve;                    // 0x140(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedVerticalCurve;                      // 0x148(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_34A[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* GetDefaultObj();

	void OnTargetActorSwapped(class UActor* OriginalTarget, class UActor* NewTarget);
	void OnRep_TargetLocation();
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UActor* TargetActor, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};

// 0x68 (0x120 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnTimedOut;                                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimedOutAndDestinationReached;                   // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0xD8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xF0(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0x108(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0x10C(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0x10D(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0x10E(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_371[0x1];                                      // Fixing Size After Last Property 
	class UCurveVector*                          PathOffsetCurve;                                   // 0x110(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_372[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionMoveToForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x70 (0x128 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                LocationActor;                                     // 0xE0(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0xE8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xEC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPush;                                           // 0xF4(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAdditive;                                       // 0xF5(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNoZForce;                                         // 0xF6(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_391[0x1];                                      // Fixing Size After Last Property 
	class UCurveFloat*                           StrengthDistanceFalloff;                           // 0xF8(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           StrengthOverTime;                                  // 0x100(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFixedWorldDirection;                           // 0x108(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_395[0x7];                                      // Fixing Size After Last Property 
	struct FRotator                              FixedWorldDirection;                               // 0x110(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionRadialForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, class UActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x68 (0xE0 - 0x78)
// Class GameplayAbilities.AbilityTask_MoveToLocation
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnTargetLocationReached;                           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A1[0x8];                                      // Fixing Size After Last Property 
	struct FVector                               StartLocation;                                     // 0x90(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xA8(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DurationOfMovement;                                // 0xC0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A2[0xC];                                      // Fixing Size After Last Property 
	class UCurveFloat*                           LerpCurve;                                         // 0xD0(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          LerpCurveVector;                                   // 0xD8(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_MoveToLocation* GetDefaultObj();

	class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};

// 0x18 (0x90 - 0x78)
// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnSync;                                            // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_NetworkSyncPoint* GetDefaultObj();

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
	uint8                                        Pad_3CC[0x28];                                     // Fixing Size After Last Property 
	class UAnimMontage*                          MontageToPlay;                                     // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Rate;                                              // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StartSection;                                      // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimRootMotionTranslationScale;                    // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartTimeSeconds;                                  // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStopWhenAbilityEnds;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowInterruptAfterBlendOut;                      // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3CE[0x6];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_PlayMontageAndWait* GetDefaultObj();

	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void OnGameplayAbilityCancelled();
	class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut);
};

// 0x38 (0xB0 - 0x78)
// Class GameplayAbilities.AbilityTask_Repeat
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnPerformAction;                                   // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_Repeat* GetDefaultObj();

	class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount);
};

// 0x48 (0xC0 - 0x78)
// Class GameplayAbilities.AbilityTask_SpawnActor
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_SpawnActor* GetDefaultObj();

	class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UActor> Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UActor> Class, class UActor** SpawnedActor);
};

// 0x38 (0xB0 - 0x78)
// Class GameplayAbilities.AbilityTask_StartAbilityState
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnStateEnded;                                      // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateInterrupted;                                // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_StartAbilityState* GetDefaultObj();

	class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, class FName StateName, bool bEndCurrentState);
};

// 0x28 (0xA0 - 0x78)
// Class GameplayAbilities.AbilityTask_VisualizeTargeting
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            TimeElapsed;                                       // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_VisualizeTargeting* GetDefaultObj();

	class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class UGameplayAbilityTargetActor* TargetActor, class FName TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class UGameplayAbilityTargetActor> Class, class FName TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class UGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class UGameplayAbilityTargetActor> Class, class UGameplayAbilityTargetActor** SpawnedActor);
};

// 0xF8 (0x170 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnActivate;                                        // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_434[0xE8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAbilityActivate* GetDefaultObj();

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
	uint8                                        Pad_443[0x60];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAbilityCommit* GetDefaultObj();

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
	uint8                                        Pad_455[0x58];                                     // Fixing Size After Last Property 
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChange* GetDefaultObj();

	class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, class UActor* OptionalExternalOwner);
	class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class UActor* OptionalExternalOwner);
};

// 0xC0 (0x138 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_45C[0xA8];                                     // Fixing Size After Last Property 
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChangeRatioThreshold* GetDefaultObj();

	class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class UActor* OptionalExternalOwner);
};

// 0x70 (0xE8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_461[0x58];                                     // Fixing Size After Last Property 
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChangeThreshold* GetDefaultObj();

	class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class UActor* OptionalExternalOwner);
};

// 0x18 (0x90 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitCancel
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_465[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitCancel* GetDefaultObj();

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
	uint8                                        Pad_46B[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitConfirm* GetDefaultObj();

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
	uint8                                        Pad_483[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitConfirmCancel* GetDefaultObj();

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
	uint8                                        Pad_489[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitDelay* GetDefaultObj();

	class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};

// 0x1C8 (0x240 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	uint8                                        Pad_495[0x1B8];                                    // Fixing Size After Last Property 
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_496[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied* GetDefaultObj();

	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};

// 0x20 (0x260 - 0x240)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied_Self* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class UActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class UActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

// 0x20 (0x260 - 0x240)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DA[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied_Target* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class UActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class UActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

// 0x138 (0x1B0 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            bLocked;                                           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F4[0x118];                                    // Fixing Size After Last Property 
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x1A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4F5[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectBlockedImmunity* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class UActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x40 (0xB8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnRemoved;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InvalidHandle;                                     // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_50F[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectRemoved* GetDefaultObj();

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
	uint8                                        Pad_51D[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectStackChange* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32 NewCount, int32 OldCount);
};

// 0x30 (0xA8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_524[0x8];                                      // Fixing Size After Last Property 
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_525[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEvent* GetDefaultObj();

	class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class UActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
};

// 0x20 (0x98 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayTag
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	uint8                                        Pad_52C[0x8];                                      // Fixing Size After Last Property 
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_52D[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTag* GetDefaultObj();

	void GameplayTagCallback(const struct FGameplayTag& Tag, int32 NewCount);
};

// 0x10 (0xA8 - 0x98)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Added;                                             // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagAdded* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class UActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x10 (0xA8 - 0x98)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Removed;                                           // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagRemoved* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class UActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0xE0 (0x158 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagQuery
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{
public:
	uint8                                        Pad_551[0xC0];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            Triggered;                                         // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_553[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagQuery* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& TagQuery, class UActor* InOptionalExternalTarget, enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce);
	void UpdateTargetTags(const struct FGameplayTag& Tag, int32 NewCount);
};

// 0x20 (0x98 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitInputPress
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnPress;                                           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_558[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitInputPress* GetDefaultObj();

	class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};

// 0x20 (0x98 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitInputRelease
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnRelease;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_561[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitInputRelease* GetDefaultObj();

	class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};

// 0x20 (0x98 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_56D[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitMovementModeChange* GetDefaultObj();

	void OnMovementModeChange(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, enum class EMovementMode NewMode);
};

// 0x10 (0x88 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitOverlap
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnOverlap;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitOverlap* GetDefaultObj();

	class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
};

// 0x40 (0xB8 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitTargetData
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            ValidData;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Cancelled;                                         // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayAbilityTargetActor> TargetClass;                                       // 0x98(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayAbilityTargetActor*           TargetActor;                                       // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_588[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitTargetData* GetDefaultObj();

	class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, class UGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, TSubclassOf<class UGameplayAbilityTargetActor> Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class UGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class UGameplayAbilityTargetActor> Class, class UGameplayAbilityTargetActor** SpawnedActor);
};

// 0x38 (0xB0 - 0x78)
// Class GameplayAbilities.AbilityTask_WaitVelocityChange
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnVelocityChage;                                   // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMovementComponent*                    CachedMovementComponent;                           // 0x88(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_593[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilityTask_WaitVelocityChange* GetDefaultObj();

	class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemBlueprintLibrary
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAbilitySystemBlueprintLibrary* GetDefaultObj();

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FGameplayEffectSpecHandle SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	struct FGameplayEffectSpecHandle SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32 StackCount);
	struct FGameplayEffectSpecHandle SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	void SendGameplayEventToActor(class UActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	bool RemoveLooseGameplayTags(class UActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate);
	bool NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	bool NotEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B);
	bool NotEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B);
	struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class UActor* InInstigator, class UActor* InEffectCauser, float InLevel);
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayTag& MatchedTagName, const struct FGameplayTag& OriginalTag, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FVector& Location, const struct FVector& Normal, class UActor* Instigator, class UActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy);
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class UActor* FilterActor);
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
	class UActor* GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
	struct FHitResult GetHitResult(const struct FGameplayCueParameters& Parameters);
	class UGameplayEffectUIData* GetGameplayEffectUIData(TSubclassOf<class UGameplayEffect> EffectClass, TSubclassOf<class UGameplayEffectUIData> DataType);
	class UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle);
	bool GetGameplayCueEndLocationAndNormal(class UActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	bool GetGameplayCueDirection(class UActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	class UGameplayAbility* GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool* bIsInstance);
	float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBase(class UActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttribute(class UActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	struct FGameplayEffectContextHandle GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
	class FString GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& Attribute);
	int32 GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);
	TArray<class UActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<class UActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	int32 GetActorCount(const struct FGameplayCueParameters& Parameters);
	class UActor* GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32 Index);
	float GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class FString GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* GetAbilitySystemComponent(class UActor* Actor);
	void ForwardGameplayCueToTarget(TScriptInterface<class UGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
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
	class UActor* EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FVector EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	class UActor* EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FHitResult EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class UActor* EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	void EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index, class UActor* Actor);
	bool DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs);
	struct FGameplayEffectSpecHandle CloneSpecHandle(class UActor* InNewInstigator, class UActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);
	void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTag* MatchedTagName, struct FGameplayTag* OriginalTag, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTagContainer* AggregatedTargetTags, struct FVector* Location, struct FVector* Normal, class UActor** Instigator, class UActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int32* GameplayEffectLevel, int32* AbilityLevel, class USceneComponent** TargetAttachComponent, bool* bReplicateLocationWhenUsingMinimalRepProxy);
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude);
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, class FName DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	bool AddLooseGameplayTags(class UActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect);
	struct FGameplayEffectSpecHandle AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayEffectSpecHandle AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class UActor*>& ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class UActor* Actor);
};

// 0x1130 (0x1248 - 0x118)
// Class GameplayAbilities.AbilitySystemComponent
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	uint8                                        Pad_90A[0x10];                                     // Fixing Size After Last Property 
	TArray<struct FAttributeDefaults>            DefaultStartingData;                               // 0x128(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  AffectedAnimInstanceTag;                           // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90B[0x1AC];                                    // Fixing Size After Last Property 
	float                                        OutgoingDuration;                                  // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingDuration;                                  // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90D[0x20];                                     // Fixing Size After Last Property 
	TArray<class FString>                        ClientDebugStrings;                                // 0x310(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	TArray<class FString>                        ServerDebugStrings;                                // 0x320(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	uint8                                        Pad_90E[0x60];                                     // Fixing Size After Last Property 
	bool                                         UserAbilityActivationInhibited;                    // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReplicationProxyEnabled;                           // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressGrantAbility;                             // 0x392(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressGameplayCues;                             // 0x393(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90F[0x4];                                      // Fixing Size After Last Property 
	TArray<class UGameplayAbilityTargetActor*>   SpawnedTargetActors;                               // 0x398(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_911[0x28];                                     // Fixing Size After Last Property 
	class UActor*                                OwnerActor;                                        // 0x3D0(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                AvatarActor;                                       // 0x3D8(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_912[0x10];                                     // Fixing Size After Last Property 
	struct FGameplayAbilitySpecContainer         ActivatableAbilities;                              // 0x3F0(0x120)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_913[0x30];                                     // Fixing Size After Last Property 
	TArray<class UGameplayAbility*>              AllReplicatedInstancedAbilities;                   // 0x540(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_914[0x230];                                    // Fixing Size After Last Property 
	struct FGameplayAbilityRepAnimMontage        RepAnimMontageInfo;                                // 0x780(0x38)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bCachedIsNetSimulated;                             // 0x7B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingMontageRep;                                // 0x7B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_915[0x6];                                      // Fixing Size After Last Property 
	struct FGameplayAbilityLocalAnimMontage      LocalAnimMontageInfo;                              // 0x7C0(0x30)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_917[0xA0];                                     // Fixing Size After Last Property 
	struct FActiveGameplayEffectsContainer       ActiveGameplayEffects;                             // 0x890(0x2F8)(Net, Protected, NativeAccessSpecifierProtected)
	struct FActiveGameplayCueContainer           ActiveGameplayCues;                                // 0xB88(0x128)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FActiveGameplayCueContainer           MinimalReplicationGameplayCues;                    // 0xCB0(0x128)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_919[0x128];                                    // Fixing Size After Last Property 
	TArray<uint8>                                BlockedAbilityBindings;                            // 0xF00(0x10)(Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_91A[0x128];                                    // Fixing Size After Last Property 
	struct FMinimalReplicationTagCountMap        MinimalReplicationTags;                            // 0x1038(0x60)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UAttributeSet*>                 SpawnedAttributes;                                 // 0x1098(0x10)(ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_91B[0x10];                                     // Fixing Size After Last Property 
	struct FMinimalReplicationTagCountMap        ReplicatedLooseTags;                               // 0x10B8(0x60)(Net, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_91C[0x8];                                      // Fixing Size After Last Property 
	struct FReplicatedPredictionKeyMap           ReplicatedPredictionKeyMap;                        // 0x1120(0x118)(Net, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_91D[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilitySystemComponent* GetDefaultObj();

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
	void OnSpawnedAttributesEndPlayed(class UActor* InActor, enum class EEndPlayReason EndPlayReason);
	void OnRep_SpawnedAttributes(TArray<class UAttributeSet*>& PreviousSpawnedAttributes);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void OnOwnerActorDestroyed(class UActor* InActor);
	void OnAvatarActorDestroyed(class UActor* InActor);
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

	static class UClass* StaticClass();
	static class UAbilitySystemDebugHUDExtension* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension
{
public:
	uint8                                        Pad_9A5[0x58];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilitySystemDebugHUDExtension_Tags* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension
{
public:
	uint8                                        Pad_9A9[0x58];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilitySystemDebugHUDExtension_Attributes* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension
{
public:
	uint8                                        Pad_9B1[0x58];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilitySystemDebugHUDExtension_BlockedAbilityTags* GetDefaultObj();

};

// 0x1F0 (0x218 - 0x28)
// Class GameplayAbilities.AbilitySystemGlobals
class UAbilitySystemGlobals : public UObject
{
public:
	struct FSoftClassPath                        AbilitySystemGlobalsClassName;                     // 0x28(0x18)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B5[0x28];                                     // Fixing Size After Last Property 
	bool                                         bUseDebugTargetFromHud;                            // 0x68(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B7[0x3];                                      // Fixing Size After Last Property 
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
	uint8                                        Pad_9BE[0x2];                                      // Fixing Size After Last Property 
	class FName                                  GameplayModEvaluationChannelAliases[0xA];          // 0xC4(0x28)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9C0[0x4];                                      // Fixing Size After Last Property 
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
	uint8                                        Pad_9CC[0x1];                                      // Fixing Size After Last Property 
	bool                                         PredictTargetGameplayEffects;                      // 0x1C9(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ReplicateActivationOwnedTags;                      // 0x1CA(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9D0[0x5];                                      // Fixing Size After Last Property 
	class UGameplayCueManager*                   GlobalGameplayCueManager;                          // 0x1D0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9D1[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAbilitySystemGlobals* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemInterface
class UAbilitySystemInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UAbilitySystemInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
class UAbilitySystemReplicationProxyInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UAbilitySystemReplicationProxyInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GameplayAbilities.AttributeSet
class UAttributeSet : public UObject
{
public:
	uint8                                        Pad_9D7[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAttributeSet* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class UAbilitySystemTestAttributeSet* GetDefaultObj();

};

// 0x20 (0x360 - 0x340)
// Class GameplayAbilities.AbilitySystemTestPawn
class UAbilitySystemTestPawn : public UDefaultPawn
{
public:
	uint8                                        Pad_9E1[0x18];                                     // Fixing Size After Last Property 
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAbilitySystemTestPawn* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.AnimNotify_GameplayCue
class UAnimNotify_GameplayCue : public UAnimNotify
{
public:
	struct FGameplayCueTag                       GameplayCue;                                       // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_9E4[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAnimNotify_GameplayCue* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GameplayAbilities.AnimNotify_GameplayCueState
class UAnimNotify_GameplayCueState : public UAnimNotifyState
{
public:
	struct FGameplayCueTag                       GameplayCue;                                       // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_9E8[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAnimNotify_GameplayCueState* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class GameplayAbilities.GameplayAbilityBlueprint
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class UGameplayAbilityBlueprint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueFunctionLibrary
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueFunctionLibrary* GetDefaultObj();

	void RemoveGameplayCueOnActor(class UActor* Target, const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters);
	struct FGameplayCueParameters MakeGameplayCueParametersFromHitResult(struct FHitResult& HitResult);
	void ExecuteGameplayCueOnActor(class UActor* Target, const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters);
	void AddGameplayCueOnActor(class UActor* Target, const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& Parameters);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueInterface
class UGameplayCueInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueInterface* GetDefaultObj();

	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
};

// 0x290 (0x2C0 - 0x30)
// Class GameplayAbilities.GameplayCueManager
class UGameplayCueManager : public UDataAsset
{
public:
	uint8                                        Pad_A20[0x18];                                     // Fixing Size After Last Property 
	struct FGameplayCueObjectLibrary             RuntimeGameplayCueObjectLibrary;                   // 0x48(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueObjectLibrary             EditorGameplayCueObjectLibrary;                    // 0x98(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A22[0x178];                                    // Fixing Size After Last Property 
	TArray<TSubclassOf<class UObject>>           LoadedGameplayCueNotifyClasses;                    // 0x260(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UGameplayCueNotify_Actor>> GameplayCueClassesForPreallocation;                // 0x270(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FGameplayCuePendingExecute>    PendingExecuteCues;                                // 0x280(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        GameplayCueSendContextCount;                       // 0x290(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A27[0x4];                                      // Fixing Size After Last Property 
	TArray<struct FPreallocationInfo>            PreallocationInfoList_Internal;                    // 0x298(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A28[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayCueManager* GetDefaultObj();

};

// 0x68 (0x2F8 - 0x290)
// Class GameplayAbilities.GameplayCueNotify_Actor
class UGameplayCueNotify_Actor : public UActor
{
public:
	bool                                         bAutoDestroyOnRemove;                              // 0x290(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4B[0x3];                                      // Fixing Size After Last Property 
	float                                        AutoDestroyDelay;                                  // 0x294(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfTimelineIsStillRunning;                      // 0x298(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfLatentActionIsStillRunning;                  // 0x299(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4D[0x2];                                      // Fixing Size After Last Property 
	struct FGameplayTag                          GameplayCueTag;                                    // 0x29C(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GameplayCueName;                                   // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAttachToOwner;                                // 0x2A4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverride;                                        // 0x2A5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerInstigator;                      // 0x2A6(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerSourceObject;                    // 0x2A7(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleOnActiveEvents;                      // 0x2A8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleWhileActiveEvents;                   // 0x2A9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A51[0x2];                                      // Fixing Size After Last Property 
	int32                                        NumPreallocatedInstances;                          // 0x2AC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A52[0x48];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayCueNotify_Actor* GetDefaultObj();

	bool WhileActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed(class UActor* DestroyedActor);
	bool OnExecute(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class UActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
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
	uint8                                        Pad_A7C[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayCueNotify_Static* GetDefaultObj();

	bool WhileActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnExecute(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class UActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
};

// 0x310 (0x348 - 0x38)
// Class GameplayAbilities.GameplayCueNotify_Burst
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{
public:
	struct FGameplayCueNotify_SpawnCondition     DefaultSpawnCondition;                             // 0x38(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_PlacementInfo      DefaultPlacementInfo;                              // 0x70(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       BurstEffects;                                      // 0xB0(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayCueNotify_Burst* GetDefaultObj();

	void OnBurst(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
};

// 0x368 (0x660 - 0x2F8)
// Class GameplayAbilities.GameplayCueNotify_BurstLatent
class UGameplayCueNotify_BurstLatent : public UGameplayCueNotify_Actor
{
public:
	struct FGameplayCueNotify_SpawnCondition     DefaultSpawnCondition;                             // 0x2F8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_PlacementInfo      DefaultPlacementInfo;                              // 0x330(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       BurstEffects;                                      // 0x370(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        BurstSpawnResults;                                 // 0x608(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayCueNotify_BurstLatent* GetDefaultObj();

	void OnBurst(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
};

// 0x10 (0x48 - 0x38)
// Class GameplayAbilities.GameplayCueNotify_HitImpact
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                            Sound;                                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleSystem;                                    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayCueNotify_HitImpact* GetDefaultObj();

};

// 0xB98 (0xE90 - 0x2F8)
// Class GameplayAbilities.GameplayCueNotify_Looping
class UGameplayCueNotify_Looping : public UGameplayCueNotify_Actor
{
public:
	struct FGameplayCueNotify_SpawnCondition     DefaultSpawnCondition;                             // 0x2F8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_PlacementInfo      DefaultPlacementInfo;                              // 0x330(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       ApplicationEffects;                                // 0x370(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        ApplicationSpawnResults;                           // 0x608(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_LoopingEffects     LoopingEffects;                                    // 0x660(0x1F0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        LoopingSpawnResults;                               // 0x850(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       RecurringEffects;                                  // 0x8A8(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        RecurringSpawnResults;                             // 0xB40(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_BurstEffects       RemovalEffects;                                    // 0xB98(0x298)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_SpawnResult        RemovalSpawnResults;                               // 0xE30(0x58)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AB8[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayCueNotify_Looping* GetDefaultObj();

	void OnRemoval(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnRecurring(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnLoopingStart(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnApplication(class UActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults);
};

// 0x60 (0x90 - 0x30)
// Class GameplayAbilities.GameplayCueSet
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>        GameplayCueData;                                   // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABD[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayCueSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator
class UGameplayCueTranslator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueTranslator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator_Test
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueTranslator_Test* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.GameplayEffectCalculation
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayEffectCalculation* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectCustomApplicationRequirement* GetDefaultObj();

	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayEffectExecutionCalculation
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bRequiresPassedInTags;                             // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AD4[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayEffectExecutionCalculation* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayModMagnitudeCalculation
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bAllowNonNetAuthorityDependencyRegistration;       // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B10[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayModMagnitudeCalculation* GetDefaultObj();

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
	uint8                                        Pad_B24[0x1F0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayTagReponseTable* GetDefaultObj();

	void TagResponseEvent(const struct FGameplayTag& Tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 Idx);
};

// 0xF8 (0x200 - 0x108)
// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{
public:
	struct FMovieSceneGameplayCueChannel         Channel;                                           // 0x108(0xF8)(AssetRegistrySearchable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGameplayCueTriggerSection* GetDefaultObj();

};

// 0x88 (0x190 - 0x108)
// Class GameplayAbilities.MovieSceneGameplayCueSection
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{
public:
	struct FMovieSceneGameplayCueKey             Cue;                                               // 0x108(0x88)(Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGameplayCueSection* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class GameplayAbilities.MovieSceneGameplayCueTrack
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGameplayCueTrack* GetDefaultObj();

	void SetSequencerTrackHandler(FDelegateProperty_ InGameplayCueTrackHandler);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.TickableAttributeSetInterface
class UTickableAttributeSetInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UTickableAttributeSetInterface* GetDefaultObj();

};

}


