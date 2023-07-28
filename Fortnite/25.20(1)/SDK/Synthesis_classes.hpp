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

// 0x30 (0x58 - 0x28)
// Class Synthesis.AudioImpulseResponse
class UAudioImpulseResponse : public UObject
{
public:
	TArray<float>                                ImpulseResponse;                                   // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumChannels;                                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SampleRate;                                        // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizationVolumeDb;                             // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrueStereo;                                       // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E1[0x3];                                     // Fixing Size After Last Property..
	TArray<float>                                IRData;                                            // 0x48(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioImpulseResponse");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Synthesis.ModularSynthPresetBank
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>  Presets;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ModularSynthPresetBank");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Synthesis.ModularSynthLibrary
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ModularSynthLibrary");
		return Clss;
	}

	void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, const class FString& PresetName);
};

// 0x6D0 (0xFD0 - 0x900)
// Class Synthesis.ModularSynthComponent
class UModularSynthComponent : public USynthComponent
{
public:
	int32                                        VoiceCount;                                        // 0x900(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40EA[0x6CC];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ModularSynthComponent");
		return Clss;
	}

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset);
	void SetSustainGain(float SustainGain);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	void SetStereoDelayTime(float DelayTimeMsec);
	void SetStereoDelayRatio(float DelayRatio);
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	void SetStereoDelayFeedback(float DelayFeedback);
	void SetSpread(float Spread);
	void SetReleaseTime(float ReleaseTimeMsec);
	void SetPortamento(float Portamento);
	void SetPitchBend(float PitchBend);
	void SetPan(float Pan);
	void SetOscType(int32 OscIndex, enum class ESynth1OscType OscType);
	void SetOscSync(bool bIsSynced);
	void SetOscSemitones(int32 OscIndex, float Semitones);
	void SetOscPulsewidth(int32 OscIndex, float Pulsewidth);
	void SetOscOctave(int32 OscIndex, float Octave);
	void SetOscGainMod(int32 OscIndex, float OscGainMod);
	void SetOscGain(int32 OscIndex, float OscGain);
	void SetOscFrequencyMod(int32 OscIndex, float OscFreqMod);
	void SetOscCents(int32 OscIndex, float Cents);
	void SetModEnvSustainGain(float SustainGain);
	void SetModEnvReleaseTime(float Release);
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType);
	void SetModEnvInvert(bool bInvert);
	void SetModEnvDepth(float Depth);
	void SetModEnvDecayTime(float DecayTimeMsec);
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType);
	void SetModEnvBiasInvert(bool bInvert);
	void SetModEnvAttackTime(float AttackTimeMsec);
	void SetLFOType(int32 LFOIndex, enum class ESynthLFOType LFOType);
	void SetLFOPatch(int32 LFOIndex, enum class ESynthLFOPatchType LFOPatchType);
	void SetLFOMode(int32 LFOIndex, enum class ESynthLFOMode LFOMode);
	void SetLFOGainMod(int32 LFOIndex, float GainMod);
	void SetLFOGain(int32 LFOIndex, float Gain);
	void SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz);
	void SetLFOFrequency(int32 LFOIndex, float FrequencyHz);
	void SetGainDb(float GainDb);
	void SetFilterType(enum class ESynthFilterType FilterType);
	void SetFilterQMod(float FilterQ);
	void SetFilterQ(float FilterQ);
	void SetFilterFrequencyMod(float FilterFrequencyHz);
	void SetFilterFrequency(float FilterFrequencyHz);
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm);
	void SetEnableUnison(bool EnableUnison);
	void SetEnableRetrigger(bool RetriggerEnabled);
	void SetEnablePolyphony(bool bEnablePolyphony);
	bool SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled);
	void SetEnableLegato(bool LegatoEnabled);
	void SetDecayTime(float DecayTimeMsec);
	void SetChorusFrequency(float Frequency);
	void SetChorusFeedback(float Feedback);
	void SetChorusEnabled(bool EnableChorus);
	void SetChorusDepth(float Depth);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int32 Velocity, float Duration);
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault);
};

// 0x1A8 (0x210 - 0x68)
// Class Synthesis.SourceEffectBitCrusherPreset
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40EB[0xE8];                                    // Fixing Size After Last Property..
	struct FSourceEffectBitCrusherSettings       Settings;                                          // 0x150(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectBitCrusherPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectBitCrusherBaseSettings& Settings);
	void SetSampleRateModulators(TSet<class USoundModulatorBase*>& InModulators);
	void SetSampleRateModulator(class USoundModulatorBase* Modulator);
	void SetSampleRate(float SampleRate);
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings);
	void SetBits(float Bits);
	void SetBitModulators(TSet<class USoundModulatorBase*>& InModulators);
	void SetBitModulator(class USoundModulatorBase* Modulator);
};

