#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAESGCMNetResult : uint8
{
	Unknown                        = 0,
	Success                        = 1,
	AESMissingIV                   = 2,
	AESMissingAuthTag              = 3,
	AESMissingPayload              = 4,
	AESDecryptionFailed            = 5,
	AESZeroLastByte                = 6,
	EAESGCMNetResult_MAX           = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
