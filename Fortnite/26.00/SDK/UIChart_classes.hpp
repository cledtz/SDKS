#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// Class UIChart.UIStateSettings
class UUIStateSettings : public UDeveloperSettings
{
public:
	float                                        StateLoadTimeout;                                  // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StateUnloadTimeout;                                // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WidgetStateComponentLoadTimeout;                   // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WidgetStateComponentUnloadTimeout;                 // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetStateComponentUnloadDefaultBehavior WidgetStateComponentDefaultUnloadBehavior;         // 0x40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25D9[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIStateSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class UIChart.UIStateComponent
class UUIStateComponent : public UObject
{
public:
	enum class EStateComponentStatus             Status;                                            // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_25E3[0x4];                                     // Fixing Size After Last Property 
	class UUIStateComponentConfiguration*        ComponentConfiguration;                            // 0x30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIState*                              OwningState;                                       // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIStateChartRegion*                   StateChartRegion;                                  // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUIStateComponent* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class UIChart.ContextSetterUIStateComponent
class UContextSetterUIStateComponent : public UUIStateComponent
{
public:
	class UContextSetterUIStateComponentConfiguration* Configuration;                                     // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UContextSetterUIStateComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UIChart.UIStateComponentConfiguration
class UUIStateComponentConfiguration : public UObject
{
public:

