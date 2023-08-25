#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_49DD[0x30];                                    // Fixing Size After Last Property 
	class UDownloadOnDemandProject*              Project;                                           // 0x2D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49DE[0x10];                                    // Fixing Size After Last Property 
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

	static class UClass* StaticClass();
	static class UDownloadOnDemandProjectManagementTab* GetDefaultObj();

	void UpdateProjectConfirmed();
	void RemoveProjectConfirmed();
};

// 0xA8 (0x4D8 - 0x430)
// Class VKDownloadOnDemandUI.DownloadOnDemandTabPanel
class UDownloadOnDemandTabPanel : public UFortCreativeContentBrowserTabPanelBase
{
public:
	struct FDataTableRowHandle                   AddProjectWithLinkCodeInputRowHandle;              // 0x430(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   AddSelectedProjectInputRowHandle;                  // 0x440(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ManageSelectedProjectInputRowHandle;               // 0x450(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDownloadOnDemandProjectDetailsSidePanel> DownloadOnDemandProjectDetailsSidePanelClass;      // 0x460(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDownloadOnDemandAddProjectModal> DownloadOnDemandAddProjectModalClass;              // 0x468(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDownloadOnDemandMessageModal> DownloadOnDemandMessageModalClass;                 // 0x470(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                AddProjectsWithMnemonicEntitlementName;            // 0x478(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDownloadOnDemandProject*              SelectedProject;                                   // 0x488(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49E2[0x10];                                    // Fixing Size After Last Property 
	class UOverlay*                              Overlay_AddProjectParent;                          // 0x4A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTileView*                       CommonTileView_ProjectTiles;                       // 0x4A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonVisibilitySwitcher*             Switcher_DownloadOnDemandPanels;                   // 0x4B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_AddProject;                                 // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_EntitlementCheckMessage;             // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_EntitlementCheckFailed;              // 0x4C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDownloadOnDemandProjectManagementTab* ProjectManagementTab;                              // 0x4D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandTabPanel* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
class UDownloadOnDemandTab_EntitlementCreationCondition : public UCreativeContentBrowserTab_CreationCondition
{
public:
	class FString                                EntitlementName;                                   // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandTab_EntitlementCreationCondition* GetDefaultObj();

};

// 0x48 (0x430 - 0x3E8)
// Class VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
class UDownloadOnDemandAddProjectModal : public UCommonActivatableWidget
{
public:
	class UDownloadOnDemandProject*              Project;                                           // 0x3E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49F8[0x10];                                    // Fixing Size After Last Property 
	class UEditableTextBox*                      EditableTextBox_DownloadLinkCode;                  // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_AddProject;                                 // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Cancel;                                     // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDownloadOnDemandProjectTileImage*     ProjectTileImage_Preview;                          // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_ProjectTitle;                              // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_ProjectTitle;                            // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandAddProjectModal* GetDefaultObj();

	void UpdateLightningViolator(enum class ESlateVisibility InVisibility, class FText& InText);
	void HandleDownloadLinkIdTextChanged(class FText& InputLinkCode);
};

// 0x18 (0x400 - 0x3E8)
// Class VKDownloadOnDemandUI.DownloadOnDemandMessageModal
class UDownloadOnDemandMessageModal : public UCommonActivatableWidget
{
public:
	class UCommonTextBlock*                      TextBlock_MessageTitle;                            // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_Message;                                 // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Close;                                      // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandMessageModal* GetDefaultObj();

};

// 0x10 (0x2B8 - 0x2A8)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
class UDownloadOnDemandProjectDetailsSidePanel : public UUserWidget
{
public:
	class UDownloadOnDemandProjectTile*          DownloadOnDemandProjectTile_CurrentProjectEntry;   // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCreativeContentBrowserItemInfo*       ContentBrowserItemInfo_ItemDetails;                // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandProjectDetailsSidePanel* GetDefaultObj();

};

// 0x10 (0x2B8 - 0x2A8)
// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
class UDownloadOnDemandStatusFeed : public UUserWidget
{
public:
	bool                                         bOverrideOldStatusWithNewStatus;                   // 0x2A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A0A[0x7];                                     // Fixing Size After Last Property 
	class UFortDynamicEntryBox*                  EntryBox_DownloadStatusContainer;                  // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandStatusFeed* GetDefaultObj();

};

// 0x8 (0x2B0 - 0x2A8)
// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
class UDownloadOnDemandStatusFeedLine : public UUserWidget
{
public:
	class UCommonTextBlock*                      TextBlock_DownloadStatus;                          // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandStatusFeedLine* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
class UDownloadOnDemandProjectAssetTileInitializer : public UObject
{
public:
	uint8                                        Pad_4A10[0x8];                                     // Fixing Size After Last Property 
	class UFortPlaysetPropItemDefinition*        PropItemDefinition;                                // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDownloadOnDemandProjectAssetTileInitializer* GetDefaultObj();

};

// 0x40 (0x1500 - 0x14C0)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
class UDownloadOnDemandProjectAssetTile : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_4A15[0x8];                                     // Fixing Size After Last Property 
	class UDownloadOnDemandProjectAssetTileInitializer* Initializer;                                       // 0x14C8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A16[0x10];                                    // Fixing Size After Last Property 
	class UImage*                                Image_Item;                                        // 0x14E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Spinner;                                     // 0x14E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonNumericTextBlock*               NumericTextBlock_ItemCount;                        // 0x14F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A17[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDownloadOnDemandProjectAssetTile* GetDefaultObj();

};

// 0x1F0 (0x16B0 - 0x14C0)
// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTile
class UDownloadOnDemandProjectTile : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_4A1A[0x10];                                    // Fixing Size After Last Property 
	struct FSlateBrush                           SelectedHighlightBrush;                            // 0x14D0(0xC0)(Edit, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           HoveredHighlightBrush;                             // 0x1590(0xC0)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bIsSelected;                                       // 0x1650(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A1B[0x7];                                     // Fixing Size After Last Property 
	class UDownloadOnDemandProject*              Project;                                           // 0x1658(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A1C[0x10];                                    // Fixing Size After Last Property 
	class UDownloadOnDemandProjectTileImage*     ProjectTileImage_Preview;                          // 0x1670(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_UpdatePending;                               // 0x1678(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_AddProject;                                  // 0x1680(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Spinner;                                     // 0x1688(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Error;                                       // 0x1690(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              SizeBox_Label;                                     // 0x1698(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_Label;                                   // 0x16A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         Border_Highlight;                                  // 0x16A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandProjectTile* GetDefaultObj();

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
	uint8                                        BitPad_29C : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_4A26[0x3];                                     // Fixing Size After Last Property 
	float                                        GreyScaleOverride;                                 // 0x2B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDownloadOnDemandProject*              Project;                                           // 0x2B8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A27[0x10];                                    // Fixing Size After Last Property 
	class UImage*                                Image_ProjectPreview;                              // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_LoadingImageSpinner;                         // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandProjectTileImage* GetDefaultObj();

};

}


