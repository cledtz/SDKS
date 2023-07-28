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

// 0x20 (0x20 - 0x0)
// Function AudioGameplay.AudioGameplayCondition.ConditionMet_Position
struct UAudioGameplayCondition_ConditionMet_Position_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374D[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function AudioGameplay.AudioGameplayCondition.ConditionMet
struct UAudioGameplayCondition_ConditionMet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerExit
struct UAudioGameplayVolumeInteraction_OnListenerExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerEnter
struct UAudioGameplayVolumeInteraction_OnListenerEnter_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AudioGameplay.AudioComponentGroup.UnsubscribeObject
struct UAudioComponentGroup_UnsubscribeObject_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplay.AudioComponentGroup.SubscribeToStringParam
struct UAudioComponentGroup_SubscribeToStringParam_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplay.AudioComponentGroup.SubscribeToEvent
struct UAudioComponentGroup_SubscribeToEvent_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplay.AudioComponentGroup.SubscribeToBool
struct UAudioComponentGroup_SubscribeToBool_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplay.AudioComponentGroup.StopSound
struct UAudioComponentGroup_StopSound_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTime;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374E[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplay.AudioComponentGroup.StaticGetOrCreateComponentGroup
struct UAudioComponentGroup_StaticGetOrCreateComponentGroup_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponentGroup*                  ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioGameplay.AudioComponentGroup.SetVolumeMultiplier
struct UAudioComponentGroup_SetVolumeMultiplier_Params
{
public:
	float                                        InVolume;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioGameplay.AudioComponentGroup.SetPitchMultiplier
struct UAudioComponentGroup_SetPitchMultiplier_Params
{
public:
	float                                        InPitch;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioGameplay.AudioComponentGroup.SetLowPassFilter
struct UAudioComponentGroup_SetLowPassFilter_Params
{
public:
	float                                        InFrequency;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplay.AudioComponentGroup.RemoveExtension
struct UAudioComponentGroup_RemoveExtension_Params
{
public:
	FInterfaceProperty_                          NewExtension;                                      // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioGameplay.AudioComponentGroup.IsVirtualized
struct UAudioComponentGroup_IsVirtualized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioGameplay.AudioComponentGroup.IsPlayingAny
struct UAudioComponentGroup_IsPlayingAny_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioGameplay.AudioComponentGroup.GetStringParamValue
struct UAudioComponentGroup_GetStringParamValue_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374F[0x4];                                     // Fixing Size After Last Property..
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioGameplay.AudioComponentGroup.GetFloatParamValue
struct UAudioComponentGroup_GetFloatParamValue_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioGameplay.AudioComponentGroup.GetBoolParamValue
struct UAudioComponentGroup_GetBoolParamValue_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3750[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function AudioGameplay.AudioComponentGroup.EnableVirtualization
struct UAudioComponentGroup_EnableVirtualization_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioGameplay.AudioComponentGroup.DisableVirtualization
struct UAudioComponentGroup_DisableVirtualization_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioGameplay.AudioComponentGroup.BroadcastStopAll
struct UAudioComponentGroup_BroadcastStopAll_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioGameplay.AudioComponentGroup.BroadcastKill
struct UAudioComponentGroup_BroadcastKill_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AudioGameplay.AudioComponentGroup.BroadcastEvent
struct UAudioComponentGroup_BroadcastEvent_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioGameplay.AudioComponentGroup.AddExternalComponent
struct UAudioComponentGroup_AddExternalComponent_Params
{
public:
	class UAudioComponent*                       ComponentToAdd;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplay.AudioComponentGroup.AddExtension
struct UAudioComponentGroup_AddExtension_Params
{
public:
	FInterfaceProperty_                          NewExtension;                                      // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioGameplay.AudioParameterComponent.GetParameters
struct UAudioParameterComponent_GetParameters_Params
{
public:
	TArray<struct FAudioParameter>               ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
