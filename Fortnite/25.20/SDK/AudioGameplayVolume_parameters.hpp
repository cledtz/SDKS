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

// 0x4 (0x4 - 0x0)
// Function AudioGameplayVolume.AudioGameplayVolumeMutator.SetPriority
struct UAudioGameplayVolumeMutator_SetPriority_Params
{
public:
	int32                                        InPriority;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume
struct UAttenuationVolumeComponent_SetInteriorVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolateTime;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume
struct UAttenuationVolumeComponent_SetExteriorVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolateTime;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioGameplayVolume.AudioGameplayVolume.SetEnabled
struct AAudioGameplayVolume_SetEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled
struct AAudioGameplayVolume_OnRep_bEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioGameplayVolume.AudioGameplayVolume.OnListenerExit
struct AAudioGameplayVolume_OnListenerExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioGameplayVolume.AudioGameplayVolume.OnListenerEnter
struct AAudioGameplayVolume_OnListenerEnter_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF
struct UFilterVolumeComponent_SetInteriorLPF_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolateTime;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF
struct UFilterVolumeComponent_SetExteriorLPF_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolateTime;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioGameplayVolume.ReverbVolumeComponent.SetReverbSettings
struct UReverbVolumeComponent_SetReverbSettings_Params
{
public:
	struct FReverbSettings                       NewReverbSettings;                                 // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplayVolume.SubmixOverrideVolumeComponent.SetSubmixOverrideSettings
struct USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Params
{
public:
	TArray<struct FAudioVolumeSubmixOverrideSettings> NewSubmixOverrideSettings;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings
struct USubmixSendVolumeComponent_SetSubmixSendSettings_Params
{
public:
	TArray<struct FAudioVolumeSubmixSendSettings> NewSubmixSendSettings;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
