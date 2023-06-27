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

enum class EHttpReplayResult : uint8
{
	Success                        = 0,
	FailedJsonParse                = 1,
	DataUnavailable                = 2,
	InvalidHttpResponse            = 3,
	CompressionFailed              = 4,
	DecompressionFailed            = 5,
	InvalidPayload                 = 6,
	Unknown                        = 7,
	EHttpReplayResult_MAX          = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
