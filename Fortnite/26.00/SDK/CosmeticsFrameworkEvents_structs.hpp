#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_13A1[0x1];                                     // Fixing Size Of Struct
};

}


