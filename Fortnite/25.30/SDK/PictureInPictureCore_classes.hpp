#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xA8 - 0x28)
// Class PictureInPictureCore.PictureInPictureClient
class UPictureInPictureClient : public UObject
{
public:
	FMulticastInlineDelegateProperty_            LoginSuccessEvent;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LogoutSuccessEvent;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            QRCodeReceivedEvent;                               // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ErrorDelegate;                                     // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_54D0[0x8];                                     // Fixing Size After Last Property
	class FString                                UserName;                                          // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         UserAvatarImage;                                   // 0x80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_54D1[0x8];                                     // Fixing Size After Last Property
	class UTexture2DDynamic*                     CurrentQRCodeTexture;                              // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_54D2[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureClient");
		return Clss;
	}

	void Logout();
	bool IsLoggedIn();
	class UTexture2DDynamic* GetQRCodeTexture();
	enum class EPictureInPictureAuthState GetLoginState();
	class UEpicCMSImage* GetAvatarImage();
	void EndLogin(class UObject* InWorldContext);
	void CheckLogin(class UObject* InWorldContext);
	void BeginLogin(class UObject* InWorldContext);
};

// 0x0 (0x28 - 0x28)
// Class PictureInPictureCore.PictureInPictureCheatManager
class UPictureInPictureCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureCheatManager");
		return Clss;
	}

	void SuspendPiP();
	void ResumePiP();
	void PrintPiPRegionInfo();
	void EnablePiP();
	void DisablePiP();
	void CanEnablePartnerPIP();
};

// 0x0 (0x28 - 0x28)
// Class PictureInPictureCore.PictureInPictureCoreEnableDisableAction
class UPictureInPictureCoreEnableDisableAction : public UFortUIGameFeatureAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureCoreEnableDisableAction");
		return Clss;
	}

};

// 0x6B0 (0x6D8 - 0x28)
// Class PictureInPictureCore.PictureInPictureMediaController
class UPictureInPictureMediaController : public UObject
{
public:
	class FString                                PartnerName;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54DD[0x10];                                    // Fixing Size After Last Property
	TArray<class UPictureInPictureActionData*>   ActionDataArray;                                   // 0x48(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FPIPVideoPlayerAssetConfig            DefaultPlayerAssetConfig;                          // 0x58(0x88)(NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FPIPVideoPlayerAssetConfig            PlayerAssetConfig;                                 // 0xE0(0x88)(NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UPictureInPicturePlayer*               VideoWidget;                                       // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPIPVideoPlayerConfig                 VideoWidgetConfig;                                 // 0x170(0x48)(Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UCommonLazyImage>       ThumbnailImageNext;                                // 0x1B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UCommonLazyImage>       ThumbnailImagePrevious;                            // 0x1C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsMultipleSources;                          // 0x1C8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_54DE[0x7];                                     // Fixing Size After Last Property
	struct FPiPPartnerSource                     CurrentSource;                                     // 0x1D0(0x1E8)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPiPPartnerSource>             Sources;                                           // 0x3B8(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPiPPartnerSource>             ValidSources;                                      // 0x3C8(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FMediaPlayerOptions                   LocalOptions;                                      // 0x3D8(0x30)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            BaseErrorEvent;                                    // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            BaseEnabledEvent;                                  // 0x418(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            SourcesChangedEvent;                               // 0x428(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            SourceSelectedEvent;                               // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_54E1[0x8];                                     // Fixing Size After Last Property
	TArray<struct FPictureInPictureActionConfig> InstanceActionData;                                // 0x450(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UPictureInPictureAnalyticsManager*     AnalyticsManager;                                  // 0x460(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                             ActiveStartTime;                                   // 0x468(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                             PausedStartTime;                                   // 0x470(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_54E2[0x8];                                     // Fixing Size After Last Property
	struct FPiPSuspendInfo                       SuspendedInfo;                                     // 0x480(0x1F0)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_54E3[0x68];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureMediaController");
		return Clss;
	}

	void ToggleFullScreen();
	void Stop();
	void SetEnabled(bool bIsEnabled, bool bIsFromUser);
	void SetCurrentSource(struct FPiPPartnerSource& SelectedSource);
	void Play(bool bForcePlay);
	void Pause();
	void OnPrevThumbnailReceived(class UTexture2DDynamic* InTexture);
	void OnNextThumbnailReceived(class UTexture2DDynamic* InTexture);
	void OnMediaStartedAnalytics();
	void OnMediaResumedAnalytics();
	void OnMediaPausedAnalytics();
	void OnMediaClosedAnalytics();
	bool IsPlaying();
	bool IsPaused();
	bool IsMultiSourceSupported();
	bool IsEnabled();
	void HandleSourceSelectedEvent(const class FString& SelectedSource);
	TArray<struct FPiPPartnerSource> GetValidSources();
	TArray<struct FPiPPartnerSource> GetSources();
	struct FPIPVideoPlayerAssetConfig GetPlayerAssetConfig();
	class UPictureInPicturePlayer* GetMediaPlayerWidget();
	struct FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig();
	struct FPiPPartnerSource GetCurrentSource();
	TArray<class UPictureInPictureActionData*> GetActions();
	void Exit(bool bStop);
};

