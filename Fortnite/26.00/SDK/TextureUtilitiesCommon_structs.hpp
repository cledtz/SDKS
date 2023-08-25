#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETextureImportFloatingPointFormat : uint8
{
	HDR_F16                        = 0,
	HDRCompressed_BC6              = 1,
	HDR_F32_or_F16                 = 2,
	PreviousDefault                = 0,
	ETextureImportFloatingPointFormat_MAX = 3,
};

enum class ETextureImportPNGInfill : uint8
{
	Default                        = 0,
	Never                          = 1,
	OnlyOnBinaryTransparency       = 2,
	Always                         = 3,
	ETextureImportPNGInfill_MAX    = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


