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

// 0x5F0 (0x688 - 0x98)
// Class EpicStreamMediaSource.EpicStreamMediaSource
class UEpicStreamMediaSource : public UStreamMediaSource
{
public:
	class FString                                VideoStreamSource;                                 // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VideoStreamSourceAB;                               // 0xA8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387F[0x4];                                     // Fixing Size After Last Property..
	TMap<class FString, class FString>           VideoId;                                           // 0xB0(0x50)(Edit, BlueprintVisible, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	bool                                         bIsLive;                                           // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlurlLive;                                        // 0x101(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3880[0x2];                                     // Fixing Size After Last Property..
	int32                                        MaxResolution;                                     // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBandwidth;                                      // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AspectRatio;                                       // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShareLock;                                        // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAudioOnly;                                        // 0x111(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPartySync;                                        // 0x112(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3881[0x1];                                     // Fixing Size After Last Property..
	float                                        MediaDuration;                                     // 0x114(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MimeType;                                          // 0x118(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StreamDenyHTTPCode;                                // 0x128(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEpicMediaMetadataResolver*            MetadataResolver;                                  // 0x138(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEpicMediaCDNHostnames*                CDNHostNames;                                      // 0x140(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableBLURLRetries;                               // 0x148(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3882[0x31F];                                   // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnVideoUrlSuccess;                                 // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVideoUrlFailed;                                  // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMetaDataFailure;                                 // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMediaLicensedAudioTreatmentChanged;              // 0x498(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3883[0x10];                                    // Fixing Size After Last Property..
	class UEpicMediaDownloadLocalizedOverlays*   EpicMediaDownloadLocalizedOverlays;                // 0x4B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProtectUserFromAVSettings;                         // 0x4C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StreamID;                                          // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StreamID_Development;                              // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          LocalFilePlaybackAsset;                            // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       HighestFramerate;                                  // 0x4F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3884[0x188];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicStreamMediaSource");
		return Clss;
	}

	struct FMediaPlayerOptions UpdatePlayerOptions(const struct FMediaPlayerOptions& PlayerOptions);
	bool ShouldStreamBePlaying(class UObject* WorldContextObject, class UPrimitiveComponent* PrimitiveComponent, float CullRadius);
	enum class EUCPTypes ShouldProtectPlayerFromContent();
	void SetUrl(class FString& InURL);
	void SetPlaybackStartTime(float StartTime);
	void SetLocalizedOverlaysV2(class UEpicMediaDownloadLocalizedOverlays* InOverlays);
	void RequestVideoUrl(class APlayerController* FortPC);
	void ReinstateSharing();
	void MetadataResultHandler(struct FEpicMediaMetadataExt& MetaData, bool bSuccess);
	bool IsScreenRecordingInProgress();
	bool HasLocalFilePlayback();
	void DisableSharing();
	void CancelVideoUrlRequest(bool bInCancelled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
