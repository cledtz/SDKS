#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class TimeSynth.TimeSynthVolumeGroup
class UTimeSynthVolumeGroup : public UObject
{
public:
	float                                        DefaultVolume;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1871[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynthVolumeGroup");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class TimeSynth.TimeSynthClip
class UTimeSynthClip : public UObject
{
public:
	TArray<struct FTimeSynthClipSound>           Sounds;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             VolumeScaleDb;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PitchScaleSemitones;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                     FadeInTime;                                        // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bApplyFadeOut;                                     // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1874[0x3];                                     // Fixing Size After Last Property
	struct FTimeSynthTimeDef                     FadeOutTime;                                       // 0x64(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                     ClipDuration;                                      // 0x6C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETimeSynthEventClipQuantization   ClipQuantization;                                  // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1875[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynthClip");
		return Clss;
	}

};

// 0xA90 (0x1390 - 0x900)
// Class TimeSynth.TimeSynthComponent
class UTimeSynthComponent : public USynthComponent
{
public:
	struct FTimeSynthQuantizationSettings        QuantizationSettings;                              // 0x900(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bEnableSpectralAnalysis : 1;                       // Mask: 0x1, PropSize: 0x10x914(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_12F : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_18B2[0x3];                                     // Fixing Size After Last Property
	TArray<float>                                FrequenciesToAnalyze;                              // 0x918(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ETimeSynthFFTSize                 FFTSize;                                           // 0x928(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B5[0x7];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnPlaybackTime;                                    // 0x930(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        bIsFilterAEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x940(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFilterBEnabled : 1;                             // Mask: 0x2, PropSize: 0x10x940(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_130 : 6;                                    // Fixing Bit-Field Size
	uint8                                        Pad_18B6[0x3];                                     // Fixing Size After Last Property
	struct FTimeSynthFilterSettings              FilterASettings;                                   // 0x944(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthFilterSettings              FilterBSettings;                                   // 0x950(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bIsEnvelopeFollowerEnabled : 1;                    // Mask: 0x1, PropSize: 0x10x95C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_131 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_18B9[0x3];                                     // Fixing Size After Last Property
	struct FTimeSynthEnvelopeFollowerSettings    EnvelopeFollowerSettings;                          // 0x960(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MaxPoolSize;                                       // 0x96C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BB[0xA20];                                   // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynthComponent");
		return Clss;
	}

	void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime);
	void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization);
	void StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime);
	void StopClip(const struct FTimeSynthClipHandle& InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization);
	void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
	void SetSeed(int32 InSeed);
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings& InQuantizationSettings);
	void SetFilterSettings(enum class ETimeSynthFilter Filter, struct FTimeSynthFilterSettings& InSettings);
	void SetFilterEnabled(enum class ETimeSynthFilter Filter, bool bIsEnabled);
	void SetFFTSize(enum class ETimeSynthFFTSize InFFTSize);
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings& InSettings);
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
	void SetBPM(float BeatsPerMinute);
	void ResetSeed();
	struct FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);
	bool HasActiveClips();
	TArray<struct FTimeSynthSpectralData> GetSpectralData();
	int32 GetMaxActiveClipLimit();
	float GetEnvelopeFollowerValue();
	int32 GetBPM();
	void AddQuantizationEventDelegate(enum class ETimeSynthEventQuantization QuantizationType, FDelegateProperty_& OnQuantizationEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