// 0x478 (0x4E0 - 0x68)
// Class Synthesis.SourceEffectChorusPreset
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40EC[0x250];                                   // Fixing Size After Last Property..
	struct FSourceEffectChorusSettings           Settings;                                          // 0x2B8(0x228)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectChorusPreset");
		return Clss;
	}

	void SetWetModulators(TSet<class USoundModulatorBase*>& Modulators);
	void SetWetModulator(class USoundModulatorBase* Modulator);
	void SetWet(float WetAmount);
	void SetSpreadModulators(TSet<class USoundModulatorBase*>& Modulators);
	void SetSpreadModulator(class USoundModulatorBase* Modulator);
	void SetSpread(float Spread);
	void SetSettings(struct FSourceEffectChorusBaseSettings& Settings);
	void SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings);
	void SetFrequencyModulators(TSet<class USoundModulatorBase*>& Modulators);
	void SetFrequencyModulator(class USoundModulatorBase* Modulator);
	void SetFrequency(float Frequency);
	void SetFeedbackModulators(TSet<class USoundModulatorBase*>& Modulators);
	void SetFeedbackModulator(class USoundModulatorBase* Modulator);
	void SetFeedback(float Feedback);
	void SetDryModulators(TSet<class USoundModulatorBase*>& Modulators);
	void SetDryModulator(class USoundModulatorBase* Modulator);
	void SetDry(float DryAmount);
	void SetDepthModulators(TSet<class USoundModulatorBase*>& Modulators);
	void SetDepthModulator(class USoundModulatorBase* Modulator);
	void SetDepth(float Depth);
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectConvolutionReverbPreset
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSourceEffectConvolutionReverbSettings Settings;                                          // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHardwareAcceleration;                       // 0x81(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40ED[0x3E];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectConvolutionReverbPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectConvolutionReverbSettings& InSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};

// 0x78 (0xE0 - 0x68)
// Class Synthesis.SourceEffectDynamicsProcessorPreset
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40EE[0x50];                                    // Fixing Size After Last Property..
	struct FSourceEffectDynamicsProcessorSettings Settings;                                          // 0xB8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectDynamicsProcessorPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings);
};

// 0x20 (0xC0 - 0xA0)
// Class Synthesis.EnvelopeFollowerListener
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEnvelopeFollowerUpdate;                          // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_40EF[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvelopeFollowerListener");
		return Clss;
	}

};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectEnvelopeFollowerPreset
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F0[0x34];                                    // Fixing Size After Last Property..
	struct FSourceEffectEnvelopeFollowerSettings Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectEnvelopeFollowerPreset");
		return Clss;
	}

	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings);
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectEQPreset
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F1[0x38];                                    // Fixing Size After Last Property..
	struct FSourceEffectEQSettings               Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectEQPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectEQSettings& InSettings);
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectFilterPreset
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F2[0x48];                                    // Fixing Size After Last Property..
	struct FSourceEffectFilterSettings           Settings;                                          // 0xB0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectFilterPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectFilterSettings& InSettings);
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectFoldbackDistortionPreset
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F3[0x34];                                    // Fixing Size After Last Property..
	struct FSourceEffectFoldbackDistortionSettings Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectFoldbackDistortionPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectMidSideSpreaderPreset
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F4[0x30];                                    // Fixing Size After Last Property..
	struct FSourceEffectMidSideSpreaderSettings  Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectMidSideSpreaderPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings);
};

// 0x118 (0x180 - 0x68)
// Class Synthesis.SourceEffectMotionFilterPreset
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F5[0xA0];                                    // Fixing Size After Last Property..
	struct FSourceEffectMotionFilterSettings     Settings;                                          // 0x108(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectMotionFilterPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectMotionFilterSettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectPannerPreset
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F6[0x30];                                    // Fixing Size After Last Property..
	struct FSourceEffectPannerSettings           Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectPannerPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectPannerSettings& InSettings);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectPhaserPreset
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F7[0x38];                                    // Fixing Size After Last Property..
	struct FSourceEffectPhaserSettings           Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectPhaserPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings);
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectRingModulationPreset
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F8[0x48];                                    // Fixing Size After Last Property..
	struct FSourceEffectRingModulationSettings   Settings;                                          // 0xB0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectRingModulationPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings);
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectSimpleDelayPreset
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40F9[0x40];                                    // Fixing Size After Last Property..
	struct FSourceEffectSimpleDelaySettings      Settings;                                          // 0xA8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectSimpleDelayPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings);
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SourceEffectStereoDelayPreset
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40FA[0x4C];                                    // Fixing Size After Last Property..
	struct FSourceEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectStereoDelayPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectWaveShaperPreset
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_40FB[0x30];                                    // Fixing Size After Last Property..
	struct FSourceEffectWaveShaperSettings       Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectWaveShaperPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings);
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectConvolutionReverbPreset
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubmixEffectConvolutionReverbSettings Settings;                                          // 0x70(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHardwareAcceleration;                       // 0xA1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40FC[0x5E];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectConvolutionReverbPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SubmixEffectDelayStatics
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectDelayStatics");
		return Clss;
	}

	struct FSubmixEffectDelaySettings SetMaximumDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength);
	struct FSubmixEffectDelaySettings SetInterpolationTime(struct FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime);
	struct FSubmixEffectDelaySettings SetDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float DelayLength);
};

