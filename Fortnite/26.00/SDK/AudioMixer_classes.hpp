#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x90 - 0x30)
// Class AudioMixer.AudioBusSubsystem
class UAudioBusSubsystem : public UAudioEngineSubsystem
{
public:
	uint8                                        Pad_D6F[0x60];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioBusSubsystem* GetDefaultObj();

};

// 0xF8 (0x128 - 0x30)
// Class AudioMixer.AudioDeviceNotificationSubsystem
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_D73[0x8];                                      // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            DefaultCaptureDeviceChanged;                       // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D74[0x18];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            DefaultRenderDeviceChanged;                        // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D75[0x18];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            DeviceAdded;                                       // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D76[0x18];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            DeviceRemoved;                                     // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D78[0x18];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            DeviceStateChanged;                                // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D79[0x18];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            DeviceSwitched;                                    // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7A[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioDeviceNotificationSubsystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioMixer.AudioMixerBlueprintLibrary
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioMixerBlueprintLibrary* GetDefaultObj();

	float TrimAudioCache(float InMegabytesToFree);
	void SwapAudioOutputDevice(class UObject* WorldContextObject, const class FString& NewDeviceId, FDelegateProperty_& OnCompletedDeviceSwap);
	class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	void StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	void StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType);
	void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, const TArray<class USoundEffectSubmixPreset*>& SubmixEffectPresetChain, float FadeTimeSec);
	void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	void RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty_ OnLoadCompletion);
	void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	bool IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	int32 GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	void GetCurrentAudioOutputDeviceName(class UObject* WorldContextObject, FDelegateProperty_& OnObtainCurrentDeviceEvent);
	void GetAvailableAudioOutputDevices(class UObject* WorldContextObject, FDelegateProperty_& OnObtainDevicesEvent);
	class FString Conv_AudioOutputDeviceInfoToString(struct FAudioOutputDeviceInfo& Info);
	void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
	void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	int32 AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// 0x20 (0x4A0 - 0x480)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>        OwningSynthComponent;                              // 0x480(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E00[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USynthSound* GetDefaultObj();

};

// 0x660 (0x900 - 0x2A0)
// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent
{
public:
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x2A0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x2A0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_70 : 4;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_E2B[0x3];                                      // Fixing Size After Last Property 
	uint8                                        bEnableBusSends : 1;                               // Mask: 0x1, PropSize: 0x10x2A4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableBaseSubmix : 1;                             // Mask: 0x2, PropSize: 0x10x2A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableSubmixSends : 1;                            // Mask: 0x4, PropSize: 0x10x2A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_71 : 5;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_E2C[0x3];                                      // Fixing Size After Last Property 
	class USoundAttenuation*                     AttenuationSettings;                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2B0(0x3D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x680(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x688(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FSoundModulationDefaultRoutingSettings ModulationRouting;                                 // 0x6D8(0x168)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundClass*                           SoundClass;                                        // 0x840(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x848(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x850(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x858(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x868(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x878(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x888(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x888(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_72 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_E34[0x3];                                      // Fixing Size After Last Property 
	int32                                        EnvelopeFollowerAttackTime;                        // 0x88C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x890(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E35[0x4];                                      // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x898(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E36[0x20];                                     // Fixing Size After Last Property 
	class USynthSound*                           Synth;                                             // 0x8C8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       AudioComponent;                                    // 0x8D0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E38[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USynthComponent* GetDefaultObj();

	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	void SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
	void SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
	void SetOutputToBusOnly(bool bInOutputToBusOnly);
	void SetModulationRouting(TSet<class USoundModulatorBase*>& Modulators, enum class EModulationDestination Destination, enum class EModulationRouting RoutingMethod);
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	void SetAudioBusSendPreEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
	void SetAudioBusSendPostEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
	bool IsPlaying();
	TSet<class USoundModulatorBase*> GetModulators(enum class EModulationDestination Destination);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, enum class EAudioFaderCurve FadeCurve);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, enum class EAudioFaderCurve FadeCurve);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, enum class EAudioFaderCurve FadeCurve);
};

// 0xE8 (0x150 - 0x68)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_E45[0x88];                                     // Fixing Size After Last Property 
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0xF0(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetAudioBus(class UAudioBus* AudioBus);
	void ResetKey();
};

// 0x48 (0xB0 - 0x68)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_E48[0x38];                                     // Fixing Size After Last Property 
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectSubmixEQPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings);
};

// 0xA8 (0x110 - 0x68)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_E53[0x68];                                     // Fixing Size After Last Property 
	struct FSubmixEffectReverbSettings           Settings;                                          // 0xD0(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectReverbPreset* GetDefaultObj();

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings);
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_E57[0x80];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAudioGenerator* GetDefaultObj();

};

// 0x1C8 (0x1F0 - 0x28)
// Class AudioMixer.QuartzClockHandle
class UQuartzClockHandle : public UObject
{
public:
	uint8                                        Pad_ED8[0x1C8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UQuartzClockHandle* GetDefaultObj();

	void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle);
	void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void SubscribeToQuantizationEvent(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty_& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, FDelegateProperty_& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle);
	void StartOtherClock(class UObject* WorldContextObject, class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate);
	void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void SetTicksPerSecond(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float TicksPerSecond);
	void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float ThirtySecondsNotesPerMinute);
	void SetSecondsPerTick(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float SecondsPerTick);
	void SetMillisecondsPerTick(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float MillisecondsPerTick);
	void SetBeatsPerMinute(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float BeatsPerMinute);
	void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void ResetTransportQuantized(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate, class UQuartzClockHandle** ClockHandle);
	void ResetTransport(class UObject* WorldContextObject, FDelegateProperty_& InDelegate);
	void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void NotifyOnQuantizationBoundary(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate, float InMsOffset);
	bool IsClockRunning(class UObject* WorldContextObject);
	float GetTicksPerSecond(class UObject* WorldContextObject);
	float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject);
	float GetSecondsPerTick(class UObject* WorldContextObject);
	float GetMillisecondsPerTick(class UObject* WorldContextObject);
	float GetEstimatedRunTime(class UObject* WorldContextObject);
	float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier);
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject* WorldContextObject);
	float GetBeatsPerMinute(class UObject* WorldContextObject);
	float GetBeatProgressPercent(enum class EQuartzCommandQuantization QuantizationBoundary, float PhaseOffset, float MsOffset);
};

// 0x20 (0x60 - 0x40)
// Class AudioMixer.QuartzSubsystem
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_F0E[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UQuartzSubsystem* GetDefaultObj();

	bool IsQuartzEnabled();
	bool IsClockRunning(class UObject* WorldContextObject, class FName ClockName);
	float GetRoundTripMinLatency(class UObject* WorldContextObject);
	float GetRoundTripMaxLatency(class UObject* WorldContextObject);
	float GetRoundTripAverageLatency(class UObject* WorldContextObject);
	class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, class FName ClockName);
	float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject);
	float GetEstimatedClockRunTime(class UObject* WorldContextObject, class FName& InClockName);
	float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, class FName ClockName, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier);
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject* WorldContextObject, class FName& InClockName);
	float GetAudioRenderThreadToGameThreadMinLatency();
	float GetAudioRenderThreadToGameThreadMaxLatency();
	float GetAudioRenderThreadToGameThreadAverageLatency();
	bool DoesClockExist(class UObject* WorldContextObject, class FName ClockName);
	void DeleteClockByName(class UObject* WorldContextObject, class FName ClockName);
	void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);
	class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, class FName ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
};

}


