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

enum class ECollectionScriptingShareType : uint8
{
	Local                          = 0,
	Private                        = 1,
	Shared                         = 2,
	ECollectionScriptingShareType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
