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

// 0x8 (0x8 - 0x0)
// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnPlayerSpawned
struct UFortControllerComponent_CreativeDebugger_OnPlayerSpawned_Params
{
public:
	class AFortPlayerController*                 PC;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMutatorUpdated
struct UFortControllerComponent_CreativeDebugger_OnMutatorUpdated_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
