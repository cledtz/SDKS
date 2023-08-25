#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x14C0 - 0x14C0)
// Class PictureInPictureUI.PictureInPictureBladeMenuButton
class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy
{
public:

	static class UClass* StaticClass();
	static class UPictureInPictureBladeMenuButton* GetDefaultObj();

	void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled);
	void OnPartnerListUpdated();
	void HandlePiPLogoutSuccess();
	void HandlePiPLoginSuccess();
	void HandlePiPEnabled(bool Enabled);
};

// 0x38 (0x60 - 0x28)
// Class PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
class UPictureInPictureLoadingScreenOverlayAction : public UFortUIGameFeatureAction
{
public:
	class USubtitleDisplayNative*                SubtitleDisplay;                                   // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EA3[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPictureInPictureLoadingScreenOverlayAction* GetDefaultObj();

};

// 0x0 (0x3E8 - 0x3E8)
// Class PictureInPictureUI.PictureInPictureMetadataOverlay
class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget
{
public:

	static class UClass* StaticClass();
	static class UPictureInPictureMetadataOverlay* GetDefaultObj();

	void OnMediaStarted();
	void HandleOnPIPVideoStarted();
	void HandleOnPIPVideoResumed();
};

// 0x2F0 (0x6D8 - 0x3E8)
// Class PictureInPictureUI.PictureInPicturePanelWidget
class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1EE3[0x8];                                     // Fixing Size After Last Property 
	class USizeBox*                              Video_Size_Box;                                    // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             StandardVideoSize;                                 // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             StandardVideoTranslation;                          // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               FrontEndSubtitleMargin;                            // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMargin                               GameSubtitleMargin;                                // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UImage*                                Image_Movie;                                       // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      Image_Thumbnail_Prev;                              // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      Image_Thumbnail_Next;                              // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                            MetadataOverlaySlot;                               // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              Overlay_Main;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              Overlay_Keybind;                                   // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PressedObjectInputAction;                          // 0x468(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EE7[0x8];                                     // Fixing Size After Last Property 
	class UPictureInPicturePartnerControls*      CurrentPartner;                                    // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableUCPCheck;                                   // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EE9[0x7];                                     // Fixing Size After Last Property 
	TSubclassOf<class UCommonActivatableWidget>  SourcePickerClass;                                 // 0x490(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundSourceBus*                       SourceBus;                                         // 0x498(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   ToggleActionWidget;                                // 0x4A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidget*              SourcePickerWidget;                                // 0x4A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPictureInPicturePlayer*               VideoWidget;                                       // 0x4B0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EEC[0x20];                                    // Fixing Size After Last Property 
	class UAudioComponent*                       PIPSoundComponent;                                 // 0x4D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPiPPartnerSource                     CurrentSource;                                     // 0x4E0(0x1E8)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EEE[0x8];                                     // Fixing Size After Last Property 
	class USubtitleDisplay*                      Subtitles;                                         // 0x6D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPictureInPicturePanelWidget* GetDefaultObj();

	void ToggleFullScreenPiP();
	void ShowDebugInfo(bool bShow);
	void SetupPIPSoundComponent(struct FFortMediaEventsStreamAssets& InStreamAssets);
	void IntentionalDeactivate();
	void HandleToggleFullscreenMap(bool bFullscreenMapVisible);
	void HandleOnPartnerSourceChanged(struct FPiPPartnerSource& InSelectedSource);
	void HandleOnPartnerListUpdated();
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartnerControls);
	void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled);
	void FlipPIPAudioSubmix(bool bInDefault, struct FFortMediaEventsStreamAssets& InStreamAssets, bool bForce);
	void DestroyPIPSoundComponent();
	void AutoEnableController();
};

// 0x1F8 (0x5E0 - 0x3E8)
// Class PictureInPictureUI.PictureInPictureSourcePicker
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1EF6[0x8];                                     // Fixing Size After Last Property 
	struct FVector2D                             FullScreenTranslation;                             // 0x3F0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             StandardTranslation;                               // 0x400(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          VerticalBox_Main;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EF7[0x8];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           FullScreenActionBrush;                             // 0x420(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           StandardScreenActionBrush;                         // 0x4E0(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EF8[0x1];                                     // Fixing Size After Last Property 
	struct FPrimaryContentSetup                  PrimaryContentSetup;                               // 0x5A1(0x3)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF9[0x4];                                     // Fixing Size After Last Property 
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x5A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPickerOverlay*                    PickerOverlay_MediaSource;                         // 0x5B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_Main;                                      // 0x5B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            DefaultItemTexture;                                // 0x5C0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPictureInPictureMediaController*      CurrentPartner;                                    // 0x5C8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EFD[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPictureInPictureSourcePicker* GetDefaultObj();

	void HandleOnPartnerSourceChanged(TArray<struct FPiPPartnerSource>& CurrentSources);
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartner);
};

}


