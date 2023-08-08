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
// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_ShieldListenerDelegates
struct UFortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_HealthListenerDelegates
struct UFortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_ShieldListenerDelegates
struct UFortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortHealthShieldRegen_ShieldDelegateContainer Delegates;                                         // 0x8(0x30)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_HealthListenerDelegates
struct UFortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortHealthShieldRegen_HealthDelegateContainer Delegates;                                         // 0x8(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AllowHealthShieldRegen
struct UFortHealthShieldRegenComponent_AllowHealthShieldRegen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
