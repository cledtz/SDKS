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

// 0x0 (0x2D0 - 0x2D0)
// Class FortniteConversationUI.FortConversationOptionBrief
class UFortConversationOptionBrief : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationOptionBrief");
		return Clss;
	}

	void ConfigureBP(struct FConversationContext& ClientContext, struct FClientConversationOptionEntry& OptionEntry, int32 SelectedIndex);
};

// 0x18 (0x2E8 - 0x2D0)
// Class FortniteConversationUI.FortItemTransactionBrief
class UFortItemTransactionBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_7E16[0x8];                                     // Fixing Size After Last Property..
	class UFortTransactionStrip*                 TransactionStrip_Main;                             // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItem*                             DisplayItem;                                       // 0x2E0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemTransactionBrief");
		return Clss;
	}

	void OnTransactionInfoReceived(class UFortItem* Item);
};

// 0x20 (0x308 - 0x2E8)
// Class FortniteConversationUI.FortApplyAbilityBrief
class UFortApplyAbilityBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  PurchaseServiceText;                               // 0x2E8(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_Display;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortApplyAbilityBrief");
		return Clss;
	}

	void OnUnableToPurchase(enum class EPreventAbilityUseReason Reason);
	void OnAbleToPurchase();
};

// 0x0 (0x2D0 - 0x2D0)
// Class FortniteConversationUI.FortBasicBrief
class UFortBasicBrief : public UFortConversationOptionBrief
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBasicBrief");
		return Clss;
	}

	void OnChoiceTextReceived(class FText& Text);
};

// 0x70 (0x340 - 0x2D0)
// Class FortniteConversationUI.FortBasicItemBrief
class UFortBasicItemBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_7E18[0x8];                                     // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_TitleBar;                                     // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTransactionStrip*                 TransactionStrip_Main;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItem*                             DisplayItem;                                       // 0x2E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;                                    // 0x2F0(0x50)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBasicItemBrief");
		return Clss;
	}

	void OnUpdateDescriptionText(class FText& DescriptionText);
	void OnUnableToUse(class FText& Reason);
	void OnItemInfoReceived(class UFortItem* Item, int32 StackSize);
	void OnAbleToUse(bool bShowWarningMessage);
};

// 0x0 (0x2E8 - 0x2E8)
// Class FortniteConversationUI.FortBuyBrief
class UFortBuyBrief : public UFortItemTransactionBrief
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBuyBrief");
		return Clss;
	}

	void OnPurchaseDataReceived(int32 StackSize, int32 RemainingForSale);
	void OnDisplayUnavailability(enum class ECannotBuyReason CannotBuyReason);
};

// 0xD8 (0x490 - 0x3B8)
// Class FortniteConversationUI.FortConversationMarker
class UFortConversationMarker : public UFortActorIndicatorWidget
{
public:
	uint8                                        Pad_7E1A[0x38];                                    // Fixing Size After Last Property..
	struct FVector                               InitialOffset;                                     // 0x3F0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               ManualOffset;                                      // 0x408(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MessageBubbleDuration;                             // 0x420(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LastTextBubbleDuration;                            // 0x424(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSetCustomInteractionWidgetOnlyWhenNeeded;         // 0x428(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E1B[0x7];                                     // Fixing Size After Last Property..
	class UCommonVisibilitySwitcher*             Switcher_States;                                   // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_PreviewState;                              // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E1C[0x8];                                     // Fixing Size After Last Property..
	class UFortConversationMessageWidget*        ConversationMessage_Main;                          // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E1D[0x8];                                     // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_ParticipantName;                              // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E1E[0x8];                                     // Fixing Size After Last Property..
	class UFortKeybindWidget*                    Keybind_Nameplate;                                 // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                NPCIcon;                                           // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            CustomDialogMarkerIndicatorIcon;                   // 0x478(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            DefaultDialogMarkerIndicatorIcon;                  // 0x480(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E1F[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationMarker");
		return Clss;
	}

	void OnSetIndicatedActor(class AActor* NewIndicatorActor);
	void OnMessageShownOverActor(class AActor* OverActor);
	void OnInteractionRangeChanged(enum class EInteractionRange TargetInteractionRange);
	void OnConversationActorProximityChanged(enum class EInteractionRange TargetInteractionRange, class UFortNonPlayerConversationParticipantComponent* ConversationComponent);
	void OnCanInteract(bool bCanInteract);
};

