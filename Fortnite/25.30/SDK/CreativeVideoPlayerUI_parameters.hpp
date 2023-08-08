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

// 0x10 (0x10 - 0x0)
// Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.SetExternalComponents
struct UCreativeVideoPlayerFullScreenWidget_SetExternalComponents_Params
{
public:
	class UMediaTexture*                         VideoTextureExt;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSourceBus*                       ExtSourceBus;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress
struct UCreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete
struct UCreativeVideoPlayerFullScreenWidget_OnSkipButtonActionComplete_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
