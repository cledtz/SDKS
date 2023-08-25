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

// 0x0 (0x0 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponUpgraded
struct UChromeWeaponInfoWidget_OnWeaponUpgraded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponStartUpgrading
struct UChromeWeaponInfoWidget_OnWeaponStartUpgrading_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponRemoved
struct UChromeWeaponInfoWidget_OnWeaponRemoved_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponEquipped
struct UChromeWeaponInfoWidget_OnWeaponEquipped_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnReadyToUpgradeWeapon
struct UChromeWeaponInfoWidget_OnReadyToUpgradeWeapon_Params
{
public:
	enum class EFortRarity                       NextRarity;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnGainedXp
struct UChromeWeaponInfoWidget_OnGainedXp_Params
{
public:
	float                                        CurrentXPPercentage;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleXpChanged
struct UChromeWeaponInfoWidget_HandleXpChanged_Params
{
public:
	float                                        XPDelta;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentXPPercentage;                               // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUpgraded
struct UChromeWeaponInfoWidget_HandleWeaponUpgraded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUnEquipped
struct UChromeWeaponInfoWidget_HandleWeaponUnEquipped_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponEquipped
struct UChromeWeaponInfoWidget_HandleWeaponEquipped_Params
{
public:
	class UFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleUpgradeTriggered
struct UChromeWeaponInfoWidget_HandleUpgradeTriggered_Params
{
public:
	float                                        ReloadTime;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortWeaponReloadType             ReloadType;                                        // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4132[0x3];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandlePowerUpPending
struct UChromeWeaponInfoWidget_HandlePowerUpPending_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.GetCurrentWeaponRarity
struct UChromeWeaponInfoWidget_GetCurrentWeaponRarity_Params
{
public:
	enum class EFortRarity                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


