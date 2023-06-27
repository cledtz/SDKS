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

// 0x40 (0x68 - 0x28)
// Class KoalaUI.FortGameSettingRegistryExtension_Koala
class UFortGameSettingRegistryExtension_Koala : public UFortGameSettingRegistryExtension
{
public:
	uint8                                        Pad_8264[0x8];                                     // Fixing Size After Last Property..
	struct FFortSettingNameExtensions            SettingExtensions;                                 // 0x30(0x18)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8265[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameSettingRegistryExtension_Koala");
		return Clss;
	}

};

// 0x38 (0x430 - 0x3F8)
// Class KoalaUI.FortSidebarPanelKoala
class UFortSidebarPanelKoala : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_8266[0x18];                                    // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_KoalaDummy;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLazyImage*                        QrCodeImage;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                QRCodeURL;                                         // 0x420(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSidebarPanelKoala");
		return Clss;
	}

	void OnConnectionChanged(bool bConnected);
};

// 0x40 (0x70 - 0x30)
// Class KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
class UFortUIGameFeatureAction_AttemptKoalaModal : public UFortUIGameFeatureAction_PostFrontendFlowActions
{
public:
	TSoftClassPtr<class UKoalaGraphicsModal>     KoalaGraphicsModalClass;                           // 0x30(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8267[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIGameFeatureAction_AttemptKoalaModal");
		return Clss;
	}

};

// 0x28 (0x420 - 0x3F8)
// Class KoalaUI.KoalaGraphicsModal
class UKoalaGraphicsModal : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_8268[0x18];                                    // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_KeepEnabled;                                // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Disable;                                    // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KoalaGraphicsModal");
		return Clss;
	}

};

// 0x140 (0x538 - 0x3F8)
// Class KoalaUI.KoalaHUDWidget
class UKoalaHUDWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_826A[0x8];                                     // Fixing Size After Last Property..
	float                                        ClipDebounceTime;                                  // 0x400(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayerKilledPlayerReminderTime;                    // 0x404(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MatchEndedReminderTime;                            // 0x408(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClipReminderCooldownTime;                          // 0x40C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EliminationClipReminderDelayTime;                  // 0x410(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_826B[0x4];                                     // Fixing Size After Last Property..
	class USoundSubmix*                          ClipAudioSubmix;                                   // 0x418(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonActionWidget*                   ClipActionWidget;                                  // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ClipObjectInputAction;                             // 0x428(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_826C[0x8];                                     // Fixing Size After Last Property..
	TMap<int32, struct FKoalaClipInfo>           ClipTracker;                                       // 0x440(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_826D[0x8];                                     // Fixing Size After Last Property..
	int32                                        LastClipID;                                        // 0x498(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_826E[0x16];                                    // Fixing Size After Last Property..
	enum class EKoalaMockClipMode                MockClipMode;                                      // 0x4B2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_826F[0x1];                                     // Fixing Size After Last Property..
	int32                                        MockClipUploadShortTime;                           // 0x4B4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MockClipUploadLongTime;                            // 0x4B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MockClipCreateShortTime;                           // 0x4BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MockClipCreateLongTime;                            // 0x4C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8270[0x74];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KoalaHUDWidget");
		return Clss;
	}

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
	void HandlePlayerPawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);
	void HandlePlayerMatchWon();
	void HandleLocalPlayerKilledPlayer(class AFortPlayerStateAthena* Player);
	void HandleAthenaGamePhaseChanged(enum class EAthenaGamePhase GamePhase);
	int32 GetUploadingClipCount();
	int32 GetTrackedClipCount();
};

// 0x10 (0x1600 - 0x15F0)
// Class KoalaUI.KoalaMainMenuButton
class UKoalaMainMenuButton : public UFortMainMenuButtonExtension
{
public:
	uint8                                        Pad_8271[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KoalaMainMenuButton");
		return Clss;
	}

};

// 0x8 (0x2B8 - 0x2B0)
// Class KoalaUI.KoalaSettingDetailExtension
class UKoalaSettingDetailExtension : public UFortSettingDetailExtension
{
public:
	uint8                                        Pad_8272[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KoalaSettingDetailExtension");
		return Clss;
	}

	void OnConnectionChanged(bool bConnected);
	void OnAvailabilityChanged(bool bAvailable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
