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

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaSourceRendererInterface
class UMediaSourceRendererInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaSourceRendererInterface");
		return Clss;
	}

};

// 0xE8 (0x220 - 0x138)
// Class MediaAssets.MediaTexture
class UMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoClear;                                         // 0x13A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A9[0x1];                                     // Fixing Size After Last Property..
	struct FLinearColor                          ClearColor;                                        // 0x13C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGenMips;                                     // 0x14C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NumMips;                                           // 0x14D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewStyleOutput;                                    // 0x14E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMediaTextureOutputFormat         OutputFormat;                                      // 0x14F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAspectRatio;                                // 0x150(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMediaTextureOrientation          CurrentOrientation;                                // 0x154(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27AA[0x3];                                     // Fixing Size After Last Property..
	class UMediaPlayer*                          MediaPlayer;                                       // 0x158(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27AB[0xC0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaTexture");
		return Clss;
	}

	void UpdateResource();
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	int32 GetWidth();
	int32 GetTextureNumMips();
	class UMediaPlayer* GetMediaPlayer();
	int32 GetHeight();
	float GetAspectRatio();
};

// 0x58 (0x80 - 0x28)
// Class MediaAssets.MediaSource
class UMediaSource : public UObject
{
public:
	uint8                                        Pad_27AF[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaSource");
		return Clss;
	}

	bool Validate();
	void SetMediaOptionString(class FName& Key, const class FString& Value);
	void SetMediaOptionInt64(class FName& Key, int64 Value);
	void SetMediaOptionFloat(class FName& Key, float Value);
	void SetMediaOptionBool(class FName& Key, bool Value);
	class FString GetUrl();
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                  PlayerName;                                        // 0x80(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27B0[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BaseMediaSource");
		return Clss;
	}

};

// 0x28 (0xB0 - 0x88)
// Class MediaAssets.FileMediaSource
class UFileMediaSource : public UBaseMediaSource
{
public:
	class FString                                FilePath;                                          // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PrecacheFile;                                      // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B1[0x17];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FileMediaSource");
		return Clss;
	}

	void SetFilePath(const class FString& Path);
};

// 0x10 (0xB0 - 0xA0)
// Class MediaAssets.MediaComponent
class UMediaComponent : public UActorComponent
{
public:
	class UMediaTexture*                         MediaTexture;                                      // 0xA0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                          MediaPlayer;                                       // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, Interp, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaComponent");
		return Clss;
	}

	class UMediaTexture* GetMediaTexture();
	class UMediaPlayer* GetMediaPlayer();
};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaTimeStampInfo
class UMediaTimeStampInfo : public UObject
{
public:
	struct FTimespan                             Time;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        SequenceIndex;                                     // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaTimeStampInfo");
		return Clss;
	}

};

