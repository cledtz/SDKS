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
// Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnPlayerStateSet
struct UTacOvershieldPlayerInfoWidget_OnPlayerStateSet_Params
{
public:
	class UFortPlayerStateAthena*                InPlayerState;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnOvershieldStateChanged
struct UTacOvershieldPlayerInfoWidget_OnOvershieldStateChanged_Params
{
public:
	float                                        Overshield;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OvershieldMax;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


