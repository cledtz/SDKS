#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityAsync.EndAction
struct UAbilityAsync_EndAction_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
struct UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Params
{
public:
	class UActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD[0x7];                                       // Fixing Size After Last Property
	class UAbilityAsync_WaitAttributeChanged*    ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
struct UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Params
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewValue;                                          // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldValue;                                          // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
struct UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Params
{
public:
	class UActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       SourceFilter;                                      // 0x8(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              SourceTagRequirements;                             // 0x18(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagRequirements;                             // 0x58(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x98(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ListenForPeriodicEffect;                           // 0x99(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5[0x6];                                       // Fixing Size After Last Property
	class UAbilityAsync_WaitGameplayEffectApplied* ReturnValue;                                       // 0xA0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
struct UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Params
{
public:
	class UActor*                                Source;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
struct UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Params
{
public:
	class UActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTag;                                          // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyMatchExact;                                    // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3[0x2];                                       // Fixing Size After Last Property
	class UAbilityAsync_WaitGameplayEvent*       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
struct UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
struct UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Params
{
public:
	class UActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA[0x3];                                       // Fixing Size After Last Property
	class UAbilityAsync_WaitGameplayTagAdded*    ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
struct UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Params
{
public:
	class UActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD[0x3];                                       // Fixing Size After Last Property
	class UAbilityAsync_WaitGameplayTagRemoved*  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
struct UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Params
{
public:
	class UActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     TagQuery;                                          // 0x8(0x48)(ConstParm, Parm, NativeAccessSpecifierPublic)
	enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition;                                  // 0x50(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyTriggerOnce;                                  // 0x51(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE[0x6];                                       // Fixing Size After Last Property
	class UAbilityAsync_WaitGameplayTagQuery*    ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
{
public:
	bool                                         bShouldBlockAbilities;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
struct UGameplayAbility_SetCanBeCanceled_Params
{
public:
	bool                                         bCanBeCanceled;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
struct UGameplayAbility_SendGameplayEvent_Params
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEventData                    Payload;                                           // 0x8(0xB0)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
struct UGameplayAbility_RemoveGrantedByEffect_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.MontageStop
struct UGameplayAbility_MontageStop_Params
{
public:
	float                                        OverrideBlendOutTime;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
struct UGameplayAbility_MontageSetNextSectionName_Params
{
public:
	class FName                                  FromSectionName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ToSectionName;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
struct UGameplayAbility_MontageJumpToSection_Params
{
public:
	class FName                                  SectionName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E[0xC];                                      // Fixing Size After Last Property
	struct FGameplayAbilityTargetingLocationInfo ReturnValue;                                       // 0x10(0xA0)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
{
public:
	struct FGameplayAbilityTargetingLocationInfo ReturnValue;                                       // 0x0(0xA0)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayEventData                    Payload;                                           // 0x48(0xB0)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111[0x7];                                      // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
struct UGameplayAbility_K2_RemoveGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
struct UGameplayAbility_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_HasAuthority
struct UGameplayAbility_K2_HasAuthority_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114[0x4];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
struct UGameplayAbility_K2_ExecuteGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectContextHandle          Context;                                           // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
struct UGameplayAbility_K2_EndAbilityLocally_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_EndAbility
struct UGameplayAbility_K2_EndAbility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
struct UGameplayAbility_K2_CommitExecute_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
struct UGameplayAbility_K2_CommitAbilityCost_Params
{
public:
	bool                                         BroadcastCommitEvent;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
struct UGameplayAbility_K2_CommitAbilityCooldown_Params
{
public:
	bool                                         BroadcastCommitEvent;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceCooldown;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
struct UGameplayAbility_K2_CommitAbility_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
struct UGameplayAbility_K2_CheckAbilityCost_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
struct UGameplayAbility_K2_CheckAbilityCooldown_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CancelAbility
struct UGameplayAbility_K2_CancelAbility_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
struct UGameplayAbility_K2_CanActivateAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0x48(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121[0x4];                                      // Fixing Size After Last Property
	struct FGameplayTagContainer                 RelevantTags;                                      // 0x50(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122[0x7];                                      // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
{
public:
	struct FGameplayEffectSpecHandle             EffectSpecHandle;                                  // 0x0(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x10(0x28)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>   ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
{
public:
	struct FGameplayEffectSpecHandle             EffectSpecHandle;                                  // 0x0(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
struct UGameplayAbility_K2_AddGameplayCueWithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127[0x4];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                GameplayCueParameter;                              // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bRemoveOnAbilityEnd;                               // 0xD8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_128[0x7];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
struct UGameplayAbility_K2_AddGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectContextHandle          Context;                                           // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         bRemoveOnAbilityEnd;                               // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D[0x7];                                      // Fixing Size Of Struct
};

// 0xB0 (0xB0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
struct UGameplayAbility_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbility.IsLocallyControlled
struct UGameplayAbility_IsLocallyControlled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
struct UGameplayAbility_InvalidateClientPredictionKey_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetSourceObject_BP
struct UGameplayAbility_GetSourceObject_BP_Params
{
public:
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136[0x4];                                      // Fixing Size After Last Property
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x8(0x48)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
struct UGameplayAbility_GetOwningActorFromActorInfo_Params
{
public:
	class UActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
struct UGameplayAbility_GetGrantedByEffectContext_Params
{
public:
	struct FGameplayEffectContextHandle          ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
struct UGameplayAbility_GetCurrentSourceObject_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
struct UGameplayAbility_GetCurrentMontage_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
struct UGameplayAbility_GetCooldownTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
struct UGameplayAbility_GetContextFromOwner_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      OptionalTargetData;                                // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
{
public:
	class UActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetActorInfo
struct UGameplayAbility_GetActorInfo_Params
{
public:
	struct FGameplayAbilityActorInfo             ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
struct UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Params
{
public:
	class UAbilitySystemComponent*               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
struct UGameplayAbility_GetAbilityLevel_BP_Params
{
public:
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143[0x4];                                      // Fixing Size After Last Property
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x8(0x48)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x50(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_144[0x4];                                      // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
struct UGameplayAbility_GetAbilityLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
struct UGameplayAbility_EndTaskByInstanceName_Params
{
public:
	class FName                                  InstanceName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.EndAbilityState
struct UGameplayAbility_EndAbilityState_Params
{
public:
	class FName                                  OptionalStateNameToEnd;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
struct UGameplayAbility_ConfirmTaskByInstanceName_Params
{
public:
	class FName                                  InstanceName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndTask;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146[0x3];                                      // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
struct UGameplayAbility_CancelTaskByInstanceName_Params
{
public:
	class FName                                  InstanceName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params
{
public:
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
{
public:
	struct FGameplayTagContainer                 WithGrantedTags;                                   // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
{
public:
	struct FGameplayTagContainer                 WithAssetTags;                                     // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149[0x4];                                      // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stacks;                                            // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>   ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stacks;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
struct UGameplayAbilityTargetActor_ConfirmTargeting_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
struct UGameplayAbilityTargetActor_CancelTargeting_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
struct UGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165[0x4];                                      // Fixing Size After Last Property
	struct FVector                               Value;                                             // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
struct UGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
struct UGameplayAbilityWorldReticle_OnValidTargetChanged_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
struct UGameplayAbilityWorldReticle_OnTargetingAnActor_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
struct UGameplayAbilityWorldReticle_OnParametersInitialized_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
struct UGameplayAbilityWorldReticle_FaceTowardSource_Params
{
public:
	bool                                         bFaceIn2D;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
struct UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179[0x4];                                      // Fixing Size After Last Property
	struct FVector                               WorldDirection;                                    // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditive;                                       // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A[0x7];                                      // Fixing Size After Last Property
	class UCurveFloat*                           StrengthOverTime;                                  // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B[0x7];                                      // Fixing Size After Last Property
	struct FVector                               SetVelocityOnFinish;                               // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x60(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGravity;                                    // 0x64(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C[0x3];                                      // Fixing Size After Last Property
	class UAbilityTask_ApplyRootMotionConstantForce* ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
struct UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
struct UAbilityTask_ApplyRootMotionJumpForce_Finish_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
struct UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186[0x4];                                      // Fixing Size After Last Property
	struct FRotator                              Rotation;                                          // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumLandedTriggerTime;                          // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFinishOnLanded;                                   // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x39(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187[0x6];                                      // Fixing Size After Last Property
	struct FVector                               SetVelocityOnFinish;                               // 0x40(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189[0x4];                                      // Fixing Size After Last Property
	class UCurveVector*                          PathOffsetCurve;                                   // 0x60(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x68(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_ApplyRootMotionJumpForce* ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Params
{
public:
	class UActor*                                OriginalTarget;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                NewTarget;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params
{
public:
};

// 0xB8 (0xB8 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195[0x4];                                      // Fixing Size After Last Property
	struct FGameplayAbilityTargetDataHandle      TargetDataHandle;                                  // 0x10(0x28)(Parm, NativeAccessSpecifierPublic)
	int32                                        TargetDataIndex;                                   // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetActorIndex;                                  // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocationOffset;                              // 0x40(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                                   // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196[0x3];                                      // Fixing Size After Last Property
	float                                        Duration;                                          // 0x5C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TargetLerpSpeedHorizontal;                         // 0x60(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TargetLerpSpeedVertical;                           // 0x68(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetNewMovementMode;                               // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     MovementMode;                                      // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSpeedToExpected;                          // 0x72(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197[0x5];                                      // Fixing Size After Last Property
	class UCurveVector*                          PathOffsetCurve;                                   // 0x78(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x80(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x88(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199[0x7];                                      // Fixing Size After Last Property
	struct FVector                               SetVelocityOnFinish;                               // 0x90(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0xA8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableDestinationReachedInterrupt;               // 0xAC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A[0x3];                                      // Fixing Size After Last Property
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                       // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D[0x4];                                      // Fixing Size After Last Property
	class UActor*                                TargetActor;                                       // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocationOffset;                              // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                                   // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E[0x3];                                      // Fixing Size After Last Property
	float                                        Duration;                                          // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TargetLerpSpeedHorizontal;                         // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TargetLerpSpeedVertical;                           // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetNewMovementMode;                               // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     MovementMode;                                      // 0x49(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSpeedToExpected;                          // 0x4A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F[0x5];                                      // Fixing Size After Last Property
	class UCurveVector*                          PathOffsetCurve;                                   // 0x50(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x58(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0[0x7];                                      // Fixing Size After Last Property
	struct FVector                               SetVelocityOnFinish;                               // 0x68(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableDestinationReachedInterrupt;               // 0x84(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1[0x3];                                      // Fixing Size After Last Property
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
struct UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9[0x4];                                      // Fixing Size After Last Property
	struct FVector                               TargetLocation;                                    // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetNewMovementMode;                               // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     MovementMode;                                      // 0x2D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSpeedToExpected;                          // 0x2E(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA[0x1];                                      // Fixing Size After Last Property
	class UCurveVector*                          PathOffsetCurve;                                   // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB[0x7];                                      // Fixing Size After Last Property
	struct FVector                               SetVelocityOnFinish;                               // 0x40(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC[0x4];                                      // Fixing Size After Last Property
	class UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
struct UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4[0x4];                                      // Fixing Size After Last Property
	struct FVector                               Location;                                          // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                LocationActor;                                     // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPush;                                           // 0x3C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditive;                                       // 0x3D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoZForce;                                         // 0x3E(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6[0x1];                                      // Fixing Size After Last Property
	class UCurveFloat*                           StrengthDistanceFalloff;                           // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StrengthOverTime;                                  // 0x48(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFixedWorldDirection;                           // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8[0x7];                                      // Fixing Size After Last Property
	struct FRotator                              FixedWorldDirection;                               // 0x58(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     VelocityOnFinishMode;                              // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB[0x7];                                      // Fixing Size After Last Property
	struct FVector                               SetVelocityOnFinish;                               // 0x78(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocityOnFinish;                             // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD[0x4];                                      // Fixing Size After Last Property
	class UAbilityTask_ApplyRootMotionRadialForce* ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
struct UAbilityTask_MoveToLocation_MoveToLocation_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0[0x4];                                      // Fixing Size After Last Property
	struct FVector                               Location;                                          // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1[0x4];                                      // Fixing Size After Last Property
	class UCurveFloat*                           OptionalInterpolationCurve;                        // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          OptionalVectorInterpolationCurve;                  // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_MoveToLocation*           ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAbilityTaskNetSyncType           SyncType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_NetworkSyncPoint*         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
struct UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8[0x7];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED[0x7];                                      // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7[0x4];                                      // Fixing Size After Last Property
	class UAnimMontage*                          MontageToPlay;                                     // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartSection;                                      // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAbilityEnds;                              // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8[0x3];                                      // Fixing Size After Last Property
	float                                        AnimRootMotionTranslationScale;                    // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTimeSeconds;                                  // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB[0x4];                                      // Fixing Size After Last Property
	class UAbilityTask_PlayMontageAndWait*       ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
struct UAbilityTask_Repeat_RepeatAction_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenActions;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalActionCount;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_Repeat*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
struct UAbilityTask_SpawnActor_SpawnActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x8(0x28)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class UActor>                    Class;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_SpawnActor*               ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x8(0x28)(Parm, NativeAccessSpecifierPublic)
	class UActor*                                SpawnedActor;                                      // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x8(0x28)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class UActor>                    Class;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                SpawnedActor;                                      // 0x38(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_223[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
struct UAbilityTask_StartAbilityState_StartAbilityState_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StateName;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndCurrentState;                                  // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C[0x3];                                      // Fixing Size After Last Property
	class UAbilityTask_StartAbilityState*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbilityTargetActor*           TargetActor;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_VisualizeTargeting*       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayAbilityTargetActor> Class;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_VisualizeTargeting*       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbilityTargetActor*           SpawnedActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayAbilityTargetActor> Class;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbilityTargetActor*           SpawnedActor;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_242[0x7];                                      // Fixing Size Of Struct
};

// 0x58 (0x58 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TagRequirements;                                   // 0x8(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         IncludeTriggeredAbilities;                         // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x49(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_258[0x6];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitAbilityActivate*      ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     Query;                                             // 0x8(0x48)(Parm, NativeAccessSpecifierPublic)
	bool                                         IncludeTriggeredAbilities;                         // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x51(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25F[0x6];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitAbilityActivate*      ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithTag;                                           // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithoutTag;                                        // 0xC(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeTriggeredAbilities;                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_264[0x6];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitAbilityActivate*      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
{
public:
	class UGameplayAbility*                      ActivatedAbility;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     Query;                                             // 0x8(0x48)(Parm, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitAbilityCommit*        ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithTag;                                           // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithoutTage;                                       // 0xC(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitAbilityCommit*        ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
{
public:
	class UGameplayAbility*                      ActivatedAbility;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    InAttribute;                                       // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InWithTag;                                         // 0x40(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InWithoutTag;                                      // 0x44(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaitAttributeChangeComparison    InComparisonType;                                  // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293[0x3];                                      // Fixing Size After Last Property
	float                                        InComparisonValue;                                 // 0x4C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294[0x7];                                      // Fixing Size After Last Property
	class UActor*                                OptionalExternalOwner;                             // 0x58(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAttributeChange*      ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithSrcTag;                                        // 0x40(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WithoutSrcTag;                                     // 0x44(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A0[0x7];                                      // Fixing Size After Last Property
	class UActor*                                OptionalExternalOwner;                             // 0x50(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAttributeChange*      ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
struct UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeNumerator;                                // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeDenominator;                              // 0x40(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaitAttributeChangeComparison    ComparisonType;                                    // 0x78(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE[0x3];                                      // Fixing Size After Last Property
	float                                        ComparisonValue;                                   // 0x7C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerOnce;                                      // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0[0x7];                                      // Fixing Size After Last Property
	class UActor*                                OptionalExternalOwner;                             // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
struct UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaitAttributeChangeComparison    ComparisonType;                                    // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B8[0x3];                                      // Fixing Size After Last Property
	float                                        ComparisonValue;                                   // 0x44(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerOnce;                                      // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA[0x7];                                      // Fixing Size After Last Property
	class UActor*                                OptionalExternalOwner;                             // 0x50(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAttributeChangeThreshold* ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
struct UAbilityTask_WaitCancel_WaitCancel_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitCancel*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
struct UAbilityTask_WaitCancel_OnCancelCallback_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
struct UAbilityTask_WaitConfirm_WaitConfirm_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitConfirm*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
{
public:
	class UGameplayAbility*                      InAbility;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitConfirmCancel*        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
struct UAbilityTask_WaitDelay_WaitDelay_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1[0x4];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitDelay*                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2A8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
{
public:
	class UAbilitySystemComponent*               Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                   SpecApplied;                                       // 0x8(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x2A0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       SourceFilter;                                      // 0x8(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     SourceTagQuery;                                    // 0x18(0x48)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     TargetTagQuery;                                    // 0x60(0x48)(Parm, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0xA8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC[0x7];                                      // Fixing Size After Last Property
	class UActor*                                OptionalExternalOwner;                             // 0xB0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ListenForPeriodicEffect;                           // 0xB8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DD[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                       // 0xC0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       SourceFilter;                                      // 0x8(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              SourceTagRequirements;                             // 0x18(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagRequirements;                             // 0x58(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x98(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E0[0x7];                                      // Fixing Size After Last Property
	class UActor*                                OptionalExternalOwner;                             // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ListenForPeriodicEffect;                           // 0xA8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                       // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       SourceFilter;                                      // 0x8(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     SourceTagQuery;                                    // 0x18(0x48)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     TargetTagQuery;                                    // 0x60(0x48)(Parm, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0xA8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E7[0x7];                                      // Fixing Size After Last Property
	class UActor*                                OptionalExternalOwner;                             // 0xB0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ListenForPeriodicEffect;                           // 0xB8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E8[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                       // 0xC0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       TargetFilter;                                      // 0x8(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              SourceTagRequirements;                             // 0x18(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagRequirements;                             // 0x58(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         TriggerOnce;                                       // 0x98(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ED[0x7];                                      // Fixing Size After Last Property
	class UActor*                                OptionalExternalOwner;                             // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ListenForPeriodicEffects;                          // 0xA8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EE[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                       // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
struct UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              SourceTagRequirements;                             // 0x8(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagRequirements;                             // 0x48(0x40)(Parm, NativeAccessSpecifierPublic)
	class UActor*                                OptionalExternalTarget;                            // 0x88(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F1[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectRemoved* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
{
public:
	struct FGameplayEffectRemovalInfo            InGameplayEffectRemovalInfo;                       // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectStackChange* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params
{
public:
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OldCount;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
struct UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTag;                                          // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_302[0x4];                                      // Fixing Size After Last Property
	class UActor*                                OptionalExternalTarget;                            // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyMatchExact;                                    // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_303[0x6];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayEvent*        ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30E[0x4];                                      // Fixing Size After Last Property
	class UActor*                                InOptionalExternalTarget;                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30F[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayTagAdded*     ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_312[0x4];                                      // Fixing Size After Last Property
	class UActor*                                InOptionalExternalTarget;                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyTriggerOnce;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_313[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayTagRemoved*   ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
struct UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     TagQuery;                                          // 0x8(0x48)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class UActor*                                InOptionalExternalTarget;                          // 0x50(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaitGameplayTagQueryTriggerCondition TriggerCondition;                                  // 0x58(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyTriggerOnce;                                  // 0x59(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320[0x6];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitGameplayTagQuery*     ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
struct UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
struct UAbilityTask_WaitInputPress_WaitInputPress_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestAlreadyPressed;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitInputPress*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
struct UAbilityTask_WaitInputPress_OnPressCallback_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestAlreadyReleased;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitInputRelease*         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
{
public:
	class UCharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334[0x6];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     NewMode;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_337[0x7];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitMovementModeChange*   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitOverlap*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
struct UAbilityTask_WaitOverlap_OnHitCallback_Params
{
public:
	class UPrimitiveComponent*                   HitComp;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x30(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayTargetingConfirmation    ConfirmationType;                                  // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_343[0x3];                                      // Fixing Size After Last Property
	class UGameplayAbilityTargetActor*           TargetActor;                                       // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitTargetData*           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
struct UAbilityTask_WaitTargetData_WaitTargetData_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TaskInstanceName;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayTargetingConfirmation    ConfirmationType;                                  // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349[0x3];                                      // Fixing Size After Last Property
	TSubclassOf<class UGameplayAbilityTargetActor> Class;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitTargetData*           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      Data;                                              // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivationTag;                                     // 0x28(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      Data;                                              // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      Data;                                              // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbilityTargetActor*           SpawnedActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayAbilityTargetActor> Class;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbilityTargetActor*           SpawnedActor;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_353[0x7];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumMagnitude;                                  // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_357[0x4];                                      // Fixing Size After Last Property
	class UAbilityTask_WaitVelocityChange*       ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_359[0x3];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      HitResult;                                         // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A[0x3];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D[0x3];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360[0x3];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
struct UAbilitySystemBlueprintLibrary_SetDuration_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTag;                                          // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36D[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEventData                    Payload;                                           // 0x10(0xB0)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags
struct UAbilitySystemBlueprintLibrary_RemoveLooseGameplayTags_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bShouldReplicate;                                  // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x29(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_373[0x6];                                      // Fixing Size Of Struct
};

// 0x78 (0x78 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params
{
public:
	struct FGameplayAttribute                    AttributeA;                                        // 0x0(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeB;                                        // 0x38(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_376[0x7];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle
struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAbilitySpecHandle_Params
{
public:
	struct FGameplayAbilitySpecHandle            A;                                                 // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            B;                                                 // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D[0x3];                                      // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle
struct UAbilitySystemBlueprintLibrary_NotEqual_ActiveGameplayEffectHandle_Params
{
public:
	struct FActiveGameplayEffectHandle           A;                                                 // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           B;                                                 // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_380[0x3];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
{
public:
	class UGameplayEffect*                       InGameplayEffect;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                InInstigator;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                InEffectCauser;                                    // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InLevel;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_381[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
struct UAbilitySystemBlueprintLibrary_MakeGameplayCueParameters_Params
{
public:
	float                                        NormalizedMagnitude;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawMagnitude;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MatchedTagName;                                    // 0x20(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OriginalTag;                                       // 0x24(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedSourceTags;                              // 0x28(0x20)(Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedTargetTags;                              // 0x48(0x20)(Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x68(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x80(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                Instigator;                                        // 0x98(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                EffectCauser;                                      // 0xA0(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceObject;                                      // 0xA8(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0xB0(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0xB8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AbilityLevel;                                      // 0xBC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TargetAttachComponent;                             // 0xC0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateLocationWhenUsingMinimalRepProxy;        // 0xC8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389[0x7];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                ReturnValue;                                       // 0xD0(0xD0)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
{
public:
	struct FGameplayTargetDataFilter             Filter;                                            // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	class UActor*                                FilterActor;                                       // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
struct UAbilitySystemBlueprintLibrary_IsValid_Params
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E[0x7];                                      // Fixing Size Of Struct
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391[0x7];                                      // Fixing Size Of Struct
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394[0x7];                                      // Fixing Size Of Struct
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398[0x7];                                      // Fixing Size Of Struct
};

// 0x90 (0x90 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E[0x4];                                      // Fixing Size After Last Property
	struct FTransform                            ReturnValue;                                       // 0x30(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A1[0x4];                                      // Fixing Size After Last Property
	struct FTransform                            ReturnValue;                                       // 0x30(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A4[0x4];                                      // Fixing Size After Last Property
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xD0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
struct UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x10(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x48(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA[0x4];                                      // Fixing Size Of Struct
};

// 0x130 (0x130 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0xD0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UActor*                                ReturnValue;                                       // 0xD0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      HitResult;                                         // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2[0x4];                                      // Fixing Size After Last Property
	struct FHitResult                            ReturnValue;                                       // 0x30(0xE0)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                            ReturnValue;                                       // 0xD0(0xE0)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData
struct UAbilitySystemBlueprintLibrary_GetGameplayEffectUIData_Params
{
public:
	TSubclassOf<class UGameplayEffect>           EffectClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffectUIData>     DataType;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayEffectUIData*                 ReturnValue;                                       // 0x10(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle
struct UAbilitySystemBlueprintLibrary_GetGameplayEffectFromActiveEffectHandle_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayEffect*                       ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
{
public:
	class UActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xD8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0xF0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x108(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9[0x7];                                      // Fixing Size Of Struct
};

// 0xF8 (0xF8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
{
public:
	class UActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xD8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BE[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle
struct UAbilitySystemBlueprintLibrary_GetGameplayAbilityFromSpecHandle_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            AbilitySpecHandle;                                 // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInstance;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2[0x3];                                      // Fixing Size After Last Property
	class UGameplayAbility*                      ReturnValue;                                       // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccessfullyFoundAttribute;                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5[0x3];                                      // Fixing Size After Last Property
	float                                        ReturnValue;                                       // 0x44(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccessfullyFoundAttribute;                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB[0x3];                                      // Fixing Size After Last Property
	float                                        ReturnValue;                                       // 0x44(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccessfullyFoundAttribute;                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE[0x3];                                      // Fixing Size After Last Property
	float                                        ReturnValue;                                       // 0x44(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccessfullyFoundAttribute;                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1[0x3];                                      // Fixing Size After Last Property
	float                                        ReturnValue;                                       // 0x44(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
struct UAbilitySystemBlueprintLibrary_GetEffectContext_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute
struct UAbilitySystemBlueprintLibrary_GetDebugStringFromGameplayAttribute_Params
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9[0x4];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
struct UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectSpecHandle>     ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
struct UAbilitySystemBlueprintLibrary_GetAllActorsFromTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UActor*>                        ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE[0x4];                                      // Fixing Size After Last Property
	TArray<class UActor*>                        ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xD0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4[0x4];                                      // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0xD0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E8[0x4];                                      // Fixing Size After Last Property
	class UActor*                                ReturnValue;                                       // 0xD8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0[0x4];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
{
public:
	TScriptInterface<class UGameplayCueInterface> TargetCueInterface;                                // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueEvent                 EventType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F5[0x7];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                Parameters;                                        // 0x18(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetDataHandle;                                  // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       ActorFilterClass;                                  // 0x28(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x38(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SourceTags;                                        // 0x40(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTags;                                        // 0x60(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        BaseValue;                                         // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x84(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB[0x3];                                      // Fixing Size After Last Property
	float                                        ReturnValue;                                       // 0x88(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC[0x4];                                      // Fixing Size Of Struct
};

// 0x88 (0x88 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SourceTags;                                        // 0x40(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTags;                                        // 0x60(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_401[0x3];                                      // Fixing Size After Last Property
	float                                        ReturnValue;                                       // 0x84(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params
{
public:
	struct FGameplayAttribute                    AttributeA;                                        // 0x0(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    AttributeB;                                        // 0x38(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_404[0x7];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle
struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAbilitySpecHandle_Params
{
public:
	struct FGameplayAbilitySpecHandle            A;                                                 // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            B;                                                 // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409[0x3];                                      // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle
struct UAbilitySystemBlueprintLibrary_EqualEqual_ActiveGameplayEffectHandle_Params
{
public:
	struct FActiveGameplayEffectHandle           A;                                                 // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           B;                                                 // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410[0x3];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
struct UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_416[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_417[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class UActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class UActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FHitResult                            ReturnValue;                                       // 0x18(0xE0)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class UActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FHitResult                            HitResult;                                         // 0x18(0xE0)(Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bReset;                                            // 0xF8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C[0x7];                                      // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D[0x4];                                      // Fixing Size After Last Property
	class UActor*                                Actor;                                             // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E[0x7];                                      // Fixing Size Of Struct
};

// 0x158 (0x158 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              SourceTagReqs;                                     // 0xD0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagReqs;                                     // 0x110(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x150(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_423[0x7];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
struct UAbilitySystemBlueprintLibrary_CloneSpecHandle_Params
{
public:
	class UActor*                                InNewInstigator;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                InEffectCauser;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             GameplayEffectSpecHandle_Clone;                    // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
struct UAbilitySystemBlueprintLibrary_BreakGameplayCueParameters_Params
{
public:
	struct FGameplayCueParameters                Parameters;                                        // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        NormalizedMagnitude;                               // 0xD0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawMagnitude;                                      // 0xD4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0xD8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MatchedTagName;                                    // 0xF0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OriginalTag;                                       // 0xF4(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedSourceTags;                              // 0xF8(0x20)(Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedTargetTags;                              // 0x118(0x20)(Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x138(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x150(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                Instigator;                                        // 0x168(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                EffectCauser;                                      // 0x170(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceObject;                                      // 0x178(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x180(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0x188(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AbilityLevel;                                      // 0x18C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TargetAttachComponent;                             // 0x190(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateLocationWhenUsingMinimalRepProxy;        // 0x198(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_430[0x7];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DataTag;                                           // 0x10(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FName                                  DataName;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetHandle;                                      // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      HandleToAdd;                                       // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x50(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags
struct UAbilitySystemBlueprintLibrary_AddLooseGameplayTags_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bShouldReplicate;                                  // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x29(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_444[0x6];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             LinkedGameplayEffectSpec;                          // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           LinkedGameplayEffect;                              // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 NewGameplayTags;                                   // 0x10(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NewGameplayTag;                                    // 0x10(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44F[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 NewGameplayTags;                                   // 0x10(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NewGameplayTag;                                    // 0x10(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_456[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
{
public:
	struct FGameplayAbilityTargetingLocationInfo SourceLocation;                                    // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation;                                    // 0xA0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x140(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_45E[0x8];                                      // Fixing Size Of Struct
};

// 0x108 (0x108 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0xE0(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
{
public:
	TArray<class UActor*>                        ActorArray;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         OneTargetPerHandle;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_465[0x7];                                      // Fixing Size After Last Property
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x18(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
struct UAbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitudes_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             NewSetByCallerValues;                              // 0x8(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
struct UAbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitude_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SetByCallerTag;                                    // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewValue;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
{
public:
	TSubclassOf<class UGameplayAbility>          InAbilityToActivate;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRemoteActivation;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47C[0x6];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility
struct UAbilitySystemComponent_TryActivateAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRemoteActivation;                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_483[0x2];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
{
public:
	struct FGameplayTagContainer                 GameplayTagContainer;                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAllowRemoteActivation;                            // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_485[0x6];                                      // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
struct UAbilitySystemComponent_TargetConfirm_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
struct UAbilitySystemComponent_TargetCancel_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
{
public:
	bool                                         NewInhibit;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
struct UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params
{
public:
	struct FGameplayEffectQuery                  Query;                                             // 0x0(0x198)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        NewLevel;                                          // 0x198(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_487[0x4];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
{
public:
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewLevel;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InputPressed;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48B[0x3];                                      // Fixing Size After Last Property
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                    TriggerEventData;                                  // 0x20(0xB0)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
struct UAbilitySystemComponent_ServerTryActivateAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InputPressed;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D[0x3];                                      // Fixing Size After Last Property
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_490[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        CurrentPredictionKey;                              // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_493[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      ReplicatedTargetDataHandle;                        // 0x20(0x28)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ApplicationTag;                                    // 0x48(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_494[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        CurrentPredictionKey;                              // 0x50(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
struct UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params
{
public:
	enum class EAbilityGenericReplicatedEvent    EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_496[0x3];                                      // Fixing Size After Last Property
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        CurrentPredictionKey;                              // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                VectorPayload;                                     // 0x38(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
{
public:
	enum class EAbilityGenericReplicatedEvent    EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_498[0x3];                                      // Fixing Size After Last Property
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        CurrentPredictionKey;                              // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
struct UAbilitySystemComponent_ServerSetInputReleased_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
struct UAbilitySystemComponent_ServerSetInputPressed_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
struct UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
struct UAbilitySystemComponent_ServerPrintDebug_Request_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
struct UAbilitySystemComponent_ServerEndAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToEnd;                                      // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49A[0x4];                                      // Fixing Size After Last Property
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x28(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
struct UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params
{
public:
	class UAnimMontage*                          ClientAnimMontage;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InPlayRate;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
{
public:
	class UAnimMontage*                          ClientAnimMontage;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientPosition;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NextSectionName;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49C[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
{
public:
	class UAnimMontage*                          ClientAnimMontage;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
struct UAbilitySystemComponent_ServerCancelAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToCancel;                                   // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A0[0x4];                                      // Fixing Size After Last Property
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
struct UAbilitySystemComponent_ServerAbilityRPCBatch_Params
{
public:
	struct FServerAbilityRPCBatch                BatchInfo;                                         // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               InstigatorAbilitySystemComponent;                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A3[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
{
public:
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StacksToRemove;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A6[0x3];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A9[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AA[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AC[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B0[0x4];                                      // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID
struct UAbilitySystemComponent_ReleaseInputID_Params
{
public:
	int32                                        InputID;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.PressInputID
struct UAbilitySystemComponent_PressInputID_Params
{
public:
	int32                                        InputID;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
struct UAbilitySystemComponent_OnSpawnedAttributesEndPlayed_Params
{
public:
	class UActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B4[0x7];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
struct UAbilitySystemComponent_OnRep_SpawnedAttributes_Params
{
public:
	TArray<class UAttributeSet*>                 PreviousSpawnedAttributes;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
struct UAbilitySystemComponent_OnRep_ServerDebugString_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
struct UAbilitySystemComponent_OnRep_OwningActor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
struct UAbilitySystemComponent_OnRep_ClientDebugString_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
struct UAbilitySystemComponent_OnOwnerActorDestroyed_Params
{
public:
	class UActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
struct UAbilitySystemComponent_OnAvatarActorDestroyed_Params
{
public:
	class UActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params
{
public:
	struct FGameplayTagContainer                 GameplayCueTags;                                   // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x38(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params
{
public:
	struct FGameplayTagContainer                 GameplayCueTags;                                   // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x38(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params
{
public:
	struct FGameplayTagContainer                 GameplayCueTags;                                   // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x20(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x38(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x20(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
{
public:
	struct FGameplayEffectSpecForRPC             Spec;                                              // 0x0(0x78)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x78(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BE[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C1[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x20(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
{
public:
	struct FGameplayEffectSpecForRPC             Spec;                                              // 0x0(0x78)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x78(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C4[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x20(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C8[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
struct UAbilitySystemComponent_MakeOutgoingSpec_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CB[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectContextHandle          Context;                                           // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
struct UAbilitySystemComponent_MakeEffectContext_Params
{
public:
	struct FGameplayEffectContextHandle          ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
struct UAbilitySystemComponent_K2_InitStats_Params
{
public:
	TSubclassOf<class UAttributeSet>             Attributes;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DataTable;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
struct UAbilitySystemComponent_K2_GiveAbilityAndActivateOnce_Params
{
public:
	TSubclassOf<class UGameplayAbility>          AbilityClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CC[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
struct UAbilitySystemComponent_K2_GiveAbility_Params
{
public:
	TSubclassOf<class UGameplayAbility>          AbilityClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D0[0x4];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
struct UAbilitySystemComponent_IsGameplayCueActive_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D4[0x3];                                      // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.InputConfirm
struct UAbilitySystemComponent_InputConfirm_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.InputCancel
struct UAbilitySystemComponent_InputCancel_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
struct UAbilitySystemComponent_GetGameplayTagCount_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
{
public:
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DA[0x4];                                      // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
struct UAbilitySystemComponent_GetGameplayEffectCount_IfLoaded_Params
{
public:
	TSoftClassPtr<class UGameplayEffect>         SoftSourceGameplayEffect;                          // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               OptionalInstigatorFilterComponent;                 // 0x28(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnforceOnGoingCheck;                              // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DD[0x3];                                      // Fixing Size After Last Property
	int32                                        ReturnValue;                                       // 0x34(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
struct UAbilitySystemComponent_GetGameplayEffectCount_Params
{
public:
	TSubclassOf<class UGameplayEffect>           SourceGameplayEffect;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               OptionalInstigatorFilterComponent;                 // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnforceOnGoingCheck;                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DE[0x3];                                      // Fixing Size After Last Property
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
struct UAbilitySystemComponent_GetGameplayAttributeValue_Params
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFound;                                            // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E1[0x3];                                      // Fixing Size After Last Property
	float                                        ReturnValue;                                       // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet
struct UAbilitySystemComponent_GetAttributeSet_Params
{
public:
	TSubclassOf<class UAttributeSet>             AttributeSetClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAttributeSet*                         ReturnValue;                                       // 0x8(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes
struct UAbilitySystemComponent_GetAllAttributes_Params
{
public:
	TArray<struct FGameplayAttribute>            OutAttributes;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities
struct UAbilitySystemComponent_GetAllAbilities_Params
{
public:
	TArray<struct FGameplayAbilitySpecHandle>    OutAbilityHandles;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
struct UAbilitySystemComponent_GetActiveEffectsWithAllTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>   ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x1A8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
struct UAbilitySystemComponent_GetActiveEffects_Params
{
public:
	struct FGameplayEffectQuery                  Query;                                             // 0x0(0x198)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>   ReturnValue;                                       // 0x198(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
struct UAbilitySystemComponent_FindAllAbilitiesWithTags_Params
{
public:
	TArray<struct FGameplayAbilitySpecHandle>    OutAbilityHandles;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x10(0x20)(Parm, NativeAccessSpecifierPublic)
	bool                                         bExactMatch;                                       // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EC[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
struct UAbilitySystemComponent_FindAllAbilitiesWithInputID_Params
{
public:
	TArray<struct FGameplayAbilitySpecHandle>    OutAbilityHandles;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F1[0x4];                                      // Fixing Size Of Struct
};

// 0x58 (0x58 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
struct UAbilitySystemComponent_FindAllAbilitiesMatchingQuery_Params
{
public:
	TArray<struct FGameplayAbilitySpecHandle>    OutAbilityHandles;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     Query;                                             // 0x10(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
struct UAbilitySystemComponent_ClientTryActivateAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
{
public:
	enum class EAbilityGenericReplicatedEvent    EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FE[0x3];                                      // Fixing Size After Last Property
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                        AbilityOriginalPredictionKey;                      // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
struct UAbilitySystemComponent_ClientPrintDebug_Response_Params
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        GameFlags;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_501[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
struct UAbilitySystemComponent_ClientEndAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToEnd;                                      // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_503[0x4];                                      // Fixing Size After Last Property
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
struct UAbilitySystemComponent_ClientCancelAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToCancel;                                   // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_504[0x4];                                      // Fixing Size After Last Property
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_506[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                    TriggerEventData;                                  // 0x20(0xB0)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_508[0x4];                                      // Fixing Size After Last Property
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityToActivate;                                 // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        PredictionKey;                                     // 0x4(0x2)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_509[0x2];                                      // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
struct UAbilitySystemComponent_ClearAllAbilitiesWithInputID_Params
{
public:
	int32                                        InputID;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
struct UAbilitySystemComponent_ClearAllAbilities_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.ClearAbility
struct UAbilitySystemComponent_ClearAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50C[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectContextHandle          Context;                                           // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50F[0x4];                                      // Fixing Size After Last Property
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
{
public:
	struct FGameplayEffectSpecHandle             SpecHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
{
public:
	int32                                        InputID;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor
struct UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayCueTag;                                    // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_542[0x4];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1B0 (0x1B0 - 0x0)
// Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult
struct UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                ReturnValue;                                       // 0xE0(0xD0)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor
struct UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayCueTag;                                    // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_547[0x4];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor
struct UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayCueTag;                                    // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_548[0x4];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
{
public:
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
struct UGameplayCueInterface_BlueprintCustomHandler_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54B[0x7];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
struct UGameplayCueNotify_Actor_WhileActive_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_555[0x7];                                      // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
struct UGameplayCueNotify_Actor_OnRemove_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_558[0x7];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
struct UGameplayCueNotify_Actor_OnOwnerDestroyed_Params
{
public:
	class UActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
struct UGameplayCueNotify_Actor_OnExecute_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55D[0x7];                                      // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
struct UGameplayCueNotify_Actor_OnActive_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55E[0x7];                                      // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
struct UGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueEvent                 EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_560[0x7];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
struct UGameplayCueNotify_Actor_K2_EndGameplayCue_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
struct UGameplayCueNotify_Static_WhileActive_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56E[0x7];                                      // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
struct UGameplayCueNotify_Static_OnRemove_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_570[0x7];                                      // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
struct UGameplayCueNotify_Static_OnExecute_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_572[0x7];                                      // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
struct UGameplayCueNotify_Static_OnActive_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_574[0x7];                                      // Fixing Size Of Struct
};

// 0xE0 (0xE0 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
{
public:
	class UActor*                                MyTarget;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueEvent                 EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_575[0x7];                                      // Fixing Size After Last Property
	struct FGameplayCueParameters                Parameters;                                        // 0x10(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Burst.OnBurst
struct UGameplayCueNotify_Burst_OnBurst_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_SpawnResult        SpawnResults;                                      // 0xD8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
struct UGameplayCueNotify_BurstLatent_OnBurst_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_SpawnResult        SpawnResults;                                      // 0xD8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
struct UGameplayCueNotify_Looping_OnRemoval_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_SpawnResult        SpawnResults;                                      // 0xD8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
struct UGameplayCueNotify_Looping_OnRecurring_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_SpawnResult        SpawnResults;                                      // 0xD8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
struct UGameplayCueNotify_Looping_OnLoopingStart_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_SpawnResult        SpawnResults;                                      // 0xD8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication
struct UGameplayCueNotify_Looping_OnApplication_Params
{
public:
	class UActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_SpawnResult        SpawnResults;                                      // 0xD8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
struct UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params
{
public:
	class UGameplayEffect*                       GameplayEffect;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                   Spec;                                              // 0x8(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ASC;                                               // 0x2A0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2A8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_595[0x7];                                      // Fixing Size Of Struct
};

// 0x110 (0x110 - 0x0)
// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
struct UGameplayEffectExecutionCalculation_Execute_Params
{
public:
	struct FGameplayEffectCustomExecutionParameters ExecutionParams;                                   // 0x0(0xF8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayEffectCustomExecutionOutput  OutExecutionOutput;                                // 0xF8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x318 (0x318 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
struct UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x298(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SourceTags;                                        // 0x2D0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTags;                                        // 0x2F0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x310(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A4[0x4];                                      // Fixing Size Of Struct
};

// 0x2B8 (0x2B8 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
struct UGameplayModMagnitudeCalculation_GetTargetSpecTags_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x298(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2B8 (0x2B8 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
struct UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x298(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x2B8 (0x2B8 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
struct UGameplayModMagnitudeCalculation_GetTargetActorTags_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x298(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2B8 (0x2B8 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
struct UGameplayModMagnitudeCalculation_GetSourceSpecTags_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x298(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2B8 (0x2B8 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
struct UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x298(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x2B8 (0x2B8 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
struct UGameplayModMagnitudeCalculation_GetSourceActorTags_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x298(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2A0 (0x2A0 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
struct UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x298(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x29C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2A0 (0x2A0 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
struct UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Params
{
public:
	struct FGameplayEffectSpec                   EffectSpec;                                        // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  MagnitudeName;                                     // 0x298(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x29C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2A0 (0x2A0 - 0x0)
// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x298(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BB[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
struct UGameplayTagReponseTable_TagResponseEvent_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ASC;                                               // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Idx;                                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C1[0x4];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
struct UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Params
{
public:
	FDelegateProperty_                           InGameplayCueTrackHandler;                         // 0x0(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
