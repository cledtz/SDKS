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

// 0x30 (0x30 - 0x0)
// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Reset_LocalizableMessage
struct ULocalizableMessageLibrary_Reset_LocalizableMessage_Params
{
public:
	struct FLocalizableMessage                   Message;                                           // 0x0(0x30)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.IsEmpty_LocalizableMessage
struct ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Params
{
public:
	struct FLocalizableMessage                   Message;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79AE[0x7];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Conv_LocalizableMessageToText
struct ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocalizableMessage                   Message;                                           // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
