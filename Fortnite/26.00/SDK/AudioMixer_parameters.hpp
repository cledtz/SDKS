#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
struct UAudioMixerBlueprintLibrary_TrimAudioCache_Params
{
public:
	float                                        InMegabytesToFree;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
struct UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewDeviceId;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnCompletedDeviceSwap;                             // 0x18(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7E[0x4];                                      // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
struct UAudioMixerBlueprintLibrary_StopRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioRecordingExportType         ExportType;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D82[0x7];                                      // Fixing Size After Last Property 
	class FString                                Name;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Path;                                              // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SubmixToRecord;                                    // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            ExistingSoundWaveToOverwrite;                      // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
struct UAudioMixerBlueprintLibrary_StopAudioBus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SubmixToStopAnalyzing;                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
struct UAudioMixerBlueprintLibrary_StartRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpectedDuration;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D88[0x4];                                      // Fixing Size After Last Property 
	class USoundSubmix*                          SubmixToRecord;                                    // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
struct UAudioMixerBlueprintLibrary_StartAudioBus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SubmixToAnalyze;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFFTSize                          FFTSize;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFFTPeakInterpolationMethod       InterpolationMethod;                               // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFFTWindowType                    WindowType;                                        // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D90[0x1];                                      // Fixing Size After Last Property 
	float                                        HopSize;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D91[0x7];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundEffectSubmixPreset*>      SubmixEffectPresetChain;                           // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FadeTimeSec;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D94[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EntryIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBypassed;                                         // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D99[0x3];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
struct UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SubmixToPause;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
struct UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          InSoundSubmix;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA2[0x4];                                      // Fixing Size After Last Property 
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
struct UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          InSoundSubmix;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAC[0x4];                                      // Fixing Size After Last Property 
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB4[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubmixChainIndex;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC2[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EntryIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCB[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params
{
public:
	class USoundWave*                            SoundWave;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnLoadCompletion;                                  // 0x8(0xC)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCD[0x4];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params
{
public:
	class USoundCue*                             SoundCue;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
struct UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SubmixToPause;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params
{
public:
	enum class EAudioSpectrumBandPresetType      InBandPresetType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD2[0x3];                                      // Fixing Size After Last Property 
	int32                                        InNumBands;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InAttackTimeMsec;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InReleaseTimeMsec;                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params
{
public:
	int32                                        InNumSemitones;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMusicalNoteName                  InStartingMusicalNote;                             // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD7[0x3];                                      // Fixing Size After Last Property 
	int32                                        InStartingOctave;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InAttackTimeMsec;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InReleaseTimeMsec;                                 // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD8[0x4];                                      // Fixing Size After Last Property 
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params
{
public:
	int32                                        InNumBands;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMinimumFrequency;                                // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMaximumFrequency;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InAttackTimeMsec;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InReleaseTimeMsec;                                 // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDB[0x4];                                      // Fixing Size After Last Property 
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
struct UAudioMixerBlueprintLibrary_IsAudioBusActive_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioBus*                             AudioBus;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDC[0x7];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
struct UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                Frequencies;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                Phases;                                            // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SubmixToAnalyze;                                   // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE6[0x4];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
struct UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                Frequencies;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                Magnitudes;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SubmixToAnalyze;                                   // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
struct UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnObtainCurrentDeviceEvent;                        // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF0[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
struct UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnObtainDevicesEvent;                              // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF5[0x4];                                      // Fixing Size Of Struct
};

// 0x58 (0x58 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
struct UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Params
{
public:
	struct FAudioOutputDeviceInfo                Info;                                              // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTimeSec;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF7[0x4];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
struct UAudioMixerBlueprintLibrary_AddSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFA[0x4];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         PresetChain;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSourceEffectChainEntry               Entry;                                             // 0x10(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*              SubmixEffectPreset;                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AudioMixer.SynthComponent.Stop
struct USynthComponent_Stop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioMixer.SynthComponent.Start
struct USynthComponent_Start_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct USynthComponent_SetVolumeMultiplier_Params
{
public:
	float                                        VolumeMultiplier;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.SetSubmixSend
struct USynthComponent_SetSubmixSend_Params
{
public:
	class USoundSubmixBase*                      Submix;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SendLevel;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E05[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.SetSourceBusSendPreEffect
struct USynthComponent_SetSourceBusSendPreEffect_Params
{
public:
	class USoundSourceBus*                       SoundSourceBus;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceBusSendLevel;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E07[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.SetSourceBusSendPostEffect
struct USynthComponent_SetSourceBusSendPostEffect_Params
{
public:
	class USoundSourceBus*                       SoundSourceBus;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceBusSendLevel;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0A[0x4];                                      // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.SetOutputToBusOnly
struct USynthComponent_SetOutputToBusOnly_Params
{
public:
	bool                                         bInOutputToBusOnly;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function AudioMixer.SynthComponent.SetModulationRouting
struct USynthComponent_SetModulationRouting_Params
{
public:
	TSet<class USoundModulatorBase*>             Modulators;                                        // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EModulationDestination            Destination;                                       // 0x50(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModulationRouting                RoutingMethod;                                     // 0x51(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0E[0x6];                                      // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
struct USynthComponent_SetLowPassFilterFrequency_Params
{
public:
	float                                        InLowPassFilterFrequency;                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
struct USynthComponent_SetLowPassFilterEnabled_Params
{
public:
	bool                                         InLowPassFilterEnabled;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.SetAudioBusSendPreEffect
struct USynthComponent_SetAudioBusSendPreEffect_Params
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AudioBusSendLevel;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E10[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.SetAudioBusSendPostEffect
struct USynthComponent_SetAudioBusSendPostEffect_Params
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AudioBusSendLevel;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E12[0x4];                                      // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function AudioMixer.SynthComponent.GetModulators
struct USynthComponent_GetModulators_Params
{
public:
	enum class EModulationDestination            Destination;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E16[0x7];                                      // Fixing Size After Last Property 
	TSet<class USoundModulatorBase*>             ReturnValue;                                       // 0x8(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AudioMixer.SynthComponent.FadeOut
struct USynthComponent_FadeOut_Params
{
public:
	float                                        FadeOutDuration;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeVolumeLevel;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioFaderCurve                  FadeCurve;                                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1C[0x3];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SynthComponent.FadeIn
struct USynthComponent_FadeIn_Params
{
public:
	float                                        FadeInDuration;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeVolumeLevel;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioFaderCurve                  FadeCurve;                                         // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E25[0x3];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function AudioMixer.SynthComponent.AdjustVolume
struct USynthComponent_AdjustVolume_Params
{
public:
	float                                        AdjustVolumeDuration;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdjustVolumeLevel;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioFaderCurve                  FadeCurve;                                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2A[0x3];                                      // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
public:
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
struct USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params
{
public:
	class USoundSubmix*                          Submix;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
struct USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
struct USubmixEffectDynamicsProcessorPreset_ResetKey_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
public:
	struct FSubmixEffectSubmixEQSettings         InSettings;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
public:
	class UReverbEffect*                         InReverbEffect;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WetLevel;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DryLevel;                                          // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct USubmixEffectReverbPreset_SetSettings_Params
{
public:
	struct FSubmixEffectReverbSettings           InSettings;                                        // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
struct UQuartzClockHandle_UnsubscribeFromTimeDivision_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuartzCommandQuantization        InQuantizationBoundary;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5B[0x7];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
struct UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
struct UQuartzClockHandle_SubscribeToQuantizationEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuartzCommandQuantization        InQuantizationBoundary;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E64[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           OnQuantizationEvent;                               // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
struct UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnQuantizationEvent;                               // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6C[0x4];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.StopClock
struct UQuartzClockHandle_StopClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CancelPendingEvents;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E79[0x7];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.QuartzClockHandle.StartOtherClock
struct UQuartzClockHandle_StartOtherClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OtherClockName;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7F[0x4];                                      // Fixing Size After Last Property 
	struct FQuartzQuantizationBoundary           InQuantizationBoundary;                            // 0x10(0x20)(Parm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           InDelegate;                                        // 0x30(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E81[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.StartClock
struct UQuartzClockHandle_StartClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
struct UQuartzClockHandle_SetTicksPerSecond_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x28(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8E[0x4];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TicksPerSecond;                                    // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E91[0x4];                                      // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
struct UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x28(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9A[0x4];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThirtySecondsNotesPerMinute;                       // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9C[0x4];                                      // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
struct UQuartzClockHandle_SetSecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x28(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9E[0x4];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsPerTick;                                    // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9F[0x4];                                      // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
struct UQuartzClockHandle_SetMillisecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x28(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA3[0x4];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MillisecondsPerTick;                               // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA4[0x4];                                      // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
struct UQuartzClockHandle_SetBeatsPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary           QuantizationBoundary;                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x28(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA8[0x4];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BeatsPerMinute;                                    // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA9[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.ResumeClock
struct UQuartzClockHandle_ResumeClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
struct UQuartzClockHandle_ResetTransportQuantized_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary           InQuantizationBoundary;                            // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           InDelegate;                                        // 0x28(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB1[0x4];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.ResetTransport
struct UQuartzClockHandle_ResetTransport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           InDelegate;                                        // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB4[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.PauseClock
struct UQuartzClockHandle_PauseClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuartzClockHandle*                    ClockHandle;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AudioMixer.QuartzClockHandle.NotifyOnQuantizationBoundary
struct UQuartzClockHandle_NotifyOnQuantizationBoundary_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzQuantizationBoundary           InQuantizationBoundary;                            // 0x8(0x20)(Parm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           InDelegate;                                        // 0x28(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMsOffset;                                        // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.IsClockRunning
struct UQuartzClockHandle_IsClockRunning_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBA[0x7];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
struct UQuartzClockHandle_GetTicksPerSecond_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBC[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
struct UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBE[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
struct UQuartzClockHandle_GetSecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBF[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
struct UQuartzClockHandle_GetMillisecondsPerTick_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC3[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
struct UQuartzClockHandle_GetEstimatedRunTime_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC6[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
struct UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuartzCommandQuantization        QuantizationType;                                  // 0x8(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ECC[0x3];                                      // Fixing Size After Last Property 
	float                                        Multiplier;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ECE[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
struct UQuartzClockHandle_GetCurrentTimestamp_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzTransportTimeStamp             ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
struct UQuartzClockHandle_GetBeatsPerMinute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED2[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzClockHandle.GetBeatProgressPercent
struct UQuartzClockHandle_GetBeatProgressPercent_Params
{
public:
	enum class EQuartzCommandQuantization        QuantizationBoundary;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED6[0x3];                                      // Fixing Size After Last Property 
	float                                        PhaseOffset;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MsOffset;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
struct UQuartzSubsystem_IsQuartzEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.IsClockRunning
struct UQuartzSubsystem_IsClockRunning_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClockName;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE3[0x3];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
struct UQuartzSubsystem_GetRoundTripMinLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE7[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
struct UQuartzSubsystem_GetRoundTripMaxLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EEB[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
struct UQuartzSubsystem_GetRoundTripAverageLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EED[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetHandleForClock
struct UQuartzSubsystem_GetHandleForClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClockName;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF0[0x4];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF4[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF8[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFA[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
struct UQuartzSubsystem_GetEstimatedClockRunTime_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InClockName;                                       // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
struct UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClockName;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuartzCommandQuantization        QuantizationType;                                  // 0xC(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F01[0x3];                                      // Fixing Size After Last Property 
	float                                        Multiplier;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
struct UQuartzSubsystem_GetCurrentClockTimestamp_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InClockName;                                       // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuartzTransportTimeStamp             ReturnValue;                                       // 0xC(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F02[0x4];                                      // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.DoesClockExist
struct UQuartzSubsystem_DoesClockExist_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClockName;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F07[0x3];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.DeleteClockByName
struct UQuartzSubsystem_DeleteClockByName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClockName;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F08[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
struct UQuartzSubsystem_DeleteClockByHandle_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuartzClockHandle*                    InClockHandle;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AudioMixer.QuartzSubsystem.CreateNewClock
struct UQuartzSubsystem_CreateNewClock_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClockName;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0C[0x4];                                      // Fixing Size After Last Property 
	struct FQuartzClockSettings                  InSettings;                                        // 0x10(0x20)(Parm, NativeAccessSpecifierPublic)
	bool                                         bOverrideSettingsIfClockExists;                    // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAudioEngineClockManager;                       // 0x31(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0D[0x6];                                      // Fixing Size After Last Property 
	class UQuartzClockHandle*                    ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