// 0x0 (0x2A8 - 0x2A8)
// Class FortniteConversationUI.FortConversationMessageWidget
class UFortConversationMessageWidget : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationMessageWidget");
		return Clss;
	}

	void SetPreviewMessage(class FText& MessageToSet);
	void OnPreviewMessageSet(class FText& PreviewText);
	void OnMessageShown();
	void OnMessageHidden();
	void OnMainMessageSet(class FText& NPCName, class FText& MessageBody);
};

// 0xC0 (0x15E0 - 0x1520)
// Class FortniteConversationUI.FortConversationOption
class UFortConversationOption : public UFortRadialPickerEntry
{
public:
	class USoundBase*                            OnOptionConfirmedSound;                            // 0x1520(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            OnOptionHoveredSound;                              // 0x1528(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             Switcher_DisplayAsset;                             // 0x1530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UObject>                DefaultSoftTaskIcon;                               // 0x1538(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class USoundBase>             DefaultConfirmChoiceSound;                         // 0x1560(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class USoundBase>             DefaultHoverChoiceSound;                           // 0x1588(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E20[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationOption");
		return Clss;
	}

	void OnSetupPivotFromRadialInformation(int32 NumElements, int32 ItemIndex);
	void OnSetupFromItemDef(class UFortItem* Item);
	void OnSetupFromDisplayAsset(class UObject* DisplayAsset);
	void OnOptionConfirmed();
	bool IsAvailable();
};

// 0x18 (0x1A8 - 0x190)
// Class FortniteConversationUI.FortConversationOptionsPanel
class UFortConversationOptionsPanel : public UPanelWidget
{
public:
	uint8                                        Pad_7E21[0x10];                                    // Fixing Size After Last Property..
	int32                                        MaxRows;                                           // 0x1A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MiddleColumnWidth;                                 // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationOptionsPanel");
		return Clss;
	}

	class UPanelSlot* AddChildToDynamicPanel(class UWidget* Content);
};

// 0x1D8 (0x5D0 - 0x3F8)
// Class FortniteConversationUI.FortConversationScreen
class UFortConversationScreen : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_7E22[0x18];                                    // Fixing Size After Last Property..
	class UCommonVisibilitySwitcher*             Switcher_Details;                                  // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E23[0x38];                                    // Fixing Size After Last Property..
	class UInputComponent*                       ConversationInputComp;                             // 0x450(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentlySelectedIndex;                            // 0x458(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBlockOptionIntroAnimation;                        // 0x45C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E24[0x3];                                     // Fixing Size After Last Property..
	class FName                                  RadialSelectionMaterialParameterName;              // 0x460(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E25[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayTag>                  TagPriorities;                                     // 0x468(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                  InteractActionNameKBM;                             // 0x478(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ADSInputAction;                                    // 0x47C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractActionNameGamepad;                         // 0x480(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E26[0x4];                                     // Fixing Size After Last Property..
	struct FDataTableRowHandle                   ConfirmBinding;                                    // 0x488(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   MakeSelectionBinding;                              // 0x498(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ADSMouseBinding;                                   // 0x4A8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   CancelActionBinding;                               // 0x4B8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   RightTriggerBinding;                               // 0x4C8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TMap<class FString, TSoftClassPtr<class UFortConversationOptionBrief>> DetailsNodeTypeToBrief;                            // 0x4D8(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortConversationOptionBrief> ChatBrief;                                         // 0x528(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DataDrivenBriefPrefix;                             // 0x550(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortConversationOptionBrief> DataDrivenBrief;                                   // 0x560(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSlottedRadialMenu*                RadialMenu_DialogOptions;                          // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_RadialHighlight;                             // 0x590(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortKeybindWidget*                    Keybind_Confirm;                                   // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBasicBrief*                       BasicBrief_Main;                                   // 0x5A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              SizeBox_RadialMenu;                                // 0x5A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_Details;                                   // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_WheelContainer;                            // 0x5B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Background;                                  // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_LoadingSpinner;                              // 0x5C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortConversationScreen");
		return Clss;
	}

	bool ShouldBlockOptionIntroAnim();
	void OnSelectedItemAvailabilityChanged(bool bIsAvailable);
	void OnOptionsPopulated();
	void OnItemSelected(int32 OriginalIndex);
	void OnConversationStarted();
	void OnConversationOptionUnavailable(class UFortRadialSlot* SelectedEntry);
	void EndConversation();
};

