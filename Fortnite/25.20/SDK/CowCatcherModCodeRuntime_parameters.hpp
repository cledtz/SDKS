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

// 0x1 (0x1 - 0x0)
// Function CowCatcherModCodeRuntime.CowCatcherBarricadeBase.OnPlacementBlockedByPawnChanged
struct ACowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged_Params
{
public:
	bool                                         bBlockedByPawn;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CowCatcherModCodeRuntime.CowCatcherBarricadeBase.BeginCheckingForTouchingPawns
struct ACowCatcherBarricadeBase_BeginCheckingForTouchingPawns_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
