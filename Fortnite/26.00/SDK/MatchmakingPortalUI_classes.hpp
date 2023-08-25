#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x418 - 0x3E8)
// Class MatchmakingPortalUI.FortMatchmakingPortalCountdown
class UFortMatchmakingPortalCountdown : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_19E4[0x8];                                     // Fixing Size After Last Property 
	class UInputComponent*                       MatchmakingPortalInputComponent;                   // 0x3F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityScalingTextBlock*         Text_IslandName;                                   // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CountdownTime;                                     // 0x400(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19E7[0x4];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnFinishedCountdown;                               // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortMatchmakingPortalCountdown* GetDefaultObj();

	void StartCountdown();
	void HandleCancelClicked();
	void FinishTimer();
};

// 0x3D0 (0x808 - 0x438)
// Class MatchmakingPortalUI.FortMatchmakingPortalModal
class UFortMatchmakingPortalModal : public UFortActivityView
{
public:
	struct FTimerHandle                          MatchmakingStartTimerHandle;                       // 0x438(0x8)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A13[0x358];                                   // Fixing Size After Last Property 
	TArray<class FString>                        XpTagMnemonicWhitelist;                            // 0x798(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_ActivityOrigin;                               // 0x7A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_LinkCode;                                     // 0x7B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0x7B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ActivityDescription;                          // 0x7C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_ActivityDescription;                     // 0x7C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_ActivityTags;                             // 0x7D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSimpleMaterialProgressBar*        ProgressBar_ContentDownload;                       // 0x7D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_AcceptPublic;                               // 0x7E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_AcceptPrivate;                              // 0x7E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Favorite;                                   // 0x7F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Cancel;                                     // 0x7F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortModalBackground*                  ModalBackground;                                   // 0x800(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMatchmakingPortalModal* GetDefaultObj();

	void SetMatchmakingTimer();
	void SetMatchmakingStateText(class FText& MatchmakingStateText);
	void SendLinkCodeToParty();
	void OnMatchmakingStopped();
	void OnMatchmakingStarted(class FText& MatchmakingState);
	void OnAdditionalContentUpdate(class FText& MatchmakingState, float Progress, bool bShowProgressBar);
	bool IsDownloadRequired();
	void HandleOnMatchmakingError();
	enum class EFortInvalidActivityReason GetInvalidActivityReason();
	class FText GetCreatorTextFormat(class FText& CreatorName);
	TArray<class FString> GetContentWarningStrings();
	class FText GetCodeTextFormat(class FText& IslandCode);
};

// 0x128 (0x518 - 0x3F0)
// Class MatchmakingPortalUI.FortMatchmakingPortalPopup
class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails
{
public:
	uint8                                        Pad_1A44[0x10];                                    // Fixing Size After Last Property 
	class UFortGameActivity*                     CachedGameActivity;                                // 0x400(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMatchmakingPortalModal*           MatchmakingPortalModalWidget;                      // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonActivatableWidget>  MatchmakingFeedbackClass;                          // 0x410(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortMatchmakingPortalCountdown> MatchmakingCountdownClass;                         // 0x418(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               WorldPointerLocation;                              // 0x420(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CreatorNameTextFormat;                             // 0x438(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UHeaderDescriptionHUDComponent> CachedHUDComponent;                                // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortMatchmakingPortalModal> IslandModal;                                       // 0x458(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMatchmakingPortalPopupData           CachedIslandData;                                  // 0x460(0x60)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FText                                  InvalidLinkCodeWarningText;                        // 0x4C0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        MatchmakingFeedbackDelayTime;                      // 0x4D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsWithinPortalRange : 1;                          // Mask: 0x1, PropSize: 0x10x4DC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_11F : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1A47[0x3];                                     // Fixing Size After Last Property 
	class UFortMatchmakingPortalCountdown*       MatchmakingCountdownWidget;                        // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonActivatableWidget*              MatchmakingFeedbackContainerWidget;                // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaCreativeMatchmakingWidget*  MatchmakingFeedbackWidget;                         // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  RichText_CreatorName;                              // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_IslandName;                                   // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      EntryBox_ActivityTags;                             // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    GlobalActionKeybindWidget;                         // 0x510(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortMatchmakingPortalPopup* GetDefaultObj();

	void UpdateVisuals(class UHeaderDescriptionHUDComponent* HUDComponent);
	void OnShowPortalPopup(bool bShow, bool bAnimate);
	void OnPlayerCanInteractChanged(bool bPlayerCanInteract);
	bool IsInteractingDeviceAMatchmakingPortal();
	bool HasActivityToShow();
	void HandleWidgetUpdate();
	void HandleStartedRespawn(class UFortPlayerControllerZone* PlayerController);
	void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget);
	void HandleLoadScreenChanged(class UFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, class FText HUDReason);
	void HandleHUDShow(bool bShow, bool bShouldAnimate);
	void HandleFinishedCountdown();
	class UFortAthenaCreativeMatchmakingWidget* GetMatchmakingFeedbackWidget(class UCommonActivatableWidget* MatchmakingFeedbackContainer);
	bool GetIslandData(struct FMatchmakingPortalPopupData* OutIslandData, class UHeaderDescriptionHUDComponent* HUDComponent);
	void BindOverlapEvents();
};

// 0x38 (0x420 - 0x3E8)
// Class MatchmakingPortalUI.FortModalBackground
class UFortModalBackground : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1A56[0x20];                                    // Fixing Size After Last Property 
	class UCommonButtonBase*                     Button_Back;                                       // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_BackBoard;                                  // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileClose;                                // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortModalBackground* GetDefaultObj();

	void OnPreviewImageChanged(bool bIsLoading, class UTexture* InTexture);
};

// 0x20 (0x48 - 0x28)
// Class MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
class UFortUIGameFeatureAction_OverridePortalHUDDetails : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UUserWidget>             SoftPortalHUDDetailsClass;                         // 0x28(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortUIGameFeatureAction_OverridePortalHUDDetails* GetDefaultObj();

};

}