// 0x78 (0x348 - 0x2D0)
// Class FortniteConversationUI.FortDataDrivenServiceBrief
class UFortDataDrivenServiceBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_7E27[0x8];                                     // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_TitleBar;                                     // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  RichText_Description;                              // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_StockRemaining;                               // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortTransactionStrip*                 TransactionStrip_Main;                             // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;                                    // 0x2F8(0x50)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDataDrivenServiceBrief");
		return Clss;
	}

	void OnUnableToPurchase(class FText& Reason);
	void OnTransactionInfoReceived(class UFortItem* Item);
	void OnAbleToPurchase();
};

// 0x28 (0x310 - 0x2E8)
// Class FortniteConversationUI.FortDuelBrief
class UFortDuelBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  TextTemplate;                                      // 0x2E8(0x18)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_Objective;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTileView*                       TileView;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDuelBrief");
		return Clss;
	}

	void DisplayLootItems(TArray<class UFortItem*>& Items);
};

// 0x20 (0x308 - 0x2E8)
// Class FortniteConversationUI.FortHireBrief
class UFortHireBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  TextTemplate;                                      // 0x2E8(0x18)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_Objective;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHireBrief");
		return Clss;
	}

	void HandleNPCDismissal(bool bAtMaxNPCNum, bool bWillDismissNPCAtHire);
};

// 0x20 (0x308 - 0x2E8)
// Class FortniteConversationUI.FortIntelBrief
class UFortIntelBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  TextTemplate;                                      // 0x2E8(0x18)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_Objective;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortIntelBrief");
		return Clss;
	}

};

// 0x130 (0x400 - 0x2D0)
// Class FortniteConversationUI.FortItemFundBrief
class UFortItemFundBrief : public UCommonUserWidget
{
public:
	uint8                                        Pad_7E29[0xB0];                                    // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_TitleBar;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ProgressPercent;                              // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ProgressCount;                                // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSimpleMaterialProgressBar*        Progress_Funding;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        LazyImage_Icon;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTransactionStrip*                 TransactionStrip_Main;                             // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;                                    // 0x3B0(0x50)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemFundBrief");
		return Clss;
	}

	void OnProgressUpdated(float CurrentFundingFraction);
	void OnIntializationComplete();
	void InitializeFromContext(struct FConversationContext& ConversationContext);
	class FText GetDataForKey(const class FString& Key, bool bUseIndexAdjustment);
};

// 0x68 (0x338 - 0x2D0)
// Class FortniteConversationUI.FortSingleItemFundBrief
class UFortSingleItemFundBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_7E2A[0x8];                                     // Fixing Size After Last Property..
	class UFortItemFundBrief*                    Item_Entry;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortNPCTextDisplay*                   NPCTextDisplay;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;                                    // 0x2E8(0x50)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSingleItemFundBrief");
		return Clss;
	}

};

// 0x10 (0x348 - 0x338)
// Class FortniteConversationUI.FortMultiItemFundBrief
class UFortMultiItemFundBrief : public UFortSingleItemFundBrief
{
public:
	class UFortItemFundBrief*                    Item_EntrySecondary;                               // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemFundBrief*                    Item_EntryTertiary;                                // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMultiItemFundBrief");
		return Clss;
	}

	void UpdateSelectedVisuals(int32 SelectedIndex);
};

// 0x10 (0x2B8 - 0x2A8)
// Class FortniteConversationUI.FortNPCTextDisplay
class UFortNPCTextDisplay : public UUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Message;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        LazyImage_NPCImage;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNPCTextDisplay");
		return Clss;
	}

	void OnTextUpdated();
	void OnItemNameUpdated(const class FString& ItemName);
};

