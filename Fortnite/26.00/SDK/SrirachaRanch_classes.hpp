#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_3230[0x4];                                     // Fixing Size After Last Property 
	class UStreamingRadioPlayerComponent*        RadioPlayer;                                       // 0x150(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3231[0x48];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStreamingRadioAudioShapeComponent* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class SrirachaRanch.SrirachaRanchComponentTemplateWrapper
class USrirachaRanchComponentTemplateWrapper : public UDataAsset
{
public:
	class UMediaSoundComponent*                  MediaSoundPlayerTemplate;                          // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USrirachaRanchComponentTemplateWrapper* GetDefaultObj();

};

// 0x3D0 (0x478 - 0xA8)
// Class SrirachaRanch.StreamingRadioPlayerComponent
class UStreamingRadioPlayerComponent : public UFortPawnComponent
{
public:
	uint8                                        Pad_32EC[0x10];                                    // Fixing Size After Last Property 
	TMap<class FName, struct FSrirachaInputMappingData> InputMappingData;                                  // 0xB8(0x50)(Edit, EditFixedSize, DisableEditOnInstance, NoClear, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSourceLoading;                                   // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSourcePlayed;                                    // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSourceStopped;                                   // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSourceFailed;                                    // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMetadataChanged;                                 // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRadioExplicitStop;                               // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        PercentAutostartRadio;                             // 0x168(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32F1[0x4];                                     // Fixing Size After Last Property 
	TArray<class FName>                          DisabledVehicleList;                               // 0x170(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, float>                     ExteriorVolumeMultiplierMap;                       // 0x180(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, float>                     InteriorVolumeMultiplierMap;                       // 0x1D0(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bMinimalStateOnPlatform;                           // 0x220(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32F3[0x7];                                     // Fixing Size After Last Property 
	TArray<class FString>                        DisabledStationList;                               // 0x228(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutostartOnEntry;                                 // 0x238(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisabledForCurrentPlayerState;                    // 0x239(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32F5[0x6];                                     // Fixing Size After Last Property 
	struct FStreamingRadioSourceData             ReplicatedRadioSourceData;                         // 0x240(0x68)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnReplicatedStateChangedDelegate;                  // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStreamingRadioAudioShapeComponent*    AudioShape;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USrirachaRanchComponentTemplateWrapper* SoundCompTemplateSource;                           // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAthenaRadioStation                   LastSource;                                        // 0x2D0(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class URadioContentSourceItemDefinition*> Sources;                                           // 0x328(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FAthenaRadioStation                   FallbackSource;                                    // 0x338(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FSrirachaPerClassSpecialSeats> SpecialSeatList;                                   // 0x390(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortBaseStreamingVideo*               BasePlayerInstance;                                // 0x3E0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundSubmixBase*                      DefaultSoundSubmix;                                // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundSubmixBase*                      LicensedSoundSubmix;                               // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERadioSource                      CurrentMode;                                       // 0x3F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32FA[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaximumRetries;                                    // 0x3FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FadeoutWhenUnpoweredInMS;                          // 0x400(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FadeoutWhenOwnerBeingDestroyedInMS;                // 0x404(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxFadeoutTimeMS;                                  // 0x408(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DefaultPlayingIndex;                               // 0x40C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundMix*                             SoundMixInside;                                    // 0x410(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundMix*                             SoundMixOutside;                                   // 0x418(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32FD[0x4];                                     // Fixing Size After Last Property 
	float                                        ActivationRadius;                                  // 0x424(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ComponentToAttachTo;                               // 0x428(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ComponentSocketAttachTo;                           // 0x42C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortStreamMediaSource*                MediaSource;                                       // 0x430(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAthenaRadioStation>           RadioStationList;                                  // 0x438(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UObject*                               DelegateContextObject;                             // 0x448(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MediaStartTimeFromInit;                            // 0x450(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3300[0x24];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStreamingRadioPlayerComponent* GetDefaultObj();

	void ToggleRadioActive();
	void StopRadioWithFadeout(int32 Milliseconds);
	void StopRadio();
	void StopIfNoDriver(TScriptInterface<class UFortVehicleInterface>& Vehicle);
	void StartRadio(int32 IdxToPlay, bool bFallbackOverride);
	void SoundMixUpdateWeaponState(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
	void SoundMixUpdateTargetingState(bool bNewIsTargeting);
	void SetInteriorVolume(TScriptInterface<class UFortVehicleInterface>& Vehicle);
	void SetExteriorVolume(TScriptInterface<class UFortVehicleInterface>& Vehicle);
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
	void OnRep_RadioSourceData();
	void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking);
	void OnPawnExitVehicle(TScriptInterface<class UFortVehicleInterface>& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnExitSeat(TScriptInterface<class UFortVehicleInterface>& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnEnterVehicle(TScriptInterface<class UFortVehicleInterface>& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnEnterSeat(TScriptInterface<class UFortVehicleInterface>& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void OnOwningVehicleDied(class UFortAthenaVehicle* DeadVehicle, struct FGameplayTagContainer& InTags, class UController* EventInstigator, class UActor* DamageCauser);
	void OnOwnerUnpowered();
	void OnOwnerReFueled();
	void OnOwnerOutOfFuel();
	void OnOwnerExploded();
	void OnOwnerDisabledChanged(bool bDisabled);
	void NativeOnVehicleOwnerChanged(TScriptInterface<class UFortVehicleInterface>& Vehicle, class UActor* NewOwner, class UActor* PrevOwner);
	void NativeOnPawnExitVehicle(TScriptInterface<class UFortVehicleInterface>& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnExitSeat(TScriptInterface<class UFortVehicleInterface>& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnEnterVehicle(TScriptInterface<class UFortVehicleInterface>& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnEnterSeat(TScriptInterface<class UFortVehicleInterface>& Vehicle, class UFortPawn* PlayerPawn, int32 SeatIndex);
	void MetadataChanged(const struct FFortMediaInBandMetadata& MetaData);
	void MediaTerminalError(enum class EBaseMediaTerminalErrorReason Reason);
	void MediaResumed();
	void MediaOnSuccess();
	void MediaEnded();
	void MediaClosed();
	void MediaClose();
	bool IsPlayingLiveFeed();
	bool IsExternalSeat(int32 SeatIdx);
	void HandleLicensedAudioTreatmentChanged(enum class EUCPTypes UCPType);
	struct FAthenaRadioStation GetOptionAt(int32 Idx);
	struct FFortMediaInBandMetadata GetMediaMetadata();
	class UFortBaseStreamingVideo* GetBaseStreamingVideo();
};

// 0x18 (0x408 - 0x3F0)
// Class SrirachaRanch.RadioContentSourceItemDefinition
class URadioContentSourceItemDefinition : public UFortAccountItemDefinition
{
public:
	class FString                                ResourceID;                                        // 0x3F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortStreamMediaSource*                MediaSource;                                       // 0x400(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URadioContentSourceItemDefinition* GetDefaultObj();

};

}


