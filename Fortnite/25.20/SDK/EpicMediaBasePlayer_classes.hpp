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

// 0x128 (0x150 - 0x28)
// Class EpicMediaBasePlayer.EpicBaseStreamingVideo
class UEpicBaseStreamingVideo : public UObject
{
public:
	uint8                                        Pad_4184[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            VideoOnTerminalError;                              // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VideoOnSuccess;                                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VideoOnClosed;                                     // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VideoOnEndReached;                                 // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VideoOnOpenTimeout;                                // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VideoOnResumed;                                    // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UEpicStreamMediaSource*                MediaSource;                                       // 0x90(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x98(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             VideoSize;                                         // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4185[0x90];                                    // Fixing Size After Last Property..
	class USoundSubmixBase*                      DefaultSubmix;                                     // 0x138(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundSubmixBase*                      LicensedSubmix;                                    // 0x140(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicBaseStreamingVideo");
		return Clss;
	}

	void Stop(bool bRelease, bool bStopPlayer);
	void Start(const class FString& InVUID, class UMediaTexture* InVideoTexture);
	void SetVideoSize(int32 Width, int32 Height);
	void SetSyncTimes(const struct FDateTime& InNowTime, const struct FDateTime& InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s);
	void SetSoundSubmixes(class UMediaSoundComponent* InSoundComponent, class USoundSubmixBase* InDefault, class USoundSubmixBase* InLicensed);
	void SetOpenTimeout(double InTimeoutTime);
	bool RetryOnError(bool bFromPlayer);
	void Release();
	bool Open(const struct FMediaPlayerOptions& InMediaOptions);
	void OnSuccessfulURL(const class FString& URL);
	void OnFailedURL(const class FString& URL);
	bool Init(class UMediaTexture* InVideoTexture, class UMediaPlayer* InMediaPlayer, class UEpicStreamMediaSource* InMediaSource, bool InCDNFailover);
	void HandleMediaResumed();
	void HandleMediaOpenedFailed(const class FString& FailedUrl);
	void HandleMediaOpened(const class FString& OpenedUrl);
	void HandleMediaEndReached();
	void HandleMediaClosed();
	void HandleLicensedAudioTreatmentChanged(enum class EUCPTypes UCPType);
	class UMediaSoundComponent* GetSoundComponent();
	class UEpicStreamMediaSource* GetMediaSource();
	struct FMediaPlayerOptions GetMediaPlayerOptions();
	class UMediaPlayer* GetMediaPlayer();
	void ClearSyncTimes();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
