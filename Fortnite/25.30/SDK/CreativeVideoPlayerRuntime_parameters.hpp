#pragma once

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
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.SetExternalComponents
struct UCreativeVideoPlayerFullscreenGameplayAbility_SetExternalComponents_Params
{
public:
	class UMediaTexture*                         ExtMediaTexture;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSourceBus*                       ExtSourceBus;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                  ExtMediaSoundComponent;                            // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerLeaveFullscreenMode
struct UCreativeVideoPlayerFullscreenGameplayAbility_ServerLeaveFullscreenMode_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerEnterFullscreenMode
struct UCreativeVideoPlayerFullscreenGameplayAbility_ServerEnterFullscreenMode_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.OnFullscreenUIEnds
struct UCreativeVideoPlayerFullscreenGameplayAbility_OnFullscreenUIEnds_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionReleased
struct UCreativeVideoPlayerFullscreenGameplayAbility_HandleEnterFullscreenActionReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionPressed
struct UCreativeVideoPlayerFullscreenGameplayAbility_HandleEnterFullscreenActionPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ExitFullscreenState
struct UCreativeVideoPlayerFullscreenGameplayAbility_ExitFullscreenState_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenStateWithOptions
struct UCreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions_Params
{
public:
	struct FCreativeVideoPlayerFullscreenOptions Options;                                           // 0x0(0x2)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenState
struct UCreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientTransitionToFullscreenVideo
struct UCreativeVideoPlayerFullscreenGameplayAbility_ClientTransitionToFullscreenVideo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientLeaveFullscreenVideo
struct UCreativeVideoPlayerFullscreenGameplayAbility_ClientLeaveFullscreenVideo_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary.ShutdownFullscreenVideoMode
struct UCreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode_Params
{
public:
	class UController*                           Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
