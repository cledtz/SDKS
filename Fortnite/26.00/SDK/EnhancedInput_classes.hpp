#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x98 - 0x28)
// Class EnhancedInput.EnhancedPlayerMappableKeyProfile
class UEnhancedPlayerMappableKeyProfile : public UObject
{
public:
	struct FGameplayTag                          ProfileIdentifier;                                 // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPlatformUserId                       OwningUserId;                                      // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, SaveGame, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FKeyMappingRow>     PlayerMappedKeys;                                  // 0x48(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEnhancedPlayerMappableKeyProfile* GetDefaultObj();

	class FString ToString();
	void SetDisplayName(class FText& NewDisplayName);
	void ResetToDefault();
	void ResetMappingToDefault(class FName InMappingName);
	int32 QueryPlayerMappedKeys(struct FPlayerMappableKeyQueryOptions& Options, TArray<struct FKey>* OutKeys);
	void K2_FindKeyMapping(struct FPlayerKeyMapping* OutKeyMapping, struct FMapPlayerKeyArgs& InArgs);
	struct FGameplayTag GetProfileIdentifer();
	class FText GetProfileDisplayName();
	TMap<class FName, struct FKeyMappingRow> GetPlayerMappingRows();
	int32 GetMappingNamesForKey(struct FKey& InKey, TArray<class FName>* OutMappingNames);
	int32 GetMappedKeysInRow(class FName MappingName, TArray<struct FKey>* OutKeys);
	void DumpProfileToLog();
	bool DoesMappingPassQueryOptions(struct FPlayerKeyMapping& PlayerMapping, struct FPlayerMappableKeyQueryOptions& Options);
};

// 0xF8 (0x120 - 0x28)
// Class EnhancedInput.EnhancedInputUserSettings
class UEnhancedInputUserSettings : public USaveGame
{
public:
	uint8                                        Pad_1609[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnSettingsChanged;                                 // 0x30(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSettingsApplied;                                 // 0x40(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_160D[0x20];                                    // Fixing Size After Last Property 
	struct FGameplayTag                          CurrentProfileIdentifier;                          // 0x70(0x4)(SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_160E[0x4];                                     // Fixing Size After Last Property 
	TMap<struct FGameplayTag, class UEnhancedPlayerMappableKeyProfile*> SavedKeyProfiles;                                  // 0x78(0x50)(SaveGame, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ULocalPlayer>           OwningLocalPlayer;                                 // 0xC8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSet<class UInputMappingContext*>            RegisteredMappingContexts;                         // 0xD0(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEnhancedInputUserSettings* GetDefaultObj();

	bool UnregisterInputMappingContexts(TSet<class UInputMappingContext*>& MappingContexts);
	bool UnregisterInputMappingContext(class UInputMappingContext* IMC);
	void UnMapPlayerKey(struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason);
	bool SetKeyProfile(struct FGameplayTag& InProfileId);
	void SaveSettings();
	void ResetKeyProfileToDefault(struct FGameplayTag& ProfileId, struct FGameplayTagContainer* FailureReason);
	void ResetAllPlayerKeysInRow(struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason);
	bool RegisterInputMappingContexts(TSet<class UInputMappingContext*>& MappingContexts);
	bool RegisterInputMappingContext(class UInputMappingContext* IMC);
	void MapPlayerKey(struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason);
	void MappingContextRegisteredWithSettings__DelegateSignature(class UInputMappingContext* IMC);
	void MappableKeyProfileChanged__DelegateSignature(class UEnhancedPlayerMappableKeyProfile* NewProfile);
	bool IsMappingContextRegistered(class UInputMappingContext* IMC);
	class UEnhancedPlayerMappableKeyProfile* GetKeyProfileWithIdentifier(struct FGameplayTag& ProfileId);
	struct FGameplayTag GetCurrentKeyProfileIdentifier();
	class UEnhancedPlayerMappableKeyProfile* GetCurrentKeyProfile();
	TSet<struct FPlayerKeyMapping> FindMappingsInRow(class FName MappingName);
	void EnhancedInputUserSettingsChanged__DelegateSignature(class UEnhancedInputUserSettings* Settings);
	void EnhancedInputUserSettingsApplied__DelegateSignature();
	class UEnhancedPlayerMappableKeyProfile* CreateNewKeyProfile(struct FPlayerMappableKeyProfileCreationArgs& InArgs);
	void AsyncSaveSettings();
	void ApplySettings();
};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionDelegateBinding
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;                       // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnhancedInputActionDelegateBinding* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionValueBinding
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings;                          // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnhancedInputActionValueBinding* GetDefaultObj();

};

