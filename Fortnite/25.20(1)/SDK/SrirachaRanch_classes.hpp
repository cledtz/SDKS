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

// 0x58 (0x1A0 - 0x148)
// Class SrirachaRanch.StreamingRadioAudioShapeComponent
class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent
{
public:
	float                                        Radius;                                            // 0x148(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CA8[0x4];                                     // Fixing Size After Last Property..
	class UStreamingRadioPlayerComponent*        RadioPlayer;                                       // 0x150(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CA9[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StreamingRadioAudioShapeComponent");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class SrirachaRanch.SrirachaRanchComponentTemplateWrapper
class USrirachaRanchComponentTemplateWrapper : public UDataAsset
{
public:
	class UMediaSoundComponent*                  MediaSoundPlayerTemplate;                          // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SrirachaRanchComponentTemplateWrapper");
		return Clss;
	}

};

// 0x408 (0x4B0 - 0xA8)
// Class SrirachaRanch.StreamingRadioPlayerComponent
class UStreamingRadioPlayerComponent : public UFortPawnComponent
{
public:
	uint8                                        Pad_7CB6[0x10];                                    // Fixing Size After Last Property..
	TMap<class FName, struct FSrirachaInputMappingData> InputMappingData;                                  // 0xB8(0x50)(Edit, EditFixedSize, DisableEditOnInstance, NoClear, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSourceLoading;                                   // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSourcePlayed;                                    // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSourceStopped;                                   // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSourceFailed;                                    // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRadioExplicitStop;                               // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        PercentAutostartRadio;                             // 0x158(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7CB7[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          DisabledVehicleList;                               // 0x160(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, float>                     ExteriorVolumeMultiplierMap;                       // 0x170(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, float>                     InteriorVolumeMultiplierMap;                       // 0x1C0(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bMinimalStateOnPlatform;                           // 0x210(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7CB8[0x7];                                     // Fixing Size After Last Property..
	TArray<class FString>                        DisabledStationList;                               // 0x218(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutostartOnEntry;                                 // 0x228(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisabledForCurrentPlayerState;                    // 0x229(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7CB9[0x6];                                     // Fixing Size After Last Property..
	struct FStreamingRadioSourceData             ReplicatedRadioSourceData;                         // 0x230(0x68)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnReplicatedStateChangedDelegate;                  // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStreamingRadioAudioShapeComponent*    AudioShape;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USrirachaRanchComponentTemplateWrapper* SoundCompTemplateSource;                           // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAthenaRadioStation                   LastSource;                                        // 0x2C0(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class URadioContentSourceItemDefinition*> Sources;                                           // 0x318(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FAthenaRadioStation                   FallbackSource;                                    // 0x328(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FSrirachaPerClassSpecialSeats> SpecialSeatList;                                   // 0x380(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaPlayer*                          MediaPlayerInstance;                               // 0x3D8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMediaPlayerCtrl*                  MediaController;                                   // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundSubmixBase*                      DefaultSoundSubmix;                                // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundSubmixBase*                      LicensedSoundSubmix;                               // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortStreamMediaSource*                LastMediaSource;                                   // 0x3F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortStreamMediaSource*                IncomingMediaSource;                               // 0x400(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERadioSource                      CurrentMode;                                       // 0x408(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7CBA[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaximumRetries;                                    // 0x40C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FadeoutWhenUnpoweredInMS;                          // 0x410(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FadeoutWhenOwnerBeingDestroyedInMS;                // 0x414(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxFadeoutTimeMS;                                  // 0x418(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DefaultPlayingIndex;                               // 0x41C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundMix*                             SoundMixInside;                                    // 0x420(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundMix*                             SoundMixOutside;                                   // 0x428(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7CBB[0x4];                                     // Fixing Size After Last Property..
	float                                        ActivationRadius;                                  // 0x434(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ComponentToAttachTo;                               // 0x438(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ComponentSocketAttachTo;                           // 0x43C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortStreamMediaSource*                MediaSource;                                       // 0x440(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAthenaRadioStation>           RadioStationList;                                  // 0x448(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UObject*                               DelegateContextObject;                             // 0x458(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MediaStartTimeFromInit;                            // 0x460(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7CBC[0x4C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StreamingRadioPlayerComponent");
		return Clss;
	}

	void ToggleRadioActive();
	void StopRadioWithFadeout(int32 Milliseconds);
	void StopRadio();
	void StopIfNoDriver(FInterfaceProperty_& Vehicle);
	void StartRadio(int32 IdxToPlay, bool bFallbackOverride);
	void SoundMixUpdateWeaponState(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
	void SoundMixUpdateTargetingState(bool bNewIsTargeting);
	void SetInteriorVolume(FInterfaceProperty_& Vehicle);
	void SetExteriorVolume(FInterfaceProperty_& Vehicle);
	void SetActivationRadius(float InRadius);
	void ServerStopRadio();
	void ServerSetDisabledForCurrentPlayerState(bool bInDisableForCurrentPlayerState);
	void ServerSaveFadeOutTime(float InFadeOutSeconds);
	void ServerSavedSource(struct FAthenaRadioStation& InSource);
	void ServerSaveAutoStart(bool bInAutoStart);
	void ServerPlayIndex(int32 InIndex, enum class EStreamingRadioSourceState InState);
	void PlayPrevIndex();
	void PlayNextIndex();
	void PlayDefaultIndex();
	void OnSuccessfulURL(const class FString& URL);
	void OnRep_RadioSourceData();
	void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking);
	void OnPawnExitVehicle(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnExitSeat(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnEnterVehicle(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnEnterSeat(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void OnOwningVehicleDied(class UFortAthenaVehicle* DeadVehicle, struct FGameplayTagContainer& InTags, class UController* EventInstigator, class UActor* DamageCauser);
	void OnOwnerUnpowered();
	void OnOwnerReFueled();
	void OnOwnerOutOfFuel();
	void OnOwnerExploded();
	void OnOwnerDisabledChanged(bool bDisabled);
	void OnLicensedAudioSettingChanged(class UFortClientSettingsRecord* Settings);
	void OnFailedURL(const class FString& URL);
	void NativeOnVehicleOwnerChanged(FInterfaceProperty_& Vehicle, class UActor* NewOwner, class UActor* PrevOwner);
	void NativeOnPawnExitVehicle(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnExitSeat(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnEnterVehicle(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnEnterSeat(FInterfaceProperty_& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void MediaReady(const class FString& String);
	void MediaPlayed();
	void MediaLoad();
	void MediaFinishedOrClosed();
	void MediaFailedToOpen(const class FString& String);
	void MediaExplicitClose(bool bReallyExplicit);
	bool IsPlayingLiveFeed();
	bool IsExternalSeat(int32 SeatIdx);
	struct FAthenaRadioStation GetOptionAt(int32 Idx);
};

// 0x18 (0x440 - 0x428)
// Class SrirachaRanch.RadioContentSourceItemDefinition
class URadioContentSourceItemDefinition : public UFortAccountItemDefinition
{
public:
	class FString                                ResourceID;                                        // 0x428(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortStreamMediaSource*                MediaSource;                                       // 0x438(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RadioContentSourceItemDefinition");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
