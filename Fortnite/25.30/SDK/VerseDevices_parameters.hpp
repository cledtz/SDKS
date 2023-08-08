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

// 0x1 (0x1 - 0x0)
// Function VerseDevices.ScriptDevice.SetEnabled
struct UScriptDevice_SetEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VerseDevices.ScriptDevice.HandlePreMinigameStartedSetup
struct UScriptDevice_HandlePreMinigameStartedSetup_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseDevices.ScriptDevice.HandleMinigameEndGame
struct UScriptDevice_HandleMinigameEndGame_Params
{
public:
	class UFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameEnd                  EndMethod;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                NextState;                                         // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36E7[0x6];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function VerseDevices.ScriptDevice.BP_SetVisibility
struct UScriptDevice_BP_SetVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