// 0x38 (0x160 - 0x128)
// Class EnhancedInput.EnhancedInputComponent
class UEnhancedInputComponent : public UInputComponent
{
public:
	uint8                                        Pad_1627[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEnhancedInputComponent* GetDefaultObj();

	struct FInputActionValue GetBoundActionValue(class UInputAction* Action);
};

// 0x98 (0xC8 - 0x30)
// Class EnhancedInput.EnhancedInputDeveloperSettings
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
public:
	TArray<struct FDefaultContextSetting>        DefaultMappingContexts;                            // 0x30(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FDefaultContextSetting>        DefaultWorldSubsystemMappingContexts;              // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FPerPlatformSettings                  PlatformSettings;                                  // 0x50(0x10)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UEnhancedInputUserSettings> UserSettingsClass;                                 // 0x60(0x20)(Edit, Config, NoClear, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UEnhancedPlayerMappableKeyProfile> DefaultPlayerMappableKeyProfileClass;              // 0x80(0x20)(Edit, Config, NoClear, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UEnhancedPlayerInput>    DefaultWorldInputClass;                            // 0xA0(0x20)(Edit, Config, NoClear, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSendTriggeredEventsWhenInputIsFlushed : 1;        // Mask: 0x1, PropSize: 0x10xC0(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableUserSettings : 1;                           // Mask: 0x2, PropSize: 0x10xC0(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableDefaultMappingContexts : 1;                 // Mask: 0x4, PropSize: 0x10xC0(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldOnlyTriggerLastActionInChord : 1;           // Mask: 0x8, PropSize: 0x10xC0(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLogOnDeprecatedConfigUsed : 1;                    // Mask: 0x10, PropSize: 0x10xC0(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableWorldSubsystem : 1;                         // Mask: 0x20, PropSize: 0x10xC0(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldLogAllWorldSubsystemInputs : 1;             // Mask: 0x40, PropSize: 0x10xC0(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162A[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEnhancedInputDeveloperSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.EnhancedInputLibrary
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEnhancedInputLibrary* GetDefaultObj();

	void RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);
	struct FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, enum class EInputActionValueType ValueType);
	struct FInputActionValue MakeInputActionValue(double X, double Y, double Z, struct FInputActionValue& MatchValueType);
	bool IsActionKeyMappingPlayerMappable(struct FEnhancedActionKeyMapping& ActionKeyMapping);
	struct FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot();
	struct FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot();
	class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(struct FEnhancedActionKeyMapping& ActionKeyMapping);
	class FName GetMappingName(struct FEnhancedActionKeyMapping& ActionKeyMapping);
	struct FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot();
	struct FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot();
	struct FInputActionValue GetBoundActionValue(class UActor* Actor, class UInputAction* Action);
	class FString Conv_InputActionValueToString(const struct FInputActionValue& ActionValue);
	bool Conv_InputActionValueToBool(const struct FInputActionValue& InValue);
	struct FVector Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue);
	struct FVector2D Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue);
	double Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue);
	void BreakInputActionValue(const struct FInputActionValue& InActionValue, double* X, double* Y, double* Z, enum class EInputActionValueType* Type);
};

// 0x50 (0x78 - 0x28)
// Class EnhancedInput.EnhancedInputPlatformData
class UEnhancedInputPlatformData : public UObject
{
public:
	TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;                           // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEnhancedInputPlatformData* GetDefaultObj();

