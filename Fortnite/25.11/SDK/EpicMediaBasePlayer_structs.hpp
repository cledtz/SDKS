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

enum class EBaseMediaTerminalErrorReason : uint8
{
	Unknown                        = 0,
	Source                         = 1,
	Player                         = 2,
	UCP                            = 3,
	OpenTimeout                    = 4,
	EBaseMediaTerminalErrorReason_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