	static class UClass* StaticClass();
	static class UUIStateComponentConfiguration* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class UIChart.ContextSetterUIStateComponentConfiguration
class UContextSetterUIStateComponentConfiguration : public UUIStateComponentConfiguration
{
public:
	struct FContextSetterChanges                 ActivationChanges;                                 // 0x28(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FContextSetterChanges                 DeactivationChanges;                               // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UContextSetterUIStateComponentConfiguration* GetDefaultObj();

};

// 0x60 (0xA8 - 0x48)
// Class UIChart.GlobalViewModelUIStateComponent
class UGlobalViewModelUIStateComponent : public UUIStateComponent
{
public:
	class UGlobalViewModelUIStateComponentConfiguration* Configuration;                                     // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<struct FGameplayTag>                    ConditionContextKeys;                              // 0x50(0x50)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_2605[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGlobalViewModelUIStateComponent* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class UIChart.GlobalViewModelUIStateComponentConfiguration
class UGlobalViewModelUIStateComponentConfiguration : public UUIStateComponentConfiguration
{
public:
	TArray<struct FMVVMViewModelContext>         ViewModelContexts;                                 // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FUIStateChartContextCondition> ContextConditions;                                 // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGlobalViewModelUIStateComponentConfiguration* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class UIChart.StackingUIStateComponent
class UStackingUIStateComponent : public UUIStateComponent
{
public:
	enum class EStateChartResourceScope          StackScope;                                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAlwaysRemoveStackingBehavior;                     // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOnStack;                                        // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2612[0x2];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStackingUIStateComponent* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class UIChart.InputConfigUIStateComponent
class UInputConfigUIStateComponent : public UStackingUIStateComponent
{
public:
	class UInputConfigUIStateComponentConfiguration* Configuration;                                     // 0x50(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputConfigUIStateComponent* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class UIChart.InputConfigUIStateComponentConfiguration
class UInputConfigUIStateComponentConfiguration : public UUIStateComponentConfiguration
{
public:
	enum class ECommonInputMode                  InputMode;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMouseCaptureMode                 MouseCaptureMode;                                  // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCursorDuringCapture;                          // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreLookInput;                                  // 0x2B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreMovementInput;                              // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushPlayerInputWhenActivating;                   // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushPlayerInputWhenDeactivating;                 // 0x2E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_261E[0x1];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputConfigUIStateComponentConfiguration* GetDefaultObj();

};

// 0x68 (0xB0 - 0x48)
// Class UIChart.SceneUIStateComponent
class USceneUIStateComponent : public UUIStateComponent
{
public:
	class USceneUIStateComponentConfiguration*   Configuration;                                     // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSet<struct FGameplayTag>                    ConditionContextKeys;                              // 0x50(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2621[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USceneUIStateComponent* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UIChart.SceneUIStateComponentConfiguration
class USceneUIStateComponentConfiguration : public UUIStateComponentConfiguration
{
public:
	class UDynamicUIScene*                       Scene;                                             // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUIStateChartContextCondition> ContextConditions;                                 // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USceneUIStateComponentConfiguration* GetDefaultObj();

};

// 0x68 (0xB0 - 0x48)
// Class UIChart.SplitScreenUIStateComponentBase
class USplitScreenUIStateComponentBase : public UUIStateComponent
{
public:
	class USplitScreenUIStateComponentBaseConfiguration* BaseConfiguration;                                 // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class ULocalPlayer*, int32>             ChildStateCharts;                                  // 0x50(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                DeactivatingStateCharts;                           // 0xA0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USplitScreenUIStateComponentBase* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class UIChart.SplitScreenUIStateComponentBaseConfiguration
class USplitScreenUIStateComponentBaseConfiguration : public UUIStateComponentConfiguration
{
public:
	class UUIStateChart*                         PlayerStateChart;                                  // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreTransitionParametersOnActivation;           // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIStateTransitionUrgency         UrgencyOnPlayerAdd;                                // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2630[0x6];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 AnimationHintsOnPlayerAdd;                         // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
	bool                                         bIgnoreTransitionParametersOnDeactivation;         // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIStateTransitionUrgency         UrgencyOnPlayerRemove;                             // 0x59(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2631[0x6];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 AnimationHintsOnPlayerRemove;                      // 0x60(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USplitScreenUIStateComponentBaseConfiguration* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class UIChart.StackingUIStateComponentSharedData
class UStackingUIStateComponentSharedData : public UObject
{
public:
	TMap<class UClass*, struct FUIStateComponentInstanceStack> InstanceStacks;                                    // 0x28(0x50)(Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStackingUIStateComponentSharedData* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class UIChart.UIStateConfiguration
class UUIStateConfiguration : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 StateTags;                                         // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263D[0x4];                                     // Fixing Size After Last Property 
	TArray<class UUIStateConfiguration*>         Children;                                          // 0x60(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UUIStateConfiguration*>         ParallelRegions;                                   // 0x70(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UUIStateComponentConfiguration*> Components;                                        // 0x80(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        MinimumUnloadTime;                                 // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIStateAutomationType            AutomationType;                                    // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2643[0x3];                                     // Fixing Size After Last Property 
	TArray<struct FUIStateAutomationRule>        AutomationRules;                                   // 0x98(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSupportsBacktracking;                             // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideIncomingBacktracks;                       // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2648[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIStateConfiguration* GetDefaultObj();

};

// 0xC0 (0xE8 - 0x28)
// Class UIChart.UIState
class UUIState : public UObject
{
public:
	TArray<class UUIState*>                      Children;                                          // 0x28(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UUIStateChartRegion*>           ParallelRegions;                                   // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UUIStateComponent*>             Components;                                        // 0x48(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UUIStateConfiguration*                 Configuration;                                     // 0x58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UUIStateChartTransition*>       OutgoingTransitions;                               // 0x60(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        SecondsUntilTimeout;                               // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2652[0x4];                                     // Fixing Size After Last Property 
	class UUIState*                              Parent;                                            // 0x78(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIStateChartRegion*                   StateChartRegion;                                  // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EStateComponentStatus             Status;                                            // 0x88(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2654[0x4];                                     // Fixing Size After Last Property 
	TSet<struct FGameplayTag>                    ContinualAutomationContextKeys;                    // 0x90(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2655[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIState* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class UIChart.UIStateChart
class UUIStateChart : public UDataAsset
{
public:
	class UUIStateConfiguration*                 RootState;                                         // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUIStateTransitionData>        Transitions;                                       // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUIStateChart* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class UIChart.UIStateChartContext
class UUIStateChartContext : public UObject
{
public:
	TMap<struct FGameplayTag, class UUIStateChartContextEntry*> Store;                                             // 0x28(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_26AE[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIStateChartContext* GetDefaultObj();

