#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2B0 - 0x280)
// Class AutoSettingsInput.InputLabel
class UInputLabel : public UUserWidget
{
public:
	int32                                        MappingGroup;                                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x284(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerKeyGroup;                                // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75[0x3];                                       // Fixing Size After Last Property
	struct FGameplayTagContainer                 IconTags;                                          // 0x290(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputLabel");
		return Clss;
	}

	void UpdateLabel();
	void MappingsChanged(class UPlayerController* Player);
};

// 0x68 (0x318 - 0x2B0)
// Class AutoSettingsInput.ActionLabel
class UActionLabel : public UInputLabel
{
public:
	class FName                                  ActionName;                                        // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UKeyLabel>                 KeyLabelWidgetClass;                               // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWidget>                   KeySeparatorWidgetClass;                           // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                          KeyContainer;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKeyLabel*                             PrimaryKeyLabel;                                   // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             ShiftLabel;                                        // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             CtrlLabel;                                         // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             AltLabel;                                          // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             CmdLabel;                                          // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               ShiftSeparator;                                    // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               CtrlSeparator;                                     // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               AltSeparator;                                      // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               CmdSeparator;                                      // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActionLabel");
		return Clss;
	}

};

// 0x38 (0x2B8 - 0x280)
// Class AutoSettingsInput.InputMapping
class UInputMapping : public UUserWidget
{
public:
	int32                                        MappingGroup;                                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          KeyGroup;                                          // 0x284(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7D[0x4];                                       // Fixing Size After Last Property
	struct FGameplayTagContainer                 IconTags;                                          // 0x290(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UBindCaptureButton*                    BindCaptureButton;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputMapping");
		return Clss;
	}

	void UpdateMapping();
	void UpdateLabel();
	void ChordCaptured(const struct FCapturedInput& CapturedInput);
	void BindChord(const struct FCapturedInput& CapturedInput);
};

// 0x10 (0x2C8 - 0x2B8)
// Class AutoSettingsInput.ActionMapping
class UActionMapping : public UInputMapping
{
public:
	class FName                                  ActionName;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActionLabel*                          ActionLabel;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActionMapping");
		return Clss;
	}

};

// 0x150 (0x188 - 0x38)
// Class AutoSettingsInput.AutoSettingsInputConfig
class UAutoSettingsInputConfig : public UDeveloperSettings
{
public:
	uint8                                        Pad_7F[0x8];                                       // Fixing Size After Last Property
	bool                                         bAutoInitializePlayerInputOverrides;               // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowModifierKeys;                                 // 0x41(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80[0x6];                                       // Fixing Size After Last Property
	class FText                                  ShiftModifierOverrideText;                         // 0x48(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  CtrlModifierOverrideText;                          // 0x60(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  AltModifierOverrideText;                           // 0x78(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  CmdModifierOverrideText;                           // 0x90(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FInputMappingPreset>           InputPresets;                                      // 0xA8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         AllowMultipleBindingsPerKey;                       // 0xB8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84[0x7];                                       // Fixing Size After Last Property
	TArray<struct FMappingGroupLink>             MappingGroupLinks;                                 // 0xC0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          PreservedActions;                                  // 0xD0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          PreservedAxes;                                     // 0xE0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyIconSet>                   KeyIconSets;                                       // 0xF0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyFriendlyName>              KeyFriendlyNames;                                  // 0x100(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyGroup>                     KeyGroups;                                         // 0x110(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          AllowedKeys;                                       // 0x120(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          DisallowedKeys;                                    // 0x130(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          BindingEscapeKeys;                                 // 0x140(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                        MouseMoveCaptureDistance;                          // 0x150(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88[0x4];                                       // Fixing Size After Last Property
	TArray<struct FAxisAssociation>              AxisAssociations;                                  // 0x158(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          BlacklistedActions;                                // 0x168(0x10)(ZeroConstructor, Config, Deprecated, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          BlacklistedAxes;                                   // 0x178(0x10)(ZeroConstructor, Config, Deprecated, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutoSettingsInputConfig");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AutoSettingsInput.AutoSettingsInputConfigInterface
class UAutoSettingsInputConfigInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutoSettingsInputConfigInterface");
		return Clss;
	}

};

