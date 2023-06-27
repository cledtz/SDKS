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

// 0x28 (0x28 - 0x0)
// Function AloeCroutonWeaponRuntime.FortChargingSet_AloeCrouton.OnRep_Charge
struct UFortChargingSet_AloeCrouton_OnRep_Charge_Params
{
public:
	struct FFortGameplayAttributeData            OldValue;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AloeCroutonWeaponRuntime.FortChargingSet_AloeCrouton.GetCooldownRemaining
struct UFortChargingSet_AloeCrouton_GetCooldownRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AloeCroutonWeaponRuntime.FortChargingSet_AloeCrouton.GetCooldownDuration
struct UFortChargingSet_AloeCrouton_GetCooldownDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AloeCroutonWeaponRuntime.FortCosmeticStatObject_AloeCroutonCharge.HandleChargeCountChanged
struct UFortCosmeticStatObject_AloeCroutonCharge_HandleChargeCountChanged_Params
{
public:
	float                                        OldChargeCount;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewChargeCount;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
