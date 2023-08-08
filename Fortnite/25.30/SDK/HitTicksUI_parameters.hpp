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

// 0x4 (0x4 - 0x0)
// Function HitTicksUI.FortUserWidget_HitTicks.UpdateTickMarkerOpacity
struct UFortUserWidget_HitTicks_UpdateTickMarkerOpacity_Params
{
public:
	float                                        NewOpacity;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HitTicksUI.FortUserWidget_HitTicks.OnShieldBreak
struct UFortUserWidget_HitTicks_OnShieldBreak_Params
{
public:
	bool                                         bInOverShield;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HitTicksUI.FortUserWidget_HitTicks.OnReticleSettingsChanged
struct UFortUserWidget_HitTicks_OnReticleSettingsChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HitTicksUI.FortUserWidget_HitTicks.OnPawnSet
struct UFortUserWidget_HitTicks_OnPawnSet_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function HitTicksUI.FortUserWidget_HitTicks.OnDisplayHitNotify
struct UFortUserWidget_HitTicks_OnDisplayHitNotify_Params
{
public:
	double                                       InDamage;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCritical;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInFatal;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInShield;                                         // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_514A[0x5];                                     // Fixing Size After Last Property
	class UActor*                                InPawn;                                            // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x30(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HitTicksUI.FortUserWidget_HitTicks.HudScaleChanged
struct UFortUserWidget_HitTicks_HudScaleChanged_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