	void BP_SetPlayerValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, int32 Value);
	void BP_SetPlayerStringValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, const class FString& Value);
	void BP_SetPlayerFloatValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, float Value);
	void BP_SetPlayerBoolValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, bool Value);
	void BP_SetCommonStringValue(const struct FGameplayTag& Key, const class FString& Value);
	void BP_SetCommonIntValue(const struct FGameplayTag& Key, int32 Value);
	void BP_SetCommonFloatValue(const struct FGameplayTag& Key, float Value);
	void BP_SetCommonBoolValue(const struct FGameplayTag& Key, bool Value);
	class UUIStateChartContextEntry* BP_FindEntry(const struct FGameplayTag& Key);
	void BP_ClearPlayerValue(class ULocalPlayer* LocalPlayer, struct FGameplayTag& Key);
	void BP_ClearEntry(const struct FGameplayTag& Key);
	void BP_ClearCommonValue(const struct FGameplayTag& Key);
	void BP_ApplyPlayerChanges(class ULocalPlayer* LocalPlayer, struct FUIStateChartContextChangeSet& ContextChanges);
	void BP_ApplyCommonChanges(struct FUIStateChartContextChangeSet& ContextChanges);
};

// 0x80 (0xA8 - 0x28)
// Class UIChart.UIStateChartContextEntry
class UUIStateChartContextEntry : public UObject
{
public:
	class FString                                CommonValue;                                       // 0x28(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class ULocalPlayer*, struct FUIStateChartContextEntryOverride> PlayerOverrides;                                   // 0x38(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_26C5[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIStateChartContextEntry* GetDefaultObj();

	bool IsEmptyForPlayer(class ULocalPlayer* InLocalPlayer);
	class FString GetPlayerValueAsString(class ULocalPlayer* InLocalPlayer);
	int32 GetPlayerValueAsInt(class ULocalPlayer* InLocalPlayer);
	float GetPlayerValueAsFloat(class ULocalPlayer* InLocalPlayer);
	bool GetPlayerValueAsBool(class ULocalPlayer* InLocalPlayer);
	class FString GetCommonValueAsString();
	int32 GetCommonValueAsInt();
	float GetCommonValueAsFloat();
	bool GetCommonValueAsBool();
};

// 0xC8 (0xF8 - 0x30)
// Class UIChart.UIStateChartManager
class UUIStateChartManager : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_2712[0x8];                                     // Fixing Size After Last Property 
	TMap<class ULocalPlayer*, class UUIStateChartManagerPlayer*> PlayerEntries;                                     // 0x38(0x50)(Protected, NativeAccessSpecifierProtected)
	TArray<class UUIStateChartManagerPlayer*>    RemovedPlayerEntries;                              // 0x88(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UUIStateChartContext*                  Context;                                           // 0x98(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIStateChartResourceCollection*       GlobalResources;                                   // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2713[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIStateChartManager* GetDefaultObj();

