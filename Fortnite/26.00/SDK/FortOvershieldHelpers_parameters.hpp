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
// Function FortOvershieldHelpers.FortOvershieldHelperComponent.ClearOvershieldListenerDelegates
struct UFortOvershieldHelperComponent_ClearOvershieldListenerDelegates_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function FortOvershieldHelpers.FortOvershieldHelperComponent.AssignOvershieldListenerDelegates
struct UFortOvershieldHelperComponent_AssignOvershieldListenerDelegates_Params
{
public:
	class UGameplayAbility*                      OwningAbility;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortOvershieldDelegateContainer      Delegates;                                         // 0x8(0x48)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}
}


