#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUdpMessageFormat : uint8
{
	None                           = 0,
	Json                           = 1,
	TaggedProperty                 = 2,
	CborPlatformEndianness         = 3,
	CborStandardEndianness         = 4,
	EUdpMessageFormat_MAX          = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct UdpMessaging.UdpMockMessage
struct FUdpMockMessage
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