	class UUIStateChartContext* GetContext();
	bool BP_RemoveStateChart(int32 Key, struct FGameplayTagContainer& AnimationHints, struct FUIStateChartContextChangeSet& ContextChanges, enum class EUIStateTransitionUrgency Urgency);
	void BP_ReactivateStateChart(int32 Key, struct FGameplayTagContainer& AnimationHints, const struct FGameplayTag& StateTag, enum class EUIStateTransitionUrgency Urgency);
	bool BP_DispatchTransitionEvent(const struct FGameplayTag& TransitionTag, class ULocalPlayer* StateChartOwner, struct FGameplayTagContainer& AnimationHints, struct FUIStateChartContextChangeSet& ContextChanges, enum class EUIStateTransitionUrgency Urgency, bool bBacktrack);
	bool BP_DeactivateStateChart(int32 Key, struct FGameplayTagContainer& AnimationHints, struct FUIStateChartContextChangeSet& ContextChanges, enum class EUIStateTransitionUrgency Urgency);
	int32 BP_AddStateChart(class UUIStateChart* StateChartAsset, class ULocalPlayer* OwningLocalPlayer, struct FGameplayTagContainer& AnimationHints, const struct FGameplayTag& InitialStateTag, enum class EUIStateTransitionUrgency Urgency);
};

// 0x18 (0x40 - 0x28)
// Class UIChart.UIStateChartManagerEntry
class UUIStateChartManagerEntry : public UObject
{
public:
	class UUIStateChartRegion*                   MainRegion;                                        // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIStateChartManagerPlayer*            ManagerPlayer;                                     // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIStateChartResourceCollection*       StateChartResources;                               // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUIStateChartManagerEntry* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class UIChart.UIStateChartManagerPlayer
class UUIStateChartManagerPlayer : public UObject
{
public:
	TMap<int32, class UUIStateChartManagerEntry*> ActiveChartEntries;                                // 0x28(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<int32, class UUIStateChartManagerEntry*> InactiveChartEntries;                              // 0x78(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FUIStateChartManagerChartDeactivationRequest> DeactivationRequests;                              // 0xC8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_271F[0x10];                                    // Fixing Size After Last Property 
	class UUIStateChartManager*                  Manager;                                           // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIStateChartResourceCollection*       PlayerResources;                                   // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUIStateChartManagerPlayer* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class UIChart.UIStateBacktrackStep
class UUIStateBacktrackStep : public UObject
{
public:
	struct FGameplayTag                          TransitionTag;                                     // 0x28(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2723[0x4];                                     // Fixing Size After Last Property 
	class UUIState*                              ReturnState;                                       // 0x30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIState*                              AvailableState;                                    // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUIStateChartContextChangeSet         ReverseContextChanges;                             // 0x40(0x50)(NativeAccessSpecifierPublic)
	TArray<class UUIStateBacktrackStep*>         AvailablePaths;                                    // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUIStateBacktrackStep* GetDefaultObj();

};

// 0xC0 (0xE8 - 0x28)
// Class UIChart.UIStateChartRegion
class UUIStateChartRegion : public UObject
{
public:
	class UUIStateChartManagerEntry*             ManagerEntry;                                      // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIState*                              RootState;                                         // 0x30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIState*                              ParentState;                                       // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UUIStateChartRegion*>           ParallelRegions;                                   // 0x40(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, class UUIState*>   TaggedStates;                                      // 0x50(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UUIState*                              ActiveLeafState;                                   // 0xA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIStateChartTransitionOperation*      ActiveTransitionOperation;                         // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUIStateChartTransitionOperation*      QueuedTransitionOperation;                         // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UUIStateBacktrackStep*>         AvailableBacktrackPaths;                           // 0xB8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UUIStateBacktrackStep*                 ActiveTransitionBacktrackStep;                     // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ChartName;                                         // 0xD0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_272D[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIStateChartRegion* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class UIChart.UIStateChartResourceCollection
class UUIStateChartResourceCollection : public UObject
{
public:
	TMap<class UClass*, class UObject*>          ResourcesByClass;                                  // 0x28(0x50)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUIStateChartResourceCollection* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UIChart.UIStateChartTransition
class UUIStateChartTransition : public UObject
{
public:
	class UUIState*                              Source;                                            // 0x28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIState*                              Target;                                            // 0x30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_273B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIStateChartTransition* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class UIChart.UIStateChartTransitionOperation
class UUIStateChartTransitionOperation : public UObject
{
public:
	uint8                                        Pad_273E[0x8];                                     // Fixing Size After Last Property 
	class UUIStateChartRegion*                   Region;                                            // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UUIState*                              OriginState;                                       // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UUIState*                              EndState;                                          // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UUIState*                              TransitionTargetState;                             // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2743[0x8];                                     // Fixing Size After Last Property 
	TArray<class UUIState*>                      KnownStatesToActivate;                             // 0x58(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UUIState*>                      StatesToDeactivate;                                // 0x68(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UUIStateChartTransitionOperationGroup* Group;                                             // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUIStateRelay                         StateRelay;                                        // 0x80(0x28)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2745[0x8];                                     // Fixing Size After Last Property 
	class UUIState*                              BacktrackReturnState;                              // 0xB0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2746[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIStateChartTransitionOperation* GetDefaultObj();

};

// 0x180 (0x1A8 - 0x28)
// Class UIChart.UIStateChartTransitionOperationGroup
class UUIStateChartTransitionOperationGroup : public UObject
{
public:
	TSet<class UUIStateChartTransitionOperation*> Operations;                                        // 0x28(0x50)(Transient, NativeAccessSpecifierPrivate)
	TSet<class UUIStateChartTransitionOperation*> OperationsReadyForContextUpdate;                   // 0x78(0x50)(Transient, NativeAccessSpecifierPrivate)
	class UUIStateChartContext*                  Context;                                           // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocalPlayer*                          LocalPlayer;                                       // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUIStateChartContextChangeSet         ContextChanges;                                    // 0xD8(0x50)(Transient, NativeAccessSpecifierPrivate)
	struct FUIStateChartContextChangeSet         ReverseContextChanges;                             // 0x128(0x50)(Transient, NativeAccessSpecifierPrivate)
	struct FUIStateChartTransitionOperationParameters Parameters;                                        // 0x178(0x28)(Transient, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          TransitionEventTag;                                // 0x1A0(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2748[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUIStateChartTransitionOperationGroup* GetDefaultObj();

};

}


