#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// Class KoalaUI.FortGameSettingRegistryExtension_Koala
class UFortGameSettingRegistryExtension_Koala : public UFortGameSettingRegistryExtension
{
public:
	uint8                                        Pad_443C[0x8];                                     // Fixing Size After Last Property 
	struct FFortSettingNameExtensions            SettingExtensions;                                 // 0x30(0x18)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_443D[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameSettingRegistryExtension_Koala* GetDefaultObj();

};

// 0x38 (0x420 - 0x3E8)
// Class KoalaUI.FortSidebarPanelKoala
class UFortSidebarPanelKoala : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_4440[0x18];                                    // Fixing Size After Last Property 
	class UCommonButtonBase*                     Button_KoalaDummy;                                 // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLazyImage*                        QrCodeImage;                                       // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                QRCodeURL;                                         // 0x410(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSidebarPanelKoala* GetDefaultObj();

	void OnConnectionChanged(bool bConnected);
};

// 0x38 (0x68 - 0x30)
// Class KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
class UFortUIGameFeatureAction_AttemptKoalaModal : public UFortUIGameFeatureAction_PostFrontendFlowActions
{
public:
	TSoftClassPtr<class UKoalaGraphicsModal>     KoalaGraphicsModalClass;                           // 0x30(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4441[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortUIGameFeatureAction_AttemptKoalaModal* GetDefaultObj();

};

// 0x28 (0x410 - 0x3E8)
// Class KoalaUI.KoalaGraphicsModal
class UKoalaGraphicsModal : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_4445[0x18];                                    // Fixing Size After Last Property 
	class UCommonButtonBase*                     Button_KeepEnabled;                                // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Disable;                                    // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UKoalaGraphicsModal* GetDefaultObj();

};

// 0x158 (0x540 - 0x3E8)
// Class KoalaUI.KoalaHUDWidget
class UKoalaHUDWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_445C[0x8];                                     // Fixing Size After Last Property 
	float                                        ClipDebounceTime;                                  // 0x3F0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayerKilledPlayerReminderTime;                    // 0x3F4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MatchEndedReminderTime;                            // 0x3F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClipReminderCooldownTime;                          // 0x3FC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EliminationClipReminderDelayTime;                  // 0x400(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4461[0x4];                                     // Fixing Size After Last Property 
	class USoundSubmix*                          ClipAudioSubmix;                                   // 0x408(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonActionWidget*                   ClipActionWidget;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ClipObjectInputAction;                             // 0x418(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4464[0x8];                                     // Fixing Size After Last Property 
	TMap<int32, struct FKoalaClipInfo>           ClipTracker;                                       // 0x430(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_4465[0x8];                                     // Fixing Size After Last Property 
	int32                                        LastClipID;                                        // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4467[0x16];                                    // Fixing Size After Last Property 
	enum class EKoalaMockClipMode                MockClipMode;                                      // 0x4A2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4469[0x1];                                     // Fixing Size After Last Property 
	int32                                        MockClipUploadShortTime;                           // 0x4A4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MockClipUploadLongTime;                            // 0x4A8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MockClipCreateShortTime;                           // 0x4AC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MockClipCreateLongTime;                            // 0x4B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_446B[0x8C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UKoalaHUDWidget* GetDefaultObj();

	void UnregisterClipButtonInput();
	void RegisterClipButtonInput();
	void OnTouchAreaMouseDown();
	void OnReminderTimerStarted(float Time);
	void OnReminderEnded();
	void OnRecordingStatusChanged(enum class EKoalaRecording InRecordingStatus);
	void OnInputProgress(float Progress);
	void OnInputComplete();
	void OnConnectionChanged(enum class EKoalaConnectionStatus InStatus);
	void OnClipStatusChanged(int32 InClipID, enum class EKoalaClipStatus InClipStatus, float InUploadProgress);
	void OnAvailabilityChanged(enum class EKoalaAvailability Availability);
	void HandlePlayerPawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class UFortPawn* PawnEmoting);
	void HandlePlayerMatchWon();
	void HandleLocalPlayerKilledPlayer(class UFortPlayerStateAthena* Player);
	int32 GetUploadingClipCount();
	int32 GetTrackedClipCount();
};

// 0x10 (0x1600 - 0x15F0)
// Class KoalaUI.KoalaMainMenuButton
class UKoalaMainMenuButton : public UFortMainMenuButtonExtension
{
public:
	uint8                                        Pad_446E[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UKoalaMainMenuButton* GetDefaultObj();

};

// 0x8 (0x2B8 - 0x2B0)
// Class KoalaUI.KoalaSettingDetailExtension
class UKoalaSettingDetailExtension : public UFortSettingDetailExtension
{
public:
	uint8                                        Pad_4472[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UKoalaSettingDetailExtension* GetDefaultObj();

	void OnConnectionChanged(bool bConnected);
	void OnAvailabilityChanged(bool bAvailable);
};

}