// 0x1E0 (0x280 - 0xA0)
// Class FortniteConversationUI.FortPlayerConversationUIComponent
class UFortPlayerConversationUIComponent : public UActorComponent
{
public:
	uint8                                        Pad_7E2B[0x8];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UCommonActivatableWidget> DialogWidgetSoftClass;                             // 0xA8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UUserWidget>             DialogMarkerSoftClass;                             // 0xD0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> MobileDialogWidgetSoftClass;                       // 0xF8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UDynamicUIScene*>               SpectatorConversationScenes;                       // 0x120(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UDynamicUIScene*>               SpectatorMobileConversationScenes;                 // 0x130(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSubclassOf<class UUserWidget>               DialogWidgetClass;                                 // 0x140(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UUserWidget>               DialogMarkerClass;                                 // 0x148(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUserWidgetPool                       DialogWidgetPool;                                  // 0x150(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E2C[0xA8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerConversationUIComponent");
		return Clss;
	}

	void OnMinigameStarted();
};

// 0x50 (0x320 - 0x2D0)
// Class FortniteConversationUI.FortQuestBrief
class UFortQuestBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_7E2E[0x8];                                     // Fixing Size After Last Property..
	class FText                                  ThisMatchOnlyQuestText;                            // 0x2D8(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_Objective;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_MoneyReward;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_XpReward;                                     // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ExpirationTime;                               // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                      LazyImage_QuestProviderImage;                      // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_QuestProvider;                             // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestBrief");
		return Clss;
	}

	void OnQuestInformationRecieved(class FText& Objective, struct FFortRarityItemData& RarityData, struct FGameplayTag& CategoryTag, int32 XPReward, int32 MoneyReward);
	void OnQuestExpirationTimeSet(bool bDisplayExpirationTime);
};

// 0x20 (0x308 - 0x2E8)
// Class FortniteConversationUI.FortShowFutureStormCircleBrief
class UFortShowFutureStormCircleBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  PurchaseServiceText;                               // 0x2E8(0x18)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_Display;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortShowFutureStormCircleBrief");
		return Clss;
	}

	void OnUnableToPurchase(enum class EPreventUseStormCircleServiceReason Reason);
	void OnAbleToPurchase();
};

// 0x60 (0x330 - 0x2D0)
// Class FortniteConversationUI.FortSingleOrMultiItemFundBrief
class UFortSingleOrMultiItemFundBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_7E2F[0x8];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortConversationOptionBrief> SingleItemBrief;                                   // 0x2D8(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortConversationOptionBrief> MultiItemsBrief;                                   // 0x300(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              Overlay_Brief;                                     // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSingleOrMultiItemFundBrief");
		return Clss;
	}

};

// 0x28 (0x2D0 - 0x2A8)
// Class FortniteConversationUI.FortTransactionStrip
class UFortTransactionStrip : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_CostDescription;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortWorldItemDefinition> CachedGlobalCurrency;                              // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWorldItemDefinition*              ResourceCurrency;                                  // 0x2B8(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E31[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTransactionStrip");
		return Clss;
	}

	void OnTransactionInfoReceived(struct FFortServiceTransactionInfo& TransactionInfo);
	void OnSetTransactionCostVisibility(bool bVisible);
	void HandleOnItemCountChanged(FInterfaceProperty_ InventoryOwner, class UFortItemDefinition* Definition, int32 Delta);
};

// 0x0 (0x2E8 - 0x2E8)
// Class FortniteConversationUI.FortUpgradeBrief
class UFortUpgradeBrief : public UFortItemTransactionBrief
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUpgradeBrief");
		return Clss;
	}

	void OnUpgradeInfoReceived(class UFortItem* CurrentWeapon);
	void OnUnableToUpgrade(enum class EFortWeaponUpgradeInteractionResult CannotUpgradeCause);
};

// 0x30 (0x600 - 0x5D0)
// Class FortniteConversationUI.MobileConversationScreen
class UMobileConversationScreen : public UFortConversationScreen
{
public:
	class UButton*                               MobileButtonConfirm;                               // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                               MobileButtonTouchInformation;                      // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E32[0x8];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     MobileCloseButton;                                 // 0x5E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonVisibilitySwitcher*             Switcher_CenteredDetails;                          // 0x5F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E33[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MobileConversationScreen");
		return Clss;
	}

	void OnHandleConfirmClicked();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
