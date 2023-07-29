#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELocalFileReplayResult : uint8
{
	Success                        = 0,
	InvalidReplayInfo              = 1,
	StreamChunkIndexMismatch       = 2,
	DecompressBuffer               = 3,
	CompressionNotSupported        = 4,
	DecryptBuffer                  = 5,
	EncryptionNotSupported         = 6,
	Unknown                        = 7,
	ELocalFileReplayResult_MAX     = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