// 0x50 (0xB8 - 0x68)
// Class Synthesis.SubmixEffectDelayPreset
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_40FD[0x34];                                    // Fixing Size After Last Property..
	struct FSubmixEffectDelaySettings            Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubmixEffectDelaySettings            DynamicSettings;                                   // 0xA8(0xC)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_40FE[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectDelayPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void SetDelay(float Length);
	void SetDefaultSettings(struct FSubmixEffectDelaySettings& InSettings);
	float GetMaxDelayInMilliseconds();
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SubmixEffectFilterPreset
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_40FF[0x34];                                    // Fixing Size After Last Property..
	struct FSubmixEffectFilterSettings           Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectFilterPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings);
	void SetFilterType(enum class ESubmixFilterType InType);
	void SetFilterQMod(float InQ);
	void SetFilterQ(float InQ);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SubmixEffectFlexiverbPreset
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4100[0x38];                                    // Fixing Size After Last Property..
	struct FSubmixEffectFlexiverbSettings        Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectFlexiverbPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings);
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectMultibandCompressorPreset
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4101[0x60];                                    // Fixing Size After Last Property..
	struct FSubmixEffectMultibandCompressorSettings Settings;                                          // 0xC8(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectMultibandCompressorPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetAudioBus(class UAudioBus* AudioBus);
	void ResetKey();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectStereoDelayPreset
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4102[0x4C];                                    // Fixing Size After Last Property..
	struct FSubmixEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectStereoDelayPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectStereoDelaySettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SubmixEffectStereoToQuadPreset
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4103[0x30];                                    // Fixing Size After Last Property..
	struct FSubmixEffectStereoToQuadSettings     Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectStereoToQuadPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectStereoToQuadSettings& InSettings);
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectTapDelayPreset
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4104[0x40];                                    // Fixing Size After Last Property..
	struct FSubmixEffectTapDelaySettings         Settings;                                          // 0xA8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_4105[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectTapDelayPreset");
		return Clss;
	}

	void SetTap(int32 TapId, struct FTapDelayInfo& TapInfo);
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void RemoveTap(int32 TapId);
	void GetTapIds(TArray<int32>* TapIds);
	void GetTap(int32 TapId, struct FTapDelayInfo* TapInfo);
	float GetMaxDelayInMilliseconds();
	void AddTap(int32* TapId);
};

// 0x3E0 (0xCE0 - 0x900)
// Class Synthesis.GranularSynth
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                            GranulatedSoundWave;                               // 0x900(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_410C[0x3D8];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GranularSynth");
		return Clss;
	}

	void SetSustainGain(float SustainGain);
	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	void SetGrainProbability(float InGrainProbability);
	void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);
	void SetGrainPan(float BasePan, const struct FVector2D& PanRange);
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);
	void SetDecayTime(float DecayTimeMsec);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int32 Velocity, float Duration);
	void NoteOff(float Note, bool bKill);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlayheadTime();
};

// 0x148 (0x170 - 0x28)
// Class Synthesis.MonoWaveTableSynthPreset
class UMonoWaveTableSynthPreset : public UObject
{
public:
	class FString                                PresetName;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockKeyframesToGridBool : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_27F : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_410D[0x3];                                     // Fixing Size After Last Property..
	int32                                        LockKeyframesToGrid;                               // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaveTableResolution;                               // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410E[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FRuntimeFloatCurve>            WaveTable;                                         // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic)
	uint8                                        bNormalizeWaveTables : 1;                          // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410F[0x117];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MonoWaveTableSynthPreset");
		return Clss;
	}

};

