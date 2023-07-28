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

enum class ECosmeticsEventBindingFlags : uint8
{
	None                           = 0,
	ExecuteImmediately             = 2,
	ExecuteOnce                    = 4,
	ECosmeticsEventBindingFlags_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct CosmeticsFrameworkEvents.CosmeticsEventHandle
struct FCosmeticsEventHandle
{
public:
	uint8                                        Pad_27C9[0x1];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
