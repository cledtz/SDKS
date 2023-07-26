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

enum class EMeshTrackerVertexColorMode : uint8
{
	None                           = 0,
	Confidence                     = 1,
	Block                          = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct MRMesh.MRMeshConfiguration
struct FMRMeshConfiguration
{
public:
	uint8                                        Pad_207A[0x1];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
