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

// 0xA0 (0x348 - 0x2A8)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab
class UDownloadOnDemandProjectManagementTab : public UUserWidget
{
public:
	uint8                                        Pad_7EFB[0x30];                                    // Fixing Size After Last Property..
	class UDownloadOnDemandProject*              Project;                                           // 0x2D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7EFC[0x10];                                    // Fixing Size After Last Property..
	class UCommonTextBlock*                      TextBlock_ProjectTitle;                            // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_LinkCode;                                // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_VersionNumber;                           // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_LatestVersionNumber;                     // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_LatestVersionSpinner;                        // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_Description;                             // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_RemoveProject;                              // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_UpdateProject;                              // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonVisibilitySwitcher*             Switcher_Props;                                    // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTileView*                       CommonTileView_ProjectAssetTiles;                  // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_NoPropsMessage;                          // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandProjectManagementTab");
		return Clss;
	}

	void UpdateProjectConfirmed();
	void RemoveProjectConfirmed();
};

// 0xA8 (0x4E8 - 0x440)
// Class VKDownloadOnDemandUI.DownloadOnDemandTabPanel
class UDownloadOnDemandTabPanel : public UFortCreativeContentBrowserTabPanelBase
{
public:
	struct FDataTableRowHandle                   AddProjectWithLinkCodeInputRowHandle;              // 0x440(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   AddSelectedProjectInputRowHandle;                  // 0x450(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ManageSelectedProjectInputRowHandle;               // 0x460(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDownloadOnDemandProjectDetailsSidePanel> DownloadOnDemandProjectDetailsSidePanelClass;      // 0x470(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDownloadOnDemandAddProjectModal> DownloadOnDemandAddProjectModalClass;              // 0x478(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDownloadOnDemandMessageModal> DownloadOnDemandMessageModalClass;                 // 0x480(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                AddProjectsWithMnemonicEntitlementName;            // 0x488(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDownloadOnDemandProject*              SelectedProject;                                   // 0x498(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7EFD[0x10];                                    // Fixing Size After Last Property..
	class UOverlay*                              Overlay_AddProjectParent;                          // 0x4B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTileView*                       CommonTileView_ProjectTiles;                       // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonVisibilitySwitcher*             Switcher_DownloadOnDemandPanels;                   // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_AddProject;                                 // 0x4C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_EntitlementCheckMessage;             // 0x4D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_EntitlementCheckFailed;              // 0x4D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDownloadOnDemandProjectManagementTab* ProjectManagementTab;                              // 0x4E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandTabPanel");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
class UDownloadOnDemandTab_EntitlementCreationCondition : public UCreativeContentBrowserTab_CreationCondition
{
public:
	class FString                                EntitlementName;                                   // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandTab_EntitlementCreationCondition");
		return Clss;
	}

};

// 0x48 (0x440 - 0x3F8)
// Class VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
class UDownloadOnDemandAddProjectModal : public UCommonActivatableWidget
{
public:
	class UDownloadOnDemandProject*              Project;                                           // 0x3F8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7EFF[0x10];                                    // Fixing Size After Last Property..
	class UEditableTextBox*                      EditableTextBox_DownloadLinkCode;                  // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_AddProject;                                 // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Cancel;                                     // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDownloadOnDemandProjectTileImage*     ProjectTileImage_Preview;                          // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_ProjectTitle;                              // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_ProjectTitle;                            // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandAddProjectModal");
		return Clss;
	}

	void UpdateLightningViolator(enum class ESlateVisibility InVisibility, class FText& InText);
	void HandleDownloadLinkIdTextChanged(class FText& InputLinkCode);
};

// 0x18 (0x410 - 0x3F8)
// Class VKDownloadOnDemandUI.DownloadOnDemandMessageModal
class UDownloadOnDemandMessageModal : public UCommonActivatableWidget
{
public:
	class UCommonTextBlock*                      TextBlock_MessageTitle;                            // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_Message;                                 // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Close;                                      // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandMessageModal");
		return Clss;
	}

};