// 0x0 (0x188 - 0x188)
// Class AutoSettingsInput.AutoSettingsInputProjectConfig
class UAutoSettingsInputProjectConfig : public UAutoSettingsInputConfig
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutoSettingsInputProjectConfig");
		return Clss;
	}

	TArray<class UTexture*> LoadKeyIcons(const struct FGameplayTagContainer& KeyIconTags);
	struct FGameplayTag GetKeyGroupStatic(const struct FKey& Key);
	class FText GetKeyFriendlyNameStatic(const struct FKey& Key);
};

// 0x8 (0x38 - 0x30)
// Class AutoSettingsInput.AutoSettingsInputSubsystem
class UAutoSettingsInputSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_9E[0x8];                                       // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutoSettingsInputSubsystem");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class AutoSettingsInput.AutoSettingsInputValidationSubsystem
class UAutoSettingsInputValidationSubsystem : public UGameInstanceSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutoSettingsInputValidationSubsystem");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AutoSettingsInput.AutoSettingsPlayer
class UAutoSettingsPlayer : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutoSettingsPlayer");
		return Clss;
	}

	void SaveInputMappings(const struct FPlayerInputMappings& InputMappings);
	class FString GetUniquePlayerIdentifier();
	bool GetInputMappings(struct FPlayerInputMappings* InputMappings);
	struct FInputMappingPreset GetDefaultInputMappingPreset();
};

// 0x18 (0x2C8 - 0x2B0)
// Class AutoSettingsInput.AxisLabel
class UAxisLabel : public UInputLabel
{
public:
	class FName                                  AxisName;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5[0x4];                                       // Fixing Size After Last Property
	class UKeyLabel*                             KeyLabel;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AxisLabel");
		return Clss;
	}

};

// 0x18 (0x2D0 - 0x2B8)
// Class AutoSettingsInput.AxisMapping
class UAxisMapping : public UInputMapping
{
public:
	class FName                                  AxisName;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA[0x4];                                       // Fixing Size After Last Property
	class UAxisLabel*                            AxisLabel;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AxisMapping");
		return Clss;
	}

};

// 0x30 (0x2B0 - 0x280)
// Class AutoSettingsInput.BindCaptureButton
class UBindCaptureButton : public UUserWidget
{
public:
	struct FGameplayTag                          KeyGroup;                                          // 0x280(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UBindCapturePrompt>        BindCapturePromptClass;                            // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CapturePromptZOrder;                               // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8[0x14];                                      // Fixing Size After Last Property
	class UBindCapturePrompt*                    Prompt;                                            // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BindCaptureButton");
		return Clss;
	}

	class UBindCapturePrompt* StartCapture();
	void InitializePrompt(class UBindCapturePrompt* PromptWidget);
	void ChordCaptured(const struct FCapturedInput& CapturedInput);
};

// 0x68 (0x2E8 - 0x280)
// Class AutoSettingsInput.BindCapturePrompt
class UBindCapturePrompt : public UUserWidget
{
public:
	bool                                         bIgnoreGameViewportInputWhileCapturing;            // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictKeyGroup;                                 // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBindingCaptureMode               CaptureMode;                                       // 0x282(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2[0x1];                                       // Fixing Size After Last Property
	struct FGameplayTag                          KeyGroup;                                          // 0x284(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4[0x4];                                       // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnChordCaptured;                                   // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChordRejected;                                   // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCapturePromptClosed;                             // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          KeysDown;                                          // 0x2C0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         PreviousIgnoreInput;                               // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7[0x7];                                       // Fixing Size After Last Property
	struct FVector2D                             AccumulatedMouseDelta;                             // 0x2D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BindCapturePrompt");
		return Clss;
	}

	bool IsKeyAllowed(const struct FKey& PrimaryKey);
	struct FGameplayTag GetKeyGroup();
	void Cancel();
};

