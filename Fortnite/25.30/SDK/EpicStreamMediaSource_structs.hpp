#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUCPTypes : uint8
{
	UCPAudio                       = 0,
	UCPVideo                       = 1,
	UCPBoth                        = 2,
	UCPNone                        = 3,
	UCPTypes_MAX                   = 4,
};

enum class EStreamMediaContainerType : uint8
{
	CONTAINER_DASH                 = 0,
	CONTAINER_HLS                  = 1,
	CONTAINER_MP4                  = 2,
	CONTAINER_UNKNOWN              = 3,
	CONTAINER_MAX                  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
