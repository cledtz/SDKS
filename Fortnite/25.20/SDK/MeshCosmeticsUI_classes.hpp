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

// 0x50 (0x80 - 0x30)
// Class MeshCosmeticsUI.FortVariantSprayCustomizerConfig
class UFortVariantSprayCustomizerConfig : public UDataAsset
{
public:
	TMap<struct FGameplayTag, struct FFortVariantSprayCustomizerCosmeticOptions> SprayCustomizerOptions;                            // 0x30(0x50)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantSprayCustomizerConfig");
		return Clss;
	}

};

// 0xE0 (0x488 - 0x3A8)
// Class MeshCosmeticsUI.FortVariantRedirectorTile
class UFortVariantRedirectorTile : public UFortVariantEditorWidgetBase
{
public:
	class UDynamicEntryBox*                      EntryBox_VariantOptions;                           // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_VariantName;                                  // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortVariantSprayCustomizer> SprayCustomizerClass;                              // 0x3B8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVariantSprayCustomizerConfig*     SprayCustomizerConfig;                             // 0x3E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ClearAllSlotsInputAction;                          // 0x3E8(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   RandomizeSpraysInputAction;                        // 0x3F8(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UAthenaCosmeticItemDefinition> ItemDefinition;                                    // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortVariantRedirectorTileLoadedEmoteToRandomize> LoadedEmotesToRandomize;                           // 0x410(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7CF0[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantRedirectorTile");
		return Clss;
	}

	class UWidget* HandleBoundaryNavigation(enum class EUINavigation InNavigation);
};

// 0x30 (0x14A0 - 0x1470)
// Class MeshCosmeticsUI.FortVariantRedirectorTileButton
class UFortVariantRedirectorTileButton : public UCommonButtonBase
{
public:
	class UFortLazyImage*                        LazyImage_TileIcon;                                // 0x1470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7CF1[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantRedirectorTileButton");
		return Clss;
	}

};

// 0x160 (0x870 - 0x710)
// Class MeshCosmeticsUI.FortVariantSprayCustomizer
class UFortVariantSprayCustomizer : public UFortItemPreviewScreen
{
public:
	class UCommonButtonBase*                     Button_Back;                                       // 0x710(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Confirm;                                    // 0x718(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_HideArchivedItems;                          // 0x720(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ShowArchivedItems;                          // 0x728(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_ArchivedItemsButtons;                       // 0x730(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_SpraysTab;                                  // 0x738(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_SettingsTab;                                // 0x740(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_TouchClose;                                 // 0x748(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   ActionWidget_TabLeft;                              // 0x750(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   ActionWidget_TabRight;                             // 0x758(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidgetSwitcher*      Switcher_Tabs;                                     // 0x760(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_Sprays;                                     // 0x768(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_Settings;                                   // 0x770(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVariantItemTexturePicker*         TexturePicker_Sprays;                              // 0x778(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVariantSprayCustomizerSetting*    Setting_Saturation;                                // 0x780(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVariantSprayCustomizerSetting*    Setting_Wear;                                      // 0x788(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVariantSprayCustomizerSetting*    Setting_Scale;                                     // 0x790(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   TabLeftAction;                                     // 0x798(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   TabRightAction;                                    // 0x7A8(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          ItemShopPreviewSceneChangerTag;                    // 0x7B8(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7CF2[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonGroupLegacy*              TabButtonGroup;                                    // 0x7C0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UAthenaCosmeticItemDefinition> ItemDefinition;                                    // 0x7C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCustomizableObjectSprayVariant*   SprayVariant;                                      // 0x7D0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7CF3[0x98];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantSprayCustomizer");
		return Clss;
	}

	void BP_SetVariantEditorMode(bool bIsLockerMode);
	void BP_SetChannelSlotIcon(TSoftObjectPtr<class UObject>& ChannelSlotIcon);
};

// 0x40 (0x2E8 - 0x2A8)
// Class MeshCosmeticsUI.FortVariantSprayCustomizerSetting
class UFortVariantSprayCustomizerSetting : public UUserWidget
{
public:
	class UAnalogSlider*                         Slider_Value;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CommitDelay;                                       // 0x2B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7CF4[0x34];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVariantSprayCustomizerSetting");
		return Clss;
	}

	void HandleSliderValueChanged(float NormalizedValue);
	void BP_OnSetConstraints(struct FFloatRange& Constraints);
	void BP_OnChangeValue(float Value, float NormalizedValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
