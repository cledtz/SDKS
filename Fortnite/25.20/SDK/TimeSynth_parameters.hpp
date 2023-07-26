#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
struct UTimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride_Params
{
public:
	class UTimeSynthVolumeGroup*                 InVolumeGroup;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeSynthEventClipQuantization   EventQuantization;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_869B[0x3];                                     // Fixing Size After Last Property..
	struct FTimeSynthTimeDef                     FadeTime;                                          // 0xC(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_869C[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
struct UTimeSynthComponent_StopSoundsOnVolumeGroup_Params
{
public:
	class UTimeSynthVolumeGroup*                 InVolumeGroup;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeSynthEventClipQuantization   EventQuantization;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_869D[0x7];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
struct UTimeSynthComponent_StopClipWithFadeOverride_Params
{
public:
	struct FTimeSynthClipHandle                  InClipHandle;                                      // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETimeSynthEventClipQuantization   EventQuantization;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_869E[0x3];                                     // Fixing Size After Last Property..
	struct FTimeSynthTimeDef                     FadeTime;                                          // 0xC(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function TimeSynth.TimeSynthComponent.StopClip
struct UTimeSynthComponent_StopClip_Params
{
public:
	struct FTimeSynthClipHandle                  InClipHandle;                                      // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETimeSynthEventClipQuantization   EventQuantization;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_869F[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function TimeSynth.TimeSynthComponent.SetVolumeGroup
struct UTimeSynthComponent_SetVolumeGroup_Params
{
public:
	class UTimeSynthVolumeGroup*                 InVolumeGroup;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumeDb;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTimeSec;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TimeSynth.TimeSynthComponent.SetSeed
struct UTimeSynthComponent_SetSeed_Params
{
public:
	int32                                        InSeed;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function TimeSynth.TimeSynthComponent.SetQuantizationSettings
struct UTimeSynthComponent_SetQuantizationSettings_Params
{
public:
	struct FTimeSynthQuantizationSettings        InQuantizationSettings;                            // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TimeSynth.TimeSynthComponent.SetFilterSettings
struct UTimeSynthComponent_SetFilterSettings_Params
{
public:
	enum class ETimeSynthFilter                  Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86A0[0x3];                                     // Fixing Size After Last Property..
	struct FTimeSynthFilterSettings              InSettings;                                        // 0x4(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function TimeSynth.TimeSynthComponent.SetFilterEnabled
struct UTimeSynthComponent_SetFilterEnabled_Params
{
public:
	enum class ETimeSynthFilter                  Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TimeSynth.TimeSynthComponent.SetFFTSize
struct UTimeSynthComponent_SetFFTSize_Params
{
public:
	enum class ETimeSynthFFTSize                 InFFTSize;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
struct UTimeSynthComponent_SetEnvelopeFollowerSettings_Params
{
public:
	struct FTimeSynthEnvelopeFollowerSettings    InSettings;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
struct UTimeSynthComponent_SetEnvelopeFollowerEnabled_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TimeSynth.TimeSynthComponent.SetBPM
struct UTimeSynthComponent_SetBPM_Params
{
public:
	float                                        BeatsPerMinute;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function TimeSynth.TimeSynthComponent.ResetSeed
struct UTimeSynthComponent_ResetSeed_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function TimeSynth.TimeSynthComponent.PlayClip
struct UTimeSynthComponent_PlayClip_Params
{
public:
	class UTimeSynthClip*                        InClip;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTimeSynthVolumeGroup*                 InVolumeGroup;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthClipHandle                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TimeSynth.TimeSynthComponent.HasActiveClips
struct UTimeSynthComponent_HasActiveClips_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TimeSynth.TimeSynthComponent.GetSpectralData
struct UTimeSynthComponent_GetSpectralData_Params
{
public:
	TArray<struct FTimeSynthSpectralData>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit
struct UTimeSynthComponent_GetMaxActiveClipLimit_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
struct UTimeSynthComponent_GetEnvelopeFollowerValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TimeSynth.TimeSynthComponent.GetBPM
struct UTimeSynthComponent_GetBPM_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
struct UTimeSynthComponent_AddQuantizationEventDelegate_Params
{
public:
	enum class ETimeSynthEventQuantization       QuantizationType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86A1[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           OnQuantizationEvent;                               // 0x4(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif