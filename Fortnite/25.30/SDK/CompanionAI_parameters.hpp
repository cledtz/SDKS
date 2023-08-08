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

// 0x10 (0x10 - 0x0)
// Function CompanionAI.PingComponentBase.HandleOnNPCUnconvertedEvent
struct UPingComponentBase_HandleOnNPCUnconvertedEvent_Params
{
public:
	class UFortPawn*                             UnconvertedFortPawn;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUnconvertReason                  UnconvertReason;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2527[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function CompanionAI.PingComponentBase.HandleOnNPCConvertedEvent
struct UPingComponentBase_HandleOnNPCConvertedEvent_Params
{
public:
	class UFortPawn*                             InstigatorPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             ConvertedPawn;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
