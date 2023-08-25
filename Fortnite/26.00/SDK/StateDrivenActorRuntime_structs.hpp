#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EStateDrivenStateID : uint8
{
	Invalid                        = 0,
	Success                        = 1,
	Failure                        = 2,
	State_A                        = 3,
	State_B                        = 4,
	State_C                        = 5,
	State_D                        = 6,
	State_E                        = 7,
	State_F                        = 8,
	State_G                        = 9,
	State_H                        = 10,
	State_I                        = 11,
	State_J                        = 12,
	EStateDrivenStateID_MAX        = 13,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct StateDrivenActorRuntime.StateDrivenStateTransitions
struct FStateDrivenStateTransitions
{
public:
	struct FGameplayTag                          TransitionTag;                                     // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47FA[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FInstancedStruct>              TransitionEvents;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct StateDrivenActorRuntime.StateDrivenState
struct FStateDrivenState
{
public:
	class FString                                DevNotes;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           StaticMesh;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyMeshTransform;                               // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47FD[0x7];                                     // Fixing Size After Last Property 
	struct FTransform                            StaticMeshTransform;                               // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInstance>> MaterialInstances;                                 // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayCueTag                       LoopingGameplayCueTag;                             // 0x90(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        OverlapRadius;                                     // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InteractionStringOverride;                         // 0x98(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  InteractionFailedStringOverride;                   // 0xB0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FStateDrivenStateTransitions>  Transitions;                                       // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_47FF[0x8];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent
struct FStateDrivenEvent
{
public:
	uint8                                        Pad_4801[0x8];                                     // Fixing Size After Last Property 
	struct FGameplayCueTag                       BurstGameplayCue;                                  // 0x8(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4802[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4804[0x8];                                     // Fixing Size After Last Property 
	class UFortActorComponent_StateDriven*       StateDrivenOwner;                                  // 0x20(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StateDrivenActorRuntime.StateDrivenTagQuery
struct FStateDrivenTagQuery
{
public:
	uint8                                        Pad_4805[0x8];                                     // Fixing Size After Last Property 
	struct FInstancedStruct                      InstancedTagQuery;                                 // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_BeginOverlap
struct FStateDrivenEvent_BeginOverlap : public FStateDrivenEvent
{
public:
	struct FStateDrivenTagQuery                  OverlappingActorTagQuery;                          // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_InteractionBase
struct FStateDrivenEvent_InteractionBase : public FStateDrivenEvent
{
public:
	struct FStateDrivenTagQuery                  PlayerTagQuery;                                    // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  InteractionStringOverride;                         // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x68 - 0x58)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_Conversation
struct FStateDrivenEvent_Conversation : public FStateDrivenEvent_InteractionBase
{
public:
	struct FGameplayTag                          ConversationEntryTag;                              // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortNonPlayerConversationParticipantComponent> ConversationComponentPtr;                          // 0x5C(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4809[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x30 - 0x28)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_CustomEvent
struct FStateDrivenEvent_CustomEvent : public FStateDrivenEvent
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x28(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_480A[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x60 - 0x28)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_DamageInstance
struct FStateDrivenEvent_DamageInstance : public FStateDrivenEvent
{
public:
	struct FStateDrivenTagQuery                  InstigatorTagQuery;                                // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FStateDrivenTagQuery                  DamageInstanceTagQuery;                            // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        MinimumInstanceDamage;                             // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_480B[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x80 - 0x58)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_DepositResource
struct FStateDrivenEvent_DepositResource : public FStateDrivenEvent_InteractionBase
{
public:
	TSoftObjectPtr<class UFortItemDefinition>    DepositItem;                                       // 0x58(0x20)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DepositAmount;                                     // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_480D[0x4];                                     // Fixing Size Of Struct
};

// 0x30 (0x58 - 0x28)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_Destroy
struct FStateDrivenEvent_Destroy : public FStateDrivenEvent
{
public:
	struct FStateDrivenTagQuery                  InstigatorTagQuery;                                // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FStateDrivenTagQuery                  DamageInstanceTagQuery;                            // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_EndOverlap
struct FStateDrivenEvent_EndOverlap : public FStateDrivenEvent
{
public:
	struct FStateDrivenTagQuery                  OverlappingActorTagQuery;                          // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x70 - 0x58)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_InsertItem
struct FStateDrivenEvent_InsertItem : public FStateDrivenEvent_InteractionBase
{
public:
	struct FStateDrivenTagQuery                  EquippedItemTagQuery;                              // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x58 - 0x58)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_Interaction
struct FStateDrivenEvent_Interaction : public FStateDrivenEvent_InteractionBase
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_PickupItem
struct FStateDrivenEvent_PickupItem : public FStateDrivenEvent_BeginOverlap
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StateDrivenActorRuntime.StateDrivenFloat
struct FStateDrivenFloat
{
public:
	uint8                                        Pad_480F[0x8];                                     // Fixing Size After Last Property 
	struct FInstancedStruct                      InstancedFloat;                                    // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_Timer
struct FStateDrivenEvent_Timer : public FStateDrivenEvent
{
public:
	struct FStateDrivenFloat                     Duration;                                          // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTimerHandle                          TimerTransitionEventHandle;                        // 0x40(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x58 - 0x58)
// ScriptStruct StateDrivenActorRuntime.StateDrivenEvent_WithdrawItem
struct FStateDrivenEvent_WithdrawItem : public FStateDrivenEvent_InteractionBase
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct StateDrivenActorRuntime.StateDrivenFloat_Base
struct FStateDrivenFloat_Base
{
public:
	uint8                                        Pad_4813[0x8];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct StateDrivenActorRuntime.StateDrivenFloat_Simple
struct FStateDrivenFloat_Simple : public FStateDrivenFloat_Base
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4814[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct StateDrivenActorRuntime.StateDrivenFloat_Variable
struct FStateDrivenFloat_Variable : public FStateDrivenFloat_Base
{
public:
	int32                                        VariableIndex;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4815[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct StateDrivenActorRuntime.StateDrivenTagQuery_Base
struct FStateDrivenTagQuery_Base
{
public:
	uint8                                        Pad_4816[0x8];                                     // Fixing Size Of Struct
};

// 0x48 (0x50 - 0x8)
// ScriptStruct StateDrivenActorRuntime.StateDrivenTagQuery_Simple
struct FStateDrivenTagQuery_Simple : public FStateDrivenTagQuery_Base
{
public:
	struct FGameplayTagQuery                     Query;                                             // 0x8(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct StateDrivenActorRuntime.StateDrivenTagQuery_Variable
struct FStateDrivenTagQuery_Variable : public FStateDrivenTagQuery_Base
{
public:
	int32                                        VariableIndex;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4817[0x4];                                     // Fixing Size Of Struct
};

}