// 0x140 (0x168 - 0x28)
// Class MediaAssets.MediaPlayer
class UMediaPlayer : public UObject
{
public:
	uint8                                        Pad_27CD[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnEndReached;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMediaOpenFailed;                                 // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlaybackResumed;                                 // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSeekCompleted;                                   // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTracksChanged;                                   // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMetadataChanged;                                 // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTimespan                             CacheAhead;                                        // 0xC0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             CacheBehind;                                       // 0xC8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             CacheBehindGame;                                   // 0xD0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NativeAudioOut;                                    // 0xD8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayOnOpen;                                        // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CE[0x2];                                     // Fixing Size After Last Property..
	uint8                                        Shuffle : 1;                                       // Mask: 0x1, PropSize: 0x10xDC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Loop : 1;                                          // Mask: 0x2, PropSize: 0x10xDC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_21C : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_27CF[0x3];                                     // Fixing Size After Last Property..
	class UMediaPlaylist*                        Playlist;                                          // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PlaylistIndex;                                     // 0xE8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27D0[0x4];                                     // Fixing Size After Last Property..
	struct FTimespan                             TimeDelay;                                         // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HorizontalFieldOfView;                             // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VerticalFieldOfView;                               // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              ViewRotation;                                      // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_27D1[0x28];                                    // Fixing Size After Last Property..
	struct FGuid                                 PlayerGuid;                                        // 0x140(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27D2[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaPlayer");
		return Clss;
	}

	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
	void SetTimeDelay(const struct FTimespan& TimeDelay);
	bool SetRate(float Rate);
	bool SetNativeVolume(float Volume);
	void SetMediaOptions(class UMediaSource* Options);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(class FName PlayerName);
	void SetBlockOnTime(struct FTimespan& Time);
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	bool Seek(struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	void PlayAndSeek();
	bool Play();
	bool Pause();
	bool OpenUrl(const class FString& URL);
	bool OpenSourceWithOptions(class UMediaSource* MediaSource, struct FMediaPlayerOptions& Options);
	void OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, struct FMediaPlayerOptions& Options, bool* bSuccess);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const class FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsClosed();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	class FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex);
	struct FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex);
	float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex);
	struct FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex);
	float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex);
	float GetVerticalFieldOfView();
	class FString GetUrl();
	class FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	int32 GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	class FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	class UMediaTimeStampInfo* GetTimeStamp();
	struct FTimespan GetTimeDelay();
	struct FTimespan GetTime();
	void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned);
	int32 GetSelectedTrack(enum class EMediaPlayerTrack TrackType);
	float GetRate();
	int32 GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	class FName GetPlayerName();
	int32 GetNumTracks(enum class EMediaPlayerTrack TrackType);
	int32 GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32 TrackIndex);
	class FText GetMediaName();
	TMap<class FString, struct FMediaMetadataItemsBPT> GetMediaMetadataItems();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	class FName GetDesiredPlayerName();
	class FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex);
	int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex);
	int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex);
	void Close();
	bool CanPlayUrl(const class FString& URL);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaPlayerProxyInterface
class UMediaPlayerProxyInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaPlayerProxyInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaPlaylist
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                  Items;                                             // 0x28(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaPlaylist");
		return Clss;
	}

	bool Replace(int32 Index, class UMediaSource* Replacement);
	bool RemoveAt(int32 Index);
	bool Remove(class UMediaSource* MediaSource);
	int32 Num();
	void Insert(class UMediaSource* MediaSource, int32 Index);
	class UMediaSource* GetRandom(int32* OutIndex);
	class UMediaSource* GetPrevious(int32* InOutIndex);
	class UMediaSource* GetNext(int32* InOutIndex);
	class UMediaSource* Get(int32 Index);
	bool AddUrl(const class FString& URL);
	bool AddFile(const class FString& FilePath);
	bool Add(class UMediaSource* MediaSource);
};

// 0xE0 (0x9E0 - 0x900)
// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent
{
public:
	enum class EMediaSoundChannels               Channels;                                          // 0x900(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DynamicRateAdjustment;                             // 0x904(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E1[0x3];                                     // Fixing Size After Last Property..
	float                                        RateAdjustmentFactor;                              // 0x908(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           RateAdjustmentRange;                               // 0x90C(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E2[0x4];                                     // Fixing Size After Last Property..
	class UMediaPlayer*                          MediaPlayer;                                       // 0x920(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27E3[0xB8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaSoundComponent");
		return Clss;
	}

	void SetSpectralAnalysisSettings(const TArray<float>& InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize);
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();
	TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData();
	class UMediaPlayer* GetMediaPlayer();
	float GetEnvelopeValue();
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.PlatformMediaSource
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x80(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlatformMediaSource");
		return Clss;
	}

};

// 0x10 (0x98 - 0x88)
// Class MediaAssets.StreamMediaSource
class UStreamMediaSource : public UBaseMediaSource
{
public:
	class FString                                StreamUrl;                                         // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StreamMediaSource");
		return Clss;
	}

};

// 0x18 (0xA0 - 0x88)
// Class MediaAssets.TimeSynchronizableMediaSource
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                         bUseTimeSynchronization;                           // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E4[0x3];                                     // Fixing Size After Last Property..
	int32                                        FrameDelay;                                        // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TimeDelay;                                         // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDetectInput;                                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E5[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynchronizableMediaSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaBlueprintFunctionLibrary
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaBlueprintFunctionLibrary");
		return Clss;
	}

	void EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	void EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	void EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
