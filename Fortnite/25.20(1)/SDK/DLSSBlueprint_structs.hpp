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

enum class EUDLSSSupport : uint8
{
	Supported                      = 0,
	NotSupported                   = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate    = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	NotSupportedIncompatibleAPICaptureToolActive = 6,
	UDLSSSupport_MAX               = 7,
};

enum class EUDLSSMode : uint8
{
	Off                            = 0,
	Auto                           = 1,
	UltraQuality                   = 2,
	Quality                        = 3,
	Balanced                       = 4,
	Performance                    = 5,
	UltraPerformance               = 6,
	UDLSSMode_MAX                  = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
