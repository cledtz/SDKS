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
// Function EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAxis
struct UVerseUEInputComponentBase_ServerTriggerAxis_Params
{
public:
	class FName                                  AxisName;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAction
struct UVerseUEInputComponentBase_ServerTriggerAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputEvent;                                        // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C83[0x3];                                     // Fixing Size Of Struct
};

}
}