// 0x10 (0x118 - 0x108)
// Class PictureInPictureCore.PictureInPictureMediaPlayerCtrl
class UPictureInPictureMediaPlayerCtrl : public UFortMediaPlayerCtrl
{
public:
	uint8                                        Pad_54E5[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureMediaPlayerCtrl");
		return Clss;
	}

};

// 0x208 (0x230 - 0x28)
// Class PictureInPictureCore.PictureInPicturePlayer
class UPictureInPicturePlayer : public UObject
{
public:
	uint8                                        Pad_54E7[0xE0];                                    // Fixing Size After Last Property
	struct FPIPVideoPlayerAssetConfig            AssetConfig;                                       // 0x108(0x88)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UPictureInPictureMediaPlayerCtrl*      MediaController;                                   // 0x190(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_54EA[0x50];                                    // Fixing Size After Last Property
	class USoundSubmixBase*                      DefaultSubmix;                                     // 0x1E8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundSubmixBase*                      LicensedSubmix;                                    // 0x1F0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_54EC[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPicturePlayer");
		return Clss;
	}

	void UpdateStreamingPlayerSize(struct FVector2D& InVector);
	void StreamedVideoOnUrlSuccess(const class FString& URL);
	void StreamedVideoOnUrlFailure(const class FString& URL);
	bool SetPlayerAssetConfig(struct FPIPVideoPlayerAssetConfig& InAssetConfig);
	bool IsAssetConfigSet();
	void HandleUCPAudioChanged(class UFortClientSettingsRecord* Settings);
	void FlushPlayerAssetConfig();
};

// 0x18 (0x40 - 0x28)
// Class PictureInPictureCore.PictureInPicturePartnerControls
class UPictureInPicturePartnerControls : public UObject
{
public:
	bool                                         bRequiresAgeOfConsent;                             // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54F4[0x7];                                     // Fixing Size After Last Property
	class UPictureInPictureClient*               ClientObject;                                      // 0x30(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPictureMediaController*      MediaController;                                   // 0x38(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPicturePartnerControls");
		return Clss;
	}

};

// 0xF0 (0x120 - 0x30)
// Class PictureInPictureCore.PictureInPictureSubsystem
class UPictureInPictureSubsystem : public UEngineSubsystem
{
public:
	TArray<class UPictureInPicturePartnerDataAsset*> AvailableClientsList;                              // 0x30(0x10)(BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartnerUpdateComplete;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartnerChanged;                                  // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bPartnerListUpdated;                               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsSuspended;                                      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCMSInitialized;                                   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_552C[0x5];                                     // Fixing Size After Last Property
	class FString                                CurrentPlatform;                                   // 0x68(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_552D[0x10];                                    // Fixing Size After Last Property
	TMap<class FString, class UPictureInPicturePartnerControls*> SupportedPartnerControls;                          // 0x88(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CurrentPartnerName;                                // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CurrentContinent;                                  // 0xE8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CurrentCountry;                                    // 0xF8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        CurrentSubdivisions;                               // 0x108(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UFortMediaCMSEventsComponent*          CMSEventsComponent;                                // 0x118(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PictureInPictureSubsystem");
		return Clss;
	}

	void UpdatePartnerItemList(class UObject* InWorldContext, bool bForce);
	void ToggleFullScreenPiP();
	void SuspendCurrentMediaController();
	void StoreLastUsedSource(const class FString& InPartnerSourceName);
	void StoreLastUsedPartner(const class FString& InPartnerName);
	void StoreAutoEnableSetting(bool InUserEnabled);
	void ShutdownAllPartners();
	void ResumeCurrentMediaController();
	void OnCurrentPartnerSourceSelected(struct FPiPPartnerSource& SelectedSource);
	void OnCMSEventValid(class UMediaCMSEvent* ValidEvent);
	void OnCMSEventInvalid(class UMediaCMSEvent* InvalidEvent);
	bool IsPartnerListUpdated();
	void HandleMediaSourceRequest();
	void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled);
	TArray<class UPictureInPicturePartnerDataAsset*> GetPartnerItemList();
	class UPictureInPicturePartnerDataAsset* GetPartnerItem(const class FString& PartnerName);
	class UPictureInPicturePartnerControls* GetPartnerControls(const class FString& PartnerName);
	class UPictureInPictureMediaController* GetPartnerController(const class FString& PartnerName);
	class UPictureInPictureClient* GetPartnerClient(const class FString& PartnerName);
	void GetLastUsedSource(class FString* OutPartnerSourceName);
	void GetLastUsedPartner(class FString* OutPartnerName);
	class UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem();
	class UPictureInPicturePartnerControls* GetCurrentPartnerControls();
	class UPictureInPictureMediaController* GetCurrentPartnerController();
	class UPictureInPictureClient* GetCurrentPartnerClient();
	bool GetAutoEnableSetting();
	void EnableFullScreenPiPOption(bool bEnable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
