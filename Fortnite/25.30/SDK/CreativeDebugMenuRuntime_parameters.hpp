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
// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnPlayerSpawned
struct UFortControllerComponent_CreativeDebugger_OnPlayerSpawned_Params
{
public:
	class UFortPlayerController*                 PC;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMutatorUpdated
struct UFortControllerComponent_CreativeDebugger_OnMutatorUpdated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMinigameStateChanged
struct UFortControllerComponent_CreativeDebugger_OnMinigameStateChanged_Params
{
public:
	class UFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                MinigameState;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36F7[0x7];                                     // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
