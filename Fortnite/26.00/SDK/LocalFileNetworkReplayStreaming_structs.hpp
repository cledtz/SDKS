#pragma once

// Dumped with Dumper-7!


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
	EncryptBuffer                  = 7,
	CompressBuffer                 = 8,
	InvalidName                    = 9,
	FileWriter                     = 10,
	Unknown                        = 11,
	ELocalFileReplayResult_MAX     = 12,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