	class UInputMappingContext* GetContextRedirect(class UInputMappingContext* InContext);
};

// 0x28 (0x68 - 0x40)
// Class EnhancedInput.EnhancedInputPlatformSettings
class UEnhancedInputPlatformSettings : public UPlatformSettings
{
public:
	TArray<TSoftClassPtr<class UEnhancedInputPlatformData>> InputData;                                         // 0x40(0x10)(Edit, ZeroConstructor, Config, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UEnhancedInputPlatformData>> InputDataClasses;                                  // 0x50(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bShouldLogMappingContextRedirects;                 // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1677[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEnhancedInputPlatformSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.EnhancedInputSubsystemInterface
class UEnhancedInputSubsystemInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UEnhancedInputSubsystemInterface* GetDefaultObj();

	void StopContinuousInputInjectionForPlayerMapping(class FName MappingName);
	void StopContinuousInputInjectionForAction(class UInputAction* Action);
	void StartContinuousInputInjectionForPlayerMapping(class FName MappingName, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers);
	void StartContinuousInputInjectionForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers);
	void RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType);
	void RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options);
	void RemoveMappingContext(class UInputMappingContext* MappingContext, struct FModifyContextOptions& Options);
	int32 RemoveAllPlayerMappedKeysForMapping(class FName MappingName, struct FModifyContextOptions& Options);
	void RemoveAllPlayerMappedKeys(struct FModifyContextOptions& Options);
	enum class EMappingQueryResult QueryMapKeyInContextSet(TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues);
	enum class EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues);
	TArray<struct FKey> QueryKeysMappedToAction(class UInputAction* Action);
	void OnUserSettingsChanged(class UEnhancedInputUserSettings* Settings);
	void OnUserKeyProfileChanged(class UEnhancedPlayerMappableKeyProfile* InNewProfile);
	int32 K2_RemovePlayerMappedKeyInSlot(class FName MappingName, struct FPlayerMappableKeySlot& KeySlot, struct FModifyContextOptions& Options);
	struct FKey K2_GetPlayerMappedKeyInSlot(class FName MappingName, struct FPlayerMappableKeySlot& KeySlot);
	int32 K2_AddPlayerMappedKeyInSlot(class FName MappingName, const struct FKey& NewKey, struct FPlayerMappableKeySlot& KeySlot, struct FModifyContextOptions& Options);
	void InjectInputVectorForPlayerMapping(class FName MappingName, const struct FVector& Value, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers);
	void InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers);
	void InjectInputForPlayerMapping(class FName MappingName, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers);
	void InjectInputForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers);
	bool HasMappingContext(class UInputMappingContext* MappingContext, int32* OutFoundPriority);
	class UEnhancedInputUserSettings* GetUserSettings();
	TArray<struct FKey> GetAllPlayerMappedKeys(class FName MappingName);
	TArray<struct FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();
	void ClearAllMappings();
	void AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options);
	void AddMappingContext(class UInputMappingContext* MappingContext, int32 Priority, struct FModifyContextOptions& Options);
};

// 0x1B8 (0x1E8 - 0x30)
// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_16E9[0x1A0];                                   // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            ControlMappingsRebuiltDelegate;                    // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UEnhancedInputUserSettings*            UserSettings;                                      // 0x1E0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEnhancedInputLocalPlayerSubsystem* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class EnhancedInput.EnhancedInputWorldSubsystem
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_16F3[0x1A0];                                   // Fixing Size After Last Property 
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x1D0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16F4[0x10];                                    // Fixing Size After Last Property 
	TArray<TWeakObjectPtr<class UInputComponent>> CurrentInputStack;                                 // 0x1E8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEnhancedInputWorldSubsystem* GetDefaultObj();

	bool RemoveActorInputComponent(class UActor* Actor);
	void AddActorInputComponent(class UActor* Actor);
};