// 0x30 (0x58 - 0x28)
// Class AutoSettingsInput.GlobalKeyIconTagManager
class UGlobalKeyIconTagManager : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnGlobalKeyIconTagsModified;                       // 0x28(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GlobalKeyIconTags;                                 // 0x38(0x20)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GlobalKeyIconTagManager");
		return Clss;
	}

	void SetGlobalKeyIconTags(const struct FGameplayTagContainer& InGlobalIconTags);
	class UTexture* GetIconForKey(const struct FKey& InKey, const struct FGameplayTagContainer& IconTags, float AxisScale);
};

// 0x30 (0x60 - 0x30)
// Class AutoSettingsInput.InputMappingManager
class UInputMappingManager : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnMappingsChanged;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FPlayerInputMappings>          PlayerInputOverrides;                              // 0x40(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class UPlayerController*>             RegisteredPlayerControllers;                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputMappingManager");
		return Clss;
	}

	void SetPlayerKeyGroupStatic(class UPlayerController* Player, const struct FGameplayTag& KeyGroup);
	void SetPlayerInputPresetStatic(class UPlayerController* Player, const struct FInputMappingPreset& Preset);
	void SetPlayerInputPresetByTag(class UPlayerController* Player, const struct FGameplayTag& PresetTag);
	void OnRegisteredPlayerControllerDestroyed(class UActor* DestroyedActor);
	bool InitializePlayerInputOverridesStatic(class UPlayerController* Player);
	void GetPlayerMappingsByKey(class UPlayerController* Player, const struct FKey& Key, TArray<struct FInputActionKeyMapping>* Actions, TArray<struct FInputAxisKeyMapping>* Axes);
	struct FPlayerInputMappings GetPlayerInputMappingsStatic(class UPlayerController* Player);
	struct FInputAxisKeyMapping GetPlayerAxisMappingStatic(class UPlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup);
	TArray<struct FInputAxisKeyMapping> GetPlayerAxisMappings(class UPlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
	struct FInputAxisKeyMapping GetPlayerAxisMapping(class UPlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
	struct FInputActionKeyMapping GetPlayerActionMappingStatic(class UPlayerController* Player, class FName ActionName, int32 MappingGroup);
	TArray<struct FInputActionKeyMapping> GetPlayerActionMappings(class UPlayerController* Player, class FName ActionName, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
	struct FInputActionKeyMapping GetPlayerActionMapping(class UPlayerController* Player, class FName ActionName, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
	TArray<struct FInputMappingPreset> GetDefaultInputPresets();
	void AddPlayerAxisOverrideStatic(class UPlayerController* Player, struct FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
	void AddPlayerAxisOverride(class UPlayerController* Player, struct FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
	void AddPlayerActionOverrideStatic(class UPlayerController* Player, struct FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
	void AddPlayerActionOverride(class UPlayerController* Player, struct FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
};

// 0x70 (0x2F0 - 0x280)
// Class AutoSettingsInput.KeyLabel
class UKeyLabel : public UUserWidget
{
public:
	class FText                                  KeyInvalidText;                                    // 0x280(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LabelOverride;                                     // 0x298(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x2B0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC[0x4];                                      // Fixing Size After Last Property
	struct FGameplayTagContainer                 IconTags;                                          // 0x2D0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KeyLabel");
		return Clss;
	}

	void UpdateKeyLabel();
	void OnGlobalKeyIconTagsModified();
	bool HasValidKey();
	bool HasIcon();
	enum class ESlateVisibility GetIconVisibility();
	struct FSlateBrush GetIconBrush();
	class UTexture* GetIcon();
	enum class ESlateVisibility GetDisplayNameVisibility();
	class FText GetDisplayName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
