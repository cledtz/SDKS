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

// 0x48 (0x318 - 0x2D0)
// Class CRD_ClassSelectorUI.ClassSelectorLoadoutContainer
class UClassSelectorLoadoutContainer : public UCommonUserWidget
{
public:
	class UWrapBox*                              WrapBox;                                           // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAthenaItemElementWidgetBase> EntryWidgetClass;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAthenaItemElementWidgetBase*>  EntryWidgets;                                      // 0x2E0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortItemDefinition*                   PreviewItemDef;                                    // 0x2F0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPreviewEntries;                                 // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D7B[0x1C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClassSelectorLoadoutContainer");
		return Clss;
	}

};

// 0xB8 (0x388 - 0x2D0)
// Class CRD_ClassSelectorUI.ClassSelectorTabButtons
class UClassSelectorTabButtons : public UCommonUserWidget
{
public:
	class UCommonActionWidget*                   LeftActionWidget;                                  // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonActionWidget*                   RightActionWidget;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                            TabButtonsScrollBox;                               // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     LeftButton;                                        // 0x2E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     RightButton;                                       // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   LeftInputAction;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D7C[0x8];                                     // Fixing Size After Last Property..
	struct FDataTableRowHandle                   RightInputAction;                                  // 0x310(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D7D[0x8];                                     // Fixing Size After Last Property..
	TArray<class UClassSelectorTeamTile*>        TabButtons;                                        // 0x328(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSubclassOf<class UClassSelectorTeamTile>    TabButtonClass;                                    // 0x338(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               TabButtonPadding;                                  // 0x340(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D7E[0x8];                                     // Fixing Size After Last Property..
	TArray<class FText>                          DesignerPreviewTabNames;                           // 0x358(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        ButtonScrollAmount;                                // 0x368(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D7F[0x1C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClassSelectorTabButtons");
		return Clss;
	}

};

// 0x18 (0x2C0 - 0x2A8)
// Class CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget
class UClassSelectorTeamInfoWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                      TeamName;                                          // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      TeamCountText;                                     // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      TeamDescription;                                   // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClassSelectorTeamInfoWidget");
		return Clss;
	}

};

// 0x40 (0x14B0 - 0x1470)
// Class CRD_ClassSelectorUI.CreativeClassSelectorButton
class UCreativeClassSelectorButton : public UCommonButtonBase
{
public:
	class UCommonTextBlock*                      ButtonTextBlock;                                   // 0x1470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonActionWidget*                   ActionWidget;                                      // 0x1478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ButtonText;                                        // 0x1480(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   buttonInputAction;                                 // 0x1498(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoCapitalize;                                   // 0x14A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D80[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeClassSelectorButton");
		return Clss;
	}

	void SetButtonText(class FText& InText);
};

// 0xB0 (0x1560 - 0x14B0)
// Class CRD_ClassSelectorUI.ClassSelectorTeamTile
class UClassSelectorTeamTile : public UCreativeClassSelectorButton
{
public:
	uint8                                        Pad_3D81[0x90];                                    // Fixing Size After Last Property..
	class UTextBlock*                            PlayerCount;                                       // 0x1540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      TeamIconImage;                                     // 0x1548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D82[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClassSelectorTeamTile");
		return Clss;
	}

	void OnTeamSet(struct FMinigameTeam& NewTeamData);
	void OnTeamIconSet(struct FCreativeIconOption& NewTeamIcon);
	void OnTeamColorIndexSet(int32 TeamColorIndex);
	void OnPlayerCountSet(int32 NewPlayerCount);
};

// 0x48 (0x318 - 0x2D0)
// Class CRD_ClassSelectorUI.ClassSelectorTeamTiles
class UClassSelectorTeamTiles : public UCommonUserWidget
{
public:
	uint8                                        Pad_3D83[0x8];                                     // Fixing Size After Last Property..
	TArray<class UClassSelectorTeamTile*>        TeamTiles;                                         // 0x2D8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UUniformGridPanel*                     RootPanel;                                         // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UClassSelectorTeamTile>    EntryClass;                                        // 0x2F0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DesignerPreviewEntries;                            // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D84[0x1C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClassSelectorTeamTiles");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class CRD_ClassSelectorUI.CreativeClassItemInfo
class UCreativeClassItemInfo : public UObject
{
public:
	struct FMinigameClassSlot                    ClassSlot;                                         // 0x28(0x40)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D85[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeClassItemInfo");
		return Clss;
	}

};