// 0x10 (0x2B8 - 0x2A8)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
class UDownloadOnDemandProjectDetailsSidePanel : public UUserWidget
{
public:
	class UDownloadOnDemandProjectTile*          DownloadOnDemandProjectTile_CurrentProjectEntry;   // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCreativeContentBrowserItemInfo*       ContentBrowserItemInfo_ItemDetails;                // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandProjectDetailsSidePanel");
		return Clss;
	}

};

// 0x10 (0x2B8 - 0x2A8)
// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
class UDownloadOnDemandStatusFeed : public UUserWidget
{
public:
	bool                                         bOverrideOldStatusWithNewStatus;                   // 0x2A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F00[0x7];                                     // Fixing Size After Last Property..
	class UFortDynamicEntryBox*                  EntryBox_DownloadStatusContainer;                  // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandStatusFeed");
		return Clss;
	}

};

// 0x8 (0x2B0 - 0x2A8)
// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
class UDownloadOnDemandStatusFeedLine : public UUserWidget
{
public:
	class UCommonTextBlock*                      TextBlock_DownloadStatus;                          // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandStatusFeedLine");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
class UDownloadOnDemandProjectAssetTileInitializer : public UObject
{
public:
	uint8                                        Pad_7F01[0x8];                                     // Fixing Size After Last Property..
	class UFortPlaysetPropItemDefinition*        PropItemDefinition;                                // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandProjectAssetTileInitializer");
		return Clss;
	}

};

// 0x40 (0x1500 - 0x14C0)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
class UDownloadOnDemandProjectAssetTile : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_7F02[0x8];                                     // Fixing Size After Last Property..
	class UDownloadOnDemandProjectAssetTileInitializer* Initializer;                                       // 0x14C8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F03[0x10];                                    // Fixing Size After Last Property..
	class UImage*                                Image_Item;                                        // 0x14E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Spinner;                                     // 0x14E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonNumericTextBlock*               NumericTextBlock_ItemCount;                        // 0x14F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F04[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandProjectAssetTile");
		return Clss;
	}

};

// 0x1F0 (0x16B0 - 0x14C0)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTile
class UDownloadOnDemandProjectTile : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_7F05[0x10];                                    // Fixing Size After Last Property..
	struct FSlateBrush                           SelectedHighlightBrush;                            // 0x14D0(0xC0)(Edit, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           HoveredHighlightBrush;                             // 0x1590(0xC0)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bIsSelected;                                       // 0x1650(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F06[0x7];                                     // Fixing Size After Last Property..
	class UDownloadOnDemandProject*              Project;                                           // 0x1658(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F07[0x10];                                    // Fixing Size After Last Property..
	class UDownloadOnDemandProjectTileImage*     ProjectTileImage_Preview;                          // 0x1670(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_UpdatePending;                               // 0x1678(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_AddProject;                                  // 0x1680(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Spinner;                                     // 0x1688(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Error;                                       // 0x1690(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              SizeBox_Label;                                     // 0x1698(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_Label;                                   // 0x16A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         Border_Highlight;                                  // 0x16A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandProjectTile");
		return Clss;
	}

	void UpdateLabel(bool bShowLabel);
	void OnLabelUpdated();
};

// 0x38 (0x2E0 - 0x2A8)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage
class UDownloadOnDemandProjectTileImage : public UUserWidget
{
public:
	class UTexture*                              EmptyProjectTexture;                               // 0x2A8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideGrayScale : 1;                            // Mask: 0x1, PropSize: 0x10x2B0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_423 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7F08[0x3];                                     // Fixing Size After Last Property..
	float                                        GreyScaleOverride;                                 // 0x2B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDownloadOnDemandProject*              Project;                                           // 0x2B8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F09[0x10];                                    // Fixing Size After Last Property..
	class UImage*                                Image_ProjectPreview;                              // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_LoadingImageSpinner;                         // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DownloadOnDemandProjectTileImage");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