// 0x350 (0x7E8 - 0x498)
// Class EnhancedInput.EnhancedPlayerInput
class UEnhancedPlayerInput : public UPlayerInput
{
public:
	TMap<class UInputAction*, struct FKeyConsumptionOptions> KeyConsumptionData;                                // 0x498(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<class UInputMappingContext*, int32>     AppliedInputContexts;                              // 0x4E8(0x50)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FEnhancedActionKeyMapping>     EnhancedActionMappings;                            // 0x538(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16FB[0x50];                                    // Fixing Size After Last Property 
	TMap<class UInputAction*, struct FInputActionInstance> ActionInstanceData;                                // 0x598(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16FC[0xA0];                                    // Fixing Size After Last Property 
	TMap<struct FKey, struct FVector>            KeysPressedThisTick;                               // 0x688(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<class UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick;                            // 0x6D8(0x50)(Transient, NativeAccessSpecifierPrivate)
	TSet<class UInputAction*>                    LastInjectedActions;                               // 0x728(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16FE[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEnhancedPlayerInput* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class EnhancedInput.InputAction
class UInputAction : public UDataAsset
{
public:
	class FText                                  ActionDescription;                                 // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bTriggerWhenPaused;                                // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsumeInput;                                     // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsumesActionAndAxisMappings;                    // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReserveAllMappings;                               // 0x4B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriggerEventsThatConsumeLegacyKeys;                // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionValueType             ValueType;                                         // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionAccumulationBehavior  AccumulationBehavior;                              // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1705[0x6];                                     // Fixing Size After Last Property 
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInputAction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputDebugKeyDelegateBinding
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;                     // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputDebugKeyDelegateBinding* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class EnhancedInput.InputMappingContext
class UInputMappingContext : public UDataAsset
{
public:
	TArray<struct FEnhancedActionKeyMapping>     Mappings;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class FText                                  ContextDescription;                                // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputMappingContext* GetDefaultObj();

	void UnmapKey(class UInputAction* Action, const struct FKey& Key);
	void UnmapAllKeysFromAction(class UInputAction* Action);
	void UnmapAll();
	void UnmapAction(class UInputAction* Action);
	struct FEnhancedActionKeyMapping MapKey(class UInputAction* Action, const struct FKey& ToKey);
};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifier
class UInputModifier : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInputModifier* GetDefaultObj();

	struct FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime);
	struct FLinearColor GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue);
};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputModifierDeadZone
class UInputModifierDeadZone : public UInputModifier
{
public:
	float                                        LowerThreshold;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperThreshold;                                    // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDeadZoneType                     Type;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1728[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputModifierDeadZone* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierScalar
class UInputModifierScalar : public UInputModifier
{
public:
	struct FVector                               Scalar;                                            // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputModifierScalar* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifierScaleByDeltaTime
class UInputModifierScaleByDeltaTime : public UInputModifier
{
public:

