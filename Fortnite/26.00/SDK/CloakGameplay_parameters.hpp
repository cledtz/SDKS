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
// Function CloakGameplay.FortGameCueNotifyLoop_Cloak.TickVisibilityLevel
struct UFortGameCueNotifyLoop_Cloak_TickVisibilityLevel_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierEnabled
struct UFortGameCueNotifyLoop_Cloak_SetModifierEnabled_Params
{
public:
	class FName                                  ModifierName;                                      // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewEnabled;                                       // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEF[0x2];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierCanBeEnabled
struct UFortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled_Params
{
public:
	class FName                                  ModifierName;                                      // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewCanBeEnabled;                                  // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF0[0x2];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function CloakGameplay.FortGameCueNotifyLoop_Cloak.GetCurrentModifierValues
struct UFortGameCueNotifyLoop_Cloak_GetCurrentModifierValues_Params
{
public:
	float                                        OutVisibilityMultiplier;                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutVisibilityAddition;                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ModifierName;                                      // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFE[0x3];                                     // Fixing Size Of Struct
};

}
}


