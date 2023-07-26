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
// Function AmbientAudio.AmbientAudioComponent.SetPriority
struct UAmbientAudioComponent_SetPriority_Params
{
public:
	int32                                        InPriority;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AmbientAudio.AmbientAudioComponent.SetCrossfadeTime
struct UAmbientAudioComponent_SetCrossfadeTime_Params
{
public:
	float                                        InCrossfadeTime;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AmbientAudio.AmbientAudioComponent.SetAmbientAsset
struct UAmbientAudioComponent_SetAmbientAsset_Params
{
public:
	class UAmbientAudioDataAsset*                InAmbientAsset;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
struct UAmbientAudioSubsystem_RemoveGameplayTag_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
struct UAmbientAudioSubsystem_RemoveAmbientEntry_Params
{
public:
	class FName                                  AmbientName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrossfadeOverride;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AmbientAudio.AmbientAudioSubsystem.GetAudioParameterComponent
struct UAmbientAudioSubsystem_GetAudioParameterComponent_Params
{
public:
	class UAudioParameterComponent*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
struct UAmbientAudioSubsystem_AddGameplayTag_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
struct UAmbientAudioSubsystem_AddAmbientEntry_Params
{
public:
	class FName                                  AmbientName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A9[0x4];                                     // Fixing Size After Last Property..
	class UAmbientAudioDataAsset*                Asset;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrossfadeTime;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