	static class UClass* StaticClass();
	static class UInputModifierScaleByDeltaTime* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierNegate
class UInputModifierNegate : public UInputModifier
{
public:
	bool                                         bX;                                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bY;                                                // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZ;                                                // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172E[0x5];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputModifierNegate* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class EnhancedInput.InputModifierSmooth
class UInputModifierSmooth : public UInputModifier
{
public:
	uint8                                        Pad_1732[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputModifierSmooth* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveExponential
class UInputModifierResponseCurveExponential : public UInputModifier
{
public:
	struct FVector                               CurveExponent;                                     // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveExponential* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveUser
class UInputModifierResponseCurveUser : public UInputModifier
{
public:
	class UCurveFloat*                           ResponseX;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ResponseY;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ResponseZ;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveUser* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierFOVScaling
class UInputModifierFOVScaling : public UInputModifier
{
public:
	float                                        FOVScale;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFOVScalingType                   FOVScalingType;                                    // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173D[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputModifierFOVScaling* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifierToWorldSpace
class UInputModifierToWorldSpace : public UInputModifier
{
public:

	static class UClass* StaticClass();
	static class UInputModifierToWorldSpace* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierSwizzleAxis
class UInputModifierSwizzleAxis : public UInputModifier
{
public:
	enum class EInputAxisSwizzle                 Order;                                             // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1743[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputModifierSwizzleAxis* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class EnhancedInput.InputTrigger
class UInputTrigger : public UObject
{
public:
	float                                        ActuationThreshold;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAlwaysTick;                                 // 0x2C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1754[0x3];                                     // Fixing Size After Last Property 
	struct FInputActionValue                     LastValue;                                         // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputTrigger* GetDefaultObj();

	enum class ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime);
	bool IsActuated(struct FInputActionValue& ForValue);
	enum class ETriggerType GetTriggerType();
};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerTimedBase
class UInputTriggerTimedBase : public UInputTrigger
{
public:
	float                                        HeldDuration;                                      // 0x50(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAffectedByTimeDilation;                           // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1757[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputTriggerTimedBase* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class EnhancedInput.InputTriggerDown
class UInputTriggerDown : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerDown* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class EnhancedInput.InputTriggerPressed
class UInputTriggerPressed : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerPressed* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class EnhancedInput.InputTriggerReleased
class UInputTriggerReleased : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerReleased* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class EnhancedInput.InputTriggerHold
class UInputTriggerHold : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_175C[0x4];                                     // Fixing Size After Last Property 
	float                                        HoldTimeThreshold;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOneShot;                                        // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175D[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputTriggerHold* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerHoldAndRelease
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
public:
	float                                        HoldTimeThreshold;                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175E[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputTriggerHoldAndRelease* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerTap
class UInputTriggerTap : public UInputTriggerTimedBase
{
public:
	float                                        TapReleaseTimeThreshold;                           // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175F[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInputTriggerTap* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class EnhancedInput.InputTriggerPulse
class UInputTriggerPulse : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_1760[0x4];                                     // Fixing Size After Last Property 
	bool                                         bTriggerOnStart;                                   // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1762[0x3];                                     // Fixing Size After Last Property 
	float                                        Interval;                                          // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriggerLimit;                                      // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputTriggerPulse* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerChordAction
class UInputTriggerChordAction : public UInputTrigger
{
public:
	class UInputAction*                          ChordAction;                                       // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputTriggerChordAction* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class EnhancedInput.InputTriggerChordBlocker
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerChordBlocker* GetDefaultObj();

};

// 0x28 (0x78 - 0x50)
// Class EnhancedInput.InputTriggerCombo
class UInputTriggerCombo : public UInputTrigger
{
public:
	int32                                        CurrentComboStepIndex;                             // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentTimeBetweenComboSteps;                      // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FInputComboStepData>           ComboActions;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputCancelAction>            InputCancelActions;                                // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputTriggerCombo* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class EnhancedInput.PlayerMappableInputConfig
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
public:
	class FName                                  ConfigName;                                        // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1777[0x4];                                     // Fixing Size After Last Property 
	class FText                                  ConfigDisplayName;                                 // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsDeprecated;                                     // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_177B[0x7];                                     // Fixing Size After Last Property 
	class UObject*                               MetaData;                                          // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UInputMappingContext*, int32>     Contexts;                                          // 0x60(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlayerMappableInputConfig* GetDefaultObj();

	void ResetToDefault();
	bool IsDeprecated();
	TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys();
	class UObject* GetMetadata();
	TMap<class UInputMappingContext*, int32> GetMappingContexts();
	struct FEnhancedActionKeyMapping GetMappingByName(class FName MappingName);
	TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(class UInputAction* InAction);
	class FText GetDisplayName();
	class FName GetConfigName();
};

// 0x60 (0x88 - 0x28)
// Class EnhancedInput.PlayerMappableKeySettings
class UPlayerMappableKeySettings : public UObject
{
public:
	class UObject*                               MetaData;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177E[0x4];                                     // Fixing Size After Last Property 
	class FText                                  DisplayName;                                       // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DisplayCategory;                                   // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SupportedKeyProfiles;                              // 0x68(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPlayerMappableKeySettings* GetDefaultObj();

};

}


