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

enum class EMediaPlateEventState : uint8
{
	Play                           = 0,
	Open                           = 1,
	Close                          = 2,
	Pause                          = 3,
	Reverse                        = 4,
	Forward                        = 5,
	Rewind                         = 6,
	MAX                            = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif