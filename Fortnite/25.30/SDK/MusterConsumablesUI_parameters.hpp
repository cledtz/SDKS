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

// 0x8 (0x8 - 0x0)
// Function MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget.OnPlayerStateSet
struct UEnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet_Params
{
public:
	class UFortPlayerStateAthena*                InPlayerState;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget.OnPlayerDeadStateChanged
struct UEnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged_Params
{
public:
	class UFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDead;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5438[0x7];                                     // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