// 0x10 (0x14C0 - 0x14B0)
// Class CRD_ClassSelectorUI.CreativeClassEntry
class UCreativeClassEntry : public UCreativeClassSelectorButton
{
public:
	uint8                                        Pad_3D86[0x8];                                     // Fixing Size After Last Property..
	class UCreativeClassItemInfo*                ItemInfo;                                          // 0x14B8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeClassEntry");
		return Clss;
	}

	void OnClassEntryDataSet(bool bIsCurrentClass, bool bIsPendingClass);
	void OnBrowsingLoadout(bool bBrowsingLoadout);
};

// 0x138 (0x530 - 0x3F8)
// Class CRD_ClassSelectorUI.CreativeClassSelector
class UCreativeClassSelector : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3D89[0x10];                                    // Fixing Size After Last Property..
	class UClassSelectorTabButtons*              TabButtons_TeamSelection;                          // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonListView*                       ListView_Classes;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCreativeClassItemInfo*>        ClassItemInfos;                                    // 0x418(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UScrollBox*                            LoadoutScrollBox;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClassSelectorLoadoutContainer*        LoadoutContainer_Inventory;                        // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClassSelectorLoadoutContainer*        LoadoutContainer_Resources;                        // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_SelectLoadout;                              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_RandomClass;                                // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       Switcher_Descriptions;                             // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          ClassAndTeamDescriptionContainer;                  // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          ItemDescriptionContainer;                          // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          InventoryPanel;                                    // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          ResourcesPanel;                                    // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemRarity;                                        // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemName;                                          // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemDescription;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          TeamDescriptionContainer;                          // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClassSelectorTeamInfoWidget*          TeamInfoWidget_FullView;                           // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClassSelectorTeamInfoWidget*          TeamInfoWidget_TeamsOnly;                          // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       DisplaySwitcher;                                   // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          ClassAndTeamSelectionContainer;                    // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          OnlyTeamSelectionContainer;                        // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          InvalidDataContainer;                              // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClassSelectorTeamTiles*               TeamTiles;                                         // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCreativeClassSelectorButton> TeamSelectionTabClass;                             // 0x4D0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsModalVersion;                                   // 0x4D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableModalTimeLimit;                             // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D8A[0x2];                                     // Fixing Size After Last Property..
	int32                                        ModalTimeLimitInSeconds;                           // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D8B[0x10];                                    // Fixing Size After Last Property..
	enum class EClassSelectorDisplayMode         DisplayMode;                                       // 0x4F0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeferRespawn;                                     // 0x4F1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D8C[0x6];                                     // Fixing Size After Last Property..
	struct FDataTableRowHandle                   ReturnToClassSelectionInputAction;                 // 0x4F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        LoadoutScrollPadding;                              // 0x508(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D8D[0x1C];                                    // Fixing Size After Last Property..
	class UCreativeClassItemInfo*                SelectedClassItemInfo;                             // 0x528(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeClassSelector");
		return Clss;
	}

	void OnTimerCountdown(int32 RemainingTime);
	void OnLoadoutCommitted(class FText& NewClassName, class FText& NewTeamName, bool bNewLoadout);
	void OnClassSelectorUIPopulated(bool bHasValidData);
	void OnClassSelectionChanged(class FText& NewClassName, class FText& NewClassDescription);
	void HandleMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState);
	class UWidget* GetFirstLoadoutItem();
};

// 0x68 (0x460 - 0x3F8)
// Class CRD_ClassSelectorUI.CreativeClassSelectorMapTab
class UCreativeClassSelectorMapTab : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3D8E[0x10];                                    // Fixing Size After Last Property..
	struct FAthenaMapScreenContainerTabInfo      MapTabInfo;                                        // 0x408(0x50)(Edit, NativeAccessSpecifierPublic)
	class UCreativeClassSelector*                CreativeClassSelector;                             // 0x458(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeClassSelectorMapTab");
		return Clss;
	}

	void SetTabName(class FText& TabName);
};

// 0x0 (0x338 - 0x338)
// Class CRD_ClassSelectorUI.Mutator_ClassSelectorUI
class UMutator_ClassSelectorUI : public UFortAthenaMutator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mutator_ClassSelectorUI");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