// 0x750 (0x1050 - 0x900)
// Class Synthesis.SynthComponentMonoWaveTable
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTableAltered;                                    // 0x900(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNumTablesChanged;                                // 0x910(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMonoWaveTableSynthPreset*             CurrentPreset;                                     // 0x920(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4115[0x728];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthComponentMonoWaveTable");
		return Clss;
	}

	void SetWaveTablePosition(float InPosition);
	void SetSustainPedalState(bool InSustainPedalState);
	void SetPosLfoType(enum class ESynthLFOType InLfoType);
	void SetPosLfoFrequency(float InLfoFrequency);
	void SetPosLfoDepth(float InLfoDepth);
	void SetPositionEnvelopeSustainGain(float InSustainGain);
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool bInInvert);
	void SetPositionEnvelopeDepth(float InDepth);
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float InDepth);
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
	void SetLowPassFilterResonance(float InNewQ);
	void SetFrequencyWithMidiNote(float InMidiNote);
	void SetFrequencyPitchBend(float FrequencyOffsetCents);
	void SetFrequency(float FrequencyHz);
	void SetFilterEnvelopeSustainGain(float InSustainGain);
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool bInInvert);
	void SetFilterEnvelopeDepth(float InDepth);
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float InDepth);
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
	bool SetCurveValue(int32 TableIndex, int32 KeyframeIndex, float NewValue);
	bool SetCurveTangent(int32 TableIndex, float InNewTangent);
	bool SetCurveInterpolationType(enum class ECurveInterpolationType InterpolationType, int32 TableIndex);
	void SetAmpEnvelopeSustainGain(float InSustainGain);
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool bInInvert);
	void SetAmpEnvelopeDepth(float InDepth);
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float InDepth);
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
	void RefreshWaveTable(int32 Index);
	void RefreshAllWaveTables();
	void NoteOn(float InMidiNote, float InVelocity);
	void NoteOff(float InMidiNote);
	int32 GetNumTableEntries();
	int32 GetMaxTableIndex();
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);
	float GetCurveTangent(int32 TableIndex);
};

// 0xF0 (0x9F0 - 0x900)
// Class Synthesis.SynthComponentToneGenerator
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                        Frequency;                                         // 0x900(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x904(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    DistanceAttenuationCurve;                          // 0x908(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             DistanceRange;                                     // 0x990(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationDbAtMaxRange;                           // 0x9A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4116[0x4C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthComponentToneGenerator");
		return Clss;
	}

	void SetVolume(float InVolume);
	void SetFrequency(float InFrequency);
};

// 0x130 (0xA30 - 0x900)
// Class Synthesis.SynthSamplePlayer
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                            SoundWave;                                         // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSampleLoaded;                                    // 0x908(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSamplePlaybackProgress;                          // 0x918(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4118[0x108];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthSamplePlayer");
		return Clss;
	}

	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float InPitch, float TimeSec);
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlaybackProgressTime();
	float GetCurrentPlaybackProgressPercent();
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthesisUtilitiesBlueprintFunctionLibrary");
		return Clss;
	}

	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
};

// 0x498 (0x610 - 0x178)
// Class Synthesis.Synth2DSlider
class USynth2DSlider : public UWidget
{
public:
	float                                        ValueX;                                            // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueY;                                            // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueXDelegate;                                    // 0x180(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueYDelegate;                                    // 0x18C(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4119[0x8];                                     // Fixing Size After Last Property..
	struct FSynth2DSliderStyle                   WidgetStyle;                                       // 0x1A0(0x3E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderHandleColor;                                 // 0x580(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x590(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x591(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411A[0x2];                                     // Fixing Size After Last Property..
	float                                        StepSize;                                          // 0x594(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x598(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411B[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x5A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x5B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x5C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x5D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChangedX;                                   // 0x5E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChangedY;                                   // 0x5F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_411C[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Synth2DSlider");
		return Clss;
	}

	void SetValue(const struct FVector2D& InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	struct FVector2D GetValue();
};

// 0x3E8 (0x560 - 0x178)
// Class Synthesis.SynthKnob
class USynthKnob : public UWidget
{
public:
	float                                        Value;                                             // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepSize;                                          // 0x17C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseSpeed;                                        // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseFineTuneSpeed;                                // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ShowTooltipInfo : 1;                               // Mask: 0x1, PropSize: 0x10x188(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_280 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_411D[0x7];                                     // Fixing Size After Last Property..
	class FText                                  ParameterName;                                     // 0x190(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ParameterUnits;                                    // 0x1A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1C0(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411E[0x4];                                     // Fixing Size After Last Property..
	struct FSynthKnobStyle                       WidgetStyle;                                       // 0x1D0(0x320)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x4F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x4F1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411F[0x6];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x4F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x508(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x518(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x528(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x538(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4120[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthKnob");
		return Clss;
	}

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetLocked(bool InValue);
	float GetValue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
