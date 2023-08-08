#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDSSReplayResult : uint8
{
	Success                        = 0,
	FailedJsonParse                = 1,
	DataUnavailable                = 2,
	InvalidHttpResponse            = 3,
	CompressionFailed              = 4,
	InvalidPayload                 = 5,
	Unknown                        = 6,
	EDSSReplayResult_MAX           = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
