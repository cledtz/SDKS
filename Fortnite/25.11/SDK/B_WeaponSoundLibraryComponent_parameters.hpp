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

// 0x10 (0x10 - 0x0)
// Function B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.OnSoundPlayed
struct UB_WeaponSoundLibraryComponent_C_OnSoundPlayed_Params
{
public:
	struct FGameplayTag                          InEventName;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A048[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       InComponent;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.OnSoundStopped
struct UB_WeaponSoundLibraryComponent_C_OnSoundStopped_Params
{
public:
	struct FGameplayTag                          InEventName;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A049[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       InComponent;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bStopped;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A04A[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_SetTriggerParameter_self_CastInput;       // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.TryHandleFireEvent
struct UB_WeaponSoundLibraryComponent_C_TryHandleFireEvent_Params
{
public:
	struct FGameplayTag                          Event;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A04B[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       Component;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           K2Node_DynamicCast_AsFort_Weapon;                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A04C[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetMagazineAmmoCount_ReturnValue;         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_SetIntParameter_self_CastInput;           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFiringRate_ReturnValue;                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A04D[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_SetFloatParameter_self_CastInput;         // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_B_ImplicitCast;                // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatParameter_InFloat_ImplicitCast;   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
