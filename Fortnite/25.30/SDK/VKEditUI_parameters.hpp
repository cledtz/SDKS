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

// 0x2 (0x2 - 0x0)
// Function VKEditUI.VKConnectionIndicator.OnMinigameStateChanged
struct UVKConnectionIndicator_OnMinigameStateChanged_Params
{
public:
	enum class EFortMinigameState                MinigameState;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                PreviousMinigameState;                             // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VKEditUI.VKConnectionIndicator.HandleMemorySamplerProgressUpdated
struct UVKConnectionIndicator_HandleMemorySamplerProgressUpdated_Params
{
public:
	float                                        Progress;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VKEditUI.VKDebugMessagesBase.HandleGameStateInitialized
struct UVKDebugMessagesBase_HandleGameStateInitialized_Params
{
public:
	class UFortGameState*                        GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VKEditUI.VKDebugMessagesBase.BP_OnGameStateInitialized
struct UVKDebugMessagesBase_BP_OnGameStateInitialized_Params
{
public:
	class UFortGameState*                        GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
