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
